#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary
class UAnimCharacterMovementLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimCharacterMovementLibrary* GetDefaultObj();

	void PredictGroundMovementStopLocation(const struct FVector& Velocity, bool bUseSeparateBrakingFriction, float BrakingFriction, float GroundFriction, float BrakingFrictionFactor, float BrakingDecelerationWalking, const struct FVector& ReturnValue);
	void PredictGroundMovementPivotLocation(const struct FVector& Acceleration, const struct FVector& Velocity, float GroundFriction, const struct FVector& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary
class UAnimDistanceMatchingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimDistanceMatchingLibrary* GetDefaultObj();

	void SetPlayrateToMatchSpeed(const struct FSequencePlayerReference& SequencePlayer, float SpeedToMatch, const struct FVector2D& PlayRateClamp, const struct FSequencePlayerReference& ReturnValue);
	void DistanceMatchToTarget(const struct FSequenceEvaluatorReference& SequenceEvaluator, float DistanceToTarget, class FName DistanceCurveName, const struct FSequenceEvaluatorReference& ReturnValue);
	void AdvanceTimeByDistanceMatching(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, float DistanceTraveled, class FName DistanceCurveName, const struct FVector2D& PlayRateClamp, const struct FSequenceEvaluatorReference& ReturnValue);
};

}


