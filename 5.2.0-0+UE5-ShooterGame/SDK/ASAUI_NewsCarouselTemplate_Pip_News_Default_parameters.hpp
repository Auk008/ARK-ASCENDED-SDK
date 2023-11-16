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
// Function ASAUI_NewsCarouselTemplate_Pip_News_Default.ASAUI_NewsCarouselTemplate_Pip_News_Default_C.EntryFocusStart
struct UASAUI_NewsCarouselTemplate_Pip_News_Default_C_EntryFocusStart_Params
{
public:
	bool                                         bInstigatedByAutoRollover;                         // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Pip_News_Default.ASAUI_NewsCarouselTemplate_Pip_News_Default_C.EntryFocusEnd
struct UASAUI_NewsCarouselTemplate_Pip_News_Default_C_EntryFocusEnd_Params
{
public:
	bool                                         bInstigatedByAutoRollover;                         // 0x0(0x1)(None)
};

// 0x20 (0x20 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Pip_News_Default.ASAUI_NewsCarouselTemplate_Pip_News_Default_C.ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Pip_News_Default
struct UASAUI_NewsCarouselTemplate_Pip_News_Default_C_ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Pip_News_Default_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         K2Node_Event_bInstigatedByAutoRollover_1;          // 0x4(0x1)(None)
	uint8                                        Pad_32B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x8(0x8)(ZeroConstructor)
	bool                                         K2Node_Event_bInstigatedByAutoRollover;            // 0x10(0x1)(None)
	uint8                                        Pad_32B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x18(0x8)(None)
};

}
}


