// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/MRMesh.MeshReconstructorBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshReconstructorBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/MRMesh.MeshReconstructorBase.StopReconstruction
	// void StopReconstruction();                                                                                               // [0x53745a8] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.StartReconstruction
	// void StartReconstruction();                                                                                              // [0x1d76c64] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.PauseReconstruction
	// void PauseReconstruction();                                                                                              // [0x1a9df80] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionStarted
	// bool IsReconstructionStarted();                                                                                          // [0x6012a64] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionPaused
	// bool IsReconstructionPaused();                                                                                           // [0x7241ecc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.DisconnectMRMesh
	// void DisconnectMRMesh();                                                                                                 // [0x1aa6c04] Native|Public        
	// Function /Script/MRMesh.MeshReconstructorBase.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* Mesh);                                                                        // [0x5ce8e40] Native|Public        
};

/// Class /Script/MRMesh.MockDataMeshTrackerComponent
/// Size: 0x02E0 (736 bytes) (0x000270 - 0x0002E0) align 16 MaxSize: 0x02E0
class UMockDataMeshTrackerComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,4703) /* FMulticastInlineDelegate */ __um(OnMeshTrackerUpdated);                              // 0x0270   (0x0010)  
	bool                                               ScanWorld;                                                  // 0x0280   (0x0001)  
	bool                                               RequestNormals;                                             // 0x0281   (0x0001)  
	bool                                               RequestVertexConfidence;                                    // 0x0282   (0x0001)  
	SDK_UNDEFINED(1,4704) /* EMeshTrackerVertexColorMode */ __um(VertexColorMode);                                 // 0x0283   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0284   (0x0004)  MISSED
	TArray<FColor>                                     BlockVertexColors;                                          // 0x0288   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceZero;                              // 0x0298   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceOne;                               // 0x02A8   (0x0010)  
	float                                              UpdateInterval;                                             // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02BC   (0x0004)  MISSED
	class UMRMeshComponent*                            MRMesh;                                                     // 0x02C0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x02C8   (0x0018)  MISSED


	/// Functions
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	// void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // [0x182d6bc] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	// void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x7241d78] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                                 // [0x7241c64] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MRMeshComponent
/// Size: 0x05B0 (1456 bytes) (0x0004F0 - 0x0005B0) align 16 MaxSize: 0x05B0
class UMRMeshComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x04F0   (0x0010)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0500   (0x0008)  
	class UMaterialInterface*                          WireframeMaterial;                                          // 0x0508   (0x0008)  
	bool                                               bCreateMeshProxySections;                                   // 0x0510   (0x0001)  
	bool                                               bUpdateNavMeshOnMeshUpdate;                                 // 0x0511   (0x0001)  
	bool                                               bNeverCreateCollisionMesh;                                  // 0x0512   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x0513   (0x0005)  MISSED
	class UBodySetup*                                  CachedBodySetup;                                            // 0x0518   (0x0008)  
	TArray<class UBodySetup*>                          BodySetups;                                                 // 0x0520   (0x0010)  
	unsigned char                                      UnknownData02_7[0x80];                                      // 0x0530   (0x0080)  MISSED


	/// Functions
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeMaterial
	// void SetWireframeMaterial(class UMaterialInterface* InMaterial);                                                         // [0x49ab08c] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeColor
	// void SetWireframeColor(FLinearColor& InColor);                                                                           // [0x7242030] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetUseWireframe
	// void SetUseWireframe(bool bUseWireframe);                                                                                // [0x7241f90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	// void SetEnableMeshOcclusion(bool bEnable);                                                                               // [0x7241ef4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.IsConnected
	// bool IsConnected();                                                                                                      // [0x7241ea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetWireframeColor
	// FLinearColor GetWireframeColor();                                                                                        // [0x7241e84] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetUseWireframe
	// bool GetUseWireframe();                                                                                                  // [0x7241e6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	// bool GetEnableMeshOcclusion();                                                                                           // [0x7241e54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.ForceNavMeshUpdate
	// void ForceNavMeshUpdate();                                                                                               // [0x7241e14] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.Clear
	// void Clear();                                                                                                            // [0x7241c48] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MRMesh.MRMeshConfiguration
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMRMeshConfiguration
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMeshReconstructorBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMockDataMeshTrackerComponent) == 0x02E0); // 736 bytes (0x000270 - 0x0002E0)
static_assert(sizeof(UMRMeshComponent) == 0x05B0); // 1456 bytes (0x0004F0 - 0x0005B0)
static_assert(sizeof(FMRMeshConfiguration) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(UMockDataMeshTrackerComponent, BlockVertexColors) == 0x0288);
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceZero) == 0x0298);
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceOne) == 0x02A8);
static_assert(offsetof(UMockDataMeshTrackerComponent, MRMesh) == 0x02C0);
static_assert(offsetof(UMRMeshComponent, Material) == 0x0500);
static_assert(offsetof(UMRMeshComponent, WireframeMaterial) == 0x0508);
static_assert(offsetof(UMRMeshComponent, CachedBodySetup) == 0x0518);
static_assert(offsetof(UMRMeshComponent, BodySetups) == 0x0520);
