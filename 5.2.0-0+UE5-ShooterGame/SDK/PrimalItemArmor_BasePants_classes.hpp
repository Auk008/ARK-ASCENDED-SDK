#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xEE0 - 0xEB8)
// BlueprintGeneratedClass PrimalItemArmor_BasePants.PrimalItemArmor_BasePants_C
class UPrimalItemArmor_BasePants_C : public UPrimalItemArmorGeneric_C
{
public:
	class USoundBase*                            SoundOverrideProneStart;                           // 0xEB8(0x8)(Edit, ZeroConstructor)
	class USoundBase*                            SoundOverrideProneEnd;                             // 0xEC0(0x8)(Edit, ZeroConstructor)
	class USoundBase*                            SoundOverrideProneStep;                            // 0xEC8(0x8)(Edit, ZeroConstructor)
	class USoundBase*                            SoundOverrideCrouchStart;                          // 0xED0(0x8)(Edit, ZeroConstructor)
	class USoundBase*                            SoundOverrideCrouchEnd;                            // 0xED8(0x8)(Edit, ZeroConstructor)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_BasePants_C* GetDefaultObj();

	void OverrideCrouchingSound(class USoundBase* InSound, bool bIsProne, int32 SoundState, class USoundBase* ReturnValue, class USoundBase* RetSound, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue, class USoundBase* K2Node_Select_Default_2);
};

}


