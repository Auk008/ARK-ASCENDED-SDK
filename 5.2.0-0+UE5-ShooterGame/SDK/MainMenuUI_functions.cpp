#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MainMenuUI.MainMenuUI_C
// (None)

class UClass* UMainMenuUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuUI_C");

	return Clss;
}


// MainMenuUI_C MainMenuUI.Default__MainMenuUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuUI_C* UMainMenuUI_C::GetDefaultObj()
{
	static class UMainMenuUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuUI_C*>(UMainMenuUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuUI.MainMenuUI_C.OverrideBGImage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  BGOverrideTexture                                                (Edit, ZeroConstructor)
// bool                               InstantChange                                                    (None)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, ZeroConstructor)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UTexture2D*                  CallFunc_GetMainMenuBackgroundTexture_ReturnValue                (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_IsVisible_ReturnValue                                   (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, ZeroConstructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (None)
// float                              CallFunc_BreakColor_R                                            (None)
// float                              CallFunc_BreakColor_G                                            (None)
// float                              CallFunc_BreakColor_B                                            (None)
// float                              CallFunc_BreakColor_A                                            (None)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (None)

void UMainMenuUI_C::OverrideBGImage(class UTexture2D* BGOverrideTexture, bool InstantChange, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AShooterGame_Menu* K2Node_DynamicCast_AsShooter_Game_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UTexture2D* CallFunc_GetMainMenuBackgroundTexture_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuUI_C", "OverrideBGImage");

	Params::UMainMenuUI_C_OverrideBGImage_Params Parms{};

	Parms.BGOverrideTexture = BGOverrideTexture;
	Parms.InstantChange = InstantChange;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Game_Menu = K2Node_DynamicCast_AsShooter_Game_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMainMenuBackgroundTexture_ReturnValue = CallFunc_GetMainMenuBackgroundTexture_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuUI.MainMenuUI_C.UpdateLeftTextPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCTAVisible                                                     (None)
// bool                               Temp_bool_Variable                                               (None)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (None)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (None)
// struct FMargin                     K2Node_Select_Default                                            (None)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (None)

void UMainMenuUI_C::UpdateLeftTextPosition(bool IsCTAVisible, bool Temp_bool_Variable, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, const struct FMargin& K2Node_Select_Default, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuUI_C", "UpdateLeftTextPosition");

	Params::UMainMenuUI_C_UpdateLeftTextPosition_Params Parms{};

	Parms.IsCTAVisible = IsCTAVisible;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuUI.MainMenuUI_C.BndEvt__ScorchedEarthStoreButton_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMainMenuUI_C::BndEvt__ScorchedEarthStoreButton_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuUI_C", "BndEvt__ScorchedEarthStoreButton_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuUI.MainMenuUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainMenuUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuUI.MainMenuUI_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMainMenuUI_C::BndEvt__CreditsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuUI_C", "BndEvt__CreditsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuUI.MainMenuUI_C.BndEvt__WebButton_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMainMenuUI_C::BndEvt__WebButton_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuUI_C", "BndEvt__WebButton_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuUI.MainMenuUI_C.ExecuteUbergraph_MainMenuUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, ZeroConstructor)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UTexture2D*                  CallFunc_GetMainMenuBackgroundTexture_ReturnValue                (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              CallFunc_GetUpsellIndex_ReturnValue                              (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (Edit, ZeroConstructor, SimpleDisplay, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// int32                              CallFunc_GetUpsellIndex_ReturnValue_1                            (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (Edit, ZeroConstructor, AssetRegistrySearchable, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (None)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_1                      (Edit, ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_1                                  (Edit, ZeroConstructor, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_2                      (Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_2                                  (Edit, ZeroConstructor)
// int32                              CallFunc_GetUpsellIndex_ReturnValue_2                            (None)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (None)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// double                             CallFunc_BreakVector2D_X                                         (None)
// double                             CallFunc_BreakVector2D_Y                                         (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// bool                               CallFunc_OpenUrl_ReturnValue                                     (None)
// bool                               CallFunc_OpenUrl_ReturnValue_1                                   (None)
// class UCreditsUI_C*                CallFunc_Create_ReturnValue                                      (None)
// bool                               CallFunc_Play_ReturnValue                                        (None)

void UMainMenuUI_C::ExecuteUbergraph_MainMenuUI(int32 EntryPoint, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AShooterGame_Menu* K2Node_DynamicCast_AsShooter_Game_Menu, bool K2Node_DynamicCast_bSuccess, class UTexture2D* CallFunc_GetMainMenuBackgroundTexture_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetUpsellIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, int32 CallFunc_GetUpsellIndex_ReturnValue_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, bool K2Node_SwitchInteger_CmpSuccess, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_2, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_2, int32 CallFunc_GetUpsellIndex_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess_1, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_OpenUrl_ReturnValue, bool CallFunc_OpenUrl_ReturnValue_1, class UCreditsUI_C* CallFunc_Create_ReturnValue, bool CallFunc_Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuUI_C", "ExecuteUbergraph_MainMenuUI");

	Params::UMainMenuUI_C_ExecuteUbergraph_MainMenuUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Game_Menu = K2Node_DynamicCast_AsShooter_Game_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMainMenuBackgroundTexture_ReturnValue = CallFunc_GetMainMenuBackgroundTexture_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUpsellIndex_ReturnValue = CallFunc_GetUpsellIndex_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.CallFunc_GetUpsellIndex_ReturnValue_1 = CallFunc_GetUpsellIndex_ReturnValue_1;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_1 = CallFunc_MakeBrushFromTexture_ReturnValue_1;
	Parms.K2Node_MakeStruct_ButtonStyle_1 = K2Node_MakeStruct_ButtonStyle_1;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_2 = CallFunc_MakeBrushFromTexture_ReturnValue_2;
	Parms.K2Node_MakeStruct_ButtonStyle_2 = K2Node_MakeStruct_ButtonStyle_2;
	Parms.CallFunc_GetUpsellIndex_ReturnValue_2 = CallFunc_GetUpsellIndex_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_OpenUrl_ReturnValue = CallFunc_OpenUrl_ReturnValue;
	Parms.CallFunc_OpenUrl_ReturnValue_1 = CallFunc_OpenUrl_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Play_ReturnValue = CallFunc_Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


