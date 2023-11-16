#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CheatMenuItemAllButton.CheatMenuItemAllButton_C
// (None)

class UClass* UCheatMenuItemAllButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatMenuItemAllButton_C");

	return Clss;
}


// CheatMenuItemAllButton_C CheatMenuItemAllButton.Default__CheatMenuItemAllButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatMenuItemAllButton_C* UCheatMenuItemAllButton_C::GetDefaultObj()
{
	static class UCheatMenuItemAllButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatMenuItemAllButton_C*>(UCheatMenuItemAllButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheatMenuItemAllButton.CheatMenuItemAllButton_C.BndEvt__CheatMenuAllButton_SpawnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCheatMenuItemAllButton_C::BndEvt__CheatMenuAllButton_SpawnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuItemAllButton_C", "BndEvt__CheatMenuAllButton_SpawnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenuItemAllButton.CheatMenuItemAllButton_C.ExecuteUbergraph_CheatMenuItemAllButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ZeroConstructor)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsChecked_ReturnValue                                   (None)
// bool                               CallFunc_IsChecked_ReturnValue_1                                 (None)
// class FText                        CallFunc_GetText_ReturnValue                                     (SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (None)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (None)
// float                              CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast          (None)

void UCheatMenuItemAllButton_C::ExecuteUbergraph_CheatMenuItemAllButton(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TSoftClassPtr<class UPrimalItem> CallFunc_Array_Get_Item, bool CallFunc_IsValidSoftClassReference_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, double CallFunc_Conv_StringToDouble_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Conv_StringToInt_ReturnValue, float CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuItemAllButton_C", "ExecuteUbergraph_CheatMenuItemAllButton");

	Params::UCheatMenuItemAllButton_C_ExecuteUbergraph_CheatMenuItemAllButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue_1 = CallFunc_IsChecked_ReturnValue_1;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue = CallFunc_Conv_StringToDouble_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast = CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


