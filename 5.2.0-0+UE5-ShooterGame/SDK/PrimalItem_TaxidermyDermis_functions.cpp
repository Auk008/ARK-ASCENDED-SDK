#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_TaxidermyDermis.PrimalItem_TaxidermyDermis_C
// (None)

class UClass* UPrimalItem_TaxidermyDermis_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_TaxidermyDermis_C");

	return Clss;
}


// PrimalItem_TaxidermyDermis_C PrimalItem_TaxidermyDermis.Default__PrimalItem_TaxidermyDermis_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_TaxidermyDermis_C* UPrimalItem_TaxidermyDermis_C::GetDefaultObj()
{
	static class UPrimalItem_TaxidermyDermis_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_TaxidermyDermis_C*>(UPrimalItem_TaxidermyDermis_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_TaxidermyDermis.PrimalItem_TaxidermyDermis_C.BPInitIconMaterial
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (ZeroConstructor)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (None)
// class UClass*                      CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UTexture*                    CallFunc_GetDinoEntryIcon_ReturnValue                            (None)

void UPrimalItem_TaxidermyDermis_C::BPInitIconMaterial(const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, class UClass* CallFunc_Array_Get_Item, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess, class UTexture* CallFunc_GetDinoEntryIcon_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_TaxidermyDermis_C", "BPInitIconMaterial");

	Params::UPrimalItem_TaxidermyDermis_C_BPInitIconMaterial_Params Parms{};

	Parms.CallFunc_GetCustomItemData_OutData = CallFunc_GetCustomItemData_OutData;
	Parms.CallFunc_GetCustomItemData_ReturnValue = CallFunc_GetCustomItemData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDinoEntryIcon_ReturnValue = CallFunc_GetDinoEntryIcon_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


