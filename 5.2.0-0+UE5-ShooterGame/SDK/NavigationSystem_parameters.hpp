#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
struct UNavigationSystemV1_UnregisterNavigationInvoker_Params
{
public:
	class AActor*                                Invoker;                                           // 0x0(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
struct UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Params
{
public:
	int32                                        MaxNumberOfJobs;                                   // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
struct UNavigationSystemV1_SetGeometryGatheringMode_Params
{
public:
	enum class ENavDataGatheringModeConfig       NewMode;                                           // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
struct UNavigationSystemV1_RegisterNavigationInvoker_Params
{
public:
	class AActor*                                Invoker;                                           // 0x0(0x8)(None)
	float                                        TileGenerationRadius;                              // 0x8(0x4)(None)
	float                                        TileRemovalRadius;                                 // 0xC(0x4)(None)
};

// 0x60 (0x60 - 0x0)
// Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigationEx
struct UNavigationSystemV1_ProjectPointToNavigationEx_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(ZeroConstructor)
	struct FVector                               Point;                                             // 0x8(0x18)(None)
	struct FVector                               Extent;                                            // 0x20(0x18)(None)
	class ANavigationData*                       NavData;                                           // 0x38(0x8)(ZeroConstructor)
	class UClass*                                FilterClass;                                       // 0x40(0x8)(None)
	struct FVector                               ReturnValue;                                       // 0x48(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
struct UNavigationSystemV1_OnNavigationBoundsUpdated_Params
{
public:
	class ANavMeshBoundsVolume*                  NavVolume;                                         // 0x0(0x8)(None)
};

// 0x68 (0x68 - 0x0)
// Function NavigationSystem.NavigationSystemV1.NavigationRaycast
struct UNavigationSystemV1_NavigationRaycast_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	struct FVector                               RayStart;                                          // 0x8(0x18)(None)
	struct FVector                               RayEnd;                                            // 0x20(0x18)(None)
	struct FVector                               HitLocation;                                       // 0x38(0x18)(None)
	class UClass*                                FilterClass;                                       // 0x50(0x8)(ZeroConstructor)
	class AController*                           Querier;                                           // 0x58(0x8)(None)
	bool                                         ReturnValue;                                       // 0x60(0x1)(None)
	uint8                                        Pad_2763[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
struct UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ZeroConstructor)
	class UClass*                                OldArea;                                           // 0x8(0x8)(ZeroConstructor)
	class UClass*                                NewArea;                                           // 0x10(0x8)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_2767[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
struct UNavigationSystemV1_K2_ProjectPointToNavigation_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	struct FVector                               Point;                                             // 0x8(0x18)(None)
	struct FVector                               ProjectedLocation;                                 // 0x20(0x18)(None)
	class ANavigationData*                       NavData;                                           // 0x38(0x8)(ZeroConstructor)
	class UClass*                                FilterClass;                                       // 0x40(0x8)(None)
	struct FVector                               QueryExtent;                                       // 0x48(0x18)(None)
	bool                                         ReturnValue;                                       // 0x60(0x1)(None)
	uint8                                        Pad_2768[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
struct UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	struct FVector                               Origin;                                            // 0x8(0x18)(None)
	struct FVector                               RandomLocation;                                    // 0x20(0x18)(None)
	float                                        Radius;                                            // 0x38(0x4)(None)
	uint8                                        Pad_2769[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANavigationData*                       NavData;                                           // 0x40(0x8)(ZeroConstructor)
	class UClass*                                FilterClass;                                       // 0x48(0x8)(None)
	bool                                         ReturnValue;                                       // 0x50(0x1)(None)
	uint8                                        Pad_276A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
struct UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	struct FVector                               Origin;                                            // 0x8(0x18)(None)
	struct FVector                               RandomLocation;                                    // 0x20(0x18)(None)
	float                                        Radius;                                            // 0x38(0x4)(None)
	uint8                                        Pad_276B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANavigationData*                       NavData;                                           // 0x40(0x8)(ZeroConstructor)
	class UClass*                                FilterClass;                                       // 0x48(0x8)(None)
	bool                                         ReturnValue;                                       // 0x50(0x1)(None)
	uint8                                        Pad_276C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
struct UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	struct FVector                               Origin;                                            // 0x8(0x18)(None)
	struct FVector                               RandomLocation;                                    // 0x20(0x18)(None)
	float                                        Radius;                                            // 0x38(0x4)(None)
	uint8                                        Pad_276D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANavigationData*                       NavData;                                           // 0x40(0x8)(ZeroConstructor)
	class UClass*                                FilterClass;                                       // 0x48(0x8)(None)
	bool                                         ReturnValue;                                       // 0x50(0x1)(None)
	uint8                                        Pad_276E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
struct UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_276F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
struct UNavigationSystemV1_IsNavigationBeingBuilt_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_2770[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInMinMaxRadius
struct UNavigationSystemV1_GetRandomReachablePointInMinMaxRadius_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(ZeroConstructor)
	struct FVector                               Origin;                                            // 0x8(0x18)(None)
	float                                        MinRadius;                                         // 0x20(0x4)(None)
	float                                        MaxRadius;                                         // 0x24(0x4)(None)
	struct FRandomStream                         RandStream;                                        // 0x28(0x8)(None)
	struct FVector                               PathDirection;                                     // 0x30(0x18)(None)
	float                                        DotLimit;                                          // 0x48(0x4)(None)
	uint8                                        Pad_277A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANavigationData*                       NavData;                                           // 0x50(0x8)(ZeroConstructor)
	class UClass*                                FilterClass;                                       // 0x58(0x8)(None)
	struct FVector                               ReturnValue;                                       // 0x60(0x18)(None)
};

// 0x58 (0x58 - 0x0)
// Function NavigationSystem.NavigationSystemV1.GetPathLength
struct UNavigationSystemV1_GetPathLength_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	struct FVector                               PathStart;                                         // 0x8(0x18)(None)
	struct FVector                               PathEnd;                                           // 0x20(0x18)(None)
	double                                       PathLength;                                        // 0x38(0x8)(None)
	class ANavigationData*                       NavData;                                           // 0x40(0x8)(ZeroConstructor)
	class UClass*                                FilterClass;                                       // 0x48(0x8)(None)
	enum class ENavigationQueryResult            ReturnValue;                                       // 0x50(0x1)(None)
	uint8                                        Pad_277E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function NavigationSystem.NavigationSystemV1.GetPathCost
struct UNavigationSystemV1_GetPathCost_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	struct FVector                               PathStart;                                         // 0x8(0x18)(None)
	struct FVector                               PathEnd;                                           // 0x20(0x18)(None)
	double                                       PathCost;                                          // 0x38(0x8)(None)
	class ANavigationData*                       NavData;                                           // 0x40(0x8)(ZeroConstructor)
	class UClass*                                FilterClass;                                       // 0x48(0x8)(None)
	enum class ENavigationQueryResult            ReturnValue;                                       // 0x50(0x1)(None)
	uint8                                        Pad_2780[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
struct UNavigationSystemV1_GetNavigationSystem_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UNavigationSystemV1*                   ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
struct UNavigationSystemV1_FindPathToLocationSynchronously_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	struct FVector                               PathStart;                                         // 0x8(0x18)(None)
	struct FVector                               PathEnd;                                           // 0x20(0x18)(None)
	class AActor*                                PathfindingContext;                                // 0x38(0x8)(ZeroConstructor)
	class UClass*                                FilterClass;                                       // 0x40(0x8)(ZeroConstructor)
	class UNavigationPath*                       ReturnValue;                                       // 0x48(0x8)(None)
};

// 0x48 (0x48 - 0x0)
// Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
struct UNavigationSystemV1_FindPathToActorSynchronously_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	struct FVector                               PathStart;                                         // 0x8(0x18)(None)
	class AActor*                                GoalActor;                                         // 0x20(0x8)(ZeroConstructor)
	float                                        TetherDistance;                                    // 0x28(0x4)(None)
	uint8                                        Pad_2783[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                PathfindingContext;                                // 0x30(0x8)(ZeroConstructor)
	class UClass*                                FilterClass;                                       // 0x38(0x8)(ZeroConstructor)
	class UNavigationPath*                       ReturnValue;                                       // 0x40(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
struct UNavRelevantComponent_SetNavigationRelevancy_Params
{
public:
	bool                                         bRelevant;                                         // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function NavigationSystem.NavModifierComponent.SetAreaClass
struct UNavModifierComponent_SetAreaClass_Params
{
public:
	class UClass*                                NewAreaClass;                                      // 0x0(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
struct ARecastNavMesh_K2_ReplaceAreaInTileBounds_Params
{
public:
	struct FBox                                  Bounds;                                            // 0x0(0x38)(None)
	class UClass*                                OldArea;                                           // 0x38(0x8)(ZeroConstructor)
	class UClass*                                NewArea;                                           // 0x40(0x8)(None)
	bool                                         ReplaceLinks;                                      // 0x48(0x1)(None)
	bool                                         ReturnValue;                                       // 0x49(0x1)(None)
	uint8                                        Pad_27AB[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function NavigationSystem.NavigationPath.IsValid
struct UNavigationPath_IsValid_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function NavigationSystem.NavigationPath.IsStringPulled
struct UNavigationPath_IsStringPulled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function NavigationSystem.NavigationPath.IsPartial
struct UNavigationPath_IsPartial_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function NavigationSystem.NavigationPath.GetPathLength
struct UNavigationPath_GetPathLength_Params
{
public:
	double                                       ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function NavigationSystem.NavigationPath.GetPathCost
struct UNavigationPath_GetPathCost_Params
{
public:
	double                                       ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function NavigationSystem.NavigationPath.GetDebugString
struct UNavigationPath_GetDebugString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
struct UNavigationPath_EnableRecalculationOnInvalidation_Params
{
public:
	enum class ENavigationOptionFlag             DoRecalculation;                                   // 0x0(0x1)(None)
};

// 0x14 (0x14 - 0x0)
// Function NavigationSystem.NavigationPath.EnableDebugDrawing
struct UNavigationPath_EnableDebugDrawing_Params
{
public:
	bool                                         bShouldDrawDebugData;                              // 0x0(0x1)(None)
	uint8                                        Pad_27F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          PathColor;                                         // 0x4(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function NavigationSystem.NavModifierVolume.SetAreaClass
struct ANavModifierVolume_SetAreaClass_Params
{
public:
	class UClass*                                NewAreaClass;                                      // 0x0(0x8)(None)
};

}
}


