#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CheatMenuCharacterPresetsButton.CheatMenuCharacterPresetsButton_C
// (None)

class UClass* UCheatMenuCharacterPresetsButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatMenuCharacterPresetsButton_C");

	return Clss;
}


// CheatMenuCharacterPresetsButton_C CheatMenuCharacterPresetsButton.Default__CheatMenuCharacterPresetsButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatMenuCharacterPresetsButton_C* UCheatMenuCharacterPresetsButton_C::GetDefaultObj()
{
	static class UCheatMenuCharacterPresetsButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatMenuCharacterPresetsButton_C*>(UCheatMenuCharacterPresetsButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheatMenuCharacterPresetsButton.CheatMenuCharacterPresetsButton_C.SetValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Cheat_Name                                                       (ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
// struct FCheatMenuCharacterLevelPresetLevels                                                           (None)
// struct FCheatMenuCharacterPresetItemsItems                                                            (AutoWeak, SimpleDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TArray<int32>                      K2Node_MakeArray_Array                                           (None)

void UCheatMenuCharacterPresetsButton_C::SetValues(class FText Cheat_Name, const struct FCheatMenuCharacterLevelPreset& Levels, const struct FCheatMenuCharacterPresetItems& Items, const TArray<int32>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuCharacterPresetsButton_C", "SetValues");

	Params::UCheatMenuCharacterPresetsButton_C_SetValues_Params Parms{};

	Parms.Cheat_Name = Cheat_Name;
	Parms.Levels = Levels;
	Parms.Items = Items;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenuCharacterPresetsButton.CheatMenuCharacterPresetsButton_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCheatMenuCharacterPresetsButton_C::BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuCharacterPresetsButton_C", "BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenuCharacterPresetsButton.CheatMenuCharacterPresetsButton_C.ExecuteUbergraph_CheatMenuCharacterPresetsButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ZeroConstructor)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_IsChecked_ReturnValue                                   (None)
// bool                               CallFunc_CloseActiveHub_ReturnValue                              (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// struct FCheatMenuCheatItem         CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (None)
// float                              CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast          (None)

void UCheatMenuCharacterPresetsButton_C::ExecuteUbergraph_CheatMenuCharacterPresetsButton(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_CloseActiveHub_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FCheatMenuCheatItem& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_IsValidSoftClassReference_ReturnValue, float CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuCharacterPresetsButton_C", "ExecuteUbergraph_CheatMenuCharacterPresetsButton");

	Params::UCheatMenuCharacterPresetsButton_C_ExecuteUbergraph_CheatMenuCharacterPresetsButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetShooterHUD_ReturnValue = CallFunc_GetShooterHUD_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_CloseActiveHub_ReturnValue = CallFunc_CloseActiveHub_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast = CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


