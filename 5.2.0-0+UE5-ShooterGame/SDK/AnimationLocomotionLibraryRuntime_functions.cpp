#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary
// (None)

class UClass* UAnimCharacterMovementLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimCharacterMovementLibrary");

	return Clss;
}


// AnimCharacterMovementLibrary AnimationLocomotionLibraryRuntime.Default__AnimCharacterMovementLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimCharacterMovementLibrary* UAnimCharacterMovementLibrary::GetDefaultObj()
{
	static class UAnimCharacterMovementLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimCharacterMovementLibrary*>(UAnimCharacterMovementLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementStopLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Velocity                                                         (None)
// bool                               bUseSeparateBrakingFriction                                      (None)
// float                              BrakingFriction                                                  (None)
// float                              GroundFriction                                                   (None)
// float                              BrakingFrictionFactor                                            (None)
// float                              BrakingDecelerationWalking                                       (None)
// struct FVector                     ReturnValue                                                      (None)

void UAnimCharacterMovementLibrary::PredictGroundMovementStopLocation(const struct FVector& Velocity, bool bUseSeparateBrakingFriction, float BrakingFriction, float GroundFriction, float BrakingFrictionFactor, float BrakingDecelerationWalking, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimCharacterMovementLibrary", "PredictGroundMovementStopLocation");

	Params::UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Params Parms{};

	Parms.Velocity = Velocity;
	Parms.bUseSeparateBrakingFriction = bUseSeparateBrakingFriction;
	Parms.BrakingFriction = BrakingFriction;
	Parms.GroundFriction = GroundFriction;
	Parms.BrakingFrictionFactor = BrakingFrictionFactor;
	Parms.BrakingDecelerationWalking = BrakingDecelerationWalking;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementPivotLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Acceleration                                                     (None)
// struct FVector                     Velocity                                                         (None)
// float                              GroundFriction                                                   (None)
// struct FVector                     ReturnValue                                                      (None)

void UAnimCharacterMovementLibrary::PredictGroundMovementPivotLocation(const struct FVector& Acceleration, const struct FVector& Velocity, float GroundFriction, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimCharacterMovementLibrary", "PredictGroundMovementPivotLocation");

	Params::UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Params Parms{};

	Parms.Acceleration = Acceleration;
	Parms.Velocity = Velocity;
	Parms.GroundFriction = GroundFriction;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary
// (None)

class UClass* UAnimDistanceMatchingLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimDistanceMatchingLibrary");

	return Clss;
}


// AnimDistanceMatchingLibrary AnimationLocomotionLibraryRuntime.Default__AnimDistanceMatchingLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimDistanceMatchingLibrary* UAnimDistanceMatchingLibrary::GetDefaultObj()
{
	static class UAnimDistanceMatchingLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimDistanceMatchingLibrary*>(UAnimDistanceMatchingLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.SetPlayrateToMatchSpeed
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (None)
// float                              SpeedToMatch                                                     (None)
// struct FVector2D                   PlayRateClamp                                                    (None)
// struct FSequencePlayerReference    ReturnValue                                                      (None)

void UAnimDistanceMatchingLibrary::SetPlayrateToMatchSpeed(const struct FSequencePlayerReference& SequencePlayer, float SpeedToMatch, const struct FVector2D& PlayRateClamp, const struct FSequencePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimDistanceMatchingLibrary", "SetPlayrateToMatchSpeed");

	Params::UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.SpeedToMatch = SpeedToMatch;
	Parms.PlayRateClamp = PlayRateClamp;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.DistanceMatchToTarget
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (None)
// float                              DistanceToTarget                                                 (None)
// class FName                        DistanceCurveName                                                (None)
// struct FSequenceEvaluatorReference ReturnValue                                                      (None)

void UAnimDistanceMatchingLibrary::DistanceMatchToTarget(const struct FSequenceEvaluatorReference& SequenceEvaluator, float DistanceToTarget, class FName DistanceCurveName, const struct FSequenceEvaluatorReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimDistanceMatchingLibrary", "DistanceMatchToTarget");

	Params::UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Params Parms{};

	Parms.SequenceEvaluator = SequenceEvaluator;
	Parms.DistanceToTarget = DistanceToTarget;
	Parms.DistanceCurveName = DistanceCurveName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.AdvanceTimeByDistanceMatching
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (None)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (None)
// float                              DistanceTraveled                                                 (None)
// class FName                        DistanceCurveName                                                (None)
// struct FVector2D                   PlayRateClamp                                                    (None)
// struct FSequenceEvaluatorReference ReturnValue                                                      (None)

void UAnimDistanceMatchingLibrary::AdvanceTimeByDistanceMatching(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, float DistanceTraveled, class FName DistanceCurveName, const struct FVector2D& PlayRateClamp, const struct FSequenceEvaluatorReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimDistanceMatchingLibrary", "AdvanceTimeByDistanceMatching");

	Params::UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.SequenceEvaluator = SequenceEvaluator;
	Parms.DistanceTraveled = DistanceTraveled;
	Parms.DistanceCurveName = DistanceCurveName;
	Parms.PlayRateClamp = PlayRateClamp;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


