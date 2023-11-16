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

// 0x2C (0x2C - 0x0)
// Function WeapClimbPick.WeapClimbPick_C.BPOnWeaponAnimPlayedNotify
struct AWeapClimbPick_C_BPOnWeaponAnimPlayedNotify_Params
{
public:
	struct FWeaponAnim                           Animation;                                         // 0x0(0x10)(ZeroConstructor)
	float                                        InPlayRate;                                        // 0x10(0x4)(None)
	bool                                         bPlayBothFirstAndThirdPerson;                      // 0x14(0x1)(None)
	bool                                         bReplicate;                                        // 0x15(0x1)(None)
	bool                                         bReplicateToInstigator;                            // 0x16(0x1)(None)
	bool                                         bPauseOnFinish1P;                                  // 0x17(0x1)(None)
	bool                                         bForceTickPoseAndServerUpdateMesh;                 // 0x18(0x1)(None)
	bool                                         bForceTickPoseOnServer;                            // 0x19(0x1)(None)
	uint8                                        Pad_4540[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x20(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x29(0x1)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x2A(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2B(0x1)(None)
};

// 0x6A (0x6A - 0x0)
// Function WeapClimbPick.WeapClimbPick_C.StartUnequipEvent
struct AWeapClimbPick_C_StartUnequipEvent_Params
{
public:
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x0(0x18)(None)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x18(0x18)(None)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x30(0x18)(None)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x48(0x1)(None)
	uint8                                        Pad_4542[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetGroundLocation_theGroundLoc;           // 0x50(0x18)(None)
	bool                                         CallFunc_GetGroundLocation_ReturnValue;            // 0x68(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x69(0x1)(None)
};

// 0x2C (0x2C - 0x0)
// Function WeapClimbPick.WeapClimbPick_C.BPModifyFOV
struct AWeapClimbPick_C_BPModifyFOV_Params
{
public:
	float                                        InFOV;                                             // 0x0(0x4)(None)
	float                                        ReturnValue;                                       // 0x4(0x4)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x8(0x1)(None)
	uint8                                        Pad_4543[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x10(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x18(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x20(0x8)(None)
	float                                        K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x28(0x4)(None)
};

// 0x2C (0x2C - 0x0)
// Function WeapClimbPick.WeapClimbPick_C.SetSourceLocation
struct AWeapClimbPick_C_SetSourceLocation_Params
{
public:
	class UParticleSystemComponent*              Particle_System;                                   // 0x0(0x8)(None)
	struct FVector                               NewSourcePoint;                                    // 0x8(0x18)(None)
	int32                                        Temp_int_Variable;                                 // 0x20(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x24(0x1)(None)
	uint8                                        Pad_4544[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(None)
};

// 0x11 (0x11 - 0x0)
// Function WeapClimbPick.WeapClimbPick_C.SetTemplateTo
struct AWeapClimbPick_C_SetTemplateTo_Params
{
public:
	class UParticleSystemComponent*              Particle_System;                                   // 0x0(0x8)(ZeroConstructor)
	class UParticleSystem*                       New_Template;                                      // 0x8(0x8)(None)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x10(0x1)(None)
};

// 0x784 (0x784 - 0x0)
// Function WeapClimbPick.WeapClimbPick_C.BPUpdateClimbTarget
struct AWeapClimbPick_C_BPUpdateClimbTarget_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(None)
	bool                                         bClimbing;                                         // 0x4(0x1)(None)
	uint8                                        Pad_4545[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AnchorPosition;                                    // 0x8(0x18)(None)
	struct FVector                               AnchorNormal;                                      // 0x20(0x18)(None)
	bool                                         bCanClimb;                                         // 0x38(0x1)(None)
	bool                                         bCanLand;                                          // 0x39(0x1)(None)
	uint8                                        Pad_4546[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ClimbLocation;                                     // 0x40(0x18)(None)
	struct FVector                               ClimbNormal;                                       // 0x58(0x18)(None)
	bool                                         bHudVisible;                                       // 0x70(0x1)(None)
	uint8                                        Pad_4547[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SourceTangent;                                     // 0x78(0x18)(None)
	bool                                         CallFunc_IsClimbingHanging_ReturnValue;            // 0x90(0x1)(None)
	uint8                                        Pad_4548[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x98(0x18)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xB0(0x1)(None)
	uint8                                        Pad_4549[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue_1;       // 0xB8(0x18)(None)
	struct FVector                               CallFunc_GetViewDirection_ReturnValue;             // 0xD0(0x18)(None)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0xE8(0x18)(None)
	struct FVector                               CallFunc_VInterpTo_ReturnValue;                    // 0x100(0x18)(None)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x118(0x18)(None)
	struct FRotator                              CallFunc_RInterpTo_ReturnValue;                    // 0x130(0x18)(None)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x148(0xF0)(ZeroConstructor)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x238(0xF0)(ZeroConstructor)
	struct FVector                               CallFunc_GetViewLocation_ReturnValue;              // 0x328(0x18)(None)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x340(0x18)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x358(0x1)(None)
	uint8                                        Pad_454A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_VSize_ReturnValue;                        // 0x360(0x8)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x368(0x1)(None)
	uint8                                        Pad_454B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x370(0x8)(None)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x378(0x8)(None)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x380(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x388(0x8)(None)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1; // 0x390(0x8)(None)
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0x398(0x8)(None)
	struct FVector                               CallFunc_GetActorRightVector_ReturnValue;          // 0x3A0(0x18)(None)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x3B8(0x18)(None)
	double                                       CallFunc_Dot_VectorVector_ReturnValue;             // 0x3D0(0x8)(None)
	struct FVector                               CallFunc_GetActorUpVector_ReturnValue;             // 0x3D8(0x18)(None)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x3F0(0x18)(None)
	double                                       CallFunc_Dot_VectorVector_ReturnValue_1;           // 0x408(0x8)(None)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x410(0x18)(None)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x428(0x18)(None)
	struct FVector                               CallFunc_GetActorUpVector_ReturnValue_1;           // 0x440(0x18)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x458(0x18)(None)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x470(0x18)(None)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x488(0x18)(None)
	struct FVector                               CallFunc_Normal_ReturnValue_1;                     // 0x4A0(0x18)(None)
	struct FVector                               CallFunc_NegateVector_ReturnValue;                 // 0x4B8(0x18)(None)
	struct FVector                               CallFunc_VInterpTo_ReturnValue_1;                  // 0x4D0(0x18)(None)
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0x4E8(0x18)(None)
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue_1;    // 0x500(0x18)(None)
	uint8                                        Temp_byte_Variable;                                // 0x518(0x1)(None)
	uint8                                        Pad_454C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_RInterpTo_ReturnValue_1;                  // 0x520(0x18)(None)
	struct FVector                               K2Node_Select_Default;                             // 0x538(0x18)(None)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult_1;     // 0x550(0xF0)(ZeroConstructor)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult_1;     // 0x640(0xF0)(None)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0x730(0x18)(None)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x748(0x18)(None)
	double                                       CallFunc_VSize_ReturnValue_1;                      // 0x760(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x768(0x1)(None)
	uint8                                        Pad_454D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_VInterpTo_InterpSpeed_ImplicitCast;       // 0x76C(0x4)(None)
	float                                        CallFunc_RInterpTo_InterpSpeed_ImplicitCast;       // 0x770(0x4)(None)
	float                                        CallFunc_SetBeamTargetStrength_NewTargetStrength_ImplicitCast; // 0x774(0x4)(None)
	float                                        CallFunc_SetBeamSourceStrength_NewSourceStrength_ImplicitCast; // 0x778(0x4)(None)
	float                                        CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1;     // 0x77C(0x4)(None)
	float                                        CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1;     // 0x780(0x4)(None)
};

}
}


