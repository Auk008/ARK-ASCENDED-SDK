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
// Function IsFlying_DK.IsFlying_DK_C.ReceiveConditionCheck
struct UIsFlying_DK_C_ReceiveConditionCheck_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function IsFlying_DK.IsFlying_DK_C.ReceiveExecutionStart
struct UIsFlying_DK_C_ReceiveExecutionStart_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x9 (0x9 - 0x0)
// Function IsFlying_DK.IsFlying_DK_C.ReceiveExecutionFinish
struct UIsFlying_DK_C_ReceiveExecutionFinish_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
	enum class EBTNodeResult                     NodeResult;                                        // 0x8(0x1)(None)
};

// 0x9B (0x9B - 0x0)
// Function IsFlying_DK.IsFlying_DK_C.ExecuteUbergraph_IsFlying_DK
struct UIsFlying_DK_C_ExecuteUbergraph_IsFlying_DK_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_3CC5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor_1;                         // 0x8(0x8)(Edit, ZeroConstructor)
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x10(0x8)(Edit, ZeroConstructor)
	enum class EBTNodeResult                     K2Node_Event_NodeResult;                           // 0x18(0x1)(None)
	uint8                                        Pad_3CC6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x20(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
	uint8                                        Pad_3CC7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController_1;   // 0x30(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(None)
	uint8                                        Pad_3CC8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalPathFollowingComponent*         CallFunc_PFCFromAIController_ReturnValue;          // 0x40(0x8)(Edit, ZeroConstructor)
	class UPrimalPathFollowingComponent*         CallFunc_PFCFromAIController_ReturnValue_1;        // 0x48(0x8)(Edit, ZeroConstructor)
	class UPrimalPathFollowingComponent*         CallFunc_PFCFromAIController_ReturnValue_2;        // 0x50(0x8)(Edit, ZeroConstructor)
	class UPrimalPathFollowingComponent*         CallFunc_PFCFromAIController_ReturnValue_3;        // 0x58(0x8)(Edit, ZeroConstructor)
	class UPrimalPathFollowingComponent*         CallFunc_PFCFromAIController_ReturnValue_4;        // 0x60(0x8)(Edit, ZeroConstructor)
	class UPrimalPathFollowingComponent*         CallFunc_PFCFromAIController_ReturnValue_5;        // 0x68(0x8)(Edit, ZeroConstructor)
	class AActor*                                K2Node_Event_OwnerActor_2;                         // 0x70(0x8)(Edit, ZeroConstructor)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController_2;   // 0x78(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x80(0x1)(None)
	uint8                                        Pad_3CC9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x88(0x8)(Edit, ZeroConstructor)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x90(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x98(0x1)(None)
	bool                                         CallFunc_HasBuffPreventingFlight_ReturnValue;      // 0x99(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x9A(0x1)(None)
};

}
}


