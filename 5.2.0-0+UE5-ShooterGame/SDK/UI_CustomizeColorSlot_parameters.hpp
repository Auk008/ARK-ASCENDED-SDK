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

// 0x101 (0x101 - 0x0)
// Function UI_CustomizeColorSlot.UI_CustomizeColorSlot_C.GetCurrentTheme
struct UUI_CustomizeColorSlot_C_GetCurrentTheme_Params
{
public:
	struct FCFCoreThemeRowData                   CurrentTheme;                                      // 0x0(0x100)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x100(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_CustomizeColorSlot.UI_CustomizeColorSlot_C.GetColor
struct UUI_CustomizeColorSlot_C_GetColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(None)
};

// 0x11 (0x11 - 0x0)
// Function UI_CustomizeColorSlot.UI_CustomizeColorSlot_C.SetColor
struct UUI_CustomizeColorSlot_C_SetColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_CustomizeColorSlot.UI_CustomizeColorSlot_C.PreConstruct
struct UUI_CustomizeColorSlot_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x5C (0x5C - 0x0)
// Function UI_CustomizeColorSlot.UI_CustomizeColorSlot_C.ExecuteUbergraph_UI_CustomizeColorSlot
struct UUI_CustomizeColorSlot_C_ExecuteUbergraph_UI_CustomizeColorSlot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(None)
	uint8                                        Pad_107[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(Edit, ZeroConstructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(None)
	TArray<class UUI_ThemeCustomizer_C*>         CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x20(0x10)(Edit, ZeroConstructor)
	class UUI_ThemeCustomizer_C*                 CallFunc_Array_Get_Item;                           // 0x30(0x8)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x38(0x1)(None)
	uint8                                        Pad_109[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetColor_Color;                           // 0x3C(0x10)(None)
	struct FLinearColor                          CallFunc_GetColor_Color_1;                         // 0x4C(0x10)(None)
};

}
}


