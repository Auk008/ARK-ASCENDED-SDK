#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C
// (None)

class UClass* UPrimalItemResource_ElementShard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_ElementShard_C");

	return Clss;
}


// PrimalItemResource_ElementShard_C PrimalItemResource_ElementShard.Default__PrimalItemResource_ElementShard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_ElementShard_C* UPrimalItemResource_ElementShard_C::GetDefaultObj()
{
	static class UPrimalItemResource_ElementShard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_ElementShard_C*>(UPrimalItemResource_ElementShard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.RefillElementShard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (ZeroConstructor)
// TArray<double>                     CustomFloats                                                     (AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class UObject*                     CallFunc_GetDefaultObject_ReturnValue                            (ZeroConstructor)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (ZeroConstructor, AssetRegistrySearchable, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (None)
// class UPrimalItem*                 K2Node_DynamicCast_AsPrimal_Item                                 (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// struct FCustomItemData             K2Node_MakeStruct_CustomItemData                                 (ContainsInstancedReference, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (None)
// TArray<float>                      K2Node_MakeStruct_CustomDataFloats_ImplicitCast                  (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TArray<double>                     K2Node_VariableSet_CustomFloats_ImplicitCast                     (None)

void UPrimalItemResource_ElementShard_C::RefillElementShard(class UPrimalItem* DestinationItem, const TArray<double>& CustomFloats, class UObject* CallFunc_GetDefaultObject_ReturnValue, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, class UPrimalItem* K2Node_DynamicCast_AsPrimal_Item, bool K2Node_DynamicCast_bSuccess, const struct FCustomItemData& K2Node_MakeStruct_CustomItemData, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue, const TArray<float>& K2Node_MakeStruct_CustomDataFloats_ImplicitCast, const TArray<double>& K2Node_VariableSet_CustomFloats_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_ElementShard_C", "RefillElementShard");

	Params::UPrimalItemResource_ElementShard_C_RefillElementShard_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.CustomFloats = CustomFloats;
	Parms.CallFunc_GetDefaultObject_ReturnValue = CallFunc_GetDefaultObject_ReturnValue;
	Parms.CallFunc_GetCustomItemData_OutData = CallFunc_GetCustomItemData_OutData;
	Parms.CallFunc_GetCustomItemData_ReturnValue = CallFunc_GetCustomItemData_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Item = K2Node_DynamicCast_AsPrimal_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_CustomItemData = K2Node_MakeStruct_CustomItemData;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue = CallFunc_MakeLiteralDouble_ReturnValue;
	Parms.K2Node_MakeStruct_CustomDataFloats_ImplicitCast = K2Node_MakeStruct_CustomDataFloats_ImplicitCast;
	Parms.K2Node_VariableSet_CustomFloats_ImplicitCast = K2Node_VariableSet_CustomFloats_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.CheckForElementShardData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (ZeroConstructor)
// bool                               SupportsDragOnto                                                 (None)
// bool                               ReturnVal                                                        (None)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (None)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (None)
// float                              CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (None)

void UPrimalItemResource_ElementShard_C::CheckForElementShardData(class UPrimalItem* DestinationItem, bool SupportsDragOnto, bool ReturnVal, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, float CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_ElementShard_C", "CheckForElementShardData");

	Params::UPrimalItemResource_ElementShard_C_CheckForElementShardData_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.SupportsDragOnto = SupportsDragOnto;
	Parms.ReturnVal = ReturnVal;
	Parms.CallFunc_GetCustomItemData_OutData = CallFunc_GetCustomItemData_OutData;
	Parms.CallFunc_GetCustomItemData_ReturnValue = CallFunc_GetCustomItemData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.BPSupportUseOntoItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (None)
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_CheckForElementShardData_SupportsDragOnto               (None)

void UPrimalItemResource_ElementShard_C::BPSupportUseOntoItem(class UPrimalItem* DestinationItem, bool ReturnValue, bool CallFunc_CheckForElementShardData_SupportsDragOnto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_ElementShard_C", "BPSupportUseOntoItem");

	Params::UPrimalItemResource_ElementShard_C_BPSupportUseOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_CheckForElementShardData_SupportsDragOnto = CallFunc_CheckForElementShardData_SupportsDragOnto;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C.BPUsedOntoItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (None)
// int32                              AdditionalData                                                   (None)

void UPrimalItemResource_ElementShard_C::BPUsedOntoItem(class UPrimalItem* DestinationItem, int32 AdditionalData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_ElementShard_C", "BPUsedOntoItem");

	Params::UPrimalItemResource_ElementShard_C_BPUsedOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.AdditionalData = AdditionalData;

	UObject::ProcessEvent(Func, &Parms);

}

}


