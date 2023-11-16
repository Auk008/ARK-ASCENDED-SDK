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
// Function BeginFly_TK.BeginFly_TK_C.ReceiveExecute
struct UBeginFly_TK_C_ReceiveExecute_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x69 (0x69 - 0x0)
// Function BeginFly_TK.BeginFly_TK_C.ExecuteUbergraph_BeginFly_TK
struct UBeginFly_TK_C_ExecuteUbergraph_BeginFly_TK_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_3898[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBehaviorTreeComponent*                CallFunc_GetBehaviorTree_ReturnValue;              // 0x8(0x8)(Edit, ZeroConstructor)
	class UBTNode*                               CallFunc_FindService_ReturnValue;                  // 0x10(0x8)(Edit, ZeroConstructor)
	class UBTNode*                               CallFunc_FindService_ReturnValue_1;                // 0x18(0x8)(Edit, ZeroConstructor)
	class UBTService_BlueprintBase*              K2Node_DynamicCast_AsBTService_Blueprint_Base;     // 0x20(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(None)
	uint8                                        Pad_3899[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBTService_BlueprintBase*              K2Node_DynamicCast_AsBTService_Blueprint_Base_1;   // 0x30(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(None)
	uint8                                        Pad_389A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_OwnerActor;                           // 0x40(0x8)(Edit, ZeroConstructor)
	class APrimalDinoAIController*               K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x48(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x50(0x1)(None)
	uint8                                        Pad_389B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x58(0x8)(Edit, ZeroConstructor)
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x60(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x68(0x1)(None)
};

}
}


