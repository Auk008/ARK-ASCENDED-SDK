#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EEulerRotationOrder : uint8
{
	XYZ                            = 0,
	XZY                            = 1,
	YXZ                            = 2,
	YZX                            = 3,
	ZXY                            = 4,
	ZYX                            = 5,
	EEulerRotationOrder_MAX        = 6,
};

enum class EConstraintType : uint8
{
	Transform                      = 0,
	Aim                            = 1,
	MAX                            = 2,
};

enum class ETransformConstraintType : uint8
{
	Translation                    = 0,
	Rotation                       = 1,
	Scale                          = 2,
	Parent                         = 3,
	LookAt                         = 4,
	ETransformConstraintType_MAX   = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x3 (0x3 - 0x0)
// ScriptStruct AnimationCore.FilterOptionPerAxis
struct FFilterOptionPerAxis
{
public:
	bool                                         bX;                                                // 0x0(0x1)(None)
	bool                                         bY;                                                // 0x1(0x1)(None)
	bool                                         bZ;                                                // 0x2(0x1)(None)
};

// 0xD (0xD - 0x0)
// ScriptStruct AnimationCore.ConstraintDescription
struct FConstraintDescription
{
public:
	bool                                         bTranslation;                                      // 0x0(0x1)(None)
	bool                                         bRotation;                                         // 0x1(0x1)(None)
	bool                                         bScale;                                            // 0x2(0x1)(None)
	bool                                         bParent;                                           // 0x3(0x1)(None)
	struct FFilterOptionPerAxis                  TranslationAxes;                                   // 0x4(0x3)(None)
	struct FFilterOptionPerAxis                  RotationAxes;                                      // 0x7(0x3)(None)
	struct FFilterOptionPerAxis                  ScaleAxes;                                         // 0xA(0x3)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AnimationCore.TransformConstraint
struct FTransformConstraint
{
public:
	struct FConstraintDescription                Operator;                                          // 0x0(0xD)(None)
	uint8                                        Pad_2775[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SourceNode;                                        // 0x10(0x8)(None)
	class FName                                  TargetNode;                                        // 0x18(0x8)(None)
	float                                        Weight;                                            // 0x20(0x4)(None)
	bool                                         bMaintainOffset;                                   // 0x24(0x1)(None)
	uint8                                        Pad_2776[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct AnimationCore.ConstraintOffset
struct FConstraintOffset
{
public:
	struct FVector                               Translation;                                       // 0x0(0x18)(None)
	uint8                                        Pad_2777[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Rotation;                                          // 0x20(0x20)(None)
	struct FVector                               Scale;                                             // 0x40(0x18)(None)
	uint8                                        Pad_2779[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Parent;                                            // 0x60(0x60)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimationCore.NodeObject
struct FNodeObject
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	class FName                                  ParentName;                                        // 0x8(0x8)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct AnimationCore.NodeHierarchyData
struct FNodeHierarchyData
{
public:
	TArray<struct FNodeObject>                   Nodes;                                             // 0x0(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FTransform>                    Transforms;                                        // 0x10(0x10)(AutoWeak, ContainsInstancedReference, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TMap<class FName, int32>                     NodeNameToIndexMapping;                            // 0x20(0x50)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct AnimationCore.NodeHierarchyWithUserData
struct FNodeHierarchyWithUserData
{
public:
	uint8                                        Pad_277D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNodeHierarchyData                    Hierarchy;                                         // 0x8(0x70)(None)
};

// 0x9 (0x9 - 0x0)
// ScriptStruct AnimationCore.TransformFilter
struct FTransformFilter
{
public:
	struct FFilterOptionPerAxis                  TranslationFilter;                                 // 0x0(0x3)(None)
	struct FFilterOptionPerAxis                  RotationFilter;                                    // 0x3(0x3)(None)
	struct FFilterOptionPerAxis                  ScaleFilter;                                       // 0x6(0x3)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct AnimationCore.EulerTransform
struct FEulerTransform
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(None)
	struct FVector                               Scale;                                             // 0x30(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimationCore.ConstraintDescriptor
struct FConstraintDescriptor
{
public:
	enum class EConstraintType                   Type;                                              // 0x0(0x1)(None)
	uint8                                        Pad_278A[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct AnimationCore.ConstraintData
struct FConstraintData
{
public:
	struct FConstraintDescriptor                 Constraint;                                        // 0x0(0x10)(None)
	float                                        Weight;                                            // 0x10(0x4)(None)
	bool                                         bMaintainOffset;                                   // 0x14(0x1)(None)
	uint8                                        Pad_278C[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Offset;                                            // 0x20(0x60)(None)
	struct FTransform                            CurrentTransform;                                  // 0x80(0x60)(None)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct AnimationCore.CCDIKChainLink
struct FCCDIKChainLink
{
public:
	uint8                                        Pad_278F[0xE0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AnimationCore.FABRIKChainLink
struct FFABRIKChainLink
{
public:
	uint8                                        Pad_2790[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AnimationCore.Axis
struct FAxis
{
public:
	struct FVector                               Axis;                                              // 0x0(0x18)(None)
	bool                                         bInLocalSpace;                                     // 0x18(0x1)(None)
	uint8                                        Pad_2791[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimationCore.NodeChain
struct FNodeChain
{
public:
	TArray<class FName>                          Nodes;                                             // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimationCore.ConstraintDescriptionEx
struct FConstraintDescriptionEx
{
public:
	uint8                                        Pad_279B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFilterOptionPerAxis                  AxesFilterOption;                                  // 0x8(0x3)(None)
	uint8                                        Pad_279C[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x18 - 0x10)
// ScriptStruct AnimationCore.TransformConstraintDescription
struct FTransformConstraintDescription : public FConstraintDescriptionEx
{
public:
	enum class ETransformConstraintType          TransformType;                                     // 0x10(0x1)(None)
	uint8                                        Pad_279E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x70 - 0x10)
// ScriptStruct AnimationCore.AimConstraintDescription
struct FAimConstraintDescription : public FConstraintDescriptionEx
{
public:
	struct FAxis                                 LookAt_Axis;                                       // 0x10(0x20)(None)
	struct FAxis                                 LookUp_Axis;                                       // 0x30(0x20)(None)
	bool                                         bUseLookUp;                                        // 0x50(0x1)(None)
	uint8                                        Pad_27A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LookUpTarget;                                      // 0x58(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AnimationCore.TransformNoScale
struct FTransformNoScale
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	uint8                                        Pad_27A7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Rotation;                                          // 0x20(0x20)(None)
};

}


