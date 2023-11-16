#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESplineType : uint8
{
	BSpline                        = 0,
	Hermite                        = 1,
	Max                            = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// ScriptStruct ControlRigSpline.ControlRigSplineImpl
struct FControlRigSplineImpl
{
public:
	uint8                                        Pad_3064[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRigSpline.ControlRigSpline
struct FControlRigSpline
{
public:
	uint8                                        Pad_3065[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineBase
struct FRigUnit_ControlRigSplineBase : public FRigUnit
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineFromPoints
struct FRigUnit_ControlRigSplineFromPoints : public FRigUnit_ControlRigSplineBase
{
public:
	TArray<struct FVector>                       Points;                                            // 0x8(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ESplineType                       SplineMode;                                        // 0x18(0x1)(None)
	bool                                         bClosed;                                           // 0x19(0x1)(None)
	uint8                                        Pad_3069[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SamplesPerSegment;                                 // 0x1C(0x4)(None)
	float                                        Compression;                                       // 0x20(0x4)(None)
	float                                        Stretch;                                           // 0x24(0x4)(None)
	struct FControlRigSpline                     Spline;                                            // 0x28(0x18)(None)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRigSpline.RigUnit_SetSplinePoints
struct FRigUnit_SetSplinePoints : public FRigUnitMutable
{
public:
	TArray<struct FVector>                       Points;                                            // 0x130(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FControlRigSpline                     Spline;                                            // 0x140(0x18)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_306B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_PositionFromControlRigSpline
struct FRigUnit_PositionFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(None)
	float                                        U;                                                 // 0x20(0x4)(None)
	uint8                                        Pad_306C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x28(0x18)(None)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_TransformFromControlRigSpline
struct FRigUnit_TransformFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(None)
	struct FVector                               UpVector;                                          // 0x20(0x18)(None)
	float                                        Roll;                                              // 0x38(0x4)(None)
	float                                        U;                                                 // 0x3C(0x4)(None)
	struct FTransform                            Transform;                                         // 0x40(0x60)(None)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_TangentFromControlRigSpline
struct FRigUnit_TangentFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(None)
	float                                        U;                                                 // 0x20(0x4)(None)
	uint8                                        Pad_3070[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Tangent;                                           // 0x28(0x18)(None)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRigSpline.RigUnit_DrawControlRigSpline
struct FRigUnit_DrawControlRigSpline : public FRigUnitMutable
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x130(0x18)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                          Color;                                             // 0x148(0x10)(None)
	float                                        Thickness;                                         // 0x158(0x4)(None)
	int32                                        Detail;                                            // 0x15C(0x4)(None)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_GetLengthControlRigSpline
struct FRigUnit_GetLengthControlRigSpline : public FRigUnit
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(None)
	float                                        Length;                                            // 0x20(0x4)(None)
	uint8                                        Pad_3071[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1D0 (0x300 - 0x130)
// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurve
struct FRigUnit_FitChainToSplineCurve : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x130(0x10)(AdvancedDisplay, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FControlRigSpline                     Spline;                                            // 0x140(0x18)(SimpleDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x158(0x1)(None)
	uint8                                        Pad_3072[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Minimum;                                           // 0x15C(0x4)(None)
	float                                        Maximum;                                           // 0x160(0x4)(None)
	int32                                        SamplingPrecision;                                 // 0x164(0x4)(None)
	struct FVector                               PrimaryAxis;                                       // 0x168(0x18)(None)
	struct FVector                               SecondaryAxis;                                     // 0x180(0x18)(None)
	struct FVector                               PoleVectorPosition;                                // 0x198(0x18)(None)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x1B0(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x1C0(0x1)(None)
	uint8                                        Pad_3073[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x1C4(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x1C8(0x1)(None)
	uint8                                        Pad_3074[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x1D0(0x90)(None)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x260(0x98)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3075[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1D0 (0x300 - 0x130)
// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurveItemArray
struct FRigUnit_FitChainToSplineCurveItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x130(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FControlRigSpline                     Spline;                                            // 0x140(0x18)(AutoWeak, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x158(0x1)(None)
	uint8                                        Pad_3078[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Minimum;                                           // 0x15C(0x4)(None)
	float                                        Maximum;                                           // 0x160(0x4)(None)
	int32                                        SamplingPrecision;                                 // 0x164(0x4)(None)
	struct FVector                               PrimaryAxis;                                       // 0x168(0x18)(None)
	struct FVector                               SecondaryAxis;                                     // 0x180(0x18)(None)
	struct FVector                               PoleVectorPosition;                                // 0x198(0x18)(None)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x1B0(0x10)(AssetRegistrySearchable, SimpleDisplay, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x1C0(0x1)(None)
	uint8                                        Pad_3079[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x1C4(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x1C8(0x1)(None)
	uint8                                        Pad_307A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x1D0(0x90)(None)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x260(0x98)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_307C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChain
struct FRigUnit_FitSplineCurveToChain : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x130(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FControlRigSpline                     Spline;                                            // 0x140(0x18)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_307E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChainItemArray
struct FRigUnit_FitSplineCurveToChainItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x130(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FControlRigSpline                     Spline;                                            // 0x140(0x18)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3081[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ClosestParameterFromControlRigSpline
struct FRigUnit_ClosestParameterFromControlRigSpline : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(None)
	struct FVector                               Position;                                          // 0x20(0x18)(None)
	float                                        U;                                                 // 0x38(0x4)(None)
	uint8                                        Pad_3086[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ParameterAtPercentage
struct FRigUnit_ParameterAtPercentage : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                     Spline;                                            // 0x8(0x18)(None)
	float                                        Percentage;                                        // 0x20(0x4)(None)
	float                                        U;                                                 // 0x24(0x4)(None)
};

}


