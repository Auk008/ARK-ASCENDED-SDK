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
// Function WaitForWandering_DK.WaitForWandering_DK_C.ReceiveConditionCheck
struct UWaitForWandering_DK_C_ReceiveConditionCheck_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x32 (0x32 - 0x0)
// Function WaitForWandering_DK.WaitForWandering_DK_C.ExecuteUbergraph_WaitForWandering_DK
struct UWaitForWandering_DK_C_ExecuteUbergraph_WaitForWandering_DK_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_2067[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x8(0x8)(Edit, ZeroConstructor)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x10(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	uint8                                        Pad_2068[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x20(0x8)(Edit, ZeroConstructor)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x28(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x31(0x1)(None)
};

}
}


