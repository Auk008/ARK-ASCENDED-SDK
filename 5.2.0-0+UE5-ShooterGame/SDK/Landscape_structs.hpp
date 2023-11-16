#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELandscapeSetupErrors : uint8
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4,
};

enum class ERTDrawingType : uint8
{
	RTAtlas                        = 0,
	RTAtlasToNonAtlas              = 1,
	RTNonAtlasToAtlas              = 2,
	RTNonAtlas                     = 3,
	RTMips                         = 4,
	ERTDrawingType_MAX             = 5,
};

enum class EHeightmapRTType : uint8
{
	HeightmapRT_CombinedAtlas      = 0,
	HeightmapRT_CombinedNonAtlas   = 1,
	HeightmapRT_Scratch1           = 2,
	HeightmapRT_Scratch2           = 3,
	HeightmapRT_Scratch3           = 4,
	HeightmapRT_Mip1               = 5,
	HeightmapRT_Mip2               = 6,
	HeightmapRT_Mip3               = 7,
	HeightmapRT_Mip4               = 8,
	HeightmapRT_Mip5               = 9,
	HeightmapRT_Mip6               = 10,
	HeightmapRT_Mip7               = 11,
	HeightmapRT_Count              = 12,
	HeightmapRT_MAX                = 13,
};

enum class EWeightmapRTType : uint8
{
	WeightmapRT_Scratch_RGBA       = 0,
	WeightmapRT_Scratch1           = 1,
	WeightmapRT_Scratch2           = 2,
	WeightmapRT_Scratch3           = 3,
	WeightmapRT_Mip0               = 4,
	WeightmapRT_Mip1               = 5,
	WeightmapRT_Mip2               = 6,
	WeightmapRT_Mip3               = 7,
	WeightmapRT_Mip4               = 8,
	WeightmapRT_Mip5               = 9,
	WeightmapRT_Mip6               = 10,
	WeightmapRT_Mip7               = 11,
	WeightmapRT_Count              = 12,
	WeightmapRT_MAX                = 13,
};

enum class ELandscapeBlendMode : uint8
{
	LSBM_AdditiveBlend             = 0,
	LSBM_AlphaBlend                = 1,
	LSBM_MAX                       = 2,
};

enum class ELandscapeClearMode : uint8
{
	Clear_Weightmap                = 1,
	Clear_Heightmap                = 2,
	Clear_All                      = 3,
	Clear_MAX                      = 4,
};

enum class ELandscapeGizmoType : uint8
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3,
};

enum class ELandscapeGizmoSnapType : uint8
{
	None                           = 0,
	Component                      = 1,
	Texel                          = 2,
	ELandscapeGizmoSnapType_MAX    = 3,
};

enum class EGrassScaling : uint8
{
	Uniform                        = 0,
	Free                           = 1,
	LockXY                         = 2,
	EGrassScaling_MAX              = 3,
};

enum class EGrassSurfaceFilter : uint8
{
	UpOnly                         = 0,
	DownOnly                       = 1,
	All                            = 2,
	EGrassSurfaceFilter_MAX        = 3,
};

enum class ESplineModulationColorMask : uint8
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	ESplineModulationColorMask_MAX = 4,
};

enum class ELandscapeDirtyingMode : uint8
{
	Auto                           = 0,
	InLandscapeModeOnly            = 1,
	InLandscapeModeAndUserTriggeredChanges = 2,
	ELandscapeDirtyingMode_MAX     = 3,
};

enum class ELandscapeSplineMeshOrientation : uint8
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2,
};

enum class ELandscapeLayerBlendType : uint8
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3,
};

enum class ETerrainCoordMappingType : uint8
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4,
};

enum class ELandscapeCustomizedCoordType : uint8
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5,
};

enum class ELandscapeResizeMode : uint8
{
	Resample                       = 0,
	Clip                           = 1,
	Expand                         = 2,
	ELandscapeResizeMode_MAX       = 3,
};

enum class ELandscapeImportAlphamapType : uint8
{
	Additive                       = 0,
	Layered                        = 1,
	ELandscapeImportAlphamapType_MAX = 2,
};

enum class ELandscapeLayerPaintingRestriction : uint8
{
	None                           = 0,
	UseMaxLayers                   = 1,
	ExistingOnly                   = 2,
	UseComponentAllowList          = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4,
};

enum class ELandscapeLayerDisplayMode : uint8
{
	Default                        = 0,
	Alphabetical                   = 1,
	UserSpecific                   = 2,
	ELandscapeLayerDisplayMode_MAX = 3,
};

enum class ELandscapeLODFalloff : uint8
{
	Linear                         = 0,
	SquareRoot                     = 1,
	ELandscapeLODFalloff_MAX       = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.LandscapeLayerBrush
struct FLandscapeLayerBrush
{
public:
	uint8                                        Pad_2E11[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Landscape.LandscapeLayer
struct FLandscapeLayer
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(None)
	class FName                                  Name;                                              // 0x10(0x8)(None)
	bool                                         bVisible;                                          // 0x18(0x1)(None)
	bool                                         bLocked;                                           // 0x19(0x1)(None)
	uint8                                        Pad_2E13[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HeightmapAlpha;                                    // 0x1C(0x4)(None)
	float                                        WeightmapAlpha;                                    // 0x20(0x4)(None)
	enum class ELandscapeBlendMode               BlendMode;                                         // 0x24(0x1)(None)
	uint8                                        Pad_2E14[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLandscapeLayerBrush>          Brushes;                                           // 0x28(0x10)(AutoWeak, ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance)
	TMap<class ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend;                     // 0x38(0x50)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Landscape.LandscapeEditToolRenderData
struct FLandscapeEditToolRenderData
{
public:
	class UMaterialInterface*                    ToolMaterial;                                      // 0x0(0x8)(ZeroConstructor)
	class UMaterialInterface*                    GizmoMaterial;                                     // 0x8(0x8)(ZeroConstructor)
	int32                                        SelectedType;                                      // 0x10(0x4)(None)
	int32                                        DebugChannelR;                                     // 0x14(0x4)(None)
	int32                                        DebugChannelG;                                     // 0x18(0x4)(None)
	int32                                        DebugChannelB;                                     // 0x1C(0x4)(None)
	class UTexture2D*                            DataTexture;                                       // 0x20(0x8)(ZeroConstructor)
	class UTexture2D*                            LayerContributionTexture;                          // 0x28(0x8)(ZeroConstructor)
	class UTexture2D*                            DirtyTexture;                                      // 0x30(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.WeightmapLayerAllocationInfo
struct FWeightmapLayerAllocationInfo
{
public:
	class ULandscapeLayerInfoObject*             LayerInfo;                                         // 0x0(0x8)(None)
	uint8                                        WeightmapTextureIndex;                             // 0x8(0x1)(None)
	uint8                                        WeightmapTextureChannel;                           // 0x9(0x1)(None)
	uint8                                        Pad_2E16[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeComponentMaterialOverride
struct FLandscapeComponentMaterialOverride
{
public:
	struct FPerPlatformInt                       LODIndex;                                          // 0x0(0x4)(None)
	uint8                                        Pad_2E17[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapePerLODMaterialOverride
struct FLandscapePerLODMaterialOverride
{
public:
	int32                                        LODIndex;                                          // 0x0(0x4)(None)
	uint8                                        Pad_2E18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Landscape.WeightmapData
struct FWeightmapData
{
public:
	TArray<class UTexture2D*>                    Textures;                                          // 0x0(0x10)(ZeroConstructor, AutoWeak, PersistentInstance, UObjectWrapper)
	TArray<struct FWeightmapLayerAllocationInfo> LayerAllocations;                                  // 0x10(0x10)(ZeroConstructor, AssetRegistrySearchable, PersistentInstance, UObjectWrapper)
	TArray<class ULandscapeWeightmapUsage*>      TextureUsages;                                     // 0x20(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Landscape.HeightmapData
struct FHeightmapData
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Landscape.LandscapeLayerComponentData
struct FLandscapeLayerComponentData
{
public:
	struct FHeightmapData                        HeightmapData;                                     // 0x0(0x8)(ZeroConstructor)
	struct FWeightmapData                        WeightmapData;                                     // 0x8(0x30)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Landscape.GizmoSelectData
struct FGizmoSelectData
{
public:
	uint8                                        Pad_2E1B[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x220 (0x220 - 0x0)
// ScriptStruct Landscape.GrassVariety
struct FGrassVariety
{
public:
	class UStaticMesh*                           GrassMesh;                                         // 0x0(0x8)(ZeroConstructor)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x8(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper)
	struct FPerPlatformFloat                     GrassDensity;                                      // 0x18(0x4)(None)
	uint8                                        Pad_2E1C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerQualityLevelFloat                 GrassDensityQuality;                               // 0x20(0x68)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper)
	bool                                         bUseGrid;                                          // 0x88(0x1)(None)
	uint8                                        Pad_2E1D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlacementJitter;                                   // 0x8C(0x4)(None)
	struct FPerPlatformInt                       MinDrawDistance;                                   // 0x90(0x4)(None)
	uint8                                        Pad_2E1E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerQualityLevelInt                   MinDrawDistanceQuality;                            // 0x98(0x68)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper)
	struct FPerPlatformInt                       StartCullDistance;                                 // 0x100(0x4)(None)
	uint8                                        Pad_2E1F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerQualityLevelInt                   StartCullDistanceQuality;                          // 0x108(0x68)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper)
	struct FPerPlatformInt                       EndCullDistance;                                   // 0x170(0x4)(None)
	uint8                                        Pad_2E20[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerQualityLevelInt                   EndCullDistanceQuality;                            // 0x178(0x68)(None)
	int32                                        MinLOD;                                            // 0x1E0(0x4)(None)
	enum class EGrassScaling                     Scaling;                                           // 0x1E4(0x1)(None)
	uint8                                        Pad_2E21[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFloatInterval                        ScaleX;                                            // 0x1E8(0x8)(None)
	struct FFloatInterval                        ScaleY;                                            // 0x1F0(0x8)(None)
	struct FFloatInterval                        ScaleZ;                                            // 0x1F8(0x8)(None)
	bool                                         RandomRotation;                                    // 0x200(0x1)(None)
	bool                                         AlignToSurface;                                    // 0x201(0x1)(None)
	bool                                         bUseLandscapeLightmap;                             // 0x202(0x1)(None)
	struct FLightingChannels                     LightingChannels;                                  // 0x203(0x1)(None)
	bool                                         bReceivesDecals;                                   // 0x204(0x1)(None)
	bool                                         bAffectDistanceFieldLighting;                      // 0x205(0x1)(None)
	bool                                         bCastDynamicShadow;                                // 0x206(0x1)(None)
	bool                                         bCastContactShadow;                                // 0x207(0x1)(None)
	bool                                         bKeepInstanceBufferCPUCopy;                        // 0x208(0x1)(None)
	bool                                         bIgnoreAutomaticBoundsWPODisable;                  // 0x209(0x1)(None)
	uint8                                        Pad_2E22[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       InstanceWorldPositionOffsetDisableDistance;        // 0x20C(0x4)(None)
	enum class EShadowCacheInvalidationBehavior  ShadowCacheInvalidationBehavior;                   // 0x210(0x1)(None)
	bool                                         bBuildFirst;                                       // 0x211(0x1)(None)
	bool                                         bAllowRenderingToRVT;                              // 0x212(0x1)(None)
	uint8                                        Pad_2E23[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TranslucencySortPriority;                          // 0x214(0x4)(None)
	int32                                        InstanceCustomDataOutDisableDistance;              // 0x218(0x4)(None)
	uint8                                        Pad_2E24[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Landscape.LandscapeMaterialTextureStreamingInfo
struct FLandscapeMaterialTextureStreamingInfo
{
public:
	class FName                                  TextureName;                                       // 0x0(0x8)(None)
	float                                        TexelFactor;                                       // 0x8(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeSplineConnection
struct FLandscapeSplineConnection
{
public:
	class ULandscapeSplineSegment*               Segment;                                           // 0x0(0x8)(None)
	uint8                                        End : 1;                                           // Mask: 0x1, PropSize: 0x10x8(0x1)(None)
	uint8                                        Pad_2E27[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.ForeignControlPointData
struct FForeignControlPointData
{
public:
	uint8                                        Pad_2E28[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.ForeignSplineSegmentData
struct FForeignSplineSegmentData
{
public:
	uint8                                        Pad_2E29[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.ForeignWorldSplineData
struct FForeignWorldSplineData
{
public:
	uint8                                        Pad_2E2A[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct Landscape.LandscapeSplineInterpPoint
struct FLandscapeSplineInterpPoint
{
public:
	struct FVector                               Center;                                            // 0x0(0x18)(None)
	struct FVector                               Left;                                              // 0x18(0x18)(None)
	struct FVector                               Right;                                             // 0x30(0x18)(None)
	struct FVector                               FalloffLeft;                                       // 0x48(0x18)(None)
	struct FVector                               FalloffRight;                                      // 0x60(0x18)(None)
	struct FVector                               LayerLeft;                                         // 0x78(0x18)(None)
	struct FVector                               LayerRight;                                        // 0x90(0x18)(None)
	struct FVector                               LayerFalloffLeft;                                  // 0xA8(0x18)(None)
	struct FVector                               LayerFalloffRight;                                 // 0xC0(0x18)(None)
	float                                        StartEndFalloff;                                   // 0xD8(0x4)(None)
	uint8                                        Pad_2E2B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Landscape.LandscapeSplineSegmentConnection
struct FLandscapeSplineSegmentConnection
{
public:
	class ULandscapeSplineControlPoint*          ControlPoint;                                      // 0x0(0x8)(None)
	float                                        TangentLen;                                        // 0x8(0x4)(None)
	class FName                                  SocketName;                                        // 0xC(0x8)(None)
	uint8                                        Pad_2E2C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Landscape.LandscapeSplineMeshEntry
struct FLandscapeSplineMeshEntry
{
public:
	class UStaticMesh*                           Mesh;                                              // 0x0(0x8)(ZeroConstructor)
	TArray<class UMaterialInterface*>            MaterialOverrides;                                 // 0x8(0x10)(None)
	uint8                                        bCenterH : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(None)
	uint8                                        BitPad_24D : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2E2D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CenterAdjust;                                      // 0x20(0x10)(None)
	uint8                                        bScaleToWidth : 1;                                 // Mask: 0x1, PropSize: 0x10x30(0x1)(None)
	uint8                                        BitPad_24E : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2E2E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Scale;                                             // 0x38(0x18)(None)
	enum class ELandscapeSplineMeshOrientation   Orientation;                                       // 0x50(0x1)(None)
	enum class ESplineMeshAxis                   ForwardAxis;                                       // 0x51(0x1)(None)
	enum class ESplineMeshAxis                   UpAxis;                                            // 0x52(0x1)(None)
	uint8                                        Pad_2E2F[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Landscape.GrassInput
struct FGrassInput
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	class ULandscapeGrassType*                   GrassType;                                         // 0x8(0x8)(ZeroConstructor)
	struct FExpressionInput                      Input;                                             // 0x10(0x28)(None)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Landscape.LayerBlendInput
struct FLayerBlendInput
{
public:
	class FName                                  LayerName;                                         // 0x0(0x8)(None)
	enum class ELandscapeLayerBlendType          BlendType;                                         // 0x8(0x1)(None)
	uint8                                        Pad_2E31[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FExpressionInput                      LayerInput;                                        // 0x10(0x28)(ZeroConstructor)
	struct FExpressionInput                      HeightInput;                                       // 0x38(0x28)(None)
	float                                        PreviewWeight;                                     // 0x60(0x4)(None)
	uint8                                        Pad_2E32[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ConstLayerInput;                                   // 0x68(0x18)(None)
	float                                        ConstHeightInput;                                  // 0x80(0x4)(None)
	uint8                                        Pad_2E33[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeInfoLayerSettings
struct FLandscapeInfoLayerSettings
{
public:
	class ULandscapeLayerInfoObject*             LayerInfoObj;                                      // 0x0(0x8)(None)
	class FName                                  LayerName;                                         // 0x8(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.LandscapeEditorLayerSettings
struct FLandscapeEditorLayerSettings
{
public:
	uint8                                        Pad_2E34[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Landscape.LandscapeLayerStruct
struct FLandscapeLayerStruct
{
public:
	class ULandscapeLayerInfoObject*             LayerInfoObj;                                      // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.LandscapeImportLayerInfo
struct FLandscapeImportLayerInfo
{
public:
	uint8                                        Pad_2E35[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeProxyMaterialOverride
struct FLandscapeProxyMaterialOverride
{
public:
	struct FPerPlatformInt                       LODIndex;                                          // 0x0(0x4)(None)
	uint8                                        Pad_2E37[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Landscape.PhysicalMaterialInput
struct FPhysicalMaterialInput
{
public:
	class UPhysicalMaterial*                     PhysicalMaterial;                                  // 0x0(0x8)(ZeroConstructor)
	struct FExpressionInput                      Input;                                             // 0x8(0x28)(None)
};

}


