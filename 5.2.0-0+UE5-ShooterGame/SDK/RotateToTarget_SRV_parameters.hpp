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
// Function RotateToTarget_SRV.RotateToTarget_SRV_C.ReceiveActivation
struct URotateToTarget_SRV_C_ReceiveActivation_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function RotateToTarget_SRV.RotateToTarget_SRV_C.ReceiveDeactivation
struct URotateToTarget_SRV_C_ReceiveDeactivation_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x68 (0x68 - 0x0)
// Function RotateToTarget_SRV.RotateToTarget_SRV_C.ExecuteUbergraph_RotateToTarget_SRV
struct URotateToTarget_SRV_C_ExecuteUbergraph_RotateToTarget_SRV_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_35AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor_1;                         // 0x8(0x8)(ZeroConstructor)
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x10(0x8)(ZeroConstructor)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x18(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	uint8                                        Pad_35B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController_1;   // 0x28(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(None)
	uint8                                        Pad_35B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_GetAttackRotationRate_ReturnValue;        // 0x38(0x18)(None)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x50(0x4)(None)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x54(0x4)(None)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x58(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x5C(0x1)(None)
	uint8                                        Pad_35B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x60(0x8)(None)
};

}
}


