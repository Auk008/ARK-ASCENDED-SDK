#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Button_Ark_Blue.UI_Button_Ark_Blue_C
// (None)

class UClass* UUI_Button_Ark_Blue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Button_Ark_Blue_C");

	return Clss;
}


// UI_Button_Ark_Blue_C UI_Button_Ark_Blue.Default__UI_Button_Ark_Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Button_Ark_Blue_C* UUI_Button_Ark_Blue_C::GetDefaultObj()
{
	static class UUI_Button_Ark_Blue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Button_Ark_Blue_C*>(UUI_Button_Ark_Blue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Button_Ark_Blue.UI_Button_Ark_Blue_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UUI_Button_Ark_Blue_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Blue_C", "PreConstruct");

	Params::UUI_Button_Ark_Blue_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_Ark_Blue.UI_Button_Ark_Blue_C.BndEvt__UI_Button_Ark_Blue_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_Ark_Blue_C::BndEvt__UI_Button_Ark_Blue_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Blue_C", "BndEvt__UI_Button_Ark_Blue_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Ark_Blue.UI_Button_Ark_Blue_C.ExecuteUbergraph_UI_Button_Ark_Blue
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (None)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (None)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (Edit, ZeroConstructor)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (None)

void UUI_Button_Ark_Blue_C::ExecuteUbergraph_UI_Button_Ark_Blue(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Blue_C", "ExecuteUbergraph_UI_Button_Ark_Blue");

	Params::UUI_Button_Ark_Blue_C_ExecuteUbergraph_UI_Button_Ark_Blue_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;
	Parms.CallFunc_BPGetGlobalUIData_ReturnValue = CallFunc_BPGetGlobalUIData_ReturnValue;
	Parms.CallFunc_GetIconForKeyName_ReturnValue = CallFunc_GetIconForKeyName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_Ark_Blue.UI_Button_Ark_Blue_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Ark_Blue_C::OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Blue_C", "OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


