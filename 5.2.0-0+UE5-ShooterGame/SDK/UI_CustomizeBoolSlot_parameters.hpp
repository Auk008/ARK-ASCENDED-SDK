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
// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.GetCurrentTheme
struct UUI_CustomizeBoolSlot_C_GetCurrentTheme_Params
{
public:
	struct FCFCoreThemeRowData                   CurrentTheme;                                      // 0x0(0x100)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x100(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.GetColor
struct UUI_CustomizeBoolSlot_C_GetColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.SetColor
struct UUI_CustomizeBoolSlot_C_SetColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.PreConstruct
struct UUI_CustomizeBoolSlot_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.BndEvt__UI_CustomizeBoolSlot_CheckBox_285_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
struct UUI_CustomizeBoolSlot_C_BndEvt__UI_CustomizeBoolSlot_CheckBox_285_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(None)
};

// 0x2A (0x2A - 0x0)
// Function UI_CustomizeBoolSlot.UI_CustomizeBoolSlot_C.ExecuteUbergraph_UI_CustomizeBoolSlot
struct UUI_CustomizeBoolSlot_C_ExecuteUbergraph_UI_CustomizeBoolSlot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(None)
	enum class ECheckBoxState                    Temp_byte_Variable;                                // 0x5(0x1)(None)
	enum class ECheckBoxState                    Temp_byte_Variable_1;                              // 0x6(0x1)(None)
	enum class ECheckBoxState                    K2Node_Select_Default;                             // 0x7(0x1)(None)
	TArray<class UUI_ThemeCustomizer_C*>         CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x8(0x10)(Edit, ZeroConstructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x18(0x1)(None)
	uint8                                        Pad_4B34[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ThemeCustomizer_C*                 CallFunc_Array_Get_Item;                           // 0x20(0x8)(None)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked;             // 0x28(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(None)
};

}
}


