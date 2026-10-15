// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ProceduralMeshComponent

#pragma pack(push, 0x1)

/// Class /Script/MFSubMeshDecal.MFSubMeshDecalActor
/// Size: 0x0328 (808 bytes) (0x000318 - 0x000328) align 8 MaxSize: 0x0328
class AMFSubMeshDecalActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0318   (0x0008)  MISSED
	class UMFSubMeshDecalComponent*                    SubMeshDecalComponent;                                      // 0x0320   (0x0008)  


	/// Functions
	// Function /Script/MFSubMeshDecal.MFSubMeshDecalActor.RegenSubMeshCheckTimerTick
	// void RegenSubMeshCheckTimerTick();                                                                                       // [0x610a538] Final|Native|Protected 
	// Function /Script/MFSubMeshDecal.MFSubMeshDecalActor.GetSubMeshDecalComponent
	// class UMFSubMeshDecalComponent* GetSubMeshDecalComponent();                                                              // [0x4a2a588] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MFSubMeshDecal.MFSubMeshDecalComponent
/// Size: 0x0350 (848 bytes) (0x000270 - 0x000350) align 16 MaxSize: 0x0350
class UMFSubMeshDecalComponent : public USceneComponent
{ 
public:
	class UMaterialInterface*                          DecalMaterial;                                              // 0x0270   (0x0008)  
	FVector                                            DecalSize;                                                  // 0x0278   (0x000C)  
	float                                              MaxCullingDegree;                                           // 0x0284   (0x0004)  
	float                                              VertNormalOffsetForStaticMesh;                              // 0x0288   (0x0004)  
	float                                              VertNormalOffsetForLandscape;                               // 0x028C   (0x0004)  
	class UProceduralMeshComponent*                    StaticProcMeshComponent;                                    // 0x0290   (0x0008)  
	TArray<class UProceduralMeshComponent*>            DynamicProcMeshComponents;                                  // 0x0298   (0x0010)  
	unsigned char                                      UnknownData00_7[0xA8];                                      // 0x02A8   (0x00A8)  MISSED


	/// Functions
	// Function /Script/MFSubMeshDecal.MFSubMeshDecalComponent.WaitTasksCompeleteAndClearAllDatas
	// void WaitTasksCompeleteAndClearAllDatas();                                                                               // [0x610a888] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFSubMeshDecal.MFSubMeshDecalComponent.SetVertNormalOffsetForStaticMesh
	// void SetVertNormalOffsetForStaticMesh(float InOffset);                                                                   // [0x610a7ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFSubMeshDecal.MFSubMeshDecalComponent.SetVertNormalOffsetForLandscape
	// void SetVertNormalOffsetForLandscape(float InOffset);                                                                    // [0x610a750] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFSubMeshDecal.MFSubMeshDecalComponent.SetMaxCullingDegree
	// void SetMaxCullingDegree(float InMaxCullingDegree);                                                                      // [0x610a6b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFSubMeshDecal.MFSubMeshDecalComponent.SetDecalSize
	// void SetDecalSize(FVector& InDecalSize);                                                                                 // [0x610a5e8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFSubMeshDecal.MFSubMeshDecalComponent.SetDecalMaterial
	// void SetDecalMaterial(class UMaterialInterface* InMaterial);                                                             // [0x610a54c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFSubMeshDecal.MFSubMeshDecalComponent.MarkNeedForRecreateDecal
	// void MarkNeedForRecreateDecal(bool bForce);                                                                              // [0x610a49c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFSubMeshDecal.MFSubMeshDecalComponent.GetVertPositionNormalOffset
	// float GetVertPositionNormalOffset();                                                                                     // [0x29ae0c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFSubMeshDecal.MFSubMeshDecalComponent.GetVertNormalOffsetForLandscape
	// float GetVertNormalOffsetForLandscape();                                                                                 // [0x610a484] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFSubMeshDecal.MFSubMeshDecalComponent.GetStaticProceduralMeshComponent
	// class UProceduralMeshComponent* GetStaticProceduralMeshComponent();                                                      // [0x4683c24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFSubMeshDecal.MFSubMeshDecalComponent.GetProjectionDirection
	// FVector GetProjectionDirection();                                                                                        // [0x610a450] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFSubMeshDecal.MFSubMeshDecalComponent.GetMaxCullingDegree
	// float GetMaxCullingDegree();                                                                                             // [0x29adf18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFSubMeshDecal.MFSubMeshDecalComponent.GetDynamicProceduralMeshComponents
	// TArray<UProceduralMeshComponent*> GetDynamicProceduralMeshComponents();                                                  // [0x610a3c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFSubMeshDecal.MFSubMeshDecalComponent.GetDecalSize
	// FVector GetDecalSize();                                                                                                  // [0x610a398] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFSubMeshDecal.MFSubMeshDecalComponent.GetDecalMaterial
	// class UMaterialInterface* GetDecalMaterial();                                                                            // [0x610a380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)


static_assert(sizeof(AMFSubMeshDecalActor) == 0x0328); // 808 bytes (0x000318 - 0x000328)
static_assert(sizeof(UMFSubMeshDecalComponent) == 0x0350); // 848 bytes (0x000270 - 0x000350)
static_assert(offsetof(AMFSubMeshDecalActor, SubMeshDecalComponent) == 0x0320);
static_assert(offsetof(UMFSubMeshDecalComponent, DecalMaterial) == 0x0270);
static_assert(offsetof(UMFSubMeshDecalComponent, DecalSize) == 0x0278);
static_assert(offsetof(UMFSubMeshDecalComponent, StaticProcMeshComponent) == 0x0290);
static_assert(offsetof(UMFSubMeshDecalComponent, DynamicProcMeshComponents) == 0x0298);
