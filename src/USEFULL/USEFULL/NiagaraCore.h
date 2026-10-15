// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/NiagaraCore.NiagaraMergeable
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraMergeable : public UObject
{ 
public:
};

/// Class /Script/NiagaraCore.NiagaraDataInterfaceBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{ 
public:
};

/// Struct /Script/NiagaraCore.NiagaraCompileHash
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraCompileHash
{ 
	TArray<char>                                       DataHash;                                                   // 0x0000   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UNiagaraMergeable) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraDataInterfaceBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNiagaraCompileHash) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FNiagaraCompileHash, DataHash) == 0x0000);
