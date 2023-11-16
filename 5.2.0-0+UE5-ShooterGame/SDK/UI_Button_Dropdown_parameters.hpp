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
// Function UI_Button_Dropdown.UI_Button_Dropdown_C.PreConstruct
struct UUI_Button_Dropdown_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_Button_Dropdown.UI_Button_Dropdown_C.ExecuteUbergraph_UI_Button_Dropdown
struct UUI_Button_Dropdown_C_ExecuteUbergraph_UI_Button_Dropdown_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(None)
	uint8                                        Pad_21F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x10(0x8)(ZeroConstructor)
	float                                        CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x18(0x4)(None)
	uint8                                        Pad_21F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x20(0x8)(ZeroConstructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_3;              // 0x28(0x8)(None)
};

}
}


