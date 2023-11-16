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

// 0x50 (0x50 - 0x0)
// Function Buff_Base.Buff_Base_C.BPCustomAllowAddBuff
struct ABuff_Base_C_BPCustomAllowAddBuff_Params
{
public:
	class APrimalCharacter*                      ForCharacter;                                      // 0x0(0x8)(ZeroConstructor)
	class AActor*                                DamageCauser;                                      // 0x8(0x8)(Edit, ZeroConstructor)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	bool                                         LOCAL_RetVal;                                      // 0x11(0x1)(None)
	uint8                                        Pad_36F5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class APrimalBuff*>                   CallFunc_GetAllBuffs_AllBuffs;                     // 0x18(0x10)(ZeroConstructor)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x28(0x1)(None)
	uint8                                        Pad_36F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x30(0x1)(None)
	uint8                                        Pad_36F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x34(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(None)
	uint8                                        Pad_36F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalBuff*                           CallFunc_Array_Get_Item;                           // 0x40(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x48(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x49(0x1)(None)
	uint8                                        Pad_36FA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4C(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function Buff_Base.Buff_Base_C.BPDeactivated
struct ABuff_Base_C_BPDeactivated_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function Buff_Base.Buff_Base_C.ExecuteUbergraph_Buff_Base
struct ABuff_Base_C_ExecuteUbergraph_Buff_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_3703[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_ForInstigator;                        // 0x8(0x8)(ZeroConstructor)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x10(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	uint8                                        Pad_3704[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue;                // 0x20(0x8)(None)
};

}
}


