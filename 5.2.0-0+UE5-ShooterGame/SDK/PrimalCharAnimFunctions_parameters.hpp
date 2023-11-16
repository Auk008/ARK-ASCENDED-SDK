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

// 0x84 (0x84 - 0x0)
// Function PrimalCharAnimFunctions.PrimalCharAnimFunctions_C.UpdateGroundConformingVariables
struct UPrimalCharAnimFunctions_C_UpdateGroundConformingVariables_Params
{
public:
	class APrimalCharacter*                      PrimalCharacter;                                   // 0x0(0x8)(Edit, ZeroConstructor)
	bool                                         Has_Hit_The_Ground_Once;                           // 0x8(0x1)(None)
	uint8                                        Pad_3847[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(Edit, ZeroConstructor)
	bool                                         IsBeingDragged;                                    // 0x18(0x1)(None)
	bool                                         IsSwimming;                                        // 0x19(0x1)(None)
	bool                                         IsFalling;                                         // 0x1A(0x1)(None)
	bool                                         Should_Mark_Has_Hit_Ground_once;                   // 0x1B(0x1)(None)
	bool                                         Interpolate;                                       // 0x1C(0x1)(None)
	bool                                         bInterpolate;                                      // 0x1D(0x1)(None)
	bool                                         Ret_Should_Mark_Has_Hit_Ground_once;               // 0x1E(0x1)(None)
	bool                                         bFallingMovement;                                  // 0x1F(0x1)(None)
	bool                                         bSwimmingMovement;                                 // 0x20(0x1)(None)
	bool                                         Is_Being_Dragged;                                  // 0x21(0x1)(None)
	bool                                         Is_Being_Dragged_And_Underwater;                   // 0x22(0x1)(None)
	uint8                                        Pad_3848[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetImmersionDepth_ReturnValue;            // 0x24(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x28(0x1)(None)
	uint8                                        Pad_3849[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPawnMovementComponent*                CallFunc_GetMovementComponent_ReturnValue;         // 0x30(0x8)(Edit, ZeroConstructor)
	class UCharacterMovementComponent*           K2Node_DynamicCast_AsCharacter_Movement_Component; // 0x38(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x41(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x42(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x43(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x44(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x45(0x1)(None)
	uint8                                        Pad_384A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetTimeSeconds_ReturnValue;               // 0x48(0x8)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x50(0x1)(None)
	uint8                                        Pad_384B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x58(0x8)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x60(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x61(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x62(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x63(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x64(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x65(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x66(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x67(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x68(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x69(0x1)(None)
	uint8                                        Pad_384C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Greater_DoubleDouble_B_ImplicitCast;      // 0x70(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x78(0x8)(None)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x80(0x4)(None)
};

}
}


