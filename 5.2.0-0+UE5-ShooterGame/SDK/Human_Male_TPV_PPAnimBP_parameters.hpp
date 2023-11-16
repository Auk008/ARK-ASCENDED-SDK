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
// Function Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C.AnimGraph
struct UHuman_Male_TPV_PPAnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(None)
	struct FPoseLink                             AnimGraph;                                         // 0x10(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// Function Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C.BlueprintUpdateAnimation
struct UHuman_Male_TPV_PPAnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(None)
};

// 0x49 (0x49 - 0x0)
// Function Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C.ExecuteUbergraph_Human_Male_TPV_PPAnimBP
struct UHuman_Male_TPV_PPAnimBP_C_ExecuteUbergraph_Human_Male_TPV_PPAnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x4(0x4)(None)
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x8(0x8)(ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x10(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	bool                                         CallFunc_IsRider_ReturnValue;                      // 0x19(0x1)(None)
	enum class ENetRole                          CallFunc_GetLocalRole_ReturnValue;                 // 0x1A(0x1)(None)
	uint8                                        Pad_4291[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetBasedOnDinoAsActor_ReturnValue;        // 0x20(0x8)(ZeroConstructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x28(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2A(0x1)(None)
	uint8                                        Pad_4292[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x30(0x8)(ZeroConstructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x38(0x1)(None)
	uint8                                        Pad_4293[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBaseHumanAnimBP_C*                    K2Node_DynamicCast_AsBase_Human_Anim_BP;           // 0x40(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x48(0x1)(None)
};

}
}


