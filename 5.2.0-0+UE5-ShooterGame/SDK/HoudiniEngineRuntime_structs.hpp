#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EHoudiniStaticMeshMethod : uint8
{
	RawMesh                        = 0,
	FMeshDescription               = 1,
	UHoudiniStaticMesh             = 2,
	EHoudiniStaticMeshMethod_MAX   = 3,
};

enum class EHoudiniAssetState : uint8
{
	NeedInstantiation              = 0,
	NewHDA                         = 1,
	PreInstantiation               = 2,
	Instantiating                  = 3,
	PreCook                        = 4,
	Cooking                        = 5,
	PostCook                       = 6,
	PreProcess                     = 7,
	Processing                     = 8,
	None                           = 9,
	NeedRebuild                    = 10,
	NeedDelete                     = 11,
	Deleting                       = 12,
	ProcessTemplate                = 13,
	EHoudiniAssetState_MAX         = 14,
};

enum class EHoudiniAssetStateResult : uint8
{
	None                           = 0,
	Working                        = 1,
	Success                        = 2,
	FinishedWithError              = 3,
	FinishedWithFatalError         = 4,
	Aborted                        = 5,
	EHoudiniAssetStateResult_MAX   = 6,
};

enum class EHoudiniRampInterpolationType : uint8
{
	InValid                        = -1,
	CONSTANT                       = 0,
	LINEAR                         = 1,
	CATMULL_ROM                    = 2,
	MONOTONE_CUBIC                 = 3,
	BEZIER                         = 4,
	BSPLINE                        = 5,
	HERMITE                        = 6,
	EHoudiniRampInterpolationType_MAX = 7,
};

enum class EHoudiniLandscapeOutputBakeType : uint8
{
	Detachment                     = 0,
	BakeToImage                    = 1,
	BakeToWorld                    = 2,
	InValid                        = 3,
	EHoudiniLandscapeOutputBakeType_MAX = 4,
};

enum class EHoudiniInputType : uint8
{
	Invalid                        = 0,
	Geometry                       = 1,
	Curve                          = 2,
	Asset                          = 3,
	Landscape                      = 4,
	World                          = 5,
	Skeletal                       = 6,
	GeometryCollection             = 7,
	EHoudiniInputType_MAX          = 8,
};

enum class EHoudiniOutputType : uint8
{
	Invalid                        = 0,
	Mesh                           = 1,
	Instancer                      = 2,
	Landscape                      = 3,
	Curve                          = 4,
	Skeletal                       = 5,
	GeometryCollection             = 6,
	DataTable                      = 7,
	EHoudiniOutputType_MAX         = 8,
};

enum class EHoudiniCurveType : uint8
{
	Invalid                        = -1,
	Polygon                        = 0,
	Nurbs                          = 1,
	Bezier                         = 2,
	Points                         = 3,
	EHoudiniCurveType_MAX          = 4,
};

enum class EHoudiniCurveMethod : uint8
{
	Invalid                        = -1,
	CVs                            = 0,
	Breakpoints                    = 1,
	Freehand                       = 2,
	EHoudiniCurveMethod_MAX        = 3,
};

enum class EHoudiniCurveBreakpointParameterization : uint8
{
	Invalid                        = -1,
	Uniform                        = 0,
	Chord                          = 1,
	Centripetal                    = 2,
	EHoudiniCurveBreakpointParameterization_MAX = 3,
};

enum class EHoudiniLandscapeExportType : uint8
{
	Heightfield                    = 0,
	Mesh                           = 1,
	Points                         = 2,
	EHoudiniLandscapeExportType_MAX = 3,
};

enum class EHoudiniProxyRefineResult : uint8
{
	Invalid                        = 0,
	Failed                         = 1,
	Success                        = 2,
	Skipped                        = 3,
	EHoudiniProxyRefineResult_MAX  = 4,
};

enum class EHoudiniProxyRefineRequestResult : uint8
{
	Invalid                        = 0,
	None                           = 1,
	PendingCooks                   = 2,
	Refined                        = 3,
	EHoudiniProxyRefineRequestResult_MAX = 4,
};

enum class EAttribStorageType : uint8
{
	Invalid                        = -1,
	INT                            = 0,
	INT64                          = 1,
	FLOAT                          = 2,
	FLOAT64                        = 3,
	STRING                         = 4,
	EAttribStorageType_MAX         = 5,
};

enum class EAttribOwner : uint8
{
	Invalid                        = -1,
	Vertex                         = 0,
	Point                          = 1,
	Prim                           = 2,
	Detail                         = 3,
	EAttribOwner_MAX               = 4,
};

enum class EHoudiniGeoType : uint8
{
	Invalid                        = 0,
	Default                        = 1,
	Intermediate                   = 2,
	Input                          = 3,
	Curve                          = 4,
	EHoudiniGeoType_MAX            = 5,
};

enum class EHoudiniPartType : uint8
{
	Invalid                        = 0,
	Mesh                           = 1,
	Instancer                      = 2,
	Curve                          = 3,
	Volume                         = 4,
	DataTable                      = 5,
	EHoudiniPartType_MAX           = 6,
};

enum class EHoudiniInstancerType : uint8
{
	Invalid                        = 0,
	ObjectInstancer                = 1,
	PackedPrimitive                = 2,
	AttributeInstancer             = 3,
	OldSchoolAttributeInstancer    = 4,
	GeometryCollection             = 5,
	EHoudiniInstancerType_MAX      = 6,
};

enum class EXformParameter : uint8
{
	TX                             = 0,
	TY                             = 1,
	TZ                             = 2,
	RX                             = 3,
	RY                             = 4,
	RZ                             = 5,
	SX                             = 6,
	SY                             = 7,
	SZ                             = 8,
	COUNT                          = 9,
	EXformParameter_MAX            = 10,
};

enum class EHoudiniHandleType : uint8
{
	Xform                          = 0,
	Bounder                        = 1,
	Unsupported                    = 2,
	EHoudiniHandleType_MAX         = 3,
};

enum class EHoudiniInputObjectType : uint8
{
	Invalid                        = 0,
	Object                         = 1,
	StaticMesh                     = 2,
	SkeletalMesh                   = 3,
	SceneComponent                 = 4,
	StaticMeshComponent            = 5,
	InstancedStaticMeshComponent   = 6,
	SplineComponent                = 7,
	HoudiniSplineComponent         = 8,
	HoudiniAssetComponent          = 9,
	Actor                          = 10,
	Landscape                      = 11,
	Brush                          = 12,
	CameraComponent                = 13,
	DataTable                      = 14,
	HoudiniAssetActor              = 15,
	FoliageType_InstancedStaticMesh = 16,
	GeometryCollection             = 17,
	GeometryCollectionComponent    = 18,
	GeometryCollectionActor_Deprecated = 19,
	SkeletalMeshComponent          = 20,
	Blueprint                      = 21,
	EHoudiniInputObjectType_MAX    = 22,
};

enum class EHoudiniXformType : uint8
{
	None                           = 0,
	IntoThisObject                 = 1,
	Auto                           = 2,
	EHoudiniXformType_MAX          = 3,
};

enum class EHoudiniCurveOutputType : uint8
{
	UnrealSpline                   = 0,
	HoudiniSpline                  = 1,
	EHoudiniCurveOutputType_MAX    = 2,
};

enum class EHoudiniParameterType : uint8
{
	Invalid                        = 0,
	Button                         = 1,
	ButtonStrip                    = 2,
	Color                          = 3,
	ColorRamp                      = 4,
	File                           = 5,
	FileDir                        = 6,
	FileGeo                        = 7,
	FileImage                      = 8,
	Float                          = 9,
	FloatRamp                      = 10,
	Folder                         = 11,
	FolderList                     = 12,
	Input                          = 13,
	Int                            = 14,
	IntChoice                      = 15,
	Label                          = 16,
	MultiParm                      = 17,
	Separator                      = 18,
	String                         = 19,
	StringChoice                   = 20,
	StringAssetRef                 = 21,
	Toggle                         = 22,
	EHoudiniParameterType_MAX      = 23,
};

enum class EHoudiniFolderParameterType : uint8
{
	Invalid                        = 0,
	Collapsible                    = 1,
	Simple                         = 2,
	Tabs                           = 3,
	Radio                          = 4,
	Other                          = 5,
	EHoudiniFolderParameterType_MAX = 6,
};

enum class EHoudiniMultiParmModificationType : uint8
{
	None                           = 0,
	Inserted                       = 1,
	Removed                        = 2,
	Modified                       = 3,
	EHoudiniMultiParmModificationType_MAX = 4,
};

enum class EHoudiniRampPointConstructStatus : uint8
{
	None                           = 0,
	INITIALIZED                    = 1,
	POSITION_INSERTED              = 2,
	VALUE_INSERTED                 = 3,
	INTERPTYPE_INSERTED            = 4,
	EHoudiniRampPointConstructStatus_MAX = 5,
};

enum class EPDGLinkState : uint8
{
	Inactive                       = 0,
	Linking                        = 1,
	Linked                         = 2,
	Error_Not_Linked               = 3,
	EPDGLinkState_MAX              = 4,
};

enum class EPDGNodeState : uint8
{
	None                           = 0,
	Dirtied                        = 1,
	Dirtying                       = 2,
	Cooking                        = 3,
	Cook_Complete                  = 4,
	Cook_Failed                    = 5,
	EPDGNodeState_MAX              = 6,
};

enum class EPDGWorkResultState : uint8
{
	None                           = 0,
	ToLoad                         = 1,
	Loading                        = 2,
	Loaded                         = 3,
	ToDelete                       = 4,
	Deleting                       = 5,
	Deleted                        = 6,
	NotLoaded                      = 7,
	EPDGWorkResultState_MAX        = 8,
};

enum class EHoudiniRuntimeSettingsSessionType : uint8
{
	HRSST_InProcess                = 0,
	HRSST_Socket                   = 1,
	HRSST_NamedPipe                = 2,
	HRSST_None                     = 3,
	HRSST_MAX                      = 4,
};

enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8
{
	HRSRF_Always                   = 0,
	HRSRF_OnlyIfMissing            = 1,
	HRSRF_Never                    = 2,
	HRSRF_MAX                      = 3,
};

enum class EHoudiniExecutableType : uint8
{
	HRSHE_Houdini                  = 0,
	HRSHE_HoudiniFX                = 1,
	HRSHE_HoudiniCore              = 2,
	HRSHE_HoudiniIndie             = 3,
	HRSHE_MAX                      = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniCurveOutputProperties
struct FHoudiniCurveOutputProperties
{
public:
	enum class EHoudiniCurveOutputType           CurveOutputType;                                   // 0x0(0x1)(None)
	uint8                                        Pad_E73[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumPoints;                                         // 0x4(0x4)(None)
	bool                                         bClosed;                                           // 0x8(0x1)(None)
	enum class EHoudiniCurveType                 CurveType;                                         // 0x9(0x1)(None)
	enum class EHoudiniCurveMethod               CurveMethod;                                       // 0xA(0x1)(None)
	uint8                                        Pad_E74[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniDataLayer
struct FHoudiniDataLayer
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
	bool                                         bCreateIfNeeded;                                   // 0x10(0x1)(None)
	uint8                                        Pad_E75[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x130 (0x130 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniOutputObject
struct FHoudiniOutputObject
{
public:
	class UObject*                               OutputObject;                                      // 0x0(0x8)(ZeroConstructor)
	TArray<class UObject*>                       OutputComponents;                                  // 0x8(0x10)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UObject*                               OutputComponent;                                   // 0x18(0x8)(ZeroConstructor)
	class UObject*                               ProxyObject;                                       // 0x20(0x8)(ZeroConstructor)
	class UObject*                               ProxyComponent;                                    // 0x28(0x8)(ZeroConstructor)
	bool                                         bProxyIsCurrent;                                   // 0x30(0x1)(None)
	bool                                         bIsImplicit;                                       // 0x31(0x1)(None)
	bool                                         bIsGeometryCollectionPiece;                        // 0x32(0x1)(None)
	uint8                                        Pad_E76[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                GeometryCollectionPieceName;                       // 0x38(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                BakeName;                                          // 0x48(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FHoudiniCurveOutputProperties         CurveOutputProperty;                               // 0x58(0xC)(None)
	uint8                                        Pad_E77[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class FString>           CachedAttributes;                                  // 0x68(0x50)(SimpleDisplay, AdvancedDisplay, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TMap<class FString, class FString>           CachedTokens;                                      // 0xB8(0x50)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class UObject*                               InstancedObject;                                   // 0x108(0x8)(ZeroConstructor)
	class UFoliageType*                          FoliageType;                                       // 0x110(0x8)(ZeroConstructor)
	class UWorld*                                World;                                             // 0x118(0x8)(None)
	TArray<struct FHoudiniDataLayer>             DataLayers;                                        // 0x120(0x10)(None)
};

// 0x138 (0x138 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniAssetBlueprintOutput
struct FHoudiniAssetBlueprintOutput
{
public:
	int32                                        OutputIndex;                                       // 0x0(0x4)(None)
	uint8                                        Pad_E78[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHoudiniOutputObject                  OutputObject;                                      // 0x8(0x130)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniOutputObjectIdentifier
struct FHoudiniOutputObjectIdentifier
{
public:
	int32                                        ObjectID;                                          // 0x0(0x4)(None)
	int32                                        GeoId;                                             // 0x4(0x4)(None)
	int32                                        PartId;                                            // 0x8(0x4)(None)
	uint8                                        Pad_E79[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SplitIdentifier;                                   // 0x10(0x10)(AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                PartName;                                          // 0x20(0x10)(None)
	int32                                        PrimitiveIndex;                                    // 0x30(0x4)(None)
	int32                                        PointIndex;                                        // 0x34(0x4)(None)
	uint8                                        Pad_E7A[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0x120 - 0x68)
// ScriptStruct HoudiniEngineRuntime.HoudiniAssetBlueprintInstanceData
struct FHoudiniAssetBlueprintInstanceData : public FActorComponentInstanceData
{
public:
	class UHoudiniAsset*                         HoudiniAsset;                                      // 0x68(0x8)(ZeroConstructor)
	int32                                        AssetId;                                           // 0x70(0x4)(None)
	enum class EHoudiniAssetState                AssetState;                                        // 0x74(0x1)(None)
	uint8                                        Pad_E7B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       SubAssetIndex;                                     // 0x78(0x4)(None)
	uint32                                       AssetCookCount;                                    // 0x7C(0x4)(None)
	bool                                         bHasBeenLoaded;                                    // 0x80(0x1)(None)
	bool                                         bHasBeenDuplicated;                                // 0x81(0x1)(None)
	bool                                         bPendingDelete;                                    // 0x82(0x1)(None)
	bool                                         bRecookRequested;                                  // 0x83(0x1)(None)
	bool                                         bRebuildRequested;                                 // 0x84(0x1)(None)
	bool                                         bEnableCooking;                                    // 0x85(0x1)(None)
	bool                                         bForceNeedUpdate;                                  // 0x86(0x1)(None)
	bool                                         bLastCookSuccess;                                  // 0x87(0x1)(None)
	struct FGuid                                 ComponentGUID;                                     // 0x88(0x10)(None)
	struct FGuid                                 HapiGUID;                                          // 0x98(0x10)(None)
	bool                                         bRegisteredComponentTemplate;                      // 0xA8(0x1)(None)
	uint8                                        Pad_E7C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SourceName;                                        // 0xB0(0x10)(AutoWeak, ContainsInstancedReference, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniAssetBlueprintOutput> Outputs;                                           // 0xC0(0x50)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class UHoudiniInput*>                 Inputs;                                            // 0x110(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniGenericAttributeChangedProperty
struct FHoudiniGenericAttributeChangedProperty
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(None)
	uint8                                        Pad_E7D[0x90];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniGenericAttribute
struct FHoudiniGenericAttribute
{
public:
	class FString                                AttributeName;                                     // 0x0(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	enum class EAttribStorageType                AttributeType;                                     // 0x10(0x1)(None)
	enum class EAttribOwner                      AttributeOwner;                                    // 0x11(0x1)(None)
	uint8                                        Pad_E7E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AttributeCount;                                    // 0x14(0x4)(None)
	int32                                        AttributeTupleSize;                                // 0x18(0x4)(None)
	uint8                                        Pad_E7F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<double>                               DoubleValues;                                      // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<int64>                                IntValues;                                         // 0x30(0x10)(AutoWeak, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class FString>                        StringValues;                                      // 0x40(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniObjectInfo
struct FHoudiniObjectInfo
{
public:
	uint8                                        Pad_E80[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniGeoInfo
struct FHoudiniGeoInfo
{
public:
	uint8                                        Pad_E81[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniPartInfo
struct FHoudiniPartInfo
{
public:
	uint8                                        Pad_E82[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniVolumeInfo
struct FHoudiniVolumeInfo
{
public:
	uint8                                        Pad_E83[0xB0];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniCurveInfo
struct FHoudiniCurveInfo
{
public:
	uint8                                        Pad_E84[0x1C];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniMeshSocket
struct FHoudiniMeshSocket
{
public:
	uint8                                        Pad_E85[0x90];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x290 (0x290 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniGeoPartObject
struct FHoudiniGeoPartObject
{
public:
	int32                                        AssetId;                                           // 0x0(0x4)(None)
	uint8                                        Pad_E86[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AssetName;                                         // 0x8(0x10)(BlueprintCallable, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        ObjectID;                                          // 0x18(0x4)(None)
	uint8                                        Pad_E87[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ObjectName;                                        // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        GeoId;                                             // 0x30(0x4)(None)
	int32                                        PartId;                                            // 0x34(0x4)(None)
	class FString                                PartName;                                          // 0x38(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	bool                                         bHasCustomPartName;                                // 0x48(0x1)(None)
	uint8                                        Pad_E88[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        SplitGroups;                                       // 0x50(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            TransformMatrix;                                   // 0x60(0x60)(None)
	class FString                                NodePath;                                          // 0xC0(0x10)(AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class EHoudiniPartType                  Type;                                              // 0xD0(0x1)(None)
	enum class EHoudiniInstancerType             InstancerType;                                     // 0xD1(0x1)(None)
	uint8                                        Pad_E89[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                VolumeName;                                        // 0xD8(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bHasEditLayers;                                    // 0xE8(0x1)(None)
	uint8                                        Pad_E8A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                VolumeLayerName;                                   // 0xF0(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	int32                                        VolumeTileIndex;                                   // 0x100(0x4)(None)
	bool                                         bIsVisible;                                        // 0x104(0x1)(None)
	bool                                         bIsEditable;                                       // 0x105(0x1)(None)
	bool                                         bIsTemplated;                                      // 0x106(0x1)(None)
	bool                                         bIsInstanced;                                      // 0x107(0x1)(None)
	bool                                         bHasGeoChanged;                                    // 0x108(0x1)(None)
	bool                                         bHasPartChanged;                                   // 0x109(0x1)(None)
	bool                                         bHasTransformChanged;                              // 0x10A(0x1)(None)
	bool                                         bHasMaterialsChanged;                              // 0x10B(0x1)(None)
	uint8                                        Pad_E8B[0x174];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHoudiniMeshSocket>            AllMeshSockets;                                    // 0x280(0x10)(None)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniBrushInfo
struct FHoudiniBrushInfo
{
public:
	TWeakObjectPtr<class ABrush>                 BrushActor;                                        // 0x0(0x8)(None)
	uint8                                        Pad_E8C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CachedTransform;                                   // 0x10(0x60)(None)
	struct FVector                               CachedOrigin;                                      // 0x70(0x18)(None)
	struct FVector                               CachedExtent;                                      // 0x88(0x18)(None)
	enum class EBrushType                        CachedBrushType;                                   // 0xA0(0x1)(None)
	uint8                                        Pad_E8D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       CachedSurfaceHash;                                 // 0xA8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniExtents
struct FHoudiniExtents
{
public:
	struct FIntPoint                             Min;                                               // 0x0(0x8)(None)
	struct FIntPoint                             Max;                                               // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutputObjectIdentifier
struct FHoudiniBakedOutputObjectIdentifier
{
public:
	int32                                        PartId;                                            // 0x0(0x4)(None)
	uint8                                        Pad_E8E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SplitIdentifier;                                   // 0x8(0x10)(None)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniInstancedOutput
struct FHoudiniInstancedOutput
{
public:
	TSoftObjectPtr<class UObject>                OriginalObject;                                    // 0x0(0x30)(ZeroConstructor, AutoWeak, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	int32                                        OriginalObjectIndex;                               // 0x30(0x4)(None)
	uint8                                        Pad_E8F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    OriginalTransforms;                                // 0x38(0x10)(SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<TSoftObjectPtr<class UObject>>        VariationObjects;                                  // 0x48(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FTransform>                    VariationTransformOffsets;                         // 0x58(0x10)(SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<int32>                                TransformVariationIndices;                         // 0x68(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<int32>                                OriginalInstanceIndices;                           // 0x78(0x10)(None)
	bool                                         bChanged;                                          // 0x88(0x1)(None)
	bool                                         bStale;                                            // 0x89(0x1)(None)
	uint8                                        Pad_E90[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutputObject
struct FHoudiniBakedOutputObject
{
public:
	class FString                                Actor;                                             // 0x0(0x10)(AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Blueprint;                                         // 0x10(0x10)(SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FName                                  ActorBakeName;                                     // 0x20(0x8)(None)
	class FString                                BakedObject;                                       // 0x28(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                BakedComponent;                                    // 0x38(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class FString>                        InstancedActors;                                   // 0x48(0x10)(BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class FString>                        InstancedComponents;                               // 0x58(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TMap<class FName, class FString>             LandscapeLayers;                                   // 0x68(0x50)(AutoWeak, ContainsInstancedReference, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       FoliageInstancePositions;                          // 0xB8(0x10)(None)
	class UFoliageType*                          FoliageType;                                       // 0xC8(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutput
struct FHoudiniBakedOutput
{
public:
	TMap<struct FHoudiniBakedOutputObjectIdentifier, struct FHoudiniBakedOutputObject> BakedOutputObjects;                                // 0x0(0x50)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HoudiniEngineRuntime.OutputActorOwner
struct FOutputActorOwner
{
public:
	uint8                                        Pad_E91[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                OutputActor;                                       // 0x8(0x8)(None)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct HoudiniEngineRuntime.TOPWorkResultObject
struct FTOPWorkResultObject
{
public:
	uint8                                        Pad_E92[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x8(0x10)(AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                FilePath;                                          // 0x18(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	enum class EPDGWorkResultState               State;                                             // 0x28(0x1)(None)
	uint8                                        Pad_E93[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WorkItemResultInfoIndex;                           // 0x2C(0x4)(None)
	TArray<class UHoudiniOutput*>                ResultOutputs;                                     // 0x30(0x10)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bAutoBakedSinceLastLoad;                           // 0x40(0x1)(None)
	uint8                                        Pad_E94[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOutputActorOwner                     OutputActorOwner;                                  // 0x48(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct HoudiniEngineRuntime.TOPWorkResult
struct FTOPWorkResult
{
public:
	int32                                        WorkItemIndex;                                     // 0x0(0x4)(None)
	int32                                        WorkItemID;                                        // 0x4(0x4)(None)
	TArray<struct FTOPWorkResultObject>          ResultObjects;                                     // 0x8(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct HoudiniEngineRuntime.WorkItemTallyBase
struct FWorkItemTallyBase
{
public:
	uint8                                        Pad_E95[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x230 (0x238 - 0x8)
// ScriptStruct HoudiniEngineRuntime.WorkItemTally
struct FWorkItemTally : public FWorkItemTallyBase
{
public:
	TSet<int32>                                  AllWorkItems;                                      // 0x8(0x50)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TSet<int32>                                  WaitingWorkItems;                                  // 0x58(0x50)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TSet<int32>                                  ScheduledWorkItems;                                // 0xA8(0x50)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TSet<int32>                                  CookingWorkItems;                                  // 0xF8(0x50)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TSet<int32>                                  CookedWorkItems;                                   // 0x148(0x50)(AutoWeak, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TSet<int32>                                  ErroredWorkItems;                                  // 0x198(0x50)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TSet<int32>                                  CookCancelledWorkItems;                            // 0x1E8(0x50)(None)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct HoudiniEngineRuntime.AggregatedWorkItemTally
struct FAggregatedWorkItemTally : public FWorkItemTallyBase
{
public:
	int32                                        TotalWorkItems;                                    // 0x8(0x4)(None)
	int32                                        WaitingWorkItems;                                  // 0xC(0x4)(None)
	int32                                        ScheduledWorkItems;                                // 0x10(0x4)(None)
	int32                                        CookingWorkItems;                                  // 0x14(0x4)(None)
	int32                                        CookedWorkItems;                                   // 0x18(0x4)(None)
	int32                                        ErroredWorkItems;                                  // 0x1C(0x4)(None)
	int32                                        CookCancelledWorkItems;                            // 0x20(0x4)(None)
	uint8                                        Pad_E96[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniPDGWorkResultObjectBakedOutput
struct FHoudiniPDGWorkResultObjectBakedOutput
{
public:
	TArray<struct FHoudiniBakedOutput>           BakedOutputs;                                      // 0x0(0x10)(None)
};

// 0x188 (0x188 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniStaticMeshGenerationProperties
struct FHoudiniStaticMeshGenerationProperties
{
public:
	uint8                                        bGeneratedDoubleSidedGeometry : 1;                 // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_AC : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_E97[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     GeneratedPhysMaterial;                             // 0x8(0x8)(ZeroConstructor)
	struct FBodyInstance                         DefaultBodyInstance;                               // 0x10(0x138)(ZeroConstructor, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	enum class ECollisionTraceFlag               GeneratedCollisionTraceFlag;                       // 0x148(0x1)(None)
	uint8                                        Pad_E98[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GeneratedLightMapResolution;                       // 0x14C(0x4)(None)
	struct FWalkableSlopeOverride                GeneratedWalkableSlopeOverride;                    // 0x150(0x10)(None)
	int32                                        GeneratedLightMapCoordinateIndex;                  // 0x160(0x4)(None)
	uint8                                        bGeneratedUseMaximumStreamingTexelRatio : 1;       // Mask: 0x1, PropSize: 0x10x164(0x1)(None)
	uint8                                        BitPad_AD : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_E99[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GeneratedStreamingDistanceMultiplier;              // 0x168(0x4)(None)
	uint8                                        Pad_E9A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFoliageType_InstancedStaticMesh*      GeneratedFoliageDefaultSettings;                   // 0x170(0x8)(ZeroConstructor)
	TArray<class UAssetUserData*>                GeneratedAssetUserData;                            // 0x178(0x10)(None)
};

// 0x30 (0x98 - 0x68)
// ScriptStruct HoudiniEngineRuntime.HoudiniSplineComponentInstanceData
struct FHoudiniSplineComponentInstanceData : public FActorComponentInstanceData
{
public:
	TArray<struct FTransform>                    CurvePoints;                                       // 0x68(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       DisplayPoints;                                     // 0x78(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<int32>                                DisplayPointIndexDivider;                          // 0x88(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
};

}


