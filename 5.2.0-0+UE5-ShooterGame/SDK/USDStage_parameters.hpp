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

// 0x4 (0x4 - 0x0)
// Function USDStage.UsdStageActor.SetTime
struct AUsdStageActor_SetTime_Params
{
public:
	float                                        InTime;                                            // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function USDStage.UsdStageActor.SetRootMotionHandling
struct AUsdStageActor_SetRootMotionHandling_Params
{
public:
	enum class EUsdRootMotionHandling            NewHandlingStrategy;                               // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function USDStage.UsdStageActor.SetRootLayer
struct AUsdStageActor_SetRootLayer_Params
{
public:
	class FString                                RootFilePath;                                      // 0x0(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function USDStage.UsdStageActor.SetRenderContext
struct AUsdStageActor_SetRenderContext_Params
{
public:
	class FName                                  NewRenderContext;                                  // 0x0(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function USDStage.UsdStageActor.SetPurposesToLoad
struct AUsdStageActor_SetPurposesToLoad_Params
{
public:
	int32                                        NewPurposesToLoad;                                 // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function USDStage.UsdStageActor.SetNaniteTriangleThreshold
struct AUsdStageActor_SetNaniteTriangleThreshold_Params
{
public:
	int32                                        NewNaniteTriangleThreshold;                        // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function USDStage.UsdStageActor.SetMergeIdenticalMaterialSlots
struct AUsdStageActor_SetMergeIdenticalMaterialSlots_Params
{
public:
	bool                                         bMerge;                                            // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function USDStage.UsdStageActor.SetMaterialPurpose
struct AUsdStageActor_SetMaterialPurpose_Params
{
public:
	class FName                                  NewMaterialPurpose;                                // 0x0(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function USDStage.UsdStageActor.SetKindsToCollapse
struct AUsdStageActor_SetKindsToCollapse_Params
{
public:
	int32                                        NewKindsToCollapse;                                // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function USDStage.UsdStageActor.SetIsolatedRootLayer
struct AUsdStageActor_SetIsolatedRootLayer_Params
{
public:
	class FString                                IsolatedStageRootLayer;                            // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function USDStage.UsdStageActor.SetInterpolationType
struct AUsdStageActor_SetInterpolationType_Params
{
public:
	enum class EUsdInterpolationType             NewType;                                           // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function USDStage.UsdStageActor.SetInitialLoadSet
struct AUsdStageActor_SetInitialLoadSet_Params
{
public:
	enum class EUsdInitialLoadSet                NewLoadSet;                                        // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function USDStage.UsdStageActor.SetCollapseTopLevelPointInstancers
struct AUsdStageActor_SetCollapseTopLevelPointInstancers_Params
{
public:
	bool                                         bCollapse;                                         // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function USDStage.UsdStageActor.SetAssetCache
struct AUsdStageActor_SetAssetCache_Params
{
public:
	class UUsdAssetCache2*                       NewCache;                                          // 0x0(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function USDStage.UsdStageActor.GetTime
struct AUsdStageActor_GetTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function USDStage.UsdStageActor.GetSourcePrimPath
struct AUsdStageActor_GetSourcePrimPath_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(None)
	class FString                                ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function USDStage.UsdStageActor.GetLevelSequence
struct AUsdStageActor_GetLevelSequence_Params
{
public:
	class ULevelSequence*                        ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function USDStage.UsdStageActor.GetIsolatedRootLayer
struct AUsdStageActor_GetIsolatedRootLayer_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function USDStage.UsdStageActor.GetGeneratedComponent
struct AUsdStageActor_GetGeneratedComponent_Params
{
public:
	class FString                                PrimPath;                                          // 0x0(0x10)(None)
	class USceneComponent*                       ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function USDStage.UsdStageActor.GetGeneratedAssets
struct AUsdStageActor_GetGeneratedAssets_Params
{
public:
	class FString                                PrimPath;                                          // 0x0(0x10)(None)
	TArray<class UObject*>                       ReturnValue;                                       // 0x10(0x10)(None)
};

}
}


