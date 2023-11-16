#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_BasedOnDesertKaiju.Buff_BasedOnDesertKaiju_C
// (Actor)

class UClass* ABuff_BasedOnDesertKaiju_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_BasedOnDesertKaiju_C");

	return Clss;
}


// Buff_BasedOnDesertKaiju_C Buff_BasedOnDesertKaiju.Default__Buff_BasedOnDesertKaiju_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_BasedOnDesertKaiju_C* ABuff_BasedOnDesertKaiju_C::GetDefaultObj()
{
	static class ABuff_BasedOnDesertKaiju_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_BasedOnDesertKaiju_C*>(ABuff_BasedOnDesertKaiju_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_BasedOnDesertKaiju.Buff_BasedOnDesertKaiju_C.BPDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (Edit, ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UPrimalCharacterStatusComponent*CallFunc_GetCharacterStatusComponent_ReturnValue                 (Edit, ZeroConstructor)
// class UPrimalCharacterMovement*    CallFunc_CharacterMovementToPCM_ReturnValue                      (None)

void ABuff_BasedOnDesertKaiju_C::BPDeactivated(class AActor* ForInstigator, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, class UPrimalCharacterStatusComponent* CallFunc_GetCharacterStatusComponent_ReturnValue, class UPrimalCharacterMovement* CallFunc_CharacterMovementToPCM_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BasedOnDesertKaiju_C", "BPDeactivated");

	Params::ABuff_BasedOnDesertKaiju_C_BPDeactivated_Params Parms{};

	Parms.ForInstigator = ForInstigator;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCharacterStatusComponent_ReturnValue = CallFunc_GetCharacterStatusComponent_ReturnValue;
	Parms.CallFunc_CharacterMovementToPCM_ReturnValue = CallFunc_CharacterMovementToPCM_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BasedOnDesertKaiju.Buff_BasedOnDesertKaiju_C.BPSetupForInstigator
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (Edit, ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UPrimalCharacterStatusComponent*CallFunc_GetCharacterStatusComponent_ReturnValue                 (Edit, ZeroConstructor)
// class UPrimalCharacterMovement*    CallFunc_CharacterMovementToPCM_ReturnValue                      (None)

void ABuff_BasedOnDesertKaiju_C::BPSetupForInstigator(class AActor* ForInstigator, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, class UPrimalCharacterStatusComponent* CallFunc_GetCharacterStatusComponent_ReturnValue, class UPrimalCharacterMovement* CallFunc_CharacterMovementToPCM_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BasedOnDesertKaiju_C", "BPSetupForInstigator");

	Params::ABuff_BasedOnDesertKaiju_C_BPSetupForInstigator_Params Parms{};

	Parms.ForInstigator = ForInstigator;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCharacterStatusComponent_ReturnValue = CallFunc_GetCharacterStatusComponent_ReturnValue;
	Parms.CallFunc_CharacterMovementToPCM_ReturnValue = CallFunc_CharacterMovementToPCM_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


