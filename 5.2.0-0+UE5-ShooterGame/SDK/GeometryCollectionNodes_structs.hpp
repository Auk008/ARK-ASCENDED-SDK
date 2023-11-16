#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDataflowFieldFalloffType : uint8
{
	Dataflow_FieldFalloffType_None = 0,
	Dataflow_FieldFalloffType_Linear = 1,
	Dataflow_FieldFalloffType_Inverse = 2,
	Dataflow_FieldFalloffType_Squared = 3,
	Dataflow_FieldFalloffType_Logarithmic = 4,
	Dataflow_Max                   = 5,
};

enum class EDataflowSetMaskConditionType : uint8
{
	Dataflow_SetMaskConditionType_Always = 0,
	Dataflow_SetMaskConditionType_IFF_NOT_Interior = 1,
	Dataflow_SetMaskConditionType_IFF_NOT_Exterior = 2,
	Dataflow_Max                   = 3,
};

enum class EDataflowWaveFunctionType : uint8
{
	Dataflow_WaveFunctionType_Cosine = 0,
	Dataflow_WaveFunctionType_Gaussian = 1,
	Dataflow_WaveFunctionType_Falloff = 2,
	Dataflow_WaveFunctionType_Decay = 3,
	Dataflow_Max                   = 4,
};

enum class EDataflowFloatFieldOperationType : uint8
{
	Dataflow_FloatFieldOperationType_Multiply = 0,
	Dataflow_FloatFieldFalloffType_Divide = 1,
	Dataflow_FloatFieldFalloffType_Add = 2,
	Dataflow_FloatFieldFalloffType_Substract = 3,
	Dataflow_FloatFieldFalloffType_Min = 4,
	Dataflow_FloatFieldFalloffType_Max = 5,
	Dataflow_Max                   = 6,
};

enum class EDataflowVectorFieldOperationType : uint8
{
	Dataflow_VectorFieldOperationType_Multiply = 0,
	Dataflow_VectorFieldFalloffType_Divide = 1,
	Dataflow_VectorFieldFalloffType_Add = 2,
	Dataflow_VectorFieldFalloffType_Substract = 3,
	Dataflow_VectorFieldFalloffType_CrossProduct = 4,
	Dataflow_Max                   = 5,
};

enum class ESetMaterialOperationTypeEnum : uint8
{
	Dataflow_SetMaterialOperationType_Add = 0,
	Dataflow_SetMaterialOperationType_Insert = 1,
	Dataflow_Max                   = 2,
};

enum class EConvexOverlapRemovalMethodEnum : uint8
{
	Dataflow_EConvexOverlapRemovalMethod_None = 0,
	Dataflow_EConvexOverlapRemovalMethod_All = 1,
	Dataflow_EConvexOverlapRemovalMethod_OnlyClusters = 2,
	Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters = 3,
	Dataflow_Max                   = 4,
};

enum class EClusterSizeMethodEnum : uint8
{
	Dataflow_ClusterSizeMethod_ByNumber = 0,
	Dataflow_ClusterSizeMethod_ByFractionOfInput = 1,
	Dataflow_ClusterSizeMethod_BySize = 2,
	Dataflow_Max                   = 3,
};

enum class EVisibiltyOptionsEnum : uint8
{
	Dataflow_VisibilityOptions_Visible = 0,
	Dataflow_VisibilityOptions_Invisible = 1,
	Dataflow_Max                   = 2,
};

enum class EMeshBooleanOperationEnum : uint8
{
	Dataflow_MeshBoolean_Union     = 0,
	Dataflow_MeshBoolean_Intersect = 1,
	Dataflow_MeshBoolean_Difference = 2,
	Dataflow_Max                   = 3,
};

enum class EMakeBoxDataTypeEnum : uint8
{
	Dataflow_MakeBox_DataType_MinMax = 0,
	Dataflow_MakeBox_DataType_CenterSize = 1,
	Dataflow_Max                   = 2,
};

enum class EFloatToIntFunctionEnum : uint8
{
	Dataflow_FloatToInt_Function_Floor = 0,
	Dataflow_FloatToInt_Function_Ceil = 1,
	Dataflow_FloatToInt_Function_Round = 2,
	Dataflow_FloatToInt_Function_Truncate = 3,
	Dataflow_Max                   = 4,
};

enum class EFloatArrayToIntArrayFunctionEnum : uint8
{
	Dataflow_FloatToInt_Function_Floor = 0,
	Dataflow_FloatToInt_Function_Ceil = 1,
	Dataflow_FloatToInt_Function_Round = 2,
	Dataflow_FloatToInt_Function_Truncate = 3,
	Dataflow_FloatToInt_NonZeroToIndex = 4,
	Dataflow_FloatToInt_ZeroToIndex = 5,
	Dataflow_Max                   = 6,
};

enum class EMathConstantsEnum : uint8
{
	Dataflow_MathConstants_Pi      = 0,
	Dataflow_MathConstants_HalfPi  = 1,
	Dataflow_MathConstants_TwoPi   = 2,
	Dataflow_MathConstants_FourPi  = 3,
	Dataflow_MathConstants_InvPi   = 4,
	Dataflow_MathConstants_InvTwoPi = 5,
	Dataflow_MathConstants_Sqrt2   = 6,
	Dataflow_MathConstants_InvSqrt2 = 7,
	Dataflow_MathConstants_Sqrt3   = 8,
	Dataflow_MathConstants_InvSqrt3 = 9,
	Dataflow_FloatToInt_Function_E = 10,
	Dataflow_FloatToInt_Function_Gamma = 11,
	Dataflow_FloatToInt_Function_GoldenRatio = 12,
	Dataflow_FloatToInt_Function_ZeroTolerance = 13,
	Dataflow_Max                   = 14,
};

enum class ERotationOrderEnum : uint8
{
	Dataflow_RotationOrder_XYZ     = 0,
	Dataflow_RotationOrder_YZX     = 1,
	Dataflow_RotationOrder_ZXY     = 2,
	Dataflow_RotationOrder_XZY     = 3,
	Dataflow_RotationOrder_YXZ     = 4,
	Dataflow_RotationOrder_ZYX     = 5,
	Dataflow_Max                   = 6,
};

enum class ECompareOperationEnum : uint8
{
	Dataflow_Compare_Equal         = 0,
	Dataflow_Compare_Smaller       = 1,
	Dataflow_Compare_SmallerOrEqual = 2,
	Dataflow_Compare_Greater       = 3,
	Dataflow_Compare_GreaterOrEqual = 4,
	Dataflow_Max                   = 5,
};

enum class EAnchorStateEnum : uint8
{
	Dataflow_AnchorState_Anchored  = 0,
	Dataflow_AnchorState_NotAnchored = 1,
	Dataflow_Max                   = 2,
};

enum class EProximityMethodEnum : uint8
{
	Dataflow_ProximityMethod_Precise = 0,
	Dataflow_ProximityMethod_ConvexHull = 1,
	Dataflow_Max                   = 2,
};

enum class EStandardGroupNameEnum : uint8
{
	Dataflow_EStandardGroupNameEnum_Transform = 0,
	Dataflow_EStandardGroupNameEnum_Geometry = 1,
	Dataflow_EStandardGroupNameEnum_Faces = 2,
	Dataflow_EStandardGroupNameEnum_Vertices = 3,
	Dataflow_EStandardGroupNameEnum_Material = 4,
	Dataflow_EStandardGroupNameEnum_Breaking = 5,
	Dataflow_EStandardGroupNameEnum_Custom = 6,
	Dataflow_Max                   = 7,
};

enum class ECustomAttributeTypeEnum : uint8
{
	Dataflow_CustomAttributeType_UInt8 = 0,
	Dataflow_CustomAttributeType_Int32 = 1,
	Dataflow_CustomAttributeType_Float = 2,
	Dataflow_CustomAttributeType_Double = 3,
	Dataflow_CustomAttributeType_Bool = 4,
	Dataflow_CustomAttributeType_String = 5,
	Dataflow_CustomAttributeType_Vector2f = 6,
	Dataflow_CustomAttributeType_Vector3f = 7,
	Dataflow_CustomAttributeType_Vector3d = 8,
	Dataflow_CustomAttributeType_Vector4f = 9,
	Dataflow_CustomAttributeType_LinearColor = 10,
	Dataflow_CustomAttributeType_Transform = 11,
	Dataflow_CustomAttributeType_Quat4f = 12,
	Dataflow_CustomAttributeType_Box = 13,
	Dataflow_CustomAttributeType_Guid = 14,
	Dataflow_CustomAttributeType_Int32Set = 15,
	Dataflow_CustomAttributeType_Int32Array = 16,
	Dataflow_CustomAttributeType_IntVector = 17,
	Dataflow_CustomAttributeType_IntVector2 = 18,
	Dataflow_CustomAttributeType_IntVector4 = 19,
	Dataflow_CustomAttributeType_IntVector2Array = 20,
	Dataflow_CustomAttributeType_FloatArray = 21,
	Dataflow_CustomAttributeType_Vector2fArray = 22,
	Dataflow_CustomAttributeType_FVector3fArray = 23,
	Dataflow_Max                   = 24,
};

enum class ESetOperationEnum : uint8
{
	Dataflow_SetOperation_AND      = 0,
	Dataflow_SetOperation_OR       = 1,
	Dataflow_SetOperation_XOR      = 2,
	Dataflow_Max                   = 3,
};

enum class ERangeSettingEnum : uint8
{
	Dataflow_RangeSetting_InsideRange = 0,
	Dataflow_RangeSetting_OutsideRange = 1,
	Dataflow_Max                   = 2,
};

enum class ESelectSubjectTypeEnum : uint8
{
	Dataflow_SelectSubjectType_Vertices = 0,
	Dataflow_SelectSubjectType_BoundingBox = 1,
	Dataflow_SelectSubjectType_Centroid = 2,
	Dataflow_Max                   = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GeometryCollectionTerminalDataflowNode
struct FGeometryCollectionTerminalDataflowNode : public FDataflowTerminalNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UMaterial*>                     Materials;                                         // 0x198(0x10)(ZeroConstructor, AssetRegistrySearchable, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FGeometryCollectionAutoInstanceMesh> InstancedMeshes;                                   // 0x1A8(0x10)(None)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetGeometryCollectionAssetDataflowNode
struct FGetGeometryCollectionAssetDataflowNode : public FDataflowNode
{
public:
	class UGeometryCollection*                   Asset;                                             // 0xE8(0x8)(None)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetGeometryCollectionSourcesDataflowNode
struct FGetGeometryCollectionSourcesDataflowNode : public FDataflowNode
{
public:
	class UGeometryCollection*                   Asset;                                             // 0xE8(0x8)(ZeroConstructor)
	TArray<struct FGeometryCollectionSource>     Sources;                                           // 0xF0(0x10)(None)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CreateGeometryCollectionFromSourcesDataflowNode
struct FCreateGeometryCollectionFromSourcesDataflowNode : public FDataflowNode
{
public:
	TArray<struct FGeometryCollectionSource>     Sources;                                           // 0xE8(0x10)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FManagedArrayCollection               Collection;                                        // 0xF8(0xB0)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UMaterial*>                     Materials;                                         // 0x1A8(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FGeometryCollectionAutoInstanceMesh> InstancedMeshes;                                   // 0x1B8(0x10)(None)
};

// 0xC8 (0x1B0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RadialFalloffFieldDataflowNode
struct FRadialFalloffFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSphere                               Sphere;                                            // 0x118(0x20)(None)
	struct FVector                               Translation;                                       // 0x138(0x18)(None)
	float                                        Magnitude;                                         // 0x150(0x4)(None)
	float                                        MinRange;                                          // 0x154(0x4)(None)
	float                                        MaxRange;                                          // 0x158(0x4)(None)
	float                                        Default;                                           // 0x15C(0x4)(None)
	enum class EDataflowFieldFalloffType         FalloffType;                                       // 0x160(0x1)(None)
	uint8                                        Pad_8F2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                FieldFloatResult;                                  // 0x168(0x10)(AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                FieldRemap;                                        // 0x178(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowVertexSelection              FieldSelectionMask;                                // 0x188(0x20)(None)
	int32                                        NumSamplePositions;                                // 0x1A8(0x4)(None)
	uint8                                        Pad_8F3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x128 (0x210 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoxFalloffFieldDataflowNode
struct FBoxFalloffFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(AutoWeak, ContainsInstancedReference, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FBox                                  Box;                                               // 0x118(0x38)(None)
	struct FTransform                            Transform;                                         // 0x150(0x60)(None)
	float                                        Magnitude;                                         // 0x1B0(0x4)(None)
	float                                        MinRange;                                          // 0x1B4(0x4)(None)
	float                                        MaxRange;                                          // 0x1B8(0x4)(None)
	float                                        Default;                                           // 0x1BC(0x4)(None)
	enum class EDataflowFieldFalloffType         FalloffType;                                       // 0x1C0(0x1)(None)
	uint8                                        Pad_8F5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                FieldFloatResult;                                  // 0x1C8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                FieldRemap;                                        // 0x1D8(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowVertexSelection              FieldSelectionMask;                                // 0x1E8(0x20)(None)
	int32                                        NumSamplePositions;                                // 0x208(0x4)(None)
	uint8                                        Pad_8F6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PlaneFalloffFieldDataflowNode
struct FPlaneFalloffFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(AutoWeak, SimpleDisplay, AdvancedDisplay, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               Position;                                          // 0x118(0x18)(None)
	struct FVector                               Normal;                                            // 0x130(0x18)(None)
	float                                        Distance;                                          // 0x148(0x4)(None)
	uint8                                        Pad_901[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Translation;                                       // 0x150(0x18)(None)
	float                                        Magnitude;                                         // 0x168(0x4)(None)
	float                                        MinRange;                                          // 0x16C(0x4)(None)
	float                                        MaxRange;                                          // 0x170(0x4)(None)
	float                                        Default;                                           // 0x174(0x4)(None)
	enum class EDataflowFieldFalloffType         FalloffType;                                       // 0x178(0x1)(None)
	uint8                                        Pad_912[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                FieldFloatResult;                                  // 0x180(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                FieldRemap;                                        // 0x190(0x10)(AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowVertexSelection              FieldSelectionMask;                                // 0x1A0(0x20)(None)
	int32                                        NumSamplePositions;                                // 0x1C0(0x4)(None)
	uint8                                        Pad_914[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0x188 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RadialIntMaskFieldDataflowNode
struct FRadialIntMaskFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSphere                               Sphere;                                            // 0x118(0x20)(None)
	struct FVector                               Translation;                                       // 0x138(0x18)(None)
	int32                                        InteriorValue;                                     // 0x150(0x4)(None)
	int32                                        ExteriorValue;                                     // 0x154(0x4)(None)
	enum class EDataflowSetMaskConditionType     SetMaskConditionType;                              // 0x158(0x1)(None)
	uint8                                        Pad_916[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                FieldIntResult;                                    // 0x160(0x10)(ContainsInstancedReference, AdvancedDisplay, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                FieldRemap;                                        // 0x170(0x10)(None)
	int32                                        NumSamplePositions;                                // 0x180(0x4)(None)
	uint8                                        Pad_918[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x148 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UniformScalarFieldDataflowNode
struct FUniformScalarFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(AutoWeak, AssetRegistrySearchable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Magnitude;                                         // 0x118(0x4)(None)
	uint8                                        Pad_925[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                FieldFloatResult;                                  // 0x120(0x10)(SimpleDisplay, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                FieldRemap;                                        // 0x130(0x10)(None)
	int32                                        NumSamplePositions;                                // 0x140(0x4)(None)
	uint8                                        Pad_927[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x160 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UniformVectorFieldDataflowNode
struct FUniformVectorFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Magnitude;                                         // 0x118(0x4)(None)
	uint8                                        Pad_92B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Direction;                                         // 0x120(0x18)(None)
	TArray<struct FVector>                       FieldVectorResult;                                 // 0x138(0x10)(TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                FieldRemap;                                        // 0x148(0x10)(None)
	int32                                        NumSamplePositions;                                // 0x158(0x4)(None)
	uint8                                        Pad_92C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x160 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RadialVectorFieldDataflowNode
struct FRadialVectorFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Magnitude;                                         // 0x118(0x4)(None)
	uint8                                        Pad_92F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x120(0x18)(None)
	TArray<struct FVector>                       FieldVectorResult;                                 // 0x138(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                FieldRemap;                                        // 0x148(0x10)(None)
	int32                                        NumSamplePositions;                                // 0x158(0x4)(None)
	uint8                                        Pad_930[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x148 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RandomVectorFieldDataflowNode
struct FRandomVectorFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Magnitude;                                         // 0x118(0x4)(None)
	uint8                                        Pad_938[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       FieldVectorResult;                                 // 0x120(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                FieldRemap;                                        // 0x130(0x10)(None)
	int32                                        NumSamplePositions;                                // 0x140(0x4)(None)
	uint8                                        Pad_93A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0x1B0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.NoiseFieldDataflowNode
struct FNoiseFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        MinRange;                                          // 0x118(0x4)(None)
	float                                        MaxRange;                                          // 0x11C(0x4)(None)
	struct FTransform                            Transform;                                         // 0x120(0x60)(None)
	TArray<float>                                FieldFloatResult;                                  // 0x180(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                FieldRemap;                                        // 0x190(0x10)(None)
	int32                                        NumSamplePositions;                                // 0x1A0(0x4)(None)
	uint8                                        Pad_93F[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x148 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UniformIntegerFieldDataflowNode
struct FUniformIntegerFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(AutoWeak, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        Magnitude;                                         // 0x118(0x4)(None)
	uint8                                        Pad_941[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                FieldIntResult;                                    // 0x120(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                FieldRemap;                                        // 0x130(0x10)(None)
	int32                                        NumSamplePositions;                                // 0x140(0x4)(None)
	uint8                                        Pad_943[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0x188 - 0xE8)
// ScriptStruct GeometryCollectionNodes.WaveScalarFieldDataflowNode
struct FWaveScalarFieldDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector3f>                     SamplePositions;                                   // 0xE8(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowVertexSelection              SampleIndices;                                     // 0xF8(0x20)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Magnitude;                                         // 0x118(0x4)(None)
	uint8                                        Pad_949[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x120(0x18)(None)
	struct FVector                               Translation;                                       // 0x138(0x18)(None)
	float                                        Wavelength;                                        // 0x150(0x4)(None)
	float                                        Period;                                            // 0x154(0x4)(None)
	enum class EDataflowWaveFunctionType         FunctionType;                                      // 0x158(0x1)(None)
	enum class EDataflowFieldFalloffType         FalloffType;                                       // 0x159(0x1)(None)
	uint8                                        Pad_94D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                FieldFloatResult;                                  // 0x160(0x10)(BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                FieldRemap;                                        // 0x170(0x10)(None)
	int32                                        NumSamplePositions;                                // 0x180(0x4)(None)
	uint8                                        Pad_94E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x150 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SumScalarFieldDataflowNode
struct FSumScalarFieldDataflowNode : public FDataflowNode
{
public:
	TArray<float>                                FieldFloatLeft;                                    // 0xE8(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                FieldRemapLeft;                                    // 0xF8(0x10)(AutoWeak, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                FieldFloatRight;                                   // 0x108(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                FieldRemapRight;                                   // 0x118(0x10)(AutoWeak, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Magnitude;                                         // 0x128(0x4)(None)
	enum class EDataflowFloatFieldOperationType  Operation;                                         // 0x12C(0x1)(None)
	bool                                         bSwapInputs;                                       // 0x12D(0x1)(None)
	uint8                                        Pad_94F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                FieldFloatResult;                                  // 0x130(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                FieldRemap;                                        // 0x140(0x10)(None)
};

// 0x88 (0x170 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SumVectorFieldDataflowNode
struct FSumVectorFieldDataflowNode : public FDataflowNode
{
public:
	TArray<float>                                FieldFloat;                                        // 0xE8(0x10)(AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                FieldFloatRemap;                                   // 0xF8(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       FieldVectorLeft;                                   // 0x108(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                FieldRemapLeft;                                    // 0x118(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       FieldVectorRight;                                  // 0x128(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                FieldRemapRight;                                   // 0x138(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Magnitude;                                         // 0x148(0x4)(None)
	enum class EDataflowVectorFieldOperationType Operation;                                         // 0x14C(0x1)(None)
	bool                                         bSwapVectorInputs;                                 // 0x14D(0x1)(None)
	uint8                                        Pad_95B[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       FieldVectorResult;                                 // 0x150(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                FieldRemap;                                        // 0x160(0x10)(None)
};

// 0x38 (0x120 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FieldMakeDenseFloatArrayDataflowNode
struct FFieldMakeDenseFloatArrayDataflowNode : public FDataflowNode
{
public:
	TArray<float>                                FieldFloatInput;                                   // 0xE8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                FieldRemap;                                        // 0xF8(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        NumSamplePositions;                                // 0x108(0x4)(None)
	float                                        Default;                                           // 0x10C(0x4)(None)
	TArray<float>                                FieldFloatResult;                                  // 0x110(0x10)(None)
};

// 0xF8 (0x1E0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.AddMaterialToCollectionDataflowNode
struct FAddMaterialToCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowFaceSelection                FaceSelection;                                     // 0x198(0x20)(AutoWeak, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UMaterial*>                     Materials;                                         // 0x1B8(0x10)(ZeroConstructor)
	class UMaterial*                             OutsideMaterial;                                   // 0x1C8(0x8)(ZeroConstructor)
	class UMaterial*                             InsideMaterial;                                    // 0x1D0(0x8)(None)
	bool                                         bAssignOutsideMaterial;                            // 0x1D8(0x1)(None)
	bool                                         bAssignInsideMaterial;                             // 0x1D9(0x1)(None)
	uint8                                        Pad_960[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0x1D8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ReAssignMaterialInCollectionDataflowNode
struct FReAssignMaterialInCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(AdvancedDisplay, Protected, BlueprintCallable, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowFaceSelection                FaceSelection;                                     // 0x198(0x20)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UMaterial*>                     Materials;                                         // 0x1B8(0x10)(None)
	int32                                        OutsideMaterialIdx;                                // 0x1C8(0x4)(None)
	int32                                        InsideMaterialIdx;                                 // 0x1CC(0x4)(None)
	bool                                         bAssignOutsideMaterial;                            // 0x1D0(0x1)(None)
	bool                                         bAssignInsideMaterial;                             // 0x1D1(0x1)(None)
	uint8                                        Pad_968[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MaterialsInfoDataflowNode
struct FMaterialsInfoDataflowNode : public FDataflowNode
{
public:
	TArray<class UMaterial*>                     Materials;                                         // 0xE8(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                String;                                            // 0xF8(0x10)(None)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetMaterialFromMaterialsArrayDataflowNode
struct FGetMaterialFromMaterialsArrayDataflowNode : public FDataflowNode
{
public:
	TArray<class UMaterial*>                     Materials;                                         // 0xE8(0x10)(ZeroConstructor)
	class UMaterial*                             Material;                                          // 0xF8(0x8)(None)
	int32                                        MaterialIdx;                                       // 0x100(0x4)(None)
	uint8                                        Pad_96B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetMaterialInMaterialsArrayDataflowNode
struct FSetMaterialInMaterialsArrayDataflowNode : public FDataflowNode
{
public:
	TArray<class UMaterial*>                     Materials;                                         // 0xE8(0x10)(ZeroConstructor)
	class UMaterial*                             Material;                                          // 0xF8(0x8)(None)
	enum class ESetMaterialOperationTypeEnum     Operation;                                         // 0x100(0x1)(None)
	uint8                                        Pad_96F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaterialIdx;                                       // 0x104(0x4)(None)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeMaterialDataflowNode
struct FMakeMaterialDataflowNode : public FDataflowNode
{
public:
	class UMaterial*                             InMaterial;                                        // 0xE8(0x8)(ZeroConstructor)
	class UMaterial*                             Material;                                          // 0xF0(0x8)(None)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeMaterialsArrayDataflowNode
struct FMakeMaterialsArrayDataflowNode : public FDataflowNode
{
public:
	TArray<class UMaterial*>                     Materials;                                         // 0xE8(0x10)(None)
};

// 0xB0 (0x198 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CloseGeometryOnCollectionDataflowNode
struct FCloseGeometryOnCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(None)
};

// 0xB8 (0x1A0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SkeletonToCollectionDataflowNode
struct FSkeletonToCollectionDataflowNode : public FDataflowNode
{
public:
	class USkeleton*                             Skeleton;                                          // 0xE8(0x8)(None)
	struct FManagedArrayCollection               Collection;                                        // 0xF0(0xB0)(None)
};

// 0xC8 (0x1B0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CreateNonOverlappingConvexHullsDataflowNode
struct FCreateNonOverlappingConvexHullsDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(None)
	float                                        CanRemoveFraction;                                 // 0x198(0x4)(None)
	float                                        SimplificationDistanceThreshold;                   // 0x19C(0x4)(None)
	float                                        CanExceedFraction;                                 // 0x1A0(0x4)(None)
	enum class EConvexOverlapRemovalMethodEnum   OverlapRemovalMethod;                              // 0x1A4(0x1)(None)
	uint8                                        Pad_987[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OverlapRemovalShrinkPercent;                       // 0x1A8(0x4)(None)
	uint8                                        Pad_989[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE8 (0x1D0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.AutoClusterDataflowNode
struct FAutoClusterDataflowNode : public FDataflowNode
{
public:
	enum class EClusterSizeMethodEnum            ClusterSizeMethod;                                 // 0xE8(0x1)(None)
	uint8                                        Pad_98B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ClusterSites;                                      // 0xEC(0x4)(None)
	float                                        ClusterFraction;                                   // 0xF0(0x4)(None)
	float                                        SiteSize;                                          // 0xF4(0x4)(None)
	bool                                         AutoCluster;                                       // 0xF8(0x1)(None)
	bool                                         AvoidIsolated;                                     // 0xF9(0x1)(None)
	uint8                                        Pad_98F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FManagedArrayCollection               Collection;                                        // 0x100(0xB0)(AssetRegistrySearchable, BlueprintCallable, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1B0(0x20)(None)
};

// 0xB0 (0x198 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ClusterFlattenDataflowNode
struct FClusterFlattenDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(None)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PruneInCollectionDataflowNode
struct FPruneInCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(None)
};

// 0xF8 (0x1E0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetVisibilityInCollectionDataflowNode
struct FSetVisibilityInCollectionDataflowNode : public FDataflowNode
{
public:
	enum class EVisibiltyOptionsEnum             Visibility;                                        // 0xE8(0x1)(None)
	uint8                                        Pad_999[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FManagedArrayCollection               Collection;                                        // 0xF0(0xB0)(AdvancedDisplay, Protected, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A0(0x20)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowFaceSelection                FaceSelection;                                     // 0x1C0(0x20)(None)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MergeInCollectionDataflowNode
struct FMergeInCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(None)
};

// 0x58 (0x140 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UniformScatterPointsDataflowNode
struct FUniformScatterPointsDataflowNode : public FDataflowNode
{
public:
	int32                                        MinNumberOfPoints;                                 // 0xE8(0x4)(None)
	int32                                        MaxNumberOfPoints;                                 // 0xEC(0x4)(None)
	float                                        RandomSeed;                                        // 0xF0(0x4)(None)
	uint8                                        Pad_99F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox                                  BoundingBox;                                       // 0xF8(0x38)(None)
	TArray<struct FVector>                       Points;                                            // 0x130(0x10)(None)
};

// 0x58 (0x140 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RadialScatterPointsDataflowNode
struct FRadialScatterPointsDataflowNode : public FDataflowNode
{
public:
	struct FVector                               Center;                                            // 0xE8(0x18)(None)
	struct FVector                               Normal;                                            // 0x100(0x18)(None)
	float                                        Radius;                                            // 0x118(0x4)(None)
	int32                                        AngularSteps;                                      // 0x11C(0x4)(None)
	int32                                        RadialSteps;                                       // 0x120(0x4)(None)
	float                                        AngleOffset;                                       // 0x124(0x4)(None)
	float                                        Variability;                                       // 0x128(0x4)(None)
	float                                        RandomSeed;                                        // 0x12C(0x4)(None)
	TArray<struct FVector>                       Points;                                            // 0x130(0x10)(None)
};

// 0x110 (0x1F8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.VoronoiFractureDataflowNode
struct FVoronoiFractureDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(AutoWeak, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       Points;                                            // 0x198(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A8(0x20)(None)
	float                                        RandomSeed;                                        // 0x1C8(0x4)(None)
	float                                        ChanceToFracture;                                  // 0x1CC(0x4)(None)
	bool                                         GroupFracture;                                     // 0x1D0(0x1)(None)
	uint8                                        Pad_9A6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Grout;                                             // 0x1D4(0x4)(None)
	float                                        Amplitude;                                         // 0x1D8(0x4)(None)
	float                                        Frequency;                                         // 0x1DC(0x4)(None)
	float                                        Persistence;                                       // 0x1E0(0x4)(None)
	float                                        Lacunarity;                                        // 0x1E4(0x4)(None)
	int32                                        OctaveNumber;                                      // 0x1E8(0x4)(None)
	float                                        PointSpacing;                                      // 0x1EC(0x4)(None)
	bool                                         AddSamplesForCollision;                            // 0x1F0(0x1)(None)
	uint8                                        Pad_9A8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CollisionSampleSpacing;                            // 0x1F4(0x4)(None)
};

// 0x138 (0x220 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PlaneCutterDataflowNode
struct FPlaneCutterDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FBox                                  BoundingBox;                                       // 0x198(0x38)(None)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1D0(0x20)(None)
	int32                                        NumPlanes;                                         // 0x1F0(0x4)(None)
	float                                        RandomSeed;                                        // 0x1F4(0x4)(None)
	float                                        Grout;                                             // 0x1F8(0x4)(None)
	float                                        Amplitude;                                         // 0x1FC(0x4)(None)
	float                                        Frequency;                                         // 0x200(0x4)(None)
	float                                        Persistence;                                       // 0x204(0x4)(None)
	float                                        Lacunarity;                                        // 0x208(0x4)(None)
	int32                                        OctaveNumber;                                      // 0x20C(0x4)(None)
	float                                        PointSpacing;                                      // 0x210(0x4)(None)
	bool                                         AddSamplesForCollision;                            // 0x214(0x1)(None)
	uint8                                        Pad_9AB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CollisionSampleSpacing;                            // 0x218(0x4)(None)
	uint8                                        Pad_9AC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ExplodedViewDataflowNode
struct FExplodedViewDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(None)
	float                                        UniformScale;                                      // 0x198(0x4)(None)
	uint8                                        Pad_9AF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Scale;                                             // 0x1A0(0x18)(None)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PointsToMeshDataflowNode
struct FPointsToMeshDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector>                       Points;                                            // 0xE8(0x10)(None)
	class UDynamicMesh*                          Mesh;                                              // 0xF8(0x8)(None)
	int32                                        TriangleCount;                                     // 0x100(0x4)(None)
	uint8                                        Pad_9B3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x130 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoxToMeshDataflowNode
struct FBoxToMeshDataflowNode : public FDataflowNode
{
public:
	struct FBox                                  Box;                                               // 0xE8(0x38)(None)
	class UDynamicMesh*                          Mesh;                                              // 0x120(0x8)(None)
	int32                                        TriangleCount;                                     // 0x128(0x4)(None)
	uint8                                        Pad_9B5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshInfoDataflowNode
struct FMeshInfoDataflowNode : public FDataflowNode
{
public:
	class UDynamicMesh*                          Mesh;                                              // 0xE8(0x8)(None)
	class FString                                InfoString;                                        // 0xF0(0x10)(None)
};

// 0xB8 (0x1A0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshToCollectionDataflowNode
struct FMeshToCollectionDataflowNode : public FDataflowNode
{
public:
	class UDynamicMesh*                          Mesh;                                              // 0xE8(0x8)(None)
	struct FManagedArrayCollection               Collection;                                        // 0xF0(0xB0)(None)
};

// 0xC0 (0x1A8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionToMeshDataflowNode
struct FCollectionToMeshDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(None)
	bool                                         bCenterPivot;                                      // 0x198(0x1)(None)
	uint8                                        Pad_9BA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          Mesh;                                              // 0x1A0(0x8)(None)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.StaticMeshToMeshDataflowNode
struct FStaticMeshToMeshDataflowNode : public FDataflowNode
{
public:
	class UStaticMesh*                           StaticMesh;                                        // 0xE8(0x8)(ZeroConstructor)
	bool                                         bUseHiRes;                                         // 0xF0(0x1)(None)
	uint8                                        Pad_9D7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LODLevel;                                          // 0xF4(0x4)(None)
	class UDynamicMesh*                          Mesh;                                              // 0xF8(0x8)(None)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshAppendDataflowNode
struct FMeshAppendDataflowNode : public FDataflowNode
{
public:
	class UDynamicMesh*                          Mesh1;                                             // 0xE8(0x8)(ZeroConstructor)
	class UDynamicMesh*                          Mesh2;                                             // 0xF0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          Mesh;                                              // 0xF8(0x8)(None)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshBooleanDataflowNode
struct FMeshBooleanDataflowNode : public FDataflowNode
{
public:
	enum class EMeshBooleanOperationEnum         Operation;                                         // 0xE8(0x1)(None)
	uint8                                        Pad_9DB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          Mesh1;                                             // 0xF0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          Mesh2;                                             // 0xF8(0x8)(ZeroConstructor)
	class UDynamicMesh*                          Mesh;                                              // 0x100(0x8)(None)
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MeshCopyToPointsDataflowNode
struct FMeshCopyToPointsDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector>                       Points;                                            // 0xE8(0x10)(None)
	class UDynamicMesh*                          MeshToCopy;                                        // 0xF8(0x8)(ZeroConstructor)
	float                                        Scale;                                             // 0x100(0x4)(None)
	uint8                                        Pad_9DD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          Mesh;                                              // 0x108(0x8)(None)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetMeshDataDataflowNode
struct FGetMeshDataDataflowNode : public FDataflowNode
{
public:
	class UDynamicMesh*                          Mesh;                                              // 0xE8(0x8)(None)
	int32                                        Vertexcount;                                       // 0xF0(0x4)(None)
	int32                                        EdgeCount;                                         // 0xF4(0x4)(None)
	int32                                        TriangleCount;                                     // 0xF8(0x4)(None)
	uint8                                        Pad_9E7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0x1A0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetCollectionFromAssetDataflowNode
struct FGetCollectionFromAssetDataflowNode : public FDataflowNode
{
public:
	class UGeometryCollection*                   CollectionAsset;                                   // 0xE8(0x8)(None)
	struct FManagedArrayCollection               Collection;                                        // 0xF0(0xB0)(None)
};

// 0x180 (0x268 - 0xE8)
// ScriptStruct GeometryCollectionNodes.AppendCollectionAssetsDataflowNode
struct FAppendCollectionAssetsDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection1;                                       // 0xE8(0xB0)(ContainsInstancedReference, SimpleDisplay, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FManagedArrayCollection               Collection2;                                       // 0x198(0xB0)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        GeometryGroupGuidsOut1;                            // 0x248(0x10)(AutoWeak, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        GeometryGroupGuidsOut2;                            // 0x258(0x10)(None)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.PrintStringDataflowNode
struct FPrintStringDataflowNode : public FDataflowNode
{
public:
	bool                                         bPrintToScreen;                                    // 0xE8(0x1)(None)
	bool                                         bPrintToLog;                                       // 0xE9(0x1)(None)
	uint8                                        Pad_9FE[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                Color;                                             // 0xEC(0x4)(None)
	float                                        Duration;                                          // 0xF0(0x4)(None)
	uint8                                        Pad_9FF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                String;                                            // 0xF8(0x10)(None)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.LogStringDataflowNode
struct FLogStringDataflowNode : public FDataflowNode
{
public:
	bool                                         bPrintToLog;                                       // 0xE8(0x1)(None)
	uint8                                        Pad_A0D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                String;                                            // 0xF0(0x10)(None)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeLiteralStringDataflowNode
struct FMakeLiteralStringDataflowNode : public FDataflowNode
{
public:
	class FString                                Value;                                             // 0xE8(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                String;                                            // 0xF8(0x10)(None)
};

// 0xE8 (0x1D0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoundingBoxDataflowNode
struct FBoundingBoxDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(None)
	struct FBox                                  BoundingBox;                                       // 0x198(0x38)(None)
};

// 0xA0 (0x188 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ExpandBoundingBoxDataflowNode
struct FExpandBoundingBoxDataflowNode : public FDataflowNode
{
public:
	struct FBox                                  BoundingBox;                                       // 0xE8(0x38)(None)
	struct FVector                               Min;                                               // 0x120(0x18)(None)
	struct FVector                               Max;                                               // 0x138(0x18)(None)
	struct FVector                               Center;                                            // 0x150(0x18)(None)
	struct FVector                               HalfExtents;                                       // 0x168(0x18)(None)
	float                                        Volume;                                            // 0x180(0x4)(None)
	uint8                                        Pad_A13[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.VectorToStringDataflowNode
struct FVectorToStringDataflowNode : public FDataflowNode
{
public:
	struct FVector                               Vector;                                            // 0xE8(0x18)(None)
	class FString                                String;                                            // 0x100(0x10)(None)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatToStringDataflowNode
struct FFloatToStringDataflowNode : public FDataflowNode
{
public:
	float                                        Float;                                             // 0xE8(0x4)(None)
	uint8                                        Pad_A14[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                String;                                            // 0xF0(0x10)(None)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakePointsDataflowNode
struct FMakePointsDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector>                       Point;                                             // 0xE8(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       Points;                                            // 0xF8(0x10)(None)
};

// 0xA0 (0x188 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeBoxDataflowNode
struct FMakeBoxDataflowNode : public FDataflowNode
{
public:
	enum class EMakeBoxDataTypeEnum              DataType;                                          // 0xE8(0x1)(None)
	uint8                                        Pad_A18[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Min;                                               // 0xF0(0x18)(None)
	struct FVector                               Max;                                               // 0x108(0x18)(None)
	struct FVector                               Center;                                            // 0x120(0x18)(None)
	struct FVector                               Size;                                              // 0x138(0x18)(None)
	struct FBox                                  Box;                                               // 0x150(0x38)(None)
};

// 0x40 (0x128 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeSphereDataflowNode
struct FMakeSphereDataflowNode : public FDataflowNode
{
public:
	struct FVector                               Center;                                            // 0xE8(0x18)(None)
	float                                        Radius;                                            // 0x100(0x4)(None)
	uint8                                        Pad_A19[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSphere                               Sphere;                                            // 0x108(0x20)(None)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeLiteralFloatDataflowNode
struct FMakeLiteralFloatDataflowNode : public FDataflowNode
{
public:
	float                                        Value;                                             // 0xE8(0x4)(None)
	float                                        Float;                                             // 0xEC(0x4)(None)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeLiteralIntDataflowNode
struct FMakeLiteralIntDataflowNode : public FDataflowNode
{
public:
	int32                                        Value;                                             // 0xE8(0x4)(None)
	int32                                        Int;                                               // 0xEC(0x4)(None)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeLiteralBoolDataflowNode
struct FMakeLiteralBoolDataflowNode : public FDataflowNode
{
public:
	bool                                         Value;                                             // 0xE8(0x1)(None)
	bool                                         Bool;                                              // 0xE9(0x1)(None)
	uint8                                        Pad_A1C[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeLiteralVectorDataflowNode
struct FMakeLiteralVectorDataflowNode : public FDataflowNode
{
public:
	float                                        X;                                                 // 0xE8(0x4)(None)
	float                                        Y;                                                 // 0xEC(0x4)(None)
	float                                        Z;                                                 // 0xF0(0x4)(None)
	uint8                                        Pad_A1E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Vector;                                            // 0xF8(0x18)(None)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.IntToStringDataflowNode
struct FIntToStringDataflowNode : public FDataflowNode
{
public:
	int32                                        Int;                                               // 0xE8(0x4)(None)
	uint8                                        Pad_A22[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                String;                                            // 0xF0(0x10)(None)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoolToStringDataflowNode
struct FBoolToStringDataflowNode : public FDataflowNode
{
public:
	bool                                         Bool;                                              // 0xE8(0x1)(None)
	uint8                                        Pad_A23[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                String;                                            // 0xF0(0x10)(None)
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ExpandVectorDataflowNode
struct FExpandVectorDataflowNode : public FDataflowNode
{
public:
	struct FVector                               Vector;                                            // 0xE8(0x18)(None)
	float                                        X;                                                 // 0x100(0x4)(None)
	float                                        Y;                                                 // 0x104(0x4)(None)
	float                                        Z;                                                 // 0x108(0x4)(None)
	uint8                                        Pad_A24[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.IntToFloatDataflowNode
struct FIntToFloatDataflowNode : public FDataflowNode
{
public:
	int32                                        Int;                                               // 0xE8(0x4)(None)
	float                                        Float;                                             // 0xEC(0x4)(None)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.StringAppendDataflowNode
struct FStringAppendDataflowNode : public FDataflowNode
{
public:
	class FString                                String1;                                           // 0xE8(0x10)(AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                String2;                                           // 0xF8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                String;                                            // 0x108(0x10)(None)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RandomFloatDataflowNode
struct FRandomFloatDataflowNode : public FDataflowNode
{
public:
	bool                                         bDeterministic;                                    // 0xE8(0x1)(None)
	uint8                                        Pad_A26[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomSeed;                                        // 0xEC(0x4)(None)
	float                                        Float;                                             // 0xF0(0x4)(None)
	uint8                                        Pad_A27[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RandomFloatInRangeDataflowNode
struct FRandomFloatInRangeDataflowNode : public FDataflowNode
{
public:
	bool                                         bDeterministic;                                    // 0xE8(0x1)(None)
	uint8                                        Pad_A28[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomSeed;                                        // 0xEC(0x4)(None)
	float                                        Min;                                               // 0xF0(0x4)(None)
	float                                        Max;                                               // 0xF4(0x4)(None)
	float                                        Float;                                             // 0xF8(0x4)(None)
	uint8                                        Pad_A2A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RandomUnitVectorDataflowNode
struct FRandomUnitVectorDataflowNode : public FDataflowNode
{
public:
	bool                                         bDeterministic;                                    // 0xE8(0x1)(None)
	uint8                                        Pad_A2B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomSeed;                                        // 0xEC(0x4)(None)
	struct FVector                               Vector;                                            // 0xF0(0x18)(None)
};

// 0x40 (0x128 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RandomUnitVectorInConeDataflowNode
struct FRandomUnitVectorInConeDataflowNode : public FDataflowNode
{
public:
	bool                                         bDeterministic;                                    // 0xE8(0x1)(None)
	uint8                                        Pad_A2C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomSeed;                                        // 0xEC(0x4)(None)
	struct FVector                               ConeDirection;                                     // 0xF0(0x18)(None)
	float                                        ConeHalfAngle;                                     // 0x108(0x4)(None)
	uint8                                        Pad_A2D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Vector;                                            // 0x110(0x18)(None)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RadiansToDegreesDataflowNode
struct FRadiansToDegreesDataflowNode : public FDataflowNode
{
public:
	float                                        Radians;                                           // 0xE8(0x4)(None)
	float                                        Degrees;                                           // 0xEC(0x4)(None)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.DegreesToRadiansDataflowNode
struct FDegreesToRadiansDataflowNode : public FDataflowNode
{
public:
	float                                        Degrees;                                           // 0xE8(0x4)(None)
	float                                        Radians;                                           // 0xEC(0x4)(None)
};

// 0x18 (0x100 - 0xE8)
// ScriptStruct GeometryCollectionNodes.HashStringDataflowNode
struct FHashStringDataflowNode : public FDataflowNode
{
public:
	class FString                                String;                                            // 0xE8(0x10)(None)
	int32                                        Hash;                                              // 0xF8(0x4)(None)
	uint8                                        Pad_A2F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.HashVectorDataflowNode
struct FHashVectorDataflowNode : public FDataflowNode
{
public:
	struct FVector                               Vector;                                            // 0xE8(0x18)(None)
	int32                                        Hash;                                              // 0x100(0x4)(None)
	uint8                                        Pad_A30[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatToIntDataflowNode
struct FFloatToIntDataflowNode : public FDataflowNode
{
public:
	enum class EFloatToIntFunctionEnum           Function;                                          // 0xE8(0x1)(None)
	uint8                                        Pad_A31[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Float;                                             // 0xEC(0x4)(None)
	int32                                        Int;                                               // 0xF0(0x4)(None)
	uint8                                        Pad_A32[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatArrayToIntArrayDataflowNode
struct FFloatArrayToIntArrayDataflowNode : public FDataflowNode
{
public:
	enum class EFloatArrayToIntArrayFunctionEnum Function;                                          // 0xE8(0x1)(None)
	uint8                                        Pad_A35[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                FloatArray;                                        // 0xF0(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                IntArray;                                          // 0x100(0x10)(None)
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MathConstantsDataflowNode
struct FMathConstantsDataflowNode : public FDataflowNode
{
public:
	enum class EMathConstantsEnum                Constant;                                          // 0xE8(0x1)(None)
	uint8                                        Pad_A36[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Float;                                             // 0xEC(0x4)(None)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetArrayElementDataflowNode
struct FGetArrayElementDataflowNode : public FDataflowNode
{
public:
	int32                                        Index;                                             // 0xE8(0x4)(None)
	uint8                                        Pad_A37[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       Points;                                            // 0xF0(0x10)(None)
	struct FVector                               Point;                                             // 0x100(0x18)(None)
};

// 0x28 (0x110 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetNumArrayElementsDataflowNode
struct FGetNumArrayElementsDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector>                       Points;                                            // 0xE8(0x10)(AutoWeak, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector3f>                     Vector3fArray;                                     // 0xF8(0x10)(None)
	int32                                        NumElements;                                       // 0x108(0x4)(None)
	uint8                                        Pad_A38[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetBoundingBoxesFromCollectionDataflowNode
struct FGetBoundingBoxesFromCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FBox>                          BoundingBoxes;                                     // 0x1B8(0x10)(None)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetCentroidsFromCollectionDataflowNode
struct FGetCentroidsFromCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       Centroids;                                         // 0x1B8(0x10)(None)
};

// 0x140 (0x228 - 0xE8)
// ScriptStruct GeometryCollectionNodes.TransformCollectionDataflowNode
struct FTransformCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(None)
	struct FVector                               Translate;                                         // 0x198(0x18)(None)
	enum class ERotationOrderEnum                RotationOrder;                                     // 0x1B0(0x1)(None)
	uint8                                        Pad_A50[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Rotate;                                            // 0x1B8(0x18)(None)
	struct FVector                               Scale;                                             // 0x1D0(0x18)(None)
	float                                        UniformScale;                                      // 0x1E8(0x4)(None)
	uint8                                        Pad_A51[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RotatePivot;                                       // 0x1F0(0x18)(None)
	struct FVector                               ScalePivot;                                        // 0x208(0x18)(None)
	bool                                         bInvertTransformation;                             // 0x220(0x1)(None)
	uint8                                        Pad_A52[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0x198 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BakeTransformsInCollectionDataflowNode
struct FBakeTransformsInCollectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(None)
};

// 0x98 (0x180 - 0xE8)
// ScriptStruct GeometryCollectionNodes.TransformMeshDataflowNode
struct FTransformMeshDataflowNode : public FDataflowNode
{
public:
	class UDynamicMesh*                          Mesh;                                              // 0xE8(0x8)(None)
	struct FVector                               Translate;                                         // 0xF0(0x18)(None)
	enum class ERotationOrderEnum                RotationOrder;                                     // 0x108(0x1)(None)
	uint8                                        Pad_A54[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Rotate;                                            // 0x110(0x18)(None)
	struct FVector                               Scale;                                             // 0x128(0x18)(None)
	float                                        UniformScale;                                      // 0x140(0x4)(None)
	uint8                                        Pad_A55[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RotatePivot;                                       // 0x148(0x18)(None)
	struct FVector                               ScalePivot;                                        // 0x160(0x18)(None)
	bool                                         bInvertTransformation;                             // 0x178(0x1)(None)
	uint8                                        Pad_A56[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CompareIntDataflowNode
struct FCompareIntDataflowNode : public FDataflowNode
{
public:
	enum class ECompareOperationEnum             Operation;                                         // 0xE8(0x1)(None)
	uint8                                        Pad_A57[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IntA;                                              // 0xEC(0x4)(None)
	int32                                        IntB;                                              // 0xF0(0x4)(None)
	bool                                         Result;                                            // 0xF4(0x1)(None)
	uint8                                        Pad_A59[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BranchDataflowNode
struct FBranchDataflowNode : public FDataflowNode
{
public:
	class UDynamicMesh*                          MeshA;                                             // 0xE8(0x8)(ZeroConstructor)
	class UDynamicMesh*                          MeshB;                                             // 0xF0(0x8)(ZeroConstructor)
	bool                                         bCondition;                                        // 0xF8(0x1)(None)
	uint8                                        Pad_A5B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          Mesh;                                              // 0x100(0x8)(None)
};

// 0xC0 (0x1A8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetSchemaDataflowNode
struct FGetSchemaDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                String;                                            // 0x198(0x10)(None)
};

// 0xE8 (0x1D0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.RemoveOnBreakDataflowNode
struct FRemoveOnBreakDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(None)
	bool                                         bEnabledRemoval;                                   // 0x1B8(0x1)(None)
	uint8                                        Pad_A5D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2f                             PostBreakTimer;                                    // 0x1BC(0x8)(None)
	struct FVector2f                             RemovalTimer;                                      // 0x1C4(0x8)(None)
	bool                                         bClusterCrumbling;                                 // 0x1CC(0x1)(None)
	uint8                                        Pad_A5E[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0x1C0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetAnchorStateDataflowNode
struct FSetAnchorStateDataflowNode : public FDataflowNode
{
public:
	enum class EAnchorStateEnum                  AnchorState;                                       // 0xE8(0x1)(None)
	bool                                         bSetNotSelectedBonesToOppositeState;               // 0xE9(0x1)(None)
	uint8                                        Pad_A5F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FManagedArrayCollection               Collection;                                        // 0xF0(0xB0)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A0(0x20)(None)
};

// 0xC0 (0x1A8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.ProximityDataflowNode
struct FProximityDataflowNode : public FDataflowNode
{
public:
	enum class EProximityMethodEnum              ProximityMethod;                                   // 0xE8(0x1)(None)
	uint8                                        Pad_A63[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistanceThreshold;                                 // 0xEC(0x4)(None)
	float                                        ContactThreshold;                                  // 0xF0(0x4)(None)
	bool                                         bUseAsConnectionGraph;                             // 0xF4(0x1)(None)
	uint8                                        Pad_A64[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FManagedArrayCollection               Collection;                                        // 0xF8(0xB0)(None)
};

// 0x118 (0x200 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionSetPivotDataflowNode
struct FCollectionSetPivotDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(None)
	uint8                                        Pad_A66[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x1A0(0x60)(None)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.AddCustomCollectionAttributeDataflowNode
struct FAddCustomCollectionAttributeDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class EStandardGroupNameEnum            GroupName;                                         // 0x198(0x1)(None)
	uint8                                        Pad_A67[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomGroupName;                                   // 0x1A0(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                AttrName;                                          // 0x1B0(0x10)(None)
	enum class ECustomAttributeTypeEnum          CustomAttributeType;                               // 0x1C0(0x1)(None)
	uint8                                        Pad_A68[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumElements;                                       // 0x1C4(0x4)(None)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetNumElementsInCollectionGroupDataflowNode
struct FGetNumElementsInCollectionGroupDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class EStandardGroupNameEnum            GroupName;                                         // 0x198(0x1)(None)
	uint8                                        Pad_A69[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomGroupName;                                   // 0x1A0(0x10)(None)
	int32                                        NumElements;                                       // 0x1B0(0x4)(None)
	uint8                                        Pad_A6A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x148 (0x230 - 0xE8)
// ScriptStruct GeometryCollectionNodes.GetCollectionAttributeDataTypedDataflowNode
struct FGetCollectionAttributeDataTypedDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class EStandardGroupNameEnum            GroupName;                                         // 0x198(0x1)(None)
	uint8                                        Pad_A6B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomGroupName;                                   // 0x1A0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                AttrName;                                          // 0x1B0(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<bool>                                 BoolAttributeData;                                 // 0x1C0(0x10)(Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                FloatAttributeData;                                // 0x1D0(0x10)(ContainsInstancedReference, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<double>                               DoubleAttributeData;                               // 0x1E0(0x10)(AutoWeak, AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                Int32AttributeData;                                // 0x1F0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        StringAttributeData;                               // 0x200(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector3f>                     Vector3fAttributeData;                             // 0x210(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector3d>                     Vector3dAttributeData;                             // 0x220(0x10)(None)
};

// 0x148 (0x230 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetCollectionAttributeDataTypedDataflowNode
struct FSetCollectionAttributeDataTypedDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class EStandardGroupNameEnum            GroupName;                                         // 0x198(0x1)(None)
	uint8                                        Pad_A70[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomGroupName;                                   // 0x1A0(0x10)(AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                AttrName;                                          // 0x1B0(0x10)(AutoWeak, SimpleDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<bool>                                 BoolAttributeData;                                 // 0x1C0(0x10)(AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                FloatAttributeData;                                // 0x1D0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<double>                               DoubleAttributeData;                               // 0x1E0(0x10)(AutoWeak, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                Int32AttributeData;                                // 0x1F0(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        StringAttributeData;                               // 0x200(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector3f>                     Vector3fAttributeData;                             // 0x210(0x10)(SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector3d>                     Vector3dAttributeData;                             // 0x220(0x10)(None)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.BoolArrayToFaceSelectionDataflowNode
struct FBoolArrayToFaceSelectionDataflowNode : public FDataflowNode
{
public:
	TArray<bool>                                 BoolAttributeData;                                 // 0xE8(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowFaceSelection                FaceSelection;                                     // 0xF8(0x20)(None)
};

// 0x38 (0x120 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatArrayToVertexSelectionDataflowNode
struct FFloatArrayToVertexSelectionDataflowNode : public FDataflowNode
{
public:
	TArray<float>                                FloatArray;                                        // 0xE8(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ECompareOperationEnum             Operation;                                         // 0xF8(0x1)(None)
	uint8                                        Pad_A72[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Threshold;                                         // 0xFC(0x4)(None)
	struct FDataflowVertexSelection              VertexSelection;                                   // 0x100(0x20)(None)
};

// 0xF0 (0x1D8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetVertexColorInCollectionFromVertexSelectionDataflowNode
struct FSetVertexColorInCollectionFromVertexSelectionDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowVertexSelection              VertexSelection;                                   // 0x198(0x20)(None)
	struct FLinearColor                          SelectedColor;                                     // 0x1B8(0x10)(None)
	struct FLinearColor                          NonSelectedColor;                                  // 0x1C8(0x10)(None)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SelectionToVertexListDataflowNode
struct FSelectionToVertexListDataflowNode : public FDataflowNode
{
public:
	struct FDataflowVertexSelection              VertexSelection;                                   // 0xE8(0x20)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                VertexList;                                        // 0x108(0x10)(None)
};

// 0xA8 (0x190 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeTransformDataflowNode
struct FMakeTransformDataflowNode : public FDataflowNode
{
public:
	struct FVector                               InTranslation;                                     // 0xE8(0x18)(None)
	struct FVector                               InRotation;                                        // 0x100(0x18)(None)
	struct FVector                               InScale;                                           // 0x118(0x18)(None)
	struct FTransform                            OutTransform;                                      // 0x130(0x60)(None)
};

// 0xC8 (0x1B0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.SetVertexColorInCollectionFromFloatArrayDataflowNode
struct FSetVertexColorInCollectionFromFloatArrayDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                FloatArray;                                        // 0x198(0x10)(None)
	float                                        Scale;                                             // 0x1A8(0x4)(None)
	uint8                                        Pad_A76[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x130 - 0xE8)
// ScriptStruct GeometryCollectionNodes.FloatArrayNormalizeDataflowNode
struct FFloatArrayNormalizeDataflowNode : public FDataflowNode
{
public:
	TArray<float>                                InFloatArray;                                      // 0xE8(0x10)(AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowVertexSelection              Selection;                                         // 0xF8(0x20)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        MinRange;                                          // 0x118(0x4)(None)
	float                                        MaxRange;                                          // 0x11C(0x4)(None)
	TArray<float>                                OutFloatArray;                                     // 0x120(0x10)(None)
};

// 0x48 (0x130 - 0xE8)
// ScriptStruct GeometryCollectionNodes.VectorArrayNormalizeDataflowNode
struct FVectorArrayNormalizeDataflowNode : public FDataflowNode
{
public:
	TArray<struct FVector>                       InVectorArray;                                     // 0xE8(0x10)(AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowVertexSelection              Selection;                                         // 0xF8(0x20)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Magnitude;                                         // 0x118(0x4)(None)
	uint8                                        Pad_A8C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       OutVectorArray;                                    // 0x120(0x10)(None)
};

// 0x128 (0x210 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MultiplyTransformDataflowNode
struct FMultiplyTransformDataflowNode : public FDataflowNode
{
public:
	uint8                                        Pad_AB0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InLeftTransform;                                   // 0xF0(0x60)(None)
	struct FTransform                            InRightTransform;                                  // 0x150(0x60)(None)
	struct FTransform                            OutTransform;                                      // 0x1B0(0x60)(None)
};

// 0xC8 (0x1B0 - 0xE8)
// ScriptStruct GeometryCollectionNodes.InvertTransformDataflowNode
struct FInvertTransformDataflowNode : public FDataflowNode
{
public:
	uint8                                        Pad_AB1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InTransform;                                       // 0xF0(0x60)(None)
	struct FTransform                            OutTransform;                                      // 0x150(0x60)(None)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.UnionIntArraysDataflowNode
struct FUnionIntArraysDataflowNode : public FDataflowNode
{
public:
	TArray<int32>                                InArray1;                                          // 0xE8(0x10)(AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                InArray2;                                          // 0xF8(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                OutArray;                                          // 0x108(0x10)(None)
};

// 0x38 (0x120 - 0xE8)
// ScriptStruct GeometryCollectionNodes.MakeQuaternionDataflowNode
struct FMakeQuaternionDataflowNode : public FDataflowNode
{
public:
	float                                        X;                                                 // 0xE8(0x4)(None)
	float                                        Y;                                                 // 0xEC(0x4)(None)
	float                                        Z;                                                 // 0xF0(0x4)(None)
	float                                        W;                                                 // 0xF4(0x4)(None)
	uint8                                        Pad_AD7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Quaternion;                                        // 0x100(0x20)(None)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionAllDataflowNode
struct FCollectionTransformSelectionAllDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(None)
};

// 0x68 (0x150 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionSetOperationDataflowNode
struct FCollectionTransformSelectionSetOperationDataflowNode : public FDataflowNode
{
public:
	enum class ESetOperationEnum                 Operation;                                         // 0xE8(0x1)(None)
	uint8                                        Pad_ADB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataflowTransformSelection           TransformSelectionA;                               // 0xF0(0x20)(SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowTransformSelection           TransformSelectionB;                               // 0x110(0x20)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x130(0x20)(None)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInfoDataflowNode
struct FCollectionTransformSelectionInfoDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FManagedArrayCollection               Collection;                                        // 0x108(0xB0)(ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                String;                                            // 0x1B8(0x10)(None)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionNoneDataflowNode
struct FCollectionTransformSelectionNoneDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(None)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInvertDataflowNode
struct FCollectionTransformSelectionInvertDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(None)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionRandomDataflowNode
struct FCollectionTransformSelectionRandomDataflowNode : public FDataflowNode
{
public:
	bool                                         bDeterministic;                                    // 0xE8(0x1)(None)
	uint8                                        Pad_ADC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomSeed;                                        // 0xEC(0x4)(None)
	float                                        RandomThreshold;                                   // 0xF0(0x4)(None)
	uint8                                        Pad_ADD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FManagedArrayCollection               Collection;                                        // 0xF8(0xB0)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A8(0x20)(None)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionRootDataflowNode
struct FCollectionTransformSelectionRootDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(None)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionCustomDataflowNode
struct FCollectionTransformSelectionCustomDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                BoneIndicies;                                      // 0x198(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A8(0x20)(None)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionParentDataflowNode
struct FCollectionTransformSelectionParentDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FManagedArrayCollection               Collection;                                        // 0x108(0xB0)(None)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByPercentageDataflowNode
struct FCollectionTransformSelectionByPercentageDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(None)
	int32                                        Percentage;                                        // 0x108(0x4)(None)
	bool                                         bDeterministic;                                    // 0x10C(0x1)(None)
	uint8                                        Pad_AF6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomSeed;                                        // 0x110(0x4)(None)
	uint8                                        Pad_AF7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionChildrenDataflowNode
struct FCollectionTransformSelectionChildrenDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FManagedArrayCollection               Collection;                                        // 0x108(0xB0)(None)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionSiblingsDataflowNode
struct FCollectionTransformSelectionSiblingsDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FManagedArrayCollection               Collection;                                        // 0x108(0xB0)(None)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionLevelDataflowNode
struct FCollectionTransformSelectionLevelDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FManagedArrayCollection               Collection;                                        // 0x108(0xB0)(None)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionContactDataflowNode
struct FCollectionTransformSelectionContactDataflowNode : public FDataflowNode
{
public:
	struct FDataflowTransformSelection           TransformSelection;                                // 0xE8(0x20)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FManagedArrayCollection               Collection;                                        // 0x108(0xB0)(None)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionLeafDataflowNode
struct FCollectionTransformSelectionLeafDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, SimpleDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(None)
};

// 0xD0 (0x1B8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionClusterDataflowNode
struct FCollectionTransformSelectionClusterDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, AssetRegistrySearchable, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(None)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionBySizeDataflowNode
struct FCollectionTransformSelectionBySizeDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        SizeMin;                                           // 0x198(0x4)(None)
	float                                        SizeMax;                                           // 0x19C(0x4)(None)
	enum class ERangeSettingEnum                 RangeSetting;                                      // 0x1A0(0x1)(None)
	bool                                         bInclusive;                                        // 0x1A1(0x1)(None)
	uint8                                        Pad_B21[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A8(0x20)(None)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByVolumeDataflowNode
struct FCollectionTransformSelectionByVolumeDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        VolumeMin;                                         // 0x198(0x4)(None)
	float                                        VolumeMax;                                         // 0x19C(0x4)(None)
	enum class ERangeSettingEnum                 RangeSetting;                                      // 0x1A0(0x1)(None)
	bool                                         bInclusive;                                        // 0x1A1(0x1)(None)
	uint8                                        Pad_B22[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1A8(0x20)(None)
};

// 0x178 (0x260 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInBoxDataflowNode
struct FCollectionTransformSelectionInBoxDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FBox                                  Box;                                               // 0x198(0x38)(None)
	struct FTransform                            Transform;                                         // 0x1D0(0x60)(None)
	enum class ESelectSubjectTypeEnum            Type;                                              // 0x230(0x1)(None)
	bool                                         bAllVerticesMustContainedInBox;                    // 0x231(0x1)(None)
	uint8                                        Pad_B44[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataflowTransformSelection           TransformSelection;                                // 0x238(0x20)(None)
	uint8                                        Pad_B45[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x168 (0x250 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInSphereDataflowNode
struct FCollectionTransformSelectionInSphereDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSphere                               Sphere;                                            // 0x198(0x20)(None)
	uint8                                        Pad_B46[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x1C0(0x60)(None)
	enum class ESelectSubjectTypeEnum            Type;                                              // 0x220(0x1)(None)
	bool                                         bAllVerticesMustContainedInSphere;                 // 0x221(0x1)(None)
	uint8                                        Pad_B47[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataflowTransformSelection           TransformSelection;                                // 0x228(0x20)(None)
	uint8                                        Pad_B48[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x1E8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByFloatAttrDataflowNode
struct FCollectionTransformSelectionByFloatAttrDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                GroupName;                                         // 0x198(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                AttrName;                                          // 0x1A8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Min;                                               // 0x1B8(0x4)(None)
	float                                        Max;                                               // 0x1BC(0x4)(None)
	enum class ERangeSettingEnum                 RangeSetting;                                      // 0x1C0(0x1)(None)
	bool                                         bInclusive;                                        // 0x1C1(0x1)(None)
	uint8                                        Pad_B4B[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1C8(0x20)(None)
};

// 0x100 (0x1E8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByIntAttrDataflowNode
struct FCollectionTransformSelectionByIntAttrDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                GroupName;                                         // 0x198(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                AttrName;                                          // 0x1A8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        Min;                                               // 0x1B8(0x4)(None)
	int32                                        Max;                                               // 0x1BC(0x4)(None)
	enum class ERangeSettingEnum                 RangeSetting;                                      // 0x1C0(0x1)(None)
	bool                                         bInclusive;                                        // 0x1C1(0x1)(None)
	uint8                                        Pad_B4D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataflowTransformSelection           TransformSelection;                                // 0x1C8(0x20)(None)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionVertexSelectionCustomDataflowNode
struct FCollectionVertexSelectionCustomDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                VertexIndicies;                                    // 0x198(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowVertexSelection              VertexSelection;                                   // 0x1A8(0x20)(None)
};

// 0xE0 (0x1C8 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionFaceSelectionCustomDataflowNode
struct FCollectionFaceSelectionCustomDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                FaceIndicies;                                      // 0x198(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowFaceSelection                FaceSelection;                                     // 0x1A8(0x20)(None)
};

// 0x118 (0x200 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionSelectionConvertDataflowNode
struct FCollectionSelectionConvertDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowTransformSelection           TransformSelection;                                // 0x198(0x20)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowFaceSelection                FaceSelection;                                     // 0x1B8(0x20)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowVertexSelection              VertexSelection;                                   // 0x1D8(0x20)(None)
	bool                                         bAllElementsMustBeSelected;                        // 0x1F8(0x1)(None)
	uint8                                        Pad_B55[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionFaceSelectionInvertDataflowNode
struct FCollectionFaceSelectionInvertDataflowNode : public FDataflowNode
{
public:
	struct FDataflowFaceSelection                FaceSelection;                                     // 0xE8(0x20)(None)
};

// 0x30 (0x118 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionVertexSelectionByPercentageDataflowNode
struct FCollectionVertexSelectionByPercentageDataflowNode : public FDataflowNode
{
public:
	struct FDataflowVertexSelection              VertexSelection;                                   // 0xE8(0x20)(None)
	int32                                        Percentage;                                        // 0x108(0x4)(None)
	bool                                         bDeterministic;                                    // 0x10C(0x1)(None)
	uint8                                        Pad_B59[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomSeed;                                        // 0x110(0x4)(None)
	uint8                                        Pad_B5A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x150 - 0xE8)
// ScriptStruct GeometryCollectionNodes.CollectionVertexSelectionSetOperationDataflowNode
struct FCollectionVertexSelectionSetOperationDataflowNode : public FDataflowNode
{
public:
	enum class ESetOperationEnum                 Operation;                                         // 0xE8(0x1)(None)
	uint8                                        Pad_B5B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataflowVertexSelection              VertexSelectionA;                                  // 0xF0(0x20)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowVertexSelection              VertexSelectionB;                                  // 0x110(0x20)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FDataflowVertexSelection              VertexSelection;                                   // 0x130(0x20)(None)
};

// 0x198 (0x280 - 0xE8)
// ScriptStruct GeometryCollectionNodes.TransformCollectionAttributeDataflowNode
struct FTransformCollectionAttributeDataflowNode : public FDataflowNode
{
public:
	struct FManagedArrayCollection               Collection;                                        // 0xE8(0xB0)(AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B5E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TransformIn;                                       // 0x1A0(0x60)(None)
	struct FTransform                            LocalTransform;                                    // 0x200(0x60)(None)
	class FString                                GroupName;                                         // 0x260(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                AttributeName;                                     // 0x270(0x10)(None)
};

}


