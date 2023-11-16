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
// Function ForceAggro_BT.ForceAggro_BT_C.ReceiveConditionCheck
struct UForceAggro_BT_C_ReceiveConditionCheck_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x91 (0x91 - 0x0)
// Function ForceAggro_BT.ForceAggro_BT_C.ExecuteUbergraph_ForceAggro_BT
struct UForceAggro_BT_C_ExecuteUbergraph_ForceAggro_BT_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(None)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x8(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x9(0x1)(None)
	uint8                                        Pad_32D1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x10(0x8)(ZeroConstructor)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x18(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	uint8                                        Pad_32D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x28(0x8)(ZeroConstructor)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x30(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x39(0x1)(None)
	uint8                                        Pad_32D6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character_1;      // 0x48(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x50(0x1)(None)
	bool                                         CallFunc_IsPrimalDino_ReturnValue;                 // 0x51(0x1)(None)
	uint8                                        Pad_32D8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x58(0x8)(ZeroConstructor)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController_1;   // 0x60(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x68(0x1)(None)
	bool                                         CallFunc_IsAWildFollowerKnownServerside_ReturnValue; // 0x69(0x1)(None)
	uint8                                        Pad_32D9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetTarget_ReturnValue;                    // 0x70(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x78(0x1)(None)
	bool                                         CallFunc_IsBaby_ReturnValue;                       // 0x79(0x1)(None)
	uint8                                        Pad_32DA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x7C(0x4)(None)
	bool                                         CallFunc_IsPrimalDino_ReturnValue_1;               // 0x80(0x1)(None)
	uint8                                        Pad_32DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x84(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x88(0x1)(None)
	uint8                                        Pad_32DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8C(0x4)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x90(0x1)(None)
};

}
}


