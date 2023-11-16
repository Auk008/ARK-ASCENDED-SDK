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
// Function GetPointBehindParentAwayFromAttacker_TK.GetPointBehindParentAwayFromAttacker_TK_C.ReceiveExecute
struct UGetPointBehindParentAwayFromAttacker_TK_C_ReceiveExecute_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x49 (0x49 - 0x0)
// Function GetPointBehindParentAwayFromAttacker_TK.GetPointBehindParentAwayFromAttacker_TK_C.ExecuteUbergraph_GetPointBehindParentAwayFromAttacker_TK
struct UGetPointBehindParentAwayFromAttacker_TK_C_ExecuteUbergraph_GetPointBehindParentAwayFromAttacker_TK_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_3952[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x8(0x8)(Edit, ZeroConstructor)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x10(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	uint8                                        Pad_3953[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x20(0x8)(Edit, ZeroConstructor)
	class AActor*                                CallFunc_GetTarget_ReturnValue;                    // 0x28(0x8)(Edit, ZeroConstructor)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x30(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(None)
	uint8                                        Pad_3954[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalDinoCharacter*                  CallFunc_GetFirstValidWildFollowingParentRef_ReturnValue; // 0x40(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(None)
};

}
}


