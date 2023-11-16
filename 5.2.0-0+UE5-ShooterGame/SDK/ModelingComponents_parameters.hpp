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
// Function ModelingComponents.OctreeDynamicMeshComponent.SetDynamicMesh
struct UOctreeDynamicMeshComponent_SetDynamicMesh_Params
{
public:
	class UDynamicMesh*                          NewMesh;                                           // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.SetPointSetVisibility
struct UPreviewGeometry_SetPointSetVisibility_Params
{
public:
	class FString                                PointSetIdentifier;                                // 0x0(0x10)(None)
	bool                                         bVisible;                                          // 0x10(0x1)(None)
	bool                                         ReturnValue;                                       // 0x11(0x1)(None)
	uint8                                        Pad_ACB[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModelingComponents.PreviewGeometry.SetPointSetMaterial
struct UPreviewGeometry_SetPointSetMaterial_Params
{
public:
	class FString                                PointSetIdentifier;                                // 0x0(0x10)(None)
	class UMaterialInterface*                    NewMaterial;                                       // 0x10(0x8)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_AD0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.SetLineSetVisibility
struct UPreviewGeometry_SetLineSetVisibility_Params
{
public:
	class FString                                LineSetIdentifier;                                 // 0x0(0x10)(None)
	bool                                         bVisible;                                          // 0x10(0x1)(None)
	bool                                         ReturnValue;                                       // 0x11(0x1)(None)
	uint8                                        Pad_AD4[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ModelingComponents.PreviewGeometry.SetLineSetMaterial
struct UPreviewGeometry_SetLineSetMaterial_Params
{
public:
	class FString                                LineSetIdentifier;                                 // 0x0(0x10)(None)
	class UMaterialInterface*                    NewMaterial;                                       // 0x10(0x8)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_AD8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ModelingComponents.PreviewGeometry.SetAllPointSetsMaterial
struct UPreviewGeometry_SetAllPointSetsMaterial_Params
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
struct UPreviewGeometry_SetAllLineSetsMaterial_Params
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.RemovePointSet
struct UPreviewGeometry_RemovePointSet_Params
{
public:
	class FString                                PointSetIdentifier;                                // 0x0(0x10)(None)
	bool                                         bDestroy;                                          // 0x10(0x1)(None)
	bool                                         ReturnValue;                                       // 0x11(0x1)(None)
	uint8                                        Pad_AD9[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.RemoveLineSet
struct UPreviewGeometry_RemoveLineSet_Params
{
public:
	class FString                                LineSetIdentifier;                                 // 0x0(0x10)(None)
	bool                                         bDestroy;                                          // 0x10(0x1)(None)
	bool                                         ReturnValue;                                       // 0x11(0x1)(None)
	uint8                                        Pad_ADA[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ModelingComponents.PreviewGeometry.RemoveAllPointSets
struct UPreviewGeometry_RemoveAllPointSets_Params
{
public:
	bool                                         bDestroy;                                          // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function ModelingComponents.PreviewGeometry.RemoveAllLineSets
struct UPreviewGeometry_RemoveAllLineSets_Params
{
public:
	bool                                         bDestroy;                                          // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function ModelingComponents.PreviewGeometry.GetActor
struct UPreviewGeometry_GetActor_Params
{
public:
	class APreviewGeometryActor*                 ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.FindPointSet
struct UPreviewGeometry_FindPointSet_Params
{
public:
	class FString                                PointSetIdentifier;                                // 0x0(0x10)(None)
	class UPointSetComponent*                    ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.FindLineSet
struct UPreviewGeometry_FindLineSet_Params
{
public:
	class FString                                LineSetIdentifier;                                 // 0x0(0x10)(None)
	class ULineSetComponent*                     ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x70 (0x70 - 0x0)
// Function ModelingComponents.PreviewGeometry.CreateInWorld
struct UPreviewGeometry_CreateInWorld_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(None)
	uint8                                        Pad_AE0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WithTransform;                                     // 0x10(0x60)(None)
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.AddPointSet
struct UPreviewGeometry_AddPointSet_Params
{
public:
	class FString                                PointSetIdentifier;                                // 0x0(0x10)(None)
	class UPointSetComponent*                    ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function ModelingComponents.PreviewGeometry.AddLineSet
struct UPreviewGeometry_AddLineSet_Params
{
public:
	class FString                                LineSetIdentifier;                                 // 0x0(0x10)(None)
	class ULineSetComponent*                     ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function ModelingComponents.ModelingObjectsCreationAPI.CreateTextureObject
struct UModelingObjectsCreationAPI_CreateTextureObject_Params
{
public:
	struct FCreateTextureObjectParams            CreateTexParams;                                   // 0x0(0x30)(ZeroConstructor)
	struct FCreateTextureObjectResult            ReturnValue;                                       // 0x30(0x10)(None)
};

// 0x620 (0x620 - 0x0)
// Function ModelingComponents.ModelingObjectsCreationAPI.CreateMeshObject
struct UModelingObjectsCreationAPI_CreateMeshObject_Params
{
public:
	struct FCreateMeshObjectParams               CreateMeshParams;                                  // 0x0(0x600)(ZeroConstructor)
	struct FCreateMeshObjectResult               ReturnValue;                                       // 0x600(0x20)(None)
};

// 0x1 (0x1 - 0x0)
// Function ModelingComponents.CreateMeshObjectTypeProperties.ShouldShowPropertySet
struct UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function ModelingComponents.CreateMeshObjectTypeProperties.GetOutputTypeNamesFunc
struct UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function ModelingComponents.CreateMeshObjectTypeProperties.GetCurrentCreateMeshType
struct UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Params
{
public:
	enum class ECreateObjectTypeHint             ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function ModelingComponents.PolygroupLayersProperties.GetGroupLayersFunc
struct UPolygroupLayersProperties_GetGroupLayersFunc_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
struct UWeightMapSetProperties_GetWeightMapsFunc_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(None)
};

}
}


