#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FinalCreditsUI.FinalCreditsUI_C
// (None)

class UClass* UFinalCreditsUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FinalCreditsUI_C");

	return Clss;
}


// FinalCreditsUI_C FinalCreditsUI.Default__FinalCreditsUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFinalCreditsUI_C* UFinalCreditsUI_C::GetDefaultObj()
{
	static class UFinalCreditsUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFinalCreditsUI_C*>(UFinalCreditsUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FinalCreditsUI.FinalCreditsUI_C.ConditionallySetupSkipButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFinalCreditsUI_C::ConditionallySetupSkipButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FinalCreditsUI_C", "ConditionallySetupSkipButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FinalCreditsUI.FinalCreditsUI_C.Play Credits Music
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetLastMapPlayed_ReturnValue                            (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (None)

void UFinalCreditsUI_C::Play_Credits_Music(const class FString& CallFunc_GetLastMapPlayed_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FinalCreditsUI_C", "Play Credits Music");

	Params::UFinalCreditsUI_C_Play_Credits_Music_Params Parms{};

	Parms.CallFunc_GetLastMapPlayed_ReturnValue = CallFunc_GetLastMapPlayed_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FinalCreditsUI.FinalCreditsUI_C.OnMoviePlaybackFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      MoviePath                                                        (None)
// bool                               bPlaybackWasCancelled                                            (None)
// class AShooterPlayerController*    CallFunc_GetPC_ReturnValue                                       (ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (None)

void UFinalCreditsUI_C::OnMoviePlaybackFinished(const class FString& MoviePath, bool bPlaybackWasCancelled, class AShooterPlayerController* CallFunc_GetPC_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FinalCreditsUI_C", "OnMoviePlaybackFinished");

	Params::UFinalCreditsUI_C_OnMoviePlaybackFinished_Params Parms{};

	Parms.MoviePath = MoviePath;
	Parms.bPlaybackWasCancelled = bPlaybackWasCancelled;
	Parms.CallFunc_GetPC_ReturnValue = CallFunc_GetPC_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FinalCreditsUI.FinalCreditsUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFinalCreditsUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FinalCreditsUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FinalCreditsUI.FinalCreditsUI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UFinalCreditsUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FinalCreditsUI_C", "Tick");

	Params::UFinalCreditsUI_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FinalCreditsUI.FinalCreditsUI_C.CloseButtonEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFinalCreditsUI_C::CloseButtonEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FinalCreditsUI_C", "CloseButtonEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FinalCreditsUI.FinalCreditsUI_C.RemovedFromViewport
// (Event, Public, BlueprintEvent)
// Parameters:

void UFinalCreditsUI_C::RemovedFromViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FinalCreditsUI_C", "RemovedFromViewport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FinalCreditsUI.FinalCreditsUI_C.AddedToViewport
// (Event, Public, BlueprintEvent)
// Parameters:

void UFinalCreditsUI_C::AddedToViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FinalCreditsUI_C", "AddedToViewport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FinalCreditsUI.FinalCreditsUI_C.BndEvt__FinalCreditsUI_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UFinalCreditsUI_C::BndEvt__FinalCreditsUI_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FinalCreditsUI_C", "BndEvt__FinalCreditsUI_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FinalCreditsUI.FinalCreditsUI_C.ExecuteUbergraph_FinalCreditsUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (None)
// double                             CallFunc_FInterpTo_ReturnValue                                   (None)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor)
// class UPrimalGlobalsBlueprint_C*   K2Node_DynamicCast_AsPrimal_Globals_Blueprint                    (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class AShooterPlayerController*    CallFunc_GetPC_ReturnValue                                       (ZeroConstructor)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (ZeroConstructor)
// bool                               CallFunc_IsPlayInEditor_ReturnValue                              (None)
// bool                               CallFunc_IsStandalone_ReturnValue                                (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class UWorld*                      CallFunc_GetPrimaryWorld_ReturnValue                             (ZeroConstructor)
// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue                            (ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor)
// class APrimalWorldSettings*        K2Node_DynamicCast_AsPrimal_World_Settings                       (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (None)
// bool                               CallFunc_IsClient_ReturnValue                                    (None)
// bool                               CallFunc_PlayMovie_ReturnValue                                   (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (None)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (None)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast                        (None)

void UFinalCreditsUI_C::ExecuteUbergraph_FinalCreditsUI(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_FInterpTo_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class UPrimalGlobalsBlueprint_C* K2Node_DynamicCast_AsPrimal_Globals_Blueprint, bool K2Node_DynamicCast_bSuccess_1, class AShooterPlayerController* CallFunc_GetPC_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, bool CallFunc_IsStandalone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWorld* CallFunc_GetPrimaryWorld_ReturnValue, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsClient_ReturnValue, bool CallFunc_PlayMovie_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_FInterpTo_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FinalCreditsUI_C", "ExecuteUbergraph_FinalCreditsUI");

	Params::UFinalCreditsUI_C_ExecuteUbergraph_FinalCreditsUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Globals_Blueprint = K2Node_DynamicCast_AsPrimal_Globals_Blueprint;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPC_ReturnValue = CallFunc_GetPC_ReturnValue;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.CallFunc_IsPlayInEditor_ReturnValue = CallFunc_IsPlayInEditor_ReturnValue;
	Parms.CallFunc_IsStandalone_ReturnValue = CallFunc_IsStandalone_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetPrimaryWorld_ReturnValue = CallFunc_GetPrimaryWorld_ReturnValue;
	Parms.CallFunc_GetWorldSettings_ReturnValue = CallFunc_GetWorldSettings_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsPrimal_World_Settings = K2Node_DynamicCast_AsPrimal_World_Settings;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_IsClient_ReturnValue = CallFunc_IsClient_ReturnValue;
	Parms.CallFunc_PlayMovie_ReturnValue = CallFunc_PlayMovie_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_FInterpTo_DeltaTime_ImplicitCast = CallFunc_FInterpTo_DeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FinalCreditsUI.FinalCreditsUI_C.OnCreditsClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFinalCreditsUI_C::OnCreditsClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FinalCreditsUI_C", "OnCreditsClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


