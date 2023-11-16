#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C
// (None)

class UClass* UPrimalItemArmor_SaddleGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_SaddleGeneric_C");

	return Clss;
}


// PrimalItemArmor_SaddleGeneric_C PrimalItemArmor_SaddleGeneric.Default__PrimalItemArmor_SaddleGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_SaddleGeneric_C* UPrimalItemArmor_SaddleGeneric_C::GetDefaultObj()
{
	static class UPrimalItemArmor_SaddleGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_SaddleGeneric_C*>(UPrimalItemArmor_SaddleGeneric_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.BPOverrideEquippedDurabilityPercentage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OutDurabilityPercentageValue                                     (None)
// float                              CallFunc_GetItemStatModifier_ReturnValue                         (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (None)
// float                              K2Node_FunctionResult_OutDurabilityPercentageValue_ImplicitCast  (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (None)

void UPrimalItemArmor_SaddleGeneric_C::BPOverrideEquippedDurabilityPercentage(float OutDurabilityPercentageValue, float CallFunc_GetItemStatModifier_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, float K2Node_FunctionResult_OutDurabilityPercentageValue_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_C", "BPOverrideEquippedDurabilityPercentage");

	Params::UPrimalItemArmor_SaddleGeneric_C_BPOverrideEquippedDurabilityPercentage_Params Parms{};

	Parms.OutDurabilityPercentageValue = OutDurabilityPercentageValue;
	Parms.CallFunc_GetItemStatModifier_ReturnValue = CallFunc_GetItemStatModifier_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue = CallFunc_Divide_DoubleFloat_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.K2Node_FunctionResult_OutDurabilityPercentageValue_ImplicitCast = K2Node_FunctionResult_OutDurabilityPercentageValue_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.ResetSaddleDurabilityToSavedValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// float                              K2Node_VariableSet_ItemDurability_ImplicitCast                   (None)

void UPrimalItemArmor_SaddleGeneric_C::ResetSaddleDurabilityToSavedValue(bool CallFunc_Greater_DoubleDouble_ReturnValue, float K2Node_VariableSet_ItemDurability_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_C", "ResetSaddleDurabilityToSavedValue");

	Params::UPrimalItemArmor_SaddleGeneric_C_ResetSaddleDurabilityToSavedValue_Params Parms{};

	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_VariableSet_ItemDurability_ImplicitCast = K2Node_VariableSet_ItemDurability_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.SaveSaddleDurability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             K2Node_VariableSet_SavedSaddleDurability_ImplicitCast            (None)

void UPrimalItemArmor_SaddleGeneric_C::SaveSaddleDurability(double K2Node_VariableSet_SavedSaddleDurability_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_C", "SaveSaddleDurability");

	Params::UPrimalItemArmor_SaddleGeneric_C_SaveSaddleDurability_Params Parms{};

	Parms.K2Node_VariableSet_SavedSaddleDurability_ImplicitCast = K2Node_VariableSet_SavedSaddleDurability_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C.BlueprintEquipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsFromSaveGame                                                  (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (None)

void UPrimalItemArmor_SaddleGeneric_C::BlueprintEquipped(bool bIsFromSaveGame, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_SaddleGeneric_C", "BlueprintEquipped");

	Params::UPrimalItemArmor_SaddleGeneric_C_BlueprintEquipped_Params Parms{};

	Parms.bIsFromSaveGame = bIsFromSaveGame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


