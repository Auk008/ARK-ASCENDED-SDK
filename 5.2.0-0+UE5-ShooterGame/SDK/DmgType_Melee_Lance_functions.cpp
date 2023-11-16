#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_Lance.DmgType_Melee_Lance_C
// (None)

class UClass* UDmgType_Melee_Lance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_Lance_C");

	return Clss;
}


// DmgType_Melee_Lance_C DmgType_Melee_Lance.Default__DmgType_Melee_Lance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_Lance_C* UDmgType_Melee_Lance_C::GetDefaultObj()
{
	static class UDmgType_Melee_Lance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_Lance_C*>(UDmgType_Melee_Lance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DmgType_Melee_Lance.DmgType_Melee_Lance_C.BPAdjustDamage
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Victim                                                           (ZeroConstructor)
// float                              IncomingDamage                                                   (None)
// struct FDamageEvent                TheDamageEvent                                                   (ZeroConstructor)
// class AController*                 EventInstigator                                                  (ZeroConstructor)
// class AActor*                      DamageCauser                                                     (ZeroConstructor)
// float                              ReturnValue                                                      (None)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// class AWeapLance_C*                K2Node_DynamicCast_AsWeap_Lance                                  (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character_1                         (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (None)
// class AShooterGameState*           K2Node_DynamicCast_AsShooter_Game_State                          (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (None)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (None)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (None)

void UDmgType_Melee_Lance_C::BPAdjustDamage(class AActor* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, float ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AWeapLance_C* K2Node_DynamicCast_AsWeap_Lance, bool K2Node_DynamicCast_bSuccess_1, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool K2Node_DynamicCast_bSuccess_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AShooterGameState* K2Node_DynamicCast_AsShooter_Game_State, bool K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DmgType_Melee_Lance_C", "BPAdjustDamage");

	Params::UDmgType_Melee_Lance_C_BPAdjustDamage_Params Parms{};

	Parms.Victim = Victim;
	Parms.IncomingDamage = IncomingDamage;
	Parms.TheDamageEvent = TheDamageEvent;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;
	Parms.ReturnValue = ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsWeap_Lance = K2Node_DynamicCast_AsWeap_Lance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsShooter_Character_1 = K2Node_DynamicCast_AsShooter_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Game_State = K2Node_DynamicCast_AsShooter_Game_State;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


