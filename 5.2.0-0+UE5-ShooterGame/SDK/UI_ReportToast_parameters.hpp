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

// 0x8 (0x8 - 0x0)
// Function UI_ReportToast.UI_ReportToast_C.OnClicked
struct UUI_ReportToast_C_OnClicked_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_ReportToast.UI_ReportToast_C.PreConstruct
struct UUI_ReportToast_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_ReportToast.UI_ReportToast_C.ExecuteUbergraph_UI_ReportToast
struct UUI_ReportToast_C_ExecuteUbergraph_UI_ReportToast_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_447F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x10(0x1)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x11(0x1)(None)
	uint8                                        Pad_4480[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x18(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(None)
};

}
}


