// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/ReplicationGraph.ReplicationGraph
/// Size: 0x04B0 (1200 bytes) (0x000028 - 0x0004B0) align 16 MaxSize: 0x04B0
class UReplicationGraph : public UReplicationDriver
{ 
public:
	class UClass*                                      ReplicationConnectionManagerClass;                          // 0x0028   (0x0008)  
	class UNetDriver*                                  NetDriver;                                                  // 0x0030   (0x0008)  
	TArray<class UNetReplicationGraphConnection*>      Connections;                                                // 0x0038   (0x0010)  
	TArray<class UNetReplicationGraphConnection*>      PendingConnections;                                         // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0058   (0x0040)  MISSED
	TArray<class UReplicationGraphNode*>               GlobalGraphNodes;                                           // 0x0098   (0x0010)  
	TArray<class UReplicationGraphNode*>               PrepareForReplicationNodes;                                 // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x3F8];                                     // 0x00B8   (0x03F8)  MISSED
};

/// Struct /Script/ReplicationGraph.ConnectionAlwaysRelevantNodePair
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FConnectionAlwaysRelevantNodePair
{ 
	class UNetConnection*                              NetConnection;                                              // 0x0000   (0x0008)  
	class UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;                                                // 0x0008   (0x0008)  
};

/// Class /Script/ReplicationGraph.BasicReplicationGraph
/// Size: 0x04E0 (1248 bytes) (0x0004B0 - 0x0004E0) align 16 MaxSize: 0x04E0
class UBasicReplicationGraph : public UReplicationGraph
{ 
public:
	class UReplicationGraphNode_GridSpatialization2D*  GridNode;                                                   // 0x04B0   (0x0008)  
	class UReplicationGraphNode_ActorList*             AlwaysRelevantNode;                                         // 0x04B8   (0x0008)  
	TArray<FConnectionAlwaysRelevantNodePair>          AlwaysRelevantForConnectionList;                            // 0x04C0   (0x0010)  
	TArray<class AActor*>                              ActorsWithoutNetConnection;                                 // 0x04D0   (0x0010)  
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UReplicationGraphNode : public UObject
{ 
public:
	TArray<class UReplicationGraphNode*>               AllChildNodes;                                              // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_ActorList
/// Size: 0x00F8 (248 bytes) (0x000050 - 0x0000F8) align 8 MaxSize: 0x00F8
class UReplicationGraphNode_ActorList : public UReplicationGraphNode
{ 
public:
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x0050   (0x00A8)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
/// Size: 0x0138 (312 bytes) (0x000050 - 0x000138) align 8 MaxSize: 0x0138
class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
{ 
public:
	unsigned char                                      UnknownData00_1[0xE8];                                      // 0x0050   (0x00E8)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
/// Size: 0x0128 (296 bytes) (0x0000F8 - 0x000128) align 8 MaxSize: 0x0128
class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x00F8   (0x0030)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
/// Size: 0x0190 (400 bytes) (0x0000F8 - 0x000190) align 8 MaxSize: 0x0190
class UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList
{ 
public:
	unsigned char                                      UnknownData00_1[0x98];                                      // 0x00F8   (0x0098)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_DormancyNode
/// Size: 0x0150 (336 bytes) (0x0000F8 - 0x000150) align 16 MaxSize: 0x0150
class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x00F8   (0x0058)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_GridCell
/// Size: 0x0190 (400 bytes) (0x0000F8 - 0x000190) align 16 MaxSize: 0x0190
class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
{ 
public:
	unsigned char                                      UnknownData00_8[0x88];                                      // 0x00F8   (0x0088)  MISSED
	class UReplicationGraphNode*                       DynamicNode;                                                // 0x0180   (0x0008)  
	class UReplicationGraphNode_DormancyNode*          DormancyNode;                                               // 0x0188   (0x0008)  
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
/// Size: 0x0260 (608 bytes) (0x000050 - 0x000260) align 16 MaxSize: 0x0260
class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x210];                                     // 0x0050   (0x0210)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
/// Size: 0x0068 (104 bytes) (0x000050 - 0x000068) align 8 MaxSize: 0x0068
class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
{ 
public:
	class UReplicationGraphNode*                       ChildNode;                                                  // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Struct /Script/ReplicationGraph.AlwaysRelevantActorInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAlwaysRelevantActorInfo
{ 
	class UNetConnection*                              Connection;                                                 // 0x0000   (0x0008)  
	class AActor*                                      LastViewer;                                                 // 0x0008   (0x0008)  
	class AActor*                                      LastViewTarget;                                             // 0x0010   (0x0008)  
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
/// Size: 0x0120 (288 bytes) (0x0000F8 - 0x000120) align 8 MaxSize: 0x0120
class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x00F8   (0x0018)  MISSED
	TArray<FAlwaysRelevantActorInfo>                   PastRelevantActors;                                         // 0x0110   (0x0010)  
};

/// Struct /Script/ReplicationGraph.TearOffActorInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FTearOffActorInfo
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	class AActor*                                      Actor;                                                      // 0x0008   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
/// Size: 0x0078 (120 bytes) (0x000050 - 0x000078) align 8 MaxSize: 0x0078
class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
{ 
public:
	TArray<FTearOffActorInfo>                          TearOffActors;                                              // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0060   (0x0018)  MISSED
};

/// Struct /Script/ReplicationGraph.LastLocationGatherInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FLastLocationGatherInfo
{ 
	class UNetConnection*                              Connection;                                                 // 0x0000   (0x0008)  
	FVector                                            LastLocation;                                               // 0x0008   (0x000C)  
	FVector                                            LastOutOfRangeLocationCheck;                                // 0x0014   (0x000C)  
};

/// Class /Script/ReplicationGraph.NetReplicationGraphConnection
/// Size: 0x0240 (576 bytes) (0x000028 - 0x000240) align 8 MaxSize: 0x0240
class UNetReplicationGraphConnection : public UReplicationConnectionDriver
{ 
public:
	class UNetConnection*                              NetConnection;                                              // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x140];                                     // 0x0030   (0x0140)  MISSED
	class AReplicationGraphDebugActor*                 DebugActor;                                                 // 0x0170   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0178   (0x0010)  MISSED
	TArray<FLastLocationGatherInfo>                    LastGatherLocations;                                        // 0x0188   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0198   (0x0008)  MISSED
	TArray<class UReplicationGraphNode*>               ConnectionGraphNodes;                                       // 0x01A0   (0x0010)  
	class UReplicationGraphNode_TearOff_ForConnection* TearOffNode;                                                // 0x01B0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x80];                                      // 0x01B8   (0x0080)  MISSED
	class UReplicationGraph*                           OwnerReplicationGraph;                                      // 0x0238   (0x0008)  
};

/// Struct /Script/ReplicationGraph.DynamicCharacterRepInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FDynamicCharacterRepInfo
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
	uint32_t                                           ReplicationPeriodFrame;                                     // 0x0008   (0x0004)  
	uint32_t                                           FastPath_ReplicationPeriodFrame;                            // 0x000C   (0x0004)  
	uint32_t                                           FastShare_ReplicationIndex;                                 // 0x0010   (0x0004)  
	uint32_t                                           Default_ReplicationIndex;                                   // 0x0014   (0x0004)  
	float                                              NetPriority;                                                // 0x0018   (0x0004)  
	float                                              ExtraNetPriority;                                           // 0x001C   (0x0004)  
	bool                                               bReplicate_FastShare;                                       // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Class /Script/ReplicationGraph.ReplicationGraphDebugActor
/// Size: 0x0338 (824 bytes) (0x000318 - 0x000338) align 8 MaxSize: 0x0338
class AReplicationGraphDebugActor : public AActor
{ 
public:
	class UReplicationGraph*                           ReplicationGraph;                                           // 0x0318   (0x0008)  
	class UNetReplicationGraphConnection*              ConnectionManager;                                          // 0x0320   (0x0008)  
	TArray<FDynamicCharacterRepInfo>                   DynamicCharacterRepInfos;                                   // 0x0328   (0x0010)  


	/// Functions
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
	// void ServerStopDebugging();                                                                                              // [0x46f6420] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
	// void ServerStartDebugging();                                                                                             // [0x46f6408] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
	// void ServerSetPeriodFrameForClass(class UClass* Class, int32_t PeriodFrame);                                             // [0x46f631c] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
	// void ServerSetCullDistanceForClass(class UClass* Class, float CullDistance);                                             // [0x46f6230] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
	// void ServerSetConditionalActorBreakpoint(class AActor* Actor);                                                           // [0x46f6190] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
	// void ServerPrintCullDistances();                                                                                         // [0x1ef4570] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
	// void ServerPrintAllActorInfo(FString Str);                                                                               // [0x46f60e4] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
	// void ServerCellInfo();                                                                                                   // [0x46f60cc] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.OnRep_DynamicCharacterRepInfos
	// void OnRep_DynamicCharacterRepInfos();                                                                                   // [0x46f60b8] Final|Native|Protected 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
	// void ClientCellInfo(FVector CellLocation, FVector CellExtent, TArray<AActor*> Actors);                                   // [0x46f5f3c] Net|NetReliableNative|Event|Public|HasDefaults|NetClient 
};

/// Struct /Script/ReplicationGraph.ClassReplicationInfo
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FClassReplicationInfo
{ 
	float                                              DistancePriorityScale;                                      // 0x0000   (0x0004)  
	float                                              StarvationPriorityScale;                                    // 0x0004   (0x0004)  
	float                                              AccumulatedNetPriorityBias;                                 // 0x0008   (0x0004)  
	uint16_t                                           ReplicationPeriodFrame;                                     // 0x000C   (0x0002)  
	uint16_t                                           FastPath_ReplicationPeriodFrame;                            // 0x000E   (0x0002)  
	uint16_t                                           ActorChannelFrameTimeout;                                   // 0x0010   (0x0002)  
	unsigned char                                      UnknownData00_6[0x56];                                      // 0x0012   (0x0056)  MISSED
	float                                              CullDistance;                                               // 0x0068   (0x0004)  
	float                                              CullDistanceSquared;                                        // 0x006C   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(UReplicationGraph) == 0x04B0); // 1200 bytes (0x000028 - 0x0004B0)
static_assert(sizeof(FConnectionAlwaysRelevantNodePair) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UBasicReplicationGraph) == 0x04E0); // 1248 bytes (0x0004B0 - 0x0004E0)
static_assert(sizeof(UReplicationGraphNode) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UReplicationGraphNode_ActorList) == 0x00F8); // 248 bytes (0x000050 - 0x0000F8)
static_assert(sizeof(UReplicationGraphNode_ActorListFrequencyBuckets) == 0x0138); // 312 bytes (0x000050 - 0x000138)
static_assert(sizeof(UReplicationGraphNode_DynamicSpatialFrequency) == 0x0128); // 296 bytes (0x0000F8 - 0x000128)
static_assert(sizeof(UReplicationGraphNode_ConnectionDormancyNode) == 0x0190); // 400 bytes (0x0000F8 - 0x000190)
static_assert(sizeof(UReplicationGraphNode_DormancyNode) == 0x0150); // 336 bytes (0x0000F8 - 0x000150)
static_assert(sizeof(UReplicationGraphNode_GridCell) == 0x0190); // 400 bytes (0x0000F8 - 0x000190)
static_assert(sizeof(UReplicationGraphNode_GridSpatialization2D) == 0x0260); // 608 bytes (0x000050 - 0x000260)
static_assert(sizeof(UReplicationGraphNode_AlwaysRelevant) == 0x0068); // 104 bytes (0x000050 - 0x000068)
static_assert(sizeof(FAlwaysRelevantActorInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UReplicationGraphNode_AlwaysRelevant_ForConnection) == 0x0120); // 288 bytes (0x0000F8 - 0x000120)
static_assert(sizeof(FTearOffActorInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UReplicationGraphNode_TearOff_ForConnection) == 0x0078); // 120 bytes (0x000050 - 0x000078)
static_assert(sizeof(FLastLocationGatherInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UNetReplicationGraphConnection) == 0x0240); // 576 bytes (0x000028 - 0x000240)
static_assert(sizeof(FDynamicCharacterRepInfo) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(AReplicationGraphDebugActor) == 0x0338); // 824 bytes (0x000318 - 0x000338)
static_assert(sizeof(FClassReplicationInfo) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(offsetof(UReplicationGraph, ReplicationConnectionManagerClass) == 0x0028);
static_assert(offsetof(UReplicationGraph, NetDriver) == 0x0030);
static_assert(offsetof(UReplicationGraph, Connections) == 0x0038);
static_assert(offsetof(UReplicationGraph, PendingConnections) == 0x0048);
static_assert(offsetof(UReplicationGraph, GlobalGraphNodes) == 0x0098);
static_assert(offsetof(UReplicationGraph, PrepareForReplicationNodes) == 0x00A8);
static_assert(offsetof(FConnectionAlwaysRelevantNodePair, NetConnection) == 0x0000);
static_assert(offsetof(FConnectionAlwaysRelevantNodePair, Node) == 0x0008);
static_assert(offsetof(UBasicReplicationGraph, GridNode) == 0x04B0);
static_assert(offsetof(UBasicReplicationGraph, AlwaysRelevantNode) == 0x04B8);
static_assert(offsetof(UBasicReplicationGraph, AlwaysRelevantForConnectionList) == 0x04C0);
static_assert(offsetof(UBasicReplicationGraph, ActorsWithoutNetConnection) == 0x04D0);
static_assert(offsetof(UReplicationGraphNode, AllChildNodes) == 0x0028);
static_assert(offsetof(UReplicationGraphNode_GridCell, DynamicNode) == 0x0180);
static_assert(offsetof(UReplicationGraphNode_GridCell, DormancyNode) == 0x0188);
static_assert(offsetof(UReplicationGraphNode_AlwaysRelevant, ChildNode) == 0x0050);
static_assert(offsetof(FAlwaysRelevantActorInfo, Connection) == 0x0000);
static_assert(offsetof(FAlwaysRelevantActorInfo, LastViewer) == 0x0008);
static_assert(offsetof(FAlwaysRelevantActorInfo, LastViewTarget) == 0x0010);
static_assert(offsetof(UReplicationGraphNode_AlwaysRelevant_ForConnection, PastRelevantActors) == 0x0110);
static_assert(offsetof(FTearOffActorInfo, Actor) == 0x0008);
static_assert(offsetof(UReplicationGraphNode_TearOff_ForConnection, TearOffActors) == 0x0050);
static_assert(offsetof(FLastLocationGatherInfo, Connection) == 0x0000);
static_assert(offsetof(FLastLocationGatherInfo, LastLocation) == 0x0008);
static_assert(offsetof(FLastLocationGatherInfo, LastOutOfRangeLocationCheck) == 0x0014);
static_assert(offsetof(UNetReplicationGraphConnection, NetConnection) == 0x0028);
static_assert(offsetof(UNetReplicationGraphConnection, DebugActor) == 0x0170);
static_assert(offsetof(UNetReplicationGraphConnection, LastGatherLocations) == 0x0188);
static_assert(offsetof(UNetReplicationGraphConnection, ConnectionGraphNodes) == 0x01A0);
static_assert(offsetof(UNetReplicationGraphConnection, TearOffNode) == 0x01B0);
static_assert(offsetof(UNetReplicationGraphConnection, OwnerReplicationGraph) == 0x0238);
static_assert(offsetof(FDynamicCharacterRepInfo, Actor) == 0x0000);
static_assert(offsetof(AReplicationGraphDebugActor, ReplicationGraph) == 0x0318);
static_assert(offsetof(AReplicationGraphDebugActor, ConnectionManager) == 0x0320);
static_assert(offsetof(AReplicationGraphDebugActor, DynamicCharacterRepInfos) == 0x0328);
