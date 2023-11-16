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

// 0x20 (0x20 - 0x0)
// Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.AnimGraph
struct UHuman_Male_TPV_GroundConform_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(None)
	struct FPoseLink                             AnimGraph;                                         // 0x10(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.BlueprintUpdateAnimation
struct UHuman_Male_TPV_GroundConform_AnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(None)
};

// 0x68 (0x68 - 0x0)
// Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP
struct UHuman_Male_TPV_GroundConform_AnimBP_C_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	float                                        CallFunc_GetCurveValue_ReturnValue;                // 0x4(0x4)(None)
	class USkeletalMeshComponent*                CallFunc_GetOwningComponent_ReturnValue;           // 0x8(0x8)(Edit, ZeroConstructor)
	struct FVector                               CallFunc_K2_GetComponentScale_ReturnValue;         // 0x10(0x18)(None)
	double                                       CallFunc_Conv_BoolToDouble_ReturnValue;            // 0x28(0x8)(None)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x30(0x4)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x34(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x35(0x1)(None)
	uint8                                        Pad_289B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x38(0x8)(Edit, ZeroConstructor)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x40(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(None)
	bool                                         CallFunc_HasDynamicBase_ReturnValue;               // 0x49(0x1)(None)
	bool                                         CallFunc_UpdateGroundConformingVariables_IsBeingDragged; // 0x4A(0x1)(None)
	bool                                         CallFunc_UpdateGroundConformingVariables_IsSwimming; // 0x4B(0x1)(None)
	bool                                         CallFunc_UpdateGroundConformingVariables_IsFalling; // 0x4C(0x1)(None)
	bool                                         CallFunc_UpdateGroundConformingVariables_Should_Mark_Has_Hit_Ground_once; // 0x4D(0x1)(None)
	bool                                         CallFunc_UpdateGroundConformingVariables_Interpolate; // 0x4E(0x1)(None)
	uint8                                        Pad_289C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetCurveValue_ReturnValue_1;              // 0x50(0x4)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x54(0x1)(None)
	uint8                                        Pad_289D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_StructMemberSet_Alpha_ImplicitCast;         // 0x58(0x4)(None)
	uint8                                        Pad_289E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x60(0x8)(None)
};

}
}


