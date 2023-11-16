#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Button_Sidebar.UI_Button_Sidebar_C
// (None)

class UClass* UUI_Button_Sidebar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Button_Sidebar_C");

	return Clss;
}


// UI_Button_Sidebar_C UI_Button_Sidebar.Default__UI_Button_Sidebar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Button_Sidebar_C* UUI_Button_Sidebar_C::GetDefaultObj()
{
	static class UUI_Button_Sidebar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Button_Sidebar_C*>(UUI_Button_Sidebar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Button_Sidebar.UI_Button_Sidebar_C.UpdateThemeData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_Button_Sidebar_C::UpdateThemeData(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Sidebar_C", "UpdateThemeData");

	Params::UUI_Button_Sidebar_C_UpdateThemeData_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_Sidebar.UI_Button_Sidebar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UUI_Button_Sidebar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Sidebar_C", "PreConstruct");

	Params::UUI_Button_Sidebar_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_Sidebar.UI_Button_Sidebar_C.BndEvt__UI_Button_Sidebar_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_Sidebar_C::BndEvt__UI_Button_Sidebar_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Sidebar_C", "BndEvt__UI_Button_Sidebar_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Sidebar.UI_Button_Sidebar_C.ButtonSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Sidebar_C::ButtonSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Sidebar_C", "ButtonSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Sidebar.UI_Button_Sidebar_C.ButtonDeselected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Sidebar_C::ButtonDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Sidebar_C", "ButtonDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Sidebar.UI_Button_Sidebar_C.UpdateSlelectionTo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (None)

void UUI_Button_Sidebar_C::UpdateSlelectionTo(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Sidebar_C", "UpdateSlelectionTo");

	Params::UUI_Button_Sidebar_C_UpdateSlelectionTo_Params Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_Sidebar.UI_Button_Sidebar_C.InitSideButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Sidebar_C::InitSideButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Sidebar_C", "InitSideButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Sidebar.UI_Button_Sidebar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Button_Sidebar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Sidebar_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Sidebar.UI_Button_Sidebar_C.ExecuteUbergraph_UI_Button_Sidebar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)
// bool                               K2Node_CustomEvent_Condition                                     (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, ZeroConstructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (Edit, ZeroConstructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (None)

void UUI_Button_Sidebar_C::ExecuteUbergraph_UI_Button_Sidebar(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_Condition, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Sidebar_C", "ExecuteUbergraph_UI_Button_Sidebar");

	Params::UUI_Button_Sidebar_C_ExecuteUbergraph_UI_Button_Sidebar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Condition = K2Node_CustomEvent_Condition;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_Sidebar.UI_Button_Sidebar_C.Dispatcher_OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Sidebar_C::Dispatcher_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Sidebar_C", "Dispatcher_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


