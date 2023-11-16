#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Climbing_ImpactEffect.Climbing_ImpactEffect_C
// (Actor)

class UClass* AClimbing_ImpactEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Climbing_ImpactEffect_C");

	return Clss;
}


// Climbing_ImpactEffect_C Climbing_ImpactEffect.Default__Climbing_ImpactEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AClimbing_ImpactEffect_C* AClimbing_ImpactEffect_C::GetDefaultObj()
{
	static class AClimbing_ImpactEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AClimbing_ImpactEffect_C*>(AClimbing_ImpactEffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.DestroyImpactEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AClimbing_ImpactEffect_C::DestroyImpactEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Climbing_ImpactEffect_C", "DestroyImpactEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.DeactivateImpactEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (None)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (None)

void AClimbing_ImpactEffect_C::DeactivateImpactEffect(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Climbing_ImpactEffect_C", "DeactivateImpactEffect");

	Params::AClimbing_ImpactEffect_C_DeactivateImpactEffect_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AClimbing_ImpactEffect_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Climbing_ImpactEffect_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.ExecuteUbergraph_Climbing_ImpactEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class AShooterWeapon_Climb*        K2Node_DynamicCast_AsShooter_Weapon_Climb                        (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               CallFunc_IsClimbingHanging_ReturnValue                           (None)
// double                             CallFunc_SelectFloat_ReturnValue                                 (None)
// float                              CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast    (None)

void AClimbing_ImpactEffect_C::ExecuteUbergraph_Climbing_ImpactEffect(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, class AShooterWeapon_Climb* K2Node_DynamicCast_AsShooter_Weapon_Climb, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsClimbingHanging_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Climbing_ImpactEffect_C", "ExecuteUbergraph_Climbing_ImpactEffect");

	Params::AClimbing_ImpactEffect_C_ExecuteUbergraph_Climbing_ImpactEffect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsShooter_Weapon_Climb = K2Node_DynamicCast_AsShooter_Weapon_Climb;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsClimbingHanging_ReturnValue = CallFunc_IsClimbingHanging_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast = CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


