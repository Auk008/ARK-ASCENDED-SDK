#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ReMainMenuUI_ASA.ReMainMenuUI_ASA_C
// (None)

class UClass* UReMainMenuUI_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReMainMenuUI_ASA_C");

	return Clss;
}


// ReMainMenuUI_ASA_C ReMainMenuUI_ASA.Default__ReMainMenuUI_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReMainMenuUI_ASA_C* UReMainMenuUI_ASA_C::GetDefaultObj()
{
	static class UReMainMenuUI_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReMainMenuUI_ASA_C*>(UReMainMenuUI_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.SettingsOverlayIsOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (None)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (Edit, ZeroConstructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (None)
// class UASAUI_MainMenuWidget_SettingsOverlay_C*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay     (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsVisible_ReturnValue                                   (None)

void UReMainMenuUI_ASA_C::SettingsOverlayIsOpen(bool ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UASAUI_MainMenuWidget_SettingsOverlay_C* K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "SettingsOverlayIsOpen");

	Params::UReMainMenuUI_ASA_C_SettingsOverlayIsOpen_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay = K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.HighlightTheStartButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)

void UReMainMenuUI_ASA_C::HighlightTheStartButton(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "HighlightTheStartButton");

	Params::UReMainMenuUI_ASA_C_HighlightTheStartButton_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnKeyDownEvent
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FKeyEvent                   InKeyboardEvent                                                  (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// struct FEventReply                 ReturnValue                                                      (AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// struct FKey                        LocalKey                                                         (ContainsInstancedReference, SimpleDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (SimpleDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// struct FEventReply                 CallFunc_OnKeyDownEvent_ReturnValue                              (None)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (None)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_1                      (None)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (None)

void UReMainMenuUI_ASA_C::OnKeyDownEvent(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyboardEvent, const struct FEventReply& ReturnValue, const struct FKey& LocalKey, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_OnKeyDownEvent_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnKeyDownEvent");

	Params::UReMainMenuUI_ASA_C_OnKeyDownEvent_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyboardEvent = InKeyboardEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.LocalKey = LocalKey;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_OnKeyDownEvent_ReturnValue = CallFunc_OnKeyDownEvent_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_1 = CallFunc_GetActiveWidgetIndex_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.UpdateLeftTextPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCTAVisible                                                     (None)
// bool                               Temp_bool_Variable                                               (None)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (None)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (None)
// struct FMargin                     K2Node_Select_Default                                            (None)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (None)

void UReMainMenuUI_ASA_C::UpdateLeftTextPosition(bool IsCTAVisible, bool Temp_bool_Variable, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, const struct FMargin& K2Node_Select_Default, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "UpdateLeftTextPosition");

	Params::UReMainMenuUI_ASA_C_UpdateLeftTextPosition_Params Parms{};

	Parms.IsCTAVisible = IsCTAVisible;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.BndEvt__ReMainMenuUI_ASA_SettingsButton_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::BndEvt__ReMainMenuUI_ASA_SettingsButton_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "BndEvt__ReMainMenuUI_ASA_SettingsButton_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnCreditsClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::OnCreditsClicked_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnCreditsClicked_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnQuitGameClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::OnQuitGameClicked_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnQuitGameClicked_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnSettingsClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::OnSettingsClicked_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnSettingsClicked_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_6_OnModsClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_6_OnModsClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_6_OnModsClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.BndEvt__MainMenuUI_WebLink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::BndEvt__MainMenuUI_WebLink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "BndEvt__MainMenuUI_WebLink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.EscapeMainMenuPressed
// (Event, Public, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::EscapeMainMenuPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "EscapeMainMenuPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.StartMainMenuPressed
// (Event, Public, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::StartMainMenuPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "StartMainMenuPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.HighlightStartButton
// (Event, Public, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::HighlightStartButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "HighlightStartButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnBackClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::OnBackClicked_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnBackClicked_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.StopAllCardAnims
// (Event, Public, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::StopAllCardAnims()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "StopAllCardAnims");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::BndEvt__CreditsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "BndEvt__CreditsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_4_OnCreateGameClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_4_OnCreateGameClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_4_OnCreateGameClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.ClosedEvent_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::ClosedEvent_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "ClosedEvent_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnGamepadActiveChangedBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsGamepadActive                                                 (None)

void UReMainMenuUI_ASA_C::OnGamepadActiveChangedBP(bool bIsGamepadActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnGamepadActiveChangedBP");

	Params::UReMainMenuUI_ASA_C_OnGamepadActiveChangedBP_Params Parms{};

	Parms.bIsGamepadActive = bIsGamepadActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnGamepadSelectionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (None)

void UReMainMenuUI_ASA_C::OnGamepadSelectionChanged(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnGamepadSelectionChanged");

	Params::UReMainMenuUI_ASA_C_OnGamepadSelectionChanged_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_3_OnMultiplayerClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_3_OnMultiplayerClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_3_OnMultiplayerClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnMediaReachedEnd_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::OnMediaReachedEnd_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnMediaReachedEnd_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.JumpIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::JumpIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "JumpIntro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnMediaReachedEnd_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::OnMediaReachedEnd_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnMediaReachedEnd_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_2_OnBackSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_2_OnBackSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_2_OnBackSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.StopIntroCinematic
// (Event, Public, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::StopIntroCinematic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "StopIntroCinematic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.OnCFCoreUIControllerInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::OnCFCoreUIControllerInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "OnCFCoreUIControllerInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.SetMainJoinedButtonVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        NewVisibilty                                                     (None)

void UReMainMenuUI_ASA_C::SetMainJoinedButtonVisibility(enum class ESlateVisibility NewVisibilty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "SetMainJoinedButtonVisibility");

	Params::UReMainMenuUI_ASA_C_SetMainJoinedButtonVisibility_Params Parms{};

	Parms.NewVisibilty = NewVisibilty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_LandingScreen_K2Node_ComponentBoundEvent_7_OnGoToLastPlayedButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_LandingScreen_K2Node_ComponentBoundEvent_7_OnGoToLastPlayedButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_LandingScreen_K2Node_ComponentBoundEvent_7_OnGoToLastPlayedButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UReMainMenuUI_ASA_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "Tick");

	Params::UReMainMenuUI_ASA_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_LandingScreen_K2Node_ComponentBoundEvent_1_OnStartButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReMainMenuUI_ASA_C::BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_LandingScreen_K2Node_ComponentBoundEvent_1_OnStartButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_LandingScreen_K2Node_ComponentBoundEvent_1_OnStartButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReMainMenuUI_ASA.ReMainMenuUI_ASA_C.ExecuteUbergraph_ReMainMenuUI_ASA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class UASAUI_MainMenuWidget_SettingsOverlay_C*CallFunc_Create_ReturnValue                                      (Edit, ZeroConstructor)
// TSoftObjectPtr<class UASAUI_MainMenuWidget_SettingsOverlay_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (Edit, ZeroConstructor)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (Edit, ZeroConstructor)
// bool                               CallFunc_RegisterModelClass_ReturnValue                          (None)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (None)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (Edit, ZeroConstructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (None)
// class UASAUI_MainMenuWidget_SettingsOverlay_C*K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay     (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_IsVisible_ReturnValue                                   (None)
// class UCreditsUI_C*                CallFunc_Create_ReturnValue_1                                    (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (Edit, ZeroConstructor)
// bool                               K2Node_Event_bIsGamepadActive                                    (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (Edit, ZeroConstructor)
// class UWidget*                     K2Node_Event_widget                                              (Edit, ZeroConstructor)
// class UCustomButtonWidget*         K2Node_DynamicCast_AsCustom_Button_Widget                        (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_Play_ReturnValue                                        (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_Rewind_ReturnValue                                      (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (Edit, ZeroConstructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (None)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ZeroConstructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (Edit, ZeroConstructor)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, ZeroConstructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (Edit, ZeroConstructor)
// class UShooterGameInstance*        K2Node_DynamicCast_AsShooter_Game_Instance                       (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// enum class ESlateVisibility        K2Node_Event_newVisibilty                                        (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_1                (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// bool                               CallFunc_Play_ReturnValue_1                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (None)

void UReMainMenuUI_ASA_C::ExecuteUbergraph_ReMainMenuUI_ASA(int32 EntryPoint, class UASAUI_MainMenuWidget_SettingsOverlay_C* CallFunc_Create_ReturnValue, TSoftObjectPtr<class UASAUI_MainMenuWidget_SettingsOverlay_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_RegisterModelClass_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UASAUI_MainMenuWidget_SettingsOverlay_C* K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UCreditsUI_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_Event_bIsGamepadActive, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UWidget* K2Node_Event_widget, class UCustomButtonWidget* K2Node_DynamicCast_AsCustom_Button_Widget, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Play_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Rewind_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UShooterGameInstance* K2Node_DynamicCast_AsShooter_Game_Instance, bool K2Node_DynamicCast_bSuccess_2, enum class ESlateVisibility K2Node_Event_newVisibilty, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Play_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReMainMenuUI_ASA_C", "ExecuteUbergraph_ReMainMenuUI_ASA");

	Params::UReMainMenuUI_ASA_C_ExecuteUbergraph_ReMainMenuUI_ASA_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_RegisterModelClass_ReturnValue = CallFunc_RegisterModelClass_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay = K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_Event_bIsGamepadActive = K2Node_Event_bIsGamepadActive;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_Event_widget = K2Node_Event_widget;
	Parms.K2Node_DynamicCast_AsCustom_Button_Widget = K2Node_DynamicCast_AsCustom_Button_Widget;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Play_ReturnValue = CallFunc_Play_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Rewind_ReturnValue = CallFunc_Rewind_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Game_Instance = K2Node_DynamicCast_AsShooter_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Event_newVisibilty = K2Node_Event_newVisibilty;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_1 = CallFunc_GetShooterGameUserSettings_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Play_ReturnValue_1 = CallFunc_Play_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


