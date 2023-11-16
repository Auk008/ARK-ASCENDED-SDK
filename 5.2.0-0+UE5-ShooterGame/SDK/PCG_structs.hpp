#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPCGAttributeAccessorFlags : uint8
{
	StrictType                     = 1,
	AllowBroadcast                 = 2,
	AllowConstructible             = 4,
	AllowSetDefaultValue           = 8,
	EPCGAttributeAccessorFlags_MAX = 9,
};

enum class EPCGAttributePropertySelection : int32
{
	Attribute                      = 0,
	PointProperty                  = 1,
	EPCGAttributePropertySelection_MAX = 2,
};

enum class EPCGChangeType : uint8
{
	None                           = 0,
	Cosmetic                       = 1,
	Settings                       = 2,
	Input                          = 4,
	Edge                           = 8,
	Node                           = 16,
	Structural                     = 32,
	EPCGChangeType_MAX             = 33,
};

enum class EPCGDataType : uint32
{
	None                           = 0,
	Point                          = 2,
	Spline                         = 4,
	LandscapeSpline                = 8,
	PolyLine                       = 12,
	Landscape                      = 16,
	Texture                        = 32,
	RenderTarget                   = 64,
	BaseTexture                    = 96,
	Surface                        = 112,
	Volume                         = 128,
	Primitive                      = 256,
	Concrete                       = 510,
	Composite                      = 512,
	Spatial                        = 1022,
	Param                          = 134217728,
	Settings                       = 268435456,
	Other                          = 536870912,
	Any                            = 1073741823,
	EPCGDataType_MAX               = 1073741824,
};

enum class EPCGDistanceShape : int32
{
	SphereBounds                   = 0,
	BoxBounds                      = 1,
	Center                         = 2,
	PCGDistanceShape_MAX           = 3,
};

enum class EPCGMetadataTypes : uint8
{
	Float                          = 0,
	Double                         = 1,
	Integer32                      = 2,
	Integer64                      = 3,
	Vector2                        = 4,
	Vector                         = 5,
	Vector4                        = 6,
	Quaternion                     = 7,
	Transform                      = 8,
	String                         = 9,
	Boolean                        = 10,
	Rotator                        = 11,
	Name                           = 12,
	Count                          = 13,
	Unknown                        = 255,
	EPCGMetadataTypes_MAX          = 256,
};

enum class EPCGMetadataOp : uint8
{
	Min                            = 0,
	Max                            = 1,
	Sub                            = 2,
	Add                            = 3,
	Mul                            = 4,
	Div                            = 5,
	SourceValue                    = 6,
	TargetValue                    = 7,
};

enum class EPCGMetadataFilterMode : uint8
{
	ExcludeAttributes              = 0,
	IncludeAttributes              = 1,
	EPCGMetadataFilterMode_MAX     = 2,
};

enum class EPCGMetadataTypesConstantStructStringMode : int32
{
	String                         = 0,
	SoftObjectPath                 = 1,
	SoftClassPath                  = 2,
	EPCGMetadataTypesConstantStructStringMode_MAX = 3,
};

enum class EPCGNormalToDensityMode : uint8
{
	Set                            = 0,
	Minimum                        = 1,
	Maximum                        = 2,
	Add                            = 3,
	Subtract                       = 4,
	Multiply                       = 5,
	Divide                         = 6,
	PCGNormalToDensityMode_MAX     = 7,
};

enum class EPCGDifferenceDensityFunction : uint8
{
	Minimum                        = 0,
	ClampedSubstraction            = 1,
	Binary                         = 2,
	EPCGDifferenceDensityFunction_MAX = 3,
};

enum class EPCGDifferenceMode : uint8
{
	Inferred                       = 0,
	Continuous                     = 1,
	Discrete                       = 2,
	EPCGDifferenceMode_MAX         = 3,
};

enum class EPCGIntersectionDensityFunction : uint8
{
	Multiply                       = 0,
	Minimum                        = 1,
	EPCGIntersectionDensityFunction_MAX = 2,
};

enum class EPCGTextureColorChannel : uint8
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	EPCGTextureColorChannel_MAX    = 4,
};

enum class EPCGTextureDensityFunction : uint8
{
	Ignore                         = 0,
	Multiply                       = 1,
	EPCGTextureDensityFunction_MAX = 2,
};

enum class EPCGUnionType : uint8
{
	LeftToRightPriority            = 0,
	RightToLeftPriority            = 1,
	KeepAll                        = 2,
	EPCGUnionType_MAX              = 3,
};

enum class EPCGUnionDensityFunction : uint8
{
	Maximum                        = 0,
	ClampedAddition                = 1,
	Binary                         = 2,
	EPCGUnionDensityFunction_MAX   = 3,
};

enum class EPCGWorldQueryFilterByTag : int32
{
	NoTagFilter                    = 0,
	IncludeTagged                  = 1,
	ExcludeTagged                  = 2,
	EPCGWorldQueryFilterByTag_MAX  = 3,
};

enum class EPCGMedadataBitwiseOperation : uint16
{
	And                            = 0,
	Not                            = 1,
	Or                             = 2,
	Xor                            = 3,
	EPCGMedadataBitwiseOperation_MAX = 4,
};

enum class EPCGMedadataBooleanOperation : uint16
{
	And                            = 0,
	Not                            = 1,
	Or                             = 2,
	Xor                            = 3,
	EPCGMedadataBooleanOperation_MAX = 4,
};

enum class EPCGMedadataCompareOperation : uint16
{
	Equal                          = 0,
	NotEqual                       = 1,
	Greater                        = 2,
	GreaterOrEqual                 = 3,
	Less                           = 4,
	LessOrEqual                    = 5,
	EPCGMedadataCompareOperation_MAX = 6,
};

enum class EPCGMetadataOperationTarget : uint8
{
	PropertyToAttribute            = 0,
	AttributeToProperty            = 1,
	AttributeToAttribute           = 2,
	EPCGMetadataOperationTarget_MAX = 3,
};

enum class EPCGMetadataMakeVector3 : uint8
{
	ThreeValues                    = 0,
	Vector2AndValue                = 1,
	EPCGMetadataMakeVector3_MAX    = 2,
};

enum class EPCGMetadataMakeVector4 : uint8
{
	FourValues                     = 0,
	Vector2AndTwoValues            = 1,
	TwoVector2                     = 2,
	Vector3AndValue                = 3,
	EPCGMetadataMakeVector4_MAX    = 4,
};

enum class EPCGMedadataMathsOperation : uint16
{
	UnaryOp                        = 1024,
	Sign                           = 1025,
	Frac                           = 1026,
	Truncate                       = 1027,
	Round                          = 1028,
	Sqrt                           = 1029,
	Abs                            = 1030,
	Floor                          = 1031,
	Ceil                           = 1032,
	BinaryOp                       = 2048,
	Add                            = 2049,
	Subtract                       = 2050,
	Multiply                       = 2051,
	Divide                         = 2052,
	Max                            = 2053,
	Min                            = 2054,
	Pow                            = 2055,
	ClampMin                       = 2056,
	ClampMax                       = 2057,
	Modulo                         = 2058,
	TernaryOp                      = 4096,
	Clamp                          = 4097,
	Lerp                           = 4098,
};

enum class EPCGMetadataSettingsBaseMode : uint8
{
	Inferred                       = 0,
	NoBroadcast                    = 1,
	Broadcast                      = 2,
	EPCGMetadataSettingsBaseMode_MAX = 3,
};

enum class EPCGMetadataSettingsBaseTypes : uint8
{
	AutoUpcastTypes                = 0,
	StrictTypes                    = 1,
	EPCGMetadataSettingsBaseTypes_MAX = 2,
};

enum class EPCGMedadataRotatorOperation : uint16
{
	RotatorOp                      = 0,
	Combine                        = 1,
	Invert                         = 2,
	Lerp                           = 3,
	TransformOp                    = 100,
	TransformRotation              = 101,
	InverseTransformRotation       = 102,
	EPCGMedadataRotatorOperation_MAX = 103,
};

enum class EPCGMedadataTransformOperation : uint16
{
	Compose                        = 0,
	Invert                         = 1,
	Lerp                           = 2,
	EPCGMedadataTransformOperation_MAX = 3,
};

enum class EPCGTransformLerpMode : uint16
{
	QuatInterp                     = 0,
	EulerInterp                    = 1,
	DualQuatInterp                 = 2,
	EPCGTransformLerpMode_MAX      = 3,
};

enum class EPCGMedadataTrigOperation : uint16
{
	Acos                           = 0,
	Asin                           = 1,
	Atan                           = 2,
	Atan2                          = 3,
	Cos                            = 4,
	Sin                            = 5,
	Tan                            = 6,
	DegToRad                       = 7,
	RadToDeg                       = 8,
	EPCGMedadataTrigOperation_MAX  = 9,
};

enum class EPCGMedadataVectorOperation : uint16
{
	VectorOp                       = 0,
	Cross                          = 1,
	Dot                            = 2,
	Distance                       = 3,
	Normalize                      = 4,
	Length                         = 5,
	RotateAroundAxis               = 6,
	TransformOp                    = 100,
	TransformDirection             = 101,
	TransformLocation              = 102,
	InverseTransformDirection      = 103,
	InverseTransformLocation       = 104,
	EPCGMedadataVectorOperation_MAX = 105,
};

enum class EPCGActorSelection : uint8
{
	ByTag                          = 0,
	ByName                         = 1,
	ByClass                        = 2,
	EPCGActorSelection_MAX         = 3,
};

enum class EPCGActorFilter : uint8
{
	Self                           = 0,
	Parent                         = 1,
	Root                           = 2,
	AllWorldActors                 = 3,
	Original                       = 4,
	EPCGActorFilter_MAX            = 5,
};

enum class EPCGAttributeFilterOperation : int32
{
	KeepSelectedAttributes         = 0,
	DeleteSelectedAttributes       = 1,
	EPCGAttributeFilterOperation_MAX = 2,
};

enum class EPCGAttributeReduceOperation : int32
{
	Average                        = 0,
	Max                            = 1,
	Min                            = 2,
};

enum class EPCGAttributeSelectOperation : int32
{
	Min                            = 0,
	Max                            = 1,
	Median                         = 2,
};

enum class EPCGAttributeSelectAxis : int32
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	W                              = 3,
	CustomAxis                     = 4,
	EPCGAttributeSelectAxis_MAX    = 5,
};

enum class EPCGBoundsModifierMode : uint8
{
	Set                            = 0,
	Intersect                      = 1,
	Include                        = 2,
	Translate                      = 3,
	Scale                          = 4,
	EPCGBoundsModifierMode_MAX     = 5,
};

enum class EPCGCopyPointsInheritanceMode : uint8
{
	Relative                       = 0,
	Source                         = 1,
	Target                         = 2,
	EPCGCopyPointsInheritanceMode_MAX = 3,
};

enum class EPCGCopyPointsMetadataInheritanceMode : uint8
{
	SourceFirst                    = 0,
	TargetFirst                    = 1,
	SourceOnly                     = 2,
	TargetOnly                     = 3,
	None                           = 4,
	EPCGCopyPointsMetadataInheritanceMode_MAX = 5,
};

enum class EPCGCreateSplineMode : uint8
{
	CreateDataOnly                 = 0,
	CreateComponent                = 1,
	CreateNewActor                 = 2,
	EPCGCreateSplineMode_MAX       = 3,
};

enum class EPCGGetDataFromActorMode : uint8
{
	ParseActorComponents           = 0,
	GetSinglePoint                 = 1,
	GetDataFromProperty            = 2,
	GetDataFromPCGComponent        = 3,
	GetDataFromPCGComponentOrParseComponents = 4,
	EPCGGetDataFromActorMode_MAX   = 5,
};

enum class EPCGDensityNoiseMode : uint8
{
	Set                            = 0,
	Minimum                        = 1,
	Maximum                        = 2,
	Add                            = 3,
	Multiply                       = 4,
	EPCGDensityNoiseMode_MAX       = 5,
};

enum class EPCGFilterByTagOperation : int32
{
	KeepTagged                     = 0,
	RemoveTagged                   = 1,
	EPCGFilterByTagOperation_MAX   = 2,
};

enum class EPCGPointExtentsModifierMode : uint8
{
	Set                            = 0,
	Minimum                        = 1,
	Maximum                        = 2,
	Add                            = 3,
	Multiply                       = 4,
	EPCGPointExtentsModifierMode_MAX = 5,
};

enum class EPCGPointTargetFilterType : uint8
{
	Property                       = 0,
	Metadata                       = 1,
	EPCGPointTargetFilterType_MAX  = 2,
};

enum class EPCGPointThresholdType : uint8
{
	Property                       = 0,
	Metadata                       = 1,
	Constant                       = 2,
	EPCGPointThresholdType_MAX     = 3,
};

enum class EPCGPointFilterConstantType : uint8
{
	Integer64                      = 0,
	Float                          = 1,
	Vector                         = 2,
	Vector4                        = 3,
	String                         = 4,
	Unknown                        = 5,
	EPCGPointFilterConstantType_MAX = 6,
};

enum class EPCGPointFilterOperator : uint8
{
	Greater                        = 0,
	GreaterOrEqual                 = 1,
	Lesser                         = 2,
	LesserOrEqual                  = 3,
	Equal                          = 4,
	NotEqual                       = 5,
	EPCGPointFilterOperator_MAX    = 6,
};

enum class EPCGSelfPruningType : uint8
{
	LargeToSmall                   = 0,
	SmallToLarge                   = 1,
	AllEqual                       = 2,
	None                           = 3,
	RemoveDuplicates               = 4,
	EPCGSelfPruningType_MAX        = 5,
};

enum class EPCGSpawnActorOption : uint8
{
	CollapseActors                 = 0,
	MergePCGOnly                   = 1,
	NoMerging                      = 2,
	EPCGSpawnActorOption_MAX       = 3,
};

enum class EPCGSpawnActorGenerationTrigger : uint8
{
	Default                        = 0,
	ForceGenerate                  = 1,
	DoNotGenerateInEditor          = 2,
	DoNotGenerate                  = 3,
	EPCGSpawnActorGenerationTrigger_MAX = 4,
};

enum class EPCGSplineSamplingMode : uint8
{
	Subdivision                    = 0,
	Distance                       = 1,
	EPCGSplineSamplingMode_MAX     = 2,
};

enum class EPCGSplineSamplingDimension : uint8
{
	OnSpline                       = 0,
	OnHorizontal                   = 1,
	OnVertical                     = 2,
	OnVolume                       = 3,
	OnInterior                     = 4,
	EPCGSplineSamplingDimension_MAX = 5,
};

enum class EPCGSplineSamplingFill : uint8
{
	Fill                           = 0,
	EdgesOnly                      = 1,
	EPCGSplineSamplingFill_MAX     = 2,
};

enum class EPCGSplineSamplingInteriorOrientation : uint8
{
	Uniform                        = 0,
	FollowCurvature                = 1,
	EPCGSplineSamplingInteriorOrientation_MAX = 2,
};

enum class EPCGMeshSelectorMaterialOverrideMode : uint8
{
	NoOverride                     = 0,
	StaticOverride                 = 1,
	ByAttributeOverride            = 2,
	EPCGMeshSelectorMaterialOverrideMode_MAX = 3,
};

enum class EPCGComponentInput : uint8
{
	Actor                          = 0,
	Landscape                      = 1,
	Other                          = 2,
	EPCGComponentInput_MAX         = 3,
};

enum class EPCGComponentGenerationTrigger : uint8
{
	GenerateOnLoad                 = 0,
	GenerateOnDemand               = 1,
	EPCGComponentGenerationTrigger_MAX = 2,
};

enum class EPCGComponentDirtyFlag : uint8
{
	None                           = 0,
	Actor                          = 1,
	Landscape                      = 2,
	Input                          = 4,
	Data                           = 8,
	All                            = 15,
	EPCGComponentDirtyFlag_MAX     = 16,
};

enum class EPCGExecutionPhase : uint8
{
	NotExecuted                    = 0,
	PrepareData                    = 1,
	Execute                        = 2,
	PostExecute                    = 3,
	Done                           = 4,
	EPCGExecutionPhase_MAX         = 5,
};

enum class EPCGDebugVisScaleMethod : uint8
{
	Relative                       = 0,
	Absolute                       = 1,
	Extents                        = 2,
	EPCGDebugVisScaleMethod_MAX    = 3,
};

enum class EPCGPointProperties : uint8
{
	Density                        = 0,
	BoundsMin                      = 1,
	BoundsMax                      = 2,
	Extents                        = 3,
	Color                          = 4,
	Position                       = 5,
	Rotation                       = 6,
	Scale                          = 7,
	Transform                      = 8,
	Steepness                      = 9,
	LocalCenter                    = 10,
	EPCGPointProperties_MAX        = 11,
};

enum class EPCGSettingsExecutionMode : uint8
{
	Enabled                        = 0,
	Debug                          = 1,
	Isolated                       = 2,
	Disabled                       = 3,
	EPCGSettingsExecutionMode_MAX  = 4,
};

enum class EPCGSettingsType : uint8
{
	InputOutput                    = 0,
	Spatial                        = 1,
	Density                        = 2,
	Blueprint                      = 3,
	Metadata                       = 4,
	Filter                         = 5,
	Sampler                        = 6,
	Spawner                        = 7,
	Subgraph                       = 8,
	Debug                          = 9,
	Generic                        = 10,
	Param                          = 11,
	EPCGSettingsType_MAX           = 12,
};

enum class EDeterminismLevel : uint8
{
	None                           = 0,
	NoDeterminism                  = 0,
	Basic                          = 1,
	OrderOrthogonal                = 2,
	OrderConsistent                = 3,
	OrderIndependent               = 4,
	Deterministic                  = 4,
	EDeterminismLevel_MAX          = 5,
};

enum class EPCGUnitTestDummyEnum : int64
{
	One                            = 0,
	Two                            = 1,
	Three                          = 2,
	EPCGUnitTestDummyEnum_MAX      = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct PCG.PCGAttributeExtractorTestStructDepth2
struct FPCGAttributeExtractorTestStructDepth2
{
public:
	int32                                        IntValue;                                          // 0x0(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct PCG.PCGAttributeExtractorTestStructDepth1
struct FPCGAttributeExtractorTestStructDepth1
{
public:
	struct FPCGAttributeExtractorTestStructDepth2 Depth2Struct;                                      // 0x0(0x4)(None)
	float                                        FloatValue;                                        // 0x4(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct PCG.PCGAttributeExtractorTestStruct
struct FPCGAttributeExtractorTestStruct
{
public:
	struct FPCGAttributeExtractorTestStructDepth1 DepthStruct;                                       // 0x0(0x8)(None)
	class UPCGAttributeExtractorTestObject*      Object;                                            // 0x8(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct PCG.PCGAttributePropertySelector
struct FPCGAttributePropertySelector
{
public:
	enum class EPCGAttributePropertySelection    Selection;                                         // 0x0(0x4)(None)
	class FName                                  AttributeName;                                     // 0x4(0x8)(None)
	enum class EPCGPointProperties               PointProperty;                                     // 0xC(0x1)(None)
	uint8                                        Pad_1E8E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        ExtraNames;                                        // 0x10(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct PCG.PCGCrc
struct FPCGCrc
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(None)
	bool                                         bValid;                                            // 0x4(0x1)(None)
	uint8                                        Pad_1E8F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct PCG.PCGDataTableRowToParamDataTestStruct
struct FPCGDataTableRowToParamDataTestStruct
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	class FString                                String;                                            // 0x8(0x10)(AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        I32;                                               // 0x18(0x4)(None)
	uint8                                        Pad_1EA0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        I64;                                               // 0x20(0x8)(None)
	float                                        F32;                                               // 0x28(0x4)(None)
	uint8                                        Pad_1EA1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       F64;                                               // 0x30(0x8)(None)
	struct FVector2D                             V2;                                                // 0x38(0x10)(None)
	struct FVector                               V3;                                                // 0x48(0x18)(None)
	struct FVector4                              V4;                                                // 0x60(0x20)(None)
	struct FSoftObjectPath                       SoftPath;                                          // 0x80(0x20)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct PCG.PCGDeterminismSettings
struct FPCGDeterminismSettings
{
public:
	bool                                         bNativeTests;                                      // 0x0(0x1)(None)
	bool                                         bUseBlueprintDeterminismTest;                      // 0x1(0x1)(None)
	uint8                                        Pad_1EA3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DeterminismTestBlueprint;                          // 0x8(0x8)(None)
};

// 0x170 (0x170 - 0x0)
// ScriptStruct PCG.PCGMetadataTypesConstantStruct
struct FPCGMetadataTypesConstantStruct
{
public:
	enum class EPCGMetadataTypes                 Type;                                              // 0x0(0x1)(None)
	uint8                                        Pad_1EB2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EPCGMetadataTypesConstantStructStringMode StringMode;                                        // 0x4(0x4)(None)
	float                                        FloatValue;                                        // 0x8(0x4)(None)
	int32                                        Int32Value;                                        // 0xC(0x4)(None)
	double                                       DoubleValue;                                       // 0x10(0x8)(None)
	int64                                        IntValue;                                          // 0x18(0x8)(None)
	struct FVector2D                             Vector2Value;                                      // 0x20(0x10)(None)
	struct FVector                               VectorValue;                                       // 0x30(0x18)(None)
	uint8                                        Pad_1EB5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              Vector4Value;                                      // 0x50(0x20)(None)
	struct FQuat                                 QuatValue;                                         // 0x70(0x20)(None)
	struct FTransform                            TransformValue;                                    // 0x90(0x60)(None)
	class FString                                StringValue;                                       // 0xF0(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         BoolValue;                                         // 0x100(0x1)(None)
	uint8                                        Pad_1EB7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RotatorValue;                                      // 0x108(0x18)(None)
	class FName                                  NameValue;                                         // 0x120(0x8)(None)
	struct FSoftClassPath                        SoftClassPathValue;                                // 0x128(0x20)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                       SoftObjectPathValue;                               // 0x148(0x20)(None)
	bool                                         bAllowsTypeChange;                                 // 0x168(0x1)(None)
	uint8                                        Pad_1EB8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct PCG.PCGProjectionParams
struct FPCGProjectionParams
{
public:
	bool                                         bProjectPositions;                                 // 0x0(0x1)(None)
	bool                                         bProjectRotations;                                 // 0x1(0x1)(None)
	bool                                         bProjectScales;                                    // 0x2(0x1)(None)
	bool                                         bProjectColors;                                    // 0x3(0x1)(None)
	uint8                                        Pad_1EBA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AttributeList;                                     // 0x8(0x10)(None)
	enum class EPCGMetadataFilterMode            AttributeMode;                                     // 0x18(0x1)(None)
	enum class EPCGMetadataOp                    AttributeMergeOperation;                           // 0x19(0x1)(None)
	uint8                                        Pad_1EBB[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct PCG.PCGContext
struct FPCGContext
{
public:
	uint8                                        Pad_1EBC[0x98];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1A8 (0x240 - 0x98)
// ScriptStruct PCG.PCGStaticMeshSpawnerContext
struct FPCGStaticMeshSpawnerContext : public FPCGContext
{
public:
	uint8                                        Pad_1EBD[0x1A8];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// ScriptStruct PCG.PCGSplineStruct
struct FPCGSplineStruct
{
public:
	struct FSplineCurves                         SplineCurves;                                      // 0x0(0x70)(None)
	struct FTransform                            Transform;                                         // 0x70(0x60)(None)
	struct FVector                               DefaultUpVector;                                   // 0xD0(0x18)(None)
	int32                                        ReparamStepsPerSegment;                            // 0xE8(0x4)(None)
	bool                                         bClosedLoop;                                       // 0xEC(0x1)(None)
	uint8                                        Pad_1ED9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoxSphereBounds                      LocalBounds;                                       // 0xF0(0x38)(None)
	struct FBoxSphereBounds                      Bounds;                                            // 0x128(0x38)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct PCG.PCGWorldCommonQueryParams
struct FPCGWorldCommonQueryParams
{
public:
	bool                                         bIgnorePCGHits;                                    // 0x0(0x1)(None)
	bool                                         bIgnoreSelfHits;                                   // 0x1(0x1)(None)
	enum class ECollisionChannel                 CollisionChannel;                                  // 0x2(0x1)(None)
	bool                                         bTraceComplex;                                     // 0x3(0x1)(None)
	enum class EPCGWorldQueryFilterByTag         ActorTagFilter;                                    // 0x4(0x4)(None)
	class FString                                ActorTagsList;                                     // 0x8(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bIgnoreLandscapeHits;                              // 0x18(0x1)(None)
	uint8                                        Pad_1EDD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FName>                            ParsedActorTagsList;                               // 0x20(0x50)(None)
};

// 0x8 (0x78 - 0x70)
// ScriptStruct PCG.PCGWorldVolumetricQueryParams
struct FPCGWorldVolumetricQueryParams : public FPCGWorldCommonQueryParams
{
public:
	bool                                         bSearchForOverlap;                                 // 0x70(0x1)(None)
	uint8                                        Pad_1EDE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0xB8 - 0x70)
// ScriptStruct PCG.PCGWorldRayHitQueryParams
struct FPCGWorldRayHitQueryParams : public FPCGWorldCommonQueryParams
{
public:
	bool                                         bOverrideDefaultParams;                            // 0x70(0x1)(None)
	uint8                                        Pad_1EDF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RayOrigin;                                         // 0x78(0x18)(None)
	struct FVector                               RayDirection;                                      // 0x90(0x18)(None)
	double                                       RayLength;                                         // 0xA8(0x8)(None)
	bool                                         bApplyMetadataFromLandscape;                       // 0xB0(0x1)(None)
	uint8                                        Pad_1EE1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct PCG.PCGActorSelectorSettings
struct FPCGActorSelectorSettings
{
public:
	enum class EPCGActorFilter                   ActorFilter;                                       // 0x0(0x1)(None)
	bool                                         bMustOverlapSelf;                                  // 0x1(0x1)(None)
	bool                                         bIncludeChildren;                                  // 0x2(0x1)(None)
	bool                                         bDisableFilter;                                    // 0x3(0x1)(None)
	enum class EPCGActorSelection                ActorSelection;                                    // 0x4(0x1)(None)
	uint8                                        Pad_1EE2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ActorSelectionTag;                                 // 0x8(0x8)(None)
	class UClass*                                ActorSelectionClass;                               // 0x10(0x8)(None)
	bool                                         bSelectMultiple;                                   // 0x18(0x1)(None)
	uint8                                        Pad_1EE3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct PCG.PCGActorPropertyOverride
struct FPCGActorPropertyOverride
{
public:
	struct FPCGAttributePropertySelector         InputSource;                                       // 0x0(0x20)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                PropertyTarget;                                    // 0x20(0x10)(None)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct PCG.PCGSplineSamplerParams
struct FPCGSplineSamplerParams
{
public:
	enum class EPCGSplineSamplingMode            Mode;                                              // 0x0(0x1)(None)
	enum class EPCGSplineSamplingDimension       Dimension;                                         // 0x1(0x1)(None)
	enum class EPCGSplineSamplingFill            Fill;                                              // 0x2(0x1)(None)
	uint8                                        Pad_1EE7[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SubdivisionsPerSegment;                            // 0x4(0x4)(None)
	float                                        DistanceIncrement;                                 // 0x8(0x4)(None)
	int32                                        NumPlanarSubdivisions;                             // 0xC(0x4)(None)
	int32                                        NumHeightSubdivisions;                             // 0x10(0x4)(None)
	bool                                         bComputeDirectionDelta;                            // 0x14(0x1)(None)
	uint8                                        Pad_1EE8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NextDirectionDeltaAttribute;                       // 0x18(0x8)(None)
	bool                                         bComputeCurvature;                                 // 0x20(0x1)(None)
	uint8                                        Pad_1EE9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CurvatureAttribute;                                // 0x24(0x8)(None)
	float                                        InteriorSampleSpacing;                             // 0x2C(0x4)(None)
	float                                        InteriorBorderSampleSpacing;                       // 0x30(0x4)(None)
	bool                                         bTreatSplineAsPolyline;                            // 0x34(0x1)(None)
	enum class EPCGSplineSamplingInteriorOrientation InteriorOrientation;                               // 0x35(0x1)(None)
	bool                                         bProjectOntoSurface;                               // 0x36(0x1)(None)
	uint8                                        Pad_1EEA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    InteriorDensityFalloffCurve;                       // 0x38(0x88)(None)
	bool                                         bSeedFromLocalPosition;                            // 0xC0(0x1)(None)
	bool                                         bSeedFrom2DPosition;                               // 0xC1(0x1)(None)
	uint8                                        Pad_1EEB[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct PCG.PCGStaticMeshSpawnerEntry
struct FPCGStaticMeshSpawnerEntry
{
public:
	int32                                        Weight;                                            // 0x0(0x4)(None)
	uint8                                        Pad_1EEC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UStaticMesh>            Mesh;                                              // 0x8(0x30)(None)
	bool                                         bOverrideCollisionProfile;                         // 0x38(0x1)(None)
	uint8                                        Pad_1EED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCollisionProfileName                 CollisionProfile;                                  // 0x3C(0x8)(None)
	uint8                                        Pad_1EEE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct PCG.PCGLandscapeLayerWeight
struct FPCGLandscapeLayerWeight
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	float                                        Weight;                                            // 0x8(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct PCG.PCGPackedCustomData
struct FPCGPackedCustomData
{
public:
	int32                                        NumCustomDataFloats;                               // 0x0(0x4)(None)
	uint8                                        Pad_1EF0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CustomData;                                        // 0x8(0x10)(None)
};

// 0x2E0 (0x2E0 - 0x0)
// ScriptStruct PCG.PCGMatchAndSetByAttributeEntry
struct FPCGMatchAndSetByAttributeEntry
{
public:
	struct FPCGMetadataTypesConstantStruct       ValueToMatch;                                      // 0x0(0x170)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FPCGMetadataTypesConstantStruct       Value;                                             // 0x170(0x170)(None)
};

// 0x180 (0x180 - 0x0)
// ScriptStruct PCG.PCGMatchAndSetWeightedEntry
struct FPCGMatchAndSetWeightedEntry
{
public:
	struct FPCGMetadataTypesConstantStruct       Value;                                             // 0x0(0x170)(None)
	int32                                        Weight;                                            // 0x170(0x4)(None)
	uint8                                        Pad_1EF2[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x190 (0x190 - 0x0)
// ScriptStruct PCG.PCGMatchAndSetWeightedByCategoryEntryList
struct FPCGMatchAndSetWeightedByCategoryEntryList
{
public:
	struct FPCGMetadataTypesConstantStruct       CategoryValue;                                     // 0x0(0x170)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bIsDefault;                                        // 0x170(0x1)(None)
	uint8                                        Pad_1EF3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPCGMatchAndSetWeightedEntry>  WeightedEntries;                                   // 0x178(0x10)(None)
	uint8                                        Pad_1EF4[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1F0 (0x1F0 - 0x0)
// ScriptStruct PCG.PCGMeshInstanceList
struct FPCGMeshInstanceList
{
public:
	struct FSoftISMComponentDescriptor           Descriptor;                                        // 0x0(0x1D0)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTransform>                    Instances;                                         // 0x1D0(0x10)(AutoWeak, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int64>                                InstancesMetadataEntry;                            // 0x1E0(0x10)(None)
};

// 0x1D8 (0x1D8 - 0x0)
// ScriptStruct PCG.PCGMeshSelectorWeightedEntry
struct FPCGMeshSelectorWeightedEntry
{
public:
	struct FSoftISMComponentDescriptor           Descriptor;                                        // 0x0(0x1D0)(None)
	int32                                        Weight;                                            // 0x1D0(0x4)(None)
	uint8                                        Pad_1EF7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct PCG.PCGWeightedByCategoryEntryList
struct FPCGWeightedByCategoryEntryList
{
public:
	class FString                                CategoryEntry;                                     // 0x0(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         IsDefault;                                         // 0x10(0x1)(None)
	uint8                                        Pad_1EF8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPCGMeshSelectorWeightedEntry> WeightedMeshEntries;                               // 0x18(0x10)(None)
};

// 0x18 (0x80 - 0x68)
// ScriptStruct PCG.PCGComponentInstanceData
struct FPCGComponentInstanceData : public FActorComponentInstanceData
{
public:
	TArray<class UPCGManagedResource*>           GeneratedResources;                                // 0x68(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class UPCGComponent*                         SourceComponent;                                   // 0x78(0x8)(ZeroConstructor)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct PCG.PCGTaggedData
struct FPCGTaggedData
{
public:
	class UPCGData*                              Data;                                              // 0x0(0x8)(None)
	TSet<class FString>                          Tags;                                              // 0x8(0x50)(None)
	class FName                                  Pin;                                               // 0x58(0x8)(None)
	bool                                         bPinlessData;                                      // 0x60(0x1)(None)
	uint8                                        Pad_1EF9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct PCG.PCGDataCollection
struct FPCGDataCollection
{
public:
	TArray<struct FPCGTaggedData>                TaggedData;                                        // 0x0(0x10)(None)
	bool                                         bCancelExecutionOnEmpty;                           // 0x10(0x1)(None)
	uint8                                        Pad_1EFA[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct PCG.PCGDebugVisualizationSettings
struct FPCGDebugVisualizationSettings
{
public:
	float                                        PointScale;                                        // 0x0(0x4)(None)
	enum class EPCGDebugVisScaleMethod           ScaleMethod;                                       // 0x4(0x1)(None)
	uint8                                        Pad_1EFB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UStaticMesh>            PointMesh;                                         // 0x8(0x30)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UMaterialInterface>     MaterialOverride;                                  // 0x38(0x30)(None)
	bool                                         bCheckForDuplicates;                               // 0x68(0x1)(None)
	uint8                                        Pad_1EFC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct PCG.PCGOverrideInstancedPropertyBag
struct FPCGOverrideInstancedPropertyBag
{
public:
	struct FInstancedPropertyBag                 Parameters;                                        // 0x0(0x10)(BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TSet<struct FGuid>                           PropertiesIDsOverridden;                           // 0x10(0x50)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct PCG.PCGPinProperties
struct FPCGPinProperties
{
public:
	class FName                                  Label;                                             // 0x0(0x8)(None)
	enum class EPCGDataType                      AllowedTypes;                                      // 0x8(0x4)(None)
	bool                                         bAllowMultipleData;                                // 0xC(0x1)(None)
	bool                                         bAllowMultipleConnections;                         // 0xD(0x1)(None)
	bool                                         bAdvancedPin;                                      // 0xE(0x1)(None)
	uint8                                        Pad_1EFF[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct PCG.PCGPoint
struct FPCGPoint
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(None)
	float                                        Density;                                           // 0x60(0x4)(None)
	uint8                                        Pad_1F00[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BoundsMin;                                         // 0x68(0x18)(None)
	struct FVector                               BoundsMax;                                         // 0x80(0x18)(None)
	uint8                                        Pad_1F01[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              Color;                                             // 0xA0(0x20)(None)
	float                                        Steepness;                                         // 0xC0(0x4)(None)
	int32                                        Seed;                                              // 0xC4(0x4)(None)
	int64                                        MetadataEntry;                                     // 0xC8(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct PCG.PCGSettingsOverridableParam
struct FPCGSettingsOverridableParam
{
public:
	class FName                                  Label;                                             // 0x0(0x8)(None)
	TArray<class FName>                          PropertiesNames;                                   // 0x8(0x10)(None)
	class UStruct*                               PropertyClass;                                     // 0x18(0x8)(None)
	uint8                                        Pad_1F02[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct PCG.DeterminismTestResult
struct FDeterminismTestResult
{
public:
	class FName                                  TestResultTitle;                                   // 0x0(0x8)(None)
	class FString                                TestResultName;                                    // 0x8(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        Seed;                                              // 0x18(0x4)(None)
	enum class EPCGDataType                      DataTypesTested;                                   // 0x1C(0x4)(None)
	TMap<class FName, enum class EDeterminismLevel> TestResults;                                       // 0x20(0x50)(SimpleDisplay, AdvancedDisplay, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        AdditionalDetails;                                 // 0x70(0x10)(None)
	bool                                         bFlagRaised;                                       // 0x80(0x1)(None)
	uint8                                        Pad_1F04[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


