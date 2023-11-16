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
// Function Attacking_dR.Attacking_DR_C.ReceiveExecutionStart
struct UAttacking_DR_C_ReceiveExecutionStart_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x9 (0x9 - 0x0)
// Function Attacking_dR.Attacking_DR_C.ReceiveExecutionFinish
struct UAttacking_DR_C_ReceiveExecutionFinish_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
	enum class EBTNodeResult                     NodeResult;                                        // 0x8(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function Attacking_dR.Attacking_DR_C.ReceiveConditionCheck
struct UAttacking_DR_C_ReceiveConditionCheck_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x31 (0x31 - 0x0)
// Function Attacking_dR.Attacking_DR_C.ExecuteUbergraph_Attacking_DR
struct UAttacking_DR_C_ExecuteUbergraph_Attacking_DR_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_3396[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor_2;                         // 0x8(0x8)(ZeroConstructor)
	class AActor*                                K2Node_Event_OwnerActor_1;                         // 0x10(0x8)(ZeroConstructor)
	enum class EBTNodeResult                     K2Node_Event_NodeResult;                           // 0x18(0x1)(None)
	uint8                                        Pad_3397[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x20(0x8)(ZeroConstructor)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x28(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(None)
};

}
}


