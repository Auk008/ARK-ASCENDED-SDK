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

// 0x8 (0x8 - 0x0)
// Function AttackTarget_SRV.AttackTarget_SRV_C.ReceiveActivation
struct UAttackTarget_SRV_C_ReceiveActivation_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AttackTarget_SRV.AttackTarget_SRV_C.ReceiveDeactivation
struct UAttackTarget_SRV_C_ReceiveDeactivation_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function AttackTarget_SRV.AttackTarget_SRV_C.ExecuteUbergraph_AttackTarget_SRV
struct UAttackTarget_SRV_C_ExecuteUbergraph_AttackTarget_SRV_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_381E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x8(0x8)(Edit, ZeroConstructor)
	class AActor*                                K2Node_Event_OwnerActor_1;                         // 0x10(0x8)(None)
};

}
}


