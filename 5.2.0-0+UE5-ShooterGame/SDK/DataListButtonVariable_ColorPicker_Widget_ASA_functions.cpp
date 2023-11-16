#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C
// (None)

class UClass* UDataListButtonVariable_ColorPicker_Widget_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListButtonVariable_ColorPicker_Widget_ASA_C");

	return Clss;
}


// DataListButtonVariable_ColorPicker_Widget_ASA_C DataListButtonVariable_ColorPicker_Widget_ASA.Default__DataListButtonVariable_ColorPicker_Widget_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListButtonVariable_ColorPicker_Widget_ASA_C* UDataListButtonVariable_ColorPicker_Widget_ASA_C::GetDefaultObj()
{
	static class UDataListButtonVariable_ColorPicker_Widget_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListButtonVariable_ColorPicker_Widget_ASA_C*>(UDataListButtonVariable_ColorPicker_Widget_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.ExtraSetupToggledButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Toggle                                                           (None)
// bool                               FromSelectOtherOption                                            (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (Edit, ZeroConstructor)
// class UColorPicker_ASA_Widget_C*   K2Node_DynamicCast_AsColor_Picker_ASA_Widget                     (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void UDataListButtonVariable_ColorPicker_Widget_ASA_C::ExtraSetupToggledButton(bool Toggle, bool FromSelectOtherOption, class UWidget* CallFunc_GetChildAt_ReturnValue, class UColorPicker_ASA_Widget_C* K2Node_DynamicCast_AsColor_Picker_ASA_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_ColorPicker_Widget_ASA_C", "ExtraSetupToggledButton");

	Params::UDataListButtonVariable_ColorPicker_Widget_ASA_C_ExtraSetupToggledButton_Params Parms{};

	Parms.Toggle = Toggle;
	Parms.FromSelectOtherOption = FromSelectOtherOption;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsColor_Picker_ASA_Widget = K2Node_DynamicCast_AsColor_Picker_ASA_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.SetupTextValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        ReturnText                                                       (None)

void UDataListButtonVariable_ColorPicker_Widget_ASA_C::SetupTextValue(class FText Text, class FText ReturnText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_ColorPicker_Widget_ASA_C", "SetupTextValue");

	Params::UDataListButtonVariable_ColorPicker_Widget_ASA_C_SetupTextValue_Params Parms{};

	Parms.Text = Text;
	Parms.ReturnText = ReturnText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UDataListButtonVariable_ColorPicker_Widget_ASA_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_ColorPicker_Widget_ASA_C", "PreConstruct");

	Params::UDataListButtonVariable_ColorPicker_Widget_ASA_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDataListButtonVariable_ColorPicker_Widget_ASA_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_ColorPicker_Widget_ASA_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.BPExecutedCommandForPrimalUI
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        CommandName                                                      (None)
// struct FBPNetExecParams            ExecParams                                                       (None)

void UDataListButtonVariable_ColorPicker_Widget_ASA_C::BPExecutedCommandForPrimalUI(class FName CommandName, const struct FBPNetExecParams& ExecParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_ColorPicker_Widget_ASA_C", "BPExecutedCommandForPrimalUI");

	Params::UDataListButtonVariable_ColorPicker_Widget_ASA_C_BPExecutedCommandForPrimalUI_Params Parms{};

	Parms.CommandName = CommandName;
	Parms.ExecParams = ExecParams;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.UpdateColorPicker
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   ColorPickerSliderValue                                           (None)

void UDataListButtonVariable_ColorPicker_Widget_ASA_C::UpdateColorPicker(const struct FVector2D& ColorPickerSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_ColorPicker_Widget_ASA_C", "UpdateColorPicker");

	Params::UDataListButtonVariable_ColorPicker_Widget_ASA_C_UpdateColorPicker_Params Parms{};

	Parms.ColorPickerSliderValue = ColorPickerSliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.ExecuteUbergraph_DataListButtonVariable_ColorPicker_Widget_ASA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)
// class FName                        K2Node_Event_CommandName                                         (None)
// struct FBPNetExecParams            K2Node_Event_ExecParams                                          (Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (None)
// bool                               K2Node_SwitchName_CmpSuccess                                     (None)
// struct FVector2D                   K2Node_Event_ColorPickerSliderValue                              (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (Edit, ZeroConstructor)
// class UColorPicker_ASA_Widget_C*   K2Node_DynamicCast_AsColor_Picker_ASA_Widget                     (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (None)
// TArray<class UUI_PCOptionsMenu*>   CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (Edit, ZeroConstructor)
// class UUI_PCOptionsMenu*           CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// double                             CallFunc_MakeVector2D_X_ImplicitCast                             (None)
// double                             CallFunc_MakeVector2D_Y_ImplicitCast                             (None)

void UDataListButtonVariable_ColorPicker_Widget_ASA_C::ExecuteUbergraph_DataListButtonVariable_ColorPicker_Widget_ASA(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool K2Node_SwitchName_CmpSuccess, const struct FVector2D& K2Node_Event_ColorPickerSliderValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UColorPicker_ASA_Widget_C* K2Node_DynamicCast_AsColor_Picker_ASA_Widget, bool K2Node_DynamicCast_bSuccess, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const TArray<class UUI_PCOptionsMenu*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_PCOptionsMenu* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_ColorPicker_Widget_ASA_C", "ExecuteUbergraph_DataListButtonVariable_ColorPicker_Widget_ASA");

	Params::UDataListButtonVariable_ColorPicker_Widget_ASA_C_ExecuteUbergraph_DataListButtonVariable_ColorPicker_Widget_ASA_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_CommandName = K2Node_Event_CommandName;
	Parms.K2Node_Event_ExecParams = K2Node_Event_ExecParams;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_Event_ColorPickerSliderValue = K2Node_Event_ColorPickerSliderValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsColor_Picker_ASA_Widget = K2Node_DynamicCast_AsColor_Picker_ASA_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_MakeVector2D_X_ImplicitCast = CallFunc_MakeVector2D_X_ImplicitCast;
	Parms.CallFunc_MakeVector2D_Y_ImplicitCast = CallFunc_MakeVector2D_Y_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.SelectedOption__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Toggle                                                           (None)

void UDataListButtonVariable_ColorPicker_Widget_ASA_C::SelectedOption__DelegateSignature(bool Toggle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_ColorPicker_Widget_ASA_C", "SelectedOption__DelegateSignature");

	Params::UDataListButtonVariable_ColorPicker_Widget_ASA_C_SelectedOption__DelegateSignature_Params Parms{};

	Parms.Toggle = Toggle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C.ChangedColor__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (None)

void UDataListButtonVariable_ColorPicker_Widget_ASA_C::ChangedColor__DelegateSignature(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_ColorPicker_Widget_ASA_C", "ChangedColor__DelegateSignature");

	Params::UDataListButtonVariable_ColorPicker_Widget_ASA_C_ChangedColor__DelegateSignature_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}

}


