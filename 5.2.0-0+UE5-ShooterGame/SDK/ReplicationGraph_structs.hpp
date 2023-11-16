#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x70 - 0x0)
// ScriptStruct ReplicationGraph.ClassReplicationInfo
struct FClassReplicationInfo
{
public:
	float                                        DistancePriorityScale;                             // 0x0(0x4)(None)
	float                                        StarvationPriorityScale;                           // 0x4(0x4)(None)
	float                                        AccumulatedNetPriorityBias;                        // 0x8(0x4)(None)
	float                                        NetCriticalPriority;                               // 0xC(0x4)(None)
	uint16                                       ReplicationPeriodFrame;                            // 0x10(0x2)(None)
	uint16                                       FastPath_ReplicationPeriodFrame;                   // 0x12(0x2)(None)
	uint16                                       ActorChannelFrameTimeout;                          // 0x14(0x2)(None)
	bool                                         bNetCritical;                                      // 0x16(0x1)(None)
	uint8                                        Pad_100[0x51];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CullDistance;                                      // 0x68(0x4)(None)
	float                                        CullDistanceSquared;                               // 0x6C(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
struct FConnectionAlwaysRelevantNodePair
{
public:
	class UNetConnection*                        NetConnection;                                     // 0x0(0x8)(ZeroConstructor)
	class UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;                                              // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReplicationGraph.AlwaysRelevantActorInfo
struct FAlwaysRelevantActorInfo
{
public:
	class UNetConnection*                        Connection;                                        // 0x0(0x8)(ZeroConstructor)
	class AActor*                                LastViewer;                                        // 0x8(0x8)(ZeroConstructor)
	class AActor*                                LastViewTarget;                                    // 0x10(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ReplicationGraph.TearOffActorInfo
struct FTearOffActorInfo
{
public:
	uint8                                        Pad_102[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x8(0x8)(None)
	uint8                                        Pad_103[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ReplicationGraph.LastLocationGatherInfo
struct FLastLocationGatherInfo
{
public:
	class UNetConnection*                        Connection;                                        // 0x0(0x8)(None)
	struct FVector                               LastLocation;                                      // 0x8(0x18)(None)
	struct FVector                               LastOutOfRangeLocationCheck;                       // 0x20(0x18)(None)
};

}


