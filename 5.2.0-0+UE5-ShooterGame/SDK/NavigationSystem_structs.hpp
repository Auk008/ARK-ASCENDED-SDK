#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERuntimeGenerationType : uint8
{
	Static                         = 0,
	DynamicModifiersOnly           = 1,
	Dynamic                        = 2,
	LegacyGeneration               = 3,
	ERuntimeGenerationType_MAX     = 4,
};

enum class ENavCostDisplay : uint8
{
	TotalCost                      = 0,
	HeuristicOnly                  = 1,
	RealCostOnly                   = 2,
	ENavCostDisplay_MAX            = 3,
};

enum class ERecastPartitioning : uint8
{
	Monotone                       = 0,
	Watershed                      = 1,
	ChunkyMonotone                 = 2,
	ERecastPartitioning_MAX        = 3,
};

enum class EHeightFieldRenderMode : uint8
{
	Solid                          = 0,
	Walkable                       = 1,
	EHeightFieldRenderMode_MAX     = 2,
};

enum class ENavSystemOverridePolicy : uint8
{
	Override                       = 0,
	Append                         = 1,
	Skip                           = 2,
	ENavSystemOverridePolicy_MAX   = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct NavigationSystem.NavCollisionCylinder
struct FNavCollisionCylinder
{
public:
	struct FVector                               Offset;                                            // 0x0(0x18)(None)
	float                                        Radius;                                            // 0x18(0x4)(None)
	float                                        Height;                                            // 0x1C(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct NavigationSystem.NavCollisionBox
struct FNavCollisionBox
{
public:
	struct FVector                               Offset;                                            // 0x0(0x18)(None)
	struct FVector                               Extent;                                            // 0x18(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NavigationSystem.NavigationFilterArea
struct FNavigationFilterArea
{
public:
	class UClass*                                AreaClass;                                         // 0x0(0x8)(None)
	float                                        TravelCostOverride;                                // 0x8(0x4)(None)
	float                                        EnteringCostOverride;                              // 0xC(0x4)(None)
	uint8                                        bIsExcluded : 1;                                   // Mask: 0x1, PropSize: 0x10x10(0x1)(None)
	uint8                                        bOverrideTravelCost : 1;                           // Mask: 0x2, PropSize: 0x10x10(0x1)(None)
	uint8                                        bOverrideEnteringCost : 1;                         // Mask: 0x4, PropSize: 0x10x10(0x1)(None)
	uint8                                        Pad_2824[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct NavigationSystem.NavigationFilterFlags
struct FNavigationFilterFlags
{
public:
	uint8                                        bNavFlag0 : 1;                                     // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bNavFlag1 : 1;                                     // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bNavFlag2 : 1;                                     // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        bNavFlag3 : 1;                                     // Mask: 0x8, PropSize: 0x10x0(0x1)(None)
	uint8                                        bNavFlag4 : 1;                                     // Mask: 0x10, PropSize: 0x10x0(0x1)(None)
	uint8                                        bNavFlag5 : 1;                                     // Mask: 0x20, PropSize: 0x10x0(0x1)(None)
	uint8                                        bNavFlag6 : 1;                                     // Mask: 0x40, PropSize: 0x10x0(0x1)(None)
	uint8                                        bNavFlag7 : 1;                                     // Mask: 0x80, PropSize: 0x10x0(0x1)(None)
	uint8                                        bNavFlag8 : 1;                                     // Mask: 0x1, PropSize: 0x10x1(0x1)(None)
	uint8                                        bNavFlag9 : 1;                                     // Mask: 0x2, PropSize: 0x10x1(0x1)(None)
	uint8                                        bNavFlag10 : 1;                                    // Mask: 0x4, PropSize: 0x10x1(0x1)(None)
	uint8                                        bNavFlag11 : 1;                                    // Mask: 0x8, PropSize: 0x10x1(0x1)(None)
	uint8                                        bNavFlag12 : 1;                                    // Mask: 0x10, PropSize: 0x10x1(0x1)(None)
	uint8                                        bNavFlag13 : 1;                                    // Mask: 0x20, PropSize: 0x10x1(0x1)(None)
	uint8                                        bNavFlag14 : 1;                                    // Mask: 0x40, PropSize: 0x10x1(0x1)(None)
	uint8                                        bNavFlag15 : 1;                                    // Mask: 0x80, PropSize: 0x10x1(0x1)(None)
	uint8                                        Pad_283C[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NavigationSystem.NavGraphEdge
struct FNavGraphEdge
{
public:
	uint8                                        Pad_283D[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NavigationSystem.NavGraphNode
struct FNavGraphNode
{
public:
	class UObject*                               Owner;                                             // 0x0(0x8)(None)
	uint8                                        Pad_283E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NavigationSystem.SupportedAreaData
struct FSupportedAreaData
{
public:
	class FString                                AreaClassName;                                     // 0x0(0x10)(None)
	int32                                        AreaID;                                            // 0x10(0x4)(None)
	uint8                                        Pad_283F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                AreaClass;                                         // 0x18(0x8)(None)
};

// 0x8 (0x70 - 0x68)
// ScriptStruct NavigationSystem.NavLinkCustomInstanceData
struct FNavLinkCustomInstanceData : public FActorComponentInstanceData
{
public:
	uint32                                       NavLinkUserId;                                     // 0x68(0x4)(None)
	uint8                                        Pad_2841[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties
struct FRecastNavMeshGenerationProperties
{
public:
	int32                                        TilePoolSize;                                      // 0x0(0x4)(None)
	float                                        TileSizeUU;                                        // 0x4(0x4)(None)
	float                                        CellSize;                                          // 0x8(0x4)(None)
	float                                        CellHeight;                                        // 0xC(0x4)(None)
	float                                        AgentRadius;                                       // 0x10(0x4)(None)
	float                                        AgentHeight;                                       // 0x14(0x4)(None)
	float                                        AgentMaxSlope;                                     // 0x18(0x4)(None)
	float                                        AgentMaxStepHeight;                                // 0x1C(0x4)(None)
	float                                        MinRegionArea;                                     // 0x20(0x4)(None)
	float                                        MergeRegionSize;                                   // 0x24(0x4)(None)
	float                                        MaxSimplificationError;                            // 0x28(0x4)(None)
	int32                                        TileNumberHardLimit;                               // 0x2C(0x4)(None)
	enum class ERecastPartitioning               RegionPartitioning;                                // 0x30(0x1)(None)
	enum class ERecastPartitioning               LayerPartitioning;                                 // 0x31(0x1)(None)
	uint8                                        Pad_2843[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RegionChunkSplits;                                 // 0x34(0x4)(None)
	int32                                        LayerChunkSplits;                                  // 0x38(0x4)(None)
	uint8                                        bSortNavigationAreasByCost : 1;                    // Mask: 0x1, PropSize: 0x10x3C(0x1)(None)
	uint8                                        bPerformVoxelFiltering : 1;                        // Mask: 0x2, PropSize: 0x10x3C(0x1)(None)
	uint8                                        bMarkLowHeightAreas : 1;                           // Mask: 0x4, PropSize: 0x10x3C(0x1)(None)
	uint8                                        bUseExtraTopCellWhenMarkingAreas : 1;              // Mask: 0x8, PropSize: 0x10x3C(0x1)(None)
	uint8                                        bFilterLowSpanSequences : 1;                       // Mask: 0x10, PropSize: 0x10x3C(0x1)(None)
	uint8                                        bFilterLowSpanFromTileCache : 1;                   // Mask: 0x20, PropSize: 0x10x3C(0x1)(None)
	uint8                                        bFixedTilePoolSize : 1;                            // Mask: 0x40, PropSize: 0x10x3C(0x1)(None)
	uint8                                        bIsWorldPartitioned : 1;                           // Mask: 0x80, PropSize: 0x10x3C(0x1)(None)
	uint8                                        Pad_2844[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct NavigationSystem.RecastNavMeshTileGenerationDebug
struct FRecastNavMeshTileGenerationDebug
{
public:
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        BitPad_1EF : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2845[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntVector                            TileCoordinate;                                    // 0x4(0xC)(None)
	uint8                                        bGenerateDebugTileOnly : 1;                        // Mask: 0x1, PropSize: 0x10x10(0x1)(None)
	uint8                                        bCollisionGeometry : 1;                            // Mask: 0x2, PropSize: 0x10x10(0x1)(None)
	uint8                                        BitPad_1F0 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2846[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EHeightFieldRenderMode            HeightFieldRenderMode;                             // 0x14(0x1)(None)
	uint8                                        Pad_2847[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bHeightfieldFromRasterization : 1;                 // Mask: 0x1, PropSize: 0x10x18(0x1)(None)
	uint8                                        bHeightfieldPostInclusionBoundsFiltering : 1;      // Mask: 0x2, PropSize: 0x10x18(0x1)(None)
	uint8                                        bHeightfieldPostHeightFiltering : 1;               // Mask: 0x4, PropSize: 0x10x18(0x1)(None)
	uint8                                        bHeightfieldBounds : 1;                            // Mask: 0x8, PropSize: 0x10x18(0x1)(None)
	uint8                                        bCompactHeightfield : 1;                           // Mask: 0x10, PropSize: 0x10x18(0x1)(None)
	uint8                                        bCompactHeightfieldEroded : 1;                     // Mask: 0x20, PropSize: 0x10x18(0x1)(None)
	uint8                                        bCompactHeightfieldRegions : 1;                    // Mask: 0x40, PropSize: 0x10x18(0x1)(None)
	uint8                                        bCompactHeightfieldDistances : 1;                  // Mask: 0x80, PropSize: 0x10x18(0x1)(None)
	uint8                                        bTileCacheLayerAreas : 1;                          // Mask: 0x1, PropSize: 0x10x19(0x1)(None)
	uint8                                        bTileCacheLayerRegions : 1;                        // Mask: 0x2, PropSize: 0x10x19(0x1)(None)
	uint8                                        bTileCacheContours : 1;                            // Mask: 0x4, PropSize: 0x10x19(0x1)(None)
	uint8                                        bTileCachePolyMesh : 1;                            // Mask: 0x8, PropSize: 0x10x19(0x1)(None)
	uint8                                        bTileCacheDetailMesh : 1;                          // Mask: 0x10, PropSize: 0x10x19(0x1)(None)
	uint8                                        Pad_2849[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct NavigationSystem.NavMeshResolutionParam
struct FNavMeshResolutionParam
{
public:
	float                                        CellSize;                                          // 0x0(0x4)(None)
	float                                        CellHeight;                                        // 0x4(0x4)(None)
};

}


