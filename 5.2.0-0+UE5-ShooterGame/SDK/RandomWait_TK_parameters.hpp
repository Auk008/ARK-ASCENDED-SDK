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
// Function RandomWait_TK.RandomWait_TK_C.ReceiveExecute
struct URandomWait_TK_C_ReceiveExecute_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x74 (0x74 - 0x0)
// Function RandomWait_TK.RandomWait_TK_C.ExecuteUbergraph_RandomWait_TK
struct URandomWait_TK_C_ExecuteUbergraph_RandomWait_TK_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_2574[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x8(0x8)(ZeroConstructor)
	class ADino_AIController_BP_C*               K2Node_DynamicCast_AsDino_AIController_BP;         // 0x10(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	uint8                                        Pad_2575[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x20(0x8)(ZeroConstructor)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x28(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(None)
	uint8                                        Pad_2576[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_RandomFloat_ReturnValue;                  // 0x38(0x8)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x40(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x41(0x1)(None)
	uint8                                        Pad_2577[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x48(0x8)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x50(0x1)(None)
	uint8                                        Pad_2578[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x58(0x8)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x60(0x1)(None)
	uint8                                        Pad_2579[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x68(0x8)(None)
	float                                        CallFunc_Delay_Duration_ImplicitCast;              // 0x70(0x4)(None)
};

}
}


