// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara

#pragma pack(push, 0x1)

/// Class /Script/MFFluid.BlueprintableWindDirectionalSource
/// Size: 0x0320 (800 bytes) (0x000320 - 0x000320) align 8 MaxSize: 0x0320
class ABlueprintableWindDirectionalSource : public AWindDirectionalSource
{ 
public:
};

/// Class /Script/MFFluid.FluidBlueprintFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFluidBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/MFFluid.TickEditorActor
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class ATickEditorActor : public AActor
{ 
public:
	bool                                               bTickInEditor;                                              // 0x0318   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0319   (0x0007)  MISSED


	/// Functions
	// Function /Script/MFFluid.TickEditorActor.ReceiveBeginEditor
	// void ReceiveBeginEditor();                                                                                               // [0x182d6bc] Event|Protected|BlueprintEvent 
};

/// Class /Script/MFFluid.FluidFieldBaseActor
/// Size: 0x0320 (800 bytes) (0x000320 - 0x000320) align 8 MaxSize: 0x0320
class AFluidFieldBaseActor : public ATickEditorActor
{ 
public:
};

/// Class /Script/MFFluid.TickEditorActorComponent
/// Size: 0x0100 (256 bytes) (0x0000F8 - 0x000100) align 8 MaxSize: 0x0100
class UTickEditorActorComponent : public UActorComponent
{ 
public:
	bool                                               bTickEditor;                                                // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00F9   (0x0007)  MISSED


	/// Functions
	// Function /Script/MFFluid.TickEditorActorComponent.ReceiveBeginEditor
	// void ReceiveBeginEditor();                                                                                               // [0x182d6bc] Event|Protected|BlueprintEvent 
};

/// Class /Script/MFFluid.FluidFieldBaseComponent
/// Size: 0x0108 (264 bytes) (0x000100 - 0x000108) align 8 MaxSize: 0x0108
class UFluidFieldBaseComponent : public UTickEditorActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0100   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFFluid.FluidFieldBaseComponent.IsFluidSystemEnabled
	// bool IsFluidSystemEnabled();                                                                                             // [0x53d49b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MFFluid.FluidInteractionManager
/// Size: 0x05B8 (1464 bytes) (0x000320 - 0x0005B8) align 8 MaxSize: 0x05B8
class AFluidInteractionManager : public ATickEditorActor
{ 
public:
	float                                              ClipHeight;                                                 // 0x0320   (0x0004)  
	float                                              InteractionStrength;                                        // 0x0324   (0x0004)  
	float                                              InteractionFadeInSpeed;                                     // 0x0328   (0x0004)  
	float                                              InteractionFadeOutSpeed;                                    // 0x032C   (0x0004)  
	class UMaterialParameterCollection*                WindFieldMaterialParameters;                                // 0x0330   (0x0008)  
	class UTextureRenderTarget2D*                      HeightField;                                                // 0x0338   (0x0008)  
	class UTextureRenderTarget2D*                      HeightFieldBackBuffer;                                      // 0x0340   (0x0008)  
	class UTextureRenderTarget2D*                      HeightFieldPrevFrame;                                       // 0x0348   (0x0008)  
	class UMaterialInterface*                          CopyHeightMaterial;                                         // 0x0350   (0x0008)  
	class UMaterialInterface*                          FadeOutHeightMaterial;                                      // 0x0358   (0x0008)  
	class UMaterialInterface*                          DrawBorderMaterial;                                         // 0x0360   (0x0008)  
	class UMaterialInterface*                          VisualizeMeshMaterial;                                      // 0x0368   (0x0008)  
	TArray<class UFluidInteractorComponent*>           Interactors;                                                // 0x0370   (0x0010)  
	unsigned char                                      UnknownData00_6[0x210];                                     // 0x0380   (0x0210)  MISSED
	class UMaterialInstanceDynamic*                    CopyHeight_MID;                                             // 0x0590   (0x0008)  
	class UMaterialInstanceDynamic*                    CopyHeightPrevFrame_MID;                                    // 0x0598   (0x0008)  
	class UMaterialInstanceDynamic*                    FadeOutHeight_MID;                                          // 0x05A0   (0x0008)  
	class UMaterialInstanceDynamic*                    DrawBorder_MID;                                             // 0x05A8   (0x0008)  
	class UMaterialInstanceDynamic*                    DrawMeshHeight_MID;                                         // 0x05B0   (0x0008)  
};

/// Class /Script/MFFluid.FluidInteractorComponent
/// Size: 0x0290 (656 bytes) (0x000270 - 0x000290) align 16 MaxSize: 0x0288
class UFluidInteractorComponent : public USceneComponent
{ 
public:
	bool                                               bInteracting;                                               // 0x0270   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0271   (0x0003)  MISSED
	float                                              InteractionStrength;                                        // 0x0274   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0278   (0x0008)  MISSED
	class UFluidInteractorGroupComponent*              InteractorGroup;                                            // 0x0280   (0x0008)  
};

/// Class /Script/MFFluid.FluidInteractorGroupComponent
/// Size: 0x0290 (656 bytes) (0x000270 - 0x000290) align 16 MaxSize: 0x0290
class UFluidInteractorGroupComponent : public USceneComponent
{ 
public:
	bool                                               bInteracting;                                               // 0x0270   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0271   (0x0003)  MISSED
	float                                              InteractionStrength;                                        // 0x0274   (0x0004)  
	float                                              Scale;                                                      // 0x0278   (0x0004)  
	unsigned char                                      UnknownData01_7[0x14];                                      // 0x027C   (0x0014)  MISSED


	/// Functions
	// Function /Script/MFFluid.FluidInteractorGroupComponent.IsInteracting
	// bool IsInteracting();                                                                                                    // [0x53d49f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFFluid.FluidInteractorGroupComponent.GetScale
	// float GetScale();                                                                                                        // [0x53d48d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFFluid.FluidInteractorGroupComponent.GetInteractionStrength
	// float GetInteractionStrength();                                                                                          // [0x53d4784] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MFFluid.FluidMeshInteractorComponent
/// Size: 0x02C0 (704 bytes) (0x000288 - 0x0002C0) align 16 MaxSize: 0x02C0
class UFluidMeshInteractorComponent : public UFluidInteractorComponent
{ 
public:
	class UStaticMesh*                                 Mesh;                                                       // 0x0288   (0x0008)  
	class UCharacterMovementComponent*                 CharacterMovement;                                          // 0x0290   (0x0008)  
	class UMaterialInterface*                          DrawHeightMaterial;                                         // 0x0298   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x02A0   (0x0020)  MISSED
};

/// Class /Script/MFFluid.FluidSimpleInteractorComponent
/// Size: 0x02B0 (688 bytes) (0x000288 - 0x0002B0) align 16 MaxSize: 0x02B0
class UFluidSimpleInteractorComponent : public UFluidInteractorComponent
{ 
public:
	float                                              PawnRadius;                                                 // 0x0288   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x028C   (0x0004)  MISSED
	class UMaterialInterface*                          DrawHeightMaterial;                                         // 0x0290   (0x0008)  
	class UMaterialInstanceDynamic*                    DrawHeight_MID;                                             // 0x0298   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x02A0   (0x0010)  MISSED
};

/// Class /Script/MFFluid.FluidSystemManager
/// Size: 0x05A8 (1448 bytes) (0x000320 - 0x0005A8) align 8 MaxSize: 0x05A8
class AFluidSystemManager : public ATickEditorActor
{ 
public:
	SDK_UNDEFINED(16,3852) /* FMulticastInlineDelegate */ __um(OnCPUReadBack);                                     // 0x0320   (0x0010)  
	SDK_UNDEFINED(16,3853) /* FMulticastInlineDelegate */ __um(OnCPUReadBackSingle);                               // 0x0330   (0x0010)  
	bool                                               bEnableDebug : 1;                                           // 0x0340:0 (0x0001)  
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0341   (0x0003)  MISSED
	bool                                               bUseFastRenderMethod : 1;                                   // 0x0344:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0345   (0x0003)  MISSED
	float                                              WindLevel;                                                  // 0x0348   (0x0004)  
	FVector                                            StaticWindDirection;                                        // 0x034C   (0x000C)  
	float                                              WindSpeedUniformScale;                                      // 0x0358   (0x0004)  
	float                                              WindNoiseStrength;                                          // 0x035C   (0x0004)  
	float                                              PlayerWalkWindRadius;                                       // 0x0360   (0x0004)  
	float                                              InteractionStrength;                                        // 0x0364   (0x0004)  
	float                                              InteractionRegionSize;                                      // 0x0368   (0x0004)  
	float                                              InteractionSwayFrequency;                                   // 0x036C   (0x0004)  
	float                                              InteractionSwayStrength;                                    // 0x0370   (0x0004)  
	int32_t                                            InteractionNumPreallocatedMaterialInstances;                // 0x0374   (0x0004)  
	class UStaticMesh*                                 WindOccluderMesh;                                           // 0x0378   (0x0008)  
	FVector                                            WindOccluderScale;                                          // 0x0380   (0x000C)  
	FVector2D                                          WindOccluderFalloffScale;                                   // 0x038C   (0x0008)  
	float                                              WindOccluderMaxFalloffDistance;                             // 0x0394   (0x0004)  
	float                                              WindOccluderMaxHeight;                                      // 0x0398   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x039C   (0x0004)  MISSED
	class UMaterial*                                   WindOccluderMaterial;                                       // 0x03A0   (0x0008)  
	class URuntimeVirtualTexture*                      WindOccluderHeightRVT;                                      // 0x03A8   (0x0008)  
	bool                                               bRVTIncludeMeshBounds;                                      // 0x03B0   (0x0001)  
	bool                                               bRVTIncludeMeshHeights;                                     // 0x03B1   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x03B2   (0x0002)  MISSED
	FVector2D                                          WindOccluderRVTScreenSizeScale;                             // 0x03B4   (0x0008)  
	TWeakObjectPtr<class ARuntimeVirtualTextureVolume*> OccluderHeightRVTVolume;                                   // 0x03BC   (0x0008)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x03C4   (0x0004)  MISSED
	SDK_UNDEFINED(16,3854) /* TArray<TWeakObjectPtr<AStaticMeshActor*>> */ __um(WindOccluderActors);               // 0x03C8   (0x0010)  
	class USceneComponent*                             SceneComponent;                                             // 0x03D8   (0x0008)  
	class USpeedtreeWindFieldComponent*                SpeedtreeWindFieldComponent;                                // 0x03E0   (0x0008)  
	bool                                               DisturbWaterWhenPlayerStill : 1;                            // 0x03E8:0 (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x03E9   (0x0003)  MISSED
	float                                              WaterForceSize;                                             // 0x03EC   (0x0004)  
	float                                              WaterForceStrength;                                         // 0x03F0   (0x0004)  
	float                                              WaterTravelSpeed;                                           // 0x03F4   (0x0004)  
	float                                              WaterDampening;                                             // 0x03F8   (0x0004)  
	float                                              WaterCollisionThreshold;                                    // 0x03FC   (0x0004)  
	float                                              WaterForwardOffset;                                         // 0x0400   (0x0004)  
	float                                              WaterBurstRadiusScale;                                      // 0x0404   (0x0004)  
	FVector                                            WindRippleDirection;                                        // 0x0408   (0x000C)  
	float                                              WindRippleCenterDistance;                                   // 0x0414   (0x0004)  
	float                                              WindRippleRadiusScale;                                      // 0x0418   (0x0004)  
	float                                              WindRippleSpeed;                                            // 0x041C   (0x0004)  
	float                                              WindRippleStrength;                                         // 0x0420   (0x0004)  
	float                                              WindRippleNoiseSize;                                        // 0x0424   (0x0004)  
	unsigned char                                      UnknownData06_6[0x40];                                      // 0x0428   (0x0040)  MISSED
	class UMaterialParameterCollection*                WindField_MPC;                                              // 0x0468   (0x0008)  
	class UNiagaraParameterCollection*                 WindField_NPC;                                              // 0x0470   (0x0008)  
	class UTextureRenderTarget2D*                      WindFieldGlobal;                                            // 0x0478   (0x0008)  
	class UTextureRenderTarget2D*                      WindFieldGlobalPrev;                                        // 0x0480   (0x0008)  
	float                                              OffsetFromSimAreaMotion;                                    // 0x0488   (0x0004)  
	FVector2D                                          VelocityOffset;                                             // 0x048C   (0x0008)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x0494   (0x0004)  MISSED
	class UMaterialInterface*                          WaterPlayerInteractionMat;                                  // 0x0498   (0x0008)  
	class UMaterialInterface*                          WaterBurstInteractionMat;                                   // 0x04A0   (0x0008)  
	TArray<class UMaterial*>                           InputMaterials;                                             // 0x04A8   (0x0010)  
	TArray<class UMaterialInterface*>                  WaterBurstMaterials;                                        // 0x04B8   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            WaterBurstMaterials_MID;                                    // 0x04C8   (0x0010)  
	class UMaterialInstanceDynamic*                    WaterPlayerInteraction_MID;                                 // 0x04D8   (0x0008)  
	TArray<class UMaterialInstanceDynamic*>            InputMaterialDynamicInstances;                              // 0x04E0   (0x0010)  
	TArray<class AFluidInteractionManager*>            InteractionManagers;                                        // 0x04F0   (0x0010)  
	TArray<class UFluidInteractorComponent*>           Interactors;                                                // 0x0500   (0x0010)  
	unsigned char                                      UnknownData08_7[0x98];                                      // 0x0510   (0x0098)  MISSED


	/// Functions
	// Function /Script/MFFluid.FluidSystemManager.TransformWorldLocationToTextureLocation
	// FVector TransformWorldLocationToTextureLocation(FVector WorldLocation, class UWaterFieldBaseComponent* WaterFieldComponent); // [0x53d4ac4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFFluid.FluidSystemManager.QueryVelocityAtLocation
	// void QueryVelocityAtLocation(FVector Location);                                                                          // [0x53d4a1c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFFluid.FluidSystemManager.IsFluidSystemEnabled
	// bool IsFluidSystemEnabled();                                                                                             // [0x53d498c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFFluid.FluidSystemManager.GetGlobalWindFieldComponentInWorld
	// class UWindFieldBaseComponent* GetGlobalWindFieldComponentInWorld(bool bShowLog);                                        // [0x53d4600] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFFluid.FluidSystemManager.GenerateWindOccluders
	// void GenerateWindOccluders();                                                                                            // [0x53d44f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFFluid.FluidSystemManager.CPUReadBackSingleBindFunctionTest
	// void CPUReadBackSingleBindFunctionTest(int32_t QueryID, FVector2D FluidVelocity, FVector2D FinalFluidVelocity);          // [0x53d4024] Final|Native|Public|HasDefaults 
	// Function /Script/MFFluid.FluidSystemManager.CPUReadBackBindFunctionTest
	// void CPUReadBackBindFunctionTest(int32_t QueryID, TArray<FVector2D>& FluidVelocity);                                     // [0x53d3e8c] Final|Native|Public|HasOutParms 
	// Function /Script/MFFluid.FluidSystemManager.BeaufortScale_Default
	// FVector2D BeaufortScale_Default(FVector2D InVelocity);                                                                   // [0x53d3da8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFFluid.FluidSystemManager.BeaufortScale
	// FVector2D BeaufortScale(FVector2D InVelocity, float InWindSpeedUniformScale, float InWindLevel);                         // [0x53d3c6c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFFluid.FluidSystemManager.AddPlayerAtLocation
	// void AddPlayerAtLocation(FVector PlayerLocation, FVector PlayerPrevLocation, int32_t Duration);                          // [0x53d398c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFFluid.FluidSystemManager.AddBurstAtLocationWithType
	// void AddBurstAtLocationWithType(FVector WorldPosition, int32_t Type, float BurstRadius, int32_t Duration);               // [0x53d364c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFFluid.FluidSystemManager.AddBurstAtLocation
	// void AddBurstAtLocation(FVector WorldPosition, float BurstRadius, int32_t Duration);                                     // [0x53d33b4] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/MFFluid.LandscapeGrassManageComponent
/// Size: 0x0110 (272 bytes) (0x0000F8 - 0x000110) align 8 MaxSize: 0x0110
class ULandscapeGrassManageComponent : public UActorComponent
{ 
public:
	bool                                               bPrintLandscapeInfoOnBeginPlay : 1;                         // 0x00F8:0 (0x0001)  
	bool                                               bPrintLandscapeInfoOnTick : 1;                              // 0x00F8:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00F9   (0x0007)  MISSED
	TArray<class UMaterialInstanceDynamic*>            SavedLandscapeMaterials;                                    // 0x0100   (0x0010)  


	/// Functions
	// Function /Script/MFFluid.LandscapeGrassManageComponent.GetLandscapeMobileMaterials
	// TArray<UMaterialInstanceDynamic*> GetLandscapeMobileMaterials();                                                         // [0x53d47ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFFluid.LandscapeGrassManageComponent.CreateAndGetDynamicGrassMaterials
	// TArray<UMaterialInstanceDynamic*> CreateAndGetDynamicGrassMaterials();                                                   // [0x53d4158] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFFluid.SpeedtreeWindFieldComponent
/// Size: 0x02A0 (672 bytes) (0x000290 - 0x0002A0) align 16 MaxSize: 0x02A0
class USpeedtreeWindFieldComponent : public UWindDirectionalSourceComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0290   (0x0010)  MISSED
};

/// Class /Script/MFFluid.VisualizeMeshComponent
/// Size: 0x0500 (1280 bytes) (0x0004F0 - 0x000500) align 16 MaxSize: 0x0500
class UVisualizeMeshComponent : public UPrimitiveComponent
{ 
public:
	bool                                               bEnable;                                                    // 0x04F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x04F1   (0x0007)  MISSED
	class UStaticMesh*                                 Mesh;                                                       // 0x04F8   (0x0008)  
};

/// Class /Script/MFFluid.WaterFieldBaseActor
/// Size: 0x0320 (800 bytes) (0x000320 - 0x000320) align 8 MaxSize: 0x0320
class AWaterFieldBaseActor : public AFluidFieldBaseActor
{ 
public:
};

/// Class /Script/MFFluid.WaterFieldBaseComponent
/// Size: 0x0120 (288 bytes) (0x000108 - 0x000120) align 8 MaxSize: 0x0120
class UWaterFieldBaseComponent : public UFluidFieldBaseComponent
{ 
public:
	TArray<class UTextureRenderTarget2D*>              HeightMaps;                                                 // 0x0108   (0x0010)  
	int32_t                                            HeightMapIndex;                                             // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x011C   (0x0004)  MISSED


	/// Functions
	// Function /Script/MFFluid.WaterFieldBaseComponent.GetIntVariableValue
	// int32_t GetIntVariableValue(FName& VariableName);                                                                        // [0x53d46ac] Final|Native|Public|HasOutParms 
	// Function /Script/MFFluid.WaterFieldBaseComponent.GetFloatVariableValue
	// float GetFloatVariableValue(FName& VariableName);                                                                        // [0x53d452c] Final|Native|Public|HasOutParms 
};

/// Class /Script/MFFluid.WindFieldBaseActor
/// Size: 0x0320 (800 bytes) (0x000320 - 0x000320) align 8 MaxSize: 0x0320
class AWindFieldBaseActor : public AFluidFieldBaseActor
{ 
public:
};

/// Class /Script/MFFluid.WindFieldBaseComponent
/// Size: 0x0160 (352 bytes) (0x000108 - 0x000160) align 8 MaxSize: 0x0160
class UWindFieldBaseComponent : public UFluidFieldBaseComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0108   (0x0058)  MISSED


	/// Functions
	// Function /Script/MFFluid.WindFieldBaseComponent.HasInitialized
	// bool HasInitialized();                                                                                                   // [0x53d4974] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFFluid.WindFieldBaseComponent.GetVelocityField
	// class UTextureRenderTarget2D* GetVelocityField();                                                                        // [0x182d6bc] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MFFluid.WindFieldWorldSubsystem
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UWindFieldWorldSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0030   (0x0010)  MISSED
	class UDataAsset*                                  WindField_DataAsset;                                        // 0x0040   (0x0008)  
	int32_t                                            WindLevel;                                                  // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	class UMaterialParameterCollection*                WindField_MPC;                                              // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/MFFluid.WindFieldWorldSubsystem.UpdateWindFieldParameters
	// void UpdateWindFieldParameters();                                                                                        // [0x53d50e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFFluid.WindFieldWorldSubsystem.Tick
	// void Tick(float DeltaTime);                                                                                              // [0x50617a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFFluid.WindFieldWorldSubsystem.IsFluidSystemEnabled
	// bool IsFluidSystemEnabled();                                                                                             // [0x53d49d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFFluid.WindFieldWorldSubsystem.InitializeFromBP
	// void InitializeFromBP();                                                                                                 // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFFluid.WindFieldWorldSubsystem.GetVelocityField
	// class UTextureRenderTarget2D* GetVelocityField();                                                                        // [0x53d48f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFFluid.WindFieldWorldSubsystem.GetFluidSystemManager
	// class AFluidSystemManager* GetFluidSystemManager();                                                                      // [0x53d45dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFFluid.WindFieldWorldSubsystem.GetFirstGlobalWindFieldBaseComponentInWorld
	// class UWindFieldBaseComponent* GetFirstGlobalWindFieldBaseComponentInWorld();                                            // [0x53d4508] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFFluid.WindFieldWorldSubsystem.GetAllFoliages
	// void GetAllFoliages();                                                                                                   // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFFluid.WindFieldWorldSubsystem.DrawMaterialToRenderTarget_SubArea
	// void DrawMaterialToRenderTarget_SubArea(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, class UMaterialInterface* Material, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize); // [0x53d427c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFFluid.WindFieldWorldSubsystem.AddPlayerAtLocation
	// void AddPlayerAtLocation(FVector PlayerLocation, FVector PlayerPrevLocation, int32_t Duration);                          // [0x53d3ae8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFFluid.WindFieldWorldSubsystem.AddBurstAtLocationWithType
	// void AddBurstAtLocationWithType(FVector WorldPosition, int32_t Type, float BurstRadius, int32_t Duration);               // [0x53d37ec] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFFluid.WindFieldWorldSubsystem.AddBurstAtLocation
	// void AddBurstAtLocation(FVector WorldPosition, float BurstRadius, int32_t Duration);                                     // [0x53d3500] Final|Native|Public|HasDefaults|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(ABlueprintableWindDirectionalSource) == 0x0320); // 800 bytes (0x000320 - 0x000320)
static_assert(sizeof(UFluidBlueprintFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ATickEditorActor) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(AFluidFieldBaseActor) == 0x0320); // 800 bytes (0x000320 - 0x000320)
static_assert(sizeof(UTickEditorActorComponent) == 0x0100); // 256 bytes (0x0000F8 - 0x000100)
static_assert(sizeof(UFluidFieldBaseComponent) == 0x0108); // 264 bytes (0x000100 - 0x000108)
static_assert(sizeof(AFluidInteractionManager) == 0x05B8); // 1464 bytes (0x000320 - 0x0005B8)
static_assert(sizeof(UFluidInteractorComponent) == 0x0288); // 648 bytes (0x000270 - 0x000288)
static_assert(sizeof(UFluidInteractorGroupComponent) == 0x0290); // 656 bytes (0x000270 - 0x000290)
static_assert(sizeof(UFluidMeshInteractorComponent) == 0x02C0); // 704 bytes (0x000288 - 0x0002C0)
static_assert(sizeof(UFluidSimpleInteractorComponent) == 0x02B0); // 688 bytes (0x000288 - 0x0002B0)
static_assert(sizeof(AFluidSystemManager) == 0x05A8); // 1448 bytes (0x000320 - 0x0005A8)
static_assert(sizeof(ULandscapeGrassManageComponent) == 0x0110); // 272 bytes (0x0000F8 - 0x000110)
static_assert(sizeof(USpeedtreeWindFieldComponent) == 0x02A0); // 672 bytes (0x000290 - 0x0002A0)
static_assert(sizeof(UVisualizeMeshComponent) == 0x0500); // 1280 bytes (0x0004F0 - 0x000500)
static_assert(sizeof(AWaterFieldBaseActor) == 0x0320); // 800 bytes (0x000320 - 0x000320)
static_assert(sizeof(UWaterFieldBaseComponent) == 0x0120); // 288 bytes (0x000108 - 0x000120)
static_assert(sizeof(AWindFieldBaseActor) == 0x0320); // 800 bytes (0x000320 - 0x000320)
static_assert(sizeof(UWindFieldBaseComponent) == 0x0160); // 352 bytes (0x000108 - 0x000160)
static_assert(sizeof(UWindFieldWorldSubsystem) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(offsetof(AFluidInteractionManager, WindFieldMaterialParameters) == 0x0330);
static_assert(offsetof(AFluidInteractionManager, HeightField) == 0x0338);
static_assert(offsetof(AFluidInteractionManager, HeightFieldBackBuffer) == 0x0340);
static_assert(offsetof(AFluidInteractionManager, HeightFieldPrevFrame) == 0x0348);
static_assert(offsetof(AFluidInteractionManager, CopyHeightMaterial) == 0x0350);
static_assert(offsetof(AFluidInteractionManager, FadeOutHeightMaterial) == 0x0358);
static_assert(offsetof(AFluidInteractionManager, DrawBorderMaterial) == 0x0360);
static_assert(offsetof(AFluidInteractionManager, VisualizeMeshMaterial) == 0x0368);
static_assert(offsetof(AFluidInteractionManager, Interactors) == 0x0370);
static_assert(offsetof(AFluidInteractionManager, CopyHeight_MID) == 0x0590);
static_assert(offsetof(AFluidInteractionManager, CopyHeightPrevFrame_MID) == 0x0598);
static_assert(offsetof(AFluidInteractionManager, FadeOutHeight_MID) == 0x05A0);
static_assert(offsetof(AFluidInteractionManager, DrawBorder_MID) == 0x05A8);
static_assert(offsetof(AFluidInteractionManager, DrawMeshHeight_MID) == 0x05B0);
static_assert(offsetof(UFluidInteractorComponent, InteractorGroup) == 0x0280);
static_assert(offsetof(UFluidMeshInteractorComponent, Mesh) == 0x0288);
static_assert(offsetof(UFluidMeshInteractorComponent, CharacterMovement) == 0x0290);
static_assert(offsetof(UFluidMeshInteractorComponent, DrawHeightMaterial) == 0x0298);
static_assert(offsetof(UFluidSimpleInteractorComponent, DrawHeightMaterial) == 0x0290);
static_assert(offsetof(UFluidSimpleInteractorComponent, DrawHeight_MID) == 0x0298);
static_assert(offsetof(AFluidSystemManager, StaticWindDirection) == 0x034C);
static_assert(offsetof(AFluidSystemManager, WindOccluderMesh) == 0x0378);
static_assert(offsetof(AFluidSystemManager, WindOccluderScale) == 0x0380);
static_assert(offsetof(AFluidSystemManager, WindOccluderFalloffScale) == 0x038C);
static_assert(offsetof(AFluidSystemManager, WindOccluderMaterial) == 0x03A0);
static_assert(offsetof(AFluidSystemManager, WindOccluderHeightRVT) == 0x03A8);
static_assert(offsetof(AFluidSystemManager, WindOccluderRVTScreenSizeScale) == 0x03B4);
static_assert(offsetof(AFluidSystemManager, OccluderHeightRVTVolume) == 0x03BC);
static_assert(offsetof(AFluidSystemManager, SceneComponent) == 0x03D8);
static_assert(offsetof(AFluidSystemManager, SpeedtreeWindFieldComponent) == 0x03E0);
static_assert(offsetof(AFluidSystemManager, WindRippleDirection) == 0x0408);
static_assert(offsetof(AFluidSystemManager, WindField_MPC) == 0x0468);
static_assert(offsetof(AFluidSystemManager, WindField_NPC) == 0x0470);
static_assert(offsetof(AFluidSystemManager, WindFieldGlobal) == 0x0478);
static_assert(offsetof(AFluidSystemManager, WindFieldGlobalPrev) == 0x0480);
static_assert(offsetof(AFluidSystemManager, VelocityOffset) == 0x048C);
static_assert(offsetof(AFluidSystemManager, WaterPlayerInteractionMat) == 0x0498);
static_assert(offsetof(AFluidSystemManager, WaterBurstInteractionMat) == 0x04A0);
static_assert(offsetof(AFluidSystemManager, InputMaterials) == 0x04A8);
static_assert(offsetof(AFluidSystemManager, WaterBurstMaterials) == 0x04B8);
static_assert(offsetof(AFluidSystemManager, WaterBurstMaterials_MID) == 0x04C8);
static_assert(offsetof(AFluidSystemManager, WaterPlayerInteraction_MID) == 0x04D8);
static_assert(offsetof(AFluidSystemManager, InputMaterialDynamicInstances) == 0x04E0);
static_assert(offsetof(AFluidSystemManager, InteractionManagers) == 0x04F0);
static_assert(offsetof(AFluidSystemManager, Interactors) == 0x0500);
static_assert(offsetof(ULandscapeGrassManageComponent, SavedLandscapeMaterials) == 0x0100);
static_assert(offsetof(UVisualizeMeshComponent, Mesh) == 0x04F8);
static_assert(offsetof(UWaterFieldBaseComponent, HeightMaps) == 0x0108);
static_assert(offsetof(UWindFieldWorldSubsystem, WindField_DataAsset) == 0x0040);
static_assert(offsetof(UWindFieldWorldSubsystem, WindField_MPC) == 0x0050);
