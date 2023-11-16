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

// 0x28 (0x28 - 0x0)
// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.BPOverrideEquippedDurabilityPercentage
struct UPrimalItemArmor_SaddleGeneric_C_BPOverrideEquippedDurabilityPercentage_Params
{
public:
	float                                        OutDurabilityPercentageValue;                      // 0x0(0x4)(None)
	float                                        CallFunc_GetItemStatModifier_ReturnValue;          // 0x4(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x8(0x1)(None)
	uint8                                        Pad_3460[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x10(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x18(0x1)(None)
	uint8                                        Pad_3461[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_FunctionResult_OutDurabilityPercentageValue_ImplicitCast; // 0x1C(0x4)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x20(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.ResetSaddleDurabilityToSavedValue
struct UPrimalItemArmor_SaddleGeneric_C_ResetSaddleDurabilityToSavedValue_Params
{
public:
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0(0x1)(None)
	uint8                                        Pad_3463[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_VariableSet_ItemDurability_ImplicitCast;    // 0x4(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.SaveSaddleDurability
struct UPrimalItemArmor_SaddleGeneric_C_SaveSaddleDurability_Params
{
public:
	double                                       K2Node_VariableSet_SavedSaddleDurability_ImplicitCast; // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.BlueprintEquipped
struct UPrimalItemArmor_SaddleGeneric_C_BlueprintEquipped_Params
{
public:
	bool                                         bIsFromSaveGame;                                   // 0x0(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(None)
	uint8                                        Pad_3468[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x8(0x8)(None)
};

}
}


