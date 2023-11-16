#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C
// (None)

class UClass* UPrimalItemResource_Gasoline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Gasoline_C");

	return Clss;
}


// PrimalItemResource_Gasoline_C PrimalItemResource_Gasoline.Default__PrimalItemResource_Gasoline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Gasoline_C* UPrimalItemResource_Gasoline_C::GetDefaultObj()
{
	static class UPrimalItemResource_Gasoline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Gasoline_C*>(UPrimalItemResource_Gasoline_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.CheckForGasolineData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (ZeroConstructor)
// bool                               SupportsDragOn                                                   (None)
// bool                               ReturnValue_Loc                                                  (None)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (None)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (None)
// float                              CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (None)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (None)

void UPrimalItemResource_Gasoline_C::CheckForGasolineData(class UPrimalItem* DestinationItem, bool SupportsDragOn, bool ReturnValue_Loc, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, float CallFunc_Array_Get_Item, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Gasoline_C", "CheckForGasolineData");

	Params::UPrimalItemResource_Gasoline_C_CheckForGasolineData_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.SupportsDragOn = SupportsDragOn;
	Parms.ReturnValue_Loc = ReturnValue_Loc;
	Parms.CallFunc_GetCustomItemData_OutData = CallFunc_GetCustomItemData_OutData;
	Parms.CallFunc_GetCustomItemData_ReturnValue = CallFunc_GetCustomItemData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.RefillGasoline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (ZeroConstructor)
// TArray<double>                     CustomFloats_Loc                                                 (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (None)
// class UObject*                     CallFunc_GetDefaultObject_ReturnValue                            (ZeroConstructor)
// class UPrimalItem*                 K2Node_DynamicCast_AsPrimal_Item                                 (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (AssetRegistrySearchable, Protected, BlueprintCallable, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Protected, BlueprintCallable, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// int32                              CallFunc_IncrementItemQuantity_ReturnValue                       (None)
// struct FCustomItemData             K2Node_MakeStruct_CustomItemData                                 (SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TArray<double>                     K2Node_VariableSet_CustomFloats_Loc_ImplicitCast                 (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TArray<float>                      K2Node_MakeStruct_CustomDataFloats_ImplicitCast                  (None)

void UPrimalItemResource_Gasoline_C::RefillGasoline(class UPrimalItem* DestinationItem, const TArray<double>& CustomFloats_Loc, double CallFunc_MakeLiteralDouble_ReturnValue, class UObject* CallFunc_GetDefaultObject_ReturnValue, class UPrimalItem* K2Node_DynamicCast_AsPrimal_Item, bool K2Node_DynamicCast_bSuccess, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_IncrementItemQuantity_ReturnValue, const struct FCustomItemData& K2Node_MakeStruct_CustomItemData, const TArray<double>& K2Node_VariableSet_CustomFloats_Loc_ImplicitCast, const TArray<float>& K2Node_MakeStruct_CustomDataFloats_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Gasoline_C", "RefillGasoline");

	Params::UPrimalItemResource_Gasoline_C_RefillGasoline_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.CustomFloats_Loc = CustomFloats_Loc;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue = CallFunc_MakeLiteralDouble_ReturnValue;
	Parms.CallFunc_GetDefaultObject_ReturnValue = CallFunc_GetDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Item = K2Node_DynamicCast_AsPrimal_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCustomItemData_OutData = CallFunc_GetCustomItemData_OutData;
	Parms.CallFunc_GetCustomItemData_ReturnValue = CallFunc_GetCustomItemData_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IncrementItemQuantity_ReturnValue = CallFunc_IncrementItemQuantity_ReturnValue;
	Parms.K2Node_MakeStruct_CustomItemData = K2Node_MakeStruct_CustomItemData;
	Parms.K2Node_VariableSet_CustomFloats_Loc_ImplicitCast = K2Node_VariableSet_CustomFloats_Loc_ImplicitCast;
	Parms.K2Node_MakeStruct_CustomDataFloats_ImplicitCast = K2Node_MakeStruct_CustomDataFloats_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPUsedOntoItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (None)
// int32                              AdditionalData                                                   (None)

void UPrimalItemResource_Gasoline_C::BPUsedOntoItem(class UPrimalItem* DestinationItem, int32 AdditionalData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Gasoline_C", "BPUsedOntoItem");

	Params::UPrimalItemResource_Gasoline_C_BPUsedOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.AdditionalData = AdditionalData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C.BPSupportUseOntoItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (None)
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_CheckForGasolineData_SupportsDragOn                     (None)

void UPrimalItemResource_Gasoline_C::BPSupportUseOntoItem(class UPrimalItem* DestinationItem, bool ReturnValue, bool CallFunc_CheckForGasolineData_SupportsDragOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Gasoline_C", "BPSupportUseOntoItem");

	Params::UPrimalItemResource_Gasoline_C_BPSupportUseOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_CheckForGasolineData_SupportsDragOn = CallFunc_CheckForGasolineData_SupportsDragOn;

	UObject::ProcessEvent(Func, &Parms);

}

}


