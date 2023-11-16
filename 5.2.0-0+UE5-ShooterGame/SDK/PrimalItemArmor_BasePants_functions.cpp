#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_BasePants.PrimalItemArmor_BasePants_C
// (None)

class UClass* UPrimalItemArmor_BasePants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_BasePants_C");

	return Clss;
}


// PrimalItemArmor_BasePants_C PrimalItemArmor_BasePants.Default__PrimalItemArmor_BasePants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_BasePants_C* UPrimalItemArmor_BasePants_C::GetDefaultObj()
{
	static class UPrimalItemArmor_BasePants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_BasePants_C*>(UPrimalItemArmor_BasePants_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemArmor_BasePants.PrimalItemArmor_BasePants_C.OverrideCrouchingSound
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  InSound                                                          (Edit, ZeroConstructor)
// bool                               bIsProne                                                         (None)
// int32                              SoundState                                                       (None)
// class USoundBase*                  ReturnValue                                                      (Edit, ZeroConstructor)
// class USoundBase*                  RetSound                                                         (Edit, ZeroConstructor)
// bool                               Temp_bool_Variable                                               (None)
// int32                              Temp_int_Variable                                                (None)
// int32                              Temp_int_Variable_1                                              (None)
// class USoundBase*                  K2Node_Select_Default                                            (Edit, ZeroConstructor)
// class USoundBase*                  K2Node_Select_Default_1                                          (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class USoundBase*                  K2Node_Select_Default_2                                          (None)

void UPrimalItemArmor_BasePants_C::OverrideCrouchingSound(class USoundBase* InSound, bool bIsProne, int32 SoundState, class USoundBase* ReturnValue, class USoundBase* RetSound, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue, class USoundBase* K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_BasePants_C", "OverrideCrouchingSound");

	Params::UPrimalItemArmor_BasePants_C_OverrideCrouchingSound_Params Parms{};

	Parms.InSound = InSound;
	Parms.bIsProne = bIsProne;
	Parms.SoundState = SoundState;
	Parms.ReturnValue = ReturnValue;
	Parms.RetSound = RetSound;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


