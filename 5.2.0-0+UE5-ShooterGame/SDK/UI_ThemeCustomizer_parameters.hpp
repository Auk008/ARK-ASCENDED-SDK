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
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.UpdateColorPickerEnabled
struct UUI_ThemeCustomizer_C_UpdateColorPickerEnabled_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
};

// 0x10A (0x10A - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.RestoreToDefaults
struct UUI_ThemeCustomizer_C_RestoreToDefaults_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(None)
	uint8                                        Pad_6EF[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreThemeRowData                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x8(0x100)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x108(0x1)(None)
	bool                                         CallFunc_DoesDataTableRowExist_ReturnValue;        // 0x109(0x1)(None)
};

// 0x108 (0x108 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.SaveToHistory
struct UUI_ThemeCustomizer_C_SaveToHistory_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
	uint8                                        Pad_6F0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreThemeRowData                   CallFunc_Array_Get_Item;                           // 0x8(0x100)(None)
};

// 0x114 (0x114 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.ForwardHistoryAStep
struct UUI_ThemeCustomizer_C_ForwardHistoryAStep_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(None)
	uint8                                        Pad_6F9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreThemeRowData                   CallFunc_Array_Get_Item;                           // 0x8(0x100)(None)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x108(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x10C(0x1)(None)
	uint8                                        Pad_6FA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x110(0x4)(None)
};

// 0x115 (0x115 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.RevertBackAStepInHistory
struct UUI_ThemeCustomizer_C_RevertBackAStepInHistory_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x5(0x1)(None)
	uint8                                        Pad_701[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(None)
	uint8                                        Pad_702[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreThemeRowData                   CallFunc_Array_Get_Item;                           // 0x10(0x100)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x110(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x114(0x1)(None)
};

// 0x228 (0x228 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.OnKeyDown
struct UUI_ThemeCustomizer_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(ContainsInstancedReference, SimpleDisplay, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	struct FInputEvent                           CallFunc_GetInputEventFromKeyEvent_ReturnValue;    // 0x130(0x20)(SimpleDisplay, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x150(0x18)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_InputEvent_IsLeftControlDown_ReturnValue; // 0x168(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x169(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x16A(0x1)(None)
	bool                                         CallFunc_InputEvent_IsLeftControlDown_ReturnValue_1; // 0x16B(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x16C(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x16D(0x1)(None)
	uint8                                        Pad_710[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x170(0xB8)(None)
};

// 0x108 (0x108 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.ResetHistory
struct UUI_ThemeCustomizer_C_ResetHistory_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
	uint8                                        Pad_711[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreThemeRowData                   CallFunc_Array_Get_Item;                           // 0x8(0x100)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.AddToHistory
struct UUI_ThemeCustomizer_C_AddToHistory_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5(0x1)(None)
	uint8                                        Pad_714[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0xC(0x1)(None)
	uint8                                        Pad_715[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x10(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x14(0x4)(None)
};

// 0x2 (0x2 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.CheckIfHistoryDirty
struct UUI_ThemeCustomizer_C_CheckIfHistoryDirty_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x1(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.UpdateSliderActivated
struct UUI_ThemeCustomizer_C_UpdateSliderActivated_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.GetThemeSaveDirectory
struct UUI_ThemeCustomizer_C_GetThemeSaveDirectory_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_GetProjectDirectory_ReturnValue;          // 0x10(0x10)(AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(None)
};

// 0x3C (0x3C - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.Tick
struct UUI_ThemeCustomizer_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.OnColorChangedByColorPicker
struct UUI_ThemeCustomizer_C_OnColorChangedByColorPicker_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(None)
};

// 0x98 (0x98 - 0x0)
// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.ExecuteUbergraph_UI_ThemeCustomizer
struct UUI_ThemeCustomizer_C_ExecuteUbergraph_UI_ThemeCustomizer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(None)
	uint8                                        Pad_723[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(Edit, ZeroConstructor)
	struct FLinearColor                          CallFunc_GetColor_Color;                           // 0x18(0x10)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x38(0x10)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x48(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x49(0x1)(None)
	uint8                                        Pad_724[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4C(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x84(0x4)(None)
	struct FLinearColor                          K2Node_CustomEvent_Color;                          // 0x88(0x10)(None)
};

}
}


