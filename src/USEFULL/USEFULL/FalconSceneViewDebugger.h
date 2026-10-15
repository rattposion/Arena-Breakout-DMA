// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/FalconSceneViewDebugger.FalconSceneViewDebuggerSettings
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFalconSceneViewDebuggerSettings : public UObject
{ 
public:
};

/// Class /Script/FalconSceneViewDebugger.FalconSceneViewDebuggerSettings_PhysicsMat
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UFalconSceneViewDebuggerSettings_PhysicsMat : public UFalconSceneViewDebuggerSettings
{ 
public:
	float                                              Alpha;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/FalconSceneViewDebugger.FalconSceneViewDebuggerSettings_LandscapeMask
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UFalconSceneViewDebuggerSettings_LandscapeMask : public UFalconSceneViewDebuggerSettings
{ 
public:
	float                                              Alpha;                                                      // 0x0028   (0x0004)  
	FName                                              GizmoMaterialName;                                          // 0x002C   (0x0008)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/FalconSceneViewDebugger.FalconSceneViewDebuggerSettings_MipLevel
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class UFalconSceneViewDebuggerSettings_MipLevel : public UFalconSceneViewDebuggerSettings
{ 
public:
	float                                              Alpha;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FName>                                      TargetMaterialParameterNames;                               // 0x0030   (0x0010)  
	TWeakObjectPtr<class UTexture2D*>                  DebugTexture;                                               // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0048   (0x0020)  MISSED
	FIntPoint                                          FixViewportSize;                                            // 0x0068   (0x0008)  


	/// Functions
	// Function /Script/FalconSceneViewDebugger.FalconSceneViewDebuggerSettings_MipLevel.SetFixViewportSize
	// void SetFixViewportSize();                                                                                               // [0x4f85694] Final|Native|Public  
};

/// Class /Script/FalconSceneViewDebugger.FalconSceneViewDebuggerSubsystem
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UFalconSceneViewDebuggerSubsystem : public UEngineSubsystem
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UFalconSceneViewDebuggerSettings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UFalconSceneViewDebuggerSettings_PhysicsMat) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UFalconSceneViewDebuggerSettings_LandscapeMask) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UFalconSceneViewDebuggerSettings_MipLevel) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UFalconSceneViewDebuggerSubsystem) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(offsetof(UFalconSceneViewDebuggerSettings_LandscapeMask, GizmoMaterialName) == 0x002C);
static_assert(offsetof(UFalconSceneViewDebuggerSettings_MipLevel, TargetMaterialParameterNames) == 0x0030);
static_assert(offsetof(UFalconSceneViewDebuggerSettings_MipLevel, DebugTexture) == 0x0040);
static_assert(offsetof(UFalconSceneViewDebuggerSettings_MipLevel, FixViewportSize) == 0x0068);
