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

// 0x58 (0x58 - 0x0)
// Function DataListButton_ListSession.DataListButton_ListSession_C.OnPaint
struct UDataListButton_ListSession_C_OnPaint_Params
{
public:
	struct FPaintContext                         Context;                                           // 0x0(0x30)(None)
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue;                    // 0x30(0x8)(None)
	int32                                        CallFunc_GetChildIndex_ReturnValue;                // 0x38(0x4)(None)
	bool                                         CallFunc_GetToggledState_ReturnValue;              // 0x3C(0x1)(None)
	uint8                                        Pad_250B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x40(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x44(0x1)(None)
	uint8                                        Pad_250C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x48(0x10)(None)
};

}
}


