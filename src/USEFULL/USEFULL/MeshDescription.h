// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/MeshDescription.MeshDescription
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshDescription : public UObject
{ 
public:
};

/// Class /Script/MeshDescription.MeshDescriptionBase
/// Size: 0x0390 (912 bytes) (0x000028 - 0x000390) align 8 MaxSize: 0x0390
class UMeshDescriptionBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x368];                                     // 0x0028   (0x0368)  MISSED


	/// Functions
	// Function /Script/MeshDescription.MeshDescriptionBase.SetVertexPosition
	// void SetVertexPosition(FVertexID VertexID, FVector& position);                                                           // [0x767ca5c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.SetPolygonVertexInstance
	// void SetPolygonVertexInstance(FPolygonID PolygonID, int32_t PerimeterIndex, FVertexInstanceID VertexInstanceID);         // [0x767c914] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
	// void SetPolygonPolygonGroup(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID);                                       // [0x767c824] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReversePolygonFacing
	// void ReversePolygonFacing(FPolygonID PolygonID);                                                                         // [0x767c784] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewVertices
	// void ReserveNewVertices(int32_t NumberOfNewVertices);                                                                    // [0x767c6e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
	// void ReserveNewVertexInstances(int32_t NumberOfNewVertexInstances);                                                      // [0x767c454] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewTriangles
	// void ReserveNewTriangles(int32_t NumberOfNewTriangles);                                                                  // [0x767c640] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewPolygons
	// void ReserveNewPolygons(int32_t NumberOfNewPolygons);                                                                    // [0x767c59c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
	// void ReserveNewPolygonGroups(int32_t NumberOfNewPolygonGroups);                                                          // [0x767c4f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ReserveNewEdges
	// void ReserveNewEdges(int32_t NumberOfNewEdges);                                                                          // [0x767c454] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexValid
	// bool IsVertexValid(FVertexID VertexID);                                                                                  // [0x767c370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexOrphaned
	// bool IsVertexOrphaned(FVertexID VertexID);                                                                               // [0x767c2c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
	// bool IsVertexInstanceValid(FVertexInstanceID VertexInstanceID);                                                          // [0x767c1e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsTriangleValid
	// bool IsTriangleValid(FTriangleID TriangleID);                                                                            // [0x767c0f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
	// bool IsTrianglePartOfNgon(FTriangleID TriangleID);                                                                       // [0x767c04c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsPolygonValid
	// bool IsPolygonValid(FPolygonID PolygonID);                                                                               // [0x767bf64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
	// bool IsPolygonGroupValid(FPolygonGroupID PolygonGroupID);                                                                // [0x767be7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEmpty
	// bool IsEmpty();                                                                                                          // [0x767be34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeValid
	// bool IsEdgeValid(FEdgeID EdgeID);                                                                                        // [0x767bd4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
	// bool IsEdgeInternalToPolygon(FEdgeID EdgeID, FPolygonID PolygonID);                                                      // [0x767bc4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.IsEdgeInternal
	// bool IsEdgeInternal(FEdgeID EdgeID);                                                                                     // [0x767bba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
	// void GetVertexVertexInstances(FVertexID VertexID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);                      // [0x767ba00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexPosition
	// FVector GetVertexPosition(FVertexID VertexID);                                                                           // [0x767b940] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexPairEdge
	// FEdgeID GetVertexPairEdge(FVertexID VertexID0, FVertexID VertexID1);                                                     // [0x767b844] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
	// FVertexID GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID);                                                   // [0x767b7a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
	// FEdgeID GetVertexInstancePairEdge(FVertexInstanceID VertexInstanceID0, FVertexInstanceID VertexInstanceID1);             // [0x767b6a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
	// FVertexInstanceID GetVertexInstanceForTriangleVertex(FTriangleID TriangleID, FVertexID VertexID);                        // [0x767b5a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
	// FVertexInstanceID GetVertexInstanceForPolygonVertex(FPolygonID PolygonID, FVertexID VertexID);                           // [0x767b4ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
	// void GetVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID, TArray<FTriangleID>& OutConnectedTriangleIDs); // [0x767b30c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
	// void GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs); // [0x767b16c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
	// void GetVertexConnectedTriangles(FVertexID VertexID, TArray<FTriangleID>& OutConnectedTriangleIDs);                      // [0x767afcc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
	// void GetVertexConnectedPolygons(FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs);                         // [0x767ae2c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
	// void GetVertexConnectedEdges(FVertexID VertexID, TArray<FEdgeID>& OutEdgeIDs);                                           // [0x767ac8c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
	// void GetVertexAdjacentVertices(FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs);                             // [0x767aaec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertices
	// void GetTriangleVertices(FTriangleID TriangleID, TArray<FVertexID>& OutVertexIDs);                                       // [0x767a94c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
	// void GetTriangleVertexInstances(FTriangleID TriangleID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);                // [0x767a7ac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
	// FVertexInstanceID GetTriangleVertexInstance(FTriangleID TriangleID, int32_t Index);                                      // [0x767a6b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
	// FPolygonGroupID GetTrianglePolygonGroup(FTriangleID TriangleID);                                                         // [0x767a614] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTrianglePolygon
	// FPolygonID GetTrianglePolygon(FTriangleID TriangleID);                                                                   // [0x767a570] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleEdges
	// void GetTriangleEdges(FTriangleID TriangleID, TArray<FEdgeID>& OutEdgeIDs);                                              // [0x767a3d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
	// void GetTriangleAdjacentTriangles(FTriangleID TriangleID, TArray<FTriangleID>& OutTriangleIDs);                          // [0x767a230] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonVertices
	// void GetPolygonVertices(FPolygonID PolygonID, TArray<FVertexID>& OutVertexIDs);                                          // [0x767a090] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
	// void GetPolygonVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& OutVertexInstanceIDs);                   // [0x7679ef0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonTriangles
	// void GetPolygonTriangles(FPolygonID PolygonID, TArray<FTriangleID>& OutTriangleIDs);                                     // [0x7679d50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
	// FPolygonGroupID GetPolygonPolygonGroup(FPolygonID PolygonID);                                                            // [0x7679cac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
	// void GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs);                                        // [0x7679b0c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
	// void GetPolygonInternalEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs);                                         // [0x767996c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
	// void GetPolygonGroupPolygons(FPolygonGroupID PolygonGroupID, TArray<FPolygonID>& OutPolygonIDs);                         // [0x76797cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
	// void GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray<FPolygonID>& OutPolygonIDs);                                // [0x767962c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
	// int32_t GetNumVertexVertexInstances(FVertexID VertexID);                                                                 // [0x7679580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
	// int32_t GetNumVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID);                                      // [0x76794d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
	// int32_t GetNumVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID);                                       // [0x7679428] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
	// int32_t GetNumVertexConnectedTriangles(FVertexID VertexID);                                                              // [0x767937c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
	// int32_t GetNumVertexConnectedPolygons(FVertexID VertexID);                                                               // [0x76792d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
	// int32_t GetNumVertexConnectedEdges(FVertexID VertexID);                                                                  // [0x7679224] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
	// int32_t GetNumPolygonVertices(FPolygonID PolygonID);                                                                     // [0x7679178] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
	// int32_t GetNumPolygonTriangles(FPolygonID PolygonID);                                                                    // [0x76790cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
	// int32_t GetNumPolygonInternalEdges(FPolygonID PolygonID);                                                                // [0x7679020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
	// int32_t GetNumPolygonGroupPolygons(FPolygonGroupID PolygonGroupID);                                                      // [0x7678f74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
	// int32_t GetNumEdgeConnectedTriangles(FEdgeID EdgeID);                                                                    // [0x7678ec8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
	// int32_t GetNumEdgeConnectedPolygons(FEdgeID EdgeID);                                                                     // [0x7678e1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeVertices
	// void GetEdgeVertices(FEdgeID EdgeID, TArray<FVertexID>& OutVertexIDs);                                                   // [0x7678c7c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeVertex
	// FVertexID GetEdgeVertex(FEdgeID EdgeID, int32_t VertexNumber);                                                           // [0x7678b88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
	// void GetEdgeConnectedTriangles(FEdgeID EdgeID, TArray<FTriangleID>& OutConnectedTriangleIDs);                            // [0x76789e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
	// void GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs);                               // [0x7678848] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshDescription.MeshDescriptionBase.Empty
	// void Empty();                                                                                                            // [0x7678830] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteVertexInstance
	// void DeleteVertexInstance(FVertexInstanceID VertexInstanceID, TArray<FVertexID>& OrphanedVertices);                      // [0x767871c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteVertex
	// void DeleteVertex(FVertexID VertexID);                                                                                   // [0x767867c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteTriangle
	// void DeleteTriangle(FTriangleID TriangleID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroupsPtr); // [0x76782e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeletePolygonGroup
	// void DeletePolygonGroup(FPolygonGroupID PolygonGroupID);                                                                 // [0x7678244] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeletePolygon
	// void DeletePolygon(FPolygonID PolygonID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroups); // [0x767805c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.DeleteEdge
	// void DeleteEdge(FEdgeID EdgeID, TArray<FVertexID>& OrphanedVertices);                                                    // [0x7677f48] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexWithID
	// void CreateVertexWithID(FVertexID VertexID);                                                                             // [0x7677ea8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
	// void CreateVertexInstanceWithID(FVertexInstanceID VertexInstanceID, FVertexID VertexID);                                 // [0x7677db8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertexInstance
	// FVertexInstanceID CreateVertexInstance(FVertexID VertexID);                                                              // [0x7677d14] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateVertex
	// FVertexID CreateVertex();                                                                                                // [0x7677ce4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateTriangleWithID
	// void CreateTriangleWithID(FTriangleID TriangleID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x76779f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateTriangle
	// FTriangleID CreateTriangle(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x767774c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonWithID
	// void CreatePolygonWithID(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x7677580] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
	// void CreatePolygonGroupWithID(FPolygonGroupID PolygonGroupID);                                                           // [0x76774e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygonGroup
	// FPolygonGroupID CreatePolygonGroup();                                                                                    // [0x76774b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreatePolygon
	// FPolygonID CreatePolygon(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs); // [0x7677324] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateEdgeWithID
	// void CreateEdgeWithID(FEdgeID EdgeID, FVertexID VertexID0, FVertexID VertexID1);                                         // [0x76771d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.CreateEdge
	// FEdgeID CreateEdge(FVertexID VertexID0, FVertexID VertexID1);                                                            // [0x76770dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
	// void ComputePolygonTriangulation(FPolygonID PolygonID);                                                                  // [0x767703c] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MeshDescription.ElementID
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FElementID
{ 
	int32_t                                            IDValue;                                                    // 0x0000   (0x0004)  
};

/// Struct /Script/MeshDescription.PolygonGroupID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align 4 MaxSize: 0x0004
struct FPolygonGroupID : FElementID
{ 
};

/// Struct /Script/MeshDescription.PolygonID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align 4 MaxSize: 0x0004
struct FPolygonID : FElementID
{ 
};

/// Struct /Script/MeshDescription.VertexID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align 4 MaxSize: 0x0004
struct FVertexID : FElementID
{ 
};

/// Struct /Script/MeshDescription.VertexInstanceID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align 4 MaxSize: 0x0004
struct FVertexInstanceID : FElementID
{ 
};

/// Struct /Script/MeshDescription.EdgeID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align 4 MaxSize: 0x0004
struct FEdgeID : FElementID
{ 
};

/// Struct /Script/MeshDescription.TriangleID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align 4 MaxSize: 0x0004
struct FTriangleID : FElementID
{ 
};

#pragma pack(pop)


static_assert(sizeof(UMeshDescription) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMeshDescriptionBase) == 0x0390); // 912 bytes (0x000028 - 0x000390)
static_assert(sizeof(FElementID) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FPolygonGroupID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FPolygonID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FVertexID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FVertexInstanceID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FEdgeID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FTriangleID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
