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

// 0x40 (0x40 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
struct UFieldSystemComponent_ApplyUniformVectorFalloffForce_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(None)
	uint8                                        Pad_26EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x8(0x18)(None)
	struct FVector                               Direction;                                         // 0x20(0x18)(None)
	float                                        Radius;                                            // 0x38(0x4)(None)
	float                                        Magnitude;                                         // 0x3C(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
struct UFieldSystemComponent_ApplyStrainField_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(None)
	uint8                                        Pad_26EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x8(0x18)(None)
	float                                        Radius;                                            // 0x20(0x4)(None)
	float                                        Magnitude;                                         // 0x24(0x4)(None)
	int32                                        Iterations;                                        // 0x28(0x4)(None)
	uint8                                        Pad_26ED[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
struct UFieldSystemComponent_ApplyStayDynamicField_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(None)
	uint8                                        Pad_26F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x8(0x18)(None)
	float                                        Radius;                                            // 0x20(0x4)(None)
	uint8                                        Pad_26F1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
struct UFieldSystemComponent_ApplyRadialVectorFalloffForce_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(None)
	uint8                                        Pad_26F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x8(0x18)(None)
	float                                        Radius;                                            // 0x20(0x4)(None)
	float                                        Magnitude;                                         // 0x24(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
struct UFieldSystemComponent_ApplyRadialForce_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(None)
	uint8                                        Pad_26F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x8(0x18)(None)
	float                                        Magnitude;                                         // 0x20(0x4)(None)
	uint8                                        Pad_26F4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
struct UFieldSystemComponent_ApplyPhysicsField_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(None)
	enum class EFieldPhysicsType                 Target;                                            // 0x1(0x1)(None)
	uint8                                        Pad_26F6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFieldSystemMetaData*                  MetaData;                                          // 0x8(0x8)(ZeroConstructor)
	class UFieldNodeBase*                        Field;                                             // 0x10(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
struct UFieldSystemComponent_ApplyLinearForce_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(None)
	uint8                                        Pad_26F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Direction;                                         // 0x8(0x18)(None)
	float                                        Magnitude;                                         // 0x20(0x4)(None)
	uint8                                        Pad_26F8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.AddPersistentField
struct UFieldSystemComponent_AddPersistentField_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(None)
	enum class EFieldPhysicsType                 Target;                                            // 0x1(0x1)(None)
	uint8                                        Pad_26FA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFieldSystemMetaData*                  MetaData;                                          // 0x8(0x8)(ZeroConstructor)
	class UFieldNodeBase*                        Field;                                             // 0x10(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
struct UFieldSystemComponent_AddFieldCommand_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(None)
	enum class EFieldPhysicsType                 Target;                                            // 0x1(0x1)(None)
	uint8                                        Pad_26FE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFieldSystemMetaData*                  MetaData;                                          // 0x8(0x8)(ZeroConstructor)
	class UFieldNodeBase*                        Field;                                             // 0x10(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
struct UFieldSystemMetaDataIteration_SetMetaDataIteration_Params
{
public:
	int32                                        Iterations;                                        // 0x0(0x4)(None)
	uint8                                        Pad_270B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFieldSystemMetaDataIteration*         ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
struct UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Params
{
public:
	enum class EFieldResolutionType              ResolutionType;                                    // 0x0(0x1)(None)
	uint8                                        Pad_270F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFieldSystemMetaDataProcessingResolution* ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType
struct UFieldSystemMetaDataFilter_SetMetaDataFilterType_Params
{
public:
	enum class EFieldFilterType                  FilterType;                                        // 0x0(0x1)(None)
	enum class EFieldObjectType                  ObjectType;                                        // 0x1(0x1)(None)
	enum class EFieldPositionType                PositionType;                                      // 0x2(0x1)(None)
	uint8                                        Pad_2714[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFieldSystemMetaDataFilter*            ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.UniformInteger.SetUniformInteger
struct UUniformInteger_SetUniformInteger_Params
{
public:
	int32                                        Magnitude;                                         // 0x0(0x4)(None)
	uint8                                        Pad_271A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUniformInteger*                       ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
struct URadialIntMask_SetRadialIntMask_Params
{
public:
	float                                        Radius;                                            // 0x0(0x4)(None)
	uint8                                        Pad_271C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x8(0x18)(None)
	int32                                        InteriorValue;                                     // 0x20(0x4)(None)
	int32                                        ExteriorValue;                                     // 0x24(0x4)(None)
	enum class ESetMaskConditionType             SetMaskConditionIn;                                // 0x28(0x1)(None)
	uint8                                        Pad_271D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URadialIntMask*                        ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.UniformScalar.SetUniformScalar
struct UUniformScalar_SetUniformScalar_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(None)
	uint8                                        Pad_2724[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUniformScalar*                        ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function FieldSystemEngine.WaveScalar.SetWaveScalar
struct UWaveScalar_SetWaveScalar_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(None)
	uint8                                        Pad_272B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x8(0x18)(None)
	float                                        Wavelength;                                        // 0x20(0x4)(None)
	float                                        Period;                                            // 0x24(0x4)(None)
	float                                        Time;                                              // 0x28(0x4)(None)
	enum class EWaveFunctionType                 Function;                                          // 0x2C(0x1)(None)
	enum class EFieldFalloffType                 Falloff;                                           // 0x2D(0x1)(None)
	uint8                                        Pad_272C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWaveScalar*                           ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
struct URadialFalloff_SetRadialFalloff_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(None)
	float                                        MinRange;                                          // 0x4(0x4)(None)
	float                                        MaxRange;                                          // 0x8(0x4)(None)
	float                                        Default;                                           // 0xC(0x4)(None)
	float                                        Radius;                                            // 0x10(0x4)(None)
	uint8                                        Pad_2734[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x18(0x18)(None)
	enum class EFieldFalloffType                 Falloff;                                           // 0x30(0x1)(None)
	uint8                                        Pad_2735[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URadialFalloff*                        ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x58 (0x58 - 0x0)
// Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
struct UPlaneFalloff_SetPlaneFalloff_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(None)
	float                                        MinRange;                                          // 0x4(0x4)(None)
	float                                        MaxRange;                                          // 0x8(0x4)(None)
	float                                        Default;                                           // 0xC(0x4)(None)
	float                                        Distance;                                          // 0x10(0x4)(None)
	uint8                                        Pad_2739[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x18(0x18)(None)
	struct FVector                               Normal;                                            // 0x30(0x18)(None)
	enum class EFieldFalloffType                 Falloff;                                           // 0x48(0x1)(None)
	uint8                                        Pad_273A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlaneFalloff*                         ReturnValue;                                       // 0x50(0x8)(None)
};

// 0x80 (0x80 - 0x0)
// Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
struct UBoxFalloff_SetBoxFalloff_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(None)
	float                                        MinRange;                                          // 0x4(0x4)(None)
	float                                        MaxRange;                                          // 0x8(0x4)(None)
	float                                        Default;                                           // 0xC(0x4)(None)
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	enum class EFieldFalloffType                 Falloff;                                           // 0x70(0x1)(None)
	uint8                                        Pad_2740[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBoxFalloff*                           ReturnValue;                                       // 0x78(0x8)(None)
};

// 0x80 (0x80 - 0x0)
// Function FieldSystemEngine.NoiseField.SetNoiseField
struct UNoiseField_SetNoiseField_Params
{
public:
	float                                        MinRange;                                          // 0x0(0x4)(None)
	float                                        MaxRange;                                          // 0x4(0x4)(None)
	uint8                                        Pad_2746[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	class UNoiseField*                           ReturnValue;                                       // 0x70(0x8)(None)
	uint8                                        Pad_2747[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function FieldSystemEngine.UniformVector.SetUniformVector
struct UUniformVector_SetUniformVector_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(None)
	uint8                                        Pad_274A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Direction;                                         // 0x8(0x18)(None)
	class UUniformVector*                        ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function FieldSystemEngine.RadialVector.SetRadialVector
struct URadialVector_SetRadialVector_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(None)
	uint8                                        Pad_2750[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x8(0x18)(None)
	class URadialVector*                         ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.RandomVector.SetRandomVector
struct URandomVector_SetRandomVector_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(None)
	uint8                                        Pad_2754[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URandomVector*                         ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function FieldSystemEngine.OperatorField.SetOperatorField
struct UOperatorField_SetOperatorField_Params
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(None)
	uint8                                        Pad_2757[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFieldNodeBase*                        LeftField;                                         // 0x8(0x8)(ZeroConstructor)
	class UFieldNodeBase*                        RightField;                                        // 0x10(0x8)(ZeroConstructor)
	enum class EFieldOperationType               Operation;                                         // 0x18(0x1)(None)
	uint8                                        Pad_2758[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOperatorField*                        ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.ToIntegerField.SetToIntegerField
struct UToIntegerField_SetToIntegerField_Params
{
public:
	class UFieldNodeFloat*                       FloatField;                                        // 0x0(0x8)(ZeroConstructor)
	class UToIntegerField*                       ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function FieldSystemEngine.ToFloatField.SetToFloatField
struct UToFloatField_SetToFloatField_Params
{
public:
	class UFieldNodeInt*                         IntegerField;                                      // 0x0(0x8)(ZeroConstructor)
	class UToFloatField*                         ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function FieldSystemEngine.CullingField.SetCullingField
struct UCullingField_SetCullingField_Params
{
public:
	class UFieldNodeBase*                        Culling;                                           // 0x0(0x8)(ZeroConstructor)
	class UFieldNodeBase*                        Field;                                             // 0x8(0x8)(ZeroConstructor)
	enum class EFieldCullingOperationType        Operation;                                         // 0x10(0x1)(None)
	uint8                                        Pad_2774[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCullingField*                         ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
struct UReturnResultsTerminal_SetReturnResultsTerminal_Params
{
public:
	class UReturnResultsTerminal*                ReturnValue;                                       // 0x0(0x8)(None)
};

}
}


