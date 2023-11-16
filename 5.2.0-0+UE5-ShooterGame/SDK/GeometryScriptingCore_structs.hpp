#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGeometryScriptOutcomePins : uint8
{
	Failure                        = 0,
	Success                        = 1,
	EGeometryScriptOutcomePins_MAX = 2,
};

enum class EGeometryScriptSearchOutcomePins : uint8
{
	Found                          = 0,
	NotFound                       = 1,
	EGeometryScriptSearchOutcomePins_MAX = 2,
};

enum class EGeometryScriptContainmentOutcomePins : uint8
{
	Inside                         = 0,
	Outside                        = 1,
	EGeometryScriptContainmentOutcomePins_MAX = 2,
};

enum class EGeometryScriptLODType : uint8
{
	MaxAvailable                   = 0,
	HiResSourceModel               = 1,
	SourceModel                    = 2,
	RenderData                     = 3,
	EGeometryScriptLODType_MAX     = 4,
};

enum class EGeometryScriptAxis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	EGeometryScriptAxis_MAX        = 3,
};

enum class EGeometryScriptIndexType : uint8
{
	Any                            = 0,
	Triangle                       = 1,
	Vertex                         = 2,
	MaterialID                     = 3,
	PolygroupID                    = 4,
	EGeometryScriptIndexType_MAX   = 5,
};

enum class EGeometryScriptDebugMessageType : uint8
{
	ErrorMessage                   = 0,
	WarningMessage                 = 1,
	EGeometryScriptDebugMessageType_MAX = 2,
};

enum class EGeometryScriptErrorType : uint8
{
	NoError                        = 0,
	UnknownError                   = 1,
	InvalidInputs                  = 2,
	OperationFailed                = 3,
	EGeometryScriptErrorType_MAX   = 4,
};

enum class EGeometryScriptCollisionGenerationMethod : uint8
{
	AlignedBoxes                   = 0,
	OrientedBoxes                  = 1,
	MinimalSpheres                 = 2,
	Capsules                       = 3,
	ConvexHulls                    = 4,
	SweptHulls                     = 5,
	MinVolumeShapes                = 6,
	EGeometryScriptCollisionGenerationMethod_MAX = 7,
};

enum class EGeometryScriptSweptHullAxis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	SmallestBoxDimension           = 3,
	SmallestVolume                 = 4,
	EGeometryScriptSweptHullAxis_MAX = 5,
};

enum class EGeometryScriptMeshSelectionType : uint8
{
	Vertices                       = 0,
	Triangles                      = 1,
	Polygroups                     = 2,
	EGeometryScriptMeshSelectionType_MAX = 3,
};

enum class EGeometryScriptMeshSelectionConversionType : uint8
{
	NoConversion                   = 0,
	ToVertices                     = 1,
	ToTriangles                    = 2,
	ToPolygroups                   = 3,
	EGeometryScriptMeshSelectionConversionType_MAX = 4,
};

enum class EGeometryScriptCombineSelectionMode : uint8
{
	Add                            = 0,
	Subtract                       = 1,
	Intersection                   = 2,
	EGeometryScriptCombineSelectionMode_MAX = 3,
};

enum class EGeometryScriptEmptySelectionBehavior : uint8
{
	FullMeshSelection              = 0,
	EmptySelection                 = 1,
	EGeometryScriptEmptySelectionBehavior_MAX = 2,
};

enum class EGeometryScriptBakeResolution : uint8
{
	Resolution16                   = 0,
	Resolution32                   = 1,
	Resolution64                   = 2,
	Resolution128                  = 3,
	Resolution256                  = 4,
	Resolution512                  = 5,
	Resolution1024                 = 6,
	Resolution2048                 = 7,
	Resolution4096                 = 8,
	Resolution8192                 = 9,
	EGeometryScriptBakeResolution_MAX = 10,
};

enum class EGeometryScriptBakeBitDepth : uint8
{
	ChannelBits8                   = 0,
	ChannelBits16                  = 1,
	EGeometryScriptBakeBitDepth_MAX = 2,
};

enum class EGeometryScriptBakeSamplesPerPixel : uint8
{
	Sample1                        = 0,
	Sample4                        = 1,
	Sample16                       = 2,
	Sample64                       = 3,
	Samples256                     = 4,
	EGeometryScriptBakeSamplesPerPixel_MAX = 5,
};

enum class EGeometryScriptBakeTypes : uint8
{
	TangentSpaceNormal             = 0,
	ObjectSpaceNormal              = 1,
	FaceNormal                     = 2,
	BentNormal                     = 3,
	Position                       = 4,
	Curvature                      = 5,
	AmbientOcclusion               = 6,
	Texture                        = 7,
	MultiTexture                   = 8,
	VertexColor                    = 9,
	MaterialID                     = 10,
	EGeometryScriptBakeTypes_MAX   = 11,
};

enum class EGeometryScriptBakeOutputMode : uint8
{
	RGBA                           = 0,
	PerChannel                     = 1,
	EGeometryScriptBakeOutputMode_MAX = 2,
};

enum class EGeometryScriptBakeNormalSpace : uint8
{
	Tangent                        = 0,
	Object                         = 1,
	EGeometryScriptBakeNormalSpace_MAX = 2,
};

enum class EGeometryScriptBakeCurvatureTypeMode : uint8
{
	Mean                           = 0,
	Max                            = 1,
	Min                            = 2,
	Gaussian                       = 3,
};

enum class EGeometryScriptBakeCurvatureColorMode : uint8
{
	Grayscale                      = 0,
	RedBlue                        = 1,
	RedGreenBlue                   = 2,
	EGeometryScriptBakeCurvatureColorMode_MAX = 3,
};

enum class EGeometryScriptBakeCurvatureClampMode : uint8
{
	None                           = 0,
	OnlyPositive                   = 1,
	OnlyNegative                   = 2,
	EGeometryScriptBakeCurvatureClampMode_MAX = 3,
};

enum class EGeometryScriptCombineAttributesMode : uint8
{
	EnableAllMatching              = 0,
	UseTarget                      = 1,
	UseSource                      = 2,
	EGeometryScriptCombineAttributesMode_MAX = 3,
};

enum class EGeometryScriptSmoothBoneWeightsType : uint8
{
	DirectDistance                 = 0,
	GeodesicVoxel                  = 1,
	EGeometryScriptSmoothBoneWeightsType_MAX = 2,
};

enum class EGeometryScriptBooleanOperation : uint8
{
	Union                          = 0,
	Intersection                   = 1,
	Subtract                       = 2,
	EGeometryScriptBooleanOperation_MAX = 3,
};

enum class EGeometryScriptFlareType : uint8
{
	SinMode                        = 0,
	SinSquaredMode                 = 1,
	TriangleMode                   = 2,
	EGeometryScriptFlareType_MAX   = 3,
};

enum class EGeometryScriptMathWarpType : uint8
{
	SinWave1D                      = 0,
	SinWave2D                      = 1,
	SinWave3D                      = 2,
	EGeometryScriptMathWarpType_MAX = 3,
};

enum class EGeometryScriptMeshEditPolygroupMode : uint8
{
	PreserveExisting               = 0,
	AutoGenerateNew                = 1,
	SetConstant                    = 2,
	EGeometryScriptMeshEditPolygroupMode_MAX = 3,
};

enum class EGeometryScriptPolyOperationArea : uint8
{
	EntireSelection                = 0,
	PerPolygroup                   = 1,
	PerTriangle                    = 2,
	EGeometryScriptPolyOperationArea_MAX = 3,
};

enum class EGeometryScriptLinearExtrudeDirection : uint8
{
	FixedDirection                 = 0,
	AverageFaceNormal              = 1,
	EGeometryScriptLinearExtrudeDirection_MAX = 2,
};

enum class EGeometryScriptOffsetFacesType : uint8
{
	VertexNormal                   = 0,
	FaceNormal                     = 1,
	ParallelFaceOffset             = 2,
	EGeometryScriptOffsetFacesType_MAX = 3,
};

enum class EGeometryScriptMeshBevelSelectionMode : uint8
{
	TriangleArea                   = 0,
	AllPolygroupEdges              = 1,
	SharedPolygroupEdges           = 2,
	EGeometryScriptMeshBevelSelectionMode_MAX = 3,
};

enum class EGeometryScriptTangentTypes : uint8
{
	FastMikkT                      = 0,
	PerTriangle                    = 1,
	EGeometryScriptTangentTypes_MAX = 2,
};

enum class EGeometryScriptPrimitivePolygroupMode : uint8
{
	SingleGroup                    = 0,
	PerFace                        = 1,
	PerQuad                        = 2,
	EGeometryScriptPrimitivePolygroupMode_MAX = 3,
};

enum class EGeometryScriptPrimitiveOriginMode : uint8
{
	Center                         = 0,
	Base                           = 1,
	EGeometryScriptPrimitiveOriginMode_MAX = 2,
};

enum class EGeometryScriptPrimitiveUVMode : uint8
{
	Uniform                        = 0,
	ScaleToFill                    = 1,
	EGeometryScriptPrimitiveUVMode_MAX = 2,
};

enum class EGeometryScriptUniformRemeshTargetType : uint8
{
	TriangleCount                  = 0,
	TargetEdgeLength               = 1,
	EGeometryScriptUniformRemeshTargetType_MAX = 2,
};

enum class EGeometryScriptRemeshEdgeConstraintType : uint8
{
	Fixed                          = 0,
	Refine                         = 1,
	Free                           = 2,
	Ignore                         = 3,
	EGeometryScriptRemeshEdgeConstraintType_MAX = 4,
};

enum class EGeometryScriptRemeshSmoothingType : uint8
{
	Uniform                        = 0,
	UVPreserving                   = 1,
	Mixed                          = 2,
	EGeometryScriptRemeshSmoothingType_MAX = 3,
};

enum class EGeometryScriptFillHolesMethod : uint8
{
	Automatic                      = 0,
	MinimalFill                    = 1,
	PolygonTriangulation           = 2,
	TriangleFan                    = 3,
	PlanarProjection               = 4,
	EGeometryScriptFillHolesMethod_MAX = 5,
};

enum class EGeometryScriptRemoveHiddenTrianglesMethod : uint8
{
	FastWindingNumber              = 0,
	RaycastOcclusionTest           = 1,
	EGeometryScriptRemoveHiddenTrianglesMethod_MAX = 2,
};

enum class EGeometryScriptRepairMeshMode : uint8
{
	DeleteOnly                     = 0,
	RepairOrDelete                 = 1,
	RepairOrSkip                   = 2,
	EGeometryScriptRepairMeshMode_MAX = 3,
};

enum class EGeometryScriptSamplingWeightMode : uint8
{
	WeightToRadius                 = 0,
	FilledWeightToRadius           = 1,
	WeightedRandom                 = 2,
	EGeometryScriptSamplingWeightMode_MAX = 3,
};

enum class EGeometryScriptSamplingDistributionMode : uint8
{
	Uniform                        = 0,
	Smaller                        = 1,
	Larger                         = 2,
	EGeometryScriptSamplingDistributionMode_MAX = 3,
};

enum class EGeometryScriptTopologyConnectionType : uint8
{
	Geometric                      = 0,
	Polygroup                      = 1,
	MaterialID                     = 2,
	EGeometryScriptTopologyConnectionType_MAX = 3,
};

enum class EGeometryScriptRemoveMeshSimplificationType : uint8
{
	StandardQEM                    = 0,
	VolumePreserving               = 1,
	AttributeAware                 = 2,
	EGeometryScriptRemoveMeshSimplificationType_MAX = 3,
};

enum class ESelectiveTessellatePatternType : uint8
{
	ConcentricRings                = 0,
	ESelectiveTessellatePatternType_MAX = 1,
};

enum class EGeometryScriptUVFlattenMethod : uint8
{
	ExpMap                         = 0,
	Conformal                      = 1,
	SpectralConformal              = 2,
	EGeometryScriptUVFlattenMethod_MAX = 3,
};

enum class EGeometryScriptUVIslandSource : uint8
{
	PolyGroups                     = 0,
	UVIslands                      = 1,
	EGeometryScriptUVIslandSource_MAX = 2,
};

enum class EGeometryScriptGridSizingMethod : uint8
{
	GridCellSize                   = 0,
	GridResolution                 = 1,
	EGeometryScriptGridSizingMethod_MAX = 2,
};

enum class EGeometryScriptMorphologicalOpType : uint8
{
	Dilate                         = 0,
	Contract                       = 1,
	Close                          = 2,
	Open                           = 3,
	EGeometryScriptMorphologicalOpType_MAX = 4,
};

enum class EGeometryScriptSampleSpacing : uint8
{
	UniformDistance                = 0,
	UniformTime                    = 1,
	ErrorTolerance                 = 2,
	EGeometryScriptSampleSpacing_MAX = 3,
};

enum class EGeometryScriptPixelSamplingMethod : uint8
{
	Bilinear                       = 0,
	Nearest                        = 1,
	EGeometryScriptPixelSamplingMethod_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshReadLOD
struct FGeometryScriptMeshReadLOD
{
public:
	enum class EGeometryScriptLODType            LODType;                                           // 0x0(0x1)(None)
	uint8                                        Pad_FB3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LODIndex;                                          // 0x4(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshWriteLOD
struct FGeometryScriptMeshWriteLOD
{
public:
	bool                                         bWriteHiResSource;                                 // 0x0(0x1)(None)
	uint8                                        Pad_FB4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LODIndex;                                          // 0x4(0x4)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptTriangle
struct FGeometryScriptTriangle
{
public:
	struct FVector                               Vector0;                                           // 0x0(0x18)(None)
	struct FVector                               Vector1;                                           // 0x18(0x18)(None)
	struct FVector                               Vector2;                                           // 0x30(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptTrianglePoint
struct FGeometryScriptTrianglePoint
{
public:
	bool                                         bValid;                                            // 0x0(0x1)(None)
	uint8                                        Pad_FB5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TriangleID;                                        // 0x4(0x4)(None)
	struct FVector                               Position;                                          // 0x8(0x18)(None)
	struct FVector                               BaryCoords;                                        // 0x20(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptUVTriangle
struct FGeometryScriptUVTriangle
{
public:
	struct FVector2D                             UV0;                                               // 0x0(0x10)(None)
	struct FVector2D                             UV1;                                               // 0x10(0x10)(None)
	struct FVector2D                             UV2;                                               // 0x20(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptColorFlags
struct FGeometryScriptColorFlags
{
public:
	bool                                         bRed;                                              // 0x0(0x1)(None)
	bool                                         bGreen;                                            // 0x1(0x1)(None)
	bool                                         bBlue;                                             // 0x2(0x1)(None)
	bool                                         bAlpha;                                            // 0x3(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptGroupLayer
struct FGeometryScriptGroupLayer
{
public:
	bool                                         bDefaultLayer;                                     // 0x0(0x1)(None)
	uint8                                        Pad_FB6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ExtendedLayerIndex;                                // 0x4(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptIndexList
struct FGeometryScriptIndexList
{
public:
	enum class EGeometryScriptIndexType          IndexType;                                         // 0x0(0x1)(None)
	uint8                                        Pad_FB7[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptTriangleList
struct FGeometryScriptTriangleList
{
public:
	uint8                                        Pad_FB8[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptScalarList
struct FGeometryScriptScalarList
{
public:
	uint8                                        Pad_FB9[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptVectorList
struct FGeometryScriptVectorList
{
public:
	uint8                                        Pad_FBA[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptUVList
struct FGeometryScriptUVList
{
public:
	uint8                                        Pad_FBB[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptColorList
struct FGeometryScriptColorList
{
public:
	uint8                                        Pad_FBC[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPolyPath
struct FGeometryScriptPolyPath
{
public:
	uint8                                        Pad_FBD[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bClosedLoop;                                       // 0x10(0x1)(None)
	uint8                                        Pad_FBE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptDynamicMeshBVH
struct FGeometryScriptDynamicMeshBVH
{
public:
	uint8                                        Pad_FBF[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptDebugMessage
struct FGeometryScriptDebugMessage
{
public:
	enum class EGeometryScriptDebugMessageType   MessageType;                                       // 0x0(0x1)(None)
	enum class EGeometryScriptErrorType          ErrorType;                                         // 0x1(0x1)(None)
	uint8                                        Pad_FC0[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Message;                                           // 0x8(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptCollisionFromMeshOptions
struct FGeometryScriptCollisionFromMeshOptions
{
public:
	bool                                         bEmitTransaction;                                  // 0x0(0x1)(None)
	enum class EGeometryScriptCollisionGenerationMethod Method;                                            // 0x1(0x1)(None)
	bool                                         bAutoDetectSpheres;                                // 0x2(0x1)(None)
	bool                                         bAutoDetectBoxes;                                  // 0x3(0x1)(None)
	bool                                         bAutoDetectCapsules;                               // 0x4(0x1)(None)
	uint8                                        Pad_FC1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinThickness;                                      // 0x8(0x4)(None)
	bool                                         bSimplifyHulls;                                    // 0xC(0x1)(None)
	uint8                                        Pad_FC2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ConvexHullTargetFaceCount;                         // 0x10(0x4)(None)
	int32                                        MaxConvexHullsPerMesh;                             // 0x14(0x4)(None)
	float                                        ConvexDecompositionSearchFactor;                   // 0x18(0x4)(None)
	float                                        ConvexDecompositionErrorTolerance;                 // 0x1C(0x4)(None)
	float                                        ConvexDecompositionMinPartThickness;               // 0x20(0x4)(None)
	float                                        SweptHullSimplifyTolerance;                        // 0x24(0x4)(None)
	enum class EGeometryScriptSweptHullAxis      SweptHullAxis;                                     // 0x28(0x1)(None)
	bool                                         bRemoveFullyContainedShapes;                       // 0x29(0x1)(None)
	uint8                                        Pad_FC3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxShapeCount;                                     // 0x2C(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSetSimpleCollisionOptions
struct FGeometryScriptSetSimpleCollisionOptions
{
public:
	bool                                         bEmitTransaction;                                  // 0x0(0x1)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptConvexHullOptions
struct FGeometryScriptConvexHullOptions
{
public:
	bool                                         bPrefilterVertices;                                // 0x0(0x1)(None)
	uint8                                        Pad_FC4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PrefilterGridResolution;                           // 0x4(0x4)(None)
	int32                                        SimplifyToFaceCount;                               // 0x8(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSweptHullOptions
struct FGeometryScriptSweptHullOptions
{
public:
	bool                                         bPrefilterVertices;                                // 0x0(0x1)(None)
	uint8                                        Pad_FC5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PrefilterGridResolution;                           // 0x4(0x4)(None)
	float                                        MinThickness;                                      // 0x8(0x4)(None)
	bool                                         bSimplify;                                         // 0xC(0x1)(None)
	uint8                                        Pad_FC6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinEdgeLength;                                     // 0x10(0x4)(None)
	float                                        SimplifyTolerance;                                 // 0x14(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptConvexDecompositionOptions
struct FGeometryScriptConvexDecompositionOptions
{
public:
	int32                                        NumHulls;                                          // 0x0(0x4)(None)
	uint8                                        Pad_FC7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SearchFactor;                                      // 0x8(0x8)(None)
	double                                       ErrorTolerance;                                    // 0x10(0x8)(None)
	double                                       MinPartThickness;                                  // 0x18(0x8)(None)
	int32                                        SimplifyToFaceCount;                               // 0x20(0x4)(None)
	uint8                                        Pad_FC8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshSelection
struct FGeometryScriptMeshSelection
{
public:
	uint8                                        Pad_FC9[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptCopyMeshFromAssetOptions
struct FGeometryScriptCopyMeshFromAssetOptions
{
public:
	bool                                         bApplyBuildSettings;                               // 0x0(0x1)(None)
	bool                                         bRequestTangents;                                  // 0x1(0x1)(None)
	bool                                         bIgnoreRemoveDegenerates;                          // 0x2(0x1)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptNaniteOptions
struct FGeometryScriptNaniteOptions
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(None)
	uint8                                        Pad_FCA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FallbackPercentTriangles;                          // 0x4(0x4)(None)
	float                                        FallbackRelativeError;                             // 0x8(0x4)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptCopyMeshToAssetOptions
struct FGeometryScriptCopyMeshToAssetOptions
{
public:
	bool                                         bEnableRecomputeNormals;                           // 0x0(0x1)(None)
	bool                                         bEnableRecomputeTangents;                          // 0x1(0x1)(None)
	bool                                         bEnableRemoveDegenerates;                          // 0x2(0x1)(None)
	bool                                         bReplaceMaterials;                                 // 0x3(0x1)(None)
	uint8                                        Pad_FCB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            NewMaterials;                                      // 0x8(0x10)(ZeroConstructor, AutoWeak, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class FName>                          NewMaterialSlotNames;                              // 0x18(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bApplyNaniteSettings;                              // 0x28(0x1)(None)
	uint8                                        Pad_FCC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptNaniteOptions          NaniteSettings;                                    // 0x2C(0xC)(None)
	struct FMeshNaniteSettings                   NewNaniteSettings;                                 // 0x38(0x38)(None)
	bool                                         bEmitTransaction;                                  // 0x70(0x1)(None)
	bool                                         bDeferMeshPostEditChange;                          // 0x71(0x1)(None)
	uint8                                        Pad_FCE[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBakeTypeOptions
struct FGeometryScriptBakeTypeOptions
{
public:
	enum class EGeometryScriptBakeTypes          BakeType;                                          // 0x0(0x1)(None)
	uint8                                        Pad_FCF[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBakeTextureOptions
struct FGeometryScriptBakeTextureOptions
{
public:
	enum class EGeometryScriptBakeResolution     Resolution;                                        // 0x0(0x1)(None)
	enum class EGeometryScriptBakeBitDepth       BitDepth;                                          // 0x1(0x1)(None)
	enum class EGeometryScriptBakeSamplesPerPixel SamplesPerPixel;                                   // 0x2(0x1)(None)
	uint8                                        Pad_FD0[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            SampleFilterMask;                                  // 0x8(0x8)(None)
	float                                        ProjectionDistance;                                // 0x10(0x4)(None)
	bool                                         bProjectionInWorldSpace;                           // 0x14(0x1)(None)
	uint8                                        Pad_FD1[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBakeVertexOptions
struct FGeometryScriptBakeVertexOptions
{
public:
	bool                                         bSplitAtNormalSeams;                               // 0x0(0x1)(None)
	bool                                         bSplitAtUVSeams;                                   // 0x1(0x1)(None)
	uint8                                        Pad_FD2[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ProjectionDistance;                                // 0x4(0x4)(None)
	bool                                         bProjectionInWorldSpace;                           // 0x8(0x1)(None)
	uint8                                        Pad_FD3[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBakeOutputType
struct FGeometryScriptBakeOutputType
{
public:
	enum class EGeometryScriptBakeOutputMode     OutputMode;                                        // 0x0(0x1)(None)
	uint8                                        Pad_FD5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptBakeTypeOptions        RGBA;                                              // 0x8(0x18)(SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGeometryScriptBakeTypeOptions        R;                                                 // 0x20(0x18)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGeometryScriptBakeTypeOptions        G;                                                 // 0x38(0x18)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGeometryScriptBakeTypeOptions        B;                                                 // 0x50(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGeometryScriptBakeTypeOptions        A;                                                 // 0x68(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBakeTargetMeshOptions
struct FGeometryScriptBakeTargetMeshOptions
{
public:
	int32                                        TargetUVLayer;                                     // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBakeSourceMeshOptions
struct FGeometryScriptBakeSourceMeshOptions
{
public:
	class UTexture2D*                            SourceNormalMap;                                   // 0x0(0x8)(None)
	int32                                        SourceNormalUVLayer;                               // 0x8(0x4)(None)
	enum class EGeometryScriptBakeNormalSpace    SourceNormalSpace;                                 // 0xC(0x1)(None)
	uint8                                        Pad_FDA[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBakeRenderCaptureOptions
struct FGeometryScriptBakeRenderCaptureOptions
{
public:
	enum class EGeometryScriptBakeResolution     Resolution;                                        // 0x0(0x1)(None)
	enum class EGeometryScriptBakeResolution     RenderCaptureResolution;                           // 0x1(0x1)(None)
	enum class EGeometryScriptBakeSamplesPerPixel SamplesPerPixel;                                   // 0x2(0x1)(None)
	bool                                         bRenderCaptureAntiAliasing;                        // 0x3(0x1)(None)
	float                                        CleanupTolerance;                                  // 0x4(0x4)(None)
	bool                                         bBaseColorMap;                                     // 0x8(0x1)(None)
	bool                                         bNormalMap;                                        // 0x9(0x1)(None)
	bool                                         bPackedMRSMap;                                     // 0xA(0x1)(None)
	bool                                         bMetallicMap;                                      // 0xB(0x1)(None)
	bool                                         bRoughnessMap;                                     // 0xC(0x1)(None)
	bool                                         bSpecularMap;                                      // 0xD(0x1)(None)
	bool                                         bEmissiveMap;                                      // 0xE(0x1)(None)
	bool                                         bOpacityMap;                                       // 0xF(0x1)(None)
	bool                                         bSubsurfaceColorMap;                               // 0x10(0x1)(None)
	uint8                                        Pad_FDB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FieldOfViewDegrees;                                // 0x18(0x8)(None)
	double                                       NearPlaneDist;                                     // 0x20(0x8)(None)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRenderCaptureTextures
struct FGeometryScriptRenderCaptureTextures
{
public:
	class UTexture2D*                            BaseColorMap;                                      // 0x0(0x8)(ZeroConstructor)
	bool                                         bHasBaseColorMap;                                  // 0x8(0x1)(None)
	uint8                                        Pad_FDC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            NormalMap;                                         // 0x10(0x8)(ZeroConstructor)
	bool                                         bHasNormalMap;                                     // 0x18(0x1)(None)
	uint8                                        Pad_FDD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            PackedMRSMap;                                      // 0x20(0x8)(ZeroConstructor)
	bool                                         bHasPackedMRSMap;                                  // 0x28(0x1)(None)
	uint8                                        Pad_FDE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            MetallicMap;                                       // 0x30(0x8)(ZeroConstructor)
	bool                                         bHasMetallicMap;                                   // 0x38(0x1)(None)
	uint8                                        Pad_FDF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            RoughnessMap;                                      // 0x40(0x8)(ZeroConstructor)
	bool                                         bHasRoughnessMap;                                  // 0x48(0x1)(None)
	uint8                                        Pad_FE0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            SpecularMap;                                       // 0x50(0x8)(ZeroConstructor)
	bool                                         bHasSpecularMap;                                   // 0x58(0x1)(None)
	uint8                                        Pad_FE1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            EmissiveMap;                                       // 0x60(0x8)(ZeroConstructor)
	bool                                         bHasEmissiveMap;                                   // 0x68(0x1)(None)
	uint8                                        Pad_FE2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            OpacityMap;                                        // 0x70(0x8)(ZeroConstructor)
	bool                                         bHasOpacityMap;                                    // 0x78(0x1)(None)
	uint8                                        Pad_FE3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            SubsurfaceColorMap;                                // 0x80(0x8)(None)
	bool                                         bHasSubsurfaceColorMap;                            // 0x88(0x1)(None)
	uint8                                        Pad_FE4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSimpleMeshBuffers
struct FGeometryScriptSimpleMeshBuffers
{
public:
	TArray<struct FVector>                       Vertices;                                          // 0x0(0x10)(AutoWeak, ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       Normals;                                           // 0x10(0x10)(AutoWeak, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FVector2D>                     UV0;                                               // 0x20(0x10)(AutoWeak, ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FVector2D>                     UV1;                                               // 0x30(0x10)(AutoWeak, AssetRegistrySearchable, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FVector2D>                     UV2;                                               // 0x40(0x10)(SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FVector2D>                     UV3;                                               // 0x50(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FVector2D>                     UV4;                                               // 0x60(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FVector2D>                     UV5;                                               // 0x70(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FVector2D>                     UV6;                                               // 0x80(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FVector2D>                     UV7;                                               // 0x90(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FLinearColor>                  VertexColors;                                      // 0xA0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FIntVector>                    Triangles;                                         // 0xB0(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<int32>                                TriGroupIDs;                                       // 0xC0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptAppendMeshOptions
struct FGeometryScriptAppendMeshOptions
{
public:
	enum class EGeometryScriptCombineAttributesMode CombineMode;                                       // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBoneWeight
struct FGeometryScriptBoneWeight
{
public:
	int32                                        BoneIndex;                                         // 0x0(0x4)(None)
	float                                        Weight;                                            // 0x4(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBoneWeightProfile
struct FGeometryScriptBoneWeightProfile
{
public:
	class FName                                  ProfileName;                                       // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSmoothBoneWeightsOptions
struct FGeometryScriptSmoothBoneWeightsOptions
{
public:
	enum class EGeometryScriptSmoothBoneWeightsType DistanceWeighingType;                              // 0x0(0x1)(None)
	uint8                                        Pad_FE5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Stiffness;                                         // 0x4(0x4)(None)
	int32                                        MaxInfluences;                                     // 0x8(0x4)(None)
	int32                                        VoxelResolution;                                   // 0xC(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshBooleanOptions
struct FGeometryScriptMeshBooleanOptions
{
public:
	bool                                         bFillHoles;                                        // 0x0(0x1)(None)
	bool                                         bSimplifyOutput;                                   // 0x1(0x1)(None)
	uint8                                        Pad_FE6[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SimplifyPlanarTolerance;                           // 0x4(0x4)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshSelfUnionOptions
struct FGeometryScriptMeshSelfUnionOptions
{
public:
	bool                                         bFillHoles;                                        // 0x0(0x1)(None)
	bool                                         bTrimFlaps;                                        // 0x1(0x1)(None)
	bool                                         bSimplifyOutput;                                   // 0x2(0x1)(None)
	uint8                                        Pad_FE7[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SimplifyPlanarTolerance;                           // 0x4(0x4)(None)
	float                                        WindingThreshold;                                  // 0x8(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshPlaneCutOptions
struct FGeometryScriptMeshPlaneCutOptions
{
public:
	bool                                         bFillHoles;                                        // 0x0(0x1)(None)
	bool                                         bFillSpans;                                        // 0x1(0x1)(None)
	bool                                         bFlipCutSide;                                      // 0x2(0x1)(None)
	uint8                                        Pad_FE9[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UVWorldDimension;                                  // 0x4(0x4)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshPlaneSliceOptions
struct FGeometryScriptMeshPlaneSliceOptions
{
public:
	bool                                         bFillHoles;                                        // 0x0(0x1)(None)
	bool                                         bFillSpans;                                        // 0x1(0x1)(None)
	uint8                                        Pad_FEA[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GapWidth;                                          // 0x4(0x4)(None)
	float                                        UVWorldDimension;                                  // 0x8(0x4)(None)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshMirrorOptions
struct FGeometryScriptMeshMirrorOptions
{
public:
	bool                                         bApplyPlaneCut;                                    // 0x0(0x1)(None)
	bool                                         bFlipCutSide;                                      // 0x1(0x1)(None)
	bool                                         bWeldAlongPlane;                                   // 0x2(0x1)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptIsSameMeshOptions
struct FGeometryScriptIsSameMeshOptions
{
public:
	bool                                         bCheckConnectivity;                                // 0x0(0x1)(None)
	bool                                         bCheckEdgeIDs;                                     // 0x1(0x1)(None)
	bool                                         bCheckNormals;                                     // 0x2(0x1)(None)
	bool                                         bCheckColors;                                      // 0x3(0x1)(None)
	bool                                         bCheckUVs;                                         // 0x4(0x1)(None)
	bool                                         bCheckGroups;                                      // 0x5(0x1)(None)
	bool                                         bCheckAttributes;                                  // 0x6(0x1)(None)
	uint8                                        Pad_FEB[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Epsilon;                                           // 0x8(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeasureMeshDistanceOptions
struct FGeometryScriptMeasureMeshDistanceOptions
{
public:
	bool                                         bSymmetric;                                        // 0x0(0x1)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBendWarpOptions
struct FGeometryScriptBendWarpOptions
{
public:
	bool                                         bSymmetricExtents;                                 // 0x0(0x1)(None)
	uint8                                        Pad_FEC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LowerExtent;                                       // 0x4(0x4)(None)
	bool                                         bBidirectional;                                    // 0x8(0x1)(None)
	uint8                                        Pad_FED[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptTwistWarpOptions
struct FGeometryScriptTwistWarpOptions
{
public:
	bool                                         bSymmetricExtents;                                 // 0x0(0x1)(None)
	uint8                                        Pad_FF0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LowerExtent;                                       // 0x4(0x4)(None)
	bool                                         bBidirectional;                                    // 0x8(0x1)(None)
	uint8                                        Pad_FF1[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptFlareWarpOptions
struct FGeometryScriptFlareWarpOptions
{
public:
	bool                                         bSymmetricExtents;                                 // 0x0(0x1)(None)
	uint8                                        Pad_FF2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LowerExtent;                                       // 0x4(0x4)(None)
	enum class EGeometryScriptFlareType          FlareType;                                         // 0x8(0x1)(None)
	uint8                                        Pad_FF3[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPerlinNoiseLayerOptions
struct FGeometryScriptPerlinNoiseLayerOptions
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(None)
	float                                        Frequency;                                         // 0x4(0x4)(None)
	struct FVector                               FrequencyShift;                                    // 0x8(0x18)(None)
	int32                                        RandomSeed;                                        // 0x20(0x4)(None)
	uint8                                        Pad_FF4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMathWarpOptions
struct FGeometryScriptMathWarpOptions
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(None)
	float                                        Frequency;                                         // 0x4(0x4)(None)
	float                                        FrequencyShift;                                    // 0x8(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPerlinNoiseOptions
struct FGeometryScriptPerlinNoiseOptions
{
public:
	struct FGeometryScriptPerlinNoiseLayerOptions BaseLayer;                                         // 0x0(0x28)(None)
	bool                                         bApplyAlongNormal;                                 // 0x28(0x1)(None)
	enum class EGeometryScriptEmptySelectionBehavior EmptyBehavior;                                     // 0x29(0x1)(None)
	uint8                                        Pad_FF5[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptIterativeMeshSmoothingOptions
struct FGeometryScriptIterativeMeshSmoothingOptions
{
public:
	int32                                        NumIterations;                                     // 0x0(0x4)(None)
	float                                        Alpha;                                             // 0x4(0x4)(None)
	enum class EGeometryScriptEmptySelectionBehavior EmptyBehavior;                                     // 0x8(0x1)(None)
	uint8                                        Pad_FF7[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptDisplaceFromTextureOptions
struct FGeometryScriptDisplaceFromTextureOptions
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(None)
	uint8                                        Pad_FF9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             UVScale;                                           // 0x8(0x10)(None)
	struct FVector2D                             UVOffset;                                          // 0x18(0x10)(None)
	float                                        Center;                                            // 0x28(0x4)(None)
	int32                                        ImageChannel;                                      // 0x2C(0x4)(None)
	enum class EGeometryScriptEmptySelectionBehavior EmptyBehavior;                                     // 0x30(0x1)(None)
	uint8                                        Pad_FFA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshEditPolygroupOptions
struct FGeometryScriptMeshEditPolygroupOptions
{
public:
	enum class EGeometryScriptMeshEditPolygroupMode GroupMode;                                         // 0x0(0x1)(None)
	uint8                                        Pad_FFB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ConstantGroup;                                     // 0x4(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshOffsetOptions
struct FGeometryScriptMeshOffsetOptions
{
public:
	float                                        OffsetDistance;                                    // 0x0(0x4)(None)
	bool                                         bFixedBoundary;                                    // 0x4(0x1)(None)
	uint8                                        Pad_FFC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SolveSteps;                                        // 0x8(0x4)(None)
	float                                        SmoothAlpha;                                       // 0xC(0x4)(None)
	bool                                         bReprojectDuringSmoothing;                         // 0x10(0x1)(None)
	uint8                                        Pad_FFF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BoundaryAlpha;                                     // 0x14(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshExtrudeOptions
struct FGeometryScriptMeshExtrudeOptions
{
public:
	float                                        ExtrudeDistance;                                   // 0x0(0x4)(None)
	uint8                                        Pad_1000[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ExtrudeDirection;                                  // 0x8(0x18)(None)
	float                                        UVScale;                                           // 0x20(0x4)(None)
	bool                                         bSolidsToShells;                                   // 0x24(0x1)(None)
	uint8                                        Pad_1001[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshLinearExtrudeOptions
struct FGeometryScriptMeshLinearExtrudeOptions
{
public:
	float                                        Distance;                                          // 0x0(0x4)(None)
	enum class EGeometryScriptLinearExtrudeDirection DirectionMode;                                     // 0x4(0x1)(None)
	uint8                                        Pad_1002[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Direction;                                         // 0x8(0x18)(None)
	enum class EGeometryScriptPolyOperationArea  AreaMode;                                          // 0x20(0x1)(None)
	uint8                                        Pad_1003[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptMeshEditPolygroupOptions GroupOptions;                                      // 0x24(0x8)(None)
	float                                        UVScale;                                           // 0x2C(0x4)(None)
	bool                                         bSolidsToShells;                                   // 0x30(0x1)(None)
	uint8                                        Pad_1004[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshOffsetFacesOptions
struct FGeometryScriptMeshOffsetFacesOptions
{
public:
	float                                        Distance;                                          // 0x0(0x4)(None)
	enum class EGeometryScriptOffsetFacesType    OffsetType;                                        // 0x4(0x1)(None)
	enum class EGeometryScriptPolyOperationArea  AreaMode;                                          // 0x5(0x1)(None)
	uint8                                        Pad_1005[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptMeshEditPolygroupOptions GroupOptions;                                      // 0x8(0x8)(None)
	float                                        UVScale;                                           // 0x10(0x4)(None)
	bool                                         bSolidsToShells;                                   // 0x14(0x1)(None)
	uint8                                        Pad_1006[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshInsetOutsetFacesOptions
struct FGeometryScriptMeshInsetOutsetFacesOptions
{
public:
	float                                        Distance;                                          // 0x0(0x4)(None)
	bool                                         bReproject;                                        // 0x4(0x1)(None)
	bool                                         bBoundaryOnly;                                     // 0x5(0x1)(None)
	uint8                                        Pad_1008[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Softness;                                          // 0x8(0x4)(None)
	float                                        AreaScale;                                         // 0xC(0x4)(None)
	enum class EGeometryScriptPolyOperationArea  AreaMode;                                          // 0x10(0x1)(None)
	uint8                                        Pad_100A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptMeshEditPolygroupOptions GroupOptions;                                      // 0x14(0x8)(None)
	float                                        UVScale;                                           // 0x1C(0x4)(None)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshBevelOptions
struct FGeometryScriptMeshBevelOptions
{
public:
	float                                        BevelDistance;                                     // 0x0(0x4)(None)
	bool                                         bInferMaterialID;                                  // 0x4(0x1)(None)
	uint8                                        Pad_100C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SetMaterialID;                                     // 0x8(0x4)(None)
	bool                                         bApplyFilterBox;                                   // 0xC(0x1)(None)
	uint8                                        Pad_100D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox                                  FilterBox;                                         // 0x10(0x38)(None)
	uint8                                        Pad_100E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            FilterBoxTransform;                                // 0x50(0x60)(None)
	bool                                         bFullyContained;                                   // 0xB0(0x1)(None)
	uint8                                        Pad_100F[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshBevelSelectionOptions
struct FGeometryScriptMeshBevelSelectionOptions
{
public:
	float                                        BevelDistance;                                     // 0x0(0x4)(None)
	bool                                         bInferMaterialID;                                  // 0x4(0x1)(None)
	uint8                                        Pad_1010[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SetMaterialID;                                     // 0x8(0x4)(None)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptCalculateNormalsOptions
struct FGeometryScriptCalculateNormalsOptions
{
public:
	bool                                         bAngleWeighted;                                    // 0x0(0x1)(None)
	bool                                         bAreaWeighted;                                     // 0x1(0x1)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSplitNormalsOptions
struct FGeometryScriptSplitNormalsOptions
{
public:
	bool                                         bSplitByOpeningAngle;                              // 0x0(0x1)(None)
	uint8                                        Pad_1012[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OpeningAngleDeg;                                   // 0x4(0x4)(None)
	bool                                         bSplitByFaceGroup;                                 // 0x8(0x1)(None)
	uint8                                        Pad_1013[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0xC(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptTangentsOptions
struct FGeometryScriptTangentsOptions
{
public:
	enum class EGeometryScriptTangentTypes       Type;                                              // 0x0(0x1)(None)
	uint8                                        Pad_1014[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UVLayer;                                           // 0x4(0x4)(None)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPrimitiveOptions
struct FGeometryScriptPrimitiveOptions
{
public:
	enum class EGeometryScriptPrimitivePolygroupMode PolygroupMode;                                     // 0x0(0x1)(None)
	bool                                         bFlipOrientation;                                  // 0x1(0x1)(None)
	enum class EGeometryScriptPrimitiveUVMode    UVMode;                                            // 0x2(0x1)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRevolveOptions
struct FGeometryScriptRevolveOptions
{
public:
	float                                        RevolveDegrees;                                    // 0x0(0x4)(None)
	float                                        DegreeOffset;                                      // 0x4(0x4)(None)
	bool                                         bReverseDirection;                                 // 0x8(0x1)(None)
	bool                                         bHardNormals;                                      // 0x9(0x1)(None)
	uint8                                        Pad_1016[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HardNormalAngle;                                   // 0xC(0x4)(None)
	bool                                         bProfileAtMidpoint;                                // 0x10(0x1)(None)
	bool                                         bFillPartialRevolveEndcaps;                        // 0x11(0x1)(None)
	uint8                                        Pad_1017[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptVoronoiOptions
struct FGeometryScriptVoronoiOptions
{
public:
	float                                        BoundsExpand;                                      // 0x0(0x4)(None)
	uint8                                        Pad_1018[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox                                  Bounds;                                            // 0x8(0x38)(None)
	TArray<int32>                                CreateCells;                                       // 0x40(0x10)(None)
	bool                                         bIncludeBoundary;                                  // 0x50(0x1)(None)
	uint8                                        Pad_1019[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRemeshOptions
struct FGeometryScriptRemeshOptions
{
public:
	bool                                         bDiscardAttributes;                                // 0x0(0x1)(None)
	bool                                         bReprojectToInputMesh;                             // 0x1(0x1)(None)
	enum class EGeometryScriptRemeshSmoothingType SmoothingType;                                     // 0x2(0x1)(None)
	uint8                                        Pad_101A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SmoothingRate;                                     // 0x4(0x4)(None)
	enum class EGeometryScriptRemeshEdgeConstraintType MeshBoundaryConstraint;                            // 0x8(0x1)(None)
	enum class EGeometryScriptRemeshEdgeConstraintType GroupBoundaryConstraint;                           // 0x9(0x1)(None)
	enum class EGeometryScriptRemeshEdgeConstraintType MaterialBoundaryConstraint;                        // 0xA(0x1)(None)
	bool                                         bAllowFlips;                                       // 0xB(0x1)(None)
	bool                                         bAllowSplits;                                      // 0xC(0x1)(None)
	bool                                         bAllowCollapses;                                   // 0xD(0x1)(None)
	bool                                         bPreventNormalFlips;                               // 0xE(0x1)(None)
	bool                                         bPreventTinyTriangles;                             // 0xF(0x1)(None)
	bool                                         bUseFullRemeshPasses;                              // 0x10(0x1)(None)
	uint8                                        Pad_101B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RemeshIterations;                                  // 0x14(0x4)(None)
	bool                                         bAutoCompact;                                      // 0x18(0x1)(None)
	uint8                                        Pad_101C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptUniformRemeshOptions
struct FGeometryScriptUniformRemeshOptions
{
public:
	enum class EGeometryScriptUniformRemeshTargetType TargetType;                                        // 0x0(0x1)(None)
	uint8                                        Pad_101D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetTriangleCount;                               // 0x4(0x4)(None)
	float                                        TargetEdgeLength;                                  // 0x8(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptWeldEdgesOptions
struct FGeometryScriptWeldEdgesOptions
{
public:
	float                                        Tolerance;                                         // 0x0(0x4)(None)
	bool                                         bOnlyUniquePairs;                                  // 0x4(0x1)(None)
	uint8                                        Pad_101E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptResolveTJunctionOptions
struct FGeometryScriptResolveTJunctionOptions
{
public:
	float                                        Tolerance;                                         // 0x0(0x4)(None)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptFillHolesOptions
struct FGeometryScriptFillHolesOptions
{
public:
	enum class EGeometryScriptFillHolesMethod    FillMethod;                                        // 0x0(0x1)(None)
	bool                                         bDeleteIsolatedTriangles;                          // 0x1(0x1)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRemoveSmallComponentOptions
struct FGeometryScriptRemoveSmallComponentOptions
{
public:
	float                                        MinVolume;                                         // 0x0(0x4)(None)
	float                                        MinArea;                                           // 0x4(0x4)(None)
	int32                                        MinTriangleCount;                                  // 0x8(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRemoveHiddenTrianglesOptions
struct FGeometryScriptRemoveHiddenTrianglesOptions
{
public:
	enum class EGeometryScriptRemoveHiddenTrianglesMethod Method;                                            // 0x0(0x1)(None)
	uint8                                        Pad_101F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SamplesPerTriangle;                                // 0x4(0x4)(None)
	int32                                        ShrinkSelection;                                   // 0x8(0x4)(None)
	float                                        WindingIsoValue;                                   // 0xC(0x4)(None)
	int32                                        RaysPerSample;                                     // 0x10(0x4)(None)
	float                                        NormalOffset;                                      // 0x14(0x4)(None)
	bool                                         bCompactResult;                                    // 0x18(0x1)(None)
	uint8                                        Pad_1020[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptDegenerateTriangleOptions
struct FGeometryScriptDegenerateTriangleOptions
{
public:
	enum class EGeometryScriptRepairMeshMode     Mode;                                              // 0x0(0x1)(None)
	uint8                                        Pad_1021[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MinTriangleArea;                                   // 0x8(0x8)(None)
	double                                       MinEdgeLength;                                     // 0x10(0x8)(None)
	bool                                         bCompactOnCompletion;                              // 0x18(0x1)(None)
	uint8                                        Pad_1022[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshPointSamplingOptions
struct FGeometryScriptMeshPointSamplingOptions
{
public:
	float                                        SamplingRadius;                                    // 0x0(0x4)(None)
	int32                                        MaxNumSamples;                                     // 0x4(0x4)(None)
	int32                                        RandomSeed;                                        // 0x8(0x4)(None)
	uint8                                        Pad_1023[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SubSampleDensity;                                  // 0x10(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptNonUniformPointSamplingOptions
struct FGeometryScriptNonUniformPointSamplingOptions
{
public:
	float                                        MaxSamplingRadius;                                 // 0x0(0x4)(None)
	enum class EGeometryScriptSamplingDistributionMode SizeDistribution;                                  // 0x4(0x1)(None)
	uint8                                        Pad_1024[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SizeDistributionPower;                             // 0x8(0x8)(None)
	enum class EGeometryScriptSamplingWeightMode WeightMode;                                        // 0x10(0x1)(None)
	bool                                         bInvertWeights;                                    // 0x11(0x1)(None)
	uint8                                        Pad_1025[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPlanarSimplifyOptions
struct FGeometryScriptPlanarSimplifyOptions
{
public:
	float                                        AngleThreshold;                                    // 0x0(0x4)(None)
	bool                                         bAutoCompact;                                      // 0x4(0x1)(None)
	uint8                                        Pad_1026[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPolygroupSimplifyOptions
struct FGeometryScriptPolygroupSimplifyOptions
{
public:
	float                                        AngleThreshold;                                    // 0x0(0x4)(None)
	bool                                         bAutoCompact;                                      // 0x4(0x1)(None)
	uint8                                        Pad_1027[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x7 (0x7 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSimplifyMeshOptions
struct FGeometryScriptSimplifyMeshOptions
{
public:
	enum class EGeometryScriptRemoveMeshSimplificationType Method;                                            // 0x0(0x1)(None)
	bool                                         bAllowSeamCollapse;                                // 0x1(0x1)(None)
	bool                                         bAllowSeamSmoothing;                               // 0x2(0x1)(None)
	bool                                         bAllowSeamSplits;                                  // 0x3(0x1)(None)
	bool                                         bPreserveVertexPositions;                          // 0x4(0x1)(None)
	bool                                         bRetainQuadricMemory;                              // 0x5(0x1)(None)
	bool                                         bAutoCompact;                                      // 0x6(0x1)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSpatialQueryOptions
struct FGeometryScriptSpatialQueryOptions
{
public:
	float                                        MaxDistance;                                       // 0x0(0x4)(None)
	bool                                         bAllowUnsafeModifiedQueries;                       // 0x4(0x1)(None)
	uint8                                        Pad_1028[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WindingIsoThreshold;                               // 0x8(0x4)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRayHitResult
struct FGeometryScriptRayHitResult
{
public:
	bool                                         bHit;                                              // 0x0(0x1)(None)
	uint8                                        Pad_1029[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RayParameter;                                      // 0x4(0x4)(None)
	int32                                        HitTriangleID;                                     // 0x8(0x4)(None)
	uint8                                        Pad_102A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitPosition;                                       // 0x10(0x18)(None)
	struct FVector                               HitBaryCoords;                                     // 0x28(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPNTessellateOptions
struct FGeometryScriptPNTessellateOptions
{
public:
	bool                                         bRecomputeNormals;                                 // 0x0(0x1)(None)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSelectiveTessellateOptions
struct FGeometryScriptSelectiveTessellateOptions
{
public:
	bool                                         bEnableMultithreading;                             // 0x0(0x1)(None)
	enum class EGeometryScriptEmptySelectionBehavior EmptyBehavior;                                     // 0x1(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRepackUVsOptions
struct FGeometryScriptRepackUVsOptions
{
public:
	int32                                        TargetImageWidth;                                  // 0x0(0x4)(None)
	bool                                         bOptimizeIslandRotation;                           // 0x4(0x1)(None)
	uint8                                        Pad_102B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptExpMapUVOptions
struct FGeometryScriptExpMapUVOptions
{
public:
	int32                                        NormalSmoothingRounds;                             // 0x0(0x4)(None)
	float                                        NormalSmoothingAlpha;                              // 0x4(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSpectralConformalUVOptions
struct FGeometryScriptSpectralConformalUVOptions
{
public:
	bool                                         bPreserveIrregularity;                             // 0x0(0x1)(None)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRecomputeUVsOptions
struct FGeometryScriptRecomputeUVsOptions
{
public:
	enum class EGeometryScriptUVFlattenMethod    Method;                                            // 0x0(0x1)(None)
	enum class EGeometryScriptUVIslandSource     IslandSource;                                      // 0x1(0x1)(None)
	uint8                                        Pad_102C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptExpMapUVOptions        ExpMapOptions;                                     // 0x4(0x8)(None)
	struct FGeometryScriptSpectralConformalUVOptions SpectralConformalOptions;                          // 0xC(0x1)(None)
	uint8                                        Pad_102D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x10(0x8)(None)
	bool                                         bAutoAlignIslandsWithAxes;                         // 0x18(0x1)(None)
	uint8                                        Pad_102E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x34 (0x34 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPatchBuilderOptions
struct FGeometryScriptPatchBuilderOptions
{
public:
	int32                                        InitialPatchCount;                                 // 0x0(0x4)(None)
	int32                                        MinPatchSize;                                      // 0x4(0x4)(None)
	float                                        PatchCurvatureAlignmentWeight;                     // 0x8(0x4)(None)
	float                                        PatchMergingMetricThresh;                          // 0xC(0x4)(None)
	float                                        PatchMergingAngleThresh;                           // 0x10(0x4)(None)
	struct FGeometryScriptExpMapUVOptions        ExpMapOptions;                                     // 0x14(0x8)(None)
	bool                                         bRespectInputGroups;                               // 0x1C(0x1)(None)
	uint8                                        Pad_102F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x20(0x8)(None)
	bool                                         bAutoPack;                                         // 0x28(0x1)(None)
	uint8                                        Pad_1030[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptRepackUVsOptions       PackingOptions;                                    // 0x2C(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptXAtlasOptions
struct FGeometryScriptXAtlasOptions
{
public:
	int32                                        MaxIterations;                                     // 0x0(0x4)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScript3DGridParameters
struct FGeometryScript3DGridParameters
{
public:
	enum class EGeometryScriptGridSizingMethod   SizeMethod;                                        // 0x0(0x1)(None)
	uint8                                        Pad_1031[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GridCellSize;                                      // 0x4(0x4)(None)
	int32                                        GridResolution;                                    // 0x8(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSolidifyOptions
struct FGeometryScriptSolidifyOptions
{
public:
	struct FGeometryScript3DGridParameters       GridParameters;                                    // 0x0(0xC)(None)
	float                                        WindingThreshold;                                  // 0xC(0x4)(None)
	bool                                         bSolidAtBoundaries;                                // 0x10(0x1)(None)
	uint8                                        Pad_1032[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExtendBounds;                                      // 0x14(0x4)(None)
	int32                                        SurfaceSearchSteps;                                // 0x18(0x4)(None)
	bool                                         bThickenShells;                                    // 0x1C(0x1)(None)
	uint8                                        Pad_1033[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ShellThickness;                                    // 0x20(0x8)(None)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMorphologyOptions
struct FGeometryScriptMorphologyOptions
{
public:
	struct FGeometryScript3DGridParameters       SDFGridParameters;                                 // 0x0(0xC)(None)
	bool                                         bUseSeparateMeshGrid;                              // 0xC(0x1)(None)
	uint8                                        Pad_1034[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScript3DGridParameters       MeshGridParameters;                                // 0x10(0xC)(None)
	enum class EGeometryScriptMorphologicalOpType Operation;                                         // 0x1C(0x1)(None)
	uint8                                        Pad_1035[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Distance;                                          // 0x20(0x4)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSplineSamplingOptions
struct FGeometryScriptSplineSamplingOptions
{
public:
	int32                                        NumSamples;                                        // 0x0(0x4)(None)
	float                                        ErrorTolerance;                                    // 0x4(0x4)(None)
	enum class EGeometryScriptSampleSpacing      SampleSpacing;                                     // 0x8(0x1)(None)
	enum class ESplineCoordinateSpace            CoordinateSpace;                                   // 0x9(0x1)(None)
	uint8                                        Pad_1036[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptCopyMeshFromComponentOptions
struct FGeometryScriptCopyMeshFromComponentOptions
{
public:
	bool                                         bWantNormals;                                      // 0x0(0x1)(None)
	bool                                         bWantTangents;                                     // 0x1(0x1)(None)
	uint8                                        Pad_1037[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptMeshReadLOD            RequestedLOD;                                      // 0x4(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSampleTextureOptions
struct FGeometryScriptSampleTextureOptions
{
public:
	enum class EGeometryScriptPixelSamplingMethod SamplingMethod;                                    // 0x0(0x1)(None)
	bool                                         bWrap;                                             // 0x1(0x1)(None)
	uint8                                        Pad_1039[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             UVScale;                                           // 0x8(0x10)(None)
	struct FVector2D                             UVOffset;                                          // 0x18(0x10)(None)
};

}


