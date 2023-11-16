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

// 0x9 (0x9 - 0x0)
// Function EggIncubatorInterface.EggIncubatorInterface_C.IsEggItemAllowed
struct IEggIncubatorInterface_C_IsEggItemAllowed_Params
{
public:
	class UPrimalItemConsumable_Egg_C*           EggItem;                                           // 0x0(0x8)(None)
	bool                                         IsAllowed;                                         // 0x8(0x1)(None)
};

// 0xD (0xD - 0x0)
// Function EggIncubatorInterface.EggIncubatorInterface_C.GetItemDisplaySlot
struct IEggIncubatorInterface_C_GetItemDisplaySlot_Params
{
public:
	class UPrimalItem*                           ForItem;                                           // 0x0(0x8)(None)
	int32                                        InSlot;                                            // 0x8(0x4)(None)
	bool                                         SlotFound;                                         // 0xC(0x1)(None)
};

}
}


