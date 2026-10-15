// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore
/// dependency: LevelSequence

#pragma pack(push, 0x1)

/// Class /Script/GLTFExporterRuntime.GLTFCameraActor
/// Size: 0x0A50 (2640 bytes) (0x0009F0 - 0x000A50) align 16 MaxSize: 0x0A50
class AGLTFCameraActor : public ACameraActor
{ 
public:
	SDK_UNDEFINED(1,4913) /* EGLTFCameraControlMode */ __um(Mode);                                                 // 0x09F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x09F1   (0x0007)  MISSED
	class AActor*                                      Target;                                                     // 0x09F8   (0x0008)  
	float                                              PitchAngleMin;                                              // 0x0A00   (0x0004)  
	float                                              PitchAngleMax;                                              // 0x0A04   (0x0004)  
	float                                              YawAngleMin;                                                // 0x0A08   (0x0004)  
	float                                              YawAngleMax;                                                // 0x0A0C   (0x0004)  
	float                                              DistanceMin;                                                // 0x0A10   (0x0004)  
	float                                              DistanceMax;                                                // 0x0A14   (0x0004)  
	float                                              DollyDuration;                                              // 0x0A18   (0x0004)  
	float                                              DollySensitivity;                                           // 0x0A1C   (0x0004)  
	float                                              RotationInertia;                                            // 0x0A20   (0x0004)  
	float                                              RotationSensitivity;                                        // 0x0A24   (0x0004)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0A28   (0x0028)  MISSED


	/// Functions
	// Function /Script/GLTFExporterRuntime.GLTFCameraActor.OnMouseY
	// void OnMouseY(float AxisValue);                                                                                          // [0x50bbbd8] Final|Native|Private 
	// Function /Script/GLTFExporterRuntime.GLTFCameraActor.OnMouseX
	// void OnMouseX(float AxisValue);                                                                                          // [0x50bbb3c] Final|Native|Private 
	// Function /Script/GLTFExporterRuntime.GLTFCameraActor.OnMouseWheelAxis
	// void OnMouseWheelAxis(float AxisValue);                                                                                  // [0x50bbaa0] Final|Native|Private 
};

/// Class /Script/GLTFExporterRuntime.GLTFHotspotActor
/// Size: 0x03B8 (952 bytes) (0x000318 - 0x0003B8) align 8 MaxSize: 0x03B8
class AGLTFHotspotActor : public AActor
{ 
public:
	class ASkeletalMeshActor*                          SkeletalMeshActor;                                          // 0x0318   (0x0008)  
	class UAnimSequence*                               AnimationSequence;                                          // 0x0320   (0x0008)  
	class ULevelSequence*                              LevelSequence;                                              // 0x0328   (0x0008)  
	class UTexture2D*                                  Image;                                                      // 0x0330   (0x0008)  
	class UTexture2D*                                  HoveredImage;                                               // 0x0338   (0x0008)  
	class UTexture2D*                                  ToggledImage;                                               // 0x0340   (0x0008)  
	class UTexture2D*                                  ToggledHoveredImage;                                        // 0x0348   (0x0008)  
	class UMaterialBillboardComponent*                 BillboardComponent;                                         // 0x0350   (0x0008)  
	class USphereComponent*                            SphereComponent;                                            // 0x0358   (0x0008)  
	class UMaterialInterface*                          DefaultMaterial;                                            // 0x0360   (0x0008)  
	class UTexture2D*                                  DefaultImage;                                               // 0x0368   (0x0008)  
	class UTexture2D*                                  DefaultHoveredImage;                                        // 0x0370   (0x0008)  
	class UTexture2D*                                  DefaultToggledImage;                                        // 0x0378   (0x0008)  
	class UTexture2D*                                  DefaultToggledHoveredImage;                                 // 0x0380   (0x0008)  
	class UMaterialInterface*                          DefaultIconMaterial;                                        // 0x0388   (0x0008)  
	class UTexture*                                    ActiveImage;                                                // 0x0390   (0x0008)  
	class ULevelSequencePlayer*                        LevelSequencePlayer;                                        // 0x0398   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x03A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/GLTFExporterRuntime.GLTFHotspotActor.EndCursorOver
	// void EndCursorOver(class UPrimitiveComponent* TouchedComponent);                                                         // [0x50bb9fc] Final|Native|Private 
	// Function /Script/GLTFExporterRuntime.GLTFHotspotActor.Clicked
	// void Clicked(class UPrimitiveComponent* TouchedComponent, FKey ButtonPressed);                                           // [0x50bb8b4] Final|Native|Private 
	// Function /Script/GLTFExporterRuntime.GLTFHotspotActor.BeginCursorOver
	// void BeginCursorOver(class UPrimitiveComponent* TouchedComponent);                                                       // [0x50bb818] Final|Native|Private 
};

/// Struct /Script/GLTFExporterRuntime.GLTFOverrideMaterialBakeSettings
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align 1 MaxSize: 0x0006
struct FGLTFOverrideMaterialBakeSettings
{ 
	bool                                               bOverrideSize;                                              // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,4914) /* EGLTFMaterialBakeSizePOT */ __um(Size);                                               // 0x0001   (0x0001)  
	bool                                               bOverrideFilter;                                            // 0x0002   (0x0001)  
	SDK_UNDEFINED(1,4915) /* TEnumAsByte<TextureFilter> */ __um(Filter);                                           // 0x0003   (0x0001)  
	bool                                               bOverrideTiling;                                            // 0x0004   (0x0001)  
	SDK_UNDEFINED(1,4916) /* TEnumAsByte<TextureAddress> */ __um(Tiling);                                          // 0x0005   (0x0001)  
};

/// Class /Script/GLTFExporterRuntime.GLTFMaterialExportOptions
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UGLTFMaterialExportOptions : public UAssetUserData
{ 
public:
	FGLTFOverrideMaterialBakeSettings                  Default;                                                    // 0x0028   (0x0006)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002E   (0x0002)  MISSED
	SDK_UNDEFINED(80,4917) /* TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> */ __um(Inputs); // 0x0030   (0x0050)  
};

#pragma pack(pop)


static_assert(sizeof(AGLTFCameraActor) == 0x0A50); // 2640 bytes (0x0009F0 - 0x000A50)
static_assert(sizeof(AGLTFHotspotActor) == 0x03B8); // 952 bytes (0x000318 - 0x0003B8)
static_assert(sizeof(FGLTFOverrideMaterialBakeSettings) == 0x0006); // 6 bytes (0x000000 - 0x000006)
static_assert(sizeof(UGLTFMaterialExportOptions) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(offsetof(AGLTFCameraActor, Target) == 0x09F8);
static_assert(offsetof(AGLTFHotspotActor, SkeletalMeshActor) == 0x0318);
static_assert(offsetof(AGLTFHotspotActor, AnimationSequence) == 0x0320);
static_assert(offsetof(AGLTFHotspotActor, LevelSequence) == 0x0328);
static_assert(offsetof(AGLTFHotspotActor, Image) == 0x0330);
static_assert(offsetof(AGLTFHotspotActor, HoveredImage) == 0x0338);
static_assert(offsetof(AGLTFHotspotActor, ToggledImage) == 0x0340);
static_assert(offsetof(AGLTFHotspotActor, ToggledHoveredImage) == 0x0348);
static_assert(offsetof(AGLTFHotspotActor, BillboardComponent) == 0x0350);
static_assert(offsetof(AGLTFHotspotActor, SphereComponent) == 0x0358);
static_assert(offsetof(AGLTFHotspotActor, DefaultMaterial) == 0x0360);
static_assert(offsetof(AGLTFHotspotActor, DefaultImage) == 0x0368);
static_assert(offsetof(AGLTFHotspotActor, DefaultHoveredImage) == 0x0370);
static_assert(offsetof(AGLTFHotspotActor, DefaultToggledImage) == 0x0378);
static_assert(offsetof(AGLTFHotspotActor, DefaultToggledHoveredImage) == 0x0380);
static_assert(offsetof(AGLTFHotspotActor, DefaultIconMaterial) == 0x0388);
static_assert(offsetof(AGLTFHotspotActor, ActiveImage) == 0x0390);
static_assert(offsetof(AGLTFHotspotActor, LevelSequencePlayer) == 0x0398);
static_assert(offsetof(UGLTFMaterialExportOptions, Default) == 0x0028);
