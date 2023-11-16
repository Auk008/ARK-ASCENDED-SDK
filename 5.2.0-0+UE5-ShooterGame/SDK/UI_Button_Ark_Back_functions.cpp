#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Button_Ark_Back.UI_Button_Ark_Back_C
// (None)

class UClass* UUI_Button_Ark_Back_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Button_Ark_Back_C");

	return Clss;
}


// UI_Button_Ark_Back_C UI_Button_Ark_Back.Default__UI_Button_Ark_Back_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Button_Ark_Back_C* UUI_Button_Ark_Back_C::GetDefaultObj()
{
	static class UUI_Button_Ark_Back_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Button_Ark_Back_C*>(UUI_Button_Ark_Back_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Button_Ark_Back.UI_Button_Ark_Back_C.BndEvt__UI_Button_Ark_Blue_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Button_Ark_Back_C::BndEvt__UI_Button_Ark_Blue_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Back_C", "BndEvt__UI_Button_Ark_Blue_Button_BrowseMods_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Ark_Back.UI_Button_Ark_Back_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UUI_Button_Ark_Back_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Back_C", "Tick");

	Params::UUI_Button_Ark_Back_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_Ark_Back.UI_Button_Ark_Back_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Button_Ark_Back_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Back_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Button_Ark_Back.UI_Button_Ark_Back_C.ExecuteUbergraph_UI_Button_Ark_Back
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (None)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)
// class ABasePlayerController*       K2Node_DynamicCast_AsBase_Player_Controller                      (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (None)
// bool                               K2Node_SwitchString_CmpSuccess                                   (None)

void UUI_Button_Ark_Back_C::ExecuteUbergraph_UI_Button_Ark_Back(int32 EntryPoint, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class ABasePlayerController* K2Node_DynamicCast_AsBase_Player_Controller, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPlatformName_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Back_C", "ExecuteUbergraph_UI_Button_Ark_Back");

	Params::UUI_Button_Ark_Back_C_ExecuteUbergraph_UI_Button_Ark_Back_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;
	Parms.CallFunc_BPGetGlobalUIData_ReturnValue = CallFunc_BPGetGlobalUIData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_DynamicCast_AsBase_Player_Controller = K2Node_DynamicCast_AsBase_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Button_Ark_Back.UI_Button_Ark_Back_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Button_Ark_Back_C::OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Back_C", "OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


