#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
struct AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(None)
	int32                                        PeriodFrame;                                       // 0x8(0x4)(None)
	uint8                                        Pad_F9[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
struct AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(None)
	float                                        CullDistance;                                      // 0x8(0x4)(None)
	uint8                                        Pad_FB[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
struct AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
struct AReplicationGraphDebugActor_ServerPrintAllActorInfo_Params
{
public:
	class FString                                Str;                                               // 0x0(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
struct AReplicationGraphDebugActor_ClientCellInfo_Params
{
public:
	struct FVector                               CellLocation;                                      // 0x0(0x18)(None)
	struct FVector                               CellExtent;                                        // 0x18(0x18)(None)
	TArray<class AActor*>                        Actors;                                            // 0x30(0x10)(None)
};

}
}


