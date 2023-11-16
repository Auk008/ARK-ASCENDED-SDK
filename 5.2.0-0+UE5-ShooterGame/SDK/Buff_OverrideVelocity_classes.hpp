#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xB70 - 0xB50)
// BlueprintGeneratedClass Buff_OverrideVelocity.Buff_OverrideVelocity_C
class ABuff_OverrideVelocity_C : public APrimalBuff
{
public:
	struct FVector                               NewFallVelocity;                                   // 0xB50(0x18)(None)
	double                                       MaxNewFallVelocity;                                // 0xB68(0x8)(None)

	static class UClass* StaticClass();
	static class ABuff_OverrideVelocity_C* GetDefaultObj();

	void BPDeactivated(class AActor* ForInstigator, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess);
	void BPOverrideCharacterNewFallVelocity(const struct FVector& InitialVelocity, const struct FVector& Gravity, float DeltaTime, const struct FVector& ReturnValue, const struct FVector& Result, bool CallFunc_NotEqual_VectorVector_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_NewFallVelocity_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_BPPointPlaneProject_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, double CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_VectorFloat_B_ImplicitCast);
};

}


