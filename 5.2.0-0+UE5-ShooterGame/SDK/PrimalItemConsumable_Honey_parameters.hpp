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

// 0x19 (0x19 - 0x0)
// Function PrimalItemConsumable_Honey.PrimalItemConsumable_Honey_C.BPNotifyDropped
struct UPrimalItemConsumable_Honey_C_BPNotifyDropped_Params
{
public:
	class APrimalCharacter*                      FromCharacter;                                     // 0x0(0x8)(ZeroConstructor)
	bool                                         bWasThrown;                                        // 0x8(0x1)(None)
	uint8                                        Pad_45D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalBuff*                           CallFunc_StaticAddBuff_ReturnValue;                // 0x10(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(None)
};

}
}


