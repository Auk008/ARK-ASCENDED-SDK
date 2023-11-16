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

// 0x30 (0x30 - 0x0)
// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetViewPoint
struct AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Params
{
public:
	struct FVector                               InViewLocation;                                    // 0x0(0x18)(None)
	struct FVector                               InViewDirection;                                   // 0x18(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetEnabled
struct AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetDebugActor
struct AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(None)
	bool                                         bSelectInEditor;                                   // 0x8(0x1)(None)
	uint8                                        Pad_2FB5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetCategoryEnabled
struct AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Params
{
public:
	int32                                        CategoryId;                                        // 0x0(0x4)(None)
	bool                                         bEnable;                                           // 0x4(0x1)(None)
	uint8                                        Pad_2FB7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendExtensionInputEvent
struct AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Params
{
public:
	int32                                        ExtensionId;                                       // 0x0(0x4)(None)
	int32                                        HandlerId;                                         // 0x4(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendCategoryInputEvent
struct AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Params
{
public:
	int32                                        CategoryId;                                        // 0x0(0x4)(None)
	int32                                        HandlerId;                                         // 0x4(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ClientDataPackPacket
struct AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Params
{
public:
	struct FGameplayDebuggerDataPackRPCParams    Params;                                            // 0x0(0x30)(None)
};

}
}


