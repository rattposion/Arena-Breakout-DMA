// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Game/Login/Blueprints/LoadRegistActor.LoadRegistActor_C
/// Size: 0x0338 (824 bytes) (0x000318 - 0x000338) align 8 MaxSize: 0x0338
class ALoadRegistActor_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0318   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0320   (0x0008)  
	SDK_UNDEFINED(16,5017) /* FMulticastInlineDelegate */ __um(MapLoadedEvent);                                    // 0x0328   (0x0010)  


	/// Functions
	// Function /Game/Login/Blueprints/LoadRegistActor.LoadRegistActor_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x182d6bc] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Login/Blueprints/LoadRegistActor.LoadRegistActor_C.LoadMap
	// void LoadMap();                                                                                                          // [0x182d6bc] BlueprintCallable|BlueprintEvent 
	// Function /Game/Login/Blueprints/LoadRegistActor.LoadRegistActor_C.OnLoadMap
	// void OnLoadMap();                                                                                                        // [0x182d6bc] BlueprintCallable|BlueprintEvent 
	// Function /Game/Login/Blueprints/LoadRegistActor.LoadRegistActor_C.ExecuteUbergraph_LoadRegistActor
	// void ExecuteUbergraph_LoadRegistActor(int32_t EntryPoint);                                                               // [0x182d6bc] Final                
	// Function /Game/Login/Blueprints/LoadRegistActor.LoadRegistActor_C.MapLoadedEvent__DelegateSignature
	// void MapLoadedEvent__DelegateSignature();                                                                                // [0x182d6bc] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

#pragma pack(pop)


static_assert(sizeof(ALoadRegistActor_C) == 0x0338); // 824 bytes (0x000318 - 0x000338)
static_assert(offsetof(ALoadRegistActor_C, UberGraphFrame) == 0x0318);
static_assert(offsetof(ALoadRegistActor_C, DefaultSceneRoot) == 0x0320);
