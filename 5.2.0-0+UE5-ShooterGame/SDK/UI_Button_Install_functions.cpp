#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Button_Install.UI_Button_Install_C
// (None)

class UClass* UUI_Button_Install_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Button_Install_C");

	return Clss;
}


// UI_Button_Install_C UI_Button_Install.Default__UI_Button_Install_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Button_Install_C* UUI_Button_Install_C::GetDefaultObj()
{
	static class UUI_Button_Install_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Button_Install_C*>(UUI_Button_Install_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Button_Install.UI_Button_Install_C.UpdateButtonSwitcherStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInstallStatus          Selection                                                        (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)

void UUI_Button_Install_C::UpdateButtonSwitcherStatus(enum class EInstallStatus Selection, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Install_C", "UpdateButtonSwitcherStatus");

	Params::UUI_Button_Install_C_UpdateButtonSwitcherStatus_Params Parms{};

	Parms.Selection = Selection;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_Install.UI_Button_Install_C.UpdateButtonCollor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENUM_Install            ButtonStatus                                                     (None)

void UUI_Button_Install_C::UpdateButtonCollor(enum class ENUM_Install ButtonStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Install_C", "UpdateButtonCollor");

	Params::UUI_Button_Install_C_UpdateButtonCollor_Params Parms{};

	Parms.ButtonStatus = ButtonStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_Install.UI_Button_Install_C.Update All Theme Settings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Install_C::Update_All_Theme_Settings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Install_C", "Update All Theme Settings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Install.UI_Button_Install_C.BndEvt__InstallButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_Install_C::BndEvt__InstallButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Install_C", "BndEvt__InstallButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Install.UI_Button_Install_C.BndEvt__InstallButton_Update_B_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_Install_C::BndEvt__InstallButton_Update_B_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Install_C", "BndEvt__InstallButton_Update_B_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Install.UI_Button_Install_C.SetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (None)
// enum class ELibraryProgressState   InstalationState                                                 (None)

void UUI_Button_Install_C::SetProgress(int32 Amount, enum class ELibraryProgressState InstalationState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Install_C", "SetProgress");

	Params::UUI_Button_Install_C_SetProgress_Params Parms{};

	Parms.Amount = Amount;
	Parms.InstalationState = InstalationState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_Install.UI_Button_Install_C.ExecuteUbergraph_UI_Button_Install
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// int32                              K2Node_CustomEvent_Amount                                        (None)
// enum class ELibraryProgressState   K2Node_CustomEvent_InstalationState                              (None)
// double                             CallFunc_GetProcessedBarProgress_ReturnValue                     (None)
// bool                               CallFunc_GetProcessedBarProgress_MaintainPreviousValue           (None)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (None)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_1                     (None)

void UUI_Button_Install_C::ExecuteUbergraph_UI_Button_Install(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 K2Node_CustomEvent_Amount, enum class ELibraryProgressState K2Node_CustomEvent_InstalationState, double CallFunc_GetProcessedBarProgress_ReturnValue, bool CallFunc_GetProcessedBarProgress_MaintainPreviousValue, float CallFunc_SetPercent_InPercent_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Install_C", "ExecuteUbergraph_UI_Button_Install");

	Params::UUI_Button_Install_C_ExecuteUbergraph_UI_Button_Install_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.K2Node_CustomEvent_InstalationState = K2Node_CustomEvent_InstalationState;
	Parms.CallFunc_GetProcessedBarProgress_ReturnValue = CallFunc_GetProcessedBarProgress_ReturnValue;
	Parms.CallFunc_GetProcessedBarProgress_MaintainPreviousValue = CallFunc_GetProcessedBarProgress_MaintainPreviousValue;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_1 = CallFunc_SetPercent_InPercent_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_Install.UI_Button_Install_C.OnClickUpdate_B__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Install_C::OnClickUpdate_B__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Install_C", "OnClickUpdate_B__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Install.UI_Button_Install_C.OnClickInstall_B__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Install_C::OnClickInstall_B__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Install_C", "OnClickInstall_B__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


