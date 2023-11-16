#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFoliageVertexColorMask : uint8
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red     = 1,
	FOLIAGEVERTEXCOLORMASK_Green   = 2,
	FOLIAGEVERTEXCOLORMASK_Blue    = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha   = 4,
	FOLIAGEVERTEXCOLORMASK_MAX     = 5,
};

enum class EVertexColorMaskChannel : uint8
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	MAX_None                       = 4,
	EVertexColorMaskChannel_MAX    = 5,
};

enum class EFoliageScaling : uint8
{
	Uniform                        = 0,
	Free                           = 1,
	LockXY                         = 2,
	LockXZ                         = 3,
	LockYZ                         = 4,
	EFoliageScaling_MAX            = 5,
};

enum class ESimulationOverlap : uint8
{
	CollisionOverlap               = 0,
	ShadeOverlap                   = 1,
	None                           = 2,
	ESimulationOverlap_MAX         = 3,
};

enum class ESimulationQuery : uint8
{
	None                           = 0,
	CollisionOverlap               = 1,
	ShadeOverlap                   = 2,
	AnyOverlap                     = 3,
	ESimulationQuery_MAX           = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct Foliage.FoliageVertexColorChannelMask
struct FFoliageVertexColorChannelMask
{
public:
	uint8                                        UseMask : 1;                                       // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_242 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2D87[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaskThreshold;                                     // 0x4(0x4)(None)
	uint8                                        InvertMask : 1;                                    // Mask: 0x1, PropSize: 0x10x8(0x1)(None)
	uint8                                        Pad_2D88[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Foliage.FoliageDensityFalloff
struct FFoliageDensityFalloff
{
public:
	bool                                         bUseFalloffCurve;                                  // 0x0(0x1)(None)
	uint8                                        Pad_2D89[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    FalloffCurve;                                      // 0x8(0x88)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Foliage.FoliageTypeObject
struct FFoliageTypeObject
{
public:
	class UObject*                               FoliageTypeObject;                                 // 0x0(0x8)(ZeroConstructor)
	class UFoliageType*                          TypeInstance;                                      // 0x8(0x8)(ZeroConstructor)
	bool                                         bIsAsset;                                          // 0x10(0x1)(None)
	uint8                                        Pad_2D8A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Type;                                              // 0x18(0x8)(None)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Foliage.ProceduralFoliageInstance
struct FProceduralFoliageInstance
{
public:
	struct FQuat                                 Rotation;                                          // 0x0(0x20)(None)
	struct FVector                               Location;                                          // 0x20(0x18)(None)
	float                                        Age;                                               // 0x38(0x4)(None)
	uint8                                        Pad_2D8B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Normal;                                            // 0x40(0x18)(None)
	float                                        Scale;                                             // 0x58(0x4)(None)
	uint8                                        Pad_2D8C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFoliageType*                          Type;                                              // 0x60(0x8)(None)
	uint8                                        Pad_2D8D[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


