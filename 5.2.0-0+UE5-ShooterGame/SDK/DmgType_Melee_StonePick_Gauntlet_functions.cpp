#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_StonePick_Gauntlet.DmgType_Melee_StonePick_Gauntlet_C
// (None)

class UClass* UDmgType_Melee_StonePick_Gauntlet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_StonePick_Gauntlet_C");

	return Clss;
}


// DmgType_Melee_StonePick_Gauntlet_C DmgType_Melee_StonePick_Gauntlet.Default__DmgType_Melee_StonePick_Gauntlet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_StonePick_Gauntlet_C* UDmgType_Melee_StonePick_Gauntlet_C::GetDefaultObj()
{
	static class UDmgType_Melee_StonePick_Gauntlet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_StonePick_Gauntlet_C*>(UDmgType_Melee_StonePick_Gauntlet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DmgType_Melee_StonePick_Gauntlet.DmgType_Melee_StonePick_Gauntlet_C.BPAdjustDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Victim                                                           (ZeroConstructor)
// float                              IncomingDamage                                                   (None)
// struct FDamageEvent                TheDamageEvent                                                   (ZeroConstructor)
// class AController*                 EventInstigator                                                  (ZeroConstructor)
// class AActor*                      DamageCauser                                                     (ZeroConstructor)
// float                              ReturnValue                                                      (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (None)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (None)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (None)
// float                              CallFunc_BreakRotator_Roll                                       (None)
// float                              CallFunc_BreakRotator_Pitch                                      (None)
// float                              CallFunc_BreakRotator_Yaw                                        (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (None)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (None)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (None)
// double                             CallFunc_Multiply_VectorFloat_B_ImplicitCast                     (None)

void UDmgType_Melee_StonePick_Gauntlet_C::BPAdjustDamage(class AActor* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, float ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_BooleanOR_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_Multiply_VectorFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DmgType_Melee_StonePick_Gauntlet_C", "BPAdjustDamage");

	Params::UDmgType_Melee_StonePick_Gauntlet_C_BPAdjustDamage_Params Parms{};

	Parms.Victim = Victim;
	Parms.IncomingDamage = IncomingDamage;
	Parms.TheDamageEvent = TheDamageEvent;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_B_ImplicitCast = CallFunc_Multiply_VectorFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


