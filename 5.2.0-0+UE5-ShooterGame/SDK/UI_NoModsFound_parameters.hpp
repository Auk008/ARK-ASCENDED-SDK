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

// 0x3C (0x3C - 0x0)
// Function UI_NoModsFound.UI_NoModsFound_C.Tick
struct UUI_NoModsFound_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x40 (0x40 - 0x0)
// Function UI_NoModsFound.UI_NoModsFound_C.ExecuteUbergraph_UI_NoModsFound
struct UUI_NoModsFound_C_ExecuteUbergraph_UI_NoModsFound_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(None)
};

}
}


