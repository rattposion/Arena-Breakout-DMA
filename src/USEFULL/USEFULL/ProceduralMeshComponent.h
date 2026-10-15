// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Struct /Script/ProceduralMeshComponent.ProcMeshTangent
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FProcMeshTangent
{ 
	FVector                                            TangentX;                                                   // 0x0000   (0x000C)  
	bool                                               bFlipTangentY;                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshVertex
/// Size: 0x004C (76 bytes) (0x000000 - 0x00004C) align 4 MaxSize: 0x004C
struct FProcMeshVertex
{ 
	FVector                                            position;                                                   // 0x0000   (0x000C)  
	FVector                                            Normal;                                                     // 0x000C   (0x000C)  
	FProcMeshTangent                                   Tangent;                                                    // 0x0018   (0x0010)  
	FColor                                             Color;                                                      // 0x0028   (0x0004)  
	FVector2D                                          UV0;                                                        // 0x002C   (0x0008)  
	FVector2D                                          UV1;                                                        // 0x0034   (0x0008)  
	FVector2D                                          UV2;                                                        // 0x003C   (0x0008)  
	FVector2D                                          UV3;                                                        // 0x0044   (0x0008)  
};

/// Struct /Script/ProceduralMeshComponent.ProcMeshSection
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FProcMeshSection
{ 
	TArray<FProcMeshVertex>                            ProcVertexBuffer;                                           // 0x0000   (0x0010)  
	TArray<uint32_t>                                   ProcIndexBuffer;                                            // 0x0010   (0x0010)  
	FBox                                               SectionLocalBox;                                            // 0x0020   (0x001C)  
	bool                                               bEnableCollision;                                           // 0x003C   (0x0001)  
	bool                                               bSectionVisible;                                            // 0x003D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x003E   (0x0002)  MISSED
};

/// Class /Script/ProceduralMeshComponent.ProceduralMeshComponent
/// Size: 0x0590 (1424 bytes) (0x000520 - 0x000590) align 16 MaxSize: 0x0588
class UProceduralMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0520   (0x0008)  MISSED
	bool                                               bUseComplexAsSimpleCollision;                               // 0x0528   (0x0001)  
	bool                                               bUseAsyncCooking;                                           // 0x0529   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x052A   (0x0006)  MISSED
	class UBodySetup*                                  ProcMeshBodySetup;                                          // 0x0530   (0x0008)  
	TArray<FProcMeshSection>                           ProcMeshSections;                                           // 0x0538   (0x0010)  
	TArray<FKConvexElem>                               CollisionConvexElems;                                       // 0x0548   (0x0010)  
	FBoxSphereBounds                                   LocalBounds;                                                // 0x0558   (0x001C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0574   (0x0004)  MISSED
	TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                        // 0x0578   (0x0010)  


	/// Functions
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
	// void UpdateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents); // [0x46cbb88] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
	// void UpdateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents); // [0x46cb5e8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
	// void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility);                                                   // [0x46cb248] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
	// bool IsMeshSectionVisible(int32_t SectionIndex);                                                                         // [0x46cb168] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
	// int32_t GetNumSections();                                                                                                // [0x46ca884] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
	// void CreateMeshSection_LinearColor(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FVector2D>& UV1, TArray<FVector2D>& UV2, TArray<FVector2D>& UV3, TArray<FLinearColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision); // [0x46c9e50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
	// void CreateMeshSection(int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UV0, TArray<FColor>& VertexColors, TArray<FProcMeshTangent>& Tangents, bool bCreateCollision); // [0x46c9ac8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
	// void ClearMeshSection(int32_t SectionIndex);                                                                             // [0x46c8e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
	// void ClearCollisionConvexMeshes();                                                                                       // [0x46c8e2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
	// void ClearAllMeshSections();                                                                                             // [0x46c8e18] Final|Native|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
	// void AddCollisionConvexMesh(TArray<FVector> ConvexVerts);                                                                // [0x46c8864] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
	// void SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent*& OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial); // [0x46cb330] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
	// void GetSectionFromStaticMesh(class UStaticMesh* InMesh, int32_t LODIndex, int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents); // [0x46cae04] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
	// void GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int32_t SectionIndex, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents); // [0x46ca89c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
	// void GenerateBoxMesh(FVector BoxRadius, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents); // [0x46ca334] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
	// void CreateGridMeshWelded(int32_t NumX, int32_t NumY, TArray<int32_t>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVs, float GridSpacing); // [0x46c9844] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
	// void CreateGridMeshTriangles(int32_t NumX, int32_t NumY, bool bWinding, TArray<int32_t>& Triangles);                     // [0x46c95cc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
	// void CreateGridMeshSplit(int32_t NumX, int32_t NumY, TArray<int32_t>& Triangles, TArray<FVector>& Vertices, TArray<FVector2D>& UVs, TArray<FVector2D>& UV1s, float GridSpacing); // [0x46c92d4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
	// void CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int32_t LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision); // [0x46c9158] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
	// void ConvertQuadToTriangles(TArray<int32_t>& Triangles, int32_t Vert0, int32_t Vert1, int32_t Vert2, int32_t Vert3);     // [0x46c8ed8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
	// void CalculateTangentsForMesh(TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector2D>& UVs, TArray<FVector>& Normals, TArray<FProcMeshTangent>& Tangents); // [0x46c892c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(FProcMeshTangent) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FProcMeshVertex) == 0x004C); // 76 bytes (0x000000 - 0x00004C)
static_assert(sizeof(FProcMeshSection) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UProceduralMeshComponent) == 0x0588); // 1416 bytes (0x000520 - 0x000588)
static_assert(sizeof(UKismetProceduralMeshLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(FProcMeshTangent, TangentX) == 0x0000);
static_assert(offsetof(FProcMeshVertex, position) == 0x0000);
static_assert(offsetof(FProcMeshVertex, Normal) == 0x000C);
static_assert(offsetof(FProcMeshVertex, Tangent) == 0x0018);
static_assert(offsetof(FProcMeshVertex, Color) == 0x0028);
static_assert(offsetof(FProcMeshVertex, UV0) == 0x002C);
static_assert(offsetof(FProcMeshVertex, UV1) == 0x0034);
static_assert(offsetof(FProcMeshVertex, UV2) == 0x003C);
static_assert(offsetof(FProcMeshVertex, UV3) == 0x0044);
static_assert(offsetof(FProcMeshSection, ProcVertexBuffer) == 0x0000);
static_assert(offsetof(FProcMeshSection, ProcIndexBuffer) == 0x0010);
static_assert(offsetof(FProcMeshSection, SectionLocalBox) == 0x0020);
static_assert(offsetof(UProceduralMeshComponent, ProcMeshBodySetup) == 0x0530);
static_assert(offsetof(UProceduralMeshComponent, ProcMeshSections) == 0x0538);
static_assert(offsetof(UProceduralMeshComponent, CollisionConvexElems) == 0x0548);
static_assert(offsetof(UProceduralMeshComponent, LocalBounds) == 0x0558);
static_assert(offsetof(UProceduralMeshComponent, AsyncBodySetupQueue) == 0x0578);
