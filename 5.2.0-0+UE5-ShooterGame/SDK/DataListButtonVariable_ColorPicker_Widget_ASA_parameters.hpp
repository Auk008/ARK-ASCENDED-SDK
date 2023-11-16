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

// 0x19 (0x19 - 0x0)
// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.ExtraSetupToggledButton
struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_ExtraSetupToggledButton_Params
{
public:
	bool                                         Toggle;                                            // 0x0(0x1)(None)
	bool                                         FromSelectOtherOption;                             // 0x1(0x1)(None)
	uint8                                        Pad_471C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x8(0x8)(Edit, ZeroConstructor)
	class UColorPicker_ASA_Widget_C*             K2Node_DynamicCast_AsColor_Picker_ASA_Widget;      // 0x10(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
};

// 0x30 (0x30 - 0x0)
// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.SetupTextValue
struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_SetupTextValue_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  ReturnText;                                        // 0x18(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.PreConstruct
struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x70 (0x70 - 0x0)
// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.BPExecutedCommandForPrimalUI
struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_BPExecutedCommandForPrimalUI_Params
{
public:
	class FName                                  CommandName;                                       // 0x0(0x8)(None)
	struct FBPNetExecParams                      ExecParams;                                        // 0x8(0x68)(None)
};

// 0x10 (0x10 - 0x0)
// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.UpdateColorPicker
struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_UpdateColorPicker_Params
{
public:
	struct FVector2D                             ColorPickerSliderValue;                            // 0x0(0x10)(None)
};

// 0x118 (0x118 - 0x0)
// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.ExecuteUbergraph_DataListButtonVariable_ColorPicker_Widget_ASA
struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_ExecuteUbergraph_DataListButtonVariable_ColorPicker_Widget_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x10(0x1)(None)
	uint8                                        Pad_471D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_CommandName;                          // 0x14(0x8)(None)
	uint8                                        Pad_471E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPNetExecParams                      K2Node_Event_ExecParams;                           // 0x20(0x68)(Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x88(0x10)(None)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x98(0x10)(None)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0xA8(0x1)(None)
	uint8                                        Pad_471F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             K2Node_Event_ColorPickerSliderValue;               // 0xB0(0x10)(None)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0xC0(0x8)(Edit, ZeroConstructor)
	class UColorPicker_ASA_Widget_C*             K2Node_DynamicCast_AsColor_Picker_ASA_Widget;      // 0xC8(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(None)
	uint8                                        Pad_4720[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0xD4(0x10)(None)
	uint8                                        Pad_4721[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_PCOptionsMenu*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0xE8(0x10)(Edit, ZeroConstructor)
	class UUI_PCOptionsMenu*                     CallFunc_Array_Get_Item;                           // 0xF8(0x8)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x100(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x104(0x1)(None)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x105(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x106(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x107(0x1)(None)
	double                                       CallFunc_MakeVector2D_X_ImplicitCast;              // 0x108(0x8)(None)
	double                                       CallFunc_MakeVector2D_Y_ImplicitCast;              // 0x110(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.SelectedOption__DelegateSignature
struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_SelectedOption__DelegateSignature_Params
{
public:
	bool                                         Toggle;                                            // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.ChangedColor__DelegateSignature
struct UDataListButtonVariable_ColorPicker_Widget_ASA_C_ChangedColor__DelegateSignature_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(None)
};

}
}


