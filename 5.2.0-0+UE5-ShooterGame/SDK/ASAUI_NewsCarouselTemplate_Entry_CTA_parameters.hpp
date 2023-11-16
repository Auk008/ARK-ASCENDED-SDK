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

// 0x10 (0x10 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C.BlueprintInit
struct UASAUI_NewsCarouselTemplate_Entry_CTA_C_BlueprintInit_Params
{
public:
	class FString                                RawExtraData;                                      // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C.EntryFocusStart
struct UASAUI_NewsCarouselTemplate_Entry_CTA_C_EntryFocusStart_Params
{
public:
	bool                                         bInstigatedByAutoRollover;                         // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C.EntryFocusEnd
struct UASAUI_NewsCarouselTemplate_Entry_CTA_C_EntryFocusEnd_Params
{
public:
	bool                                         bInstigatedByAutoRollover;                         // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C.EntryFocusTick
struct UASAUI_NewsCarouselTemplate_Entry_CTA_C_EntryFocusTick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// Function ASAUI_NewsCarouselTemplate_Entry_CTA.ASAUI_NewsCarouselTemplate_Entry_CTA_C.ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_CTA
struct UASAUI_NewsCarouselTemplate_Entry_CTA_C_ExecuteUbergraph_ASAUI_NewsCarouselTemplate_Entry_CTA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_2374[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_RawExtraData;                         // 0x8(0x10)(None)
	bool                                         K2Node_Event_bInstigatedByAutoRollover_1;          // 0x18(0x1)(None)
	bool                                         K2Node_Event_bInstigatedByAutoRollover;            // 0x19(0x1)(None)
	uint8                                        Pad_2375[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaTime;                            // 0x1C(0x4)(None)
};

}
}


