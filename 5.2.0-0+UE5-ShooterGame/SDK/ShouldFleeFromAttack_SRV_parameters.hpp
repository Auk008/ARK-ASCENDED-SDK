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

// 0xC (0xC - 0x0)
// Function ShouldFleeFromAttack_SRV.ShouldFleeFromAttack_SRV_C.ReceiveTick
struct UShouldFleeFromAttack_SRV_C_ReceiveTick_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(None)
};

// 0xD8 (0xD8 - 0x0)
// Function ShouldFleeFromAttack_SRV.ShouldFleeFromAttack_SRV_C.ExecuteUbergraph_ShouldFleeFromAttack_SRV
struct UShouldFleeFromAttack_SRV_C_ExecuteUbergraph_ShouldFleeFromAttack_SRV_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(None)
	bool                                         CallFunc_GetBlackboardValueAsBool_ReturnValue;     // 0xC(0x1)(None)
	bool                                         CallFunc_GetBlackboardValueAsBool_ReturnValue_1;   // 0xD(0x1)(None)
	bool                                         CallFunc_GetBlackboardValueAsBool_ReturnValue_2;   // 0xE(0x1)(None)
	bool                                         CallFunc_GetBlackboardValueAsBool_ReturnValue_3;   // 0xF(0x1)(None)
	bool                                         CallFunc_GetBlackboardValueAsBool_ReturnValue_4;   // 0x10(0x1)(None)
	bool                                         CallFunc_GetBlackboardValueAsBool_ReturnValue_5;   // 0x11(0x1)(None)
	uint8                                        Pad_3223[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x18(0x8)(ZeroConstructor)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x20(0x4)(None)
	uint8                                        Pad_3224[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x28(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(None)
	bool                                         CallFunc_GetBlackboardValueAsBool_ReturnValue_6;   // 0x31(0x1)(None)
	uint8                                        Pad_3225[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x38(0x8)(ZeroConstructor)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x40(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x48(0x1)(None)
	uint8                                        Pad_3226[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetHealthPercentage_ReturnValue;          // 0x4C(0x4)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x50(0x8)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x5C(0x1)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5D(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x5E(0x1)(None)
	bool                                         CallFunc_BPIsTamed_ReturnValue;                    // 0x5F(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x60(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x61(0x1)(None)
	bool                                         CallFunc_ShouldForceFlee_ReturnValue;              // 0x62(0x1)(None)
	uint8                                        Pad_3227[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x64(0x4)(None)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x68(0x1)(None)
	uint8                                        Pad_3228[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x70(0x8)(ZeroConstructor)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character_1;      // 0x78(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x80(0x1)(None)
	bool                                         CallFunc_IsPrimalDino_ReturnValue;                 // 0x81(0x1)(None)
	uint8                                        Pad_3229[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x88(0x8)(ZeroConstructor)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController_1;   // 0x90(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x98(0x1)(None)
	bool                                         CallFunc_IsAWildFollowerKnownServerside_ReturnValue; // 0x99(0x1)(None)
	uint8                                        Pad_322A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetTarget_ReturnValue;                    // 0xA0(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA8(0x1)(None)
	bool                                         CallFunc_IsBaby_ReturnValue;                       // 0xA9(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xAA(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xAB(0x1)(None)
	uint8                                        Pad_322B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Greater_DoubleDouble_B_ImplicitCast;      // 0xB0(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_B_ImplicitCast_1;    // 0xB8(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0xC0(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0xC8(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0xD0(0x8)(None)
};

}
}


