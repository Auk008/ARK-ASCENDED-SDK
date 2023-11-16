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

// 0x11 (0x11 - 0x0)
// Function UI_CustomizeSlot_SideBar.UI_CustomizeSlot_SideBar_C.SetColor
struct UUI_CustomizeSlot_SideBar_C_SetColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(None)
};

// 0x110 (0x110 - 0x0)
// Function UI_CustomizeSlot_SideBar.UI_CustomizeSlot_SideBar_C.GetColor
struct UUI_CustomizeSlot_SideBar_C_GetColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(None)
	struct FCFCoreThemeRowData                   CallFunc_GetCurrentTheme_CurrentTheme;             // 0x10(0x100)(None)
};

}
}


