// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/OBJPool.PoolSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPoolSettings : public UObject
{ 
public:
	bool                                               ReinitializeInstances;                                      // 0x0028   (0x0001)  
	bool                                               InstantiateOnDemand;                                        // 0x0029   (0x0001)  
	bool                                               NeverFailDeferredSpawn;                                     // 0x002A   (0x0001)  
	bool                                               KeepOrphanActorsAlive;                                      // 0x002B   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/OBJPool.ObjectPool
/// Size: 0x0118 (280 bytes) (0x0000F8 - 0x000118) align 8 MaxSize: 0x0118
class UObjectPool : public UActorComponent
{ 
public:
	TArray<class APooledActor*>                        Pool;                                                       // 0x00F8   (0x0010)  
	class UClass*                                      TemplateClass;                                              // 0x0108   (0x0008)  
	int32_t                                            PoolSize;                                                   // 0x0110   (0x0004)  
	bool                                               AutoInitialize;                                             // 0x0114   (0x0001)  
	bool                                               bAlwaysUseOldestObject;                                     // 0x0115   (0x0001)  
	bool                                               bInstantiateOnDemand;                                       // 0x0116   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x0117   (0x0001)  MISSED


	/// Functions
	// Function /Script/OBJPool.ObjectPool.TryDeferredSpawnFromPool
	// class APooledActor* TryDeferredSpawnFromPool(class UObject* WorldContextObject, class UObjectPool* ObjectPool, class UClass* PooledClass, FPoolSpawnOptions& SpawnOptions, FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, bool Reconstruct, bool& SpawnSuccessful); // [0x4a2b82c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OBJPool.ObjectPool.ReturnActor
	// void ReturnActor(class APooledActor* PooledActor);                                                                       // [0x4a2aed8] Final|Native|Public  
	// Function /Script/OBJPool.ObjectPool.InitializeObjectPoolWithNewTemplateClass
	// void InitializeObjectPoolWithNewTemplateClass(class UClass* Template, int32_t SizeOfPool);                               // [0x4a2ab30] Native|Public|BlueprintCallable 
	// Function /Script/OBJPool.ObjectPool.InitializeObjectPool
	// void InitializeObjectPool();                                                                                             // [0x13aa194] Native|Public|BlueprintCallable 
	// Function /Script/OBJPool.ObjectPool.GetSpawnedObjects
	// void GetSpawnedObjects(TArray<APooledActor*>& Spawned);                                                                  // [0x4a2a7b8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OBJPool.ObjectPool.GetSpawnedObject
	// class APooledActor* GetSpawnedObject();                                                                                  // [0x4a2a5f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/OBJPool.ObjectPool.GetObjectsFromPool
	// void GetObjectsFromPool(TArray<APooledActor*>& Spawned, TArray<APooledActor*>& Inactive);                                // [0x4a29ec8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OBJPool.ObjectPool.GetObjectArray
	// TArray<APooledActor*> GetObjectArray();                                                                                  // [0x4a29b64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OBJPool.ObjectPool.GetInactiveObjects
	// void GetInactiveObjects(TArray<APooledActor*>& Inactive);                                                                // [0x4a29630] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OBJPool.ObjectPool.GetInactiveObject
	// class APooledActor* GetInactiveObject();                                                                                 // [0x4a29440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OBJPool.ObjectPool.FinishDeferredSpawnFromPool
	// class APooledActor* FinishDeferredSpawnFromPool(class APooledActor* Actor, bool Reconstruct, FTransform& SpawnTransform); // [0x4a28f78] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OBJPool.ObjectPool.EmptyObjectPool
	// void EmptyObjectPool();                                                                                                  // [0x4a28d3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/OBJPool.ObjectPool.BeginDeferredSpawnFromPool
	// class APooledActor* BeginDeferredSpawnFromPool(class UObject* WorldContextObject, class UObjectPool* ObjectPool, class UClass* PooledClass, FPoolSpawnOptions& SpawnOptions, FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, bool Reconstruct, bool& SpawnSuccessful); // [0x4a281f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/OBJPool.PawnPool
/// Size: 0x0118 (280 bytes) (0x0000F8 - 0x000118) align 8 MaxSize: 0x0118
class UPawnPool : public UActorComponent
{ 
public:
	TArray<class APooledPawn*>                         Pool;                                                       // 0x00F8   (0x0010)  
	class UClass*                                      TemplateClass;                                              // 0x0108   (0x0008)  
	int32_t                                            PoolSize;                                                   // 0x0110   (0x0004)  
	bool                                               AutoInitialize;                                             // 0x0114   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0115   (0x0003)  MISSED


	/// Functions
	// Function /Script/OBJPool.PawnPool.ReturnActor
	// void ReturnActor(class APooledPawn* PooledActor);                                                                        // [0x4a2af74] Final|Native|Public  
	// Function /Script/OBJPool.PawnPool.InitializeObjectPoolWithNewTemplateClass
	// void InitializeObjectPoolWithNewTemplateClass(class UClass* Template, int32_t SizeOfPool);                               // [0x4a2ab30] Native|Public|BlueprintCallable 
	// Function /Script/OBJPool.PawnPool.InitializeObjectPool
	// void InitializeObjectPool();                                                                                             // [0x13aa194] Native|Public|BlueprintCallable 
	// Function /Script/OBJPool.PawnPool.GetSpawnedObjects
	// void GetSpawnedObjects(TArray<APooledPawn*>& Spawned);                                                                   // [0x4a2a8f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OBJPool.PawnPool.GetSpawnedObject
	// class APooledPawn* GetSpawnedObject();                                                                                   // [0x4a2a618] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OBJPool.PawnPool.GetObjectsFromPool
	// void GetObjectsFromPool(TArray<APooledPawn*>& Spawned, TArray<APooledPawn*>& Inactive);                                  // [0x4a2a114] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OBJPool.PawnPool.GetObjectArray
	// TArray<APooledPawn*> GetObjectArray();                                                                                   // [0x4a29a18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OBJPool.PawnPool.GetInactiveObjects
	// void GetInactiveObjects(TArray<APooledPawn*>& Inactive);                                                                 // [0x4a2976c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OBJPool.PawnPool.GetInactiveObject
	// class APooledPawn* GetInactiveObject();                                                                                  // [0x4a29464] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OBJPool.PawnPool.FinishDeferredSpawnFromPool
	// class APooledPawn* FinishDeferredSpawnFromPool(class APooledPawn* Pawn, bool Reconstruct, FTransform& SpawnTransform);   // [0x4a29104] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OBJPool.PawnPool.EmptyObjectPool
	// void EmptyObjectPool();                                                                                                  // [0x4a28d28] Final|Native|Public|BlueprintCallable 
	// Function /Script/OBJPool.PawnPool.BeginDeferredSpawnFromPool
	// class APooledPawn* BeginDeferredSpawnFromPool(class UObject* WorldContextObject, class UPawnPool* ObjectPool, class UClass* PooledClass, FPoolSpawnOptions& SpawnOptions, FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, bool Reconstruct, bool& SpawnSuccessful); // [0x4a28590] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/OBJPool.CharacterPool
/// Size: 0x0118 (280 bytes) (0x0000F8 - 0x000118) align 8 MaxSize: 0x0118
class UCharacterPool : public UActorComponent
{ 
public:
	TArray<class APooledCharacter*>                    Pool;                                                       // 0x00F8   (0x0010)  
	class UClass*                                      TemplateClass;                                              // 0x0108   (0x0008)  
	int32_t                                            PoolSize;                                                   // 0x0110   (0x0004)  
	bool                                               AutoInitialize;                                             // 0x0114   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0115   (0x0003)  MISSED


	/// Functions
	// Function /Script/OBJPool.CharacterPool.ReturnActor
	// void ReturnActor(class APooledCharacter* PooledActor);                                                                   // [0x4a2ae3c] Final|Native|Public  
	// Function /Script/OBJPool.CharacterPool.InitializeObjectPoolWithNewTemplateClass
	// void InitializeObjectPoolWithNewTemplateClass(class UClass* Template, int32_t SizeOfPool);                               // [0x4a2ab30] Native|Public|BlueprintCallable 
	// Function /Script/OBJPool.CharacterPool.InitializeObjectPool
	// void InitializeObjectPool();                                                                                             // [0x13aa194] Native|Public|BlueprintCallable 
	// Function /Script/OBJPool.CharacterPool.GetSpawnedObjects
	// void GetSpawnedObjects(TArray<APooledCharacter*>& Spawned);                                                              // [0x4a2a6e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OBJPool.CharacterPool.GetSpawnedObject
	// class APooledCharacter* GetSpawnedObject();                                                                              // [0x4a2a5d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OBJPool.CharacterPool.GetObjectsFromPool
	// void GetObjectsFromPool(TArray<APooledCharacter*>& Spawned, TArray<APooledCharacter*>& Inactive);                        // [0x4a29ce8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OBJPool.CharacterPool.GetObjectArray
	// TArray<APooledCharacter*> GetObjectArray();                                                                              // [0x4a29a18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OBJPool.CharacterPool.GetInactiveObjects
	// void GetInactiveObjects(TArray<APooledCharacter*>& Inactive);                                                            // [0x4a29530] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OBJPool.CharacterPool.GetInactiveObject
	// class APooledCharacter* GetInactiveObject();                                                                             // [0x4a2941c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OBJPool.CharacterPool.FinishDeferredSpawnFromPool
	// class APooledCharacter* FinishDeferredSpawnFromPool(class APooledCharacter* Character, bool Reconstruct, FTransform& SpawnTransform); // [0x4a28dec] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OBJPool.CharacterPool.EmptyObjectPool
	// void EmptyObjectPool();                                                                                                  // [0x4a28d28] Final|Native|Public|BlueprintCallable 
	// Function /Script/OBJPool.CharacterPool.BeginDeferredSpawnFromPool
	// class APooledCharacter* BeginDeferredSpawnFromPool(class UObject* WorldContextObject, class UCharacterPool* ObjectPool, class UClass* PooledClass, FPoolSpawnOptions& SpawnOptions, FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, bool Reconstruct, bool& SpawnSuccessful); // [0x4a27e40] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/OBJPool.SharedObjectPool
/// Size: 0x0160 (352 bytes) (0x0000F8 - 0x000160) align 8 MaxSize: 0x0160
class USharedObjectPool : public UActorComponent
{ 
public:
	TArray<class APooledActor*>                        Pool;                                                       // 0x00F8   (0x0010)  
	bool                                               AutoInitialize;                                             // 0x0108   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0109   (0x0007)  MISSED
	TMap<class UClass*, int32_t>                       TemplateClasses;                                            // 0x0110   (0x0050)  


	/// Functions
	// Function /Script/OBJPool.SharedObjectPool.ReturnActor
	// void ReturnActor(class APooledActor* PooledActor);                                                                       // [0x4a2b010] Final|Native|Public  
	// Function /Script/OBJPool.SharedObjectPool.InitializeObjectPool
	// void InitializeObjectPool();                                                                                             // [0x4a2ab1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/OBJPool.SharedObjectPool.GetSpawnedObjects
	// void GetSpawnedObjects(class UClass* Class, TArray<APooledActor*>& Spawned);                                             // [0x4a2a9f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OBJPool.SharedObjectPool.GetSpawnedObject
	// class APooledActor* GetSpawnedObject(class UClass* Class);                                                               // [0x4a2a63c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OBJPool.SharedObjectPool.GetObjectsFromPool
	// void GetObjectsFromPool(class UClass* Class, TArray<APooledActor*>& Spawned, TArray<APooledActor*>& Inactive);           // [0x4a2a2f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OBJPool.SharedObjectPool.GetObjectArray
	// TArray<APooledActor*> GetObjectArray();                                                                                  // [0x4a29b64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OBJPool.SharedObjectPool.GetInactiveObjects
	// void GetInactiveObjects(class UClass* Class, TArray<APooledActor*>& Inactive);                                           // [0x4a2986c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OBJPool.SharedObjectPool.GetInactiveObject
	// class APooledActor* GetInactiveObject(class UClass* Class);                                                              // [0x4a29488] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OBJPool.SharedObjectPool.FinishDeferredSpawnFromPool
	// class APooledActor* FinishDeferredSpawnFromPool(class APooledActor* Actor, bool Reconstruct, FTransform& SpawnTransform); // [0x4a29290] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OBJPool.SharedObjectPool.EmptyObjectPool
	// void EmptyObjectPool(class UClass* Class);                                                                               // [0x4a28d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/OBJPool.SharedObjectPool.BeginDeferredSpawnFromPool
	// class APooledActor* BeginDeferredSpawnFromPool(class UObject* WorldContextObject, class USharedObjectPool* SharedPool, class UClass* Class, FPoolSpawnOptions& SpawnOptions, FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, bool Reconstruct, bool& SpawnSuccessful); // [0x4a28940] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/OBJPool.PooledActor
/// Size: 0x0360 (864 bytes) (0x000318 - 0x000360) align 8 MaxSize: 0x0360
class APooledActor : public AActor
{ 
public:
	bool                                               Spawned;                                                    // 0x0318   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0319   (0x0007)  MISSED
	class UObjectPool*                                 OwningPool;                                                 // 0x0320   (0x0008)  
	class USharedObjectPool*                           SharedPool;                                                 // 0x0328   (0x0008)  
	FTimerHandle                                       LifeSpanHandle;                                             // 0x0330   (0x0008)  
	float                                              SpawnTimeSeconds;                                           // 0x0338   (0x0004)  
	float                                              LifeSpanPool;                                               // 0x033C   (0x0004)  
	SDK_UNDEFINED(16,1712) /* FMulticastInlineDelegate */ __um(OnPoolBeginPlay);                                   // 0x0340   (0x0010)  
	SDK_UNDEFINED(16,1713) /* FMulticastInlineDelegate */ __um(OnPoolEndPlay);                                     // 0x0350   (0x0010)  


	/// Functions
	// Function /Script/OBJPool.PooledActor.SpawnFromPool
	// void SpawnFromPool(bool Reconstruct, FPoolSpawnOptions& SpawnOptions, FTransform& SpawnTransform);                       // [0x4a2b360] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/OBJPool.PooledActor.SetLifeSpanPool
	// void SetLifeSpanPool(float InLifespan);                                                                                  // [0x4a2b0e8] Native|Public|BlueprintCallable 
	// Function /Script/OBJPool.PooledActor.ReturnToPool
	// void ReturnToPool();                                                                                                     // [0x4a2b0ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/OBJPool.PooledActor.GetSharedPool
	// class USharedObjectPool* GetSharedPool();                                                                                // [0x4798064] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OBJPool.PooledActor.GetOwningPool
	// class UObjectPool* GetOwningPool();                                                                                      // [0x4a2a588] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OBJPool.PooledActor.GetLifeSpanPool
	// float GetLifeSpanPool();                                                                                                 // [0x4a2997c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OBJPool.PooledActor.EVENT_OnPoolEndPlay
	// void EVENT_OnPoolEndPlay();                                                                                              // [0x1c0ab50] Native|Event|Public|BlueprintEvent 
	// Function /Script/OBJPool.PooledActor.EVENT_OnPoolBeginPlay
	// void EVENT_OnPoolBeginPlay();                                                                                            // [0x1ef4570] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/OBJPool.PooledCharacter
/// Size: 0x0630 (1584 bytes) (0x0005E8 - 0x000630) align 16 MaxSize: 0x0630
class APooledCharacter : public ACharacter
{ 
public:
	class UCharacterPool*                              OwningPool;                                                 // 0x05E8   (0x0008)  
	bool                                               Spawned;                                                    // 0x05F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x05F1   (0x0007)  MISSED
	FTimerHandle                                       LifeSpanHandle;                                             // 0x05F8   (0x0008)  
	float                                              LifeSpanPool;                                               // 0x0600   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0604   (0x0004)  MISSED
	SDK_UNDEFINED(16,1714) /* FMulticastInlineDelegate */ __um(OnPoolBeginPlay);                                   // 0x0608   (0x0010)  
	SDK_UNDEFINED(16,1715) /* FMulticastInlineDelegate */ __um(OnPoolEndPlay);                                     // 0x0618   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0628   (0x0008)  MISSED


	/// Functions
	// Function /Script/OBJPool.PooledCharacter.SpawnFromPool
	// void SpawnFromPool(bool Reconstruct, FPoolSpawnOptions& SpawnOptions, FTransform& SpawnTransform);                       // [0x4a2b4ec] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/OBJPool.PooledCharacter.SetLifeSpanPool
	// void SetLifeSpanPool(float InLifespan);                                                                                  // [0x4a2b188] Native|Public|BlueprintCallable 
	// Function /Script/OBJPool.PooledCharacter.ReturnToPool
	// void ReturnToPool();                                                                                                     // [0x4a2b0c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OBJPool.PooledCharacter.GetOwningPool
	// class UCharacterPool* GetOwningPool();                                                                                   // [0x4a2a5a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OBJPool.PooledCharacter.GetLifeSpanPool
	// float GetLifeSpanPool();                                                                                                 // [0x4a299a8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OBJPool.PooledCharacter.EVENT_OnPoolEndPlay
	// void EVENT_OnPoolEndPlay();                                                                                              // [0x4a28d10] Native|Event|Public|BlueprintEvent 
	// Function /Script/OBJPool.PooledCharacter.EVENT_OnPoolBeginPlay
	// void EVENT_OnPoolBeginPlay();                                                                                            // [0x4a28ce0] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/OBJPool.PooledPawn
/// Size: 0x03C8 (968 bytes) (0x000388 - 0x0003C8) align 8 MaxSize: 0x03C8
class APooledPawn : public APawn
{ 
public:
	class UPawnPool*                                   OwningPool;                                                 // 0x0388   (0x0008)  
	bool                                               Spawned;                                                    // 0x0390   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0391   (0x0007)  MISSED
	FTimerHandle                                       LifeSpanHandle;                                             // 0x0398   (0x0008)  
	float                                              LifeSpanPool;                                               // 0x03A0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x03A4   (0x0004)  MISSED
	SDK_UNDEFINED(16,1716) /* FMulticastInlineDelegate */ __um(OnPoolBeginPlay);                                   // 0x03A8   (0x0010)  
	SDK_UNDEFINED(16,1717) /* FMulticastInlineDelegate */ __um(OnPoolEndPlay);                                     // 0x03B8   (0x0010)  


	/// Functions
	// Function /Script/OBJPool.PooledPawn.SpawnFromPool
	// void SpawnFromPool(bool Reconstruct, FPoolSpawnOptions& SpawnOptions, FTransform& SpawnTransform);                       // [0x4a2b68c] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/OBJPool.PooledPawn.SetLifeSpanPool
	// void SetLifeSpanPool(float InLifespan);                                                                                  // [0x4a2b228] Native|Public|BlueprintCallable 
	// Function /Script/OBJPool.PooledPawn.ReturnToPool
	// void ReturnToPool();                                                                                                     // [0x4a2b0d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/OBJPool.PooledPawn.GetOwningPool
	// class UPawnPool* GetOwningPool();                                                                                        // [0x4a2a5b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OBJPool.PooledPawn.GetLifeSpanPool
	// float GetLifeSpanPool();                                                                                                 // [0x4a299d4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OBJPool.PooledPawn.EVENT_OnPoolEndPlay
	// void EVENT_OnPoolEndPlay();                                                                                              // [0x215b4bc] Native|Event|Public|BlueprintEvent 
	// Function /Script/OBJPool.PooledPawn.EVENT_OnPoolBeginPlay
	// void EVENT_OnPoolBeginPlay();                                                                                            // [0x4a28cf8] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/OBJPool.PooledProjectile
/// Size: 0x0190 (400 bytes) (0x0000F8 - 0x000190) align 8 MaxSize: 0x0190
class UPooledProjectile : public UActorComponent
{ 
public:
	class UProjectileMovementComponent*                Movement;                                                   // 0x00F8   (0x0008)  
	class APooledActor*                                AOwner;                                                     // 0x0100   (0x0008)  
	class APooledPawn*                                 POwner;                                                     // 0x0108   (0x0008)  
	class UPrimitiveComponent*                         Primitive;                                                  // 0x0110   (0x0008)  
	FVector                                            Direction;                                                  // 0x0118   (0x000C)  
	float                                              InitialSpeed;                                               // 0x0124   (0x0004)  
	float                                              MaxSpeed;                                                   // 0x0128   (0x0004)  
	bool                                               UpdateOnlyIfRendered;                                       // 0x012C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x012D   (0x0003)  MISSED
	bool                                               RotationFollowsVelocity : 1;                                // 0x0130:0 (0x0001)  
	bool                                               InitialVelocityInLocalSpace : 1;                            // 0x0130:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0131   (0x0003)  MISSED
	float                                              ProjectileGravityScale;                                     // 0x0134   (0x0004)  
	bool                                               ShouldBounce : 1;                                           // 0x0138:0 (0x0001)  
	bool                                               BounceAngleAffectsFriction : 1;                             // 0x0138:1 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0139   (0x0003)  MISSED
	float                                              Bounciness;                                                 // 0x013C   (0x0004)  
	float                                              Friction;                                                   // 0x0140   (0x0004)  
	float                                              BounceVelocityStopSimulatingThreshold;                      // 0x0144   (0x0004)  
	bool                                               ForceSubStepping : 1;                                       // 0x0148:0 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0149   (0x0003)  MISSED
	int32_t                                            MaxSimulationIterations;                                    // 0x014C   (0x0004)  
	float                                              MaxSimulationTimeStep;                                      // 0x0150   (0x0004)  
	bool                                               IsHomingProjectile : 1;                                     // 0x0154:0 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0155   (0x0003)  MISSED
	SDK_UNDEFINED(16,1718) /* FMulticastInlineDelegate */ __um(OnProjectileBounce);                                // 0x0158   (0x0010)  
	SDK_UNDEFINED(16,1719) /* FMulticastInlineDelegate */ __um(OnProjectileStop);                                  // 0x0168   (0x0010)  
	class AActor*                                      HomingTarget;                                               // 0x0178   (0x0008)  
	TWeakObjectPtr<class USceneComponent*>             HomingTargetComponent;                                      // 0x0180   (0x0008)  
	float                                              HomingAccelerationMagnitude;                                // 0x0188   (0x0004)  
	unsigned char                                      UnknownData05_7[0x4];                                       // 0x018C   (0x0004)  MISSED


	/// Functions
	// Function /Script/OBJPool.PooledProjectile.Shoot
	// void Shoot();                                                                                                            // [0x13aa194] Native|Event|Public|BlueprintEvent 
	// Function /Script/OBJPool.PooledProjectile.ProjectileStop
	// void ProjectileStop(FHitResult& HitResult);                                                                              // [0x4a2ad7c] Native|Public|HasOutParms 
	// Function /Script/OBJPool.PooledProjectile.ProjectileBounce
	// void ProjectileBounce(FHitResult& HitResult, FVector& Velocity);                                                         // [0x4a2ac1c] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/OBJPool.PooledProjectile.GetMovementComponent
	// class UProjectileMovementComponent* GetMovementComponent();                                                              // [0x4a29a00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OBJPool.PooledProjectile.Break
	// void Break();                                                                                                            // [0x19e39a0] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/OBJPool.PooledSplineProjectile
/// Size: 0x01F8 (504 bytes) (0x0000F8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UPooledSplineProjectile : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0xA0];                                      // 0x00F8   (0x00A0)  MISSED
	class APooledPawn*                                 POwner;                                                     // 0x0198   (0x0008)  
	class APooledActor*                                AOwner;                                                     // 0x01A0   (0x0008)  
	class UPrimitiveComponent*                         Primitive;                                                  // 0x01A8   (0x0008)  
	class USplineComponent*                            SplineComponent;                                            // 0x01B0   (0x0008)  
	float                                              PathWidth;                                                  // 0x01B8   (0x0004)  
	float                                              Speed;                                                      // 0x01BC   (0x0004)  
	SDK_UNDEFINED(16,1720) /* TArray<TEnumAsByte<EObjectTypeQuery>> */ __um(PathCollisionQueryTypes);              // 0x01C0   (0x0010)  
	TArray<class AActor*>                              IgnoredActorsOnCollisionQuery;                              // 0x01D0   (0x0010)  
	SDK_UNDEFINED(1,1721) /* TEnumAsByte<EDrawDebugTrace> */ __um(CollisionQueryDebugMode);                        // 0x01E0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x01E1   (0x0007)  MISSED
	SDK_UNDEFINED(16,1722) /* FMulticastInlineDelegate */ __um(OnProjectileHit);                                   // 0x01E8   (0x0010)  


	/// Functions
	// Function /Script/OBJPool.PooledSplineProjectile.Shoot
	// void Shoot();                                                                                                            // [0x13aa194] Native|Event|Public|BlueprintEvent 
	// Function /Script/OBJPool.PooledSplineProjectile.SetSplineComponent
	// void SetSplineComponent(class USplineComponent* Target);                                                                 // [0x4a2b2c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/OBJPool.PooledSplineProjectile.GetSplineComponent
	// class USplineComponent* GetSplineComponent();                                                                            // [0x4a2ab04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OBJPool.PooledSplineProjectile.Break
	// void Break();                                                                                                            // [0x19e39a0] Native|Event|Public|BlueprintEvent 
};

/// Struct /Script/OBJPool.PoolSpawnOptions
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 1 MaxSize: 0x0004
struct FPoolSpawnOptions
{ 
	SDK_UNDEFINED(1,1723) /* EPoolCollisionType */     __um(CollisionType);                                        // 0x0000   (0x0001)  
	bool                                               EnableCollision;                                            // 0x0001   (0x0001)  
	bool                                               SimulatePhysics;                                            // 0x0002   (0x0001)  
	bool                                               ActorTickEnabled;                                           // 0x0003   (0x0001)  
};

#pragma pack(pop)


static_assert(sizeof(UPoolSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UObjectPool) == 0x0118); // 280 bytes (0x0000F8 - 0x000118)
static_assert(sizeof(UPawnPool) == 0x0118); // 280 bytes (0x0000F8 - 0x000118)
static_assert(sizeof(UCharacterPool) == 0x0118); // 280 bytes (0x0000F8 - 0x000118)
static_assert(sizeof(USharedObjectPool) == 0x0160); // 352 bytes (0x0000F8 - 0x000160)
static_assert(sizeof(APooledActor) == 0x0360); // 864 bytes (0x000318 - 0x000360)
static_assert(sizeof(APooledCharacter) == 0x0630); // 1584 bytes (0x0005E8 - 0x000630)
static_assert(sizeof(APooledPawn) == 0x03C8); // 968 bytes (0x000388 - 0x0003C8)
static_assert(sizeof(UPooledProjectile) == 0x0190); // 400 bytes (0x0000F8 - 0x000190)
static_assert(sizeof(UPooledSplineProjectile) == 0x01F8); // 504 bytes (0x0000F8 - 0x0001F8)
static_assert(sizeof(FPoolSpawnOptions) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(offsetof(UObjectPool, Pool) == 0x00F8);
static_assert(offsetof(UObjectPool, TemplateClass) == 0x0108);
static_assert(offsetof(UPawnPool, Pool) == 0x00F8);
static_assert(offsetof(UPawnPool, TemplateClass) == 0x0108);
static_assert(offsetof(UCharacterPool, Pool) == 0x00F8);
static_assert(offsetof(UCharacterPool, TemplateClass) == 0x0108);
static_assert(offsetof(USharedObjectPool, Pool) == 0x00F8);
static_assert(offsetof(USharedObjectPool, TemplateClasses) == 0x0110);
static_assert(offsetof(APooledActor, OwningPool) == 0x0320);
static_assert(offsetof(APooledActor, SharedPool) == 0x0328);
static_assert(offsetof(APooledActor, LifeSpanHandle) == 0x0330);
static_assert(offsetof(APooledCharacter, OwningPool) == 0x05E8);
static_assert(offsetof(APooledCharacter, LifeSpanHandle) == 0x05F8);
static_assert(offsetof(APooledPawn, OwningPool) == 0x0388);
static_assert(offsetof(APooledPawn, LifeSpanHandle) == 0x0398);
static_assert(offsetof(UPooledProjectile, Movement) == 0x00F8);
static_assert(offsetof(UPooledProjectile, AOwner) == 0x0100);
static_assert(offsetof(UPooledProjectile, POwner) == 0x0108);
static_assert(offsetof(UPooledProjectile, Primitive) == 0x0110);
static_assert(offsetof(UPooledProjectile, Direction) == 0x0118);
static_assert(offsetof(UPooledProjectile, HomingTarget) == 0x0178);
static_assert(offsetof(UPooledProjectile, HomingTargetComponent) == 0x0180);
static_assert(offsetof(UPooledSplineProjectile, POwner) == 0x0198);
static_assert(offsetof(UPooledSplineProjectile, AOwner) == 0x01A0);
static_assert(offsetof(UPooledSplineProjectile, Primitive) == 0x01A8);
static_assert(offsetof(UPooledSplineProjectile, SplineComponent) == 0x01B0);
static_assert(offsetof(UPooledSplineProjectile, IgnoredActorsOnCollisionQuery) == 0x01D0);
