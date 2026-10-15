// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MeshDescription

#pragma pack(push, 0x1)

/// Class /Script/StaticMeshDescription.StaticMeshDescription
/// Size: 0x0390 (912 bytes) (0x000390 - 0x000390) align 8 MaxSize: 0x0390
class UStaticMeshDescription : public UMeshDescriptionBase
{ 
public:


	/// Functions
	// Function /Script/StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
	// void SetVertexInstanceUV(FVertexInstanceID VertexInstanceID, FVector2D UV, int32_t UVIndex);                             // [0x76850d8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
	// void SetPolygonGroupMaterialSlotName(FPolygonGroupID PolygonGroupID, FName& SlotName);                                   // [0x7684fe4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
	// FVector2D GetVertexInstanceUV(FVertexInstanceID VertexInstanceID, int32_t UVIndex);                                      // [0x7684eec] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/StaticMeshDescription.StaticMeshDescription.CreateCube
	// void CreateCube(FVector Center, FVector HalfExtents, FPolygonGroupID PolygonGroup, FPolygonID& PolygonID_PlusX, FPolygonID& PolygonID_MinusX, FPolygonID& PolygonID_PlusY, FPolygonID& PolygonID_MinusY, FPolygonID& PolygonID_PlusZ, FPolygonID& PolygonID_MinusZ); // [0x7684b2c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/StaticMeshDescription.UVMapSettings
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 MaxSize: 0x0038
struct FUVMapSettings
{ 
	FVector                                            Size;                                                       // 0x0000   (0x000C)  
	FVector2D                                          UVTile;                                                     // 0x000C   (0x0008)  
	FVector                                            position;                                                   // 0x0014   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x0020   (0x000C)  
	FVector                                            Scale;                                                      // 0x002C   (0x000C)  
};

#pragma pack(pop)


static_assert(sizeof(UStaticMeshDescription) == 0x0390); // 912 bytes (0x000390 - 0x000390)
static_assert(sizeof(FUVMapSettings) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(offsetof(FUVMapSettings, Size) == 0x0000);
static_assert(offsetof(FUVMapSettings, UVTile) == 0x000C);
static_assert(offsetof(FUVMapSettings, position) == 0x0014);
static_assert(offsetof(FUVMapSettings, Rotation) == 0x0020);
static_assert(offsetof(FUVMapSettings, Scale) == 0x002C);
