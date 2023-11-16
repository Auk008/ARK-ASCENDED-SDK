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
// Function HasWildParent_BT.HasWildParent_BT_C.ReceiveConditionCheck
struct UHasWildParent_BT_C_ReceiveConditionCheck_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x41 (0x41 - 0x0)
// Function HasWildParent_BT.HasWildParent_BT_C.ExecuteUbergraph_HasWildParent_BT
struct UHasWildParent_BT_C_ExecuteUbergraph_HasWildParent_BT_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_3421[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x8(0x8)(ZeroConstructor)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x10(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	uint8                                        Pad_3422[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x20(0x8)(ZeroConstructor)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x28(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(None)
	uint8                                        Pad_3423[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalDinoCharacter*                  CallFunc_GetFirstValidWildFollowingParentRef_ReturnValue; // 0x38(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(None)
};

}
}


