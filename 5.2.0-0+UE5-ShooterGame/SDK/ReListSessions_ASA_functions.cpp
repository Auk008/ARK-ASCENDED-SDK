#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ReListSessions_ASA.ReListSessions_ASA_C
// (None)

class UClass* UReListSessions_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReListSessions_ASA_C");

	return Clss;
}


// ReListSessions_ASA_C ReListSessions_ASA.Default__ReListSessions_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReListSessions_ASA_C* UReListSessions_ASA_C::GetDefaultObj()
{
	static class UReListSessions_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReListSessions_ASA_C*>(UReListSessions_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ReListSessions_ASA.ReListSessions_ASA_C.HandleAscendDescendSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxString*             ComboBox                                                         (None)
// int32                              ForIndex                                                         (None)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)

void UReListSessions_ASA_C::HandleAscendDescendSwitch(class UComboBoxString* ComboBox, int32 ForIndex, int32 CallFunc_GetSelectedIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "HandleAscendDescendSwitch");

	Params::UReListSessions_ASA_C_HandleAscendDescendSwitch_Params Parms{};

	Parms.ComboBox = ComboBox;
	Parms.ForIndex = ForIndex;
	Parms.CallFunc_GetSelectedIndex_ReturnValue = CallFunc_GetSelectedIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.UpdateHorizontalTabEnabledStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsChecked_ReturnValue                                   (None)
// class UWidget*                     CallFunc_SwitchButton_Widget                                     (None)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (None)
// bool                               CallFunc_IsChecked_ReturnValue_1                                 (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)

void UReListSessions_ASA_C::UpdateHorizontalTabEnabledStates(bool CallFunc_IsChecked_ReturnValue, class UWidget* CallFunc_SwitchButton_Widget, int32 CallFunc_GetSelectedIndex_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "UpdateHorizontalTabEnabledStates");

	Params::UReListSessions_ASA_C_UpdateHorizontalTabEnabledStates_Params Parms{};

	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_SwitchButton_Widget = CallFunc_SwitchButton_Widget;
	Parms.CallFunc_GetSelectedIndex_ReturnValue = CallFunc_GetSelectedIndex_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue_1 = CallFunc_IsChecked_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.SetupPlatformSpecificTextBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (None)
// bool                               K2Node_SwitchString_CmpSuccess                                   (None)

void UReListSessions_ASA_C::SetupPlatformSpecificTextBox(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, const class FString& CallFunc_GetPlatformName_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "SetupPlatformSpecificTextBox");

	Params::UReListSessions_ASA_C_SetupPlatformSpecificTextBox_Params Parms{};

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.OnKeyDownEvent
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FKeyEvent                   InKeyboardEvent                                                  (ContainsInstancedReference, AssetRegistrySearchable, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FEventReply                 ReturnValue                                                      (AssetRegistrySearchable, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (None)
// struct FEventReply                 CallFunc_OnKeyDown_ReturnValue                                   (AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class UComboBoxString*             CallFunc_GetOpenComboBox_ReturnValue                             (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UWidget*                     CallFunc_SwitchButton_Widget                                     (Edit, ZeroConstructor)
// class UWidget*                     CallFunc_SwitchButton_Widget_1                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

void UReListSessions_ASA_C::OnKeyDownEvent(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyboardEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, const struct FEventReply& CallFunc_OnKeyDown_ReturnValue, class UComboBoxString* CallFunc_GetOpenComboBox_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_SwitchButton_Widget, class UWidget* CallFunc_SwitchButton_Widget_1, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "OnKeyDownEvent");

	Params::UReListSessions_ASA_C_OnKeyDownEvent_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyboardEvent = InKeyboardEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_OnKeyDown_ReturnValue = CallFunc_OnKeyDown_ReturnValue;
	Parms.CallFunc_GetOpenComboBox_ReturnValue = CallFunc_GetOpenComboBox_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SwitchButton_Widget = CallFunc_SwitchButton_Widget;
	Parms.CallFunc_SwitchButton_Widget_1 = CallFunc_SwitchButton_Widget_1;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FKeyEvent                   InKeyEvent                                                       (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FEventReply                 ReturnValue                                                      (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FKey                        LocalKey                                                         (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class UWidget*                     CallFunc_SwitchButton_Widget                                     (Edit, ZeroConstructor)
// struct FEventReply                 CallFunc_OnKeyDown_ReturnValue                                   (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class UWidget*                     CallFunc_SwitchButton_Widget_1                                   (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

void UReListSessions_ASA_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& LocalKey, const struct FKey& CallFunc_GetKey_ReturnValue, class UWidget* CallFunc_SwitchButton_Widget, const struct FEventReply& CallFunc_OnKeyDown_ReturnValue, class UWidget* CallFunc_SwitchButton_Widget_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "OnKeyDown");

	Params::UReListSessions_ASA_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.LocalKey = LocalKey;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_SwitchButton_Widget = CallFunc_SwitchButton_Widget;
	Parms.CallFunc_OnKeyDown_ReturnValue = CallFunc_OnKeyDown_ReturnValue;
	Parms.CallFunc_SwitchButton_Widget_1 = CallFunc_SwitchButton_Widget_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.GetSizeboxForExtraHandheldScaling
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USizeBox*                    ReturnValue                                                      (None)

void UReListSessions_ASA_C::GetSizeboxForExtraHandheldScaling(class USizeBox* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "GetSizeboxForExtraHandheldScaling");

	Params::UReListSessions_ASA_C_GetSizeboxForExtraHandheldScaling_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.GetWidgetToScaleForHandheld
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (None)

void UReListSessions_ASA_C::GetWidgetToScaleForHandheld(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "GetWidgetToScaleForHandheld");

	Params::UReListSessions_ASA_C_GetWidgetToScaleForHandheld_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (None)

void UReListSessions_ASA_C::BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UReListSessions_ASA_C_BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged_0__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_1_OnSelectionChanged_1__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_1_OnSelectionChanged_1__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_1_OnSelectionChanged_1__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_2_OnSelectionChanged_2__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_2_OnSelectionChanged_2__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_2_OnSelectionChanged_2__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_3_OnSelectionChanged_3__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_3_OnSelectionChanged_3__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_3_OnSelectionChanged_3__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_SessionOrderName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_SessionOrderName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_SessionOrderName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_PlayerOrder_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_PlayerOrder_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_PlayerOrder_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_DayOrder_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_DayOrder_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_DayOrder_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_PingOrder_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_PingOrder_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_PingOrder_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_ShowPrivateServersButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_ShowPrivateServersButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_ShowPrivateServersButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_HideFullButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_HideFullButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_HideFullButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_AutoFavoriteButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_AutoFavoriteButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_AutoFavoriteButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_SettingsButton_K2Node_ComponentBoundEvent_11_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_SettingsButton_K2Node_ComponentBoundEvent_11_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_SettingsButton_K2Node_ComponentBoundEvent_11_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.OnServerListingClickedModPopup
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bNeedInit                                                        (None)
// TArray<int64>                      ModIds                                                           (AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      ServerName                                                       (None)
// int64                              ServerID                                                         (None)

void UReListSessions_ASA_C::OnServerListingClickedModPopup(bool bNeedInit, const TArray<int64>& ModIds, const class FString& ServerName, int64 ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "OnServerListingClickedModPopup");

	Params::UReListSessions_ASA_C_OnServerListingClickedModPopup_Params Parms{};

	Parms.bNeedInit = bNeedInit;
	Parms.ModIds = ModIds;
	Parms.ServerName = ServerName;
	Parms.ServerID = ServerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.ModUIJoinEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ServerID                                                         (None)

void UReListSessions_ASA_C::ModUIJoinEvent(int64 ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "ModUIJoinEvent");

	Params::UReListSessions_ASA_C_ModUIJoinEvent_Params Parms{};

	Parms.ServerID = ServerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.ModUIBackEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::ModUIBackEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "ModUIBackEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.ModUIReportEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ServerID                                                         (None)

void UReListSessions_ASA_C::ModUIReportEvent(int64 ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "ModUIReportEvent");

	Params::UReListSessions_ASA_C_ModUIReportEvent_Params Parms{};

	Parms.ServerID = ServerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.ModUIFavoriteEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ServerID                                                         (None)

void UReListSessions_ASA_C::ModUIFavoriteEvent(int64 ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "ModUIFavoriteEvent");

	Params::UReListSessions_ASA_C_ModUIFavoriteEvent_Params Parms{};

	Parms.ServerID = ServerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.ModUIError
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::ModUIError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "ModUIError");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.SetCurrentServerSearchType
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ServerType                                                       (None)

void UReListSessions_ASA_C::SetCurrentServerSearchType(int32 ServerType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "SetCurrentServerSearchType");

	Params::UReListSessions_ASA_C_SetCurrentServerSearchType_Params Parms{};

	Parms.ServerType = ServerType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersCheckBox_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (None)

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersCheckBox_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersCheckBox_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UReListSessions_ASA_C_BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersCheckBox_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BPSetupLayout
// (Event, Public, BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BPSetupLayout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BPSetupLayout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.ForceUpdateServerTypeSelection
// (Event, Public, BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::ForceUpdateServerTypeSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "ForceUpdateServerTypeSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UReListSessions_ASA_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "Tick");

	Params::UReListSessions_ASA_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.BndEvt__ReListSessions_ASA_WantYourOwnArkServer_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReListSessions_ASA_C::BndEvt__ReListSessions_ASA_WantYourOwnArkServer_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "BndEvt__ReListSessions_ASA_WantYourOwnArkServer_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReListSessions_ASA.ReListSessions_ASA_C.ExecuteUbergraph_ReListSessions_ASA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ZeroConstructor)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (None)
// bool                               CallFunc_IsChecked_ReturnValue                                   (None)
// bool                               CallFunc_IsChecked_ReturnValue_1                                 (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (None)
// bool                               CallFunc_IsChecked_ReturnValue_2                                 (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (Edit, ZeroConstructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (Edit, ZeroConstructor)
// bool                               K2Node_Event_bNeedInit                                           (None)
// TArray<int64>                      K2Node_Event_ModIds                                              (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      K2Node_Event_ServerName                                          (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int64                              K2Node_Event_ServerId                                            (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (Edit, ZeroConstructor)
// int64                              K2Node_CustomEvent_ServerId_2                                    (None)
// bool                               CallFunc_RegisterModelClass_ReturnValue                          (None)
// int64                              K2Node_CustomEvent_ServerId_1                                    (None)
// int64                              K2Node_CustomEvent_ServerId                                      (None)
// int32                              K2Node_Event_ServerType                                          (None)
// bool                               CallFunc_IsChecked_ReturnValue_3                                 (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (None)
// class UBP_ServerModsWidget_C*      CallFunc_Create_ReturnValue                                      (Edit, ZeroConstructor)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (None)
// bool                               CallFunc_IsVisible_ReturnValue                                   (None)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (None)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (Edit, ZeroConstructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (None)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (Edit, ZeroConstructor)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_1                         (None)

void UReListSessions_ASA_C::ExecuteUbergraph_ReListSessions_ASA(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_ComponentBoundEvent_bIsChecked_1, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_Not_PreBool_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_Event_bNeedInit, const TArray<int64>& K2Node_Event_ModIds, const class FString& K2Node_Event_ServerName, int64 K2Node_Event_ServerId, class FText CallFunc_Conv_StringToText_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int64 K2Node_CustomEvent_ServerId_2, bool CallFunc_RegisterModelClass_ReturnValue, int64 K2Node_CustomEvent_ServerId_1, int64 K2Node_CustomEvent_ServerId, int32 K2Node_Event_ServerType, bool CallFunc_IsChecked_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_3, class UBP_ServerModsWidget_C* CallFunc_Create_ReturnValue, bool K2Node_ComponentBoundEvent_bIsChecked, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_GetSelectedIndex_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReListSessions_ASA_C", "ExecuteUbergraph_ReListSessions_ASA");

	Params::UReListSessions_ASA_C_ExecuteUbergraph_ReListSessions_ASA_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_1 = K2Node_ComponentBoundEvent_bIsChecked_1;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue_1 = CallFunc_IsChecked_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsChecked_ReturnValue_2 = CallFunc_IsChecked_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_Event_bNeedInit = K2Node_Event_bNeedInit;
	Parms.K2Node_Event_ModIds = K2Node_Event_ModIds;
	Parms.K2Node_Event_ServerName = K2Node_Event_ServerName;
	Parms.K2Node_Event_ServerId = K2Node_Event_ServerId;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CustomEvent_ServerId_2 = K2Node_CustomEvent_ServerId_2;
	Parms.CallFunc_RegisterModelClass_ReturnValue = CallFunc_RegisterModelClass_ReturnValue;
	Parms.K2Node_CustomEvent_ServerId_1 = K2Node_CustomEvent_ServerId_1;
	Parms.K2Node_CustomEvent_ServerId = K2Node_CustomEvent_ServerId;
	Parms.K2Node_Event_ServerType = K2Node_Event_ServerType;
	Parms.CallFunc_IsChecked_ReturnValue_3 = CallFunc_IsChecked_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetSelectedIndex_ReturnValue = CallFunc_GetSelectedIndex_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;
	Parms.CallFunc_BPGetGlobalUIData_ReturnValue = CallFunc_BPGetGlobalUIData_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_GetIconForKeyName_ReturnValue = CallFunc_GetIconForKeyName_ReturnValue;
	Parms.CallFunc_GetIconForKeyName_ReturnValue_1 = CallFunc_GetIconForKeyName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


