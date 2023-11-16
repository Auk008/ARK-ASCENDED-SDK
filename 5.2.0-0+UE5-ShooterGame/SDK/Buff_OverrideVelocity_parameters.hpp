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

// 0x11 (0x11 - 0x0)
// Function Buff_OverrideVelocity.Buff_OverrideVelocity_C.BPDeactivated
struct ABuff_OverrideVelocity_C_BPDeactivated_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(Edit, ZeroConstructor)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x8(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(None)
};

// 0x158 (0x158 - 0x0)
// Function Buff_OverrideVelocity.Buff_OverrideVelocity_C.BPOverrideCharacterNewFallVelocity
struct ABuff_OverrideVelocity_C_BPOverrideCharacterNewFallVelocity_Params
{
public:
	struct FVector                               InitialVelocity;                                   // 0x0(0x18)(None)
	struct FVector                               Gravity;                                           // 0x18(0x18)(None)
	float                                        DeltaTime;                                         // 0x30(0x4)(None)
	uint8                                        Pad_2D2E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x38(0x18)(None)
	struct FVector                               Result;                                            // 0x50(0x18)(None)
	bool                                         CallFunc_NotEqual_VectorVector_ReturnValue;        // 0x68(0x1)(None)
	uint8                                        Pad_2D2F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x70(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x78(0x1)(None)
	uint8                                        Pad_2D30[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x80(0x18)(None)
	struct FVector                               CallFunc_NewFallVelocity_ReturnValue;              // 0x98(0x18)(None)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0xB0(0x18)(None)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0xC8(0x18)(None)
	struct FVector                               CallFunc_BPPointPlaneProject_ReturnValue;          // 0xE0(0x18)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xF8(0x18)(None)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x110(0x18)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x128(0x18)(None)
	double                                       CallFunc_Dot_VectorVector_ReturnValue;             // 0x140(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x148(0x1)(None)
	uint8                                        Pad_2D31[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_VectorFloat_B_ImplicitCast;      // 0x150(0x8)(None)
};

}
}


