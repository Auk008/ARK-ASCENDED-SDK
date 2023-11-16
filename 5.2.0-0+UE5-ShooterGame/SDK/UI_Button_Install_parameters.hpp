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

// 0x2 (0x2 - 0x0)
// Function UI_Button_Install.UI_Button_Install_C.UpdateButtonSwitcherStatus
struct UUI_Button_Install_C_UpdateButtonSwitcherStatus_Params
{
public:
	enum class EInstallStatus                    Selection;                                         // 0x0(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_Button_Install.UI_Button_Install_C.UpdateButtonCollor
struct UUI_Button_Install_C_UpdateButtonCollor_Params
{
public:
	enum class ENUM_Install                      ButtonStatus;                                      // 0x0(0x1)(None)
};

// 0x5 (0x5 - 0x0)
// Function UI_Button_Install.UI_Button_Install_C.SetProgress
struct UUI_Button_Install_C_SetProgress_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(None)
	enum class ELibraryProgressState             InstalationState;                                  // 0x4(0x1)(None)
};

// 0x24 (0x24 - 0x0)
// Function UI_Button_Install.UI_Button_Install_C.ExecuteUbergraph_UI_Button_Install
struct UUI_Button_Install_C_ExecuteUbergraph_UI_Button_Install_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5(0x1)(None)
	uint8                                        Pad_4AE9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Amount;                         // 0x8(0x4)(None)
	enum class ELibraryProgressState             K2Node_CustomEvent_InstalationState;               // 0xC(0x1)(None)
	uint8                                        Pad_4AEA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetProcessedBarProgress_ReturnValue;      // 0x10(0x8)(None)
	bool                                         CallFunc_GetProcessedBarProgress_MaintainPreviousValue; // 0x18(0x1)(None)
	uint8                                        Pad_4AEB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x1C(0x4)(None)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast_1;      // 0x20(0x4)(None)
};

}
}


