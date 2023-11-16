#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xB68 - 0xB59)
// BlueprintGeneratedClass Buff_BasedOnDesertKaiju.Buff_BasedOnDesertKaiju_C
class ABuff_BasedOnDesertKaiju_C : public ABuff_Base_C
{
public:
	uint8                                        Pad_3D41[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CachedMaxWalkSpeed;                                // 0xB60(0x8)(None)

	static class UClass* StaticClass();
	static class ABuff_BasedOnDesertKaiju_C* GetDefaultObj();

	void BPDeactivated(class AActor* ForInstigator, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, class UPrimalCharacterStatusComponent* CallFunc_GetCharacterStatusComponent_ReturnValue, class UPrimalCharacterMovement* CallFunc_CharacterMovementToPCM_ReturnValue);
	void BPSetupForInstigator(class AActor* ForInstigator, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, class UPrimalCharacterStatusComponent* CallFunc_GetCharacterStatusComponent_ReturnValue, class UPrimalCharacterMovement* CallFunc_CharacterMovementToPCM_ReturnValue);
};

}


