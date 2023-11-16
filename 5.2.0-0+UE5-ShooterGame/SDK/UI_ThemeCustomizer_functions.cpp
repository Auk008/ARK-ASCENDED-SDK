#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ThemeCustomizer.UI_ThemeCustomizer_C
// (None)

class UClass* UUI_ThemeCustomizer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ThemeCustomizer_C");

	return Clss;
}


// UI_ThemeCustomizer_C UI_ThemeCustomizer.Default__UI_ThemeCustomizer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ThemeCustomizer_C* UUI_ThemeCustomizer_C::GetDefaultObj()
{
	static class UUI_ThemeCustomizer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ThemeCustomizer_C*>(UUI_ThemeCustomizer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.UpdateColorPickerEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_ThemeCustomizer_C::UpdateColorPickerEnabled(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "UpdateColorPickerEnabled");

	Params::UUI_ThemeCustomizer_C_UpdateColorPickerEnabled_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.RestoreToDefaults
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// struct FCFCoreThemeRowData         CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (None)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (None)

void UUI_ThemeCustomizer_C::RestoreToDefaults(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FCFCoreThemeRowData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_DoesDataTableRowExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "RestoreToDefaults");

	Params::UUI_ThemeCustomizer_C_RestoreToDefaults_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.SaveToHistory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// struct FCFCoreThemeRowData         CallFunc_Array_Get_Item                                          (None)

void UUI_ThemeCustomizer_C::SaveToHistory(bool CallFunc_IsValid_ReturnValue, const struct FCFCoreThemeRowData& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "SaveToHistory");

	Params::UUI_ThemeCustomizer_C_SaveToHistory_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.ForwardHistoryAStep
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// struct FCFCoreThemeRowData         CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)

void UUI_ThemeCustomizer_C::ForwardHistoryAStep(int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, const struct FCFCoreThemeRowData& CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "ForwardHistoryAStep");

	Params::UUI_ThemeCustomizer_C_ForwardHistoryAStep_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.RevertBackAStepInHistory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// struct FCFCoreThemeRowData         CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (None)

void UUI_ThemeCustomizer_C::RevertBackAStepInHistory(int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FCFCoreThemeRowData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "RevertBackAStepInHistory");

	Params::UUI_ThemeCustomizer_C_RevertBackAStepInHistory_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FKeyEvent                   InKeyEvent                                                       (AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// struct FEventReply                 ReturnValue                                                      (ContainsInstancedReference, SimpleDisplay, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// struct FInputEvent                 CallFunc_GetInputEventFromKeyEvent_ReturnValue                   (SimpleDisplay, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPrivate)
// bool                               CallFunc_InputEvent_IsLeftControlDown_ReturnValue                (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (None)
// bool                               CallFunc_InputEvent_IsLeftControlDown_ReturnValue_1              (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

void UUI_ThemeCustomizer_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FInputEvent& CallFunc_GetInputEventFromKeyEvent_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_InputEvent_IsLeftControlDown_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_InputEvent_IsLeftControlDown_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "OnKeyDown");

	Params::UUI_ThemeCustomizer_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetInputEventFromKeyEvent_ReturnValue = CallFunc_GetInputEventFromKeyEvent_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_InputEvent_IsLeftControlDown_ReturnValue = CallFunc_InputEvent_IsLeftControlDown_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_InputEvent_IsLeftControlDown_ReturnValue_1 = CallFunc_InputEvent_IsLeftControlDown_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.ResetHistory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// struct FCFCoreThemeRowData         CallFunc_Array_Get_Item                                          (None)

void UUI_ThemeCustomizer_C::ResetHistory(bool CallFunc_IsValid_ReturnValue, const struct FCFCoreThemeRowData& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "ResetHistory");

	Params::UUI_ThemeCustomizer_C_ResetHistory_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.AddToHistory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (None)

void UUI_ThemeCustomizer_C::AddToHistory(int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "AddToHistory");

	Params::UUI_ThemeCustomizer_C_AddToHistory_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.CheckIfHistoryDirty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (None)

void UUI_ThemeCustomizer_C::CheckIfHistoryDirty(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "CheckIfHistoryDirty");

	Params::UUI_ThemeCustomizer_C_CheckIfHistoryDirty_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.UpdateSliderActivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_ThemeCustomizer_C::UpdateSliderActivated(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "UpdateSliderActivated");

	Params::UUI_ThemeCustomizer_C_UpdateSliderActivated_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.GetThemeSaveDirectory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_GetProjectDirectory_ReturnValue                         (AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (None)

void UUI_ThemeCustomizer_C::GetThemeSaveDirectory(const class FString& ReturnValue, const class FString& CallFunc_GetProjectDirectory_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "GetThemeSaveDirectory");

	Params::UUI_ThemeCustomizer_C_GetThemeSaveDirectory_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetProjectDirectory_ReturnValue = CallFunc_GetProjectDirectory_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.BndEvt__UI_ThemeCustomizer_Button_Save_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ThemeCustomizer_C::BndEvt__UI_ThemeCustomizer_Button_Save_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "BndEvt__UI_ThemeCustomizer_Button_Save_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.BndEvt__UI_ThemeCustomizer_Button_Revert_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ThemeCustomizer_C::BndEvt__UI_ThemeCustomizer_Button_Revert_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "BndEvt__UI_ThemeCustomizer_Button_Revert_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UUI_ThemeCustomizer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "Tick");

	Params::UUI_ThemeCustomizer_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.OnCurrentOptionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ThemeCustomizer_C::OnCurrentOptionChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "OnCurrentOptionChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.OnColorChangedByColorPicker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (None)

void UUI_ThemeCustomizer_C::OnColorChangedByColorPicker(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "OnColorChangedByColorPicker");

	Params::UUI_ThemeCustomizer_C_OnColorChangedByColorPicker_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.SaveStep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ThemeCustomizer_C::SaveStep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "SaveStep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ThemeCustomizer_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.BndEvt__UI_ThemeCustomizer_Button_Reset_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ThemeCustomizer_C::BndEvt__UI_ThemeCustomizer_Button_Reset_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "BndEvt__UI_ThemeCustomizer_Button_Reset_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ThemeCustomizer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.ExecuteUbergraph_UI_ThemeCustomizer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// struct FLinearColor                CallFunc_GetColor_Color                                          (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)
// struct FLinearColor                K2Node_CustomEvent_Color                                         (None)

void UUI_ThemeCustomizer_C::ExecuteUbergraph_UI_ThemeCustomizer(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FLinearColor& CallFunc_GetColor_Color, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FLinearColor& K2Node_CustomEvent_Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "ExecuteUbergraph_UI_ThemeCustomizer");

	Params::UUI_ThemeCustomizer_C_ExecuteUbergraph_UI_ThemeCustomizer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetColor_Color = CallFunc_GetColor_Color;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_Color = K2Node_CustomEvent_Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.UpdateAllWidgets__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ThemeCustomizer_C::UpdateAllWidgets__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "UpdateAllWidgets__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ThemeCustomizer.UI_ThemeCustomizer_C.OnChangedOption__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ThemeCustomizer_C::OnChangedOption__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ThemeCustomizer_C", "OnChangedOption__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


