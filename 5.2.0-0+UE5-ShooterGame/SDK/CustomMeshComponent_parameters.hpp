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

// 0x18 (0x18 - 0x0)
// Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
struct UCustomMeshComponent_SetCustomMeshTriangles_Params
{
public:
	TArray<struct FCustomMeshTriangle>           Triangles;                                         // 0x0(0x10)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_470[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
struct UCustomMeshComponent_AddCustomMeshTriangles_Params
{
public:
	TArray<struct FCustomMeshTriangle>           Triangles;                                         // 0x0(0x10)(None)
};

}
}


