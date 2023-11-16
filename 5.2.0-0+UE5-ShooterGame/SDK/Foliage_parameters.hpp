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

// 0x2 (0x2 - 0x0)
// Function Foliage.FoliageType.GetResponseToChannel
struct UFoliageType_GetResponseToChannel_Params
{
public:
	enum class ECollisionChannel                 Channel;                                           // 0x0(0x1)(None)
	enum class ECollisionResponse                ReturnValue;                                       // 0x1(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function Foliage.InstancedFoliageActor.BPGetInstancedFoliageActorForCurrentLevel
struct AInstancedFoliageActor_BPGetInstancedFoliageActorForCurrentLevel_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(ZeroConstructor)
	class AInstancedFoliageActor*                ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function Foliage.InstancedFoliageActor.BPConvertStaticMeshActorsToFoliage
struct AInstancedFoliageActor_BPConvertStaticMeshActorsToFoliage_Params
{
public:
	TArray<class AStaticMeshActor*>              Actors;                                            // 0x0(0x10)(ZeroConstructor)
	TArray<class AStaticMeshActor*>              ConvertedActors;                                   // 0x10(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
struct UFoliageStatistics_FoliageOverlappingSphereCount_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UStaticMesh*                           StaticMesh;                                        // 0x8(0x8)(None)
	struct FVector                               CenterPosition;                                    // 0x10(0x18)(None)
	float                                        Radius;                                            // 0x28(0x4)(None)
	int32                                        ReturnValue;                                       // 0x2C(0x4)(None)
};

// 0x58 (0x58 - 0x0)
// Function Foliage.FoliageStatistics.FoliageOverlappingBoxTransforms
struct UFoliageStatistics_FoliageOverlappingBoxTransforms_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UStaticMesh*                           StaticMesh;                                        // 0x8(0x8)(None)
	struct FBox                                  Box;                                               // 0x10(0x38)(None)
	TArray<struct FTransform>                    OutTransforms;                                     // 0x48(0x10)(None)
};

// 0x50 (0x50 - 0x0)
// Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
struct UFoliageStatistics_FoliageOverlappingBoxCount_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UStaticMesh*                           StaticMesh;                                        // 0x8(0x8)(None)
	struct FBox                                  Box;                                               // 0x10(0x38)(None)
	int32                                        ReturnValue;                                       // 0x48(0x4)(None)
	uint8                                        Pad_2D76[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// Function Foliage.InteractiveFoliageActor.CapsuleTouched
struct AInteractiveFoliageActor_CapsuleTouched_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComp;                                    // 0x0(0x8)(ZeroConstructor)
	class AActor*                                Other;                                             // 0x8(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(ZeroConstructor)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(None)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(None)
	uint8                                        Pad_2D7F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            OverlapInfo;                                       // 0x20(0xF0)(None)
};

// 0x4 (0x4 - 0x0)
// Function Foliage.ProceduralFoliageSpawner.Simulate
struct UProceduralFoliageSpawner_Simulate_Params
{
public:
	int32                                        NumSteps;                                          // 0x0(0x4)(None)
};

}
}


