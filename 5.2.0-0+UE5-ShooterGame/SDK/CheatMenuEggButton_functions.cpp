#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CheatMenuEggButton.CheatMenuEggButton_C
// (None)

class UClass* UCheatMenuEggButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatMenuEggButton_C");

	return Clss;
}


// CheatMenuEggButton_C CheatMenuEggButton.Default__CheatMenuEggButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatMenuEggButton_C* UCheatMenuEggButton_C::GetDefaultObj()
{
	static class UCheatMenuEggButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatMenuEggButton_C*>(UCheatMenuEggButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheatMenuEggButton.CheatMenuEggButton_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCheatMenuEggButton_C::BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuEggButton_C", "BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenuEggButton.CheatMenuEggButton_C.ExecuteUbergraph_CheatMenuEggButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               Temp_bool_Variable                                               (None)
// bool                               Temp_bool_Variable_1                                             (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ZeroConstructor)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class FText                        CallFunc_GetText_ReturnValue                                     (AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsChecked_ReturnValue                                   (None)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (None)
// TSoftClassPtr<class UPrimalItem>   K2Node_Select_Default                                            (ZeroConstructor, AutoWeak, AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (None)
// TSoftClassPtr<class UPrimalItem>   K2Node_Select_Default_1                                          (None)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue_1                 (None)

void UCheatMenuEggButton_C::ExecuteUbergraph_CheatMenuEggButton(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsChecked_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, TSoftClassPtr<class UPrimalItem> K2Node_Select_Default, bool CallFunc_IsValidSoftClassReference_ReturnValue, TSoftClassPtr<class UPrimalItem> K2Node_Select_Default_1, bool CallFunc_IsValidSoftClassReference_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuEggButton_C", "ExecuteUbergraph_CheatMenuEggButton");

	Params::UCheatMenuEggButton_C_ExecuteUbergraph_CheatMenuEggButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue_1 = CallFunc_IsValidSoftClassReference_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


