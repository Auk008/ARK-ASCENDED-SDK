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
// Function UI_Prompt_GoToComments.UI_Prompt_GoToComments_C.BPEscapeClosed
struct UUI_Prompt_GoToComments_C_BPEscapeClosed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_Prompt_GoToComments.UI_Prompt_GoToComments_C.BPHighlightWidgetOnStart
struct UUI_Prompt_GoToComments_C_BPHighlightWidgetOnStart_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1A (0x1A - 0x0)
// Function UI_Prompt_GoToComments.UI_Prompt_GoToComments_C.BPGamepadReleased
struct UUI_Prompt_GoToComments_C_BPGamepadReleased_Params
{
public:
	struct FKey                                  TheKey;                                            // 0x0(0x18)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x19(0x1)(None)
};

// 0x3C (0x3C - 0x0)
// Function UI_Prompt_GoToComments.UI_Prompt_GoToComments_C.Tick
struct UUI_Prompt_GoToComments_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x40 (0x40 - 0x0)
// Function UI_Prompt_GoToComments.UI_Prompt_GoToComments_C.ExecuteUbergraph_UI_Prompt_GoToComments
struct UUI_Prompt_GoToComments_C_ExecuteUbergraph_UI_Prompt_GoToComments_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(None)
};

}
}


