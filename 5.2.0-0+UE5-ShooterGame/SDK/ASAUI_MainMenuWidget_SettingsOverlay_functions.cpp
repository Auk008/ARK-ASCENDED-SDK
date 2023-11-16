#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C
// (None)

class UClass* UASAUI_MainMenuWidget_SettingsOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASAUI_MainMenuWidget_SettingsOverlay_C");

	return Clss;
}


// ASAUI_MainMenuWidget_SettingsOverlay_C ASAUI_MainMenuWidget_SettingsOverlay.Default__ASAUI_MainMenuWidget_SettingsOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASAUI_MainMenuWidget_SettingsOverlay_C* UASAUI_MainMenuWidget_SettingsOverlay_C::GetDefaultObj()
{
	static class UASAUI_MainMenuWidget_SettingsOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASAUI_MainMenuWidget_SettingsOverlay_C*>(UASAUI_MainMenuWidget_SettingsOverlay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.OnKeyDownEvent
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FKeyEvent                   InKeyboardEvent                                                  (AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// struct FEventReply                 ReturnValue                                                      (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// struct FKey                        LocalKey                                                         (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (SimpleDisplay, Protected, BlueprintCallable, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// struct FEventReply                 CallFunc_OnKeyDownEvent_ReturnValue                              (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)

void UASAUI_MainMenuWidget_SettingsOverlay_C::OnKeyDownEvent(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyboardEvent, const struct FEventReply& ReturnValue, const struct FKey& LocalKey, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_OnKeyDownEvent_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "OnKeyDownEvent");

	Params::UASAUI_MainMenuWidget_SettingsOverlay_C_OnKeyDownEvent_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyboardEvent = InKeyboardEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.LocalKey = LocalKey;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_OnKeyDownEvent_ReturnValue = CallFunc_OnKeyDownEvent_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UASAUI_MainMenuWidget_SettingsOverlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "Tick");

	Params::UASAUI_MainMenuWidget_SettingsOverlay_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_BackButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_SettingsOverlay_C::BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_BackButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_BackButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_QuitButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_SettingsOverlay_C::BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_QuitButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_QuitButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_CreditsButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_SettingsOverlay_C::BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_CreditsButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_CreditsButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_SettingsButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_SettingsOverlay_C::BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_SettingsButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_SettingsButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_SettingsOverlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.BPVirtualCursorinit
// (Event, Public, BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_SettingsOverlay_C::BPVirtualCursorinit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "BPVirtualCursorinit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.ExecuteUbergraph_ASAUI_MainMenuWidget_SettingsOverlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               CallFunc_IsConsoleBuild_ReturnValue                              (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)

void UASAUI_MainMenuWidget_SettingsOverlay_C::ExecuteUbergraph_ASAUI_MainMenuWidget_SettingsOverlay(int32 EntryPoint, bool CallFunc_IsConsoleBuild_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "ExecuteUbergraph_ASAUI_MainMenuWidget_SettingsOverlay");

	Params::UASAUI_MainMenuWidget_SettingsOverlay_C_ExecuteUbergraph_ASAUI_MainMenuWidget_SettingsOverlay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsConsoleBuild_ReturnValue = CallFunc_IsConsoleBuild_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.OnQuitGameClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_SettingsOverlay_C::OnQuitGameClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "OnQuitGameClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.OnCreditsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_SettingsOverlay_C::OnCreditsClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "OnCreditsClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.OnSettingsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_SettingsOverlay_C::OnSettingsClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "OnSettingsClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C.OnBackSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UASAUI_MainMenuWidget_SettingsOverlay_C::OnBackSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASAUI_MainMenuWidget_SettingsOverlay_C", "OnBackSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


