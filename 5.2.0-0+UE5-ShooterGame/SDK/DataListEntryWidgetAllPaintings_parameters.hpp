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

// 0x54 (0x54 - 0x0)
// Function DataListEntryWidgetAllPaintings.DataListEntryWidgetAllPaintings_C.OnPaint
struct UDataListEntryWidgetAllPaintings_C_OnPaint_Params
{
public:
	struct FPaintContext                         Context;                                           // 0x0(0x30)(None)
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue;                    // 0x30(0x8)(None)
	int32                                        CallFunc_GetChildIndex_ReturnValue;                // 0x38(0x4)(None)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x3C(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x40(0x1)(None)
	uint8                                        Pad_2C9B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x44(0x10)(None)
};

// 0x2C (0x2C - 0x0)
// Function DataListEntryWidgetAllPaintings.DataListEntryWidgetAllPaintings_C.ExecuteUbergraph_DataListEntryWidgetAllPaintings
struct UDataListEntryWidgetAllPaintings_C_ExecuteUbergraph_DataListEntryWidgetAllPaintings_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_2C9C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelWidget*                          CallFunc_GetParent_ReturnValue;                    // 0x8(0x8)(None)
	int32                                        CallFunc_GetChildIndex_ReturnValue;                // 0x10(0x4)(None)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x14(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x18(0x1)(None)
	uint8                                        Pad_2C9D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x1C(0x10)(None)
};

}
}


