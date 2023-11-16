#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CustomComboBox.UI_CustomComboBox_C
// (None)

class UClass* UUI_CustomComboBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CustomComboBox_C");

	return Clss;
}


// UI_CustomComboBox_C UI_CustomComboBox.Default__UI_CustomComboBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CustomComboBox_C* UUI_CustomComboBox_C::GetDefaultObj()
{
	static class UUI_CustomComboBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CustomComboBox_C*>(UUI_CustomComboBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CustomComboBox.UI_CustomComboBox_C.Nav to Options
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (None)
// class UWidget*                     ReturnValue                                                      (Edit, ZeroConstructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (Edit, ZeroConstructor)
// class UUI_CustomComboBoxOption_C*  K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option                  (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void UUI_CustomComboBox_C::Nav_to_Options(enum class EUINavigation Navigation, class UWidget* ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "Nav to Options");

	Params::UUI_CustomComboBox_C_Nav_to_Options_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option = K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.Nav Back Tomain Button
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (None)
// class UWidget*                     ReturnValue                                                      (None)

void UUI_CustomComboBox_C::Nav_Back_Tomain_Button(enum class EUINavigation Navigation, class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "Nav Back Tomain Button");

	Params::UUI_CustomComboBox_C_Nav_Back_Tomain_Button_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.SetUpNavigation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (Edit, ZeroConstructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (None)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (None)
// class UUI_CustomComboBoxOption_C*  K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option                  (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void UUI_CustomComboBox_C::SetUpNavigation(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "SetUpNavigation");

	Params::UUI_CustomComboBox_C_SetUpNavigation_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option = K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FKeyEvent                   InKeyEvent                                                       (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FEventReply                 ReturnValue                                                      (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)
// bool                               CallFunc_IsVisible_ReturnValue                                   (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (None)
// bool                               CallFunc_IsHovered_ReturnValue                                   (None)

void UUI_CustomComboBox_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_IsHovered_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "OnKeyDown");

	Params::UUI_CustomComboBox_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.GetOptionAtIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (None)
// class FString                      Text                                                             (None)
// class UUI_CustomComboBoxOption_C*  AsCustomComboBoxOption                                           (Edit, ZeroConstructor)
// bool                               IsValid                                                          (None)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UUI_CustomComboBoxOption_C*  K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option                  (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void UUI_CustomComboBox_C::GetOptionAtIndex(int32 Index, const class FString& Text, class UUI_CustomComboBoxOption_C* AsCustomComboBoxOption, bool IsValid, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "GetOptionAtIndex");

	Params::UUI_CustomComboBox_C_GetOptionAtIndex_Params Parms{};

	Parms.Index = Index;
	Parms.Text = Text;
	Parms.AsCustomComboBoxOption = AsCustomComboBoxOption;
	Parms.IsValid = IsValid;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option = K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "Setup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UUI_CustomComboBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "PreConstruct");

	Params::UUI_CustomComboBox_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.Event Add Option
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTRUCT_CustomComboBoxOptionCategoryInfo                                                     (None)

void UUI_CustomComboBox_C::Event_Add_Option(const struct FSTRUCT_CustomComboBoxOption& CategoryInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "Event Add Option");

	Params::UUI_CustomComboBox_C_Event_Add_Option_Params Parms{};

	Parms.CategoryInfo = CategoryInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.BndEvt__CustomComboBox_SelectedOption_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::BndEvt__CustomComboBox_SelectedOption_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "BndEvt__CustomComboBox_SelectedOption_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.Event Open Options
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::Event_Open_Options()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "Event Open Options");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.Event Close Options
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::Event_Close_Options()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "Event Close Options");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.Event Clear Options
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::Event_Clear_Options()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "Event Clear Options");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.Event Generate Default Options
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::Event_Generate_Default_Options()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "Event Generate Default Options");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.Event Set Selected Option
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (None)
// bool                               CallOnOptionSelected_                                            (None)
// class UUI_CustomComboBoxOption_C*  OptionWidget                                                     (None)

void UUI_CustomComboBox_C::Event_Set_Selected_Option(const class FString& Option, bool CallOnOptionSelected_, class UUI_CustomComboBoxOption_C* OptionWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "Event Set Selected Option");

	Params::UUI_CustomComboBox_C_Event_Set_Selected_Option_Params Parms{};

	Parms.Option = Option;
	Parms.CallOnOptionSelected_ = CallOnOptionSelected_;
	Parms.OptionWidget = OptionWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.OnOptionSelectedInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (None)
// int64                              ID                                                               (None)
// class UUI_CustomComboBoxOption_C*  OptionWidget                                                     (None)

void UUI_CustomComboBox_C::OnOptionSelectedInterface(const class FString& Option, int64 ID, class UUI_CustomComboBoxOption_C* OptionWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "OnOptionSelectedInterface");

	Params::UUI_CustomComboBox_C_OnOptionSelectedInterface_Params Parms{};

	Parms.Option = Option;
	Parms.ID = ID;
	Parms.OptionWidget = OptionWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.CloseOtherWay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::CloseOtherWay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "CloseOtherWay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.ExecuteUbergraph_UI_CustomComboBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (None)
// int32                              Temp_int_Array_Index_Variable_1                                  (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// int32                              Temp_int_Array_Index_Variable_2                                  (None)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)
// struct FSTRUCT_CustomComboBoxOptionK2Node_CustomEvent_CategoryInfo                                  (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (Edit, ZeroConstructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (None)
// class FString                      K2Node_CustomEvent_Option                                        (AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               K2Node_CustomEvent_CallOnOptionSelected_                         (None)
// class UUI_CustomComboBoxOption_C*  K2Node_CustomEvent_OptionWidget                                  (Edit, ZeroConstructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ContainsInstancedReference, SimpleDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      K2Node_Event_Option                                              (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int64                              K2Node_Event_ID                                                  (None)
// class UUI_CustomComboBoxOption_C*  K2Node_Event_OptionWidget                                        (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (None)
// double                             CallFunc_BreakVector2D_X                                         (None)
// double                             CallFunc_BreakVector2D_Y                                         (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (None)
// bool                               Temp_bool_Variable                                               (None)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (None)
// class UUI_CustomComboBoxOption_C*  CallFunc_Create_ReturnValue                                      (Edit, ZeroConstructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (Edit, ZeroConstructor)
// class FString                      CallFunc_GetOptionAtIndex_Text                                   (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class UUI_CustomComboBoxOption_C*  CallFunc_GetOptionAtIndex_AsCustomComboBoxOption                 (Edit, ZeroConstructor)
// bool                               CallFunc_GetOptionAtIndex_IsValid                                (None)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (None)
// bool                               K2Node_Select_Default                                            (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)
// class UUI_CustomComboBoxOption_C*  CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (None)
// class UUI_CustomComboBoxOption_C*  CallFunc_Array_Get_Item_1                                        (Edit, ZeroConstructor)
// class UUI_CustomComboBoxOption_C*  CallFunc_Array_Get_Item_2                                        (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (None)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (None)
// int32                              Temp_int_Array_Index_Variable_3                                  (None)
// struct FSTRUCT_CustomComboBoxOptionCallFunc_Array_Get_Item_3                                        (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (None)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (None)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (Edit, ZeroConstructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (None)
// class UUI_CustomComboBoxSpacer_C*  CallFunc_Create_ReturnValue_1                                    (Edit, ZeroConstructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (None)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)

void UUI_CustomComboBox_C::ExecuteUbergraph_UI_CustomComboBox(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_4, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool K2Node_Event_IsDesignTime, const struct FSTRUCT_CustomComboBoxOption& K2Node_CustomEvent_CategoryInfo, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, const class FString& K2Node_CustomEvent_Option, bool K2Node_CustomEvent_CallOnOptionSelected_, class UUI_CustomComboBoxOption_C* K2Node_CustomEvent_OptionWidget, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& K2Node_Event_Option, int64 K2Node_Event_ID, class UUI_CustomComboBoxOption_C* K2Node_Event_OptionWidget, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_7, class UUI_CustomComboBoxOption_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, const class FString& CallFunc_GetOptionAtIndex_Text, class UUI_CustomComboBoxOption_C* CallFunc_GetOptionAtIndex_AsCustomComboBoxOption, bool CallFunc_GetOptionAtIndex_IsValid, bool CallFunc_IsValid_ReturnValue_8, bool K2Node_Select_Default, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, class UUI_CustomComboBoxOption_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UUI_CustomComboBoxOption_C* CallFunc_Array_Get_Item_1, class UUI_CustomComboBoxOption_C* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, const struct FSTRUCT_CustomComboBoxOption& CallFunc_Array_Get_Item_3, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, class UUI_CustomComboBoxSpacer_C* CallFunc_Create_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_13, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "ExecuteUbergraph_UI_CustomComboBox");

	Params::UUI_CustomComboBox_C_ExecuteUbergraph_UI_CustomComboBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_CategoryInfo = K2Node_CustomEvent_CategoryInfo;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.K2Node_CustomEvent_Option = K2Node_CustomEvent_Option;
	Parms.K2Node_CustomEvent_CallOnOptionSelected_ = K2Node_CustomEvent_CallOnOptionSelected_;
	Parms.K2Node_CustomEvent_OptionWidget = K2Node_CustomEvent_OptionWidget;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Event_Option = K2Node_Event_Option;
	Parms.K2Node_Event_ID = K2Node_Event_ID;
	Parms.K2Node_Event_OptionWidget = K2Node_Event_OptionWidget;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetOptionAtIndex_Text = CallFunc_GetOptionAtIndex_Text;
	Parms.CallFunc_GetOptionAtIndex_AsCustomComboBoxOption = CallFunc_GetOptionAtIndex_AsCustomComboBoxOption;
	Parms.CallFunc_GetOptionAtIndex_IsValid = CallFunc_GetOptionAtIndex_IsValid;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.OnCloseOption__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::OnCloseOption__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "OnCloseOption__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.OnOpenOptions__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CustomComboBox_C*        NewParam                                                         (None)

void UUI_CustomComboBox_C::OnOpenOptions__DelegateSignature(class UUI_CustomComboBox_C* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "OnOpenOptions__DelegateSignature");

	Params::UUI_CustomComboBox_C_OnOpenOptions__DelegateSignature_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.PostPreConstruct__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBox_C::PostPreConstruct__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "PostPreConstruct__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBox.UI_CustomComboBox_C.OnOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (None)

void UUI_CustomComboBox_C::OnOptionSelected__DelegateSignature(const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBox_C", "OnOptionSelected__DelegateSignature");

	Params::UUI_CustomComboBox_C_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}

}


