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
// Function AllowWandering.AllowWandering_C.ReceiveExecute
struct UAllowWandering_C_ReceiveExecute_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x3A (0x3A - 0x0)
// Function AllowWandering.AllowWandering_C.ExecuteUbergraph_AllowWandering
struct UAllowWandering_C_ExecuteUbergraph_AllowWandering_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_320E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x8(0x8)(ZeroConstructor)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x10(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	uint8                                        Pad_320F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x20(0x8)(ZeroConstructor)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x28(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x31(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x32(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x33(0x1)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x34(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x35(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x36(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x37(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x38(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x39(0x1)(None)
};

}
}


