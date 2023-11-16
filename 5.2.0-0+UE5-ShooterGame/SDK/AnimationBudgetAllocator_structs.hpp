#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// ScriptStruct AnimationBudgetAllocator.AnimationBudgetAllocatorParameters
struct FAnimationBudgetAllocatorParameters
{
public:
	float                                        BudgetInMs;                                        // 0x0(0x4)(None)
	float                                        MinQuality;                                        // 0x4(0x4)(None)
	int32                                        MaxTickRate;                                       // 0x8(0x4)(None)
	float                                        WorkUnitSmoothingSpeed;                            // 0xC(0x4)(None)
	float                                        AlwaysTickFalloffAggression;                       // 0x10(0x4)(None)
	float                                        InterpolationFalloffAggression;                    // 0x14(0x4)(None)
	int32                                        InterpolationMaxRate;                              // 0x18(0x4)(None)
	int32                                        MaxInterpolatedComponents;                         // 0x1C(0x4)(None)
	float                                        InterpolationTickMultiplier;                       // 0x20(0x4)(None)
	float                                        InitialEstimatedWorkUnitTimeMs;                    // 0x24(0x4)(None)
	int32                                        MaxTickedOffsreenComponents;                       // 0x28(0x4)(None)
	int32                                        StateChangeThrottleInFrames;                       // 0x2C(0x4)(None)
	float                                        BudgetFactorBeforeReducedWork;                     // 0x30(0x4)(None)
	float                                        BudgetFactorBeforeReducedWorkEpsilon;              // 0x34(0x4)(None)
	float                                        BudgetPressureSmoothingSpeed;                      // 0x38(0x4)(None)
	int32                                        ReducedWorkThrottleMinInFrames;                    // 0x3C(0x4)(None)
	int32                                        ReducedWorkThrottleMaxInFrames;                    // 0x40(0x4)(None)
	float                                        BudgetFactorBeforeAggressiveReducedWork;           // 0x44(0x4)(None)
	int32                                        ReducedWorkThrottleMaxPerFrame;                    // 0x48(0x4)(None)
	float                                        BudgetPressureBeforeEmergencyReducedWork;          // 0x4C(0x4)(None)
	float                                        AutoCalculatedSignificanceMaxDistance;             // 0x50(0x4)(None)
	uint8                                        Pad_FF[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

}


