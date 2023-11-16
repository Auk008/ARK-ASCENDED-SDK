#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementStopLocation
struct UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Params
{
public:
	struct FVector                               Velocity;                                          // 0x0(0x18)(None)
	bool                                         bUseSeparateBrakingFriction;                       // 0x18(0x1)(None)
	uint8                                        Pad_190D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BrakingFriction;                                   // 0x1C(0x4)(None)
	float                                        GroundFriction;                                    // 0x20(0x4)(None)
	float                                        BrakingFrictionFactor;                             // 0x24(0x4)(None)
	float                                        BrakingDecelerationWalking;                        // 0x28(0x4)(None)
	uint8                                        Pad_190E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x30(0x18)(None)
};

// 0x50 (0x50 - 0x0)
// Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementPivotLocation
struct UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Params
{
public:
	struct FVector                               Acceleration;                                      // 0x0(0x18)(None)
	struct FVector                               Velocity;                                          // 0x18(0x18)(None)
	float                                        GroundFriction;                                    // 0x30(0x4)(None)
	uint8                                        Pad_191A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x38(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.SetPlayrateToMatchSpeed
struct UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(None)
	float                                        SpeedToMatch;                                      // 0x10(0x4)(None)
	uint8                                        Pad_1928[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             PlayRateClamp;                                     // 0x18(0x10)(None)
	struct FSequencePlayerReference              ReturnValue;                                       // 0x28(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.DistanceMatchToTarget
struct UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Params
{
public:
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x0(0x10)(None)
	float                                        DistanceToTarget;                                  // 0x10(0x4)(None)
	class FName                                  DistanceCurveName;                                 // 0x14(0x8)(None)
	uint8                                        Pad_1931[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x20(0x10)(None)
};

// 0x50 (0x50 - 0x0)
// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.AdvanceTimeByDistanceMatching
struct UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(None)
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x10(0x10)(None)
	float                                        DistanceTraveled;                                  // 0x20(0x4)(None)
	class FName                                  DistanceCurveName;                                 // 0x24(0x8)(None)
	uint8                                        Pad_1940[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             PlayRateClamp;                                     // 0x30(0x10)(None)
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x40(0x10)(None)
};

}
}


