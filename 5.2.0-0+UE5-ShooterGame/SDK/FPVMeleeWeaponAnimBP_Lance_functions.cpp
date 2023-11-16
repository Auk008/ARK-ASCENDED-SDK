#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C
// (None)

class UClass* UFPVMeleeWeaponAnimBP_Lance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FPVMeleeWeaponAnimBP_Lance_C");

	return Clss;
}


// FPVMeleeWeaponAnimBP_Lance_C FPVMeleeWeaponAnimBP_Lance.Default__FPVMeleeWeaponAnimBP_Lance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFPVMeleeWeaponAnimBP_Lance_C* UFPVMeleeWeaponAnimBP_Lance_C::GetDefaultObj()
{
	static class UFPVMeleeWeaponAnimBP_Lance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFPVMeleeWeaponAnimBP_Lance_C*>(UFPVMeleeWeaponAnimBP_Lance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (None)

void UFPVMeleeWeaponAnimBP_Lance_C::AnimGraph(const struct FPoseLink& AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVMeleeWeaponAnimBP_Lance_C", "AnimGraph");

	Params::UFPVMeleeWeaponAnimBP_Lance_C_AnimGraph_Params Parms{};

	Parms.AnimGraph = AnimGraph;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (None)

void UFPVMeleeWeaponAnimBP_Lance_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVMeleeWeaponAnimBP_Lance_C", "BlueprintUpdateAnimation");

	Params::UFPVMeleeWeaponAnimBP_Lance_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// float                              K2Node_Event_DeltaTimeX                                          (None)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor)
// class AShooterWeapon*              K2Node_DynamicCast_AsShooter_Weapon                              (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class AShooterCharacter*           CallFunc_GetPawnOwner_ReturnValue                                (ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// double                             CallFunc_FInterpTo_ReturnValue                                   (None)
// struct FVector                     CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation(None)
// struct FRotator                    CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation   (None)
// bool                               CallFunc_GetBlockingShieldOffsets_ReturnValue                    (None)
// bool                               CallFunc_IsBlockingWithShield_ReturnValue                        (None)
// bool                               CallFunc_IsUsingShield_ReturnValue                               (None)
// class AWeapLance_C*                K2Node_DynamicCast_AsWeap_Lance                                  (None)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (None)
// double                             CallFunc_FInterpTo_ReturnValue_2                                 (None)
// double                             CallFunc_FInterpTo_ReturnValue_3                                 (None)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast                        (None)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_1                      (None)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_2                      (None)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_3                      (None)

void UFPVMeleeWeaponAnimBP_Lance_C::ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AShooterWeapon* K2Node_DynamicCast_AsShooter_Weapon, bool K2Node_DynamicCast_bSuccess, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_FInterpTo_ReturnValue, const struct FVector& CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation, const struct FRotator& CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation, bool CallFunc_GetBlockingShieldOffsets_ReturnValue, bool CallFunc_IsBlockingWithShield_ReturnValue, bool CallFunc_IsUsingShield_ReturnValue, class AWeapLance_C* K2Node_DynamicCast_AsWeap_Lance, bool K2Node_DynamicCast_bSuccess_2, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_3, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_1, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_2, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVMeleeWeaponAnimBP_Lance_C", "ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance");

	Params::UFPVMeleeWeaponAnimBP_Lance_C_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Weapon = K2Node_DynamicCast_AsShooter_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPawnOwner_ReturnValue = CallFunc_GetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation = CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation;
	Parms.CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation = CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation;
	Parms.CallFunc_GetBlockingShieldOffsets_ReturnValue = CallFunc_GetBlockingShieldOffsets_ReturnValue;
	Parms.CallFunc_IsBlockingWithShield_ReturnValue = CallFunc_IsBlockingWithShield_ReturnValue;
	Parms.CallFunc_IsUsingShield_ReturnValue = CallFunc_IsUsingShield_ReturnValue;
	Parms.K2Node_DynamicCast_AsWeap_Lance = K2Node_DynamicCast_AsWeap_Lance;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue_2 = CallFunc_FInterpTo_ReturnValue_2;
	Parms.CallFunc_FInterpTo_ReturnValue_3 = CallFunc_FInterpTo_ReturnValue_3;
	Parms.CallFunc_FInterpTo_DeltaTime_ImplicitCast = CallFunc_FInterpTo_DeltaTime_ImplicitCast;
	Parms.CallFunc_FInterpTo_DeltaTime_ImplicitCast_1 = CallFunc_FInterpTo_DeltaTime_ImplicitCast_1;
	Parms.CallFunc_FInterpTo_DeltaTime_ImplicitCast_2 = CallFunc_FInterpTo_DeltaTime_ImplicitCast_2;
	Parms.CallFunc_FInterpTo_DeltaTime_ImplicitCast_3 = CallFunc_FInterpTo_DeltaTime_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


