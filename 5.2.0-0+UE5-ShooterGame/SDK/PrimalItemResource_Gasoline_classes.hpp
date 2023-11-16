#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xEB0 - 0xEB0)
// BlueprintGeneratedClass PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C
class UPrimalItemResource_Gasoline_C : public UPrimalItemResource_Craftable_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItemResource_Gasoline_C* GetDefaultObj();

	void CheckForGasolineData(class UPrimalItem* DestinationItem, bool SupportsDragOn, bool ReturnValue_Loc, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, float CallFunc_Array_Get_Item, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	void RefillGasoline(class UPrimalItem* DestinationItem, const TArray<double>& CustomFloats_Loc, double CallFunc_MakeLiteralDouble_ReturnValue, class UObject* CallFunc_GetDefaultObject_ReturnValue, class UPrimalItem* K2Node_DynamicCast_AsPrimal_Item, bool K2Node_DynamicCast_bSuccess, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_IncrementItemQuantity_ReturnValue, const struct FCustomItemData& K2Node_MakeStruct_CustomItemData, const TArray<double>& K2Node_VariableSet_CustomFloats_Loc_ImplicitCast, const TArray<float>& K2Node_MakeStruct_CustomDataFloats_ImplicitCast);
	void BPUsedOntoItem(class UPrimalItem* DestinationItem, int32 AdditionalData);
	void BPSupportUseOntoItem(class UPrimalItem* DestinationItem, bool ReturnValue, bool CallFunc_CheckForGasolineData_SupportsDragOn);
};

}


