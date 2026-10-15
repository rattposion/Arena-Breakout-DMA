// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Struct /Script/RigVM.RigVMRegister
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FRigVMRegister
{ 
	SDK_UNDEFINED(1,1270) /* ERigVMRegisterType */     __um(Type);                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	uint32_t                                           ByteIndex;                                                  // 0x0004   (0x0004)  
	uint16_t                                           ElementSize;                                                // 0x0008   (0x0002)  
	uint16_t                                           ElementCount;                                               // 0x000A   (0x0002)  
	uint16_t                                           SliceCount;                                                 // 0x000C   (0x0002)  
	char                                               AlignmentBytes;                                             // 0x000E   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x000F   (0x0001)  MISSED
	uint16_t                                           TrailingBytes;                                              // 0x0010   (0x0002)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0012   (0x0002)  MISSED
	FName                                              Name;                                                       // 0x0014   (0x0008)  
	int32_t                                            ScriptStructIndex;                                          // 0x001C   (0x0004)  
	bool                                               bIsArray;                                                   // 0x0020   (0x0001)  
	bool                                               bIsDynamic;                                                 // 0x0021   (0x0001)  
	unsigned char                                      UnknownData03_7[0x2];                                       // 0x0022   (0x0002)  MISSED
};

/// Struct /Script/RigVM.RigVMRegisterOffset
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRigVMRegisterOffset
{ 
	TArray<int32_t>                                    Segments;                                                   // 0x0000   (0x0010)  
	SDK_UNDEFINED(1,1271) /* ERigVMRegisterType */     __um(Type);                                                 // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FName                                              CPPType;                                                    // 0x0014   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	class UScriptStruct*                               ScriptStruct;                                               // 0x0020   (0x0008)  
	class UScriptStruct*                               ParentScriptStruct;                                         // 0x0028   (0x0008)  
	int32_t                                            ArrayIndex;                                                 // 0x0030   (0x0004)  
	uint16_t                                           ElementSize;                                                // 0x0034   (0x0002)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0036   (0x0002)  MISSED
	FString                                            CachedSegmentPath;                                          // 0x0038   (0x0010)  
};

/// Struct /Script/RigVM.RigVMMemoryContainer
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRigVMMemoryContainer
{ 
	bool                                               bUseNameMap;                                                // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,1272) /* ERigVMMemoryType */       __um(MemoryType);                                           // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	TArray<FRigVMRegister>                             Registers;                                                  // 0x0008   (0x0010)  
	TArray<FRigVMRegisterOffset>                       RegisterOffsets;                                            // 0x0018   (0x0010)  
	TArray<char>                                       Data;                                                       // 0x0028   (0x0010)  
	TArray<class UScriptStruct*>                       ScriptStructs;                                              // 0x0038   (0x0010)  
	TMap<FName, int32_t>                               NameMap;                                                    // 0x0048   (0x0050)  
	bool                                               bEncounteredErrorDuringLoad;                                // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMByteCodeEntry
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigVMByteCodeEntry
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	int32_t                                            InstructionIndex;                                           // 0x0008   (0x0004)  
};

/// Struct /Script/RigVM.RigVMByteCode
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRigVMByteCode
{ 
	TArray<char>                                       ByteCode;                                                   // 0x0000   (0x0010)  
	int32_t                                            NumInstructions;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FRigVMByteCodeEntry>                        Entries;                                                    // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMInstruction
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMInstruction
{ 
	uint64_t                                           ByteCodeIndex;                                              // 0x0000   (0x0008)  
	SDK_UNDEFINED(1,1273) /* ERigVMOpCode */           __um(OpCode);                                               // 0x0008   (0x0001)  
	char                                               OperandAlignment;                                           // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/RigVM.RigVMInstructionArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMInstructionArray
{ 
	TArray<FRigVMInstruction>                          Instructions;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/RigVM.RigVMExecuteContext
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FRigVMExecuteContext
{ 
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0000   (0x0058)  MISSED
};

/// Struct /Script/RigVM.RigVMParameter
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRigVMParameter
{ 
	SDK_UNDEFINED(1,1274) /* ERigVMParameterType */    __um(Type);                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x0004   (0x0008)  
	int32_t                                            RegisterIndex;                                              // 0x000C   (0x0004)  
	FString                                            CPPType;                                                    // 0x0010   (0x0010)  
	class UScriptStruct*                               ScriptStruct;                                               // 0x0020   (0x0008)  
	FName                                              ScriptStructPath;                                           // 0x0028   (0x0008)  
};

/// Class /Script/RigVM.RigVM
/// Size: 0x02F8 (760 bytes) (0x000028 - 0x0002F8) align 8 MaxSize: 0x02F8
class URigVM : public UObject
{ 
public:
	FRigVMMemoryContainer                              WorkMemoryStorage;                                          // 0x0028   (0x00A0)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FRigVMMemoryContainer                              LiteralMemoryStorage;                                       // 0x00D0   (0x00A0)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0170   (0x0008)  MISSED
	FRigVMByteCode                                     ByteCodeStorage;                                            // 0x0178   (0x0030)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x01A8   (0x0008)  MISSED
	FRigVMInstructionArray                             Instructions;                                               // 0x01B0   (0x0010)  
	FRigVMExecuteContext                               Context;                                                    // 0x01C0   (0x0058)  
	TArray<FName>                                      FunctionNamesStorage;                                       // 0x0218   (0x0010)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0228   (0x0020)  MISSED
	TArray<FRigVMParameter>                            Parameters;                                                 // 0x0248   (0x0010)  
	TMap<FName, int32_t>                               ParametersNameMap;                                          // 0x0258   (0x0050)  
	unsigned char                                      UnknownData04_6[0x48];                                      // 0x02A8   (0x0048)  MISSED
	class URigVM*                                      DeferredVMToCopy;                                           // 0x02F0   (0x0008)  


	/// Functions
	// Function /Script/RigVM.RigVM.SetParameterValueVector2D
	// void SetParameterValueVector2D(FName& InParameterName, FVector2D& InValue, int32_t InArrayIndex);                        // [0x7e8e2f4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueVector
	// void SetParameterValueVector(FName& InParameterName, FVector& InValue, int32_t InArrayIndex);                            // [0x7e8e478] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueTransform
	// void SetParameterValueTransform(FName& InParameterName, FTransform& InValue, int32_t InArrayIndex);                      // [0x7e8e158] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueString
	// void SetParameterValueString(FName& InParameterName, FString InValue, int32_t InArrayIndex);                             // [0x7e8e008] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueQuat
	// void SetParameterValueQuat(FName& InParameterName, FQuat& InValue, int32_t InArrayIndex);                                // [0x7e8deb4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueName
	// void SetParameterValueName(FName& InParameterName, FName& InValue, int32_t InArrayIndex);                                // [0x7e8dd5c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueInt
	// void SetParameterValueInt(FName& InParameterName, int32_t InValue, int32_t InArrayIndex);                                // [0x7e8dc14] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueFloat
	// void SetParameterValueFloat(FName& InParameterName, float InValue, int32_t InArrayIndex);                                // [0x7e8dac8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueBool
	// void SetParameterValueBool(FName& InParameterName, bool InValue, int32_t InArrayIndex);                                  // [0x7e8d970] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetRigVMFunctionName
	// FString GetRigVMFunctionName(int32_t InFunctionIndex);                                                                   // [0x7e8d890] Final|Native|Public|Const 
	// Function /Script/RigVM.RigVM.GetParameterValueVector2D
	// FVector2D GetParameterValueVector2D(FName& InParameterName, int32_t InArrayIndex);                                       // [0x7e8d640] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueVector
	// FVector GetParameterValueVector(FName& InParameterName, int32_t InArrayIndex);                                           // [0x7e8d758] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueTransform
	// FTransform GetParameterValueTransform(FName& InParameterName, int32_t InArrayIndex);                                     // [0x7e8d4ec] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueString
	// FString GetParameterValueString(FName& InParameterName, int32_t InArrayIndex);                                           // [0x7e8d3c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueQuat
	// FQuat GetParameterValueQuat(FName& InParameterName, int32_t InArrayIndex);                                               // [0x7e8d29c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueName
	// FName GetParameterValueName(FName& InParameterName, int32_t InArrayIndex);                                               // [0x7e8d184] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueInt
	// int32_t GetParameterValueInt(FName& InParameterName, int32_t InArrayIndex);                                              // [0x7e8d088] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueFloat
	// float GetParameterValueFloat(FName& InParameterName, int32_t InArrayIndex);                                              // [0x7e8cf88] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueBool
	// bool GetParameterValueBool(FName& InParameterName, int32_t InArrayIndex);                                                // [0x7e8ce8c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterArraySize
	// int32_t GetParameterArraySize(FName& InParameterName);                                                                   // [0x7e8cde0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVM.Execute
	// bool Execute(FName& InEntryName);                                                                                        // [0x7e8cd14] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.AddRigVMFunction
	// int32_t AddRigVMFunction(class UScriptStruct* InRigVMStruct, FName& InMethodName);                                       // [0x7e8cc10] Final|Native|Public|HasOutParms 
};

/// Struct /Script/RigVM.RigVMStruct
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FRigVMStruct
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMBaseOp
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/RigVM.RigVMUnaryOp
/// Size: 0x0008 (8 bytes) (0x000001 - 0x000008) align 2 MaxSize: 0x0008
struct FRigVMUnaryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x7];                                       // 0x0001   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMChangeTypeOp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 2 MaxSize: 0x0010
struct FRigVMChangeTypeOp : FRigVMUnaryOp
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMJumpIfOp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 4 MaxSize: 0x0010
struct FRigVMJumpIfOp : FRigVMUnaryOp
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMJumpOp
/// Size: 0x0008 (8 bytes) (0x000001 - 0x000008) align 4 MaxSize: 0x0008
struct FRigVMJumpOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x7];                                       // 0x0001   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMComparisonOp
/// Size: 0x0014 (20 bytes) (0x000001 - 0x000014) align 2 MaxSize: 0x0014
struct FRigVMComparisonOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x13];                                      // 0x0001   (0x0013)  MISSED
};

/// Struct /Script/RigVM.RigVMCopyOp
/// Size: 0x000E (14 bytes) (0x000001 - 0x00000E) align 2 MaxSize: 0x000E
struct FRigVMCopyOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0xD];                                       // 0x0001   (0x000D)  MISSED
};

/// Struct /Script/RigVM.RigVMBinaryOp
/// Size: 0x000E (14 bytes) (0x000001 - 0x00000E) align 2 MaxSize: 0x000E
struct FRigVMBinaryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0xD];                                       // 0x0001   (0x000D)  MISSED
};

/// Struct /Script/RigVM.RigVMExecuteOp
/// Size: 0x0004 (4 bytes) (0x000001 - 0x000004) align 2 MaxSize: 0x0004
struct FRigVMExecuteOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x3];                                       // 0x0001   (0x0003)  MISSED
};

/// Struct /Script/RigVM.RigVMSlice
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigVMSlice
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/RigVM.RigVMOperand
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align 2 MaxSize: 0x0006
struct FRigVMOperand
{ 
	SDK_UNDEFINED(1,1275) /* ERigVMMemoryType */       __um(MemoryType);                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0001   (0x0001)  MISSED
	uint16_t                                           RegisterIndex;                                              // 0x0002   (0x0002)  
	uint16_t                                           RegisterOffset;                                             // 0x0004   (0x0002)  
};

/// Struct /Script/RigVM.RigVMMemoryStatistics
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigVMMemoryStatistics
{ 
	uint32_t                                           RegisterCount;                                              // 0x0000   (0x0004)  
	uint32_t                                           DataBytes;                                                  // 0x0004   (0x0004)  
	uint32_t                                           TotalBytes;                                                 // 0x0008   (0x0004)  
};

/// Struct /Script/RigVM.RigVMByteCodeStatistics
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FRigVMByteCodeStatistics
{ 
	uint32_t                                           InstructionCount;                                           // 0x0000   (0x0004)  
	uint32_t                                           DataBytes;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/RigVM.RigVMStatistics
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 MaxSize: 0x002C
struct FRigVMStatistics
{ 
	uint32_t                                           BytesForCDO;                                                // 0x0000   (0x0004)  
	uint32_t                                           BytesPerInstance;                                           // 0x0004   (0x0004)  
	FRigVMMemoryStatistics                             LiteralMemory;                                              // 0x0008   (0x000C)  
	FRigVMMemoryStatistics                             WorkMemory;                                                 // 0x0014   (0x000C)  
	uint32_t                                           BytesForCaching;                                            // 0x0020   (0x0004)  
	FRigVMByteCodeStatistics                           ByteCode;                                                   // 0x0024   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(FRigVMRegister) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FRigVMRegisterOffset) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRigVMMemoryContainer) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FRigVMByteCodeEntry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigVMByteCode) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRigVMInstruction) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigVMInstructionArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigVMExecuteContext) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FRigVMParameter) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(URigVM) == 0x02F8); // 760 bytes (0x000028 - 0x0002F8)
static_assert(sizeof(FRigVMStruct) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FRigVMBaseOp) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FRigVMUnaryOp) == 0x0008); // 8 bytes (0x000001 - 0x000008)
static_assert(sizeof(FRigVMChangeTypeOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMJumpIfOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMJumpOp) == 0x0008); // 8 bytes (0x000001 - 0x000008)
static_assert(sizeof(FRigVMComparisonOp) == 0x0014); // 20 bytes (0x000001 - 0x000014)
static_assert(sizeof(FRigVMCopyOp) == 0x000E); // 14 bytes (0x000001 - 0x00000E)
static_assert(sizeof(FRigVMBinaryOp) == 0x000E); // 14 bytes (0x000001 - 0x00000E)
static_assert(sizeof(FRigVMExecuteOp) == 0x0004); // 4 bytes (0x000001 - 0x000004)
static_assert(sizeof(FRigVMSlice) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigVMOperand) == 0x0006); // 6 bytes (0x000000 - 0x000006)
static_assert(sizeof(FRigVMMemoryStatistics) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigVMByteCodeStatistics) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FRigVMStatistics) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(offsetof(FRigVMRegister, Name) == 0x0014);
static_assert(offsetof(FRigVMRegisterOffset, Segments) == 0x0000);
static_assert(offsetof(FRigVMRegisterOffset, CPPType) == 0x0014);
static_assert(offsetof(FRigVMRegisterOffset, ScriptStruct) == 0x0020);
static_assert(offsetof(FRigVMRegisterOffset, ParentScriptStruct) == 0x0028);
static_assert(offsetof(FRigVMRegisterOffset, CachedSegmentPath) == 0x0038);
static_assert(offsetof(FRigVMMemoryContainer, Registers) == 0x0008);
static_assert(offsetof(FRigVMMemoryContainer, RegisterOffsets) == 0x0018);
static_assert(offsetof(FRigVMMemoryContainer, Data) == 0x0028);
static_assert(offsetof(FRigVMMemoryContainer, ScriptStructs) == 0x0038);
static_assert(offsetof(FRigVMMemoryContainer, NameMap) == 0x0048);
static_assert(offsetof(FRigVMByteCodeEntry, Name) == 0x0000);
static_assert(offsetof(FRigVMByteCode, ByteCode) == 0x0000);
static_assert(offsetof(FRigVMByteCode, Entries) == 0x0018);
static_assert(offsetof(FRigVMInstructionArray, Instructions) == 0x0000);
static_assert(offsetof(FRigVMParameter, Name) == 0x0004);
static_assert(offsetof(FRigVMParameter, CPPType) == 0x0010);
static_assert(offsetof(FRigVMParameter, ScriptStruct) == 0x0020);
static_assert(offsetof(FRigVMParameter, ScriptStructPath) == 0x0028);
static_assert(offsetof(URigVM, WorkMemoryStorage) == 0x0028);
static_assert(offsetof(URigVM, LiteralMemoryStorage) == 0x00D0);
static_assert(offsetof(URigVM, ByteCodeStorage) == 0x0178);
static_assert(offsetof(URigVM, Instructions) == 0x01B0);
static_assert(offsetof(URigVM, Context) == 0x01C0);
static_assert(offsetof(URigVM, FunctionNamesStorage) == 0x0218);
static_assert(offsetof(URigVM, Parameters) == 0x0248);
static_assert(offsetof(URigVM, ParametersNameMap) == 0x0258);
static_assert(offsetof(URigVM, DeferredVMToCopy) == 0x02F0);
static_assert(offsetof(FRigVMStatistics, LiteralMemory) == 0x0008);
static_assert(offsetof(FRigVMStatistics, WorkMemory) == 0x0014);
static_assert(offsetof(FRigVMStatistics, ByteCode) == 0x0024);
