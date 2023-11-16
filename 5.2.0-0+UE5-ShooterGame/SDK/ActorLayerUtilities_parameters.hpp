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

// 0x10 (0x10 - 0x0)
// Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
struct ULayersBlueprintLibrary_RemoveActorFromLayer_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(None)
	struct FActorLayer                           Layer;                                             // 0x8(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors
struct ULayersBlueprintLibrary_GetActors_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	struct FActorLayer                           ActorLayer;                                        // 0x8(0x8)(None)
	TArray<class AActor*>                        ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
struct ULayersBlueprintLibrary_AddActorToLayer_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(None)
	struct FActorLayer                           Layer;                                             // 0x8(0x8)(None)
};

}
}


