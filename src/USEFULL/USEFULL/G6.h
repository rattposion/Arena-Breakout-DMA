// generated header

#pragma once
/// dependency: CoreUObject
/// dependency: G6Base

#pragma pack(push, 0x1)

/// Class /Script/G6.G6LogicStep_CleanGameEnv
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UG6LogicStep_CleanGameEnv : public UG6LogicStep
{ 
public:
};

/// Class /Script/G6.G6LogicStep_GlobalInitialize
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UG6LogicStep_GlobalInitialize : public UG6LogicStep
{ 
public:
};

/// Class /Script/G6.G6LogicStep_LanchLua
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UG6LogicStep_LanchLua : public UG6LogicStep
{ 
public:
};

/// Class /Script/G6.G6LogicStep_Update
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UG6LogicStep_Update : public UG6LogicStep
{ 
public:
};

/// Class /Script/G6.G6LuaAppMain
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UG6LuaAppMain : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Class /Script/G6.G6LuaScriptManager
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UG6LuaScriptManager : public UObject
{ 
public:
	bool                                               bIsGCLock;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x27];                                      // 0x0029   (0x0027)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UG6LogicStep_CleanGameEnv) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UG6LogicStep_GlobalInitialize) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UG6LogicStep_LanchLua) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UG6LogicStep_Update) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UG6LuaAppMain) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UG6LuaScriptManager) == 0x0050); // 80 bytes (0x000028 - 0x000050)
