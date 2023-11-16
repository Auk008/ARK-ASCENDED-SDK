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
// Function NotWithinDistance.NotWithinDistance_C.ReceiveConditionCheck
struct UNotWithinDistance_C_ReceiveConditionCheck_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0xE0 (0xE0 - 0x0)
// Function NotWithinDistance.NotWithinDistance_C.ExecuteUbergraph_NotWithinDistance
struct UNotWithinDistance_C_ExecuteUbergraph_NotWithinDistance_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_577[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x8(0x8)(ZeroConstructor)
	float                                        CallFunc_GetBlackboardValueAsFloat_ReturnValue;    // 0x10(0x4)(None)
	uint8                                        Pad_578[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x18(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	uint8                                        Pad_579[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x28(0x8)(ZeroConstructor)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x30(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(None)
	uint8                                        Pad_57A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetTamedFollowTarget_ReturnValue;         // 0x40(0x8)(None)
	float                                        CallFunc_GetAIFollowStoppingDistanceOffset_ReturnValue; // 0x48(0x4)(None)
	float                                        CallFunc_GetDistanceTo_ReturnValue;                // 0x4C(0x4)(None)
	bool                                         CallFunc_CanFly_ReturnValue;                       // 0x50(0x1)(None)
	uint8                                        Pad_57B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetAIFollowStoppingDistanceMultiplier_ReturnValue; // 0x54(0x4)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x58(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x60(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x68(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x70(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_2;           // 0x78(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x80(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_3;           // 0x88(0x8)(None)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x90(0x1)(None)
	uint8                                        Pad_57C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x98(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0xA0(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0xA8(0x8)(None)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast_1;        // 0xB0(0x8)(None)
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0xB8(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0xC0(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0xC8(0x8)(None)
	float                                        CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast; // 0xD0(0x4)(None)
	uint8                                        Pad_57D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;   // 0xD8(0x8)(None)
};

}
}


