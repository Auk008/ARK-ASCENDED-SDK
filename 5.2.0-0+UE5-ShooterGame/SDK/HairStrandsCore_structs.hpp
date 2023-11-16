#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOptimusGroomExecDomain : uint8
{
	None                           = 0,
	ControlPoint                   = 1,
	Curve                          = 2,
	EOptimusGroomExecDomain_MAX    = 3,
};

enum class EGroomCacheImportType : uint8
{
	None                           = 0,
	Strands                        = 1,
	Guides                         = 2,
	All                            = 3,
	EGroomCacheImportType_MAX      = 4,
};

enum class EHairAtlasTextureType : uint8
{
	Depth                          = 0,
	Tangent                        = 1,
	Attribute                      = 2,
	Coverage                       = 3,
	AuxilaryData                   = 4,
	Material                       = 5,
	EHairAtlasTextureType_MAX      = 6,
};

enum class EHairCardsClusterType : uint8
{
	Low                            = 0,
	High                           = 1,
	EHairCardsClusterType_MAX      = 2,
};

enum class EHairCardsGenerationType : uint8
{
	CardsCount                     = 0,
	UseGuides                      = 1,
	EHairCardsGenerationType_MAX   = 2,
};

enum class EHairCardsSourceType : uint8
{
	Procedural                     = 0,
	Imported                       = 1,
	EHairCardsSourceType_MAX       = 2,
};

enum class EHairInterpolationQuality : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Unknown                        = 3,
	EHairInterpolationQuality_MAX  = 4,
};

enum class EHairInterpolationWeight : uint8
{
	Parametric                     = 0,
	Root                           = 1,
	Index                          = 2,
	Distance                       = 3,
	Unknown                        = 4,
	EHairInterpolationWeight_MAX   = 5,
};

enum class EGroomGeometryType : uint8
{
	Strands                        = 0,
	Cards                          = 1,
	Meshes                         = 2,
	EGroomGeometryType_MAX         = 3,
};

enum class EGroomBindingType : uint8
{
	NoneBinding                    = 0,
	Rigid                          = 1,
	Skinning                       = 2,
	EGroomBindingType_MAX          = 3,
};

enum class EGroomOverrideType : uint8
{
	Auto                           = 0,
	Enable                         = 1,
	Disable                        = 2,
	EGroomOverrideType_MAX         = 3,
};

enum class EGroomNiagaraSolvers : uint8
{
	None                           = 0,
	CosseratRods                   = 2,
	AngularSprings                 = 4,
	CustomSolver                   = 8,
	EGroomNiagaraSolvers_MAX       = 9,
};

enum class EGroomStrandsSize : uint8
{
	None                           = 0,
	Size2                          = 2,
	Size4                          = 4,
	Size8                          = 8,
	Size16                         = 16,
	Size32                         = 32,
	EGroomStrandsSize_MAX          = 33,
};

enum class EGroomInterpolationType : uint8
{
	None                           = 0,
	RigidTransform                 = 2,
	OffsetTransform                = 4,
	SmoothTransform                = 8,
	EGroomInterpolationType_MAX    = 9,
};

enum class EGroomBindingMeshType : uint8
{
	SkeletalMesh                   = 0,
	GeometryCache                  = 1,
	EGroomBindingMeshType_MAX      = 2,
};

enum class EGroomCacheAttributes : uint8
{
	None                           = 0,
	Position                       = 1,
	Width                          = 2,
	Color                          = 4,
	PositionWidth                  = 3,
	PositionColor                  = 5,
	WidthColor                     = 5,
	PositionWidthColor             = 7,
	EGroomCacheAttributes_MAX      = 8,
};

enum class EGroomCacheType : uint8
{
	None                           = 0,
	Strands                        = 1,
	Guides                         = 2,
	EGroomCacheType_MAX            = 3,
};

enum class EGroomBasisType : uint8
{
	NoBasis                        = 0,
	BezierBasis                    = 1,
	BsplineBasis                   = 2,
	CatmullromBasis                = 3,
	HermiteBasis                   = 4,
	PowerBasis                     = 5,
	EGroomBasisType_MAX            = 6,
};

enum class EGroomCurveType : uint8
{
	Cubic                          = 0,
	Linear                         = 1,
	VariableOrder                  = 2,
	EGroomCurveType_MAX            = 3,
};

enum class EFollicleMaskChannel : uint8
{
	R                              = 0,
	G                              = 1,
	B                              = 2,
	A                              = 3,
	EFollicleMaskChannel_MAX       = 4,
};

enum class EStrandsTexturesTraceType : uint8
{
	TraceInside                    = 0,
	TraceOuside                    = 1,
	TraceBidirectional             = 2,
	EStrandsTexturesTraceType_MAX  = 3,
};

enum class EStrandsTexturesMeshType : uint8
{
	Static                         = 0,
	Skeletal                       = 1,
	EStrandsTexturesMeshType_MAX   = 2,
};

enum class EGroomInterpolationQuality : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Unknown                        = 3,
	EGroomInterpolationQuality_MAX = 4,
};

enum class EGroomInterpolationWeight : uint8
{
	Parametric                     = 0,
	Root                           = 1,
	Index                          = 2,
	Unknown                        = 3,
	EGroomInterpolationWeight_MAX  = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct HairStrandsCore.GroomConversionSettings
struct FGroomConversionSettings
{
public:
	struct FVector                               Rotation;                                          // 0x0(0x18)(None)
	struct FVector                               Scale;                                             // 0x18(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct HairStrandsCore.GroomCacheImportSettings
struct FGroomCacheImportSettings
{
public:
	bool                                         bImportGroomCache;                                 // 0x0(0x1)(None)
	enum class EGroomCacheImportType             ImportType;                                        // 0x1(0x1)(None)
	uint8                                        Pad_11C5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FrameStart;                                        // 0x4(0x4)(None)
	int32                                        FrameEnd;                                          // 0x8(0x4)(None)
	bool                                         bSkipEmptyFrames;                                  // 0xC(0x1)(None)
	bool                                         bImportGroomAsset;                                 // 0xD(0x1)(None)
	uint8                                        Pad_11C7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       GroomAsset;                                        // 0x10(0x20)(None)
	bool                                         bOverrideConversionSettings;                       // 0x30(0x1)(None)
	uint8                                        Pad_11C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGroomConversionSettings              ConversionSettings;                                // 0x38(0x30)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupDesc
struct FHairGroupDesc
{
public:
	float                                        HairLength;                                        // 0x0(0x4)(None)
	float                                        HairWidth;                                         // 0x4(0x4)(None)
	bool                                         HairWidth_Override;                                // 0x8(0x1)(None)
	uint8                                        Pad_11CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HairRootScale;                                     // 0xC(0x4)(None)
	bool                                         HairRootScale_Override;                            // 0x10(0x1)(None)
	uint8                                        Pad_11CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HairTipScale;                                      // 0x14(0x4)(None)
	bool                                         HairTipScale_Override;                             // 0x18(0x1)(None)
	uint8                                        Pad_11CD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HairShadowDensity;                                 // 0x1C(0x4)(None)
	bool                                         HairShadowDensity_Override;                        // 0x20(0x1)(None)
	uint8                                        Pad_11CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HairRaytracingRadiusScale;                         // 0x24(0x4)(None)
	bool                                         HairRaytracingRadiusScale_Override;                // 0x28(0x1)(None)
	bool                                         bUseHairRaytracingGeometry;                        // 0x29(0x1)(None)
	bool                                         bUseHairRaytracingGeometry_Override;               // 0x2A(0x1)(None)
	uint8                                        Pad_11D0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LODBias;                                           // 0x2C(0x4)(None)
	bool                                         bUseStableRasterization;                           // 0x30(0x1)(None)
	bool                                         bUseStableRasterization_Override;                  // 0x31(0x1)(None)
	bool                                         bScatterSceneLighting;                             // 0x32(0x1)(None)
	bool                                         bScatterSceneLighting_Override;                    // 0x33(0x1)(None)
	bool                                         bSupportVoxelization;                              // 0x34(0x1)(None)
	bool                                         bSupportVoxelization_Override;                     // 0x35(0x1)(None)
	uint8                                        Pad_11D1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HairLengthScale;                                   // 0x38(0x4)(None)
	bool                                         HairLengthScale_Override;                          // 0x3C(0x1)(None)
	uint8                                        Pad_11D2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupInfo
struct FHairGroupInfo
{
public:
	int32                                        GroupID;                                           // 0x0(0x4)(None)
	class FName                                  GroupName;                                         // 0x4(0x8)(None)
	int32                                        NumCurves;                                         // 0xC(0x4)(None)
	int32                                        NumGuides;                                         // 0x10(0x4)(None)
	int32                                        NumCurveVertices;                                  // 0x14(0x4)(None)
	int32                                        NumGuideVertices;                                  // 0x18(0x4)(None)
	float                                        MaxCurveLength;                                    // 0x1C(0x4)(None)
	float                                        MaxImportedWidth;                                  // 0x20(0x4)(None)
	int32                                        GroupCardsID;                                      // 0x24(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsMaterial
struct FHairGroupsMaterial
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(None)
	class FName                                  SlotName;                                          // 0x8(0x8)(None)
};

// 0x4 (0x2C - 0x28)
// ScriptStruct HairStrandsCore.HairGroupInfoWithVisibility
struct FHairGroupInfoWithVisibility : public FHairGroupInfo
{
public:
	bool                                         bIsVisible;                                        // 0x28(0x1)(None)
	uint8                                        Pad_11D4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct HairStrandsCore.HairCardsClusterSettings
struct FHairCardsClusterSettings
{
public:
	float                                        ClusterDecimation;                                 // 0x0(0x4)(None)
	enum class EHairCardsClusterType             Type;                                              // 0x4(0x1)(None)
	bool                                         bUseGuide;                                         // 0x5(0x1)(None)
	uint8                                        Pad_11D8[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct HairStrandsCore.HairCardsGeometrySettings
struct FHairCardsGeometrySettings
{
public:
	enum class EHairCardsGenerationType          GenerationType;                                    // 0x0(0x1)(None)
	uint8                                        Pad_11D9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CardsCount;                                        // 0x4(0x4)(None)
	enum class EHairCardsClusterType             ClusterType;                                       // 0x8(0x1)(None)
	uint8                                        Pad_11DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinSegmentLength;                                  // 0xC(0x4)(None)
	float                                        AngularThreshold;                                  // 0x10(0x4)(None)
	float                                        MinCardsLength;                                    // 0x14(0x4)(None)
	float                                        MaxCardsLength;                                    // 0x18(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HairStrandsCore.HairCardsTextureSettings
struct FHairCardsTextureSettings
{
public:
	int32                                        AtlasMaxResolution;                                // 0x0(0x4)(None)
	int32                                        PixelPerCentimeters;                               // 0x4(0x4)(None)
	int32                                        LengthTextureCount;                                // 0x8(0x4)(None)
	int32                                        DensityTextureCount;                               // 0xC(0x4)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsProceduralCards
struct FHairGroupsProceduralCards
{
public:
	struct FHairCardsClusterSettings             ClusterSettings;                                   // 0x0(0x8)(None)
	struct FHairCardsGeometrySettings            GeometrySettings;                                  // 0x8(0x1C)(None)
	struct FHairCardsTextureSettings             TextureSettings;                                   // 0x24(0x10)(None)
	int32                                        Version;                                           // 0x34(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupCardsInfo
struct FHairGroupCardsInfo
{
public:
	int32                                        NumCards;                                          // 0x0(0x4)(None)
	int32                                        NumCardVertices;                                   // 0x4(0x4)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupCardsTextures
struct FHairGroupCardsTextures
{
public:
	class UTexture2D*                            DepthTexture;                                      // 0x0(0x8)(ZeroConstructor)
	class UTexture2D*                            CoverageTexture;                                   // 0x8(0x8)(ZeroConstructor)
	class UTexture2D*                            TangentTexture;                                    // 0x10(0x8)(ZeroConstructor)
	class UTexture2D*                            AttributeTexture;                                  // 0x18(0x8)(ZeroConstructor)
	class UTexture2D*                            AuxilaryDataTexture;                               // 0x20(0x8)(ZeroConstructor)
	class UTexture2D*                            MaterialTexture;                                   // 0x28(0x8)(None)
	uint8                                        Pad_11E0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsCardsSourceDescription
struct FHairGroupsCardsSourceDescription
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(ZeroConstructor)
	class FName                                  MaterialSlotName;                                  // 0x8(0x8)(None)
	enum class EHairCardsSourceType              SourceType;                                        // 0x10(0x1)(None)
	uint8                                        Pad_11E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           ProceduralMesh;                                    // 0x18(0x8)(ZeroConstructor)
	class FString                                ProceduralMeshKey;                                 // 0x20(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UStaticMesh*                           ImportedMesh;                                      // 0x30(0x8)(ZeroConstructor)
	struct FHairGroupsProceduralCards            ProceduralSettings;                                // 0x38(0x38)(None)
	struct FHairGroupCardsTextures               Textures;                                          // 0x70(0x38)(None)
	int32                                        GroupIndex;                                        // 0xA8(0x4)(None)
	int32                                        LODIndex;                                          // 0xAC(0x4)(None)
	struct FHairGroupCardsInfo                   CardsInfo;                                         // 0xB0(0x8)(None)
	class FString                                ImportedMeshKey;                                   // 0xB8(0x10)(None)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct HairStrandsCore.HairLODSettings
struct FHairLODSettings
{
public:
	float                                        CurveDecimation;                                   // 0x0(0x4)(None)
	float                                        VertexDecimation;                                  // 0x4(0x4)(None)
	float                                        AngularThreshold;                                  // 0x8(0x4)(None)
	float                                        ScreenSize;                                        // 0xC(0x4)(None)
	float                                        ThicknessScale;                                    // 0x10(0x4)(None)
	bool                                         bVisible;                                          // 0x14(0x1)(None)
	enum class EGroomGeometryType                GeometryType;                                      // 0x15(0x1)(None)
	enum class EGroomBindingType                 BindingType;                                       // 0x16(0x1)(None)
	enum class EGroomOverrideType                Simulation;                                        // 0x17(0x1)(None)
	enum class EGroomOverrideType                GlobalInterpolation;                               // 0x18(0x1)(None)
	uint8                                        Pad_11E8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct HairStrandsCore.HairDecimationSettings
struct FHairDecimationSettings
{
public:
	float                                        CurveDecimation;                                   // 0x0(0x4)(None)
	float                                        VertexDecimation;                                  // 0x4(0x4)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct HairStrandsCore.HairInterpolationSettings
struct FHairInterpolationSettings
{
public:
	bool                                         bOverrideGuides;                                   // 0x0(0x1)(None)
	uint8                                        Pad_11EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HairToGuideDensity;                                // 0x4(0x4)(None)
	enum class EHairInterpolationQuality         InterpolationQuality;                              // 0x8(0x1)(None)
	enum class EHairInterpolationWeight          InterpolationDistance;                             // 0x9(0x1)(None)
	bool                                         bRandomizeGuide;                                   // 0xA(0x1)(None)
	bool                                         bUseUniqueGuide;                                   // 0xB(0x1)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct HairStrandsCore.HairDeformationSettings
struct FHairDeformationSettings
{
public:
	bool                                         bCanEditRigging;                                   // 0x0(0x1)(None)
	bool                                         bEnableRigging;                                    // 0x1(0x1)(None)
	uint8                                        Pad_11EF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumCurves;                                         // 0x4(0x4)(None)
	int32                                        NumPoints;                                         // 0x8(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsInterpolation
struct FHairGroupsInterpolation
{
public:
	struct FHairDecimationSettings               DecimationSettings;                                // 0x0(0x8)(None)
	struct FHairInterpolationSettings            InterpolationSettings;                             // 0x8(0xC)(None)
	struct FHairDeformationSettings              RiggingSettings;                                   // 0x14(0xC)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsLOD
struct FHairGroupsLOD
{
public:
	TArray<struct FHairLODSettings>              LODs;                                              // 0x0(0x10)(None)
	float                                        ClusterWorldSize;                                  // 0x10(0x4)(None)
	float                                        ClusterScreenSizeScale;                            // 0x14(0x4)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsMeshesSourceDescription
struct FHairGroupsMeshesSourceDescription
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(ZeroConstructor)
	class FName                                  MaterialSlotName;                                  // 0x8(0x8)(None)
	class UStaticMesh*                           ImportedMesh;                                      // 0x10(0x8)(ZeroConstructor)
	struct FHairGroupCardsTextures               Textures;                                          // 0x18(0x38)(None)
	int32                                        GroupIndex;                                        // 0x50(0x4)(None)
	int32                                        LODIndex;                                          // 0x54(0x4)(None)
	class FString                                ImportedMeshKey;                                   // 0x58(0x10)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct HairStrandsCore.HairSolverSettings
struct FHairSolverSettings
{
public:
	bool                                         EnableSimulation;                                  // 0x0(0x1)(None)
	enum class EGroomNiagaraSolvers              NiagaraSolver;                                     // 0x1(0x1)(None)
	uint8                                        Pad_11F3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UNiagaraSystem>         CustomSystem;                                      // 0x8(0x30)(None)
	float                                        GravityPreloading;                                 // 0x38(0x4)(None)
	int32                                        SubSteps;                                          // 0x3C(0x4)(None)
	int32                                        IterationCount;                                    // 0x40(0x4)(None)
	uint8                                        Pad_11F4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct HairStrandsCore.HairExternalForces
struct FHairExternalForces
{
public:
	struct FVector                               GravityVector;                                     // 0x0(0x18)(None)
	float                                        AirDrag;                                           // 0x18(0x4)(None)
	uint8                                        Pad_11F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AirVelocity;                                       // 0x20(0x18)(None)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct HairStrandsCore.HairBendConstraint
struct FHairBendConstraint
{
public:
	bool                                         SolveBend;                                         // 0x0(0x1)(None)
	bool                                         ProjectBend;                                       // 0x1(0x1)(None)
	uint8                                        Pad_11F6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BendDamping;                                       // 0x4(0x4)(None)
	float                                        BendStiffness;                                     // 0x8(0x4)(None)
	uint8                                        Pad_11F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    BendScale;                                         // 0x10(0x88)(None)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct HairStrandsCore.HairStretchConstraint
struct FHairStretchConstraint
{
public:
	bool                                         SolveStretch;                                      // 0x0(0x1)(None)
	bool                                         ProjectStretch;                                    // 0x1(0x1)(None)
	uint8                                        Pad_11F8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchDamping;                                    // 0x4(0x4)(None)
	float                                        StretchStiffness;                                  // 0x8(0x4)(None)
	uint8                                        Pad_11F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    StretchScale;                                      // 0x10(0x88)(None)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct HairStrandsCore.HairCollisionConstraint
struct FHairCollisionConstraint
{
public:
	bool                                         SolveCollision;                                    // 0x0(0x1)(None)
	bool                                         ProjectCollision;                                  // 0x1(0x1)(None)
	uint8                                        Pad_11FA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StaticFriction;                                    // 0x4(0x4)(None)
	float                                        KineticFriction;                                   // 0x8(0x4)(None)
	float                                        StrandsViscosity;                                  // 0xC(0x4)(None)
	struct FIntVector                            GridDimension;                                     // 0x10(0xC)(None)
	float                                        CollisionRadius;                                   // 0x1C(0x4)(None)
	struct FRuntimeFloatCurve                    RadiusScale;                                       // 0x20(0x88)(None)
};

// 0x1D8 (0x1D8 - 0x0)
// ScriptStruct HairStrandsCore.HairMaterialConstraints
struct FHairMaterialConstraints
{
public:
	struct FHairBendConstraint                   BendConstraint;                                    // 0x0(0x98)(ZeroConstructor, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FHairStretchConstraint                StretchConstraint;                                 // 0x98(0x98)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FHairCollisionConstraint              CollisionConstraint;                               // 0x130(0xA8)(None)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct HairStrandsCore.HairStrandsParameters
struct FHairStrandsParameters
{
public:
	enum class EGroomStrandsSize                 StrandsSize;                                       // 0x0(0x1)(None)
	uint8                                        Pad_1200[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StrandsDensity;                                    // 0x4(0x4)(None)
	float                                        StrandsSmoothing;                                  // 0x8(0x4)(None)
	float                                        StrandsThickness;                                  // 0xC(0x4)(None)
	struct FRuntimeFloatCurve                    ThicknessScale;                                    // 0x10(0x88)(None)
};

// 0x2F0 (0x2F0 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsPhysics
struct FHairGroupsPhysics
{
public:
	struct FHairSolverSettings                   SolverSettings;                                    // 0x0(0x48)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FHairExternalForces                   ExternalForces;                                    // 0x48(0x38)(None)
	struct FHairMaterialConstraints              MaterialConstraints;                               // 0x80(0x1D8)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FHairStrandsParameters                StrandsParameters;                                 // 0x258(0x98)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct HairStrandsCore.HairSimulationSolver
struct FHairSimulationSolver
{
public:
	bool                                         bEnableSimulation;                                 // 0x0(0x1)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct HairStrandsCore.HairSimulationForces
struct FHairSimulationForces
{
public:
	struct FVector                               GravityVector;                                     // 0x0(0x18)(None)
	float                                        AirDrag;                                           // 0x18(0x4)(None)
	uint8                                        Pad_1203[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AirVelocity;                                       // 0x20(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct HairStrandsCore.HairSimulationConstraints
struct FHairSimulationConstraints
{
public:
	float                                        BendDamping;                                       // 0x0(0x4)(None)
	float                                        BendStiffness;                                     // 0x4(0x4)(None)
	float                                        StretchDamping;                                    // 0x8(0x4)(None)
	float                                        StretchStiffness;                                  // 0xC(0x4)(None)
	float                                        StaticFriction;                                    // 0x10(0x4)(None)
	float                                        KineticFriction;                                   // 0x14(0x4)(None)
	float                                        StrandsViscosity;                                  // 0x18(0x4)(None)
	float                                        CollisionRadius;                                   // 0x1C(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct HairStrandsCore.HairSimulationSetup
struct FHairSimulationSetup
{
public:
	bool                                         bResetSimulation;                                  // 0x0(0x1)(None)
	bool                                         bDebugSimulation;                                  // 0x1(0x1)(None)
	bool                                         bLocalSimulation;                                  // 0x2(0x1)(None)
	uint8                                        Pad_1204[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LinearVelocityScale;                               // 0x4(0x4)(None)
	float                                        AngularVelocityScale;                              // 0x8(0x4)(None)
	uint8                                        Pad_1205[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LocalBone;                                         // 0x10(0x10)(None)
	float                                        TeleportDistance;                                  // 0x20(0x4)(None)
	uint8                                        Pad_1206[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct HairStrandsCore.HairSimulationSettings
struct FHairSimulationSettings
{
public:
	bool                                         bOverrideSettings;                                 // 0x0(0x1)(None)
	uint8                                        Pad_1209[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHairSimulationSetup                  SimulationSetup;                                   // 0x8(0x28)(None)
	struct FHairSimulationSolver                 SolverSettings;                                    // 0x30(0x1)(None)
	uint8                                        Pad_120A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHairSimulationForces                 ExternalForces;                                    // 0x38(0x38)(None)
	struct FHairSimulationConstraints            MaterialConstraints;                               // 0x70(0x20)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct HairStrandsCore.HairGeometrySettings
struct FHairGeometrySettings
{
public:
	float                                        HairWidth;                                         // 0x0(0x4)(None)
	float                                        HairRootScale;                                     // 0x4(0x4)(None)
	float                                        HairTipScale;                                      // 0x8(0x4)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct HairStrandsCore.HairShadowSettings
struct FHairShadowSettings
{
public:
	float                                        HairShadowDensity;                                 // 0x0(0x4)(None)
	float                                        HairRaytracingRadiusScale;                         // 0x4(0x4)(None)
	bool                                         bUseHairRaytracingGeometry;                        // 0x8(0x1)(None)
	bool                                         bVoxelize;                                         // 0x9(0x1)(None)
	uint8                                        Pad_120B[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct HairStrandsCore.HairAdvancedRenderingSettings
struct FHairAdvancedRenderingSettings
{
public:
	bool                                         bUseStableRasterization;                           // 0x0(0x1)(None)
	bool                                         bScatterSceneLighting;                             // 0x1(0x1)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct HairStrandsCore.HairGroupsRendering
struct FHairGroupsRendering
{
public:
	class FName                                  MaterialSlotName;                                  // 0x0(0x8)(None)
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(None)
	struct FHairGeometrySettings                 GeometrySettings;                                  // 0x10(0xC)(None)
	struct FHairShadowSettings                   ShadowSettings;                                    // 0x1C(0xC)(None)
	struct FHairAdvancedRenderingSettings        AdvancedSettings;                                  // 0x28(0x2)(None)
	uint8                                        Pad_120E[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HairStrandsCore.GoomBindingGroupInfo
struct FGoomBindingGroupInfo
{
public:
	int32                                        RenRootCount;                                      // 0x0(0x4)(None)
	int32                                        RenLODCount;                                       // 0x4(0x4)(None)
	int32                                        SimRootCount;                                      // 0x8(0x4)(None)
	int32                                        SimLODCount;                                       // 0xC(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct HairStrandsCore.GroomAnimationInfo
struct FGroomAnimationInfo
{
public:
	uint32                                       NumFrames;                                         // 0x0(0x4)(None)
	float                                        SecondsPerFrame;                                   // 0x4(0x4)(None)
	float                                        Duration;                                          // 0x8(0x4)(None)
	float                                        StartTime;                                         // 0xC(0x4)(None)
	float                                        EndTime;                                           // 0x10(0x4)(None)
	int32                                        StartFrame;                                        // 0x14(0x4)(None)
	int32                                        EndFrame;                                          // 0x18(0x4)(None)
	enum class EGroomCacheAttributes             Attributes;                                        // 0x1C(0x1)(None)
	uint8                                        Pad_120F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct HairStrandsCore.GroomCacheInfo
struct FGroomCacheInfo
{
public:
	int32                                        Version;                                           // 0x0(0x4)(None)
	enum class EGroomCacheType                   Type;                                              // 0x4(0x1)(None)
	uint8                                        Pad_1211[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGroomAnimationInfo                   AnimationInfo;                                     // 0x8(0x20)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HairStrandsCore.FollicleMaskOptions
struct FFollicleMaskOptions
{
public:
	class UGroomAsset*                           Groom;                                             // 0x0(0x8)(None)
	enum class EFollicleMaskChannel              Channel;                                           // 0x8(0x1)(None)
	uint8                                        Pad_1212[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3C (0x3C - 0x0)
// ScriptStruct HairStrandsCore.GroomHairGroupPreview
struct FGroomHairGroupPreview
{
public:
	class FName                                  GroupName;                                         // 0x0(0x8)(None)
	int32                                        GroupID;                                           // 0x8(0x4)(None)
	int32                                        CurveCount;                                        // 0xC(0x4)(None)
	int32                                        GuideCount;                                        // 0x10(0x4)(None)
	bool                                         bHasRootUV;                                        // 0x14(0x1)(None)
	bool                                         bHasClumpID;                                       // 0x15(0x1)(None)
	bool                                         bHasColor;                                         // 0x16(0x1)(None)
	bool                                         bHasRoughness;                                     // 0x17(0x1)(None)
	bool                                         bHasAO;                                            // 0x18(0x1)(None)
	bool                                         bHasPrecomputedWeights;                            // 0x19(0x1)(None)
	uint8                                        Pad_1214[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHairGroupsInterpolation              InterpolationSettings;                             // 0x1C(0x20)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct HairStrandsCore.GroomBuildSettings
struct FGroomBuildSettings
{
public:
	bool                                         bOverrideGuides;                                   // 0x0(0x1)(None)
	uint8                                        Pad_1217[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HairToGuideDensity;                                // 0x4(0x4)(None)
	enum class EGroomInterpolationQuality        InterpolationQuality;                              // 0x8(0x1)(None)
	enum class EGroomInterpolationWeight         InterpolationDistance;                             // 0x9(0x1)(None)
	bool                                         bRandomizeGuide;                                   // 0xA(0x1)(None)
	bool                                         bUseUniqueGuide;                                   // 0xB(0x1)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct HairStrandsCore.MovieSceneGroomCacheParams
struct FMovieSceneGroomCacheParams
{
public:
	class UGroomCache*                           GroomCache;                                        // 0x0(0x8)(None)
	struct FFrameNumber                          FirstLoopStartFrameOffset;                         // 0x8(0x4)(None)
	struct FFrameNumber                          StartFrameOffset;                                  // 0xC(0x4)(None)
	struct FFrameNumber                          EndFrameOffset;                                    // 0x10(0x4)(None)
	float                                        PlayRate;                                          // 0x14(0x4)(None)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(None)
	uint8                                        Pad_121B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x28 - 0x20)
// ScriptStruct HairStrandsCore.MovieSceneGroomCacheSectionTemplateParameters
struct FMovieSceneGroomCacheSectionTemplateParameters : public FMovieSceneGroomCacheParams
{
public:
	struct FFrameNumber                          SectionStartTime;                                  // 0x20(0x4)(None)
	struct FFrameNumber                          SectionEndTime;                                    // 0x24(0x4)(None)
};

// 0x28 (0x48 - 0x20)
// ScriptStruct HairStrandsCore.MovieSceneGroomCacheSectionTemplate
struct FMovieSceneGroomCacheSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneGroomCacheSectionTemplateParameters Params;                                            // 0x20(0x28)(ZeroConstructor)
};

}


