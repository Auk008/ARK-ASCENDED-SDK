#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xEB0 - 0xEB0)
// BlueprintGeneratedClass PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C
class UPrimalItemResource_ElementShard_C : public UPrimalItemResourceGeneric_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItemResource_ElementShard_C* GetDefaultObj();

	void RefillElementShard(class UPrimalItem* DestinationItem, const TArray<double>& CustomFloats, class UObject* CallFunc_GetDefaultObject_ReturnValue, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, class UPrimalItem* K2Node_DynamicCast_AsPrimal_Item, bool K2Node_DynamicCast_bSuccess, const struct FCustomItemData& K2Node_MakeStruct_CustomItemData, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue, const TArray<float>& K2Node_MakeStruct_CustomDataFloats_ImplicitCast, const TArray<double>& K2Node_VariableSet_CustomFloats_ImplicitCast);
	void CheckForElementShardData(class UPrimalItem* DestinationItem, bool SupportsDragOnto, bool ReturnVal, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, float CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	void BPSupportUseOntoItem(class UPrimalItem* DestinationItem, bool ReturnValue, bool CallFunc_CheckForElementShardData_SupportsDragOnto);
	void BPUsedOntoItem(class UPrimalItem* DestinationItem, int32 AdditionalData);
};

}


