#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapClimbPick.WeapClimbPick_C
// (Actor)

class UClass* AWeapClimbPick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapClimbPick_C");

	return Clss;
}


// WeapClimbPick_C WeapClimbPick.Default__WeapClimbPick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapClimbPick_C* AWeapClimbPick_C::GetDefaultObj()
{
	static class AWeapClimbPick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapClimbPick_C*>(AWeapClimbPick_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeapClimbPick.WeapClimbPick_C.BPOnWeaponAnimPlayedNotify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponAnim                 Animation                                                        (ZeroConstructor)
// float                              InPlayRate                                                       (None)
// bool                               bPlayBothFirstAndThirdPerson                                     (None)
// bool                               bReplicate                                                       (None)
// bool                               bReplicateToInstigator                                           (None)
// bool                               bPauseOnFinish1P                                                 (None)
// bool                               bForceTickPoseAndServerUpdateMesh                                (None)
// bool                               bForceTickPoseOnServer                                           (None)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)

void AWeapClimbPick_C::BPOnWeaponAnimPlayedNotify(const struct FWeaponAnim& Animation, float InPlayRate, bool bPlayBothFirstAndThirdPerson, bool bReplicate, bool bReplicateToInstigator, bool bPauseOnFinish1P, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "BPOnWeaponAnimPlayedNotify");

	Params::AWeapClimbPick_C_BPOnWeaponAnimPlayedNotify_Params Parms{};

	Parms.Animation = Animation;
	Parms.InPlayRate = InPlayRate;
	Parms.bPlayBothFirstAndThirdPerson = bPlayBothFirstAndThirdPerson;
	Parms.bReplicate = bReplicate;
	Parms.bReplicateToInstigator = bReplicateToInstigator;
	Parms.bPauseOnFinish1P = bPauseOnFinish1P;
	Parms.bForceTickPoseAndServerUpdateMesh = bForceTickPoseAndServerUpdateMesh;
	Parms.bForceTickPoseOnServer = bForceTickPoseOnServer;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeapClimbPick.WeapClimbPick_C.StartUnequipEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (None)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (None)
// bool                               CallFunc_HasAuthority_ReturnValue                                (None)
// struct FVector                     CallFunc_GetGroundLocation_theGroundLoc                          (None)
// bool                               CallFunc_GetGroundLocation_ReturnValue                           (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)

void AWeapClimbPick_C::StartUnequipEvent(const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_GetGroundLocation_theGroundLoc, bool CallFunc_GetGroundLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "StartUnequipEvent");

	Params::AWeapClimbPick_C_StartUnequipEvent_Params Parms{};

	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetGroundLocation_theGroundLoc = CallFunc_GetGroundLocation_theGroundLoc;
	Parms.CallFunc_GetGroundLocation_ReturnValue = CallFunc_GetGroundLocation_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeapClimbPick.WeapClimbPick_C.BPModifyFOV
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InFOV                                                            (None)
// float                              ReturnValue                                                      (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// double                             CallFunc_SelectFloat_ReturnValue                                 (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (None)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (None)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (None)

void AWeapClimbPick_C::BPModifyFOV(float InFOV, float ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "BPModifyFOV");

	Params::AWeapClimbPick_C_BPModifyFOV_Params Parms{};

	Parms.InFOV = InFOV;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeapClimbPick.WeapClimbPick_C.SetSourceLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    Particle_System                                                  (None)
// struct FVector                     NewSourcePoint                                                   (None)
// int32                              Temp_int_Variable                                                (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)

void AWeapClimbPick_C::SetSourceLocation(class UParticleSystemComponent* Particle_System, const struct FVector& NewSourcePoint, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "SetSourceLocation");

	Params::AWeapClimbPick_C_SetSourceLocation_Params Parms{};

	Parms.Particle_System = Particle_System;
	Parms.NewSourcePoint = NewSourcePoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeapClimbPick.WeapClimbPick_C.SetTemplateTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    Particle_System                                                  (ZeroConstructor)
// class UParticleSystem*             New_Template                                                     (None)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (None)

void AWeapClimbPick_C::SetTemplateTo(class UParticleSystemComponent* Particle_System, class UParticleSystem* New_Template, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "SetTemplateTo");

	Params::AWeapClimbPick_C_SetTemplateTo_Params Parms{};

	Parms.Particle_System = Particle_System;
	Parms.New_Template = New_Template;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeapClimbPick.WeapClimbPick_C.BPUpdateClimbTarget
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (None)
// bool                               bClimbing                                                        (None)
// struct FVector                     AnchorPosition                                                   (None)
// struct FVector                     AnchorNormal                                                     (None)
// bool                               bCanClimb                                                        (None)
// bool                               bCanLand                                                         (None)
// struct FVector                     ClimbLocation                                                    (None)
// struct FVector                     ClimbNormal                                                      (None)
// bool                               bHudVisible                                                      (None)
// struct FVector                     SourceTangent                                                    (None)
// bool                               CallFunc_IsClimbingHanging_ReturnValue                           (None)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue_1                      (None)
// struct FVector                     CallFunc_GetViewDirection_ReturnValue                            (None)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (None)
// struct FVector                     CallFunc_VInterpTo_ReturnValue                                   (None)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (None)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (None)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (ZeroConstructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (ZeroConstructor)
// struct FVector                     CallFunc_GetViewLocation_ReturnValue                             (None)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// double                             CallFunc_VSize_ReturnValue                                       (None)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (None)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (None)
// double                             CallFunc_FClamp_ReturnValue                                      (None)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1               (None)
// double                             CallFunc_FClamp_ReturnValue_1                                    (None)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (None)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (None)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (None)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (None)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (None)
// double                             CallFunc_Dot_VectorVector_ReturnValue_1                          (None)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (None)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (None)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue_1                          (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (None)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (None)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (None)
// struct FVector                     CallFunc_NegateVector_ReturnValue                                (None)
// struct FVector                     CallFunc_VInterpTo_ReturnValue_1                                 (None)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (None)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (None)
// uint8                              Temp_byte_Variable                                               (None)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue_1                                 (None)
// struct FVector                     K2Node_Select_Default                                            (None)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult_1                    (ZeroConstructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_1                    (None)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (None)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (None)
// double                             CallFunc_VSize_ReturnValue_1                                     (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// float                              CallFunc_VInterpTo_InterpSpeed_ImplicitCast                      (None)
// float                              CallFunc_RInterpTo_InterpSpeed_ImplicitCast                      (None)
// float                              CallFunc_SetBeamTargetStrength_NewTargetStrength_ImplicitCast    (None)
// float                              CallFunc_SetBeamSourceStrength_NewSourceStrength_ImplicitCast    (None)
// float                              CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1                    (None)
// float                              CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1                    (None)

void AWeapClimbPick_C::BPUpdateClimbTarget(float DeltaSeconds, bool bClimbing, const struct FVector& AnchorPosition, const struct FVector& AnchorNormal, bool bCanClimb, bool bCanLand, const struct FVector& ClimbLocation, const struct FVector& ClimbNormal, bool bHudVisible, const struct FVector& SourceTangent, bool CallFunc_IsClimbingHanging_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_1, const struct FVector& CallFunc_GetViewDirection_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FVector& CallFunc_GetViewLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, double CallFunc_FClamp_ReturnValue_1, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, double CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_GetActorUpVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_NegateVector_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue_1, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, uint8 Temp_byte_Variable, const struct FRotator& CallFunc_RInterpTo_ReturnValue_1, const struct FVector& K2Node_Select_Default, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, double CallFunc_VSize_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_VInterpTo_InterpSpeed_ImplicitCast, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast, float CallFunc_SetBeamTargetStrength_NewTargetStrength_ImplicitCast, float CallFunc_SetBeamSourceStrength_NewSourceStrength_ImplicitCast, float CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "BPUpdateClimbTarget");

	Params::AWeapClimbPick_C_BPUpdateClimbTarget_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.bClimbing = bClimbing;
	Parms.AnchorPosition = AnchorPosition;
	Parms.AnchorNormal = AnchorNormal;
	Parms.bCanClimb = bCanClimb;
	Parms.bCanLand = bCanLand;
	Parms.ClimbLocation = ClimbLocation;
	Parms.ClimbNormal = ClimbNormal;
	Parms.bHudVisible = bHudVisible;
	Parms.SourceTangent = SourceTangent;
	Parms.CallFunc_IsClimbingHanging_ReturnValue = CallFunc_IsClimbingHanging_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue_1 = CallFunc_Conv_VectorToRotator_ReturnValue_1;
	Parms.CallFunc_GetViewDirection_ReturnValue = CallFunc_GetViewDirection_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_VInterpTo_ReturnValue = CallFunc_VInterpTo_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_RInterpTo_ReturnValue = CallFunc_RInterpTo_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_GetViewLocation_ReturnValue = CallFunc_GetViewLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_GetActorRightVector_ReturnValue = CallFunc_GetActorRightVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_GetActorUpVector_ReturnValue = CallFunc_GetActorUpVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue_1 = CallFunc_Dot_VectorVector_ReturnValue_1;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_GetActorUpVector_ReturnValue_1 = CallFunc_GetActorUpVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue_1 = CallFunc_Normal_ReturnValue_1;
	Parms.CallFunc_NegateVector_ReturnValue = CallFunc_NegateVector_ReturnValue;
	Parms.CallFunc_VInterpTo_ReturnValue_1 = CallFunc_VInterpTo_ReturnValue_1;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_1 = CallFunc_K2_GetComponentRotation_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_RInterpTo_ReturnValue_1 = CallFunc_RInterpTo_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult_1 = CallFunc_K2_SetWorldLocation_SweepHitResult_1;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult_1 = CallFunc_K2_SetWorldRotation_SweepHitResult_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_VSize_ReturnValue_1 = CallFunc_VSize_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_VInterpTo_InterpSpeed_ImplicitCast = CallFunc_VInterpTo_InterpSpeed_ImplicitCast;
	Parms.CallFunc_RInterpTo_InterpSpeed_ImplicitCast = CallFunc_RInterpTo_InterpSpeed_ImplicitCast;
	Parms.CallFunc_SetBeamTargetStrength_NewTargetStrength_ImplicitCast = CallFunc_SetBeamTargetStrength_NewTargetStrength_ImplicitCast;
	Parms.CallFunc_SetBeamSourceStrength_NewSourceStrength_ImplicitCast = CallFunc_SetBeamSourceStrength_NewSourceStrength_ImplicitCast;
	Parms.CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1 = CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1;
	Parms.CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1 = CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


