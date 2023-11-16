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
// Function PrimalItem_GlowStick.PrimalItem_GlowStick_C.BPPostInitializeItem
struct UPrimalItem_GlowStick_C_BPPostInitializeItem_Params
{
public:
	class UWorld*                                OptionalInitWorld;                                 // 0x0(0x8)(None)
	int32                                        CallFunc_IncrementItemQuantity_ReturnValue;        // 0x8(0x4)(None)
	float                                        CallFunc_GetItemStatModifier_ReturnValue;          // 0xC(0x4)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x10(0x1)(None)
	uint8                                        Pad_3E8D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x18(0x8)(None)
	double                                       CallFunc_Less_DoubleDouble_B_ImplicitCast;         // 0x20(0x8)(None)
};

// 0x2D (0x2D - 0x0)
// Function PrimalItem_GlowStick.PrimalItem_GlowStick_C.BPItemBroken
struct UPrimalItem_GlowStick_C_BPItemBroken_Params
{
public:
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x0(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(None)
	uint8                                        Pad_3E8E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWeapGlowStick_Base_C*                 K2Node_DynamicCast_AsWeap_Glow_Stick_Base;         // 0x8(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(None)
	uint8                                        Pad_3E90[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWeapGlowStick_Base_C*                 K2Node_DynamicCast_AsWeap_Glow_Stick_Base_1;       // 0x18(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x20(0x1)(None)
	uint8                                        Pad_3E91[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetItemStatModifier_ReturnValue;          // 0x24(0x4)(None)
	int32                                        CallFunc_IncrementItemQuantity_ReturnValue;        // 0x28(0x4)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x2C(0x1)(None)
};

}
}


