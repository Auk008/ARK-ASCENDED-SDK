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

// 0x1A (0x1A - 0x0)
// Function Deco_IsTargetSubmerged.Deco_IsTargetSubmerged_C.ReceiveConditionCheck
struct UDeco_IsTargetSubmerged_C_ReceiveConditionCheck_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(ZeroConstructor)
	class AActor*                                CallFunc_GetBlackboardValueAsActor_ReturnValue;    // 0x8(0x8)(ZeroConstructor)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x10(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	bool                                         CallFunc_IsSubmerged_ReturnValue;                  // 0x19(0x1)(None)
};

}
}


