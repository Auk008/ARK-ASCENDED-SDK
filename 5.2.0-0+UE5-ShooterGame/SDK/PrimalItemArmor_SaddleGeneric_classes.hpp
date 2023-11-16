#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xEC8 - 0xEB8)
// BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C
class UPrimalItemArmor_SaddleGeneric_C : public UPrimalItemArmorGeneric_C
{
public:
	double                                       LastTorchDurabilityLossTime;                       // 0xEB8(0x8)(None)
	double                                       SavedSaddleDurability;                             // 0xEC0(0x8)(None)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_SaddleGeneric_C* GetDefaultObj();

	void BPOverrideEquippedDurabilityPercentage(float OutDurabilityPercentageValue, float CallFunc_GetItemStatModifier_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, float K2Node_FunctionResult_OutDurabilityPercentageValue_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void ResetSaddleDurabilityToSavedValue(bool CallFunc_Greater_DoubleDouble_ReturnValue, float K2Node_VariableSet_ItemDurability_ImplicitCast);
	void SaveSaddleDurability(double K2Node_VariableSet_SavedSaddleDurability_ImplicitCast);
	void BlueprintEquipped(bool bIsFromSaveGame, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue);
};

}


