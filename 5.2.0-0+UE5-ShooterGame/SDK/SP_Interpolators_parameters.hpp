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

// 0x78 (0x78 - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorVector
struct USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector_Params
{
public:
	struct FIIRInterpolatorVector                Interpolator;                                      // 0x0(0x78)(None)
};

// 0x78 (0x78 - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorRotator
struct USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator_Params
{
public:
	struct FIIRInterpolatorRotator               Interpolator;                                      // 0x0(0x78)(None)
};

// 0x20 (0x20 - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorFloat
struct USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat_Params
{
public:
	struct FIIRInterpolatorFloat                 Interpolator;                                      // 0x0(0x20)(None)
};

// 0x108 (0x108 - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorVector
struct USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector_Params
{
public:
	struct FDoubleIIRInterpolatorVector          Interpolator;                                      // 0x0(0x108)(None)
};

// 0x108 (0x108 - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorRotator
struct USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator_Params
{
public:
	struct FDoubleIIRInterpolatorRotator         Interpolator;                                      // 0x0(0x108)(None)
};

// 0x4C (0x4C - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorFloat
struct USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat_Params
{
public:
	struct FDoubleIIRInterpolatorFloat           Interpolator;                                      // 0x0(0x4C)(None)
};

// 0xA8 (0xA8 - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetCritDampedSpringInterpolatorVector
struct USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector_Params
{
public:
	struct FCritDampSpringInterpolatorVector     Interpolator;                                      // 0x0(0xA8)(None)
};

// 0xA8 (0xA8 - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetCritDampedSpringInterpolatorRotator
struct USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator_Params
{
public:
	struct FCritDampSpringInterpolatorRotator    Interpolator;                                      // 0x0(0xA8)(None)
};

// 0x58 (0x58 - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorVector
struct USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector_Params
{
public:
	struct FAccelerationInterpolatorVector       Interpolator;                                      // 0x0(0x58)(None)
};

// 0x58 (0x58 - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorRotator
struct USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator_Params
{
public:
	struct FAccelerationInterpolatorRotator      Interpolator;                                      // 0x0(0x58)(None)
};

// 0x30 (0x30 - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorFloat
struct USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat_Params
{
public:
	struct FAccelerationInterpolatorFloat        Interpolator;                                      // 0x0(0x30)(None)
};

// 0xB0 (0xB0 - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorVector
struct USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Params
{
public:
	struct FIIRInterpolatorVector                Interpolator;                                      // 0x0(0x78)(None)
	struct FVector                               NewGoal;                                           // 0x78(0x18)(None)
	float                                        DeltaTime;                                         // 0x90(0x4)(None)
	uint8                                        Pad_203B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x98(0x18)(None)
};

// 0xB0 (0xB0 - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorRotator
struct USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Params
{
public:
	struct FIIRInterpolatorRotator               Interpolator;                                      // 0x0(0x78)(None)
	struct FRotator                              NewGoal;                                           // 0x78(0x18)(None)
	float                                        DeltaTime;                                         // 0x90(0x4)(None)
	uint8                                        Pad_203F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ReturnValue;                                       // 0x98(0x18)(None)
};

// 0x2C (0x2C - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorFloat
struct USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Params
{
public:
	struct FIIRInterpolatorFloat                 Interpolator;                                      // 0x0(0x20)(None)
	float                                        NewGoal;                                           // 0x20(0x4)(None)
	float                                        DeltaTime;                                         // 0x24(0x4)(None)
	float                                        ReturnValue;                                       // 0x28(0x4)(None)
};

// 0x140 (0x140 - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorVector
struct USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Params
{
public:
	struct FDoubleIIRInterpolatorVector          Interpolator;                                      // 0x0(0x108)(None)
	struct FVector                               NewGoal;                                           // 0x108(0x18)(None)
	float                                        DeltaTime;                                         // 0x120(0x4)(None)
	uint8                                        Pad_2041[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x128(0x18)(None)
};

// 0x140 (0x140 - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorRotator
struct USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Params
{
public:
	struct FDoubleIIRInterpolatorRotator         Interpolator;                                      // 0x0(0x108)(None)
	struct FRotator                              NewGoal;                                           // 0x108(0x18)(None)
	float                                        DeltaTime;                                         // 0x120(0x4)(None)
	uint8                                        Pad_2043[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ReturnValue;                                       // 0x128(0x18)(None)
};

// 0x58 (0x58 - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorFloat
struct USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Params
{
public:
	struct FDoubleIIRInterpolatorFloat           Interpolator;                                      // 0x0(0x4C)(None)
	float                                        NewGoal;                                           // 0x4C(0x4)(None)
	float                                        DeltaTime;                                         // 0x50(0x4)(None)
	float                                        ReturnValue;                                       // 0x54(0x4)(None)
};

// 0xE0 (0xE0 - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalCritDampedSpringInterpolatorVector
struct USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Params
{
public:
	struct FCritDampSpringInterpolatorVector     Interpolator;                                      // 0x0(0xA8)(None)
	struct FVector                               NewGoal;                                           // 0xA8(0x18)(None)
	float                                        DeltaTime;                                         // 0xC0(0x4)(None)
	uint8                                        Pad_2044[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0xC8(0x18)(None)
};

// 0xE0 (0xE0 - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalCritDampedSpringInterpolatorRotator
struct USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Params
{
public:
	struct FCritDampSpringInterpolatorRotator    Interpolator;                                      // 0x0(0xA8)(None)
	struct FRotator                              NewGoal;                                           // 0xA8(0x18)(None)
	float                                        DeltaTime;                                         // 0xC0(0x4)(None)
	uint8                                        Pad_2045[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ReturnValue;                                       // 0xC8(0x18)(None)
};

// 0x90 (0x90 - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorVector
struct USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Params
{
public:
	struct FAccelerationInterpolatorVector       Interpolator;                                      // 0x0(0x58)(None)
	struct FVector                               NewGoal;                                           // 0x58(0x18)(None)
	float                                        DeltaTime;                                         // 0x70(0x4)(None)
	uint8                                        Pad_2047[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x78(0x18)(None)
};

// 0x90 (0x90 - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorRotator
struct USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Params
{
public:
	struct FAccelerationInterpolatorRotator      Interpolator;                                      // 0x0(0x58)(None)
	struct FRotator                              NewGoal;                                           // 0x58(0x18)(None)
	float                                        DeltaTime;                                         // 0x70(0x4)(None)
	uint8                                        Pad_2049[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ReturnValue;                                       // 0x78(0x18)(None)
};

// 0x3C (0x3C - 0x0)
// Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorFloat
struct USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Params
{
public:
	struct FAccelerationInterpolatorFloat        Interpolator;                                      // 0x0(0x30)(None)
	float                                        NewGoal;                                           // 0x30(0x4)(None)
	float                                        DeltaTime;                                         // 0x34(0x4)(None)
	float                                        ReturnValue;                                       // 0x38(0x4)(None)
};

}
}


