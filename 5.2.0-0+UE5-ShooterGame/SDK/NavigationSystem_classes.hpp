#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xC8 - 0xB8)
// Class NavigationSystem.NavigationInvokerComponent
class UNavigationInvokerComponent : public UActorComponent
{
public:
	float                                        TileGenerationRadius;                              // 0xB8(0x4)(None)
	float                                        TileRemovalRadius;                                 // 0xBC(0x4)(None)
	struct FNavAgentSelector                     SupportedAgents;                                   // 0xC0(0x4)(None)
	uint8                                        Pad_2752[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavigationInvokerComponent* GetDefaultObj();

};

// 0x1510 (0x1538 - 0x28)
// Class NavigationSystem.NavigationSystemV1
class UNavigationSystemV1 : public UNavigationSystemBase
{
public:
	class ANavigationData*                       MainNavData;                                       // 0x28(0x8)(ZeroConstructor)
	class ANavigationData*                       AbstractNavData;                                   // 0x30(0x8)(ZeroConstructor)
	class FName                                  DefaultAgentName;                                  // 0x38(0x8)(None)
	TSoftClassPtr<class UCrowdManagerBase>       CrowdManagerClass;                                 // 0x40(0x30)(ZeroConstructor)
	uint8                                        bAutoCreateNavigationData : 1;                     // Mask: 0x1, PropSize: 0x10x70(0x1)(None)
	uint8                                        bSpawnNavDataInNavBoundsLevel : 1;                 // Mask: 0x2, PropSize: 0x10x70(0x1)(None)
	uint8                                        bAllowClientSideNavigation : 1;                    // Mask: 0x4, PropSize: 0x10x70(0x1)(None)
	uint8                                        bShouldDiscardSubLevelNavData : 1;                 // Mask: 0x8, PropSize: 0x10x70(0x1)(None)
	uint8                                        bTickWhilePaused : 1;                              // Mask: 0x10, PropSize: 0x10x70(0x1)(None)
	uint8                                        bSupportRebuilding : 1;                            // Mask: 0x20, PropSize: 0x10x70(0x1)(None)
	uint8                                        bInitialBuildingLocked : 1;                        // Mask: 0x40, PropSize: 0x10x70(0x1)(None)
	uint8                                        BitPad_1E0 : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bSkipAgentHeightCheckWhenPickingNavData : 1;       // Mask: 0x1, PropSize: 0x10x71(0x1)(None)
	uint8                                        BitPad_1E1 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2785[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GeometryExportTriangleCountWarningThreshold;       // 0x74(0x4)(None)
	uint8                                        bGenerateNavigationOnlyAroundNavigationInvokers : 1; // Mask: 0x1, PropSize: 0x10x78(0x1)(None)
	uint8                                        BitPad_1E2 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2786[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ActiveTilesUpdateInterval;                         // 0x7C(0x4)(None)
	enum class ENavDataGatheringModeConfig       DataGatheringMode;                                 // 0x80(0x1)(None)
	uint8                                        Pad_2787[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DirtyAreaWarningSizeThreshold;                     // 0x84(0x4)(None)
	float                                        GatheringNavModifiersWarningLimitTime;             // 0x88(0x4)(None)
	uint8                                        Pad_2788[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNavDataConfig>                SupportedAgents;                                   // 0x90(0x10)(ZeroConstructor)
	struct FNavAgentSelector                     SupportedAgentsMask;                               // 0xA0(0x4)(None)
	uint8                                        Pad_2789[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox                                  BuildBounds;                                       // 0xA8(0x38)(None)
	TArray<class ANavigationData*>               NavDataSet;                                        // 0xE0(0x10)(ZeroConstructor)
	TArray<class ANavigationData*>               NavDataRegistrationQueue;                          // 0xF0(0x10)(ZeroConstructor)
	uint8                                        Pad_278B[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnNavDataRegisteredEvent;                          // 0x110(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnNavigationGenerationFinishedDelegate;            // 0x120(0x10)(None)
	uint8                                        Pad_278D[0xE0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFNavigationSystemRunMode         OperationMode;                                     // 0x210(0x1)(None)
	uint8                                        Pad_278E[0x1327];                                  // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavigationSystemV1* GetDefaultObj();

	void UnregisterNavigationInvoker(class AActor* Invoker);
	void SetMaxSimultaneousTileGenerationJobsCount(int32 MaxNumberOfJobs);
	void SetGeometryGatheringMode(enum class ENavDataGatheringModeConfig NewMode);
	void ResetMaxSimultaneousTileGenerationJobsCount();
	void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
	void ProjectPointToNavigationEx(class UObject* WorldContext, const struct FVector& Point, const struct FVector& Extent, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& ReturnValue);
	void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);
	void NavigationRaycast(class UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, const struct FVector& HitLocation, class UClass* FilterClass, class AController* Querier, bool ReturnValue);
	void K2_ReplaceAreaInOctreeData(class UObject* Object, class UClass* OldArea, class UClass* NewArea, bool ReturnValue);
	void K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, const struct FVector& ProjectedLocation, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent, bool ReturnValue);
	void K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, const struct FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass, bool ReturnValue);
	void K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, const struct FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass, bool ReturnValue);
	void K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, const struct FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass, bool ReturnValue);
	void IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject, bool ReturnValue);
	void IsNavigationBeingBuilt(class UObject* WorldContextObject, bool ReturnValue);
	void GetRandomReachablePointInMinMaxRadius(class UObject* WorldContext, const struct FVector& Origin, float MinRadius, float MaxRadius, const struct FRandomStream& RandStream, const struct FVector& PathDirection, float DotLimit, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& ReturnValue);
	void GetPathLength(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, double PathLength, class ANavigationData* NavData, class UClass* FilterClass, enum class ENavigationQueryResult ReturnValue);
	void GetPathCost(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, double PathCost, class ANavigationData* NavData, class UClass* FilterClass, enum class ENavigationQueryResult ReturnValue);
	void GetNavigationSystem(class UObject* WorldContextObject, class UNavigationSystemV1* ReturnValue);
	void FindPathToLocationSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass, class UNavigationPath* ReturnValue);
	void FindPathToActorSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass, class UNavigationPath* ReturnValue);
};

// 0x8 (0x60 - 0x58)
// Class NavigationSystem.NavigationSystemModuleConfig
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:
	uint8                                        bStrictlyStatic : 1;                               // Mask: 0x1, PropSize: 0x10x58(0x1)(None)
	uint8                                        bCreateOnClient : 1;                               // Mask: 0x2, PropSize: 0x10x58(0x1)(None)
	uint8                                        bAutoSpawnMissingNavData : 1;                      // Mask: 0x4, PropSize: 0x10x58(0x1)(None)
	uint8                                        bSpawnNavDataInNavBoundsLevel : 1;                 // Mask: 0x8, PropSize: 0x10x58(0x1)(None)
	uint8                                        Pad_2797[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavigationSystemModuleConfig* GetDefaultObj();

};

// 0x50 (0x108 - 0xB8)
// Class NavigationSystem.NavRelevantComponent
class UNavRelevantComponent : public UActorComponent
{
public:
	uint8                                        Pad_2799[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bAttachToOwnersRoot : 1;                           // Mask: 0x1, PropSize: 0x10xF8(0x1)(None)
	uint8                                        BitPad_1E3 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_279A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CachedNavParent;                                   // 0x100(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UNavRelevantComponent* GetDefaultObj();

	void SetNavigationRelevancy(bool bRelevant);
};

// 0xB8 (0x1C0 - 0x108)
// Class NavigationSystem.NavModifierComponent
class UNavModifierComponent : public UNavRelevantComponent
{
public:
	class UClass*                                AreaClass;                                         // 0x108(0x8)(ZeroConstructor)
	struct FVector                               FailsafeExtent;                                    // 0x110(0x18)(None)
	uint8                                        bIncludeAgentHeight : 1;                           // Mask: 0x1, PropSize: 0x10x128(0x1)(None)
	uint8                                        Pad_27A1[0x97];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavModifierComponent* GetDefaultObj();

	void SetAreaClass(class UClass* NewAreaClass);
};

// 0x228 (0x6E0 - 0x4B8)
// Class NavigationSystem.NavigationData
class ANavigationData : public AActor
{
public:
	uint8                                        Pad_27A2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   RenderingComp;                                     // 0x4C0(0x8)(ZeroConstructor)
	struct FNavDataConfig                        NavDataConfig;                                     // 0x4C8(0x98)(ZeroConstructor)
	uint8                                        bEnableDrawing : 1;                                // Mask: 0x1, PropSize: 0x10x560(0x1)(None)
	uint8                                        bForceRebuildOnLoad : 1;                           // Mask: 0x2, PropSize: 0x10x560(0x1)(None)
	uint8                                        bAutoDestroyWhenNoNavigation : 1;                  // Mask: 0x4, PropSize: 0x10x560(0x1)(None)
	uint8                                        bCanBeMainNavData : 1;                             // Mask: 0x8, PropSize: 0x10x560(0x1)(None)
	uint8                                        bCanSpawnOnRebuild : 1;                            // Mask: 0x10, PropSize: 0x10x560(0x1)(None)
	uint8                                        bRebuildAtRuntime : 1;                             // Mask: 0x20, PropSize: 0x10x560(0x1)(None)
	uint8                                        BitPad_1E4 : 2;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_27A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ERuntimeGenerationType            RuntimeGeneration;                                 // 0x564(0x1)(None)
	uint8                                        Pad_27A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ObservedPathsTickInterval;                         // 0x568(0x4)(None)
	uint32                                       DataVersion;                                       // 0x56C(0x4)(None)
	uint8                                        Pad_27A8[0x108];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSupportedAreaData>            SupportedAreas;                                    // 0x678(0x10)(ZeroConstructor)
	uint8                                        Pad_27A9[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ANavigationData* GetDefaultObj();

};

// 0x100 (0x7E0 - 0x6E0)
// Class NavigationSystem.RecastNavMesh
class ARecastNavMesh : public ANavigationData
{
public:
	uint8                                        bDrawTriangleEdges : 1;                            // Mask: 0x1, PropSize: 0x10x6E0(0x1)(None)
	uint8                                        bDrawPolyEdges : 1;                                // Mask: 0x2, PropSize: 0x10x6E0(0x1)(None)
	uint8                                        bDrawFilledPolys : 1;                              // Mask: 0x4, PropSize: 0x10x6E0(0x1)(None)
	uint8                                        bDrawNavMeshEdges : 1;                             // Mask: 0x8, PropSize: 0x10x6E0(0x1)(None)
	uint8                                        bDrawTileBounds : 1;                               // Mask: 0x10, PropSize: 0x10x6E0(0x1)(None)
	uint8                                        bDrawTileResolutions : 1;                          // Mask: 0x20, PropSize: 0x10x6E0(0x1)(None)
	uint8                                        bDrawPathCollidingGeometry : 1;                    // Mask: 0x40, PropSize: 0x10x6E0(0x1)(None)
	uint8                                        bDrawTileLabels : 1;                               // Mask: 0x80, PropSize: 0x10x6E0(0x1)(None)
	uint8                                        bDrawTileBuildTimes : 1;                           // Mask: 0x1, PropSize: 0x10x6E1(0x1)(None)
	uint8                                        bDrawTileBuildTimesHeatMap : 1;                    // Mask: 0x2, PropSize: 0x10x6E1(0x1)(None)
	uint8                                        bDrawPolygonLabels : 1;                            // Mask: 0x4, PropSize: 0x10x6E1(0x1)(None)
	uint8                                        bDrawDefaultPolygonCost : 1;                       // Mask: 0x8, PropSize: 0x10x6E1(0x1)(None)
	uint8                                        bDrawPolygonFlags : 1;                             // Mask: 0x10, PropSize: 0x10x6E1(0x1)(None)
	uint8                                        bDrawLabelsOnPathNodes : 1;                        // Mask: 0x20, PropSize: 0x10x6E1(0x1)(None)
	uint8                                        bDrawNavLinks : 1;                                 // Mask: 0x40, PropSize: 0x10x6E1(0x1)(None)
	uint8                                        bDrawFailedNavLinks : 1;                           // Mask: 0x80, PropSize: 0x10x6E1(0x1)(None)
	uint8                                        bDrawClusters : 1;                                 // Mask: 0x1, PropSize: 0x10x6E2(0x1)(None)
	uint8                                        bDrawOctree : 1;                                   // Mask: 0x2, PropSize: 0x10x6E2(0x1)(None)
	uint8                                        bDrawOctreeDetails : 1;                            // Mask: 0x4, PropSize: 0x10x6E2(0x1)(None)
	uint8                                        bDrawMarkedForbiddenPolys : 1;                     // Mask: 0x8, PropSize: 0x10x6E2(0x1)(None)
	uint8                                        bDistinctlyDrawTilesBeingBuilt : 1;                // Mask: 0x10, PropSize: 0x10x6E2(0x1)(None)
	uint8                                        BitPad_1E5 : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_27AF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DrawOffset;                                        // 0x6E4(0x4)(None)
	struct FRecastNavMeshTileGenerationDebug     TileGenerationDebug;                               // 0x6E8(0x1C)(None)
	uint8                                        bFixedTilePoolSize : 1;                            // Mask: 0x1, PropSize: 0x10x704(0x1)(None)
	uint8                                        BitPad_1E6 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_27B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TilePoolSize;                                      // 0x708(0x4)(None)
	float                                        TileSizeUU;                                        // 0x70C(0x4)(None)
	float                                        CellSize;                                          // 0x710(0x4)(None)
	float                                        CellHeight;                                        // 0x714(0x4)(None)
	struct FNavMeshResolutionParam               NavMeshResolutionParams[0x3];                      // 0x718(0x18)(None)
	float                                        AgentRadius;                                       // 0x730(0x4)(None)
	float                                        AgentHeight;                                       // 0x734(0x4)(None)
	float                                        AgentMaxSlope;                                     // 0x738(0x4)(None)
	float                                        AgentMaxStepHeight;                                // 0x73C(0x4)(None)
	float                                        MinRegionArea;                                     // 0x740(0x4)(None)
	float                                        MergeRegionSize;                                   // 0x744(0x4)(None)
	float                                        MaxSimplificationError;                            // 0x748(0x4)(None)
	int32                                        MaxSimultaneousTileGenerationJobsCount;            // 0x74C(0x4)(None)
	int32                                        TileNumberHardLimit;                               // 0x750(0x4)(None)
	int32                                        PolyRefTileBits;                                   // 0x754(0x4)(None)
	int32                                        PolyRefNavPolyBits;                                // 0x758(0x4)(None)
	int32                                        PolyRefSaltBits;                                   // 0x75C(0x4)(None)
	struct FVector                               NavMeshOriginOffset;                               // 0x760(0x18)(None)
	float                                        DefaultDrawDistance;                               // 0x778(0x4)(None)
	float                                        DefaultMaxSearchNodes;                             // 0x77C(0x4)(None)
	float                                        DefaultMaxHierarchicalSearchNodes;                 // 0x780(0x4)(None)
	enum class ERecastPartitioning               RegionPartitioning;                                // 0x784(0x1)(None)
	enum class ERecastPartitioning               LayerPartitioning;                                 // 0x785(0x1)(None)
	uint8                                        Pad_27B6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RegionChunkSplits;                                 // 0x788(0x4)(None)
	int32                                        LayerChunkSplits;                                  // 0x78C(0x4)(None)
	uint8                                        bSortNavigationAreasByCost : 1;                    // Mask: 0x1, PropSize: 0x10x790(0x1)(None)
	uint8                                        bIsWorldPartitioned : 1;                           // Mask: 0x2, PropSize: 0x10x790(0x1)(None)
	uint8                                        bPerformVoxelFiltering : 1;                        // Mask: 0x4, PropSize: 0x10x790(0x1)(None)
	uint8                                        bMarkLowHeightAreas : 1;                           // Mask: 0x8, PropSize: 0x10x790(0x1)(None)
	uint8                                        bUseExtraTopCellWhenMarkingAreas : 1;              // Mask: 0x10, PropSize: 0x10x790(0x1)(None)
	uint8                                        bFilterLowSpanSequences : 1;                       // Mask: 0x20, PropSize: 0x10x790(0x1)(None)
	uint8                                        bFilterLowSpanFromTileCache : 1;                   // Mask: 0x40, PropSize: 0x10x790(0x1)(None)
	uint8                                        bDoFullyAsyncNavDataGathering : 1;                 // Mask: 0x80, PropSize: 0x10x790(0x1)(None)
	uint8                                        bUseBetterOffsetsFromCorners : 1;                  // Mask: 0x1, PropSize: 0x10x791(0x1)(None)
	uint8                                        bStoreEmptyTileLayers : 1;                         // Mask: 0x2, PropSize: 0x10x791(0x1)(None)
	uint8                                        bUseVirtualFilters : 1;                            // Mask: 0x4, PropSize: 0x10x791(0x1)(None)
	uint8                                        bUseVirtualGeometryFilteringAndDirtying : 1;       // Mask: 0x8, PropSize: 0x10x791(0x1)(None)
	uint8                                        bAllowNavLinkAsPathEnd : 1;                        // Mask: 0x10, PropSize: 0x10x791(0x1)(None)
	uint8                                        BitPad_1E8 : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_27B8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TimeSliceFilterLedgeSpansMaxYProcess;              // 0x794(0x4)(None)
	double                                       TimeSliceLongDurationDebug;                        // 0x798(0x8)(None)
	uint8                                        bUseVoxelCache : 1;                                // Mask: 0x1, PropSize: 0x10x7A0(0x1)(None)
	uint8                                        BitPad_1E9 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_27B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TileSetUpdateInterval;                             // 0x7A4(0x4)(None)
	float                                        HeuristicScale;                                    // 0x7A8(0x4)(None)
	float                                        VerticalDeviationFromGroundCompensation;           // 0x7AC(0x4)(None)
	uint8                                        Pad_27BC[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ARecastNavMesh* GetDefaultObj();

	void K2_ReplaceAreaInTileBounds(const struct FBox& Bounds, class UClass* OldArea, class UClass* NewArea, bool ReplaceLinks, bool ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.CrowdManagerBase
class UCrowdManagerBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCrowdManagerBase* GetDefaultObj();

};

// 0x0 (0x4B8 - 0x4B8)
// Class NavigationSystem.NavigationGraphNode
class ANavigationGraphNode : public AActor
{
public:

	static class UClass* StaticClass();
	static class ANavigationGraphNode* GetDefaultObj();

};

// 0x28 (0x2F0 - 0x2C8)
// Class NavigationSystem.NavigationGraphNodeComponent
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	struct FNavGraphNode                         Node;                                              // 0x2C8(0x18)(ZeroConstructor)
	class UNavigationGraphNodeComponent*         NextNodeComponent;                                 // 0x2E0(0x8)(ZeroConstructor)
	class UNavigationGraphNodeComponent*         PrevNodeComponent;                                 // 0x2E8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UNavigationGraphNodeComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.NavigationPathGenerator
class INavigationPathGenerator : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INavigationPathGenerator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.NavLinkCustomInterface
class INavLinkCustomInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INavLinkCustomInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.NavLinkHostInterface
class INavLinkHostInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INavLinkHostInterface* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class NavigationSystem.NavLinkTrivial
class UNavLinkTrivial : public UNavLinkDefinition
{
public:

	static class UClass* StaticClass();
	static class UNavLinkTrivial* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class NavigationSystem.NavNodeInterface
class INavNodeInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INavNodeInterface* GetDefaultObj();

};

// 0x0 (0x6E0 - 0x6E0)
// Class NavigationSystem.AbstractNavData
class AAbstractNavData : public ANavigationData
{
public:

	static class UClass* StaticClass();
	static class AAbstractNavData* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class NavigationSystem.NavArea
class UNavArea : public UNavAreaBase
{
public:
	float                                        DefaultCost;                                       // 0x30(0x4)(None)
	float                                        FixedAreaEnteringCost;                             // 0x34(0x4)(None)
	struct FColor                                DrawColor;                                         // 0x38(0x4)(None)
	struct FNavAgentSelector                     SupportedAgents;                                   // 0x3C(0x4)(None)
	uint8                                        bSupportsAgent0 : 1;                               // Mask: 0x1, PropSize: 0x10x40(0x1)(None)
	uint8                                        bSupportsAgent1 : 1;                               // Mask: 0x2, PropSize: 0x10x40(0x1)(None)
	uint8                                        bSupportsAgent2 : 1;                               // Mask: 0x4, PropSize: 0x10x40(0x1)(None)
	uint8                                        bSupportsAgent3 : 1;                               // Mask: 0x8, PropSize: 0x10x40(0x1)(None)
	uint8                                        bSupportsAgent4 : 1;                               // Mask: 0x10, PropSize: 0x10x40(0x1)(None)
	uint8                                        bSupportsAgent5 : 1;                               // Mask: 0x20, PropSize: 0x10x40(0x1)(None)
	uint8                                        bSupportsAgent6 : 1;                               // Mask: 0x40, PropSize: 0x10x40(0x1)(None)
	uint8                                        bSupportsAgent7 : 1;                               // Mask: 0x80, PropSize: 0x10x40(0x1)(None)
	uint8                                        bSupportsAgent8 : 1;                               // Mask: 0x1, PropSize: 0x10x41(0x1)(None)
	uint8                                        bSupportsAgent9 : 1;                               // Mask: 0x2, PropSize: 0x10x41(0x1)(None)
	uint8                                        bSupportsAgent10 : 1;                              // Mask: 0x4, PropSize: 0x10x41(0x1)(None)
	uint8                                        bSupportsAgent11 : 1;                              // Mask: 0x8, PropSize: 0x10x41(0x1)(None)
	uint8                                        bSupportsAgent12 : 1;                              // Mask: 0x10, PropSize: 0x10x41(0x1)(None)
	uint8                                        bSupportsAgent13 : 1;                              // Mask: 0x20, PropSize: 0x10x41(0x1)(None)
	uint8                                        bSupportsAgent14 : 1;                              // Mask: 0x40, PropSize: 0x10x41(0x1)(None)
	uint8                                        bSupportsAgent15 : 1;                              // Mask: 0x80, PropSize: 0x10x41(0x1)(None)
	uint8                                        Pad_27DB[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavArea* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavAreaMeta
class UNavAreaMeta : public UNavArea
{
public:

	static class UClass* StaticClass();
	static class UNavAreaMeta* GetDefaultObj();

};

// 0x80 (0xC8 - 0x48)
// Class NavigationSystem.NavAreaMeta_SwitchByAgent
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	class UClass*                                Agent0Area;                                        // 0x48(0x8)(ZeroConstructor)
	class UClass*                                Agent1Area;                                        // 0x50(0x8)(ZeroConstructor)
	class UClass*                                Agent2Area;                                        // 0x58(0x8)(ZeroConstructor)
	class UClass*                                Agent3Area;                                        // 0x60(0x8)(ZeroConstructor)
	class UClass*                                Agent4Area;                                        // 0x68(0x8)(ZeroConstructor)
	class UClass*                                Agent5Area;                                        // 0x70(0x8)(ZeroConstructor)
	class UClass*                                Agent6Area;                                        // 0x78(0x8)(ZeroConstructor)
	class UClass*                                Agent7Area;                                        // 0x80(0x8)(ZeroConstructor)
	class UClass*                                Agent8Area;                                        // 0x88(0x8)(ZeroConstructor)
	class UClass*                                Agent9Area;                                        // 0x90(0x8)(ZeroConstructor)
	class UClass*                                Agent10Area;                                       // 0x98(0x8)(ZeroConstructor)
	class UClass*                                Agent11Area;                                       // 0xA0(0x8)(ZeroConstructor)
	class UClass*                                Agent12Area;                                       // 0xA8(0x8)(ZeroConstructor)
	class UClass*                                Agent13Area;                                       // 0xB0(0x8)(ZeroConstructor)
	class UClass*                                Agent14Area;                                       // 0xB8(0x8)(ZeroConstructor)
	class UClass*                                Agent15Area;                                       // 0xC0(0x8)(None)

	static class UClass* StaticClass();
	static class UNavAreaMeta_SwitchByAgent* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavArea_Default
class UNavArea_Default : public UNavArea
{
public:

	static class UClass* StaticClass();
	static class UNavArea_Default* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavArea_LowHeight
class UNavArea_LowHeight : public UNavArea
{
public:

	static class UClass* StaticClass();
	static class UNavArea_LowHeight* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavArea_Null
class UNavArea_Null : public UNavArea
{
public:

	static class UClass* StaticClass();
	static class UNavArea_Null* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.NavArea_Obstacle
class UNavArea_Obstacle : public UNavArea
{
public:

	static class UClass* StaticClass();
	static class UNavArea_Obstacle* GetDefaultObj();

};

// 0x60 (0xD0 - 0x70)
// Class NavigationSystem.NavCollision
class UNavCollision : public UNavCollisionBase
{
public:
	uint8                                        Pad_27ED[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNavCollisionCylinder>         CylinderCollision;                                 // 0x80(0x10)(None)
	TArray<struct FNavCollisionBox>              BoxCollision;                                      // 0x90(0x10)(None)
	class UClass*                                AreaClass;                                         // 0xA0(0x8)(None)
	uint8                                        bGatherConvexGeometry : 1;                         // Mask: 0x1, PropSize: 0x10xA8(0x1)(None)
	uint8                                        bCreateOnClient : 1;                               // Mask: 0x2, PropSize: 0x10xA8(0x1)(None)
	uint8                                        Pad_27EE[0x27];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavCollision* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class NavigationSystem.NavigationQueryFilter
class UNavigationQueryFilter : public UObject
{
public:
	TArray<struct FNavigationFilterArea>         Areas;                                             // 0x28(0x10)(None)
	struct FNavigationFilterFlags                IncludeFlags;                                      // 0x38(0x4)(None)
	struct FNavigationFilterFlags                ExcludeFlags;                                      // 0x3C(0x4)(None)
	uint8                                        Pad_27EF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavigationQueryFilter* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class NavigationSystem.RecastFilter_UseDefaultArea
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:

	static class UClass* StaticClass();
	static class URecastFilter_UseDefaultArea* GetDefaultObj();

};

// 0x0 (0x6E0 - 0x6E0)
// Class NavigationSystem.NavigationGraph
class ANavigationGraph : public ANavigationData
{
public:

	static class UClass* StaticClass();
	static class ANavigationGraph* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class NavigationSystem.NavigationPath
class UNavigationPath : public UObject
{
public:
	FMulticastInlineDelegateProperty_            PathUpdatedNotifier;                               // 0x28(0x10)(None)
	TArray<struct FVector>                       PathPoints;                                        // 0x38(0x10)(None)
	enum class ENavigationOptionFlag             RecalculateOnInvalidation;                         // 0x48(0x1)(None)
	uint8                                        Pad_27F9[0x3F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavigationPath* GetDefaultObj();

	void IsValid(bool ReturnValue);
	void IsStringPulled(bool ReturnValue);
	void IsPartial(bool ReturnValue);
	void GetPathLength(double ReturnValue);
	void GetPathCost(double ReturnValue);
	void GetDebugString(const class FString& ReturnValue);
	void EnableRecalculationOnInvalidation(enum class ENavigationOptionFlag DoRecalculation);
	void EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor);
};

// 0x128 (0x5E0 - 0x4B8)
// Class NavigationSystem.NavigationTestingActor
class ANavigationTestingActor : public AActor
{
public:
	uint8                                        Pad_27FB[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCapsuleComponent*                     CapsuleComponent;                                  // 0x4C8(0x8)(ZeroConstructor)
	class UNavigationInvokerComponent*           InvokerComponent;                                  // 0x4D0(0x8)(ZeroConstructor)
	uint8                                        bActAsNavigationInvoker : 1;                       // Mask: 0x1, PropSize: 0x10x4D8(0x1)(None)
	uint8                                        BitPad_1EA : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_27FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNavAgentProperties                   NavAgentProps;                                     // 0x4E0(0x38)(None)
	struct FVector                               QueryingExtent;                                    // 0x518(0x18)(None)
	class ANavigationData*                       MyNavData;                                         // 0x530(0x8)(ZeroConstructor)
	struct FVector                               ProjectedLocation;                                 // 0x538(0x18)(None)
	uint8                                        bProjectedLocationValid : 1;                       // Mask: 0x1, PropSize: 0x10x550(0x1)(None)
	uint8                                        bSearchStart : 1;                                  // Mask: 0x2, PropSize: 0x10x550(0x1)(None)
	uint8                                        BitPad_1EB : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_27FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CostLimitFactor;                                   // 0x554(0x4)(None)
	float                                        MinimumCostLimit;                                  // 0x558(0x4)(None)
	uint8                                        bBacktracking : 1;                                 // Mask: 0x1, PropSize: 0x10x55C(0x1)(None)
	uint8                                        bUseHierarchicalPathfinding : 1;                   // Mask: 0x2, PropSize: 0x10x55C(0x1)(None)
	uint8                                        bGatherDetailedInfo : 1;                           // Mask: 0x4, PropSize: 0x10x55C(0x1)(None)
	uint8                                        bRequireNavigableEndLocation : 1;                  // Mask: 0x8, PropSize: 0x10x55C(0x1)(None)
	uint8                                        bDrawDistanceToWall : 1;                           // Mask: 0x10, PropSize: 0x10x55C(0x1)(None)
	uint8                                        bShowNodePool : 1;                                 // Mask: 0x20, PropSize: 0x10x55C(0x1)(None)
	uint8                                        bShowBestPath : 1;                                 // Mask: 0x40, PropSize: 0x10x55C(0x1)(None)
	uint8                                        bShowDiffWithPreviousStep : 1;                     // Mask: 0x80, PropSize: 0x10x55C(0x1)(None)
	uint8                                        bShouldBeVisibleInGame : 1;                        // Mask: 0x1, PropSize: 0x10x55D(0x1)(None)
	uint8                                        BitPad_1EC : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_27FF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ENavCostDisplay                   CostDisplayMode;                                   // 0x560(0x1)(None)
	uint8                                        Pad_2800[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             TextCanvasOffset;                                  // 0x568(0x10)(None)
	uint8                                        bPathExist : 1;                                    // Mask: 0x1, PropSize: 0x10x578(0x1)(None)
	uint8                                        bPathIsPartial : 1;                                // Mask: 0x2, PropSize: 0x10x578(0x1)(None)
	uint8                                        bPathSearchOutOfNodes : 1;                         // Mask: 0x4, PropSize: 0x10x578(0x1)(None)
	uint8                                        BitPad_1ED : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2801[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PathfindingTime;                                   // 0x57C(0x4)(None)
	double                                       PathCost;                                          // 0x580(0x8)(None)
	int32                                        PathfindingSteps;                                  // 0x588(0x4)(None)
	uint8                                        Pad_2802[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANavigationTestingActor*               OtherActor;                                        // 0x590(0x8)(ZeroConstructor)
	class UClass*                                FilterClass;                                       // 0x598(0x8)(ZeroConstructor)
	int32                                        ShowStepIndex;                                     // 0x5A0(0x4)(None)
	float                                        OffsetFromCornersDistance;                         // 0x5A4(0x4)(None)
	uint8                                        Pad_2803[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ANavigationTestingActor* GetDefaultObj();

};

// 0x20 (0x6A0 - 0x680)
// Class NavigationSystem.NavLinkComponent
class UNavLinkComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_2804[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNavigationLink>               Links;                                             // 0x688(0x10)(ZeroConstructor)
	uint8                                        Pad_2805[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavLinkComponent* GetDefaultObj();

};

// 0xE0 (0x1E8 - 0x108)
// Class NavigationSystem.NavLinkCustomComponent
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	uint8                                        Pad_2806[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       NavLinkUserId;                                     // 0x110(0x4)(None)
	uint8                                        Pad_2807[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                EnabledAreaClass;                                  // 0x118(0x8)(ZeroConstructor)
	class UClass*                                DisabledAreaClass;                                 // 0x120(0x8)(ZeroConstructor)
	struct FNavAgentSelector                     SupportedAgents;                                   // 0x128(0x4)(None)
	uint8                                        Pad_2808[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LinkRelativeStart;                                 // 0x130(0x18)(None)
	struct FVector                               LinkRelativeEnd;                                   // 0x148(0x18)(None)
	enum class ENavLinkDirection                 LinkDirection;                                     // 0x160(0x1)(None)
	uint8                                        Pad_280A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bLinkEnabled : 1;                                  // Mask: 0x1, PropSize: 0x10x164(0x1)(None)
	uint8                                        bNotifyWhenEnabled : 1;                            // Mask: 0x2, PropSize: 0x10x164(0x1)(None)
	uint8                                        bNotifyWhenDisabled : 1;                           // Mask: 0x4, PropSize: 0x10x164(0x1)(None)
	uint8                                        bCreateBoxObstacle : 1;                            // Mask: 0x8, PropSize: 0x10x164(0x1)(None)
	uint8                                        BitPad_1EE : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_280B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ObstacleOffset;                                    // 0x168(0x18)(None)
	struct FVector                               ObstacleExtent;                                    // 0x180(0x18)(None)
	class UClass*                                ObstacleAreaClass;                                 // 0x198(0x8)(ZeroConstructor)
	float                                        BroadcastRadius;                                   // 0x1A0(0x4)(None)
	float                                        BroadcastInterval;                                 // 0x1A4(0x4)(None)
	enum class ECollisionChannel                 BroadcastChannel;                                  // 0x1A8(0x1)(None)
	uint8                                        Pad_280D[0x3F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavLinkCustomComponent* GetDefaultObj();

};

// 0x0 (0x680 - 0x680)
// Class NavigationSystem.NavLinkRenderingComponent
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:

	static class UClass* StaticClass();
	static class UNavLinkRenderingComponent* GetDefaultObj();

};

// 0x8 (0x510 - 0x508)
// Class NavigationSystem.NavMeshBoundsVolume
class ANavMeshBoundsVolume : public AVolume
{
public:
	struct FNavAgentSelector                     SupportedAgents;                                   // 0x508(0x4)(None)
	uint8                                        Pad_2810[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ANavMeshBoundsVolume* GetDefaultObj();

};

// 0x10 (0x6E0 - 0x6D0)
// Class NavigationSystem.NavMeshRenderingComponent
class UNavMeshRenderingComponent : public UDebugDrawComponent
{
public:
	uint8                                        Pad_2812[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavMeshRenderingComponent* GetDefaultObj();

};

// 0x0 (0x6D0 - 0x6D0)
// Class NavigationSystem.NavTestRenderingComponent
class UNavTestRenderingComponent : public UDebugDrawComponent
{
public:

	static class UClass* StaticClass();
	static class UNavTestRenderingComponent* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class NavigationSystem.RecastNavMeshDataChunk
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:
	uint8                                        Pad_2816[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URecastNavMeshDataChunk* GetDefaultObj();

};

// 0x28 (0x530 - 0x508)
// Class NavigationSystem.NavModifierVolume
class ANavModifierVolume : public AVolume
{
public:
	uint8                                        Pad_281A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                AreaClass;                                         // 0x510(0x8)(ZeroConstructor)
	bool                                         bMaskFillCollisionUnderneathForNavmesh;            // 0x518(0x1)(None)
	enum class ENavigationDataResolution         NavMeshResolution;                                 // 0x519(0x1)(None)
	uint8                                        Pad_281C[0x16];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ANavModifierVolume* GetDefaultObj();

	void SetAreaClass(class UClass* NewAreaClass);
};

// 0x10 (0x4C8 - 0x4B8)
// Class NavigationSystem.NavSystemConfigOverride
class ANavSystemConfigOverride : public AActor
{
public:
	class UNavigationSystemConfig*               NavigationSystemConfig;                            // 0x4B8(0x8)(ZeroConstructor)
	enum class ENavSystemOverridePolicy          OverridePolicy;                                    // 0x4C0(0x1)(None)
	uint8                                        bLoadOnClient : 1;                                 // Mask: 0x1, PropSize: 0x10x4C1(0x1)(None)
	uint8                                        Pad_2820[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ANavSystemConfigOverride* GetDefaultObj();

};

}


