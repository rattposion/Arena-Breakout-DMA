// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MovieScene
/// dependency: NiagaraCore
/// dependency: NiagaraShader

#pragma pack(push, 0x1)

/// Class /Script/Niagara.NiagaraDataInterface
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraTrack
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0078   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraTypeDefinitionHandle
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FNiagaraTypeDefinitionHandle
{ 
	int32_t                                            RegisteredTypeIndex;                                        // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVariableBase
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraVariableBase
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FNiagaraTypeDefinitionHandle                       TypeDefHandle;                                              // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVariable
/// Size: 0x0020 (32 bytes) (0x00000C - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraVariable : FNiagaraVariableBase
{ 
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<char>                                       VarData;                                                    // 0x0010   (0x0010)  
};

/// Class /Script/Niagara.MovieSceneNiagaraParameterTrack
/// Size: 0x00A8 (168 bytes) (0x000088 - 0x0000A8) align 8 MaxSize: 0x00A8
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{ 
public:
	FNiagaraVariable                                   Parameter;                                                  // 0x0088   (0x0020)  
};

/// Class /Script/Niagara.MovieSceneNiagaraBoolParameterTrack
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraColorParameterTrack
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraFloatParameterTrack
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraIntegerParameterTrack
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemSpawnSection
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{ 
public:
	SDK_UNDEFINED(4,1031) /* ENiagaraSystemSpawnSectionStartBehavior */ __um(SectionStartBehavior);                // 0x00E8   (0x0004)  
	SDK_UNDEFINED(4,1032) /* ENiagaraSystemSpawnSectionEvaluateBehavior */ __um(SectionEvaluateBehavior);          // 0x00EC   (0x0004)  
	SDK_UNDEFINED(4,1033) /* ENiagaraSystemSpawnSectionEndBehavior */ __um(SectionEndBehavior);                    // 0x00F0   (0x0004)  
	SDK_UNDEFINED(1,1034) /* ENiagaraAgeUpdateMode */  __um(AgeUpdateMode);                                        // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00F5   (0x0003)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemTrack
/// Size: 0x0090 (144 bytes) (0x000088 - 0x000090) align 8 MaxSize: 0x0090
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraVectorParameterTrack
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00A8   (0x0008)  MISSED
	int32_t                                            ChannelsUsed;                                               // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraActor
/// Size: 0x0328 (808 bytes) (0x000318 - 0x000328) align 8 MaxSize: 0x0328
class ANiagaraActor : public AActor
{ 
public:
	class UNiagaraComponent*                           NiagaraComponent;                                           // 0x0318   (0x0008)  
	bool                                               bDestroyOnSystemFinish : 1;                                 // 0x0320:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0321   (0x0007)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraActor.SetDestroyOnSystemFinish
	// void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);                                                        // [0x4b94bb8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraActor.OnNiagaraSystemFinished
	// void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);                                                // [0x208c1c8] Final|Native|Private 
};

/// Struct /Script/Niagara.NiagaraVariableWithOffset
/// Size: 0x0010 (16 bytes) (0x00000C - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraVariableWithOffset : FNiagaraVariableBase
{ 
	int32_t                                            Offset;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraParameterStore
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FNiagaraParameterStore
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	class UObject*                                     Owner;                                                      // 0x0008   (0x0008)  
	TArray<FNiagaraVariableWithOffset>                 SortedParameterOffsets;                                     // 0x0010   (0x0010)  
	TArray<char>                                       ParameterData;                                              // 0x0020   (0x0010)  
	TArray<class UNiagaraDataInterface*>               DataInterfaces;                                             // 0x0030   (0x0010)  
	TArray<class UObject*>                             UObjects;                                                   // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0050   (0x0028)  MISSED
};

/// Struct /Script/Niagara.NiagaraUserRedirectionParameterStore
/// Size: 0x00C8 (200 bytes) (0x000078 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore
{ 
	TMap<FNiagaraVariable, FNiagaraVariable>           UserParameterRedirects;                                     // 0x0078   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraMaterialOverride
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraMaterialOverride
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	uint32_t                                           MaterialSubIndex;                                           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UNiagaraRendererProperties*                  EmitterRendererProperty;                                    // 0x0010   (0x0008)  
};

/// Class /Script/Niagara.NiagaraComponent
/// Size: 0x06A0 (1696 bytes) (0x0004F0 - 0x0006A0) align 16 MaxSize: 0x06A0
class UNiagaraComponent : public UFXSystemComponent
{ 
public:
	class UNiagaraSystem*                              Asset;                                                      // 0x04F0   (0x0008)  
	SDK_UNDEFINED(1,1035) /* ENiagaraTickBehavior */   __um(TickBehavior);                                         // 0x04F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x04F9   (0x0007)  MISSED
	FNiagaraUserRedirectionParameterStore              OverrideParameters;                                         // 0x0500   (0x00C8)  
	bool                                               bForceSolo : 1;                                             // 0x05C8:0 (0x0001)  
	bool                                               bEnableGpuComputeDebug : 1;                                 // 0x05C8:1 (0x0001)  
	unsigned char                                      UnknownData01_3[0x2B];                                      // 0x05C9   (0x002B)  MISSED
	bool                                               bAutoDestroy : 1;                                           // 0x05F4:0 (0x0001)  
	bool                                               bRenderingEnabled : 1;                                      // 0x05F4:1 (0x0001)  
	bool                                               bAutoManageAttachment : 1;                                  // 0x05F4:2 (0x0001)  
	bool                                               bAutoAttachWeldSimulatedBodies : 1;                         // 0x05F4:3 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x05F5   (0x0003)  MISSED
	float                                              MaxTimeBeforeForceUpdateTransform;                          // 0x05F8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x05FC   (0x0004)  MISSED
	TArray<FNiagaraMaterialOverride>                   EmitterMaterials;                                           // 0x0600   (0x0010)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0610   (0x0008)  MISSED
	SDK_UNDEFINED(16,1036) /* FMulticastInlineDelegate */ __um(OnSystemFinished);                                  // 0x0618   (0x0010)  
	TWeakObjectPtr<class USceneComponent*>             AutoAttachParent;                                           // 0x0628   (0x0008)  
	FName                                              AutoAttachSocketName;                                       // 0x0630   (0x0008)  
	SDK_UNDEFINED(1,1037) /* EAttachmentRule */        __um(AutoAttachLocationRule);                               // 0x0638   (0x0001)  
	SDK_UNDEFINED(1,1038) /* EAttachmentRule */        __um(AutoAttachRotationRule);                               // 0x0639   (0x0001)  
	SDK_UNDEFINED(1,1039) /* EAttachmentRule */        __um(AutoAttachScaleRule);                                  // 0x063A   (0x0001)  
	unsigned char                                      UnknownData05_7[0x65];                                      // 0x063B   (0x0065)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec4
	// void SetVariableVec4(FName InVariableName, FVector4& InValue);                                                           // [0x4b973f4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec3
	// void SetVariableVec3(FName InVariableName, FVector InValue);                                                             // [0x4b972f8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec2
	// void SetVariableVec2(FName InVariableName, FVector2D InValue);                                                           // [0x4b97214] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableTextureRenderTarget
	// void SetVariableTextureRenderTarget(FName InVariableName, class UTextureRenderTarget* TextureRenderTarget);              // [0x4b9712c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableQuat
	// void SetVariableQuat(FName InVariableName, FQuat& InValue);                                                              // [0x4b97034] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableObject
	// void SetVariableObject(FName InVariableName, class UObject* Object);                                                     // [0x4b96ab4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableMaterial
	// void SetVariableMaterial(FName InVariableName, class UMaterialInterface* Object);                                        // [0x4b96f4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableLinearColor
	// void SetVariableLinearColor(FName InVariableName, FLinearColor& InValue);                                                // [0x4b96e54] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableInt
	// void SetVariableInt(FName InVariableName, int32_t InValue);                                                              // [0x4b96d6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableFloat
	// void SetVariableFloat(FName InVariableName, float InValue);                                                              // [0x4b96c84] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableBool
	// void SetVariableBool(FName InVariableName, bool InValue);                                                                // [0x4b96b9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableActor
	// void SetVariableActor(FName InVariableName, class AActor* Actor);                                                        // [0x4b96ab4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetTickBehavior
	// void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);                                                              // [0x4b96a18] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetSeekDelta
	// void SetSeekDelta(float InSeekDelta);                                                                                    // [0x4b9697c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetRenderingEnabled
	// void SetRenderingEnabled(bool bInRenderingEnabled);                                                                      // [0x4b968d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPreviewLODDistance
	// void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);                                    // [0x4b96800] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPaused
	// void SetPaused(bool bInPaused);                                                                                          // [0x4b96764] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec4
	// void SetNiagaraVariableVec4(FString InVariableName, FVector4& InValue);                                                  // [0x4b965fc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec3
	// void SetNiagaraVariableVec3(FString InVariableName, FVector InValue);                                                    // [0x4b964c4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec2
	// void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue);                                                  // [0x4b96398] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableQuat
	// void SetNiagaraVariableQuat(FString InVariableName, FQuat& InValue);                                                     // [0x4b96264] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableObject
	// void SetNiagaraVariableObject(FString InVariableName, class UObject* Object);                                            // [0x4b95f38] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
	// void SetNiagaraVariableLinearColor(FString InVariableName, FLinearColor& InValue);                                       // [0x4b9615c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableInt
	// void SetNiagaraVariableInt(FString InVariableName, int32_t InValue);                                                     // [0x1669140] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableFloat
	// void SetNiagaraVariableFloat(FString InVariableName, float InValue);                                                     // [0x157ce9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableBool
	// void SetNiagaraVariableBool(FString InVariableName, bool InValue);                                                       // [0x4b9603c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableActor
	// void SetNiagaraVariableActor(FString InVariableName, class AActor* Actor);                                               // [0x4b95f38] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetMaxSimTime
	// void SetMaxSimTime(float InMaxTime);                                                                                     // [0x4b95e9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetGpuComputeDebug
	// void SetGpuComputeDebug(bool bEnableDebug);                                                                              // [0x4b95de8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetForceSolo
	// void SetForceSolo(bool bInForceSolo);                                                                                    // [0x4b95d4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetDesiredAge
	// void SetDesiredAge(float InDesiredAge);                                                                                  // [0x4b95cb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetCanRenderWhileSeeking
	// void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);                                                            // [0x4b95c1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAutoDestroy
	// void SetAutoDestroy(bool bInAutoDestroy);                                                                                // [0x4b95b84] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAsset
	// void SetAsset(class UNiagaraSystem* InAsset);                                                                            // [0x229d4f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAllowScalability
	// void SetAllowScalability(bool bAllow);                                                                                   // [0x4b95ad8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAgeUpdateMode
	// void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);                                                            // [0x4b95a44] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SeekToDesiredAge
	// void SeekToDesiredAge(float InDesiredAge);                                                                               // [0x4b959a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ResetSystem
	// void ResetSystem();                                                                                                      // [0x4b95984] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ReinitializeSystem
	// void ReinitializeSystem();                                                                                               // [0x1385640] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.IsPaused
	// bool IsPaused();                                                                                                         // [0x4b9595c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetTickBehavior
	// ENiagaraTickBehavior GetTickBehavior();                                                                                  // [0x4b95944] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetSeekDelta
	// float GetSeekDelta();                                                                                                    // [0x4b9592c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
	// bool GetPreviewLODDistanceEnabled();                                                                                     // [0x21793e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistance
	// int32_t GetPreviewLODDistance();                                                                                         // [0x4b95918] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
	// TArray<FVector> GetNiagaraParticleValueVec3_DebugOnly(FString InEmitterName, FString InValueName);                       // [0x4b956b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
	// TArray<float> GetNiagaraParticleValues_DebugOnly(FString InEmitterName, FString InValueName);                            // [0x4b957e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
	// TArray<FVector> GetNiagaraParticlePositions_DebugOnly(FString InEmitterName);                                            // [0x4b954ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetMaxSimTime
	// float GetMaxSimTime();                                                                                                   // [0x4b95494] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetForceSolo
	// bool GetForceSolo();                                                                                                     // [0x4b95478] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDesiredAge
	// float GetDesiredAge();                                                                                                   // [0x4b95460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDataInterface
	// class UNiagaraDataInterface* GetDataInterface(FString Name);                                                             // [0x4b95354] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetAsset
	// class UNiagaraSystem* GetAsset();                                                                                        // [0x4b9533c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetAgeUpdateMode
	// ENiagaraAgeUpdateMode GetAgeUpdateMode();                                                                                // [0x4b95324] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulationByTime
	// void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);                                                // [0x4b9521c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulation
	// void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds);                                                       // [0x4b950b0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Niagara.NCPoolElement
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNCPoolElement
{ 
	class UNiagaraComponent*                           Component;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NCPool
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FNCPool
{ 
	TArray<FNCPoolElement>                             FreeElements;                                               // 0x0000   (0x0010)  
	TArray<class UNiagaraComponent*>                   InUseComponents_Auto;                                       // 0x0010   (0x0010)  
	TArray<class UNiagaraComponent*>                   InUseComponents_Manual;                                     // 0x0020   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraComponentPool
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UNiagaraComponentPool : public UObject
{ 
public:
	TMap<class UNiagaraSystem*, FNCPool>               WorldParticleSystemPools;                                   // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NiagaraDeviceProfileStateEntry
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraDeviceProfileStateEntry
{ 
	FName                                              ProfileName;                                                // 0x0000   (0x0008)  
	uint32_t                                           QualityLevelMask;                                           // 0x0008   (0x0004)  
	uint32_t                                           SetQualityLevelMask;                                        // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraPlatformSetCVarCondition
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraPlatformSetCVarCondition
{ 
	FName                                              CVarName;                                                   // 0x0000   (0x0008)  
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            MinInt;                                                     // 0x000C   (0x0004)  
	int32_t                                            MaxInt;                                                     // 0x0010   (0x0004)  
	float                                              MinFloat;                                                   // 0x0014   (0x0004)  
	float                                              MaxFloat;                                                   // 0x0018   (0x0004)  
	bool                                               bUseMinInt : 1;                                             // 0x001C:0 (0x0001)  
	bool                                               bUseMaxInt : 1;                                             // 0x001C:1 (0x0001)  
	bool                                               bUseMinFloat : 1;                                           // 0x001C:2 (0x0001)  
	bool                                               bUseMaxFloat : 1;                                           // 0x001C:3 (0x0001)  
	unsigned char                                      UnknownData01_7[0xB];                                       // 0x001D   (0x000B)  MISSED
};

/// Struct /Script/Niagara.NiagaraPlatformSet
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FNiagaraPlatformSet
{ 
	int32_t                                            QualityLevelMask;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FNiagaraDeviceProfileStateEntry>            DeviceProfileStates;                                        // 0x0008   (0x0010)  
	TArray<FNiagaraPlatformSetCVarCondition>           CVarConditions;                                             // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraRendererProperties
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UNiagaraRendererProperties : public UNiagaraMergeable
{ 
public:
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0028   (0x0030)  
	int32_t                                            SortOrderHint;                                              // 0x0058   (0x0004)  
	bool                                               bIsEnabled;                                                 // 0x005C   (0x0001)  
	bool                                               bMotionBlurEnabled;                                         // 0x005D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x22];                                      // 0x005E   (0x0022)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableAttributeBinding
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FNiagaraVariableAttributeBinding
{ 
	FNiagaraVariableBase                               ParamMapVariable;                                           // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraVariable                                   DataSetVariable;                                            // 0x0010   (0x0020)  
	FNiagaraVariable                                   RootVariable;                                               // 0x0030   (0x0020)  
	SDK_UNDEFINED(1,1040) /* TEnumAsByte<ENiagaraBindingSource> */ __um(BindingSourceMode);                        // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0051   (0x0003)  MISSED
	bool                                               bBindingExistsOnSource : 1;                                 // 0x0054:0 (0x0001)  
	bool                                               bIsCachedParticleValue : 1;                                 // 0x0054:1 (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraTypeDefinition
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraTypeDefinition
{ 
	class UObject*                                     ClassStructOrEnum;                                          // 0x0000   (0x0008)  
	uint16_t                                           UnderlyingType;                                             // 0x0008   (0x0002)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/Niagara.NiagaraComponentPropertyBinding
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FNiagaraComponentPropertyBinding
{ 
	FNiagaraVariableAttributeBinding                   AttributeBinding;                                           // 0x0000   (0x0058)  
	FName                                              PropertyName;                                               // 0x0058   (0x0008)  
	FNiagaraTypeDefinition                             PropertyType;                                               // 0x0060   (0x0010)  
	FName                                              MetadataSetterName;                                         // 0x0070   (0x0008)  
	FNiagaraVariable                                   WritableValue;                                              // 0x0078   (0x0020)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraComponentRendererProperties
/// Size: 0x0160 (352 bytes) (0x000080 - 0x000160) align 8 MaxSize: 0x0160
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UClass*                                      ComponentType;                                              // 0x0080   (0x0008)  
	uint32_t                                           ComponentCountLimit;                                        // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   EnabledBinding;                                             // 0x0090   (0x0058)  
	bool                                               bAssignComponentsOnParticleID;                              // 0x00E8   (0x0001)  
	bool                                               bOnlyCreateComponentsOnParticleSpawn;                       // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00EA   (0x0006)  MISSED
	class USceneComponent*                             TemplateComponent;                                          // 0x00F0   (0x0008)  
	TArray<FNiagaraComponentPropertyBinding>           PropertyBindings;                                           // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData02_7[0x58];                                      // 0x0108   (0x0058)  MISSED
};

/// Class /Script/Niagara.NiagaraComponentSettings
/// Size: 0x0118 (280 bytes) (0x000028 - 0x000118) align 8 MaxSize: 0x0118
class UNiagaraComponentSettings : public UObject
{ 
public:
	SDK_UNDEFINED(80,1041) /* TSet<FName> */           __um(SuppressActivationList);                               // 0x0028   (0x0050)  
	SDK_UNDEFINED(80,1042) /* TSet<FName> */           __um(ForceAutoPooolingList);                                // 0x0078   (0x0050)  
	SDK_UNDEFINED(80,1043) /* TSet<FNiagaraEmitterNameSettingsRef> */ __um(SuppressEmitterList);                   // 0x00C8   (0x0050)  
};

/// Class /Script/Niagara.NiagaraConvertInPlaceUtilityBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraConvertInPlaceUtilityBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterface2DArrayTexture
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{ 
public:
	class UTexture2DArray*                             Texture;                                                    // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArray
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UNiagaraDataInterfaceArray : public UNiagaraDataInterface
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	int32_t                                            MaxElements;                                                // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0044   (0x000C)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<float>                                      FloatData;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat2
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector2D>                                  FloatData;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat3
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector>                                    FloatData;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat4
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector4>                                   FloatData;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayColor
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FLinearColor>                               ColorData;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayQuat
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FQuat>                                      QuatData;                                                   // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
	// void SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector4>& ArrayData);    // [0x4b99788] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
	// void SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector2D>& ArrayData);  // [0x4b995fc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
	// void SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector>& ArrayData);      // [0x4b998c8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
	// void SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FQuat>& ArrayData);          // [0x4b99470] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
	// void SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<int32_t>& ArrayData);       // [0x4b992e4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
	// void SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<float>& ArrayData);         // [0x4b990cc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
	// void SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FLinearColor>& ArrayData);  // [0x4b98f40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
	// void SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<bool>& ArrayData);           // [0x4b98db4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
	// TArray<FVector4> GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                     // [0x4b982f4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
	// TArray<FVector2D> GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                   // [0x4b981b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
	// TArray<FVector> GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                       // [0x4b98438] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
	// TArray<FQuat> GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                           // [0x4b98064] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
	// TArray<int32_t> GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                        // [0x4b97f20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
	// TArray<float> GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                          // [0x4b97ddc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
	// TArray<FLinearColor> GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                   // [0x4b97c98] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
	// TArray<bool> GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                            // [0x4b97b54] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayInt32
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<int32_t>                                    IntData;                                                    // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayBool
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<bool>                                       BoolData;                                                   // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSubmix
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{ 
public:
	class USoundSubmix*                                Submix;                                                     // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioOscilloscope
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{ 
public:
	class USoundSubmix*                                Submix;                                                     // 0x0038   (0x0008)  
	int32_t                                            Resolution;                                                 // 0x0040   (0x0004)  
	float                                              ScopeInMilliseconds;                                        // 0x0044   (0x0004)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayer
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{ 
public:
	class USoundBase*                                  SoundToPlay;                                                // 0x0038   (0x0008)  
	class USoundAttenuation*                           Attenuation;                                                // 0x0040   (0x0008)  
	class USoundConcurrency*                           Concurrency;                                                // 0x0048   (0x0008)  
	TArray<FName>                                      ParameterNames;                                             // 0x0050   (0x0010)  
	bool                                               bLimitPlaysPerTick;                                         // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            MaxPlaysPerTick;                                            // 0x0064   (0x0004)  
	bool                                               bStopWhenComponentIsDestroyed;                              // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSpectrum
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{ 
public:
	int32_t                                            Resolution;                                                 // 0x0040   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x0044   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0048   (0x0004)  
	float                                              NoiseFloorDb;                                               // 0x004C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceCamera
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{ 
public:
	int32_t                                            PlayerControllerIndex;                                      // 0x0038   (0x0004)  
	bool                                               bRequireCurrentFrameData;                                   // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCollisionQuery
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurveBase
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{ 
public:
	TArray<float>                                      ShaderLUT;                                                  // 0x0038   (0x0010)  
	float                                              LUTMinTime;                                                 // 0x0048   (0x0004)  
	float                                              LUTMaxTime;                                                 // 0x004C   (0x0004)  
	float                                              LUTInvTimeRange;                                            // 0x0050   (0x0004)  
	float                                              LUTNumSamplesMinusOne;                                      // 0x0054   (0x0004)  
	bool                                               bUseLUT : 1;                                                // 0x0058:0 (0x0001)  
	bool                                               bExposeCurve : 1;                                           // 0x0058:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	FName                                              ExposedName;                                                // 0x005C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	class UTexture2D*                                  ExposedTexture;                                             // 0x0068   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceColorCurve
/// Size: 0x0270 (624 bytes) (0x000070 - 0x000270) align 8 MaxSize: 0x0270
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         RedCurve;                                                   // 0x0070   (0x0080)  
	FRichCurve                                         GreenCurve;                                                 // 0x00F0   (0x0080)  
	FRichCurve                                         BlueCurve;                                                  // 0x0170   (0x0080)  
	FRichCurve                                         AlphaCurve;                                                 // 0x01F0   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurlNoise
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{ 
public:
	uint32_t                                           Seed;                                                       // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x003C   (0x000C)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurve
/// Size: 0x00F0 (240 bytes) (0x000070 - 0x0000F0) align 8 MaxSize: 0x00F0
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         Curve;                                                      // 0x0070   (0x0080)  
};

/// Class /Script/Niagara.NiagaraParticleCallbackHandler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraParticleCallbackHandler : public UInterface
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
	// void ReceiveParticleData(TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem);                         // [0x4b98c54] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/Niagara.NiagaraUserParameterBinding
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraUserParameterBinding
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0000   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceExport
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{ 
public:
	FNiagaraUserParameterBinding                       CallbackHandlerParameter;                                   // 0x0038   (0x0020)  
	SDK_UNDEFINED(1,1044) /* ENDIExport_GPUAllocationMode */ __um(GPUAllocationMode);                              // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0059   (0x0003)  MISSED
	int32_t                                            GPUAllocationFixedSize;                                     // 0x005C   (0x0004)  
	float                                              GPUAllocationPerParticleSize;                               // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGBuffer
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceRWBase
/// Size: 0x00D8 (216 bytes) (0x000038 - 0x0000D8) align 8 MaxSize: 0x00D8
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{ 
public:
	SDK_UNDEFINED(80,1045) /* TSet<int32_t> */         __um(OutputShaderStages);                                   // 0x0038   (0x0050)  
	SDK_UNDEFINED(80,1046) /* TSet<int32_t> */         __um(IterationShaderStages);                                // 0x0088   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2D
/// Size: 0x00F8 (248 bytes) (0x0000D8 - 0x0000F8) align 8 MaxSize: 0x00F8
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{ 
public:
	int32_t                                            NumCellsX;                                                  // 0x00D8   (0x0004)  
	int32_t                                            NumCellsY;                                                  // 0x00DC   (0x0004)  
	int32_t                                            NumCellsMaxAxis;                                            // 0x00E0   (0x0004)  
	int32_t                                            NumAttributes;                                              // 0x00E4   (0x0004)  
	bool                                               SetGridFromMaxAxis;                                         // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	FVector2D                                          WorldBBoxSize;                                              // 0x00EC   (0x0008)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollection
/// Size: 0x01C0 (448 bytes) (0x0000F8 - 0x0001C0) align 8 MaxSize: 0x01C0
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{ 
public:
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00F8   (0x0020)  
	SDK_UNDEFINED(1,1047) /* ENiagaraGpuBufferFormat */ __um(OverrideBufferFormat);                                // 0x0118   (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x0119:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x56];                                      // 0x011A   (0x0056)  MISSED
	TMap<uint64_t, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                                       // 0x0170   (0x0050)  


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
	// void GetTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                                 // [0x4b98958] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
	// void GetRawTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                              // [0x4b9865c] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
	// bool FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t AttributeIndex);      // [0x4b97a10] Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
	// bool FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY); // [0x4b97658] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollectionReader
/// Size: 0x0168 (360 bytes) (0x0000F8 - 0x000168) align 8 MaxSize: 0x0168
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2D
{ 
public:
	FString                                            EmitterName;                                                // 0x00F8   (0x0010)  
	FString                                            DIName;                                                     // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0118   (0x0050)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3D
/// Size: 0x0100 (256 bytes) (0x0000D8 - 0x000100) align 8 MaxSize: 0x0100
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         NumCells;                                                   // 0x00D8   (0x000C)  
	float                                              CellSize;                                                   // 0x00E4   (0x0004)  
	int32_t                                            NumCellsMaxAxis;                                            // 0x00E8   (0x0004)  
	SDK_UNDEFINED(4,1048) /* ESetResolutionMethod */   __um(SetResolutionMethod);                                  // 0x00EC   (0x0004)  
	FVector                                            WorldBBoxSize;                                              // 0x00F0   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollection
/// Size: 0x0180 (384 bytes) (0x000100 - 0x000180) align 8 MaxSize: 0x0180
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{ 
public:
	int32_t                                            NumAttributes;                                              // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0104   (0x0004)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0108   (0x0020)  
	SDK_UNDEFINED(1,1049) /* ENiagaraGpuBufferFormat */ __um(BufferFormat);                                        // 0x0128   (0x0001)  
	unsigned char                                      UnknownData01_7[0x57];                                      // 0x0129   (0x0057)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
	// void GetTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);                 // [0x4b98aa8] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
	// void GetRawTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);              // [0x4b987ac] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
	// bool FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t AttributeIndex);          // [0x4b97a10] Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
	// bool FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ); // [0x4b97800] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceLandscape
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{ 
public:
	class AActor*                                      SourceLandscape;                                            // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceNeighborGrid3D
/// Size: 0x0108 (264 bytes) (0x000100 - 0x000108) align 8 MaxSize: 0x0108
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{ 
public:
	uint32_t                                           MaxNeighborsPerCell;                                        // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceOcclusion
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceParticleRead
/// Size: 0x00E8 (232 bytes) (0x0000D8 - 0x0000E8) align 8 MaxSize: 0x00E8
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{ 
public:
	FString                                            EmitterName;                                                // 0x00D8   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfacePlatformSet
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{ 
public:
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0038   (0x0030)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2D
/// Size: 0x0158 (344 bytes) (0x0000D8 - 0x000158) align 8 MaxSize: 0x0158
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntPoint                                          Size;                                                       // 0x00D8   (0x0008)  
	SDK_UNDEFINED(1,1050) /* TEnumAsByte<ETextureRenderTargetFormat> */ __um(OverrideRenderTargetFormat);          // 0x00E0   (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x00E1:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00E2   (0x0006)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00E8   (0x0020)  
	TMap<uint64_t, class UTextureRenderTarget2D*>      ManagedRenderTargets;                                       // 0x0108   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2DArray
/// Size: 0x0158 (344 bytes) (0x0000D8 - 0x000158) align 8 MaxSize: 0x0158
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         Size;                                                       // 0x00D8   (0x000C)  
	SDK_UNDEFINED(1,1051) /* TEnumAsByte<ETextureRenderTargetFormat> */ __um(OverrideRenderTargetFormat);          // 0x00E4   (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x00E5:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00E6   (0x0002)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00E8   (0x0020)  
	TMap<uint64_t, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                                       // 0x0108   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetVolume
/// Size: 0x0158 (344 bytes) (0x0000D8 - 0x000158) align 8 MaxSize: 0x0158
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         Size;                                                       // 0x00D8   (0x000C)  
	SDK_UNDEFINED(1,1052) /* TEnumAsByte<ETextureRenderTargetFormat> */ __um(OverrideRenderTargetFormat);          // 0x00E4   (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x00E5:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00E6   (0x0002)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00E8   (0x0020)  
	TMap<uint64_t, class UTextureRenderTargetVolume*>  ManagedRenderTargets;                                       // 0x0108   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceSimpleCounter
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceSkeletalMesh
/// Size: 0x00C0 (192 bytes) (0x000038 - 0x0000C0) align 8 MaxSize: 0x00C0
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{ 
public:
	SDK_UNDEFINED(1,1053) /* ENDISkeletalMesh_SourceMode */ __um(SourceMode);                                      // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	class AActor*                                      Source;                                                     // 0x0040   (0x0008)  
	FNiagaraUserParameterBinding                       MeshUserParameter;                                          // 0x0048   (0x0020)  
	class USkeletalMeshComponent*                      SourceComponent;                                            // 0x0068   (0x0008)  
	SDK_UNDEFINED(1,1054) /* ENDISkeletalMesh_SkinningMode */ __um(SkinningMode);                                  // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
	TArray<FName>                                      SamplingRegions;                                            // 0x0078   (0x0010)  
	int32_t                                            WholeMeshLOD;                                               // 0x0088   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	TArray<FName>                                      FilteredBones;                                              // 0x0090   (0x0010)  
	TArray<FName>                                      FilteredSockets;                                            // 0x00A0   (0x0010)  
	FName                                              ExcludeBoneName;                                            // 0x00B0   (0x0008)  
	bool                                               bExcludeBone : 1;                                           // 0x00B8:0 (0x0001)  
	bool                                               bRequireCurrentFrameData;                                   // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData03_7[0x6];                                       // 0x00BA   (0x0006)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceSpline
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{ 
public:
	class AActor*                                      Source;                                                     // 0x0038   (0x0008)  
};

/// Struct /Script/Niagara.NDIStaticMeshSectionFilter
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNDIStaticMeshSectionFilter
{ 
	TArray<int32_t>                                    AllowedMaterialSlots;                                       // 0x0000   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceStaticMesh
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align 8 MaxSize: 0x0088
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{ 
public:
	SDK_UNDEFINED(1,1055) /* ENDIStaticMesh_SourceMode */ __um(SourceMode);                                        // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	class UStaticMesh*                                 DefaultMesh;                                                // 0x0040   (0x0008)  
	class AActor*                                      Source;                                                     // 0x0048   (0x0008)  
	class UStaticMeshComponent*                        SourceComponent;                                            // 0x0050   (0x0008)  
	FNDIStaticMeshSectionFilter                        SectionFilter;                                              // 0x0058   (0x0010)  
	bool                                               bUsePhysicsBodyVelocity;                                    // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0069   (0x0007)  MISSED
	TArray<FName>                                      FilteredSockets;                                            // 0x0070   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceTexture
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{ 
public:
	class UTexture*                                    Texture;                                                    // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector2DCurve
/// Size: 0x0170 (368 bytes) (0x000070 - 0x000170) align 8 MaxSize: 0x0170
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0070   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F0   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector4Curve
/// Size: 0x0270 (624 bytes) (0x000070 - 0x000270) align 8 MaxSize: 0x0270
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0070   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F0   (0x0080)  
	FRichCurve                                         ZCurve;                                                     // 0x0170   (0x0080)  
	FRichCurve                                         WCurve;                                                     // 0x01F0   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorCurve
/// Size: 0x01F0 (496 bytes) (0x000070 - 0x0001F0) align 8 MaxSize: 0x01F0
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0070   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F0   (0x0080)  
	FRichCurve                                         ZCurve;                                                     // 0x0170   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorField
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{ 
public:
	class UVectorField*                                Field;                                                      // 0x0038   (0x0008)  
	bool                                               bTileX;                                                     // 0x0040   (0x0001)  
	bool                                               bTileY;                                                     // 0x0041   (0x0001)  
	bool                                               bTileZ;                                                     // 0x0042   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x0043   (0x0005)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceVolumeTexture
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{ 
public:
	class UVolumeTexture*                              Texture;                                                    // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraEditorDataBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraEditorDataBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraSignificanceHandler : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerDistance
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerAge
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{ 
public:
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettings
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FNiagaraSystemScalabilitySettings
{ 
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0000   (0x0030)  
	bool                                               bCullByDistance : 1;                                        // 0x0030:0 (0x0001)  
	bool                                               bCullMaxInstanceCount : 1;                                  // 0x0030:1 (0x0001)  
	bool                                               bCullPerSystemMaxInstanceCount : 1;                         // 0x0030:2 (0x0001)  
	bool                                               bCullByMaxTimeWithoutRender : 1;                            // 0x0030:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              MaxDistance;                                                // 0x0034   (0x0004)  
	int32_t                                            MaxInstances;                                               // 0x0038   (0x0004)  
	int32_t                                            MaxSystemInstances;                                         // 0x003C   (0x0004)  
	float                                              MaxTimeWithoutRender;                                       // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettingsArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraSystemScalabilitySettingsArray
{ 
	TArray<FNiagaraSystemScalabilitySettings>          Settings;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettings
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FNiagaraEmitterScalabilitySettings
{ 
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0000   (0x0030)  
	bool                                               bScaleSpawnCount : 1;                                       // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              SpawnCountScale;                                            // 0x0034   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettingsArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraEmitterScalabilitySettingsArray
{ 
	TArray<FNiagaraEmitterScalabilitySettings>         Settings;                                                   // 0x0000   (0x0010)  
};

/// Class /Script/Niagara.NiagaraEffectType
/// Size: 0x0110 (272 bytes) (0x000028 - 0x000110) align 8 MaxSize: 0x0110
class UNiagaraEffectType : public UObject
{ 
public:
	SDK_UNDEFINED(4,1056) /* ENiagaraScalabilityUpdateFrequency */ __um(UpdateFrequency);                          // 0x0028   (0x0004)  
	SDK_UNDEFINED(4,1057) /* ENiagaraCullReaction */   __um(CullReaction);                                         // 0x002C   (0x0004)  
	class UNiagaraSignificanceHandler*                 SignificanceHandler;                                        // 0x0030   (0x0008)  
	TArray<FNiagaraSystemScalabilitySettings>          DetailLevelScalabilitySettings;                             // 0x0038   (0x0010)  
	FNiagaraSystemScalabilitySettingsArray             SystemScalabilitySettings;                                  // 0x0048   (0x0010)  
	FNiagaraEmitterScalabilitySettingsArray            EmitterScalabilitySettings;                                 // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_7[0xA8];                                      // 0x0068   (0x00A8)  MISSED
};

/// Struct /Script/Niagara.NiagaraEventReceiverProperties
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FNiagaraEventReceiverProperties
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              SourceEventGenerator;                                       // 0x0008   (0x0008)  
	FName                                              SourceEmitter;                                              // 0x0010   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraTypeLayoutInfo
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FNiagaraTypeLayoutInfo
{ 
	TArray<uint32_t>                                   FloatComponentByteOffsets;                                  // 0x0000   (0x0010)  
	TArray<uint32_t>                                   FloatComponentRegisterOffsets;                              // 0x0010   (0x0010)  
	TArray<uint32_t>                                   Int32ComponentByteOffsets;                                  // 0x0020   (0x0010)  
	TArray<uint32_t>                                   Int32ComponentRegisterOffsets;                              // 0x0030   (0x0010)  
	TArray<uint32_t>                                   HalfComponentByteOffsets;                                   // 0x0040   (0x0010)  
	TArray<uint32_t>                                   HalfComponentRegisterOffsets;                               // 0x0050   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraVariableLayoutInfo
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FNiagaraVariableLayoutInfo
{ 
	uint32_t                                           FloatComponentStart;                                        // 0x0000   (0x0004)  
	uint32_t                                           Int32ComponentStart;                                        // 0x0004   (0x0004)  
	uint32_t                                           HalfComponentStart;                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraTypeLayoutInfo                             LayoutInfo;                                                 // 0x0010   (0x0060)  
};

/// Struct /Script/Niagara.NiagaraDataSetID
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraDataSetID
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	SDK_UNDEFINED(1,1058) /* ENiagaraDataSetType */    __um(Type);                                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraDataSetCompiledData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FNiagaraDataSetCompiledData
{ 
	TArray<FNiagaraVariable>                           Variables;                                                  // 0x0000   (0x0010)  
	TArray<FNiagaraVariableLayoutInfo>                 VariableLayouts;                                            // 0x0010   (0x0010)  
	FNiagaraDataSetID                                  ID;                                                         // 0x0020   (0x000C)  
	uint32_t                                           TotalFloatComponents;                                       // 0x002C   (0x0004)  
	uint32_t                                           TotalInt32Components;                                       // 0x0030   (0x0004)  
	uint32_t                                           TotalHalfComponents;                                        // 0x0034   (0x0004)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	SDK_UNDEFINED(1,1059) /* ENiagaraSimTarget */      __um(SimTarget);                                            // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraEventGeneratorProperties
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FNiagaraEventGeneratorProperties
{ 
	int32_t                                            MaxEventsPerFrame;                                          // 0x0000   (0x0004)  
	FName                                              ID;                                                         // 0x0004   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x0010   (0x0040)  
};

/// Struct /Script/Niagara.NiagaraEmitterScriptProperties
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraEmitterScriptProperties
{ 
	class UNiagaraScript*                              Script;                                                     // 0x0000   (0x0008)  
	TArray<FNiagaraEventReceiverProperties>            EventReceivers;                                             // 0x0008   (0x0010)  
	TArray<FNiagaraEventGeneratorProperties>           EventGenerators;                                            // 0x0018   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDetailsLevelScaleOverrides
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FNiagaraDetailsLevelScaleOverrides
{ 
	float                                              Low;                                                        // 0x0000   (0x0004)  
	float                                              Medium;                                                     // 0x0004   (0x0004)  
	float                                              High;                                                       // 0x0008   (0x0004)  
	float                                              Epic;                                                       // 0x000C   (0x0004)  
	float                                              Cine;                                                       // 0x0010   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverride
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings
{ 
	bool                                               bOverrideSpawnCountScale : 1;                               // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverrides
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraEmitterScalabilityOverrides
{ 
	TArray<FNiagaraEmitterScalabilityOverride>         Overrides;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEventScriptProperties
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties
{ 
	SDK_UNDEFINED(1,1060) /* EScriptExecutionMode */   __um(ExecutionMode);                                        // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	uint32_t                                           SpawnNumber;                                                // 0x002C   (0x0004)  
	uint32_t                                           MaxEventsPerFrame;                                          // 0x0030   (0x0004)  
	FGuid                                              SourceEmitterID;                                            // 0x0034   (0x0010)  
	FName                                              SourceEventName;                                            // 0x0044   (0x0008)  
	bool                                               bRandomSpawnNumber;                                         // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	uint32_t                                           MinSpawnNumber;                                             // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraEmitter
/// Size: 0x02A0 (672 bytes) (0x000028 - 0x0002A0) align 8 MaxSize: 0x02A0
class UNiagaraEmitter : public UObject
{ 
public:
	bool                                               bLocalSpace;                                                // 0x0028   (0x0001)  
	bool                                               bDeterminism;                                               // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            RandomSeed;                                                 // 0x002C   (0x0004)  
	SDK_UNDEFINED(1,1061) /* EParticleAllocationMode */ __um(AllocationMode);                                      // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            PreAllocationCount;                                         // 0x0034   (0x0004)  
	FNiagaraEmitterScriptProperties                    UpdateScriptProps;                                          // 0x0038   (0x0028)  
	FNiagaraEmitterScriptProperties                    SpawnScriptProps;                                           // 0x0060   (0x0028)  
	SDK_UNDEFINED(1,1062) /* ENiagaraSimTarget */      __um(SimTarget);                                            // 0x0088   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	FBox                                               FixedBounds;                                                // 0x008C   (0x001C)  
	int32_t                                            MinDetailLevel;                                             // 0x00A8   (0x0004)  
	int32_t                                            MaxDetailLevel;                                             // 0x00AC   (0x0004)  
	FNiagaraDetailsLevelScaleOverrides                 GlobalSpawnCountScaleOverrides;                             // 0x00B0   (0x0014)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	FNiagaraPlatformSet                                Platforms;                                                  // 0x00C8   (0x0030)  
	FNiagaraEmitterScalabilityOverrides                ScalabilityOverrides;                                       // 0x00F8   (0x0010)  
	bool                                               bInterpolatedSpawning : 1;                                  // 0x0108:0 (0x0001)  
	bool                                               bFixedBounds : 1;                                           // 0x0108:1 (0x0001)  
	bool                                               bUseMinDetailLevel : 1;                                     // 0x0108:2 (0x0001)  
	bool                                               bUseMaxDetailLevel : 1;                                     // 0x0108:3 (0x0001)  
	bool                                               bOverrideGlobalSpawnCountScale : 1;                         // 0x0108:4 (0x0001)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x0108:5 (0x0001)  
	bool                                               bCombineEventSpawn : 1;                                     // 0x0108:6 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0109   (0x0003)  MISSED
	float                                              MaxDeltaTimePerTick;                                        // 0x010C   (0x0004)  
	uint32_t                                           DefaultShaderStageIndex;                                    // 0x0110   (0x0004)  
	uint32_t                                           MaxUpdateIterations;                                        // 0x0114   (0x0004)  
	SDK_UNDEFINED(80,1063) /* TSet<uint32_t> */        __um(SpawnStages);                                          // 0x0118   (0x0050)  
	bool                                               bSimulationStagesEnabled : 1;                               // 0x0168:0 (0x0001)  
	bool                                               bDeprecatedShaderStagesEnabled : 1;                         // 0x0168:1 (0x0001)  
	bool                                               bLimitDeltaTime : 1;                                        // 0x0168:2 (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0169   (0x0007)  MISSED
	FString                                            UniqueEmitterName;                                          // 0x0170   (0x0010)  
	TArray<class UNiagaraRendererProperties*>          RendererProperties;                                         // 0x0180   (0x0010)  
	TArray<FNiagaraEventScriptProperties>              EventHandlerScriptProps;                                    // 0x0190   (0x0010)  
	TArray<class UNiagaraSimulationStageBase*>         SimulationStages;                                           // 0x01A0   (0x0010)  
	class UNiagaraScript*                              GPUComputeScript;                                           // 0x01B0   (0x0008)  
	TArray<FName>                                      SharedEventGeneratorIds;                                    // 0x01B8   (0x0010)  
	unsigned char                                      UnknownData06_7[0xD8];                                      // 0x01C8   (0x00D8)  MISSED
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraEventReceiverEmitterAction : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{ 
public:
	uint32_t                                           NumParticles;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
	// class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // [0x1625860] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
	// class UNiagaraComponent* SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // [0x4b9cb14] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
	// void SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UVolumeTexture* Texture); // [0x4b9c9dc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetTextureObject
	// void SetTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture* Texture);            // [0x4b9c528] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
	// void SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, FString OverrideName, TArray<FName>& SamplingRegions); // [0x4b9c138] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
	// void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMeshComponent* StaticMeshComponent); // [0x4b9badc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
	// void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMesh* StaticMesh); // [0x4b9b9a4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
	// void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent); // [0x4b9b86c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
	// class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection); // [0x4b9b428] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraLightRendererProperties
/// Size: 0x02D8 (728 bytes) (0x000080 - 0x0002D8) align 8 MaxSize: 0x02D8
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{ 
public:
	bool                                               bUseInverseSquaredFalloff : 1;                              // 0x0080:0 (0x0001)  
	bool                                               bAffectsTranslucency : 1;                                   // 0x0080:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              RadiusScale;                                                // 0x0084   (0x0004)  
	FVector                                            ColorAdd;                                                   // 0x0088   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   LightRenderingEnabledBinding;                               // 0x0098   (0x0058)  
	FNiagaraVariableAttributeBinding                   LightExponentBinding;                                       // 0x00F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0148   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x01A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   RadiusBinding;                                              // 0x01F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   VolumetricScatteringBinding;                                // 0x0250   (0x0058)  
	unsigned char                                      UnknownData02_7[0x30];                                      // 0x02A8   (0x0030)  MISSED
};

/// Struct /Script/Niagara.NiagaraMeshMaterialOverride
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraMeshMaterialOverride
{ 
	class UMaterialInterface*                          ExplicitMat;                                                // 0x0000   (0x0008)  
	FNiagaraUserParameterBinding                       UserParamBinding;                                           // 0x0008   (0x0020)  
};

/// Class /Script/Niagara.NiagaraMeshRendererProperties
/// Size: 0x0678 (1656 bytes) (0x000080 - 0x000678) align 8 MaxSize: 0x0678
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UStaticMesh*                                 ParticleMesh;                                               // 0x0080   (0x0008)  
	SDK_UNDEFINED(1,1064) /* ENiagaraSortMode */       __um(SortMode);                                             // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	bool                                               bOverrideMaterials : 1;                                     // 0x008C:0 (0x0001)  
	bool                                               bSortOnlyWhenTranslucent : 1;                               // 0x008C:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x008D   (0x0003)  MISSED
	TArray<FNiagaraMeshMaterialOverride>               OverrideMaterials;                                          // 0x0090   (0x0010)  
	FVector2D                                          SubImageSize;                                               // 0x00A0   (0x0008)  
	bool                                               bSubImageBlend : 1;                                         // 0x00A8:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	SDK_UNDEFINED(1,1065) /* ENiagaraMeshFacingMode */ __um(FacingMode);                                           // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
	bool                                               bLockedAxisEnable : 1;                                      // 0x00B0:0 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	FVector                                            LockedAxis;                                                 // 0x00B4   (0x000C)  
	SDK_UNDEFINED(1,1066) /* ENiagaraMeshLockedAxisSpace */ __um(LockedAxisSpace);                                 // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x00C1   (0x0003)  MISSED
	FVector                                            PivotOffset;                                                // 0x00C4   (0x000C)  
	SDK_UNDEFINED(1,1067) /* ENiagaraMeshPivotOffsetSpace */ __um(PivotOffsetSpace);                               // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x00D1   (0x0003)  MISSED
	bool                                               bEnableFrustumCulling : 1;                                  // 0x00D4:0 (0x0001)  
	bool                                               bEnableCameraDistanceCulling : 1;                           // 0x00D4:1 (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x00D5   (0x0003)  MISSED
	float                                              MinCameraDistance;                                          // 0x00D8   (0x0004)  
	float                                              MaxCameraDistance;                                          // 0x00DC   (0x0004)  
	uint32_t                                           RendererVisibility;                                         // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData08_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x00E8   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0140   (0x0058)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x0198   (0x0058)  
	FNiagaraVariableAttributeBinding                   MeshOrientationBinding;                                     // 0x01F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   ScaleBinding;                                               // 0x0248   (0x0058)  
	FNiagaraVariableAttributeBinding                   SubImageIndexBinding;                                       // 0x02A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x02F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x0350   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x03A8   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x0400   (0x0058)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x0458   (0x0058)  
	FNiagaraVariableAttributeBinding                   CustomSortingBinding;                                       // 0x04B0   (0x0058)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x0508   (0x0058)  
	FNiagaraVariableAttributeBinding                   CameraOffsetBinding;                                        // 0x0560   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x05B8   (0x0058)  
	unsigned char                                      UnknownData09_7[0x68];                                      // 0x0610   (0x0068)  MISSED
};

/// Class /Script/Niagara.NiagaraMessageDataBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraMessageDataBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraParameterCollectionInstance
/// Size: 0x00E0 (224 bytes) (0x000028 - 0x0000E0) align 8 MaxSize: 0x00E0
class UNiagaraParameterCollectionInstance : public UObject
{ 
public:
	class UNiagaraParameterCollection*                 Collection;                                                 // 0x0028   (0x0008)  
	TArray<FNiagaraVariable>                           OverridenParameters;                                        // 0x0030   (0x0010)  
	FNiagaraParameterStore                             ParameterStorage;                                           // 0x0040   (0x0078)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x00B8   (0x0028)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
	// void SetVectorParameter(FString InVariableName, FVector InValue);                                                        // [0x4b9c8c8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
	// void SetVector4Parameter(FString InVariableName, FVector4& InValue);                                                     // [0x4b9c760] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
	// void SetVector2DParameter(FString InVariableName, FVector2D InValue);                                                    // [0x4b9c660] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
	// void SetQuatParameter(FString InVariableName, FQuat& InValue);                                                           // [0x4b9c030] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetIntParameter
	// void SetIntParameter(FString InVariableName, int32_t InValue);                                                           // [0x4b9bf2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
	// void SetFloatParameter(FString InVariableName, float InValue);                                                           // [0x4b9be28] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetColorParameter
	// void SetColorParameter(FString InVariableName, FLinearColor InValue);                                                    // [0x4b9bd1c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
	// void SetBoolParameter(FString InVariableName, bool InValue);                                                             // [0x4b9bc14] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
	// FVector GetVectorParameter(FString InVariableName);                                                                      // [0x4b9b7a4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
	// FVector4 GetVector4Parameter(FString InVariableName);                                                                    // [0x4b9b6e4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
	// FVector2D GetVector2DParameter(FString InVariableName);                                                                  // [0x4b9b5d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
	// FQuat GetQuatParameter(FString InVariableName);                                                                          // [0x4b9b510] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetIntParameter
	// int32_t GetIntParameter(FString InVariableName);                                                                         // [0x4b9b374] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
	// float GetFloatParameter(FString InVariableName);                                                                         // [0x4b9b2bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetColorParameter
	// FLinearColor GetColorParameter(FString InVariableName);                                                                  // [0x4b9b1fc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
	// bool GetBoolParameter(FString InVariableName);                                                                           // [0x4b9b0f4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraParameterCollection
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraParameterCollection : public UObject
{ 
public:
	FName                                              Namespace;                                                  // 0x0028   (0x0008)  
	TArray<FNiagaraVariable>                           Parameters;                                                 // 0x0030   (0x0010)  
	class UMaterialParameterCollection*                SourceMaterialCollection;                                   // 0x0040   (0x0008)  
	class UNiagaraParameterCollectionInstance*         DefaultInstance;                                            // 0x0048   (0x0008)  
	FGuid                                              CompileId;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPrecompileContainer
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraPrecompileContainer : public UObject
{ 
public:
	TArray<class UNiagaraScript*>                      Scripts;                                                    // 0x0028   (0x0010)  
	class UNiagaraSystem*                              System;                                                     // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraPreviewBase
/// Size: 0x0318 (792 bytes) (0x000318 - 0x000318) align 8 MaxSize: 0x0318
class ANiagaraPreviewBase : public AActor
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewBase.SetSystem
	// void SetSystem(class UNiagaraSystem* InSystem);                                                                          // [0x182d6bc] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/Niagara.NiagaraPreviewBase.SetLabelText
	// void SetLabelText(FText& InXAxisText, FText& InYAxisText);                                                               // [0x182d6bc] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/Niagara.NiagaraPreviewAxis
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraPreviewAxis : public UObject
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewAxis.Num
	// int32_t Num();                                                                                                           // [0x4b9e098] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraPreviewAxis.ApplyToPreview
	// void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, FString& OutLabelText); // [0x4b9dd98] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamBase
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{ 
public:
	FName                                              Param;                                                      // 0x0028   (0x0008)  
	int32_t                                            Count;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamInt32
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	int32_t                                            Min;                                                        // 0x0038   (0x0004)  
	int32_t                                            Max;                                                        // 0x003C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamFloat
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	float                                              Min;                                                        // 0x0038   (0x0004)  
	float                                              Max;                                                        // 0x003C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector2D
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FVector2D                                          Min;                                                        // 0x0038   (0x0008)  
	FVector2D                                          Max;                                                        // 0x0040   (0x0008)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FVector                                            Min;                                                        // 0x0038   (0x000C)  
	FVector                                            Max;                                                        // 0x0044   (0x000C)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector4
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 16 MaxSize: 0x0060
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	FVector4                                           Min;                                                        // 0x0040   (0x0010)  
	FVector4                                           Max;                                                        // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamLinearColor
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FLinearColor                                       Min;                                                        // 0x0038   (0x0010)  
	FLinearColor                                       Max;                                                        // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPreviewGrid
/// Size: 0x0368 (872 bytes) (0x000318 - 0x000368) align 8 MaxSize: 0x0368
class ANiagaraPreviewGrid : public AActor
{ 
public:
	class UNiagaraSystem*                              System;                                                     // 0x0318   (0x0008)  
	SDK_UNDEFINED(1,1068) /* ENiagaraPreviewGridResetMode */ __um(ResetMode);                                      // 0x0320   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0321   (0x0007)  MISSED
	class UNiagaraPreviewAxis*                         PreviewAxisX;                                               // 0x0328   (0x0008)  
	class UNiagaraPreviewAxis*                         PreviewAxisY;                                               // 0x0330   (0x0008)  
	class UClass*                                      PreviewClass;                                               // 0x0338   (0x0008)  
	float                                              SpacingX;                                                   // 0x0340   (0x0004)  
	float                                              SpacingY;                                                   // 0x0344   (0x0004)  
	int32_t                                            NumX;                                                       // 0x0348   (0x0004)  
	int32_t                                            NumY;                                                       // 0x034C   (0x0004)  
	TArray<class UChildActorComponent*>                PreviewComponents;                                          // 0x0350   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0360   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewGrid.SetPaused
	// void SetPaused(bool bPaused);                                                                                            // [0x4b9e0c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.GetPreviews
	// void GetPreviews(TArray<UNiagaraComponent*>& OutPreviews);                                                               // [0x4b9df5c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.DeactivatePreviews
	// void DeactivatePreviews();                                                                                               // [0x4b9df48] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.ActivatePreviews
	// void ActivatePreviews(bool bReset);                                                                                      // [0x4b9dd04] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Niagara.NiagaraRibbonUVSettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FNiagaraRibbonUVSettings
{ 
	SDK_UNDEFINED(4,1069) /* ENiagaraRibbonUVEdgeMode */ __um(LeadingEdgeMode);                                    // 0x0000   (0x0004)  
	SDK_UNDEFINED(4,1070) /* ENiagaraRibbonUVEdgeMode */ __um(TrailingEdgeMode);                                   // 0x0004   (0x0004)  
	SDK_UNDEFINED(4,1071) /* ENiagaraRibbonUVDistributionMode */ __um(DistributionMode);                           // 0x0008   (0x0004)  
	float                                              TilingLength;                                               // 0x000C   (0x0004)  
	FVector2D                                          Offset;                                                     // 0x0010   (0x0008)  
	FVector2D                                          Scale;                                                      // 0x0018   (0x0008)  
	bool                                               bEnablePerParticleUOverride;                                // 0x0020   (0x0001)  
	bool                                               bEnablePerParticleVRangeOverride;                           // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0022   (0x0002)  MISSED
};

/// Class /Script/Niagara.NiagaraRibbonRendererProperties
/// Size: 0x07D8 (2008 bytes) (0x000080 - 0x0007D8) align 8 MaxSize: 0x07D8
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UMaterialInterface*                          Material;                                                   // 0x0080   (0x0008)  
	FNiagaraUserParameterBinding                       MaterialUserParamBinding;                                   // 0x0088   (0x0020)  
	SDK_UNDEFINED(1,1072) /* ENiagaraRibbonFacingMode */ __um(FacingMode);                                         // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	FNiagaraRibbonUVSettings                           UV0Settings;                                                // 0x00AC   (0x0024)  
	FNiagaraRibbonUVSettings                           UV1Settings;                                                // 0x00D0   (0x0024)  
	SDK_UNDEFINED(1,1073) /* ENiagaraRibbonDrawDirection */ __um(DrawDirection);                                   // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00F5   (0x0003)  MISSED
	float                                              CurveTension;                                               // 0x00F8   (0x0004)  
	SDK_UNDEFINED(1,1074) /* ENiagaraRibbonTessellationMode */ __um(TessellationMode);                             // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00FD   (0x0003)  MISSED
	int32_t                                            TessellationFactor;                                         // 0x0100   (0x0004)  
	bool                                               bUseConstantFactor;                                         // 0x0104   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0105   (0x0003)  MISSED
	float                                              TessellationAngle;                                          // 0x0108   (0x0004)  
	bool                                               bScreenSpaceTessellation;                                   // 0x010C   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x010D   (0x0003)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0110   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0168   (0x0058)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x01C0   (0x0058)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x0218   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonTwistBinding;                                         // 0x0270   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonWidthBinding;                                         // 0x02C8   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonFacingBinding;                                        // 0x0320   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonIdBinding;                                            // 0x0378   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonLinkOrderBinding;                                     // 0x03D0   (0x0058)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x0428   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x0480   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x04D8   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x0530   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x0588   (0x0058)  
	FNiagaraVariableAttributeBinding                   U0OverrideBinding;                                          // 0x05E0   (0x0058)  
	FNiagaraVariableAttributeBinding                   V0RangeOverrideBinding;                                     // 0x0638   (0x0058)  
	FNiagaraVariableAttributeBinding                   U1OverrideBinding;                                          // 0x0690   (0x0058)  
	FNiagaraVariableAttributeBinding                   V1RangeOverrideBinding;                                     // 0x06E8   (0x0058)  
	unsigned char                                      UnknownData05_7[0x98];                                      // 0x0740   (0x0098)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptExecutionPaddingInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 2 MaxSize: 0x0008
struct FNiagaraScriptExecutionPaddingInfo
{ 
	uint16_t                                           SrcOffset;                                                  // 0x0000   (0x0002)  
	uint16_t                                           DestOffset;                                                 // 0x0002   (0x0002)  
	uint16_t                                           SrcSize;                                                    // 0x0004   (0x0002)  
	uint16_t                                           DestSize;                                                   // 0x0006   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraScriptExecutionParameterStore
/// Size: 0x0098 (152 bytes) (0x000078 - 0x000098) align 8 MaxSize: 0x0098
struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore
{ 
	int32_t                                            ParameterSize;                                              // 0x0078   (0x0004)  
	uint32_t                                           PaddedParameterSize;                                        // 0x007C   (0x0004)  
	TArray<FNiagaraScriptExecutionPaddingInfo>         PaddingInfo;                                                // 0x0080   (0x0010)  
	bool                                               bInitialized : 1;                                           // 0x0090:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraBoundParameter
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraBoundParameter
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0000   (0x0020)  
	int32_t                                            SrcOffset;                                                  // 0x0020   (0x0004)  
	int32_t                                            DestOffset;                                                 // 0x0024   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVMExecutableDataId
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FNiagaraVMExecutableDataId
{ 
	FGuid                                              CompilerVersionID;                                          // 0x0000   (0x0010)  
	SDK_UNDEFINED(1,1075) /* ENiagaraScriptUsage */    __um(ScriptUsageType);                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FGuid                                              ScriptUsageTypeID;                                          // 0x0014   (0x0010)  
	bool                                               bUsesRapidIterationParams : 1;                              // 0x0024:0 (0x0001)  
	bool                                               bInterpolatedSpawn : 1;                                     // 0x0024:1 (0x0001)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x0024:2 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	FGuid                                              BaseScriptID;                                               // 0x0028   (0x0010)  
	FNiagaraCompileHash                                BaseScriptCompileHash;                                      // 0x0038   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraScriptDataUsageInfo
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FNiagaraScriptDataUsageInfo
{ 
	bool                                               bReadsAttributeData;                                        // 0x0000   (0x0001)  
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceCompileInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FNiagaraScriptDataInterfaceCompileInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	int32_t                                            UserPtrIdx;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraTypeDefinition                             Type;                                                       // 0x0010   (0x0010)  
	FName                                              RegisteredParameterMapRead;                                 // 0x0020   (0x0008)  
	FName                                              RegisteredParameterMapWrite;                                // 0x0028   (0x0008)  
	bool                                               bIsPlaceholder;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/Niagara.VMFunctionSpecifier
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FVMFunctionSpecifier
{ 
	FName                                              Key;                                                        // 0x0000   (0x0008)  
	FName                                              Value;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.VMExternalFunctionBindingInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FVMExternalFunctionBindingInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              OwnerName;                                                  // 0x0008   (0x0008)  
	TArray<bool>                                       InputParamLocations;                                        // 0x0010   (0x0010)  
	int32_t                                            NumOutputs;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FVMFunctionSpecifier>                       FunctionSpecifiers;                                         // 0x0028   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDataSetProperties
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraDataSetProperties
{ 
	FNiagaraDataSetID                                  ID;                                                         // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FNiagaraVariable>                           Variables;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraStatScope
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraStatScope
{ 
	FName                                              FullName;                                                   // 0x0000   (0x0008)  
	FName                                              FriendlyName;                                               // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraVMExecutableData
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align 8 MaxSize: 0x00E0
struct FNiagaraVMExecutableData
{ 
	TArray<char>                                       ByteCode;                                                   // 0x0000   (0x0010)  
	TArray<char>                                       OptimizedByteCode;                                          // 0x0010   (0x0010)  
	int32_t                                            NumTempRegisters;                                           // 0x0020   (0x0004)  
	int32_t                                            NumUserPtrs;                                                // 0x0024   (0x0004)  
	TArray<char>                                       ScriptLiterals;                                             // 0x0028   (0x0010)  
	TArray<FNiagaraVariable>                           Attributes;                                                 // 0x0038   (0x0010)  
	FNiagaraScriptDataUsageInfo                        DataUsage;                                                  // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	TArray<FNiagaraScriptDataInterfaceCompileInfo>     DataInterfaceInfo;                                          // 0x0050   (0x0010)  
	TArray<FVMExternalFunctionBindingInfo>             CalledVMExternalFunctions;                                  // 0x0060   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0070   (0x0010)  MISSED
	TArray<FNiagaraDataSetID>                          ReadDataSets;                                               // 0x0080   (0x0010)  
	TArray<FNiagaraDataSetProperties>                  WriteDataSets;                                              // 0x0090   (0x0010)  
	TArray<FNiagaraStatScope>                          StatScopes;                                                 // 0x00A0   (0x0010)  
	TArray<FNiagaraDataInterfaceGPUParamInfo>          DIParamInfo;                                                // 0x00B0   (0x0010)  
	SDK_UNDEFINED(1,1076) /* ENiagaraScriptCompileStatus */ __um(LastCompileStatus);                               // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
	TArray<FSimulationStageMetaData>                   SimulationStageMetaData;                                    // 0x00C8   (0x0010)  
	bool                                               bReadsSignificanceIndex : 1;                                // 0x00D8:0 (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FNiagaraScriptDataInterfaceInfo
{ 
	class UNiagaraDataInterface*                       DataInterface;                                              // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	int32_t                                            UserPtrIdx;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FNiagaraTypeDefinition                             Type;                                                       // 0x0018   (0x0010)  
	FName                                              RegisteredParameterMapRead;                                 // 0x0028   (0x0008)  
	FName                                              RegisteredParameterMapWrite;                                // 0x0030   (0x0008)  
};

/// Class /Script/Niagara.NiagaraScript
/// Size: 0x02C0 (704 bytes) (0x000028 - 0x0002C0) align 8 MaxSize: 0x02C0
class UNiagaraScript : public UNiagaraScriptBase
{ 
public:
	SDK_UNDEFINED(1,1077) /* ENiagaraScriptUsage */    __um(Usage);                                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            UsageIndex;                                                 // 0x002C   (0x0004)  
	FGuid                                              UsageId;                                                    // 0x0030   (0x0010)  
	FNiagaraParameterStore                             RapidIterationParameters;                                   // 0x0040   (0x0078)  
	FNiagaraScriptExecutionParameterStore              ScriptExecutionParamStore;                                  // 0x00B8   (0x0098)  
	TArray<FNiagaraBoundParameter>                     ScriptExecutionBoundParameters;                             // 0x0150   (0x0010)  
	FNiagaraVMExecutableDataId                         CachedScriptVMId;                                           // 0x0160   (0x0048)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x01A8   (0x0010)  MISSED
	FNiagaraVMExecutableData                           CachedScriptVM;                                             // 0x01B8   (0x00E0)  
	TArray<class UNiagaraParameterCollection*>         CachedParameterCollectionReferences;                        // 0x0298   (0x0010)  
	TArray<FNiagaraScriptDataInterfaceInfo>            CachedDefaultDataInterfaces;                                // 0x02A8   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x02B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
	// void RaiseOnGPUCompilationComplete();                                                                                    // [0x1e39048] Final|Native|Public  
};

/// Class /Script/Niagara.NiagaraScriptSourceBase
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraScriptSourceBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Class /Script/Niagara.NiagaraSettings
/// Size: 0x00C0 (192 bytes) (0x000038 - 0x0000C0) align 8 MaxSize: 0x00C0
class UNiagaraSettings : public UDeveloperSettings
{ 
public:
	FSoftObjectPath                                    DefaultEffectType;                                          // 0x0038   (0x0018)  
	TArray<FText>                                      QualityLevels;                                              // 0x0050   (0x0010)  
	TMap<FString, FText>                               ComponentRendererWarningsPerClass;                          // 0x0060   (0x0050)  
	SDK_UNDEFINED(1,1078) /* TEnumAsByte<ETextureRenderTargetFormat> */ __um(DefaultRenderTargetFormat);           // 0x00B0   (0x0001)  
	SDK_UNDEFINED(1,1079) /* ENiagaraGpuBufferFormat */ __um(DefaultGridFormat);                                   // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00B2   (0x0006)  MISSED
	class UNiagaraEffectType*                          DefaultEffectTypePtr;                                       // 0x00B8   (0x0008)  
};

/// Class /Script/Niagara.NiagaraSimulationStageBase
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{ 
public:
	class UNiagaraScript*                              Script;                                                     // 0x0028   (0x0008)  
	FName                                              SimulationStageName;                                        // 0x0030   (0x0008)  
	bool                                               bEnabled : 1;                                               // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableDataInterfaceBinding
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraVariableDataInterfaceBinding
{ 
	FNiagaraVariable                                   BoundVariable;                                              // 0x0000   (0x0020)  
};

/// Class /Script/Niagara.NiagaraSimulationStageGeneric
/// Size: 0x0070 (112 bytes) (0x000040 - 0x000070) align 8 MaxSize: 0x0070
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{ 
public:
	SDK_UNDEFINED(1,1080) /* ENiagaraIterationSource */ __um(IterationSource);                                     // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	int32_t                                            Iterations;                                                 // 0x0044   (0x0004)  
	bool                                               bSpawnOnly : 1;                                             // 0x0048:0 (0x0001)  
	bool                                               bDisablePartialParticleUpdate : 1;                          // 0x0048:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	FNiagaraVariableDataInterfaceBinding               DataInterface;                                              // 0x0050   (0x0020)  
};

/// Struct /Script/Niagara.NiagaraMaterialAttributeBinding
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 MaxSize: 0x002C
struct FNiagaraMaterialAttributeBinding
{ 
	FName                                              MaterialParameterName;                                      // 0x0000   (0x0008)  
	FNiagaraVariableBase                               NiagaraVariable;                                            // 0x0008   (0x000C)  
	FNiagaraVariableBase                               ResolvedNiagaraVariable;                                    // 0x0014   (0x000C)  
	FNiagaraVariableBase                               NiagaraChildVariable;                                       // 0x0020   (0x000C)  
};

/// Class /Script/Niagara.NiagaraSpriteRendererProperties
/// Size: 0x07A0 (1952 bytes) (0x000080 - 0x0007A0) align 8 MaxSize: 0x07A0
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UMaterialInterface*                          Material;                                                   // 0x0080   (0x0008)  
	SDK_UNDEFINED(1,1081) /* ENiagaraRendererSourceDataMode */ __um(SourceMode);                                   // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0089   (0x0007)  MISSED
	FNiagaraUserParameterBinding                       MaterialUserParamBinding;                                   // 0x0090   (0x0020)  
	SDK_UNDEFINED(1,1082) /* ENiagaraSpriteAlignment */ __um(Alignment);                                           // 0x00B0   (0x0001)  
	SDK_UNDEFINED(1,1083) /* ENiagaraSpriteFacingMode */ __um(FacingMode);                                         // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00B2   (0x0002)  MISSED
	FVector2D                                          PivotInUVSpace;                                             // 0x00B4   (0x0008)  
	SDK_UNDEFINED(1,1084) /* ENiagaraSortMode */       __um(SortMode);                                             // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00BD   (0x0003)  MISSED
	FVector2D                                          SubImageSize;                                               // 0x00C0   (0x0008)  
	bool                                               bSubImageBlend : 1;                                         // 0x00C8:0 (0x0001)  
	bool                                               bRemoveHMDRollInVR : 1;                                     // 0x00C8:1 (0x0001)  
	bool                                               bSortOnlyWhenTranslucent : 1;                               // 0x00C8:2 (0x0001)  
	bool                                               bGpuLowLatencyTranslucency : 1;                             // 0x00C8:3 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00C9   (0x0003)  MISSED
	float                                              MinFacingCameraBlendDistance;                               // 0x00CC   (0x0004)  
	float                                              MaxFacingCameraBlendDistance;                               // 0x00D0   (0x0004)  
	bool                                               bEnableCameraDistanceCulling : 1;                           // 0x00D4:0 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00D5   (0x0003)  MISSED
	float                                              MinCameraDistance;                                          // 0x00D8   (0x0004)  
	float                                              MaxCameraDistance;                                          // 0x00DC   (0x0004)  
	uint32_t                                           RendererVisibility;                                         // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x00E8   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0140   (0x0058)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x0198   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteRotationBinding;                                      // 0x01F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteSizeBinding;                                          // 0x0248   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteFacingBinding;                                        // 0x02A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteAlignmentBinding;                                     // 0x02F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   SubImageIndexBinding;                                       // 0x0350   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x03A8   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x0400   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x0458   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x04B0   (0x0058)  
	FNiagaraVariableAttributeBinding                   CameraOffsetBinding;                                        // 0x0508   (0x0058)  
	FNiagaraVariableAttributeBinding                   UVScaleBinding;                                             // 0x0560   (0x0058)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x05B8   (0x0058)  
	FNiagaraVariableAttributeBinding                   CustomSortingBinding;                                       // 0x0610   (0x0058)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x0668   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x06C0   (0x0058)  
	TArray<FNiagaraMaterialAttributeBinding>           MaterialParameterBindings;                                  // 0x0718   (0x0010)  
	unsigned char                                      UnknownData06_7[0x78];                                      // 0x0728   (0x0078)  MISSED
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverride
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000050) align 8 MaxSize: 0x0050
struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings
{ 
	bool                                               bOverrideDistanceSettings : 1;                              // 0x0048:0 (0x0001)  
	bool                                               bOverrideInstanceCountSettings : 1;                         // 0x0048:1 (0x0001)  
	bool                                               bOverridePerSystemInstanceCountSettings : 1;                // 0x0048:2 (0x0001)  
	bool                                               bOverrideTimeSinceRendererSettings : 1;                     // 0x0048:3 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverrides
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraSystemScalabilityOverrides
{ 
	TArray<FNiagaraSystemScalabilityOverride>          Overrides;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEmitterHandle
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FNiagaraEmitterHandle
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	FName                                              IdName;                                                     // 0x0010   (0x0008)  
	bool                                               bIsEnabled;                                                 // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x001C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	class UNiagaraEmitter*                             Instance;                                                   // 0x0028   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBinding
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNiagaraParameterDataSetBinding
{ 
	int32_t                                            ParameterOffset;                                            // 0x0000   (0x0004)  
	int32_t                                            DataSetComponentOffset;                                     // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBindingCollection
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraParameterDataSetBindingCollection
{ 
	TArray<FNiagaraParameterDataSetBinding>            FloatOffsets;                                               // 0x0000   (0x0010)  
	TArray<FNiagaraParameterDataSetBinding>            Int32Offsets;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemCompiledData
/// Size: 0x0218 (536 bytes) (0x000000 - 0x000218) align 8 MaxSize: 0x0218
struct FNiagaraSystemCompiledData
{ 
	FNiagaraParameterStore                             InstanceParamStore;                                         // 0x0000   (0x0078)  
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x0078   (0x0040)  
	FNiagaraDataSetCompiledData                        SpawnInstanceParamsDataSetCompiledData;                     // 0x00B8   (0x0040)  
	FNiagaraDataSetCompiledData                        UpdateInstanceParamsDataSetCompiledData;                    // 0x00F8   (0x0040)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceGlobalBinding;                                 // 0x0138   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceSystemBinding;                                 // 0x0158   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceOwnerBinding;                                  // 0x0178   (0x0020)  
	TArray<FNiagaraParameterDataSetBindingCollection>  SpawnInstanceEmitterBindings;                               // 0x0198   (0x0010)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceGlobalBinding;                                // 0x01A8   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceSystemBinding;                                // 0x01C8   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceOwnerBinding;                                 // 0x01E8   (0x0020)  
	TArray<FNiagaraParameterDataSetBindingCollection>  UpdateInstanceEmitterBindings;                              // 0x0208   (0x0010)  
};

/// Class /Script/Niagara.NiagaraSystem
/// Size: 0x0480 (1152 bytes) (0x000030 - 0x000480) align 8 MaxSize: 0x0480
class UNiagaraSystem : public UFXSystemAsset
{ 
public:
	bool                                               bDumpDebugSystemInfo;                                       // 0x0030   (0x0001)  
	bool                                               bDumpDebugEmitterInfo;                                      // 0x0031   (0x0001)  
	bool                                               bRequireCurrentFrameData;                                   // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0033   (0x0001)  MISSED
	bool                                               bFixedBounds : 1;                                           // 0x0034:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	class UNiagaraEffectType*                          EffectType;                                                 // 0x0038   (0x0008)  
	bool                                               bOverrideScalabilitySettings;                               // 0x0040   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	TArray<FNiagaraSystemScalabilityOverride>          ScalabilityOverrides;                                       // 0x0048   (0x0010)  
	FNiagaraSystemScalabilityOverrides                 SystemScalabilityOverrides;                                 // 0x0058   (0x0010)  
	TArray<FNiagaraEmitterHandle>                      EmitterHandles;                                             // 0x0068   (0x0010)  
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                               // 0x0078   (0x0010)  
	class UNiagaraScript*                              SystemSpawnScript;                                          // 0x0088   (0x0008)  
	class UNiagaraScript*                              SystemUpdateScript;                                         // 0x0090   (0x0008)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0098   (0x0010)  MISSED
	FNiagaraSystemCompiledData                         SystemCompiledData;                                         // 0x00A8   (0x0218)  
	FNiagaraUserRedirectionParameterStore              ExposedParameters;                                          // 0x02C0   (0x00C8)  
	FBox                                               FixedBounds;                                                // 0x0388   (0x001C)  
	bool                                               bAutoDeactivate;                                            // 0x03A4   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x03A5   (0x0003)  MISSED
	float                                              WarmupTime;                                                 // 0x03A8   (0x0004)  
	int32_t                                            WarmupTickCount;                                            // 0x03AC   (0x0004)  
	float                                              WarmupTickDelta;                                            // 0x03B0   (0x0004)  
	bool                                               bHasSystemScriptDIsWithPerInstanceData;                     // 0x03B4   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x03B5   (0x0003)  MISSED
	TArray<FName>                                      UserDINamesReadInSystemScripts;                             // 0x03B8   (0x0010)  
	unsigned char                                      UnknownData06_7[0xB8];                                      // 0x03C8   (0x00B8)  MISSED
};

/// Struct /Script/Niagara.MovieSceneNiagaraParameterSectionTemplate
/// Size: 0x0040 (64 bytes) (0x000020 - 0x000040) align 8 MaxSize: 0x0040
struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0020   (0x0020)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
/// Size: 0x00D0 (208 bytes) (0x000040 - 0x0000D0) align 8 MaxSize: 0x00D0
struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneBoolChannel                             BoolChannel;                                                // 0x0040   (0x0090)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraColorParameterSectionTemplate
/// Size: 0x02C0 (704 bytes) (0x000040 - 0x0002C0) align 8 MaxSize: 0x02C0
struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            RedChannel;                                                 // 0x0040   (0x00A0)  
	FMovieSceneFloatChannel                            GreenChannel;                                               // 0x00E0   (0x00A0)  
	FMovieSceneFloatChannel                            BlueChannel;                                                // 0x0180   (0x00A0)  
	FMovieSceneFloatChannel                            AlphaChannel;                                               // 0x0220   (0x00A0)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
/// Size: 0x00E0 (224 bytes) (0x000040 - 0x0000E0) align 8 MaxSize: 0x00E0
struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            FloatChannel;                                               // 0x0040   (0x00A0)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
/// Size: 0x00D0 (208 bytes) (0x000040 - 0x0000D0) align 8 MaxSize: 0x00D0
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneIntegerChannel                          IntegerChannel;                                             // 0x0040   (0x0090)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackImplementation
/// Size: 0x0028 (40 bytes) (0x000010 - 0x000028) align 8 MaxSize: 0x0028
struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation
{ 
	FFrameNumber                                       SpawnSectionStartFrame;                                     // 0x0010   (0x0004)  
	FFrameNumber                                       SpawnSectionEndFrame;                                       // 0x0014   (0x0004)  
	SDK_UNDEFINED(4,1085) /* ENiagaraSystemSpawnSectionStartBehavior */ __um(SpawnSectionStartBehavior);           // 0x0018   (0x0004)  
	SDK_UNDEFINED(4,1086) /* ENiagaraSystemSpawnSectionEvaluateBehavior */ __um(SpawnSectionEvaluateBehavior);     // 0x001C   (0x0004)  
	SDK_UNDEFINED(4,1087) /* ENiagaraSystemSpawnSectionEndBehavior */ __um(SpawnSectionEndBehavior);               // 0x0020   (0x0004)  
	SDK_UNDEFINED(1,1088) /* ENiagaraAgeUpdateMode */  __um(AgeUpdateMode);                                        // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackTemplate
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate
{ 
};

/// Struct /Script/Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
/// Size: 0x02C8 (712 bytes) (0x000040 - 0x0002C8) align 8 MaxSize: 0x02C8
struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            VectorChannels[4];                                          // 0x0040   (0x0280)  
	int32_t                                            ChannelsUsed;                                               // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x02C4   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraRandInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraRandInfo
{ 
	int32_t                                            Seed1;                                                      // 0x0000   (0x0004)  
	int32_t                                            Seed2;                                                      // 0x0004   (0x0004)  
	int32_t                                            Seed3;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraScriptVariableBinding
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNiagaraScriptVariableBinding
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraVariableInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FNiagaraVariableInfo
{ 
	FNiagaraVariable                                   Variable;                                                   // 0x0000   (0x0020)  
	FText                                              Definition;                                                 // 0x0020   (0x0018)  
	class UNiagaraDataInterface*                       DataInterface;                                              // 0x0038   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraSystemUpdateContext
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FNiagaraSystemUpdateContext
{ 
	TArray<class UNiagaraComponent*>                   ComponentsToReset;                                          // 0x0000   (0x0010)  
	TArray<class UNiagaraComponent*>                   ComponentsToReInit;                                         // 0x0010   (0x0010)  
	TArray<class UNiagaraComponent*>                   ComponentsToNotifySimDestroy;                               // 0x0020   (0x0010)  
	TArray<class UNiagaraSystem*>                      SystemSimsToDestroy;                                        // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NiagaraFunctionSignature
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FNiagaraFunctionSignature
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	TArray<FNiagaraVariable>                           Inputs;                                                     // 0x0008   (0x0010)  
	TArray<FNiagaraVariable>                           Outputs;                                                    // 0x0018   (0x0010)  
	FName                                              OwnerName;                                                  // 0x0028   (0x0008)  
	bool                                               bRequiresContext : 1;                                       // 0x0030:0 (0x0001)  
	bool                                               bRequiresExecPin : 1;                                       // 0x0030:1 (0x0001)  
	bool                                               bMemberFunction : 1;                                        // 0x0030:2 (0x0001)  
	bool                                               bExperimental : 1;                                          // 0x0030:3 (0x0001)  
	bool                                               bSupportsCPU : 1;                                           // 0x0030:4 (0x0001)  
	bool                                               bSupportsGPU : 1;                                           // 0x0030:5 (0x0001)  
	bool                                               bWriteFunction : 1;                                         // 0x0030:6 (0x0001)  
	bool                                               bSoftDeprecatedFunction : 1;                                // 0x0030:7 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            ModuleUsageBitmask;                                         // 0x0034   (0x0004)  
	int32_t                                            ContextStageMinIndex;                                       // 0x0038   (0x0004)  
	int32_t                                            ContextStageMaxIndex;                                       // 0x003C   (0x0004)  
	TMap<FName, FName>                                 FunctionSpecifiers;                                         // 0x0040   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraEmitterNameSettingsRef
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraEmitterNameSettingsRef
{ 
	FName                                              SystemName;                                                 // 0x0000   (0x0008)  
	FString                                            EmitterName;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.BasicParticleData
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FBasicParticleData
{ 
	FVector                                            position;                                                   // 0x0000   (0x000C)  
	float                                              Size;                                                       // 0x000C   (0x0004)  
	FVector                                            Velocity;                                                   // 0x0010   (0x000C)  
};

/// Struct /Script/Niagara.MeshTriCoordinate
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMeshTriCoordinate
{ 
	int32_t                                            Tri;                                                        // 0x0000   (0x0004)  
	FVector                                            BaryCoord;                                                  // 0x0004   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraGraphViewSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraGraphViewSettings
{ 
	FVector2D                                          Location;                                                   // 0x0000   (0x0008)  
	float                                              Zoom;                                                       // 0x0008   (0x0004)  
	bool                                               bIsValid;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraCollisionEventPayload
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 MaxSize: 0x002C
struct FNiagaraCollisionEventPayload
{ 
	FVector                                            CollisionPos;                                               // 0x0000   (0x000C)  
	FVector                                            CollisionNormal;                                            // 0x000C   (0x000C)  
	FVector                                            CollisionVelocity;                                          // 0x0018   (0x000C)  
	int32_t                                            ParticleIndex;                                              // 0x0024   (0x0004)  
	int32_t                                            PhysicalMaterialIndex;                                      // 0x0028   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraParameters
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraParameters
{ 
	TArray<FNiagaraVariable>                           Parameters;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictEntry
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraPlatformSetConflictEntry
{ 
	FName                                              ProfileName;                                                // 0x0000   (0x0008)  
	int32_t                                            QualityLevelMask;                                           // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraPlatformSetConflictInfo
{ 
	int32_t                                            SetAIndex;                                                  // 0x0000   (0x0004)  
	int32_t                                            SetBIndex;                                                  // 0x0004   (0x0004)  
	TArray<FNiagaraPlatformSetConflictEntry>           Conflicts;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraScalabilityManager
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FNiagaraScalabilityManager
{ 
	class UNiagaraEffectType*                          EffectType;                                                 // 0x0000   (0x0008)  
	TArray<class UNiagaraComponent*>                   ManagedComponents;                                          // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0018   (0x0028)  MISSED
};

/// Struct /Script/Niagara.NiagaraModuleDependency
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraModuleDependency
{ 
	FName                                              ID;                                                         // 0x0000   (0x0008)  
	SDK_UNDEFINED(1,1089) /* ENiagaraModuleDependencyType */ __um(Type);                                           // 0x0008   (0x0001)  
	SDK_UNDEFINED(1,1090) /* ENiagaraModuleDependencyScriptConstraint */ __um(ScriptConstraint);                   // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
	FText                                              Description;                                                // 0x0010   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraScriptInstanceParameterStore
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
struct FNiagaraScriptInstanceParameterStore : FNiagaraParameterStore
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0078   (0x0010)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptHighlight
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraScriptHighlight
{ 
	FLinearColor                                       Color;                                                      // 0x0000   (0x0010)  
	FText                                              DisplayName;                                                // 0x0010   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraSystemCompileRequest
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FNiagaraSystemCompileRequest
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<class UObject*>                             RootObjects;                                                // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_7[0x68];                                      // 0x0018   (0x0068)  MISSED
};

/// Struct /Script/Niagara.EmitterCompiledScriptPair
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FEmitterCompiledScriptPair
{ 
	unsigned char                                      UnknownData00_2[0x78];                                      // 0x0000   (0x0078)  MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterCompiledData
/// Size: 0x0130 (304 bytes) (0x000000 - 0x000130) align 8 MaxSize: 0x0130
struct FNiagaraEmitterCompiledData
{ 
	TArray<FName>                                      SpawnAttributes;                                            // 0x0000   (0x0010)  
	FNiagaraVariable                                   EmitterSpawnIntervalVar;                                    // 0x0010   (0x0020)  
	FNiagaraVariable                                   EmitterInterpSpawnStartDTVar;                               // 0x0030   (0x0020)  
	FNiagaraVariable                                   EmitterSpawnGroupVar;                                       // 0x0050   (0x0020)  
	FNiagaraVariable                                   EmitterAgeVar;                                              // 0x0070   (0x0020)  
	FNiagaraVariable                                   EmitterRandomSeedVar;                                       // 0x0090   (0x0020)  
	FNiagaraVariable                                   EmitterInstanceSeedVar;                                     // 0x00B0   (0x0020)  
	FNiagaraVariable                                   EmitterTotalSpawnedParticlesVar;                            // 0x00D0   (0x0020)  
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x00F0   (0x0040)  
};

/// Struct /Script/Niagara.NiagaraInputConditionMetadata
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraInputConditionMetadata
{ 
	FName                                              InputName;                                                  // 0x0000   (0x0008)  
	TArray<FString>                                    TargetValues;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraVariableMetaData
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FNiagaraVariableMetaData
{ 
	FText                                              Description;                                                // 0x0000   (0x0018)  
	FText                                              CategoryName;                                               // 0x0018   (0x0018)  
	bool                                               bAdvancedDisplay;                                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            EditorSortPriority;                                         // 0x0034   (0x0004)  
	bool                                               bInlineEditConditionToggle;                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FNiagaraInputConditionMetadata                     EditCondition;                                              // 0x0040   (0x0018)  
	FNiagaraInputConditionMetadata                     VisibleCondition;                                           // 0x0058   (0x0018)  
	TMap<FName, FString>                               PropertyMetaData;                                           // 0x0070   (0x0050)  
	FName                                              ParentAttribute;                                            // 0x00C0   (0x0008)  
	FName                                              ScopeName;                                                  // 0x00C8   (0x0008)  
	SDK_UNDEFINED(4,1091) /* ENiagaraScriptParameterUsage */ __um(Usage);                                          // 0x00D0   (0x0004)  
	bool                                               bIsStaticSwitch;                                            // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00D5   (0x0003)  MISSED
	int32_t                                            StaticSwitchDefaultValue;                                   // 0x00D8   (0x0004)  
	bool                                               bAddedToNodeGraphDeepCopy;                                  // 0x00DC   (0x0001)  
	bool                                               bOutputIsPersistent;                                        // 0x00DD   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x00DE   (0x0002)  MISSED
	FName                                              CachedNamespacelessVariableName;                            // 0x00E0   (0x0008)  
	bool                                               bCreatedInSystemEditor;                                     // 0x00E8   (0x0001)  
	bool                                               bUseLegacyNameString;                                       // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData04_7[0x6];                                       // 0x00EA   (0x0006)  MISSED
};

/// Struct /Script/Niagara.NiagaraParameterScopeInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraParameterScopeInfo
{ 
	SDK_UNDEFINED(4,1092) /* ENiagaraParameterScope */ __um(Scope);                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            NamespaceString;                                            // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraCompileHashVisitorDebugInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FNiagaraCompileHashVisitorDebugInfo
{ 
	FString                                            Object;                                                     // 0x0000   (0x0010)  
	TArray<FString>                                    PropertyKeys;                                               // 0x0010   (0x0010)  
	TArray<FString>                                    PropertyValues;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNiagaraID
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
	int32_t                                            AcquireTag;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraSpawnInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraSpawnInfo
{ 
	int32_t                                            Count;                                                      // 0x0000   (0x0004)  
	float                                              InterpStartDt;                                              // 0x0004   (0x0004)  
	float                                              IntervalDt;                                                 // 0x0008   (0x0004)  
	int32_t                                            SpawnGroup;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraMatrix
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FNiagaraMatrix
{ 
	FVector4                                           Row0;                                                       // 0x0000   (0x0010)  
	FVector4                                           Row1;                                                       // 0x0010   (0x0010)  
	FVector4                                           Row2;                                                       // 0x0020   (0x0010)  
	FVector4                                           Row3;                                                       // 0x0030   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraParameterMap
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FNiagaraParameterMap
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraNumeric
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FNiagaraNumeric
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraHalfVector4
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 2 MaxSize: 0x0008
struct FNiagaraHalfVector4
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
	uint16_t                                           Z;                                                          // 0x0004   (0x0002)  
	uint16_t                                           W;                                                          // 0x0006   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalfVector3
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align 2 MaxSize: 0x0006
struct FNiagaraHalfVector3
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
	uint16_t                                           Z;                                                          // 0x0004   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalfVector2
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 2 MaxSize: 0x0004
struct FNiagaraHalfVector2
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalf
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 2 MaxSize: 0x0002
struct FNiagaraHalf
{ 
	uint16_t                                           Value;                                                      // 0x0000   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraBool
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FNiagaraBool
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraInt32
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FNiagaraInt32
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraFloat
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FNiagaraFloat
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVariant
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraVariant
{ 
	class UObject*                                     Object;                                                     // 0x0000   (0x0008)  
	class UNiagaraDataInterface*                       DataInterface;                                              // 0x0008   (0x0008)  
	TArray<char>                                       Bytes;                                                      // 0x0010   (0x0010)  
	SDK_UNDEFINED(4,1093) /* ENiagaraVariantMode */    __um(CurrentMode);                                          // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraWorldManagerTickFunction
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
struct FNiagaraWorldManagerTickFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UNiagaraDataInterface) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UMovieSceneNiagaraTrack) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(FNiagaraTypeDefinitionHandle) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraVariableBase) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraVariable) == 0x0020); // 32 bytes (0x00000C - 0x000020)
static_assert(sizeof(UMovieSceneNiagaraParameterTrack) == 0x00A8); // 168 bytes (0x000088 - 0x0000A8)
static_assert(sizeof(UMovieSceneNiagaraBoolParameterTrack) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMovieSceneNiagaraColorParameterTrack) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMovieSceneNiagaraFloatParameterTrack) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMovieSceneNiagaraIntegerParameterTrack) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMovieSceneNiagaraSystemSpawnSection) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(UMovieSceneNiagaraSystemTrack) == 0x0090); // 144 bytes (0x000088 - 0x000090)
static_assert(sizeof(UMovieSceneNiagaraVectorParameterTrack) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(ANiagaraActor) == 0x0328); // 808 bytes (0x000318 - 0x000328)
static_assert(sizeof(FNiagaraVariableWithOffset) == 0x0010); // 16 bytes (0x00000C - 0x000010)
static_assert(sizeof(FNiagaraParameterStore) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FNiagaraUserRedirectionParameterStore) == 0x00C8); // 200 bytes (0x000078 - 0x0000C8)
static_assert(sizeof(FNiagaraMaterialOverride) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UNiagaraComponent) == 0x06A0); // 1696 bytes (0x0004F0 - 0x0006A0)
static_assert(sizeof(FNCPoolElement) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNCPool) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UNiagaraComponentPool) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(FNiagaraDeviceProfileStateEntry) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraPlatformSetCVarCondition) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraPlatformSet) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UNiagaraRendererProperties) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(FNiagaraVariableAttributeBinding) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FNiagaraTypeDefinition) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraComponentPropertyBinding) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(UNiagaraComponentRendererProperties) == 0x0160); // 352 bytes (0x000080 - 0x000160)
static_assert(sizeof(UNiagaraComponentSettings) == 0x0118); // 280 bytes (0x000028 - 0x000118)
static_assert(sizeof(UNiagaraConvertInPlaceUtilityBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraDataInterface2DArrayTexture) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraDataInterfaceArray) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat2) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat3) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat4) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayColor) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayQuat) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraDataInterfaceArrayInt32) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceArrayBool) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceAudioSubmix) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraDataInterfaceAudioOscilloscope) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceAudioPlayer) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UNiagaraDataInterfaceAudioSpectrum) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UNiagaraDataInterfaceCamera) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraDataInterfaceCollisionQuery) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceCurveBase) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UNiagaraDataInterfaceColorCurve) == 0x0270); // 624 bytes (0x000070 - 0x000270)
static_assert(sizeof(UNiagaraDataInterfaceCurlNoise) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceCurve) == 0x00F0); // 240 bytes (0x000070 - 0x0000F0)
static_assert(sizeof(UNiagaraParticleCallbackHandler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNiagaraUserParameterBinding) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UNiagaraDataInterfaceExport) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UNiagaraDataInterfaceGBuffer) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNiagaraDataInterfaceRWBase) == 0x00D8); // 216 bytes (0x000038 - 0x0000D8)
static_assert(sizeof(UNiagaraDataInterfaceGrid2D) == 0x00F8); // 248 bytes (0x0000D8 - 0x0000F8)
static_assert(sizeof(UNiagaraDataInterfaceGrid2DCollection) == 0x01C0); // 448 bytes (0x0000F8 - 0x0001C0)
static_assert(sizeof(UNiagaraDataInterfaceGrid2DCollectionReader) == 0x0168); // 360 bytes (0x0000F8 - 0x000168)
static_assert(sizeof(UNiagaraDataInterfaceGrid3D) == 0x0100); // 256 bytes (0x0000D8 - 0x000100)
static_assert(sizeof(UNiagaraDataInterfaceGrid3DCollection) == 0x0180); // 384 bytes (0x000100 - 0x000180)
static_assert(sizeof(UNiagaraDataInterfaceLandscape) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraDataInterfaceNeighborGrid3D) == 0x0108); // 264 bytes (0x000100 - 0x000108)
static_assert(sizeof(UNiagaraDataInterfaceOcclusion) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNiagaraDataInterfaceParticleRead) == 0x00E8); // 232 bytes (0x0000D8 - 0x0000E8)
static_assert(sizeof(UNiagaraDataInterfacePlatformSet) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UNiagaraDataInterfaceRenderTarget2D) == 0x0158); // 344 bytes (0x0000D8 - 0x000158)
static_assert(sizeof(UNiagaraDataInterfaceRenderTarget2DArray) == 0x0158); // 344 bytes (0x0000D8 - 0x000158)
static_assert(sizeof(UNiagaraDataInterfaceRenderTargetVolume) == 0x0158); // 344 bytes (0x0000D8 - 0x000158)
static_assert(sizeof(UNiagaraDataInterfaceSimpleCounter) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNiagaraDataInterfaceSkeletalMesh) == 0x00C0); // 192 bytes (0x000038 - 0x0000C0)
static_assert(sizeof(UNiagaraDataInterfaceSpline) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(FNDIStaticMeshSectionFilter) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UNiagaraDataInterfaceStaticMesh) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(UNiagaraDataInterfaceTexture) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraDataInterfaceVector2DCurve) == 0x0170); // 368 bytes (0x000070 - 0x000170)
static_assert(sizeof(UNiagaraDataInterfaceVector4Curve) == 0x0270); // 624 bytes (0x000070 - 0x000270)
static_assert(sizeof(UNiagaraDataInterfaceVectorCurve) == 0x01F0); // 496 bytes (0x000070 - 0x0001F0)
static_assert(sizeof(UNiagaraDataInterfaceVectorField) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceVolumeTexture) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraEditorDataBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraSignificanceHandler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraSignificanceHandlerDistance) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraSignificanceHandlerAge) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNiagaraSystemScalabilitySettings) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FNiagaraSystemScalabilitySettingsArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraEmitterScalabilitySettings) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FNiagaraEmitterScalabilitySettingsArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UNiagaraEffectType) == 0x0110); // 272 bytes (0x000028 - 0x000110)
static_assert(sizeof(FNiagaraEventReceiverProperties) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraTypeLayoutInfo) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FNiagaraVariableLayoutInfo) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FNiagaraDataSetID) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraDataSetCompiledData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNiagaraEventGeneratorProperties) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FNiagaraEmitterScriptProperties) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraDetailsLevelScaleOverrides) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FNiagaraEmitterScalabilityOverride) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(FNiagaraEmitterScalabilityOverrides) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraEventScriptProperties) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UNiagaraEmitter) == 0x02A0); // 672 bytes (0x000028 - 0x0002A0)
static_assert(sizeof(UNiagaraEventReceiverEmitterAction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraEventReceiverEmitterAction_SpawnParticles) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UNiagaraFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraLightRendererProperties) == 0x02D8); // 728 bytes (0x000080 - 0x0002D8)
static_assert(sizeof(FNiagaraMeshMaterialOverride) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UNiagaraMeshRendererProperties) == 0x0678); // 1656 bytes (0x000080 - 0x000678)
static_assert(sizeof(UNiagaraMessageDataBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraParameterCollectionInstance) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(UNiagaraParameterCollection) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UNiagaraPrecompileContainer) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ANiagaraPreviewBase) == 0x0318); // 792 bytes (0x000318 - 0x000318)
static_assert(sizeof(UNiagaraPreviewAxis) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamBase) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamInt32) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamFloat) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamVector2D) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamVector) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamVector4) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamLinearColor) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(ANiagaraPreviewGrid) == 0x0368); // 872 bytes (0x000318 - 0x000368)
static_assert(sizeof(FNiagaraRibbonUVSettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UNiagaraRibbonRendererProperties) == 0x07D8); // 2008 bytes (0x000080 - 0x0007D8)
static_assert(sizeof(FNiagaraScriptExecutionPaddingInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraScriptExecutionParameterStore) == 0x0098); // 152 bytes (0x000078 - 0x000098)
static_assert(sizeof(FNiagaraBoundParameter) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraVMExecutableDataId) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FNiagaraScriptDataUsageInfo) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraScriptDataInterfaceCompileInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FVMFunctionSpecifier) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVMExternalFunctionBindingInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FNiagaraDataSetProperties) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraStatScope) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraVMExecutableData) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(sizeof(FNiagaraScriptDataInterfaceInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UNiagaraScript) == 0x02C0); // 704 bytes (0x000028 - 0x0002C0)
static_assert(sizeof(UNiagaraScriptSourceBase) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UNiagaraSettings) == 0x00C0); // 192 bytes (0x000038 - 0x0000C0)
static_assert(sizeof(UNiagaraSimulationStageBase) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FNiagaraVariableDataInterfaceBinding) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UNiagaraSimulationStageGeneric) == 0x0070); // 112 bytes (0x000040 - 0x000070)
static_assert(sizeof(FNiagaraMaterialAttributeBinding) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(UNiagaraSpriteRendererProperties) == 0x07A0); // 1952 bytes (0x000080 - 0x0007A0)
static_assert(sizeof(FNiagaraSystemScalabilityOverride) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(FNiagaraSystemScalabilityOverrides) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraEmitterHandle) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraParameterDataSetBinding) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraParameterDataSetBindingCollection) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraSystemCompiledData) == 0x0218); // 536 bytes (0x000000 - 0x000218)
static_assert(sizeof(UNiagaraSystem) == 0x0480); // 1152 bytes (0x000030 - 0x000480)
static_assert(sizeof(FMovieSceneNiagaraParameterSectionTemplate) == 0x0040); // 64 bytes (0x000020 - 0x000040)
static_assert(sizeof(FMovieSceneNiagaraBoolParameterSectionTemplate) == 0x00D0); // 208 bytes (0x000040 - 0x0000D0)
static_assert(sizeof(FMovieSceneNiagaraColorParameterSectionTemplate) == 0x02C0); // 704 bytes (0x000040 - 0x0002C0)
static_assert(sizeof(FMovieSceneNiagaraFloatParameterSectionTemplate) == 0x00E0); // 224 bytes (0x000040 - 0x0000E0)
static_assert(sizeof(FMovieSceneNiagaraIntegerParameterSectionTemplate) == 0x00D0); // 208 bytes (0x000040 - 0x0000D0)
static_assert(sizeof(FMovieSceneNiagaraSystemTrackImplementation) == 0x0028); // 40 bytes (0x000010 - 0x000028)
static_assert(sizeof(FMovieSceneNiagaraSystemTrackTemplate) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FMovieSceneNiagaraVectorParameterSectionTemplate) == 0x02C8); // 712 bytes (0x000040 - 0x0002C8)
static_assert(sizeof(FNiagaraRandInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraScriptVariableBinding) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraVariableInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNiagaraSystemUpdateContext) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FNiagaraFunctionSignature) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FNiagaraEmitterNameSettingsRef) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBasicParticleData) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMeshTriCoordinate) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraGraphViewSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraCollisionEventPayload) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FNiagaraParameters) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraPlatformSetConflictEntry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraPlatformSetConflictInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraScalabilityManager) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNiagaraModuleDependency) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraScriptInstanceParameterStore) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(FNiagaraScriptHighlight) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraSystemCompileRequest) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FEmitterCompiledScriptPair) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FNiagaraEmitterCompiledData) == 0x0130); // 304 bytes (0x000000 - 0x000130)
static_assert(sizeof(FNiagaraInputConditionMetadata) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraVariableMetaData) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FNiagaraParameterScopeInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraCompileHashVisitorDebugInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraSpawnInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraMatrix) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNiagaraParameterMap) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraNumeric) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraHalfVector4) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraHalfVector3) == 0x0006); // 6 bytes (0x000000 - 0x000006)
static_assert(sizeof(FNiagaraHalfVector2) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraHalf) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FNiagaraBool) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraInt32) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraFloat) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraVariant) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraWorldManagerTickFunction) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(offsetof(UMovieSceneNiagaraTrack, Sections) == 0x0078);
static_assert(offsetof(FNiagaraVariableBase, Name) == 0x0000);
static_assert(offsetof(FNiagaraVariableBase, TypeDefHandle) == 0x0008);
static_assert(offsetof(FNiagaraVariable, VarData) == 0x0010);
static_assert(offsetof(UMovieSceneNiagaraParameterTrack, Parameter) == 0x0088);
static_assert(offsetof(ANiagaraActor, NiagaraComponent) == 0x0318);
static_assert(offsetof(FNiagaraParameterStore, Owner) == 0x0008);
static_assert(offsetof(FNiagaraParameterStore, SortedParameterOffsets) == 0x0010);
static_assert(offsetof(FNiagaraParameterStore, ParameterData) == 0x0020);
static_assert(offsetof(FNiagaraParameterStore, DataInterfaces) == 0x0030);
static_assert(offsetof(FNiagaraParameterStore, UObjects) == 0x0040);
static_assert(offsetof(FNiagaraUserRedirectionParameterStore, UserParameterRedirects) == 0x0078);
static_assert(offsetof(FNiagaraMaterialOverride, Material) == 0x0000);
static_assert(offsetof(FNiagaraMaterialOverride, EmitterRendererProperty) == 0x0010);
static_assert(offsetof(UNiagaraComponent, Asset) == 0x04F0);
static_assert(offsetof(UNiagaraComponent, OverrideParameters) == 0x0500);
static_assert(offsetof(UNiagaraComponent, EmitterMaterials) == 0x0600);
static_assert(offsetof(UNiagaraComponent, AutoAttachParent) == 0x0628);
static_assert(offsetof(UNiagaraComponent, AutoAttachSocketName) == 0x0630);
static_assert(offsetof(FNCPoolElement, Component) == 0x0000);
static_assert(offsetof(FNCPool, FreeElements) == 0x0000);
static_assert(offsetof(FNCPool, InUseComponents_Auto) == 0x0010);
static_assert(offsetof(FNCPool, InUseComponents_Manual) == 0x0020);
static_assert(offsetof(UNiagaraComponentPool, WorldParticleSystemPools) == 0x0028);
static_assert(offsetof(FNiagaraDeviceProfileStateEntry, ProfileName) == 0x0000);
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, CVarName) == 0x0000);
static_assert(offsetof(FNiagaraPlatformSet, DeviceProfileStates) == 0x0008);
static_assert(offsetof(FNiagaraPlatformSet, CVarConditions) == 0x0018);
static_assert(offsetof(UNiagaraRendererProperties, Platforms) == 0x0028);
static_assert(offsetof(FNiagaraVariableAttributeBinding, ParamMapVariable) == 0x0000);
static_assert(offsetof(FNiagaraVariableAttributeBinding, DataSetVariable) == 0x0010);
static_assert(offsetof(FNiagaraVariableAttributeBinding, RootVariable) == 0x0030);
static_assert(offsetof(FNiagaraTypeDefinition, ClassStructOrEnum) == 0x0000);
static_assert(offsetof(FNiagaraComponentPropertyBinding, AttributeBinding) == 0x0000);
static_assert(offsetof(FNiagaraComponentPropertyBinding, PropertyName) == 0x0058);
static_assert(offsetof(FNiagaraComponentPropertyBinding, PropertyType) == 0x0060);
static_assert(offsetof(FNiagaraComponentPropertyBinding, MetadataSetterName) == 0x0070);
static_assert(offsetof(FNiagaraComponentPropertyBinding, WritableValue) == 0x0078);
static_assert(offsetof(UNiagaraComponentRendererProperties, ComponentType) == 0x0080);
static_assert(offsetof(UNiagaraComponentRendererProperties, EnabledBinding) == 0x0090);
static_assert(offsetof(UNiagaraComponentRendererProperties, TemplateComponent) == 0x00F0);
static_assert(offsetof(UNiagaraComponentRendererProperties, PropertyBindings) == 0x00F8);
static_assert(offsetof(UNiagaraDataInterface2DArrayTexture, Texture) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat, FloatData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat2, FloatData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat3, FloatData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat4, FloatData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayColor, ColorData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayQuat, QuatData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayInt32, IntData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceArrayBool, BoolData) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceAudioSubmix, Submix) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceAudioOscilloscope, Submix) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, SoundToPlay) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, Attenuation) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, Concurrency) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, ParameterNames) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, ShaderLUT) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, ExposedName) == 0x005C);
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, ExposedTexture) == 0x0068);
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, RedCurve) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, GreenCurve) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, BlueCurve) == 0x0170);
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, AlphaCurve) == 0x01F0);
static_assert(offsetof(UNiagaraDataInterfaceCurve, Curve) == 0x0070);
static_assert(offsetof(FNiagaraUserParameterBinding, Parameter) == 0x0000);
static_assert(offsetof(UNiagaraDataInterfaceExport, CallbackHandlerParameter) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceGrid2D, WorldBBoxSize) == 0x00EC);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollection, RenderTargetUserParameter) == 0x00F8);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollection, ManagedRenderTargets) == 0x0170);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollectionReader, EmitterName) == 0x00F8);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollectionReader, DIName) == 0x0108);
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, NumCells) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, WorldBBoxSize) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollection, RenderTargetUserParameter) == 0x0108);
static_assert(offsetof(UNiagaraDataInterfaceLandscape, SourceLandscape) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceParticleRead, EmitterName) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfacePlatformSet, Platforms) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, Size) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, RenderTargetUserParameter) == 0x00E8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, ManagedRenderTargets) == 0x0108);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, Size) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, RenderTargetUserParameter) == 0x00E8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, ManagedRenderTargets) == 0x0108);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, Size) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, RenderTargetUserParameter) == 0x00E8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, ManagedRenderTargets) == 0x0108);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, Source) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, MeshUserParameter) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SourceComponent) == 0x0068);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SamplingRegions) == 0x0078);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, FilteredBones) == 0x0090);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, FilteredSockets) == 0x00A0);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, ExcludeBoneName) == 0x00B0);
static_assert(offsetof(UNiagaraDataInterfaceSpline, Source) == 0x0038);
static_assert(offsetof(FNDIStaticMeshSectionFilter, AllowedMaterialSlots) == 0x0000);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, DefaultMesh) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, Source) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SourceComponent) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SectionFilter) == 0x0058);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, FilteredSockets) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceTexture, Texture) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceVector2DCurve, XCurve) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceVector2DCurve, YCurve) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, XCurve) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, YCurve) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, ZCurve) == 0x0170);
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, WCurve) == 0x01F0);
static_assert(offsetof(UNiagaraDataInterfaceVectorCurve, XCurve) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceVectorCurve, YCurve) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceVectorCurve, ZCurve) == 0x0170);
static_assert(offsetof(UNiagaraDataInterfaceVectorField, Field) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceVolumeTexture, Texture) == 0x0038);
static_assert(offsetof(FNiagaraSystemScalabilitySettings, Platforms) == 0x0000);
static_assert(offsetof(FNiagaraSystemScalabilitySettingsArray, Settings) == 0x0000);
static_assert(offsetof(FNiagaraEmitterScalabilitySettings, Platforms) == 0x0000);
static_assert(offsetof(FNiagaraEmitterScalabilitySettingsArray, Settings) == 0x0000);
static_assert(offsetof(UNiagaraEffectType, SignificanceHandler) == 0x0030);
static_assert(offsetof(UNiagaraEffectType, DetailLevelScalabilitySettings) == 0x0038);
static_assert(offsetof(UNiagaraEffectType, SystemScalabilitySettings) == 0x0048);
static_assert(offsetof(UNiagaraEffectType, EmitterScalabilitySettings) == 0x0058);
static_assert(offsetof(FNiagaraEventReceiverProperties, Name) == 0x0000);
static_assert(offsetof(FNiagaraEventReceiverProperties, SourceEventGenerator) == 0x0008);
static_assert(offsetof(FNiagaraEventReceiverProperties, SourceEmitter) == 0x0010);
static_assert(offsetof(FNiagaraTypeLayoutInfo, FloatComponentByteOffsets) == 0x0000);
static_assert(offsetof(FNiagaraTypeLayoutInfo, FloatComponentRegisterOffsets) == 0x0010);
static_assert(offsetof(FNiagaraTypeLayoutInfo, Int32ComponentByteOffsets) == 0x0020);
static_assert(offsetof(FNiagaraTypeLayoutInfo, Int32ComponentRegisterOffsets) == 0x0030);
static_assert(offsetof(FNiagaraTypeLayoutInfo, HalfComponentByteOffsets) == 0x0040);
static_assert(offsetof(FNiagaraTypeLayoutInfo, HalfComponentRegisterOffsets) == 0x0050);
static_assert(offsetof(FNiagaraVariableLayoutInfo, LayoutInfo) == 0x0010);
static_assert(offsetof(FNiagaraDataSetID, Name) == 0x0000);
static_assert(offsetof(FNiagaraDataSetCompiledData, Variables) == 0x0000);
static_assert(offsetof(FNiagaraDataSetCompiledData, VariableLayouts) == 0x0010);
static_assert(offsetof(FNiagaraDataSetCompiledData, ID) == 0x0020);
static_assert(offsetof(FNiagaraEventGeneratorProperties, ID) == 0x0004);
static_assert(offsetof(FNiagaraEventGeneratorProperties, DataSetCompiledData) == 0x0010);
static_assert(offsetof(FNiagaraEmitterScriptProperties, Script) == 0x0000);
static_assert(offsetof(FNiagaraEmitterScriptProperties, EventReceivers) == 0x0008);
static_assert(offsetof(FNiagaraEmitterScriptProperties, EventGenerators) == 0x0018);
static_assert(offsetof(FNiagaraEmitterScalabilityOverrides, Overrides) == 0x0000);
static_assert(offsetof(FNiagaraEventScriptProperties, SourceEmitterID) == 0x0034);
static_assert(offsetof(FNiagaraEventScriptProperties, SourceEventName) == 0x0044);
static_assert(offsetof(UNiagaraEmitter, UpdateScriptProps) == 0x0038);
static_assert(offsetof(UNiagaraEmitter, SpawnScriptProps) == 0x0060);
static_assert(offsetof(UNiagaraEmitter, FixedBounds) == 0x008C);
static_assert(offsetof(UNiagaraEmitter, GlobalSpawnCountScaleOverrides) == 0x00B0);
static_assert(offsetof(UNiagaraEmitter, Platforms) == 0x00C8);
static_assert(offsetof(UNiagaraEmitter, ScalabilityOverrides) == 0x00F8);
static_assert(offsetof(UNiagaraEmitter, UniqueEmitterName) == 0x0170);
static_assert(offsetof(UNiagaraEmitter, RendererProperties) == 0x0180);
static_assert(offsetof(UNiagaraEmitter, EventHandlerScriptProps) == 0x0190);
static_assert(offsetof(UNiagaraEmitter, SimulationStages) == 0x01A0);
static_assert(offsetof(UNiagaraEmitter, GPUComputeScript) == 0x01B0);
static_assert(offsetof(UNiagaraEmitter, SharedEventGeneratorIds) == 0x01B8);
static_assert(offsetof(UNiagaraLightRendererProperties, ColorAdd) == 0x0088);
static_assert(offsetof(UNiagaraLightRendererProperties, LightRenderingEnabledBinding) == 0x0098);
static_assert(offsetof(UNiagaraLightRendererProperties, LightExponentBinding) == 0x00F0);
static_assert(offsetof(UNiagaraLightRendererProperties, PositionBinding) == 0x0148);
static_assert(offsetof(UNiagaraLightRendererProperties, ColorBinding) == 0x01A0);
static_assert(offsetof(UNiagaraLightRendererProperties, RadiusBinding) == 0x01F8);
static_assert(offsetof(UNiagaraLightRendererProperties, VolumetricScatteringBinding) == 0x0250);
static_assert(offsetof(FNiagaraMeshMaterialOverride, ExplicitMat) == 0x0000);
static_assert(offsetof(FNiagaraMeshMaterialOverride, UserParamBinding) == 0x0008);
static_assert(offsetof(UNiagaraMeshRendererProperties, ParticleMesh) == 0x0080);
static_assert(offsetof(UNiagaraMeshRendererProperties, OverrideMaterials) == 0x0090);
static_assert(offsetof(UNiagaraMeshRendererProperties, SubImageSize) == 0x00A0);
static_assert(offsetof(UNiagaraMeshRendererProperties, LockedAxis) == 0x00B4);
static_assert(offsetof(UNiagaraMeshRendererProperties, PivotOffset) == 0x00C4);
static_assert(offsetof(UNiagaraMeshRendererProperties, PositionBinding) == 0x00E8);
static_assert(offsetof(UNiagaraMeshRendererProperties, ColorBinding) == 0x0140);
static_assert(offsetof(UNiagaraMeshRendererProperties, VelocityBinding) == 0x0198);
static_assert(offsetof(UNiagaraMeshRendererProperties, MeshOrientationBinding) == 0x01F0);
static_assert(offsetof(UNiagaraMeshRendererProperties, ScaleBinding) == 0x0248);
static_assert(offsetof(UNiagaraMeshRendererProperties, SubImageIndexBinding) == 0x02A0);
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterialBinding) == 0x02F8);
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterial1Binding) == 0x0350);
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterial2Binding) == 0x03A8);
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterial3Binding) == 0x0400);
static_assert(offsetof(UNiagaraMeshRendererProperties, MaterialRandomBinding) == 0x0458);
static_assert(offsetof(UNiagaraMeshRendererProperties, CustomSortingBinding) == 0x04B0);
static_assert(offsetof(UNiagaraMeshRendererProperties, NormalizedAgeBinding) == 0x0508);
static_assert(offsetof(UNiagaraMeshRendererProperties, CameraOffsetBinding) == 0x0560);
static_assert(offsetof(UNiagaraMeshRendererProperties, RendererVisibilityTagBinding) == 0x05B8);
static_assert(offsetof(UNiagaraParameterCollectionInstance, Collection) == 0x0028);
static_assert(offsetof(UNiagaraParameterCollectionInstance, OverridenParameters) == 0x0030);
static_assert(offsetof(UNiagaraParameterCollectionInstance, ParameterStorage) == 0x0040);
static_assert(offsetof(UNiagaraParameterCollection, Namespace) == 0x0028);
static_assert(offsetof(UNiagaraParameterCollection, Parameters) == 0x0030);
static_assert(offsetof(UNiagaraParameterCollection, SourceMaterialCollection) == 0x0040);
static_assert(offsetof(UNiagaraParameterCollection, DefaultInstance) == 0x0048);
static_assert(offsetof(UNiagaraParameterCollection, CompileId) == 0x0050);
static_assert(offsetof(UNiagaraPrecompileContainer, Scripts) == 0x0028);
static_assert(offsetof(UNiagaraPrecompileContainer, System) == 0x0038);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamBase, Param) == 0x0028);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector2D, Min) == 0x0038);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector2D, Max) == 0x0040);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector, Min) == 0x0038);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector, Max) == 0x0044);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector4, Min) == 0x0040);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector4, Max) == 0x0050);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamLinearColor, Min) == 0x0038);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamLinearColor, Max) == 0x0048);
static_assert(offsetof(ANiagaraPreviewGrid, System) == 0x0318);
static_assert(offsetof(ANiagaraPreviewGrid, PreviewAxisX) == 0x0328);
static_assert(offsetof(ANiagaraPreviewGrid, PreviewAxisY) == 0x0330);
static_assert(offsetof(ANiagaraPreviewGrid, PreviewClass) == 0x0338);
static_assert(offsetof(ANiagaraPreviewGrid, PreviewComponents) == 0x0350);
static_assert(offsetof(FNiagaraRibbonUVSettings, Offset) == 0x0010);
static_assert(offsetof(FNiagaraRibbonUVSettings, Scale) == 0x0018);
static_assert(offsetof(UNiagaraRibbonRendererProperties, Material) == 0x0080);
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaterialUserParamBinding) == 0x0088);
static_assert(offsetof(UNiagaraRibbonRendererProperties, UV0Settings) == 0x00AC);
static_assert(offsetof(UNiagaraRibbonRendererProperties, UV1Settings) == 0x00D0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, PositionBinding) == 0x0110);
static_assert(offsetof(UNiagaraRibbonRendererProperties, ColorBinding) == 0x0168);
static_assert(offsetof(UNiagaraRibbonRendererProperties, VelocityBinding) == 0x01C0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, NormalizedAgeBinding) == 0x0218);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonTwistBinding) == 0x0270);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonWidthBinding) == 0x02C8);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonFacingBinding) == 0x0320);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonIdBinding) == 0x0378);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonLinkOrderBinding) == 0x03D0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaterialRandomBinding) == 0x0428);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterialBinding) == 0x0480);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterial1Binding) == 0x04D8);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterial2Binding) == 0x0530);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterial3Binding) == 0x0588);
static_assert(offsetof(UNiagaraRibbonRendererProperties, U0OverrideBinding) == 0x05E0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, V0RangeOverrideBinding) == 0x0638);
static_assert(offsetof(UNiagaraRibbonRendererProperties, U1OverrideBinding) == 0x0690);
static_assert(offsetof(UNiagaraRibbonRendererProperties, V1RangeOverrideBinding) == 0x06E8);
static_assert(offsetof(FNiagaraScriptExecutionParameterStore, PaddingInfo) == 0x0080);
static_assert(offsetof(FNiagaraBoundParameter, Parameter) == 0x0000);
static_assert(offsetof(FNiagaraVMExecutableDataId, CompilerVersionID) == 0x0000);
static_assert(offsetof(FNiagaraVMExecutableDataId, ScriptUsageTypeID) == 0x0014);
static_assert(offsetof(FNiagaraVMExecutableDataId, BaseScriptID) == 0x0028);
static_assert(offsetof(FNiagaraVMExecutableDataId, BaseScriptCompileHash) == 0x0038);
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, Name) == 0x0000);
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, Type) == 0x0010);
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, RegisteredParameterMapRead) == 0x0020);
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, RegisteredParameterMapWrite) == 0x0028);
static_assert(offsetof(FVMFunctionSpecifier, Key) == 0x0000);
static_assert(offsetof(FVMFunctionSpecifier, Value) == 0x0008);
static_assert(offsetof(FVMExternalFunctionBindingInfo, Name) == 0x0000);
static_assert(offsetof(FVMExternalFunctionBindingInfo, OwnerName) == 0x0008);
static_assert(offsetof(FVMExternalFunctionBindingInfo, InputParamLocations) == 0x0010);
static_assert(offsetof(FVMExternalFunctionBindingInfo, FunctionSpecifiers) == 0x0028);
static_assert(offsetof(FNiagaraDataSetProperties, ID) == 0x0000);
static_assert(offsetof(FNiagaraDataSetProperties, Variables) == 0x0010);
static_assert(offsetof(FNiagaraStatScope, FullName) == 0x0000);
static_assert(offsetof(FNiagaraStatScope, FriendlyName) == 0x0008);
static_assert(offsetof(FNiagaraVMExecutableData, ByteCode) == 0x0000);
static_assert(offsetof(FNiagaraVMExecutableData, OptimizedByteCode) == 0x0010);
static_assert(offsetof(FNiagaraVMExecutableData, ScriptLiterals) == 0x0028);
static_assert(offsetof(FNiagaraVMExecutableData, Attributes) == 0x0038);
static_assert(offsetof(FNiagaraVMExecutableData, DataUsage) == 0x0048);
static_assert(offsetof(FNiagaraVMExecutableData, DataInterfaceInfo) == 0x0050);
static_assert(offsetof(FNiagaraVMExecutableData, CalledVMExternalFunctions) == 0x0060);
static_assert(offsetof(FNiagaraVMExecutableData, ReadDataSets) == 0x0080);
static_assert(offsetof(FNiagaraVMExecutableData, WriteDataSets) == 0x0090);
static_assert(offsetof(FNiagaraVMExecutableData, StatScopes) == 0x00A0);
static_assert(offsetof(FNiagaraVMExecutableData, DIParamInfo) == 0x00B0);
static_assert(offsetof(FNiagaraVMExecutableData, SimulationStageMetaData) == 0x00C8);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, DataInterface) == 0x0000);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, Name) == 0x0008);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, Type) == 0x0018);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, RegisteredParameterMapRead) == 0x0028);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, RegisteredParameterMapWrite) == 0x0030);
static_assert(offsetof(UNiagaraScript, UsageId) == 0x0030);
static_assert(offsetof(UNiagaraScript, RapidIterationParameters) == 0x0040);
static_assert(offsetof(UNiagaraScript, ScriptExecutionParamStore) == 0x00B8);
static_assert(offsetof(UNiagaraScript, ScriptExecutionBoundParameters) == 0x0150);
static_assert(offsetof(UNiagaraScript, CachedScriptVMId) == 0x0160);
static_assert(offsetof(UNiagaraScript, CachedScriptVM) == 0x01B8);
static_assert(offsetof(UNiagaraScript, CachedParameterCollectionReferences) == 0x0298);
static_assert(offsetof(UNiagaraScript, CachedDefaultDataInterfaces) == 0x02A8);
static_assert(offsetof(UNiagaraSettings, DefaultEffectType) == 0x0038);
static_assert(offsetof(UNiagaraSettings, QualityLevels) == 0x0050);
static_assert(offsetof(UNiagaraSettings, ComponentRendererWarningsPerClass) == 0x0060);
static_assert(offsetof(UNiagaraSettings, DefaultEffectTypePtr) == 0x00B8);
static_assert(offsetof(UNiagaraSimulationStageBase, Script) == 0x0028);
static_assert(offsetof(UNiagaraSimulationStageBase, SimulationStageName) == 0x0030);
static_assert(offsetof(FNiagaraVariableDataInterfaceBinding, BoundVariable) == 0x0000);
static_assert(offsetof(UNiagaraSimulationStageGeneric, DataInterface) == 0x0050);
static_assert(offsetof(FNiagaraMaterialAttributeBinding, MaterialParameterName) == 0x0000);
static_assert(offsetof(FNiagaraMaterialAttributeBinding, NiagaraVariable) == 0x0008);
static_assert(offsetof(FNiagaraMaterialAttributeBinding, ResolvedNiagaraVariable) == 0x0014);
static_assert(offsetof(FNiagaraMaterialAttributeBinding, NiagaraChildVariable) == 0x0020);
static_assert(offsetof(UNiagaraSpriteRendererProperties, Material) == 0x0080);
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialUserParamBinding) == 0x0090);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PivotInUVSpace) == 0x00B4);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SubImageSize) == 0x00C0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PositionBinding) == 0x00E8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, ColorBinding) == 0x0140);
static_assert(offsetof(UNiagaraSpriteRendererProperties, VelocityBinding) == 0x0198);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteRotationBinding) == 0x01F0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteSizeBinding) == 0x0248);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteFacingBinding) == 0x02A0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteAlignmentBinding) == 0x02F8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SubImageIndexBinding) == 0x0350);
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterialBinding) == 0x03A8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterial1Binding) == 0x0400);
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterial2Binding) == 0x0458);
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterial3Binding) == 0x04B0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, CameraOffsetBinding) == 0x0508);
static_assert(offsetof(UNiagaraSpriteRendererProperties, UVScaleBinding) == 0x0560);
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialRandomBinding) == 0x05B8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, CustomSortingBinding) == 0x0610);
static_assert(offsetof(UNiagaraSpriteRendererProperties, NormalizedAgeBinding) == 0x0668);
static_assert(offsetof(UNiagaraSpriteRendererProperties, RendererVisibilityTagBinding) == 0x06C0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialParameterBindings) == 0x0718);
static_assert(offsetof(FNiagaraSystemScalabilityOverrides, Overrides) == 0x0000);
static_assert(offsetof(FNiagaraEmitterHandle, ID) == 0x0000);
static_assert(offsetof(FNiagaraEmitterHandle, IdName) == 0x0010);
static_assert(offsetof(FNiagaraEmitterHandle, Name) == 0x001C);
static_assert(offsetof(FNiagaraEmitterHandle, Instance) == 0x0028);
static_assert(offsetof(FNiagaraParameterDataSetBindingCollection, FloatOffsets) == 0x0000);
static_assert(offsetof(FNiagaraParameterDataSetBindingCollection, Int32Offsets) == 0x0010);
static_assert(offsetof(FNiagaraSystemCompiledData, InstanceParamStore) == 0x0000);
static_assert(offsetof(FNiagaraSystemCompiledData, DataSetCompiledData) == 0x0078);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceParamsDataSetCompiledData) == 0x00B8);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceParamsDataSetCompiledData) == 0x00F8);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceGlobalBinding) == 0x0138);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceSystemBinding) == 0x0158);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceOwnerBinding) == 0x0178);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceEmitterBindings) == 0x0198);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceGlobalBinding) == 0x01A8);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceSystemBinding) == 0x01C8);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceOwnerBinding) == 0x01E8);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceEmitterBindings) == 0x0208);
static_assert(offsetof(UNiagaraSystem, EffectType) == 0x0038);
static_assert(offsetof(UNiagaraSystem, ScalabilityOverrides) == 0x0048);
static_assert(offsetof(UNiagaraSystem, SystemScalabilityOverrides) == 0x0058);
static_assert(offsetof(UNiagaraSystem, EmitterHandles) == 0x0068);
static_assert(offsetof(UNiagaraSystem, ParameterCollectionOverrides) == 0x0078);
static_assert(offsetof(UNiagaraSystem, SystemSpawnScript) == 0x0088);
static_assert(offsetof(UNiagaraSystem, SystemUpdateScript) == 0x0090);
static_assert(offsetof(UNiagaraSystem, SystemCompiledData) == 0x00A8);
static_assert(offsetof(UNiagaraSystem, ExposedParameters) == 0x02C0);
static_assert(offsetof(UNiagaraSystem, FixedBounds) == 0x0388);
static_assert(offsetof(UNiagaraSystem, UserDINamesReadInSystemScripts) == 0x03B8);
static_assert(offsetof(FMovieSceneNiagaraParameterSectionTemplate, Parameter) == 0x0020);
static_assert(offsetof(FMovieSceneNiagaraBoolParameterSectionTemplate, BoolChannel) == 0x0040);
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, RedChannel) == 0x0040);
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, GreenChannel) == 0x00E0);
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, BlueChannel) == 0x0180);
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, AlphaChannel) == 0x0220);
static_assert(offsetof(FMovieSceneNiagaraFloatParameterSectionTemplate, FloatChannel) == 0x0040);
static_assert(offsetof(FMovieSceneNiagaraIntegerParameterSectionTemplate, IntegerChannel) == 0x0040);
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionStartFrame) == 0x0010);
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEndFrame) == 0x0014);
static_assert(offsetof(FMovieSceneNiagaraVectorParameterSectionTemplate, VectorChannels) == 0x0040);
static_assert(offsetof(FNiagaraScriptVariableBinding, Name) == 0x0000);
static_assert(offsetof(FNiagaraVariableInfo, Variable) == 0x0000);
static_assert(offsetof(FNiagaraVariableInfo, Definition) == 0x0020);
static_assert(offsetof(FNiagaraVariableInfo, DataInterface) == 0x0038);
static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToReset) == 0x0000);
static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToReInit) == 0x0010);
static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToNotifySimDestroy) == 0x0020);
static_assert(offsetof(FNiagaraSystemUpdateContext, SystemSimsToDestroy) == 0x0030);
static_assert(offsetof(FNiagaraFunctionSignature, Name) == 0x0000);
static_assert(offsetof(FNiagaraFunctionSignature, Inputs) == 0x0008);
static_assert(offsetof(FNiagaraFunctionSignature, Outputs) == 0x0018);
static_assert(offsetof(FNiagaraFunctionSignature, OwnerName) == 0x0028);
static_assert(offsetof(FNiagaraFunctionSignature, FunctionSpecifiers) == 0x0040);
static_assert(offsetof(FNiagaraEmitterNameSettingsRef, SystemName) == 0x0000);
static_assert(offsetof(FNiagaraEmitterNameSettingsRef, EmitterName) == 0x0008);
static_assert(offsetof(FBasicParticleData, position) == 0x0000);
static_assert(offsetof(FBasicParticleData, Velocity) == 0x0010);
static_assert(offsetof(FMeshTriCoordinate, BaryCoord) == 0x0004);
static_assert(offsetof(FNiagaraGraphViewSettings, Location) == 0x0000);
static_assert(offsetof(FNiagaraCollisionEventPayload, CollisionPos) == 0x0000);
static_assert(offsetof(FNiagaraCollisionEventPayload, CollisionNormal) == 0x000C);
static_assert(offsetof(FNiagaraCollisionEventPayload, CollisionVelocity) == 0x0018);
static_assert(offsetof(FNiagaraParameters, Parameters) == 0x0000);
static_assert(offsetof(FNiagaraPlatformSetConflictEntry, ProfileName) == 0x0000);
static_assert(offsetof(FNiagaraPlatformSetConflictInfo, Conflicts) == 0x0008);
static_assert(offsetof(FNiagaraScalabilityManager, EffectType) == 0x0000);
static_assert(offsetof(FNiagaraScalabilityManager, ManagedComponents) == 0x0008);
static_assert(offsetof(FNiagaraModuleDependency, ID) == 0x0000);
static_assert(offsetof(FNiagaraModuleDependency, Description) == 0x0010);
static_assert(offsetof(FNiagaraScriptHighlight, Color) == 0x0000);
static_assert(offsetof(FNiagaraScriptHighlight, DisplayName) == 0x0010);
static_assert(offsetof(FNiagaraSystemCompileRequest, RootObjects) == 0x0008);
static_assert(offsetof(FNiagaraEmitterCompiledData, SpawnAttributes) == 0x0000);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterSpawnIntervalVar) == 0x0010);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterInterpSpawnStartDTVar) == 0x0030);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterSpawnGroupVar) == 0x0050);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterAgeVar) == 0x0070);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterRandomSeedVar) == 0x0090);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterInstanceSeedVar) == 0x00B0);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterTotalSpawnedParticlesVar) == 0x00D0);
static_assert(offsetof(FNiagaraEmitterCompiledData, DataSetCompiledData) == 0x00F0);
static_assert(offsetof(FNiagaraInputConditionMetadata, InputName) == 0x0000);
static_assert(offsetof(FNiagaraInputConditionMetadata, TargetValues) == 0x0008);
static_assert(offsetof(FNiagaraVariableMetaData, Description) == 0x0000);
static_assert(offsetof(FNiagaraVariableMetaData, CategoryName) == 0x0018);
static_assert(offsetof(FNiagaraVariableMetaData, EditCondition) == 0x0040);
static_assert(offsetof(FNiagaraVariableMetaData, VisibleCondition) == 0x0058);
static_assert(offsetof(FNiagaraVariableMetaData, PropertyMetaData) == 0x0070);
static_assert(offsetof(FNiagaraVariableMetaData, ParentAttribute) == 0x00C0);
static_assert(offsetof(FNiagaraVariableMetaData, ScopeName) == 0x00C8);
static_assert(offsetof(FNiagaraVariableMetaData, CachedNamespacelessVariableName) == 0x00E0);
static_assert(offsetof(FNiagaraParameterScopeInfo, NamespaceString) == 0x0008);
static_assert(offsetof(FNiagaraCompileHashVisitorDebugInfo, Object) == 0x0000);
static_assert(offsetof(FNiagaraCompileHashVisitorDebugInfo, PropertyKeys) == 0x0010);
static_assert(offsetof(FNiagaraCompileHashVisitorDebugInfo, PropertyValues) == 0x0020);
static_assert(offsetof(FNiagaraMatrix, Row0) == 0x0000);
static_assert(offsetof(FNiagaraMatrix, Row1) == 0x0010);
static_assert(offsetof(FNiagaraMatrix, Row2) == 0x0020);
static_assert(offsetof(FNiagaraMatrix, Row3) == 0x0030);
static_assert(offsetof(FNiagaraVariant, Object) == 0x0000);
static_assert(offsetof(FNiagaraVariant, DataInterface) == 0x0008);
static_assert(offsetof(FNiagaraVariant, Bytes) == 0x0010);
