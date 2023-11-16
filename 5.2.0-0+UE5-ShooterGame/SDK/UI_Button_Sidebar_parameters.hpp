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
// Function UI_Button_Sidebar.UI_Button_Sidebar_C.UpdateThemeData
struct UUI_Button_Sidebar_C_UpdateThemeData_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_Button_Sidebar.UI_Button_Sidebar_C.PreConstruct
struct UUI_Button_Sidebar_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_Button_Sidebar.UI_Button_Sidebar_C.UpdateSlelectionTo
struct UUI_Button_Sidebar_C_UpdateSlelectionTo_Params
{
public:
	bool                                         Condition;                                         // 0x0(0x1)(None)
};

// 0x2C (0x2C - 0x0)
// Function UI_Button_Sidebar.UI_Button_Sidebar_C.ExecuteUbergraph_UI_Button_Sidebar
struct UUI_Button_Sidebar_C_ExecuteUbergraph_UI_Button_Sidebar_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5(0x1)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x6(0x1)(None)
	bool                                         K2Node_CustomEvent_Condition;                      // 0x7(0x1)(None)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(Edit, ZeroConstructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x10(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x18(0x1)(None)
	uint8                                        Pad_3276[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(None)
};

}
}


