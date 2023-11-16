#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBakeTextureResolution : int32
{
	Resolution16                   = 16,
	Resolution32                   = 32,
	Resolution64                   = 64,
	Resolution128                  = 128,
	Resolution256                  = 256,
	Resolution512                  = 512,
	Resolution1024                 = 1024,
	Resolution2048                 = 2048,
	Resolution4096                 = 4096,
	Resolution8192                 = 8192,
	EBakeTextureResolution_MAX     = 8193,
};

enum class EBakeTextureBitDepth : int32
{
	ChannelBits8                   = 0,
	ChannelBits16                  = 1,
	EBakeTextureBitDepth_MAX       = 2,
};

enum class EBakeTextureSamplesPerPixel : int32
{
	Sample1                        = 1,
	Sample4                        = 4,
	Sample16                       = 16,
	Sample64                       = 64,
	Sample256                      = 256,
	EBakeTextureSamplesPerPixel_MAX = 257,
};

enum class EBaseCreateFromSelectedTargetType : int32
{
	NewObject                      = 0,
	FirstInputObject               = 1,
	LastInputObject                = 2,
	EBaseCreateFromSelectedTargetType_MAX = 3,
};

enum class EUVLayoutPreviewSide : int32
{
	Left                           = 0,
	Right                          = 1,
	EUVLayoutPreviewSide_MAX       = 2,
};

enum class ESpaceCurveControlPointTransformMode : int32
{
	Shared                         = 0,
	PerVertex                      = 1,
	ESpaceCurveControlPointTransformMode_MAX = 2,
};

enum class ESpaceCurveControlPointOriginMode : int32
{
	Shared                         = 0,
	First                          = 1,
	Last                           = 2,
	ESpaceCurveControlPointOriginMode_MAX = 3,
};

enum class ESpaceCurveControlPointFalloffType : int32
{
	Linear                         = 0,
	Smooth                         = 1,
	ESpaceCurveControlPointFalloffType_MAX = 2,
};

enum class EModelingComponentsPlaneVisualizationMode : uint8
{
	SimpleGrid                     = 0,
	HierarchicalGrid               = 1,
	FixedScreenAreaGrid            = 2,
	EModelingComponentsPlaneVisualizationMode_MAX = 3,
};

enum class ECreateModelingObjectResult : uint8
{
	Ok                             = 0,
	Cancelled                      = 1,
	Failed_Unknown                 = 2,
	Failed_NoAPIFound              = 3,
	Failed_InvalidWorld            = 4,
	Failed_InvalidMesh             = 5,
	Failed_InvalidTexture          = 6,
	Failed_AssetCreationFailed     = 7,
	Failed_ActorCreationFailed     = 8,
	ECreateModelingObjectResult_MAX = 9,
};

enum class ECreateMeshObjectSourceMeshType : uint8
{
	MeshDescription                = 0,
	DynamicMesh                    = 1,
	ECreateMeshObjectSourceMeshType_MAX = 2,
};

enum class ECreateObjectTypeHint : uint8
{
	Undefined                      = 0,
	StaticMesh                     = 1,
	Volume                         = 2,
	DynamicMeshActor               = 3,
	ECreateObjectTypeHint_MAX      = 4,
};

enum class EHandleSourcesMethod : uint8
{
	DeleteSources                  = 0,
	HideSources                    = 1,
	KeepSources                    = 2,
	KeepFirstSource                = 3,
	KeepLastSource                 = 4,
	EHandleSourcesMethod_MAX       = 5,
};

enum class EMultiTransformerMode : uint8
{
	DefaultGizmo                   = 1,
	QuickAxisTranslation           = 2,
	EMultiTransformerMode_MAX      = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x3 (0x3 - 0x0)
// ScriptStruct ModelingComponents.ModelingToolsAxisFilter
struct FModelingToolsAxisFilter
{
public:
	bool                                         bAxisX;                                            // 0x0(0x1)(None)
	bool                                         bAxisY;                                            // 0x1(0x1)(None)
	bool                                         bAxisZ;                                            // 0x2(0x1)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ModelingComponents.RenderableTriangleVertex
struct FRenderableTriangleVertex
{
public:
	struct FVector                               Position;                                          // 0x0(0x18)(None)
	struct FVector2D                             UV;                                                // 0x18(0x10)(None)
	struct FVector                               Normal;                                            // 0x28(0x18)(None)
	struct FColor                                Color;                                             // 0x40(0x4)(None)
	uint8                                        Pad_B6F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct ModelingComponents.RenderableTriangle
struct FRenderableTriangle
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(None)
	struct FRenderableTriangleVertex             Vertex0;                                           // 0x8(0x48)(None)
	struct FRenderableTriangleVertex             Vertex1;                                           // 0x50(0x48)(None)
	struct FRenderableTriangleVertex             Vertex2;                                           // 0x98(0x48)(None)
};

// 0x600 (0x600 - 0x0)
// ScriptStruct ModelingComponents.CreateMeshObjectParams
struct FCreateMeshObjectParams
{
public:
	class UPrimitiveComponent*                   SourceComponent;                                   // 0x0(0x8)(ZeroConstructor)
	enum class ECreateObjectTypeHint             TypeHint;                                          // 0x8(0x1)(None)
	uint8                                        Pad_B70[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                TypeHintClass;                                     // 0x10(0x8)(ZeroConstructor)
	int32                                        TypeHintExtended;                                  // 0x18(0x4)(None)
	uint8                                        Pad_B71[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                TargetWorld;                                       // 0x20(0x8)(ZeroConstructor)
	uint8                                        Pad_B72[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x30(0x60)(None)
	class FString                                BaseName;                                          // 0x90(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class UMaterialInterface*>            Materials;                                         // 0xA0(0x10)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class UMaterialInterface*>            AssetMaterials;                                    // 0xB0(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bEnableCollision;                                  // 0xC0(0x1)(None)
	enum class ECollisionTraceFlag               CollisionMode;                                     // 0xC1(0x1)(None)
	bool                                         bEnableRaytracingSupport;                          // 0xC2(0x1)(None)
	bool                                         bEnableRecomputeNormals;                           // 0xC3(0x1)(None)
	bool                                         bEnableRecomputeTangents;                          // 0xC4(0x1)(None)
	bool                                         bEnableNanite;                                     // 0xC5(0x1)(None)
	uint8                                        Pad_B73[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NaniteProxyTrianglePercent;                        // 0xC8(0x4)(None)
	uint8                                        Pad_B74[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMeshNaniteSettings                   NaniteSettings;                                    // 0xD0(0x38)(None)
	uint8                                        Pad_B75[0x4F8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ModelingComponents.CreateMeshObjectResult
struct FCreateMeshObjectResult
{
public:
	enum class ECreateModelingObjectResult       ResultCode;                                        // 0x0(0x1)(None)
	uint8                                        Pad_B76[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                NewActor;                                          // 0x8(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   NewComponent;                                      // 0x10(0x8)(ZeroConstructor)
	class UObject*                               NewAsset;                                          // 0x18(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ModelingComponents.CreateTextureObjectParams
struct FCreateTextureObjectParams
{
public:
	int32                                        TypeHintExtended;                                  // 0x0(0x4)(None)
	uint8                                        Pad_B77[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                TargetWorld;                                       // 0x8(0x8)(ZeroConstructor)
	class UObject*                               StoreRelativeToObject;                             // 0x10(0x8)(ZeroConstructor)
	class FString                                BaseName;                                          // 0x18(0x10)(None)
	class UTexture2D*                            GeneratedTransientTexture;                         // 0x28(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ModelingComponents.CreateTextureObjectResult
struct FCreateTextureObjectResult
{
public:
	enum class ECreateModelingObjectResult       ResultCode;                                        // 0x0(0x1)(None)
	uint8                                        Pad_B79[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               NewAsset;                                          // 0x8(0x8)(None)
};

}


