#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x268 - 0x250)
// BlueprintGeneratedClass CactusHarvestComponent.CactusHarvestComponent_C
class UCactusHarvestComponent_C : public UAttackHarvestComponent_Base_C
{
public:
	double                                       PlayerGiveWaterAmount;                             // 0x250(0x8)(None)
	double                                       PlayerGiveWaterSpeed;                              // 0x258(0x8)(None)
	double                                       MorellatopsGiveWaterAmount;                        // 0x260(0x8)(None)

	static class UClass* StaticClass();
	static class UCactusHarvestComponent_C* GetDefaultObj();

	void BPCustomHarvestResource(class UPrimalInventoryComponent* InvComp, int32 NumToGive, class UClass* DamageTypeClass, class AActor* ToActor, int32 ReturnValue, class ACamelsaurus_Character_Base_BP_C* K2Node_DynamicCast_AsCamelsaurus_Character_Base_BP, bool K2Node_DynamicCast_bSuccess, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_AddWater_NewWaterAmount, class UPrimalCharacterStatusComponent* CallFunc_GetCharacterStatusComponent_ReturnValue, float CallFunc_AddStatusValueModifier_Speed_ImplicitCast, float CallFunc_AddStatusValueModifier_Amount_ImplicitCast);
};

}


