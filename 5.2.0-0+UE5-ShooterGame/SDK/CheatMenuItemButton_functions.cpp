#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CheatMenuItemButton.CheatMenuItemButton_C
// (None)

class UClass* UCheatMenuItemButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatMenuItemButton_C");

	return Clss;
}


// CheatMenuItemButton_C CheatMenuItemButton.Default__CheatMenuItemButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatMenuItemButton_C* UCheatMenuItemButton_C::GetDefaultObj()
{
	static class UCheatMenuItemButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatMenuItemButton_C*>(UCheatMenuItemButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheatMenuItemButton.CheatMenuItemButton_C.SetItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemClass                                                        (ZeroConstructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor)
// class UPrimalItem*                 K2Node_DynamicCast_AsPrimal_Item                                 (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UPrimalItemDyeGeneric_C*     K2Node_DynamicCast_AsPrimal_Item_Dye_Generic                     (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class FString                      CallFunc_GetItemShortName_ReturnValue                            (None)

void UCheatMenuItemButton_C::SetItem(class UClass* ItemClass, class FText CallFunc_Conv_StringToText_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class UPrimalItem* K2Node_DynamicCast_AsPrimal_Item, bool K2Node_DynamicCast_bSuccess, class UPrimalItemDyeGeneric_C* K2Node_DynamicCast_AsPrimal_Item_Dye_Generic, bool K2Node_DynamicCast_bSuccess_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetItemShortName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuItemButton_C", "SetItem");

	Params::UCheatMenuItemButton_C_SetItem_Params Parms{};

	Parms.ItemClass = ItemClass;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Item = K2Node_DynamicCast_AsPrimal_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Dye_Generic = K2Node_DynamicCast_AsPrimal_Item_Dye_Generic;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemShortName_ReturnValue = CallFunc_GetItemShortName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMenuItemButton.CheatMenuItemButton_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCheatMenuItemButton_C::BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuItemButton_C", "BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenuItemButton.CheatMenuItemButton_C.ExecuteUbergraph_CheatMenuItemButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor)
// bool                               Temp_bool_Variable                                               (None)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class FString                      Temp_string_Variable                                             (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_1                                           (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// bool                               Temp_bool_Variable_1                                             (None)
// class FString                      Temp_string_Variable_2                                           (SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_3                                           (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsChecked_ReturnValue                                   (None)
// bool                               CallFunc_IsChecked_ReturnValue_1                                 (None)
// class FString                      K2Node_Select_Default                                            (AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FString                      K2Node_Select_Default_1                                          (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_GetText_ReturnValue                                     (AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ContainsInstancedReference, SimpleDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (ContainsInstancedReference, AssetRegistrySearchable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (AssetRegistrySearchable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Conv_ClassToSoftClassReference_ReturnValue              (None)
// float                              CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast          (None)

void UCheatMenuItemButton_C::ExecuteUbergraph_CheatMenuItemButton(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool Temp_bool_Variable, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool K2Node_DynamicCast_bSuccess, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, const class FString& K2Node_Select_Default, const class FString& K2Node_Select_Default_1, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, double CallFunc_Conv_StringToDouble_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, int32 CallFunc_Conv_StringToInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_NotEqual_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, TSoftClassPtr<class UPrimalItem> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, float CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuItemButton_C", "ExecuteUbergraph_CheatMenuItemButton");

	Params::UCheatMenuItemButton_C_ExecuteUbergraph_CheatMenuItemButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue_1 = CallFunc_IsChecked_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue = CallFunc_Conv_StringToDouble_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Conv_ClassToSoftClassReference_ReturnValue = CallFunc_Conv_ClassToSoftClassReference_ReturnValue;
	Parms.CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast = CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


