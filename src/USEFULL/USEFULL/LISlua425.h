// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/LISlua425.INTLLatentDelegate
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UINTLLatentDelegate : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED


	/// Functions
	// Function /Script/LISlua425.INTLLatentDelegate.OnLatentCallback
	// void OnLatentCallback(int32_t threadRef);                                                                                // [0x3f3c7d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LISlua425.INTLLuaActor
/// Size: 0x03C8 (968 bytes) (0x000318 - 0x0003C8) align 8 MaxSize: 0x03C8
class AINTLLuaActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x90];                                      // 0x0318   (0x0090)  MISSED
	FString                                            LuaFilePath;                                                // 0x03A8   (0x0010)  
	FString                                            LuaStateName;                                               // 0x03B8   (0x0010)  


	/// Functions
	// Function /Script/LISlua425.INTLLuaActor.CallLuaMember
	// FINTLLuaBPVar CallLuaMember(FString FunctionName, TArray<FINTLLuaBPVar>& Args);                                          // [0x3f3aaf0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LISlua425.INTLLuaPawn
/// Size: 0x0438 (1080 bytes) (0x000388 - 0x000438) align 8 MaxSize: 0x0438
class AINTLLuaPawn : public APawn
{ 
public:
	unsigned char                                      UnknownData00_8[0x90];                                      // 0x0388   (0x0090)  MISSED
	FString                                            LuaFilePath;                                                // 0x0418   (0x0010)  
	FString                                            LuaStateName;                                               // 0x0428   (0x0010)  


	/// Functions
	// Function /Script/LISlua425.INTLLuaPawn.CallLuaMember
	// FINTLLuaBPVar CallLuaMember(FString FunctionName, TArray<FINTLLuaBPVar>& Args);                                          // [0x3f3b220] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LISlua425.INTLLuaCharacter
/// Size: 0x06A0 (1696 bytes) (0x0005E8 - 0x0006A0) align 16 MaxSize: 0x06A0
class AINTLLuaCharacter : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x90];                                      // 0x05E8   (0x0090)  MISSED
	FString                                            LuaFilePath;                                                // 0x0678   (0x0010)  
	FString                                            LuaStateName;                                               // 0x0688   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0698   (0x0008)  MISSED


	/// Functions
	// Function /Script/LISlua425.INTLLuaCharacter.CallLuaMember
	// FINTLLuaBPVar CallLuaMember(FString FunctionName, TArray<FINTLLuaBPVar>& Args);                                          // [0x3f3ac60] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LISlua425.INTLLuaController
/// Size: 0x0440 (1088 bytes) (0x000390 - 0x000440) align 8 MaxSize: 0x0440
class AINTLLuaController : public AController
{ 
public:
	unsigned char                                      UnknownData00_8[0x90];                                      // 0x0390   (0x0090)  MISSED
	FString                                            LuaFilePath;                                                // 0x0420   (0x0010)  
	FString                                            LuaStateName;                                               // 0x0430   (0x0010)  


	/// Functions
	// Function /Script/LISlua425.INTLLuaController.CallLuaMember
	// FINTLLuaBPVar CallLuaMember(FString FunctionName, TArray<FINTLLuaBPVar>& Args);                                          // [0x3f3add0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LISlua425.INTLLuaPlayerController
/// Size: 0x0728 (1832 bytes) (0x000678 - 0x000728) align 8 MaxSize: 0x0728
class AINTLLuaPlayerController : public APlayerController
{ 
public:
	unsigned char                                      UnknownData00_8[0x90];                                      // 0x0678   (0x0090)  MISSED
	FString                                            LuaFilePath;                                                // 0x0708   (0x0010)  
	FString                                            LuaStateName;                                               // 0x0718   (0x0010)  


	/// Functions
	// Function /Script/LISlua425.INTLLuaPlayerController.CallLuaMember
	// FINTLLuaBPVar CallLuaMember(FString FunctionName, TArray<FINTLLuaBPVar>& Args);                                          // [0x3f3b390] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LISlua425.INTLLuaActorComponent
/// Size: 0x01B8 (440 bytes) (0x0000F8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UINTLLuaActorComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0xA0];                                      // 0x00F8   (0x00A0)  MISSED
	FString                                            LuaFilePath;                                                // 0x0198   (0x0010)  
	FString                                            LuaStateName;                                               // 0x01A8   (0x0010)  


	/// Functions
	// Function /Script/LISlua425.INTLLuaActorComponent.CallLuaMember
	// FINTLLuaBPVar CallLuaMember(FString FunctionName, TArray<FINTLLuaBPVar>& Args);                                          // [0x3f3b500] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LISlua425.INTLLuaGameModeBase
/// Size: 0x0468 (1128 bytes) (0x0003B8 - 0x000468) align 8 MaxSize: 0x0468
class AINTLLuaGameModeBase : public AGameModeBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x90];                                      // 0x03B8   (0x0090)  MISSED
	FString                                            LuaFilePath;                                                // 0x0448   (0x0010)  
	FString                                            LuaStateName;                                               // 0x0458   (0x0010)  


	/// Functions
	// Function /Script/LISlua425.INTLLuaGameModeBase.CallLuaMember
	// FINTLLuaBPVar CallLuaMember(FString FunctionName, TArray<FINTLLuaBPVar>& Args);                                          // [0x3f3af40] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LISlua425.INTLLuaHUD
/// Size: 0x04C0 (1216 bytes) (0x000410 - 0x0004C0) align 8 MaxSize: 0x04C0
class AINTLLuaHUD : public AHUD
{ 
public:
	unsigned char                                      UnknownData00_8[0x90];                                      // 0x0410   (0x0090)  MISSED
	FString                                            LuaFilePath;                                                // 0x04A0   (0x0010)  
	FString                                            LuaStateName;                                               // 0x04B0   (0x0010)  


	/// Functions
	// Function /Script/LISlua425.INTLLuaHUD.CallLuaMember
	// FINTLLuaBPVar CallLuaMember(FString FunctionName, TArray<FINTLLuaBPVar>& Args);                                          // [0x3f3b0b0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LISlua425.LuaTableObjectInterfaceINTL
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULuaTableObjectInterfaceINTL : public UInterface
{ 
public:
};

/// Class /Script/LISlua425.INTLLuaBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UINTLLuaBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/LISlua425.INTLLuaBlueprintLibrary.GetStringFromVar
	// FString GetStringFromVar(FINTLLuaBPVar Value, int32_t Index);                                                            // [0x3f3c630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LISlua425.INTLLuaBlueprintLibrary.GetObjectFromVar
	// class UObject* GetObjectFromVar(FINTLLuaBPVar Value, int32_t Index);                                                     // [0x3f3c4b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LISlua425.INTLLuaBlueprintLibrary.GetNumberFromVar
	// float GetNumberFromVar(FINTLLuaBPVar Value, int32_t Index);                                                              // [0x3f3c360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LISlua425.INTLLuaBlueprintLibrary.GetIntFromVar
	// int32_t GetIntFromVar(FINTLLuaBPVar Value, int32_t Index);                                                               // [0x3f3c1f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LISlua425.INTLLuaBlueprintLibrary.GetBoolFromVar
	// bool GetBoolFromVar(FINTLLuaBPVar Value, int32_t Index);                                                                 // [0x3f3c080] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LISlua425.INTLLuaBlueprintLibrary.CreateVarFromString
	// FINTLLuaBPVar CreateVarFromString(FString Value);                                                                        // [0x3f3bf80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LISlua425.INTLLuaBlueprintLibrary.CreateVarFromObject
	// FINTLLuaBPVar CreateVarFromObject(class UObject* WorldContextObject, class UObject* Value);                              // [0x3f3be90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LISlua425.INTLLuaBlueprintLibrary.CreateVarFromNumber
	// FINTLLuaBPVar CreateVarFromNumber(float Value);                                                                          // [0x3f3bdd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LISlua425.INTLLuaBlueprintLibrary.CreateVarFromInt
	// FINTLLuaBPVar CreateVarFromInt(int32_t Value);                                                                           // [0x3f3bca0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LISlua425.INTLLuaBlueprintLibrary.CreateVarFromBool
	// FINTLLuaBPVar CreateVarFromBool(bool Value);                                                                             // [0x3f3bb90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LISlua425.INTLLuaBlueprintLibrary.CallToLuaWithArgs
	// FINTLLuaBPVar CallToLuaWithArgs(class UObject* WorldContextObject, FString FunctionName, TArray<FINTLLuaBPVar>& Args, FString StateName); // [0x3f3b980] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LISlua425.INTLLuaBlueprintLibrary.CallToLua
	// FINTLLuaBPVar CallToLua(class UObject* WorldContextObject, FString FunctionName, FString StateName);                     // [0x3f3b7e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LISlua425.INTLLuaDelegate
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UINTLLuaDelegate : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/LISlua425.INTLLuaDelegate.EventTrigger
	// void EventTrigger();                                                                                                     // [0x34f9660] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LISlua425.INTLLuaUserWidget
/// Size: 0x0378 (888 bytes) (0x000290 - 0x000378) align 8 MaxSize: 0x0378
class UINTLLuaUserWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_8[0x90];                                      // 0x0290   (0x0090)  MISSED
	FString                                            LuaFilePath;                                                // 0x0320   (0x0010)  
	FString                                            LuaStateName;                                               // 0x0330   (0x0010)  
	unsigned char                                      UnknownData01_7[0x38];                                      // 0x0340   (0x0038)  MISSED


	/// Functions
	// Function /Script/LISlua425.INTLLuaUserWidget.CallLuaMember
	// FINTLLuaBPVar CallLuaMember(FString FunctionName, TArray<FINTLLuaBPVar>& Args);                                          // [0x3f3b670] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/LISlua425.INTLLuaBPVar
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FINTLLuaBPVar
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UINTLLatentDelegate) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(AINTLLuaActor) == 0x03C8); // 968 bytes (0x000318 - 0x0003C8)
static_assert(sizeof(AINTLLuaPawn) == 0x0438); // 1080 bytes (0x000388 - 0x000438)
static_assert(sizeof(AINTLLuaCharacter) == 0x06A0); // 1696 bytes (0x0005E8 - 0x0006A0)
static_assert(sizeof(AINTLLuaController) == 0x0440); // 1088 bytes (0x000390 - 0x000440)
static_assert(sizeof(AINTLLuaPlayerController) == 0x0728); // 1832 bytes (0x000678 - 0x000728)
static_assert(sizeof(UINTLLuaActorComponent) == 0x01B8); // 440 bytes (0x0000F8 - 0x0001B8)
static_assert(sizeof(AINTLLuaGameModeBase) == 0x0468); // 1128 bytes (0x0003B8 - 0x000468)
static_assert(sizeof(AINTLLuaHUD) == 0x04C0); // 1216 bytes (0x000410 - 0x0004C0)
static_assert(sizeof(ULuaTableObjectInterfaceINTL) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UINTLLuaBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UINTLLuaDelegate) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UINTLLuaUserWidget) == 0x0378); // 888 bytes (0x000290 - 0x000378)
static_assert(sizeof(FINTLLuaBPVar) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(AINTLLuaActor, LuaFilePath) == 0x03A8);
static_assert(offsetof(AINTLLuaActor, LuaStateName) == 0x03B8);
static_assert(offsetof(AINTLLuaPawn, LuaFilePath) == 0x0418);
static_assert(offsetof(AINTLLuaPawn, LuaStateName) == 0x0428);
static_assert(offsetof(AINTLLuaCharacter, LuaFilePath) == 0x0678);
static_assert(offsetof(AINTLLuaCharacter, LuaStateName) == 0x0688);
static_assert(offsetof(AINTLLuaController, LuaFilePath) == 0x0420);
static_assert(offsetof(AINTLLuaController, LuaStateName) == 0x0430);
static_assert(offsetof(AINTLLuaPlayerController, LuaFilePath) == 0x0708);
static_assert(offsetof(AINTLLuaPlayerController, LuaStateName) == 0x0718);
static_assert(offsetof(UINTLLuaActorComponent, LuaFilePath) == 0x0198);
static_assert(offsetof(UINTLLuaActorComponent, LuaStateName) == 0x01A8);
static_assert(offsetof(AINTLLuaGameModeBase, LuaFilePath) == 0x0448);
static_assert(offsetof(AINTLLuaGameModeBase, LuaStateName) == 0x0458);
static_assert(offsetof(AINTLLuaHUD, LuaFilePath) == 0x04A0);
static_assert(offsetof(AINTLLuaHUD, LuaStateName) == 0x04B0);
static_assert(offsetof(UINTLLuaUserWidget, LuaFilePath) == 0x0320);
static_assert(offsetof(UINTLLuaUserWidget, LuaStateName) == 0x0330);
