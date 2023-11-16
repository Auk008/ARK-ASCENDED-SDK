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

// 0x10 (0x10 - 0x0)
// Function FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C.AnimGraph
struct UFPVClimbPickWeaponAnimBP_Base_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// Function FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C.BlueprintUpdateAnimation
struct UFPVClimbPickWeaponAnimBP_Base_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(None)
};

// 0xBC (0xBC - 0x0)
// Function FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C.ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base
struct UFPVClimbPickWeaponAnimBP_Base_C_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_3210[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwningActor_ReturnValue;               // 0x8(0x8)(ZeroConstructor)
	class AShooterWeapon_Climb*                  K2Node_DynamicCast_AsShooter_Weapon_Climb;         // 0x10(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	bool                                         CallFunc_IsClimbingHanging_ReturnValue;            // 0x19(0x1)(None)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1A(0x1)(None)
	uint8                                        Pad_3211[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     CallFunc_GetPawnOwner_ReturnValue;                 // 0x20(0x8)(ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x28(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(None)
	uint8                                        Pad_3212[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x38(0x18)(None)
	double                                       CallFunc_BreakVector_X;                            // 0x50(0x8)(None)
	double                                       CallFunc_BreakVector_Y;                            // 0x58(0x8)(None)
	double                                       CallFunc_BreakVector_Z;                            // 0x60(0x8)(None)
	bool                                         CallFunc_IsRunning_ReturnValue;                    // 0x68(0x1)(None)
	uint8                                        Pad_3213[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x70(0x10)(None)
	double                                       CallFunc_VSize2D_ReturnValue;                      // 0x80(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x88(0x1)(None)
	uint8                                        Pad_3214[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaTimeX;                           // 0x8C(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x90(0x1)(None)
	uint8                                        Pad_3215[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Abs_ReturnValue;                          // 0x98(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0xA0(0x8)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA8(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA9(0x1)(None)
	uint8                                        Pad_3216[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_VariableSet_ClimbingLookingToSide_ImplicitCast; // 0xB0(0x8)(None)
	float                                        K2Node_StructMemberSet_Alpha_ImplicitCast;         // 0xB8(0x4)(None)
};

}
}


