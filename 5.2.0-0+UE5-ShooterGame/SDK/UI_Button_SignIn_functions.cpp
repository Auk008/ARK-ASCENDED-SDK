#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Button_SignIn.UI_Button_SignIn_C
// (None)

class UClass* UUI_Button_SignIn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Button_SignIn_C");

	return Clss;
}


// UI_Button_SignIn_C UI_Button_SignIn.Default__UI_Button_SignIn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Button_SignIn_C* UUI_Button_SignIn_C::GetDefaultObj()
{
	static class UUI_Button_SignIn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Button_SignIn_C*>(UUI_Button_SignIn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Button_SignIn.UI_Button_SignIn_C.removeMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_SignIn_C::RemoveMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_SignIn_C", "removeMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_SignIn.UI_Button_SignIn_C.BndEvt__SignIn_Button_20_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_SignIn_C::BndEvt__SignIn_Button_20_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_SignIn_C", "BndEvt__SignIn_Button_20_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_SignIn.UI_Button_SignIn_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UUI_Button_SignIn_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_SignIn_C", "PreConstruct");

	Params::UUI_Button_SignIn_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_SignIn.UI_Button_SignIn_C.ExecuteUbergraph_UI_Button_SignIn
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)

void UUI_Button_SignIn_C::ExecuteUbergraph_UI_Button_SignIn(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_SignIn_C", "ExecuteUbergraph_UI_Button_SignIn");

	Params::UUI_Button_SignIn_C_ExecuteUbergraph_UI_Button_SignIn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_SignIn.UI_Button_SignIn_C.OnSignInClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_SignIn_C::OnSignInClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_SignIn_C", "OnSignInClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


