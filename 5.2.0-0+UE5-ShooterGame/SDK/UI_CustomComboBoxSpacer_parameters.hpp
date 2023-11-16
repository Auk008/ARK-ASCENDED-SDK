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

// 0x1 (0x1 - 0x0)
// Function UI_CustomComboBoxSpacer.UI_CustomComboBoxSpacer_C.PreConstruct
struct UUI_CustomComboBoxSpacer_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_CustomComboBoxSpacer.UI_CustomComboBoxSpacer_C.ExecuteUbergraph_UI_CustomComboBoxSpacer
struct UUI_CustomComboBoxSpacer_C_ExecuteUbergraph_UI_CustomComboBoxSpacer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(None)
	uint8                                        Pad_3879[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x8(0x10)(None)
};

}
}


