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

// 0x8 (0x8 - 0x0)
// Function IsFollowing_DK.IsFollowing_DK_C.ReceiveConditionCheck
struct UIsFollowing_DK_C_ReceiveConditionCheck_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x4B (0x4B - 0x0)
// Function IsFollowing_DK.IsFollowing_DK_C.ExecuteUbergraph_IsFollowing_DK
struct UIsFollowing_DK_C_ExecuteUbergraph_IsFollowing_DK_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_36FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x8(0x8)(Edit, ZeroConstructor)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x10(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	uint8                                        Pad_36FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x20(0x8)(Edit, ZeroConstructor)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x28(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(None)
	uint8                                        Pad_36FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetTamedFollowTarget_ReturnValue;         // 0x38(0x8)(Edit, ZeroConstructor)
	class AActor*                                CallFunc_GetTamedLandTarget_ReturnValue;           // 0x40(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x49(0x1)(None)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x4A(0x1)(None)
};

}
}


