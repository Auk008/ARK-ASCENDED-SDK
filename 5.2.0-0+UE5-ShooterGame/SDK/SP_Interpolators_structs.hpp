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

// 0x78 (0x78 - 0x0)
// ScriptStruct SP_Interpolators.IIRInterpolatorVector
struct FIIRInterpolatorVector
{
public:
	float                                        InterpSpeed;                                       // 0x0(0x4)(None)
	uint8                                        Pad_2051[0x74];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x108 - 0x0)
// ScriptStruct SP_Interpolators.DoubleIIRInterpolatorVector
struct FDoubleIIRInterpolatorVector
{
public:
	float                                        PrimaryInterpSpeed;                                // 0x0(0x4)(None)
	float                                        IntermediateInterpSpeed;                           // 0x4(0x4)(None)
	uint8                                        Pad_2052[0x100];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct SP_Interpolators.IIRInterpolatorRotator
struct FIIRInterpolatorRotator
{
public:
	float                                        InterpSpeed;                                       // 0x0(0x4)(None)
	uint8                                        Pad_2053[0x74];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x108 - 0x0)
// ScriptStruct SP_Interpolators.DoubleIIRInterpolatorRotator
struct FDoubleIIRInterpolatorRotator
{
public:
	float                                        PrimaryInterpSpeed;                                // 0x0(0x4)(None)
	float                                        IntermediateInterpSpeed;                           // 0x4(0x4)(None)
	uint8                                        Pad_2054[0x100];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SP_Interpolators.IIRInterpolatorFloat
struct FIIRInterpolatorFloat
{
public:
	float                                        InterpSpeed;                                       // 0x0(0x4)(None)
	uint8                                        Pad_2055[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4C (0x4C - 0x0)
// ScriptStruct SP_Interpolators.DoubleIIRInterpolatorFloat
struct FDoubleIIRInterpolatorFloat
{
public:
	float                                        PrimaryInterpSpeed;                                // 0x0(0x4)(None)
	float                                        IntermediateInterpSpeed;                           // 0x4(0x4)(None)
	uint8                                        Pad_2057[0x44];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SP_Interpolators.AccelerationInterpolatorParams
struct FAccelerationInterpolatorParams
{
public:
	float                                        Acceleration;                                      // 0x0(0x4)(None)
	float                                        MinDeceleration;                                   // 0x4(0x4)(None)
	float                                        MaxSpeed;                                          // 0x8(0x4)(None)
	float                                        HoldTolerance;                                     // 0xC(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SP_Interpolators.AccelerationInterpolatorFloat
struct FAccelerationInterpolatorFloat
{
public:
	struct FAccelerationInterpolatorParams       AccelerationParams;                                // 0x0(0x10)(None)
	uint8                                        Pad_2058[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct SP_Interpolators.AccelerationInterpolatorVector
struct FAccelerationInterpolatorVector
{
public:
	struct FAccelerationInterpolatorParams       AccelerationParams;                                // 0x0(0x10)(None)
	uint8                                        Pad_205A[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct SP_Interpolators.AccelerationInterpolatorRotator
struct FAccelerationInterpolatorRotator
{
public:
	struct FAccelerationInterpolatorParams       AccelerationParams;                                // 0x0(0x10)(None)
	uint8                                        Pad_205C[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct SP_Interpolators.CritDampSpringInterpolatorVector
struct FCritDampSpringInterpolatorVector
{
public:
	float                                        NaturalFrequency;                                  // 0x0(0x4)(None)
	uint8                                        Pad_205D[0xA4];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct SP_Interpolators.CritDampSpringInterpolatorRotator
struct FCritDampSpringInterpolatorRotator
{
public:
	float                                        NaturalFrequency;                                  // 0x0(0x4)(None)
	uint8                                        Pad_205E[0xA4];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


