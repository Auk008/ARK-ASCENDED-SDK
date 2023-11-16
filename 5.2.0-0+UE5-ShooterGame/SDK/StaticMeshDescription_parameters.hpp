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

// 0x20 (0x20 - 0x0)
// Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
struct UStaticMeshDescription_SetVertexInstanceUV_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(None)
	uint8                                        Pad_2BEA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             UV;                                                // 0x8(0x10)(None)
	int32                                        UVIndex;                                           // 0x18(0x4)(None)
	uint8                                        Pad_2BEB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
struct UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Params
{
public:
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x0(0x4)(None)
	class FName                                  SlotName;                                          // 0x4(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
struct UStaticMeshDescription_GetVertexInstanceUV_Params
{
public:
	struct FVertexInstanceID                     VertexInstanceID;                                  // 0x0(0x4)(None)
	int32                                        UVIndex;                                           // 0x4(0x4)(None)
	struct FVector2D                             ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x50 (0x50 - 0x0)
// Function StaticMeshDescription.StaticMeshDescription.CreateCube
struct UStaticMeshDescription_CreateCube_Params
{
public:
	struct FVector                               Center;                                            // 0x0(0x18)(None)
	struct FVector                               HalfExtents;                                       // 0x18(0x18)(None)
	struct FPolygonGroupID                       PolygonGroup;                                      // 0x30(0x4)(None)
	struct FPolygonID                            PolygonID_PlusX;                                   // 0x34(0x4)(None)
	struct FPolygonID                            PolygonID_MinusX;                                  // 0x38(0x4)(None)
	struct FPolygonID                            PolygonID_PlusY;                                   // 0x3C(0x4)(None)
	struct FPolygonID                            PolygonID_MinusY;                                  // 0x40(0x4)(None)
	struct FPolygonID                            PolygonID_PlusZ;                                   // 0x44(0x4)(None)
	struct FPolygonID                            PolygonID_MinusZ;                                  // 0x48(0x4)(None)
	uint8                                        Pad_2BED[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


