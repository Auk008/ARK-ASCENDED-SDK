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
// Function FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C.AnimGraph
struct UFPVWeaponAnimBP_Base_Carrying_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// Function FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C.BlueprintUpdateAnimation
struct UFPVWeaponAnimBP_Base_Carrying_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(None)
};

// 0x3BC (0x3BC - 0x0)
// Function FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C.ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying
struct UFPVWeaponAnimBP_Base_Carrying_C_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_45F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_GetCurrentActiveMontage_ReturnValue;      // 0x8(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(None)
	bool                                         CallFunc_Montage_IsActive_ReturnValue;             // 0x11(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x12(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x13(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x14(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x15(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x16(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x17(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x18(0x1)(None)
	uint8                                        Pad_45F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x20(0x8)(None)
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x28(0x8)(None)
	double                                       CallFunc_Abs_ReturnValue;                          // 0x30(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x38(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x39(0x1)(None)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x3A(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x3B(0x1)(None)
	uint8                                        Pad_45F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0x40(0x18)(None)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x58(0x4)(None)
	uint8                                        Pad_45F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwningActor_ReturnValue;               // 0x60(0x8)(ZeroConstructor)
	class AShooterWeapon*                        K2Node_DynamicCast_AsShooter_Weapon;               // 0x68(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(None)
	uint8                                        Pad_45F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     CallFunc_GetPawnOwner_ReturnValue;                 // 0x78(0x8)(ZeroConstructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x80(0x1)(None)
	uint8                                        Pad_45F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x88(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x90(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x91(0x1)(None)
	uint8                                        Pad_45F7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation; // 0x98(0x18)(None)
	struct FRotator                              CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation; // 0xB0(0x18)(None)
	bool                                         CallFunc_GetBlockingShieldOffsets_ReturnValue;     // 0xC8(0x1)(None)
	bool                                         CallFunc_IsBlockingWithShield_ReturnValue;         // 0xC9(0x1)(None)
	bool                                         CallFunc_IsUsingShield_ReturnValue;                // 0xCA(0x1)(None)
	bool                                         CallFunc_IsNearTopOfLadder_ReturnValue;            // 0xCB(0x1)(None)
	float                                        CallFunc_GetDefaultMovementSpeed_ReturnValue;      // 0xCC(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0xD0(0x1)(None)
	uint8                                        Pad_45F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector_X;                            // 0xD8(0x8)(None)
	double                                       CallFunc_BreakVector_Y;                            // 0xE0(0x8)(None)
	double                                       CallFunc_BreakVector_Z;                            // 0xE8(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0xF0(0x8)(None)
	bool                                         CallFunc_IsSwimmingOnWaterSurface_ReturnValue;     // 0xF8(0x1)(None)
	uint8                                        Pad_45F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue_2;                // 0x100(0x8)(None)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x108(0x8)(ZeroConstructor)
	class UBaseHumanAnimBP_C*                    K2Node_DynamicCast_AsBase_Human_Anim_BP;           // 0x110(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x118(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x119(0x1)(None)
	uint8                                        Pad_45FA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x120(0x18)(None)
	float                                        CallFunc_GetDefaultMovementSpeed_ReturnValue_1;    // 0x138(0x4)(None)
	uint8                                        Pad_45FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x140(0x18)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x158(0x1)(None)
	uint8                                        Pad_45FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetCurrentAcceleration_ReturnValue;       // 0x160(0x18)(None)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x178(0x18)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x190(0x1)(None)
	uint8                                        Pad_45FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector_X_1;                          // 0x198(0x8)(None)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x1A0(0x8)(None)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x1A8(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_3;       // 0x1B0(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_6;                // 0x1B1(0x1)(None)
	uint8                                        Pad_45FE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Dot_VectorVector_ReturnValue;             // 0x1B8(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_4;       // 0x1C0(0x1)(None)
	uint8                                        Pad_45FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x1C8(0x10)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x1D8(0x1)(None)
	uint8                                        Pad_4600[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_VSize2D_ReturnValue;                      // 0x1E0(0x8)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x1E8(0x1)(None)
	uint8                                        Pad_4601[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x1F0(0x8)(None)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x1F8(0x8)(None)
	bool                                         CallFunc_IsTargeting_ReturnValue;                  // 0x200(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_5;       // 0x201(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x202(0x1)(None)
	bool                                         CallFunc_IsRunning_ReturnValue;                    // 0x203(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_7;                // 0x204(0x1)(None)
	uint8                                        Pad_4602[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x208(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x210(0x8)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x218(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x219(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x21A(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_8;                // 0x21B(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_7;                 // 0x21C(0x1)(None)
	uint8                                        Pad_4603[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x220(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_1;                  // 0x228(0x8)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_9;                // 0x230(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_8;                 // 0x231(0x1)(None)
	uint8                                        Pad_4604[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FInterpTo_ReturnValue_2;                  // 0x238(0x8)(None)
	double                                       CallFunc_FInterpTo_ReturnValue_3;                  // 0x240(0x8)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_10;               // 0x248(0x1)(None)
	uint8                                        Pad_4605[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x250(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x258(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x260(0x8)(None)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x268(0x8)(None)
	double                                       CallFunc_FMin_ReturnValue;                         // 0x270(0x8)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_9;                 // 0x278(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_10;                // 0x279(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_11;               // 0x27A(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_11;                // 0x27B(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_12;                // 0x27C(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_13;                // 0x27D(0x1)(None)
	uint8                                        Pad_4607[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FInterpTo_Constant_ReturnValue;           // 0x280(0x8)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_14;                // 0x288(0x1)(None)
	uint8                                        Pad_4608[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FClamp01_ReturnValue;                     // 0x290(0x8)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_12;               // 0x298(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_13;               // 0x299(0x1)(None)
	uint8                                        Pad_4609[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue_3;                // 0x2A0(0x8)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_14;               // 0x2A8(0x1)(None)
	uint8                                        Pad_460A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue_4;                // 0x2B0(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x2B8(0x8)(None)
	double                                       CallFunc_FInterpTo_Constant_ReturnValue_1;         // 0x2C0(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0x2C8(0x8)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_15;                // 0x2D0(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_15;               // 0x2D1(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_16;                // 0x2D2(0x1)(None)
	uint8                                        Pad_460B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue_1;       // 0x2D8(0x8)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_17;                // 0x2E0(0x1)(None)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x2E1(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_18;                // 0x2E2(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_16;               // 0x2E3(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_19;                // 0x2E4(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_17;               // 0x2E5(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_20;                // 0x2E6(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_18;               // 0x2E7(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_21;                // 0x2E8(0x1)(None)
	bool                                         CallFunc_IsTimeSince_ReturnValue_1;                // 0x2E9(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_19;               // 0x2EA(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_22;                // 0x2EB(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x2EC(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_23;                // 0x2ED(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_24;                // 0x2EE(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_25;                // 0x2EF(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_20;               // 0x2F0(0x1)(None)
	uint8                                        Pad_460C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue_5;                // 0x2F8(0x8)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_26;                // 0x300(0x1)(None)
	uint8                                        Pad_460E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x308(0x8)(None)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue;              // 0x310(0x8)(None)
	float                                        CallFunc_GetCurveValue_ReturnValue;                // 0x318(0x4)(None)
	uint8                                        Pad_460F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FMax_ReturnValue;                         // 0x320(0x8)(None)
	double                                       CallFunc_FClamp01_ReturnValue_1;                   // 0x328(0x8)(None)
	float                                        CallFunc_Array_Set_Item_ImplicitCast;              // 0x330(0x4)(None)
	float                                        K2Node_StructMemberSet_Alpha_ImplicitCast;         // 0x334(0x4)(None)
	float                                        K2Node_StructMemberSet_Alpha_ImplicitCast_1;       // 0x338(0x4)(None)
	uint8                                        Pad_4610[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FInterpTo_Constant_DeltaTime_ImplicitCast; // 0x340(0x8)(None)
	double                                       CallFunc_FInterpTo_Constant_DeltaTime_ImplicitCast_1; // 0x348(0x8)(None)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast;         // 0x350(0x8)(None)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast_1;       // 0x358(0x8)(None)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast_2;       // 0x360(0x8)(None)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast_3;       // 0x368(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0x370(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x378(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x380(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast_1;     // 0x388(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x390(0x8)(None)
	double                                       CallFunc_Add_DoubleFloat_A_ImplicitCast;           // 0x398(0x8)(None)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x3A0(0x4)(None)
	float                                        CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1;    // 0x3A4(0x4)(None)
	float                                        CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x3A8(0x4)(None)
	uint8                                        Pad_4611[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FMax_B_ImplicitCast;                      // 0x3B0(0x8)(None)
	float                                        K2Node_VariableSet_DefaultTransformAlpha_ImplicitCast; // 0x3B8(0x4)(None)
};

}
}


