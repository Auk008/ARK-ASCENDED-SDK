#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TermsAndConditions.TermsAndConditions_C
// (None)

class UClass* UTermsAndConditions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TermsAndConditions_C");

	return Clss;
}


// TermsAndConditions_C TermsAndConditions.Default__TermsAndConditions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTermsAndConditions_C* UTermsAndConditions_C::GetDefaultObj()
{
	static class UTermsAndConditions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTermsAndConditions_C*>(UTermsAndConditions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TermsAndConditions.TermsAndConditions_C.BPGamepadReleased
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        TheKey                                                           (None)
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (None)

void UTermsAndConditions_C::BPGamepadReleased(const struct FKey& TheKey, bool ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "BPGamepadReleased");

	Params::UTermsAndConditions_C_BPGamepadReleased_Params Parms{};

	Parms.TheKey = TheKey;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TermsAndConditions.TermsAndConditions_C.BPHighlightWidgetOnStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UTermsAndConditions_C::BPHighlightWidgetOnStart(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "BPHighlightWidgetOnStart");

	Params::UTermsAndConditions_C_BPHighlightWidgetOnStart_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TermsAndConditions.TermsAndConditions_C.PlayFadeAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUMGSequencePlayMode    PlayMode                                                         (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UTermsAndConditions_C::PlayFadeAnimation(enum class EUMGSequencePlayMode PlayMode, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "PlayFadeAnimation");

	Params::UTermsAndConditions_C_PlayFadeAnimation_Params Parms{};

	Parms.PlayMode = PlayMode;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TermsAndConditions.TermsAndConditions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTermsAndConditions_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TermsAndConditions.TermsAndConditions_C.BndEvt__TermsAndConditions_Button_OpenTerm_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTermsAndConditions_C::BndEvt__TermsAndConditions_Button_OpenTerm_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "BndEvt__TermsAndConditions_Button_OpenTerm_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TermsAndConditions.TermsAndConditions_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UTermsAndConditions_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "Tick");

	Params::UTermsAndConditions_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TermsAndConditions.TermsAndConditions_C.BndEvt__TermsAndConditions_ButtonDeny_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTermsAndConditions_C::BndEvt__TermsAndConditions_ButtonDeny_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "BndEvt__TermsAndConditions_ButtonDeny_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TermsAndConditions.TermsAndConditions_C.BndEvt__TermsAndConditions_ButtonAccept_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTermsAndConditions_C::BndEvt__TermsAndConditions_ButtonAccept_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "BndEvt__TermsAndConditions_ButtonAccept_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TermsAndConditions.TermsAndConditions_C.ExecuteUbergraph_TermsAndConditions
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (None)
// bool                               K2Node_SwitchString_CmpSuccess                                   (None)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (None)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (ZeroConstructor)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1                         (None)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue_1                         (ZeroConstructor)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (ZeroConstructor)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_1                         (ZeroConstructor)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2                         (None)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue_2                         (ZeroConstructor)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_2                         (ZeroConstructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (ZeroConstructor)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (ZeroConstructor)
// class UShooterGameViewportClient*  CallFunc_GetViewportClient_ReturnValue                           (ZeroConstructor)
// class UPrimalUI*                   CallFunc_GetUISceneFromClass_ReturnValue                         (ZeroConstructor)
// class UPrimalUI*                   CallFunc_GetUISceneFromClass_ReturnValue_1                       (ZeroConstructor)
// class UUI_MainMenu*                K2Node_DynamicCast_AsUI_Main_Menu                                (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UUI_ListSessions*            K2Node_DynamicCast_AsUI_List_Sessions                            (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)

void UTermsAndConditions_C::ExecuteUbergraph_TermsAndConditions(int32 EntryPoint, const class FString& CallFunc_GetPlatformName_ReturnValue, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue_1, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue_1, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue_2, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class UShooterGameViewportClient* CallFunc_GetViewportClient_ReturnValue, class UPrimalUI* CallFunc_GetUISceneFromClass_ReturnValue, class UPrimalUI* CallFunc_GetUISceneFromClass_ReturnValue_1, class UUI_MainMenu* K2Node_DynamicCast_AsUI_Main_Menu, bool K2Node_DynamicCast_bSuccess, class UUI_ListSessions* K2Node_DynamicCast_AsUI_List_Sessions, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "ExecuteUbergraph_TermsAndConditions");

	Params::UTermsAndConditions_C_ExecuteUbergraph_TermsAndConditions_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;
	Parms.CallFunc_BPGetGlobalUIData_ReturnValue = CallFunc_BPGetGlobalUIData_ReturnValue;
	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1 = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1;
	Parms.CallFunc_BPGetGlobalUIData_ReturnValue_1 = CallFunc_BPGetGlobalUIData_ReturnValue_1;
	Parms.CallFunc_GetIconForKeyName_ReturnValue = CallFunc_GetIconForKeyName_ReturnValue;
	Parms.CallFunc_GetIconForKeyName_ReturnValue_1 = CallFunc_GetIconForKeyName_ReturnValue_1;
	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2 = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2;
	Parms.CallFunc_BPGetGlobalUIData_ReturnValue_2 = CallFunc_BPGetGlobalUIData_ReturnValue_2;
	Parms.CallFunc_GetIconForKeyName_ReturnValue_2 = CallFunc_GetIconForKeyName_ReturnValue_2;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.CallFunc_GetViewportClient_ReturnValue = CallFunc_GetViewportClient_ReturnValue;
	Parms.CallFunc_GetUISceneFromClass_ReturnValue = CallFunc_GetUISceneFromClass_ReturnValue;
	Parms.CallFunc_GetUISceneFromClass_ReturnValue_1 = CallFunc_GetUISceneFromClass_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUI_Main_Menu = K2Node_DynamicCast_AsUI_Main_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsUI_List_Sessions = K2Node_DynamicCast_AsUI_List_Sessions;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TermsAndConditions.TermsAndConditions_C.OnCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTermsAndConditions_C::OnCancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "OnCancel__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TermsAndConditions.TermsAndConditions_C.OnAgree__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTermsAndConditions_C::OnAgree__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TermsAndConditions_C", "OnAgree__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


