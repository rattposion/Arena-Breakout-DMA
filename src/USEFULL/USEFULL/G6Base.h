// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/G6Base.G6TickableGameObject
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UG6TickableGameObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/G6Base.AssetStreamingMgr
/// Size: 0x0180 (384 bytes) (0x000030 - 0x000180) align 8 MaxSize: 0x0180
class UAssetStreamingMgr : public UG6TickableGameObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x150];                                     // 0x0030   (0x0150)  MISSED
};

/// Class /Script/G6Base.DebugConsole
/// Size: 0x0468 (1128 bytes) (0x000028 - 0x000468) align 8 MaxSize: 0x0468
class UDebugConsole : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	SDK_UNDEFINED(16,1383) /* FMulticastInlineDelegate */ __um(OnCustomConsoleCommandCommit);                      // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1384) /* FMulticastInlineDelegate */ __um(OnErrorMessageReceived);                            // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,1385) /* FMulticastInlineDelegate */ __um(OnNewMessageReceived);                              // 0x0058   (0x0010)  
	unsigned char                                      UnknownData01_7[0x400];                                     // 0x0068   (0x0400)  MISSED


	/// Functions
	// Function /Script/G6Base.DebugConsole.UnregisterCustomConsoleCommandInfo
	// void UnregisterCustomConsoleCommandInfo(TArray<FString>& InCustomCommandList);                                           // [0x609eff0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/G6Base.DebugConsole.SetNonFilterMessagesUIDRange
	// void SetNonFilterMessagesUIDRange(int32_t InStartId, int32_t InEndId);                                                   // [0x609edc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/G6Base.DebugConsole.SetMaxMessagesCount
	// void SetMaxMessagesCount(int32_t InMaxCount);                                                                            // [0x609ed30] Final|Native|Public|BlueprintCallable 
	// Function /Script/G6Base.DebugConsole.SetLogLevel
	// void SetLogLevel(char LogLevel);                                                                                         // [0x609ec98] Final|Native|Public|BlueprintCallable 
	// Function /Script/G6Base.DebugConsole.SetLogFilterText
	// void SetLogFilterText(FText& InFilterText);                                                                              // [0x609ebc8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/G6Base.DebugConsole.SetLogDisplayCategory
	// void SetLogDisplayCategory(FName& CategoryName);                                                                         // [0x609eb28] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/G6Base.DebugConsole.ResetMessageFilter
	// void ResetMessageFilter();                                                                                               // [0x609eabc] Final|Native|Public|BlueprintCallable 
	// Function /Script/G6Base.DebugConsole.RegisterCustomConsoleCommandInfo
	// void RegisterCustomConsoleCommandInfo(TArray<FString>& InCustomCommandList);                                             // [0x609e9fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/G6Base.DebugConsole.OnNewMessageReceivedEvent__DelegateSignature
	// void OnNewMessageReceivedEvent__DelegateSignature(FString MessageMarkupText);                                            // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/G6Base.DebugConsole.OnErrorMessageReceivedEvent__DelegateSignature
	// void OnErrorMessageReceivedEvent__DelegateSignature();                                                                   // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/G6Base.DebugConsole.OnCustomConsoleCommandCommittedEvent__DelegateSignature
	// void OnCustomConsoleCommandCommittedEvent__DelegateSignature(FString CommandName, FString ExtraArgs);                    // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/G6Base.DebugConsole.IsMessageFiltered
	// bool IsMessageFiltered(int32_t InMessageIndex);                                                                          // [0x609e48c] Final|Native|Public|BlueprintCallable 
	// Function /Script/G6Base.DebugConsole.GetMessageUID
	// int32_t GetMessageUID(int32_t InMessageIndex);                                                                           // [0x609dca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/G6Base.DebugConsole.GetMessageText
	// FString GetMessageText(int32_t InMessageIndex);                                                                          // [0x609db70] Final|Native|Public|BlueprintCallable 
	// Function /Script/G6Base.DebugConsole.GetCurrentMessagesCount
	// int32_t GetCurrentMessagesCount();                                                                                       // [0x50ca388] Final|Native|Public|BlueprintCallable 
	// Function /Script/G6Base.DebugConsole.GetConsoleInputHistory
	// void GetConsoleInputHistory(TArray<FString>& OutHistoryInputList);                                                       // [0x609d900] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/G6Base.DebugConsole.GetCommandAutoCompleteSuggestions
	// void GetCommandAutoCompleteSuggestions(FText& InInputText, TArray<FString>& OutAutoCompleteList);                        // [0x609d798] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/G6Base.DebugConsole.GetAvailableLogCategories
	// TArray<FName> GetAvailableLogCategories();                                                                               // [0x609d77c] Final|Native|Public|BlueprintCallable 
	// Function /Script/G6Base.DebugConsole.CommitConsoleCommand
	// void CommitConsoleCommand(FText& InText);                                                                                // [0x609d2bc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/G6Base.DebugConsole.ClearAllDisplayText
	// void ClearAllDisplayText();                                                                                              // [0x609d254] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/G6Base.G6CustomScriptStatProfiler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UG6CustomScriptStatProfiler : public UObject
{ 
public:


	/// Functions
	// Function /Script/G6Base.G6CustomScriptStatProfiler.UpdateStatProfilerData
	// void UpdateStatProfilerData();                                                                                           // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/G6Base.G6CustomScriptStatProfiler.StartScopeByIndex
	// void StartScopeByIndex(int32_t InStatIndex);                                                                             // [0x4dec47c] Final|Native|Public|BlueprintCallable 
	// Function /Script/G6Base.G6CustomScriptStatProfiler.StartScope
	// int32_t StartScope(FString InStatName);                                                                                  // [0x609eed8] Final|Native|Public|BlueprintCallable 
	// Function /Script/G6Base.G6CustomScriptStatProfiler.IsStatProfileEnabled
	// bool IsStatProfileEnabled();                                                                                             // [0x21793e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/G6Base.G6CustomScriptStatProfiler.GetStatItemUniqueFullName
	// FString GetStatItemUniqueFullName(int32_t InStatItemIndex);                                                              // [0x609e2b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/G6Base.G6CustomScriptStatProfiler.GetStatItemParentLevel
	// void GetStatItemParentLevel(int32_t InStatItemIndex, TArray<int32_t>& OutParentLevelItems);                              // [0x609e130] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/G6Base.G6CustomScriptStatProfiler.GetStatItemParentIndex
	// int32_t GetStatItemParentIndex(int32_t InStatItemIndex);                                                                 // [0x4deb48c] Final|Native|Public|BlueprintCallable 
	// Function /Script/G6Base.G6CustomScriptStatProfiler.GetStatItemMaxChildCallDepth
	// int32_t GetStatItemMaxChildCallDepth(int32_t InStatItemIndex);                                                           // [0x5139864] Final|Native|Public|BlueprintCallable 
	// Function /Script/G6Base.G6CustomScriptStatProfiler.GetStatItemDisplayName
	// FString GetStatItemDisplayName(int32_t InStatItemIndex);                                                                 // [0x609e078] Final|Native|Public|BlueprintCallable 
	// Function /Script/G6Base.G6CustomScriptStatProfiler.GetStatItemData
	// FString GetStatItemData(int32_t InStatItemIndex, TArray<float>& OutItemData);                                            // [0x609df48] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/G6Base.G6CustomScriptStatProfiler.GetStatItemChildren
	// void GetStatItemChildren(int32_t InStatItemIndex, TArray<int32_t>& OutChildItems, bool bScriptOnly);                     // [0x609dd7c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/G6Base.G6CustomScriptStatProfiler.GetStatItemCallDepth
	// int32_t GetStatItemCallDepth(int32_t InStatItemIndex);                                                                   // [0x5139864] Final|Native|Public|BlueprintCallable 
	// Function /Script/G6Base.G6CustomScriptStatProfiler.GetItemIndexByNameAndDepth
	// int32_t GetItemIndexByNameAndDepth(FString InName, int32_t InCallDepth, FString InFullUniqueName);                       // [0x609da00] Final|Native|Public|BlueprintCallable 
	// Function /Script/G6Base.G6CustomScriptStatProfiler.EndScope
	// void EndScope(FString InStatName);                                                                                       // [0x609d6dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/G6Base.G6CustomScriptStatProfiler.CreateScriptStat
	// int32_t CreateScriptStat(FString InStatName, FString InStatDesc);                                                        // [0x609d480] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/G6Base.G6LogicStep
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UG6LogicStep : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED


	/// Functions
	// Function /Script/G6Base.G6LogicStep.ShutDown
	// bool ShutDown();                                                                                                         // [0x6011778] Native|Public        
};

/// Class /Script/G6Base.G6LogicStep_SwitchLevel
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UG6LogicStep_SwitchLevel : public UG6LogicStep
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/G6Base.G6LogicStepProcessor
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align 8 MaxSize: 0x00A8
class UG6LogicStepProcessor : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	class UG6LogicStep*                                m_Cur_Running_LogicStep;                                    // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_7[0x68];                                      // 0x0040   (0x0068)  MISSED
};

/// Class /Script/G6Base.G6LuaUEUtil
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UG6LuaUEUtil : public UObject
{ 
public:


	/// Functions
	// Function /Script/G6Base.G6LuaUEUtil.TestEnsure
	// void TestEnsure();                                                                                                       // [0x1e39048] Final|Native|Static|Public 
	// Function /Script/G6Base.G6LuaUEUtil.TestCrash
	// void TestCrash();                                                                                                        // [0x609efdc] Final|Native|Static|Public 
	// Function /Script/G6Base.G6LuaUEUtil.ParseCommandLineString
	// bool ParseCommandLineString(FString strKey, FString& OutValue);                                                          // [0x20687cc] Final|Native|Static|Public|HasOutParms 
	// Function /Script/G6Base.G6LuaUEUtil.ParseCommandLineInt
	// bool ParseCommandLineInt(FString strKey, int64_t& OutValue);                                                             // [0x609e8b8] Final|Native|Static|Public|HasOutParms 
	// Function /Script/G6Base.G6LuaUEUtil.ParseCommandLineFloat
	// bool ParseCommandLineFloat(FString strKey, float& OutValue);                                                             // [0x609e774] Final|Native|Static|Public|HasOutParms 
	// Function /Script/G6Base.G6LuaUEUtil.ParseCommandLineBool
	// bool ParseCommandLineBool(FString strKey, bool& OutValue);                                                               // [0x609e630] Final|Native|Static|Public|HasOutParms 
	// Function /Script/G6Base.G6LuaUEUtil.GetUnixTimeMillisecond
	// int64_t GetUnixTimeMillisecond();                                                                                        // [0x609e414] Final|Native|Static|Public 
};

/// Class /Script/G6Base.G6OnlineSession
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UG6OnlineSession : public UOnlineSession
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/G6Base.G6PlatformGameInstance
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UG6PlatformGameInstance : public UObject
{ 
public:
	class UDebugConsole*                               DebugConsole;                                               // 0x0028   (0x0008)  
	class UG6CustomScriptStatProfiler*                 Profiler;                                                   // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0038   (0x0018)  MISSED
	bool                                               bUseG6OnlineSession;                                        // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1F];                                      // 0x0051   (0x001F)  MISSED
	class UG6LogicStepProcessor*                       LogicStepProcessor;                                         // 0x0070   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0078   (0x0008)  MISSED


	/// Functions
	// Function /Script/G6Base.G6PlatformGameInstance.Lua
	// void Lua(FString strLua);                                                                                                // [0x609e578] Final|Exec|Native|Public 
	// Function /Script/G6Base.G6PlatformGameInstance.DAWLua
	// void DAWLua(FString strLua);                                                                                             // [0x609d5b0] Final|Exec|Native|Public 
	// Function /Script/G6Base.G6PlatformGameInstance.ConsoleCMD
	// void ConsoleCMD(FString& Cmd);                                                                                           // [0x609d38c] Final|Exec|Native|Public|HasOutParms 
};

/// Class /Script/G6Base.G6PlatformGameInstanceManager
/// Size: 0x00E0 (224 bytes) (0x000028 - 0x0000E0) align 8 MaxSize: 0x00E0
class UG6PlatformGameInstanceManager : public UObject
{ 
public:
	TMap<int32_t, class UG6PlatformGameInstance*>      mContainer;                                                 // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_7[0x68];                                      // 0x0078   (0x0068)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UG6TickableGameObject) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UAssetStreamingMgr) == 0x0180); // 384 bytes (0x000030 - 0x000180)
static_assert(sizeof(UDebugConsole) == 0x0468); // 1128 bytes (0x000028 - 0x000468)
static_assert(sizeof(UG6CustomScriptStatProfiler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UG6LogicStep) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UG6LogicStep_SwitchLevel) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UG6LogicStepProcessor) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UG6LuaUEUtil) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UG6OnlineSession) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UG6PlatformGameInstance) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UG6PlatformGameInstanceManager) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(offsetof(UG6LogicStepProcessor, m_Cur_Running_LogicStep) == 0x0038);
static_assert(offsetof(UG6PlatformGameInstance, DebugConsole) == 0x0028);
static_assert(offsetof(UG6PlatformGameInstance, Profiler) == 0x0030);
static_assert(offsetof(UG6PlatformGameInstance, LogicStepProcessor) == 0x0070);
static_assert(offsetof(UG6PlatformGameInstanceManager, mContainer) == 0x0028);
