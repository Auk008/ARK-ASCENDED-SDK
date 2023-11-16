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

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetStaticMeshCollisionFromMesh
struct UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Params
{
public:
	class UDynamicMesh*                          FromDynamicMesh;                                   // 0x0(0x8)(ZeroConstructor)
	class UStaticMesh*                           ToStaticMeshAsset;                                 // 0x8(0x8)(ZeroConstructor)
	struct FGeometryScriptCollisionFromMeshOptions Options;                                           // 0x10(0x30)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x40(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetStaticMeshCollisionFromComponent
struct UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Params
{
public:
	class UStaticMesh*                           StaticMeshAsset;                                   // 0x0(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   SourceComponent;                                   // 0x8(0x8)(ZeroConstructor)
	struct FGeometryScriptSetSimpleCollisionOptions Options;                                           // 0x10(0x1)(None)
	uint8                                        Pad_7AA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetDynamicMeshCollisionFromMesh
struct UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Params
{
public:
	class UDynamicMesh*                          FromDynamicMesh;                                   // 0x0(0x8)(ZeroConstructor)
	class UDynamicMeshComponent*                 ToDynamicMeshComponent;                            // 0x8(0x8)(ZeroConstructor)
	struct FGeometryScriptCollisionFromMeshOptions Options;                                           // 0x10(0x30)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x40(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.ResetDynamicMeshCollision
struct UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Params
{
public:
	class UDynamicMeshComponent*                 Component;                                         // 0x0(0x8)(ZeroConstructor)
	bool                                         bEmitTransaction;                                  // 0x8(0x1)(None)
	uint8                                        Pad_7B5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(None)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshSweptHull
struct UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          CopyToMesh;                                        // 0x8(0x8)(ZeroConstructor)
	class UDynamicMesh*                          CopyToMeshOut;                                     // 0x10(0x8)(ZeroConstructor)
	uint8                                        Pad_7C1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ProjectionFrame;                                   // 0x20(0x60)(None)
	struct FGeometryScriptSweptHullOptions       Options;                                           // 0x80(0x18)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x98(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA0(0x8)(None)
	uint8                                        Pad_7C2[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexHull
struct UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          CopyToMesh;                                        // 0x8(0x8)(ZeroConstructor)
	class UDynamicMesh*                          CopyToMeshOut;                                     // 0x10(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x18(0x10)(None)
	struct FGeometryScriptConvexHullOptions      Options;                                           // 0x28(0xC)(None)
	uint8                                        Pad_7C5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexDecomposition
struct UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          CopyToMesh;                                        // 0x8(0x8)(ZeroConstructor)
	class UDynamicMesh*                          CopyToMeshOut;                                     // 0x10(0x8)(ZeroConstructor)
	struct FGeometryScriptConvexDecompositionOptions Options;                                           // 0x18(0x28)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x40(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetVectorListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Params
{
public:
	struct FGeometryScriptVectorList             VectorList;                                        // 0x0(0x10)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	uint8                                        Pad_7D1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               NewValue;                                          // 0x18(0x18)(None)
	bool                                         bIsValidIndex;                                     // 0x30(0x1)(None)
	uint8                                        Pad_7D2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetUVListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Params
{
public:
	struct FGeometryScriptUVList                 UVList;                                            // 0x0(0x10)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	uint8                                        Pad_7D3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             NewUV;                                             // 0x18(0x10)(None)
	bool                                         bIsValidIndex;                                     // 0x28(0x1)(None)
	uint8                                        Pad_7D4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetScalarListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	uint8                                        Pad_7DB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       NewValue;                                          // 0x18(0x8)(None)
	bool                                         bIsValidIndex;                                     // 0x20(0x1)(None)
	uint8                                        Pad_7DC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetIndexListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Params
{
public:
	struct FGeometryScriptIndexList              IndexList;                                         // 0x0(0x18)(None)
	int32                                        Index;                                             // 0x18(0x4)(None)
	int32                                        NewValue;                                          // 0x1C(0x4)(None)
	bool                                         bIsValidIndex;                                     // 0x20(0x1)(None)
	uint8                                        Pad_7DE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetColorListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Params
{
public:
	struct FGeometryScriptColorList              ColorList;                                         // 0x0(0x10)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	struct FLinearColor                          NewColor;                                          // 0x14(0x10)(None)
	bool                                         bIsValidIndex;                                     // 0x24(0x1)(None)
	uint8                                        Pad_7E1[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLength
struct UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Params
{
public:
	struct FGeometryScriptVectorList             VectorList;                                        // 0x0(0x10)(None)
	int32                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_7E4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLastIndex
struct UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Params
{
public:
	struct FGeometryScriptVectorList             VectorList;                                        // 0x0(0x10)(None)
	int32                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_7EA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Params
{
public:
	struct FGeometryScriptVectorList             VectorList;                                        // 0x0(0x10)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	bool                                         bIsValidIndex;                                     // 0x14(0x1)(None)
	uint8                                        Pad_7EC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLength
struct UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Params
{
public:
	struct FGeometryScriptUVList                 UVList;                                            // 0x0(0x10)(None)
	int32                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_7EF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLastIndex
struct UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Params
{
public:
	struct FGeometryScriptUVList                 UVList;                                            // 0x0(0x10)(None)
	int32                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_7F4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Params
{
public:
	struct FGeometryScriptUVList                 UVList;                                            // 0x0(0x10)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	bool                                         bIsValidIndex;                                     // 0x14(0x1)(None)
	uint8                                        Pad_7F6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLength
struct UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Params
{
public:
	struct FGeometryScriptTriangleList           TriangleList;                                      // 0x0(0x10)(None)
	int32                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_7F9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLastTriangle
struct UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Params
{
public:
	struct FGeometryScriptTriangleList           TriangleList;                                      // 0x0(0x10)(None)
	int32                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_7FD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Params
{
public:
	struct FGeometryScriptTriangleList           TriangleList;                                      // 0x0(0x10)(None)
	int32                                        Triangle;                                          // 0x10(0x4)(None)
	bool                                         bIsValidTriangle;                                  // 0x14(0x1)(None)
	uint8                                        Pad_802[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntVector                            ReturnValue;                                       // 0x18(0xC)(None)
	uint8                                        Pad_803[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLength
struct UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(None)
	int32                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_806[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLastIndex
struct UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(None)
	int32                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_80A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	bool                                         bIsValidIndex;                                     // 0x14(0x1)(None)
	uint8                                        Pad_80C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLength
struct UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Params
{
public:
	struct FGeometryScriptIndexList              IndexList;                                         // 0x0(0x18)(None)
	int32                                        ReturnValue;                                       // 0x18(0x4)(None)
	uint8                                        Pad_80E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLastIndex
struct UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Params
{
public:
	struct FGeometryScriptIndexList              IndexList;                                         // 0x0(0x18)(None)
	int32                                        ReturnValue;                                       // 0x18(0x4)(None)
	uint8                                        Pad_812[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Params
{
public:
	struct FGeometryScriptIndexList              IndexList;                                         // 0x0(0x18)(None)
	int32                                        Index;                                             // 0x18(0x4)(None)
	bool                                         bIsValidIndex;                                     // 0x1C(0x1)(None)
	uint8                                        Pad_817[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x20(0x4)(None)
	uint8                                        Pad_818[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLength
struct UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Params
{
public:
	struct FGeometryScriptColorList              ColorList;                                         // 0x0(0x10)(None)
	int32                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_819[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLastIndex
struct UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Params
{
public:
	struct FGeometryScriptColorList              ColorList;                                         // 0x0(0x10)(None)
	int32                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_81E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListItem
struct UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Params
{
public:
	struct FGeometryScriptColorList              ColorList;                                         // 0x0(0x10)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	bool                                         bIsValidIndex;                                     // 0x14(0x1)(None)
	uint8                                        Pad_820[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannels
struct UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Params
{
public:
	struct FGeometryScriptColorList              ColorList;                                         // 0x0(0x10)(None)
	struct FGeometryScriptVectorList             VectorList;                                        // 0x10(0x10)(None)
	int32                                        XChannelIndex;                                     // 0x20(0x4)(None)
	int32                                        YChannelIndex;                                     // 0x24(0x4)(None)
	int32                                        ZChannelIndex;                                     // 0x28(0x4)(None)
	uint8                                        Pad_82F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannel
struct UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Params
{
public:
	struct FGeometryScriptColorList              ColorList;                                         // 0x0(0x10)(None)
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x10(0x10)(None)
	int32                                        ChannelIndex;                                      // 0x20(0x4)(None)
	uint8                                        Pad_834[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateVectorList
struct UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Params
{
public:
	struct FGeometryScriptVectorList             VectorList;                                        // 0x0(0x10)(None)
	struct FGeometryScriptVectorList             DuplicateList;                                     // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateUVList
struct UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Params
{
public:
	struct FGeometryScriptUVList                 UVList;                                            // 0x0(0x10)(None)
	struct FGeometryScriptUVList                 DuplicateList;                                     // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateScalarList
struct UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(None)
	struct FGeometryScriptScalarList             DuplicateList;                                     // 0x10(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateIndexList
struct UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Params
{
public:
	struct FGeometryScriptIndexList              IndexList;                                         // 0x0(0x18)(None)
	struct FGeometryScriptIndexList              DuplicateList;                                     // 0x18(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateColorList
struct UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Params
{
public:
	struct FGeometryScriptColorList              ColorList;                                         // 0x0(0x10)(None)
	struct FGeometryScriptColorList              DuplicateList;                                     // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertVectorListToArray
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Params
{
public:
	struct FGeometryScriptVectorList             VectorList;                                        // 0x0(0x10)(None)
	TArray<struct FVector>                       VectorArray;                                       // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertUVListToArray
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Params
{
public:
	struct FGeometryScriptUVList                 UVList;                                            // 0x0(0x10)(None)
	TArray<struct FVector2D>                     UVArray;                                           // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertTriangleListToArray
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Params
{
public:
	struct FGeometryScriptTriangleList           TriangleList;                                      // 0x0(0x10)(None)
	TArray<struct FIntVector>                    TriangleArray;                                     // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertScalarListToArray
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(None)
	TArray<double>                               ScalarArray;                                       // 0x10(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertIndexListToArray
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Params
{
public:
	struct FGeometryScriptIndexList              IndexList;                                         // 0x0(0x18)(None)
	TArray<int32>                                IndexArray;                                        // 0x18(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertColorListToArray
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Params
{
public:
	struct FGeometryScriptColorList              ColorList;                                         // 0x0(0x10)(None)
	TArray<struct FLinearColor>                  ColorArray;                                        // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToVectorList
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Params
{
public:
	TArray<struct FVector>                       VectorArray;                                       // 0x0(0x10)(None)
	struct FGeometryScriptVectorList             VectorList;                                        // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToUVList
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Params
{
public:
	TArray<struct FVector2D>                     UVArray;                                           // 0x0(0x10)(None)
	struct FGeometryScriptUVList                 UVList;                                            // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToTriangleList
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Params
{
public:
	TArray<struct FIntVector>                    TriangleArray;                                     // 0x0(0x10)(None)
	struct FGeometryScriptTriangleList           TriangleList;                                      // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToScalarList
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Params
{
public:
	TArray<double>                               VectorArray;                                       // 0x0(0x10)(None)
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x10(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToIndexList
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Params
{
public:
	TArray<int32>                                IndexArray;                                        // 0x0(0x10)(None)
	struct FGeometryScriptIndexList              IndexList;                                         // 0x10(0x18)(None)
	enum class EGeometryScriptIndexType          IndexType;                                         // 0x28(0x1)(None)
	uint8                                        Pad_864[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToColorList
struct UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Params
{
public:
	TArray<struct FLinearColor>                  ColorArray;                                        // 0x0(0x10)(None)
	struct FGeometryScriptColorList              ColorList;                                         // 0x10(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearVectorList
struct UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Params
{
public:
	struct FGeometryScriptVectorList             VectorList;                                        // 0x0(0x10)(None)
	struct FVector                               ClearValue;                                        // 0x10(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearUVList
struct UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Params
{
public:
	struct FGeometryScriptUVList                 UVList;                                            // 0x0(0x10)(None)
	struct FVector2D                             ClearUV;                                           // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearScalarList
struct UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(None)
	double                                       ClearValue;                                        // 0x10(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearIndexList
struct UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Params
{
public:
	struct FGeometryScriptIndexList              IndexList;                                         // 0x0(0x18)(None)
	int32                                        ClearValue;                                        // 0x18(0x4)(None)
	uint8                                        Pad_877[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearColorList
struct UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Params
{
public:
	struct FGeometryScriptColorList              ColorList;                                         // 0x0(0x10)(None)
	struct FLinearColor                          ClearColor;                                        // 0x10(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.GetSectionMaterialListFromStaticMesh
struct UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Params
{
public:
	class UStaticMesh*                           FromStaticMeshAsset;                               // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshReadLOD            RequestedLOD;                                      // 0x8(0x8)(None)
	TArray<class UMaterialInterface*>            MaterialList;                                      // 0x10(0x10)(ZeroConstructor)
	TArray<int32>                                MaterialIndex;                                     // 0x20(0x10)(None)
	enum class EGeometryScriptOutcomePins        Outcome;                                           // 0x30(0x1)(None)
	uint8                                        Pad_8A2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(None)
};

// 0xA8 (0xA8 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToStaticMesh
struct UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Params
{
public:
	class UDynamicMesh*                          FromDynamicMesh;                                   // 0x0(0x8)(ZeroConstructor)
	class UStaticMesh*                           ToStaticMeshAsset;                                 // 0x8(0x8)(ZeroConstructor)
	struct FGeometryScriptCopyMeshToAssetOptions Options;                                           // 0x10(0x78)(ZeroConstructor)
	struct FGeometryScriptMeshWriteLOD           TargetLod;                                         // 0x88(0x8)(None)
	enum class EGeometryScriptOutcomePins        Outcome;                                           // 0x90(0x1)(None)
	uint8                                        Pad_8B0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x98(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA0(0x8)(None)
};

// 0xA8 (0xA8 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToSkeletalMesh
struct UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Params
{
public:
	class UDynamicMesh*                          FromDynamicMesh;                                   // 0x0(0x8)(ZeroConstructor)
	class USkeletalMesh*                         ToSkeletalMeshAsset;                               // 0x8(0x8)(ZeroConstructor)
	struct FGeometryScriptCopyMeshToAssetOptions Options;                                           // 0x10(0x78)(ZeroConstructor)
	struct FGeometryScriptMeshWriteLOD           TargetLod;                                         // 0x88(0x8)(None)
	enum class EGeometryScriptOutcomePins        Outcome;                                           // 0x90(0x1)(None)
	uint8                                        Pad_8C2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x98(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA0(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromStaticMesh
struct UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Params
{
public:
	class UStaticMesh*                           FromStaticMeshAsset;                               // 0x0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ToDynamicMesh;                                     // 0x8(0x8)(ZeroConstructor)
	struct FGeometryScriptCopyMeshFromAssetOptions AssetOptions;                                      // 0x10(0x3)(None)
	uint8                                        Pad_8CC[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptMeshReadLOD            RequestedLOD;                                      // 0x14(0x8)(None)
	enum class EGeometryScriptOutcomePins        Outcome;                                           // 0x1C(0x1)(None)
	uint8                                        Pad_8CD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromSkeletalMesh
struct UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Params
{
public:
	class USkeletalMesh*                         FromSkeletalMeshAsset;                             // 0x0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ToDynamicMesh;                                     // 0x8(0x8)(ZeroConstructor)
	struct FGeometryScriptCopyMeshFromAssetOptions AssetOptions;                                      // 0x10(0x3)(None)
	uint8                                        Pad_8D9[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptMeshReadLOD            RequestedLOD;                                      // 0x14(0x8)(None)
	enum class EGeometryScriptOutcomePins        Outcome;                                           // 0x1C(0x1)(None)
	uint8                                        Pad_8DA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeVertexColor
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Params
{
public:
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x0(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTexture
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Params
{
public:
	class UTexture2D*                            SourceTexture;                                     // 0x0(0x8)(None)
	int32                                        SourceUVLayer;                                     // 0x8(0x4)(None)
	uint8                                        Pad_8E3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTangentNormal
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Params
{
public:
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x0(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypePosition
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Params
{
public:
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x0(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeObjectNormal
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Params
{
public:
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x0(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMultiTexture
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Params
{
public:
	TArray<class UTexture2D*>                    MaterialIDSourceTextures;                          // 0x0(0x10)(None)
	int32                                        SourceUVLayer;                                     // 0x10(0x4)(None)
	uint8                                        Pad_8EC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x18(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMaterialID
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Params
{
public:
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x0(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeFaceNormal
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Params
{
public:
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x0(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeCurvature
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Params
{
public:
	enum class EGeometryScriptBakeCurvatureTypeMode CurvatureType;                                     // 0x0(0x1)(None)
	enum class EGeometryScriptBakeCurvatureColorMode ColorMapping;                                      // 0x1(0x1)(None)
	uint8                                        Pad_8F9[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ColorRangeMultiplier;                              // 0x4(0x4)(None)
	float                                        MinRangeMultiplier;                                // 0x8(0x4)(None)
	enum class EGeometryScriptBakeCurvatureClampMode Clamping;                                          // 0xC(0x1)(None)
	uint8                                        Pad_8FB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeBentNormal
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Params
{
public:
	int32                                        OcclusionRays;                                     // 0x0(0x4)(None)
	float                                        MaxDistance;                                       // 0x4(0x4)(None)
	float                                        SpreadAngle;                                       // 0x8(0x4)(None)
	uint8                                        Pad_8FE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeAmbientOcclusion
struct UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Params
{
public:
	int32                                        OcclusionRays;                                     // 0x0(0x4)(None)
	float                                        MaxDistance;                                       // 0x4(0x4)(None)
	float                                        SpreadAngle;                                       // 0x8(0x4)(None)
	float                                        BiasAngle;                                         // 0xC(0x4)(None)
	struct FGeometryScriptBakeTypeOptions        ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x190 (0x190 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeVertex
struct UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	uint8                                        Pad_90B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TargetTransform;                                   // 0x10(0x60)(None)
	struct FGeometryScriptBakeTargetMeshOptions  TargetOptions;                                     // 0x70(0x4)(None)
	uint8                                        Pad_90C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          SourceMesh;                                        // 0x78(0x8)(ZeroConstructor)
	struct FTransform                            SourceTransform;                                   // 0x80(0x60)(None)
	struct FGeometryScriptBakeSourceMeshOptions  SourceOptions;                                     // 0xE0(0x10)(ZeroConstructor)
	struct FGeometryScriptBakeOutputType         BakeTypes;                                         // 0xF0(0x80)(None)
	struct FGeometryScriptBakeVertexOptions      BakeOptions;                                       // 0x170(0xC)(None)
	uint8                                        Pad_90E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x180(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x188(0x8)(None)
};

// 0x150 (0x150 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTextureFromRenderCaptures
struct UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	uint8                                        Pad_920[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TargetLocalToWorld;                                // 0x10(0x60)(None)
	struct FGeometryScriptBakeTargetMeshOptions  TargetOptions;                                     // 0x70(0x4)(None)
	uint8                                        Pad_922[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        SourceActors;                                      // 0x78(0x10)(ZeroConstructor)
	struct FGeometryScriptBakeRenderCaptureOptions BakeOptions;                                       // 0x88(0x28)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0xB0(0x8)(ZeroConstructor)
	struct FGeometryScriptRenderCaptureTextures  ReturnValue;                                       // 0xB8(0x90)(None)
	uint8                                        Pad_924[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x130 (0x130 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTexture
struct UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	uint8                                        Pad_93B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TargetTransform;                                   // 0x10(0x60)(None)
	struct FGeometryScriptBakeTargetMeshOptions  TargetOptions;                                     // 0x70(0x4)(None)
	uint8                                        Pad_93C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          SourceMesh;                                        // 0x78(0x8)(ZeroConstructor)
	struct FTransform                            SourceTransform;                                   // 0x80(0x60)(None)
	struct FGeometryScriptBakeSourceMeshOptions  SourceOptions;                                     // 0xE0(0x10)(ZeroConstructor)
	TArray<struct FGeometryScriptBakeTypeOptions> BakeTypes;                                         // 0xF0(0x10)(None)
	struct FGeometryScriptBakeTextureOptions     BakeOptions;                                       // 0x100(0x18)(ZeroConstructor)
	class UGeometryScriptDebug*                  Debug;                                             // 0x118(0x8)(ZeroConstructor)
	TArray<class UTexture2D*>                    ReturnValue;                                       // 0x120(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetVertexPosition
struct UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        VertexID;                                          // 0x8(0x4)(None)
	uint8                                        Pad_959[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               NewPosition;                                       // 0x10(0x18)(None)
	bool                                         bIsValidVertex;                                    // 0x28(0x1)(None)
	bool                                         bDeferChangeNotifications;                         // 0x29(0x1)(None)
	uint8                                        Pad_95A[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetAllMeshVertexPositions
struct UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptVectorList             PositionList;                                      // 0x8(0x10)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DiscardMeshAttributes
struct UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	bool                                         bDeferChangeNotifications;                         // 0x8(0x1)(None)
	uint8                                        Pad_965[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVerticesFromMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptIndexList              VertexList;                                        // 0x8(0x18)(None)
	int32                                        NumDeleted;                                        // 0x20(0x4)(None)
	bool                                         bDeferChangeNotifications;                         // 0x24(0x1)(None)
	uint8                                        Pad_96C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVertexFromMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        VertexID;                                          // 0x8(0x4)(None)
	bool                                         bWasVertexDeleted;                                 // 0xC(0x1)(None)
	bool                                         bDeferChangeNotifications;                         // 0xD(0x1)(None)
	uint8                                        Pad_977[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTrianglesFromMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptIndexList              TriangleList;                                      // 0x8(0x18)(None)
	int32                                        NumDeleted;                                        // 0x20(0x4)(None)
	bool                                         bDeferChangeNotifications;                         // 0x24(0x1)(None)
	uint8                                        Pad_984[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTriangleFromMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        TriangleID;                                        // 0x8(0x4)(None)
	bool                                         bWasTriangleDeleted;                               // 0xC(0x1)(None)
	bool                                         bDeferChangeNotifications;                         // 0xD(0x1)(None)
	uint8                                        Pad_991[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteSelectedTrianglesFromMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	int32                                        NumDeleted;                                        // 0x18(0x4)(None)
	bool                                         bDeferChangeNotifications;                         // 0x1C(0x1)(None)
	uint8                                        Pad_99A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshTransformed
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          AppendMesh;                                        // 0x8(0x8)(ZeroConstructor)
	TArray<struct FTransform>                    AppendTransforms;                                  // 0x10(0x10)(None)
	struct FTransform                            ConstantTransform;                                 // 0x20(0x60)(None)
	bool                                         bConstantTransformIsRelative;                      // 0x80(0x1)(None)
	bool                                         bDeferChangeNotifications;                         // 0x81(0x1)(None)
	struct FGeometryScriptAppendMeshOptions      AppendOptions;                                     // 0x82(0x1)(None)
	uint8                                        Pad_9B2[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(None)
	uint8                                        Pad_9B4[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshRepeated
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          AppendMesh;                                        // 0x8(0x8)(ZeroConstructor)
	struct FTransform                            AppendTransform;                                   // 0x10(0x60)(None)
	int32                                        RepeatCount;                                       // 0x70(0x4)(None)
	bool                                         bApplyTransformToFirstInstance;                    // 0x74(0x1)(None)
	bool                                         bDeferChangeNotifications;                         // 0x75(0x1)(None)
	struct FGeometryScriptAppendMeshOptions      AppendOptions;                                     // 0x76(0x1)(None)
	uint8                                        Pad_9C0[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x78(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x80(0x8)(None)
	uint8                                        Pad_9C2[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          AppendMesh;                                        // 0x8(0x8)(ZeroConstructor)
	struct FTransform                            AppendTransform;                                   // 0x10(0x60)(None)
	bool                                         bDeferChangeNotifications;                         // 0x70(0x1)(None)
	struct FGeometryScriptAppendMeshOptions      AppendOptions;                                     // 0x71(0x1)(None)
	uint8                                        Pad_9CA[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x78(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x80(0x8)(None)
	uint8                                        Pad_9CB[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x108 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendBuffersToMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptSimpleMeshBuffers      Buffers;                                           // 0x8(0xD0)(None)
	struct FGeometryScriptIndexList              NewTriangleIndicesList;                            // 0xD8(0x18)(None)
	int32                                        MaterialID;                                        // 0xF0(0x4)(None)
	bool                                         bDeferChangeNotifications;                         // 0xF4(0x1)(None)
	uint8                                        Pad_9E1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0xF8(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x100(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVerticesToMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptVectorList             NewPositionsList;                                  // 0x8(0x10)(None)
	struct FGeometryScriptIndexList              NewIndicesList;                                    // 0x18(0x18)(None)
	bool                                         bDeferChangeNotifications;                         // 0x30(0x1)(None)
	uint8                                        Pad_9EA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVertexToMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FVector                               NewPosition;                                       // 0x8(0x18)(None)
	int32                                        NewVertexIndex;                                    // 0x20(0x4)(None)
	bool                                         bDeferChangeNotifications;                         // 0x24(0x1)(None)
	uint8                                        Pad_9EC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTriangleToMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FIntVector                            NewTriangle;                                       // 0x8(0xC)(None)
	int32                                        NewTriangleIndex;                                  // 0x14(0x4)(None)
	int32                                        NewTriangleGroupID;                                // 0x18(0x4)(None)
	bool                                         bDeferChangeNotifications;                         // 0x1C(0x1)(None)
	uint8                                        Pad_9EF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTrianglesToMesh
struct UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptTriangleList           NewTrianglesList;                                  // 0x8(0x10)(None)
	struct FGeometryScriptIndexList              NewIndicesList;                                    // 0x18(0x18)(None)
	int32                                        NewTriangleGroupID;                                // 0x30(0x4)(None)
	bool                                         bDeferChangeNotifications;                         // 0x34(0x1)(None)
	uint8                                        Pad_9F4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetVertexBoneWeights
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        VertexID;                                          // 0x8(0x4)(None)
	uint8                                        Pad_A04[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGeometryScriptBoneWeight>     BoneWeights;                                       // 0x10(0x10)(None)
	bool                                         bIsValidVertexID;                                  // 0x20(0x1)(None)
	uint8                                        Pad_A05[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptBoneWeightProfile      Profile;                                           // 0x24(0x8)(None)
	uint8                                        Pad_A07[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetAllVertexBoneWeights
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	TArray<struct FGeometryScriptBoneWeight>     BoneWeights;                                       // 0x8(0x10)(None)
	struct FGeometryScriptBoneWeightProfile      Profile;                                           // 0x18(0x8)(None)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshHasBoneWeights
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	bool                                         bHasBoneWeights;                                   // 0x8(0x1)(None)
	uint8                                        Pad_A0A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptBoneWeightProfile      Profile;                                           // 0xC(0x8)(None)
	uint8                                        Pad_A0B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshCreateBoneWeights
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	bool                                         bProfileExisted;                                   // 0x8(0x1)(None)
	bool                                         bReplaceExistingProfile;                           // 0x9(0x1)(None)
	uint8                                        Pad_A0E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptBoneWeightProfile      Profile;                                           // 0xC(0x8)(None)
	uint8                                        Pad_A0F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetVertexBoneWeights
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        VertexID;                                          // 0x8(0x4)(None)
	uint8                                        Pad_A15[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGeometryScriptBoneWeight>     BoneWeights;                                       // 0x10(0x10)(None)
	bool                                         bHasValidBoneWeights;                              // 0x20(0x1)(None)
	uint8                                        Pad_A16[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptBoneWeightProfile      Profile;                                           // 0x24(0x8)(None)
	uint8                                        Pad_A17[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetMaxBoneWeightIndex
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	bool                                         bHasBoneWeights;                                   // 0x8(0x1)(None)
	uint8                                        Pad_A1D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxBoneIndex;                                      // 0xC(0x4)(None)
	struct FGeometryScriptBoneWeightProfile      Profile;                                           // 0x10(0x8)(None)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetLargestVertexBoneWeight
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        VertexID;                                          // 0x8(0x4)(None)
	struct FGeometryScriptBoneWeight             BoneWeight;                                        // 0xC(0x8)(None)
	bool                                         bHasValidBoneWeights;                              // 0x14(0x1)(None)
	uint8                                        Pad_A1F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptBoneWeightProfile      Profile;                                           // 0x18(0x8)(None)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.ComputeSmoothBoneWeights
struct UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class USkeleton*                             Skeleton;                                          // 0x8(0x8)(ZeroConstructor)
	struct FGeometryScriptSmoothBoneWeightsOptions Options;                                           // 0x10(0x10)(None)
	struct FGeometryScriptBoneWeightProfile      Profile;                                           // 0x20(0x8)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshSelfUnion
struct UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelfUnionOptions   Options;                                           // 0x8(0xC)(None)
	uint8                                        Pad_A34[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneSlice
struct UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	uint8                                        Pad_A39[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CutFrame;                                          // 0x10(0x60)(None)
	struct FGeometryScriptMeshPlaneSliceOptions  Options;                                           // 0x70(0xC)(None)
	uint8                                        Pad_A3A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(None)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneCut
struct UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	uint8                                        Pad_A3B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CutFrame;                                          // 0x10(0x60)(None)
	struct FGeometryScriptMeshPlaneCutOptions    Options;                                           // 0x70(0x8)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x78(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x80(0x8)(None)
	uint8                                        Pad_A3C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshMirror
struct UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	uint8                                        Pad_A3E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            MirrorFrame;                                       // 0x10(0x60)(None)
	struct FGeometryScriptMeshMirrorOptions      Options;                                           // 0x70(0x3)(None)
	uint8                                        Pad_A3F[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x78(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x80(0x8)(None)
	uint8                                        Pad_A40[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x100 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshBoolean
struct UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	uint8                                        Pad_A4A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TargetTransform;                                   // 0x10(0x60)(None)
	class UDynamicMesh*                          ToolMesh;                                          // 0x70(0x8)(ZeroConstructor)
	uint8                                        Pad_A4B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ToolTransform;                                     // 0x80(0x60)(None)
	enum class EGeometryScriptBooleanOperation   Operation;                                         // 0xE0(0x1)(None)
	uint8                                        Pad_A4C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptMeshBooleanOptions     Options;                                           // 0xE4(0x8)(None)
	uint8                                        Pad_A4E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0xF0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0xF8(0x8)(None)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.MeasureDistancesBetweenMeshes
struct UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          OtherMesh;                                         // 0x8(0x8)(ZeroConstructor)
	struct FGeometryScriptMeasureMeshDistanceOptions Options;                                           // 0x10(0x1)(None)
	uint8                                        Pad_A53[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MaxDistance;                                       // 0x18(0x8)(None)
	double                                       MinDistance;                                       // 0x20(0x8)(None)
	double                                       AverageDistance;                                   // 0x28(0x8)(None)
	double                                       RootMeanSqrDeviation;                              // 0x30(0x8)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsSameMeshAs
struct UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          OtherMesh;                                         // 0x8(0x8)(ZeroConstructor)
	struct FGeometryScriptIsSameMeshOptions      Options;                                           // 0x10(0xC)(None)
	bool                                         bIsSameMesh;                                       // 0x1C(0x1)(None)
	uint8                                        Pad_A58[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x100 (0x100 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsIntersectingMesh
struct UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	uint8                                        Pad_A60[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TargetTransform;                                   // 0x10(0x60)(None)
	class UDynamicMesh*                          OtherMesh;                                         // 0x70(0x8)(ZeroConstructor)
	uint8                                        Pad_A61[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OtherTransform;                                    // 0x80(0x60)(None)
	bool                                         bIsIntersecting;                                   // 0xE0(0x1)(None)
	uint8                                        Pad_A62[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0xE8(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0xF0(0x8)(None)
	uint8                                        Pad_A65[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByPolygroups
struct UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(None)
	TArray<class UDynamicMesh*>                  ComponentMeshes;                                   // 0x10(0x10)(ZeroConstructor)
	TArray<int32>                                ComponentPolygroups;                               // 0x20(0x10)(None)
	class UDynamicMeshPool*                      MeshPool;                                          // 0x30(0x8)(ZeroConstructor)
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByMaterialIDs
struct UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	TArray<class UDynamicMesh*>                  ComponentMeshes;                                   // 0x8(0x10)(ZeroConstructor)
	TArray<int32>                                ComponentMaterialIDs;                              // 0x18(0x10)(None)
	class UDynamicMeshPool*                      MeshPool;                                          // 0x28(0x8)(ZeroConstructor)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByComponents
struct UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	TArray<class UDynamicMesh*>                  ComponentMeshes;                                   // 0x8(0x10)(ZeroConstructor)
	class UDynamicMeshPool*                      MeshPool;                                          // 0x18(0x8)(ZeroConstructor)
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.GetSubMeshFromMesh
struct UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          StoreToSubmesh;                                    // 0x8(0x8)(ZeroConstructor)
	struct FGeometryScriptIndexList              TriangleList;                                      // 0x10(0x18)(None)
	class UDynamicMesh*                          StoreToSubmeshOut;                                 // 0x28(0x8)(ZeroConstructor)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshToMesh
struct UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Params
{
public:
	class UDynamicMesh*                          CopyFromMesh;                                      // 0x0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          CopyToMesh;                                        // 0x8(0x8)(ZeroConstructor)
	class UDynamicMesh*                          CopyToMeshOut;                                     // 0x10(0x8)(ZeroConstructor)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshSelectionToMesh
struct UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          StoreToSubmesh;                                    // 0x8(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x10(0x10)(None)
	class UDynamicMesh*                          StoreToSubmeshOut;                                 // 0x20(0x8)(ZeroConstructor)
	bool                                         bAppendToExisting;                                 // 0x28(0x1)(None)
	bool                                         bPreserveGroupIDs;                                 // 0x29(0x1)(None)
	uint8                                        Pad_A71[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyTwistWarpToMesh
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptTwistWarpOptions       Options;                                           // 0x8(0xC)(None)
	uint8                                        Pad_A73[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TwistOrientation;                                  // 0x20(0x60)(None)
	float                                        TwistAngle;                                        // 0x80(0x4)(None)
	float                                        TwistExtent;                                       // 0x84(0x4)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(None)
	uint8                                        Pad_A74[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyPerlinNoiseToMesh
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	struct FGeometryScriptPerlinNoiseOptions     Options;                                           // 0x18(0x30)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x48(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x50(0x8)(None)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyMathWarpToMesh
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	uint8                                        Pad_A77[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WarpOrientation;                                   // 0x10(0x60)(None)
	enum class EGeometryScriptMathWarpType       WarpType;                                          // 0x70(0x1)(None)
	uint8                                        Pad_A78[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptMathWarpOptions        Options;                                           // 0x74(0xC)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyIterativeSmoothingToMesh
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	struct FGeometryScriptIterativeMeshSmoothingOptions Options;                                           // 0x18(0xC)(None)
	uint8                                        Pad_A79[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyFlareWarpToMesh
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptFlareWarpOptions       Options;                                           // 0x8(0xC)(None)
	uint8                                        Pad_A7A[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            FlareOrientation;                                  // 0x20(0x60)(None)
	float                                        FlarePercentX;                                     // 0x80(0x4)(None)
	float                                        FlarePercentY;                                     // 0x84(0x4)(None)
	float                                        FlareExtent;                                       // 0x88(0x4)(None)
	uint8                                        Pad_A7B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x90(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x98(0x8)(None)
};

// 0x70 (0x70 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromTextureMap
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UTexture2D*                            Texture;                                           // 0x8(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x10(0x10)(None)
	struct FGeometryScriptDisplaceFromTextureOptions Options;                                           // 0x20(0x38)(None)
	int32                                        UVLayer;                                           // 0x58(0x4)(None)
	uint8                                        Pad_A7C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x60(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x68(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromPerVertexVectors
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	struct FGeometryScriptVectorList             VectorList;                                        // 0x18(0x10)(None)
	float                                        Magnitude;                                         // 0x28(0x4)(None)
	uint8                                        Pad_A7D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyBendWarpToMesh
struct UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptBendWarpOptions        Options;                                           // 0x8(0xC)(None)
	uint8                                        Pad_A7E[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BendOrientation;                                   // 0x20(0x60)(None)
	float                                        BendAngle;                                         // 0x80(0x4)(None)
	float                                        BendExtent;                                        // 0x84(0x4)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(None)
	uint8                                        Pad_A7F[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetTriangleMaterialID
struct UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        TriangleID;                                        // 0x8(0x4)(None)
	int32                                        MaterialID;                                        // 0xC(0x4)(None)
	bool                                         bIsValidTriangle;                                  // 0x10(0x1)(None)
	bool                                         bDeferChangeNotifications;                         // 0x11(0x1)(None)
	uint8                                        Pad_A83[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetPolygroupMaterialID
struct UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(None)
	int32                                        PolygroupID;                                       // 0x10(0x4)(None)
	int32                                        MaterialID;                                        // 0x14(0x4)(None)
	bool                                         bIsValidPolygroupID;                               // 0x18(0x1)(None)
	bool                                         bDeferChangeNotifications;                         // 0x19(0x1)(None)
	uint8                                        Pad_A84[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDOnTriangles
struct UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptIndexList              TriangleIDList;                                    // 0x8(0x18)(None)
	int32                                        MaterialID;                                        // 0x20(0x4)(None)
	bool                                         bDeferChangeNotifications;                         // 0x24(0x1)(None)
	uint8                                        Pad_A85[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDForMeshSelection
struct UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	int32                                        MaterialID;                                        // 0x18(0x4)(None)
	bool                                         bDeferChangeNotifications;                         // 0x1C(0x1)(None)
	uint8                                        Pad_A87[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetAllTriangleMaterialIDs
struct UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptIndexList              TriangleMaterialIDList;                            // 0x8(0x18)(None)
	bool                                         bDeferChangeNotifications;                         // 0x20(0x1)(None)
	uint8                                        Pad_A8B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.RemapMaterialIDs
struct UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        FromMaterialID;                                    // 0x8(0x4)(None)
	int32                                        ToMaterialID;                                      // 0xC(0x4)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTrianglesByMaterialID
struct UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        MaterialID;                                        // 0x8(0x4)(None)
	uint8                                        Pad_A8F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptIndexList              TriangleIDList;                                    // 0x10(0x18)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTriangleMaterialID
struct UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	int32                                        TriangleID;                                        // 0x8(0x4)(None)
	bool                                         bIsValidTriangle;                                  // 0xC(0x1)(None)
	uint8                                        Pad_A92[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_A93[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaxMaterialID
struct UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	bool                                         bHasMaterialIDs;                                   // 0x8(0x1)(None)
	uint8                                        Pad_A96[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0xC(0x4)(None)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaterialIDsOfTriangles
struct UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptIndexList              TriangleIDList;                                    // 0x8(0x18)(None)
	struct FGeometryScriptIndexList              MaterialIDList;                                    // 0x20(0x18)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetAllTriangleMaterialIDs
struct UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptIndexList              MaterialIDList;                                    // 0x8(0x18)(None)
	bool                                         bHasMaterialIDs;                                   // 0x20(0x1)(None)
	uint8                                        Pad_A99[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.EnableMaterialIDs
struct UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.DeleteTrianglesByMaterialID
struct UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        MaterialID;                                        // 0x8(0x4)(None)
	int32                                        NumDeleted;                                        // 0xC(0x4)(None)
	bool                                         bDeferChangeNotifications;                         // 0x10(0x1)(None)
	uint8                                        Pad_A9D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.CompactMaterialIDs
struct UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	TArray<class UMaterialInterface*>            SourceMaterialList;                                // 0x8(0x10)(ZeroConstructor)
	TArray<class UMaterialInterface*>            CompactedMaterialList;                             // 0x18(0x10)(ZeroConstructor)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.ClearMaterialIDs
struct UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        ClearValue;                                        // 0x8(0x4)(None)
	uint8                                        Pad_AAB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshShell
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshOffsetOptions      Options;                                           // 0x8(0x18)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0xE0 (0xE0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshPolygroupBevel
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	uint8                                        Pad_AC4[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptMeshBevelOptions       Options;                                           // 0x10(0xC0)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0xD0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0xD8(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffsetFaces
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshOffsetFacesOptions Options;                                           // 0x8(0x18)(None)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x20(0x10)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffset
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshOffsetOptions      Options;                                           // 0x8(0x18)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshLinearExtrudeFaces
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshLinearExtrudeOptions Options;                                           // 0x8(0x38)(None)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x40(0x10)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x50(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x58(0x8)(None)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshInsetOutsetFaces
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshInsetOutsetFacesOptions Options;                                           // 0x8(0x20)(None)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x28(0x10)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshExtrude_Compatibility_5p0
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshExtrudeOptions     Options;                                           // 0x8(0x28)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDuplicateFaces
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	struct FGeometryScriptMeshSelection          NewTriangles;                                      // 0x18(0x10)(None)
	struct FGeometryScriptMeshEditPolygroupOptions GroupOptions;                                      // 0x28(0x8)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDisconnectFaces
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	bool                                         bAllowBowtiesInOutput;                             // 0x18(0x1)(None)
	uint8                                        Pad_AF8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshBevelSelection
struct UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	enum class EGeometryScriptMeshBevelSelectionMode BevelMode;                                         // 0x18(0x1)(None)
	uint8                                        Pad_AFB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptMeshBevelSelectionOptions BevelOptions;                                      // 0x1C(0xC)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x70 (0x70 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.UpdateVertexNormal
struct UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        VertexID;                                          // 0x8(0x4)(None)
	bool                                         bUpdateNormal;                                     // 0xC(0x1)(None)
	uint8                                        Pad_B06[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               NewNormal;                                         // 0x10(0x18)(None)
	bool                                         bUpdateTangents;                                   // 0x28(0x1)(None)
	uint8                                        Pad_B07[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               NewTangentX;                                       // 0x30(0x18)(None)
	struct FVector                               NewTangentY;                                       // 0x48(0x18)(None)
	bool                                         bIsValidVertex;                                    // 0x60(0x1)(None)
	bool                                         bMergeSplitValues;                                 // 0x61(0x1)(None)
	bool                                         bDeferChangeNotifications;                         // 0x62(0x1)(None)
	uint8                                        Pad_B08[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x68(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerVertexNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerFaceNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshTriangleNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        TriangleID;                                        // 0x8(0x4)(None)
	uint8                                        Pad_B16[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptTriangle               Normals;                                           // 0x10(0x48)(None)
	bool                                         bIsValidTriangle;                                  // 0x58(0x1)(None)
	bool                                         bDeferChangeNotifications;                         // 0x59(0x1)(None)
	uint8                                        Pad_B17[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x60(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexTangents
struct UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptVectorList             TangentXList;                                      // 0x8(0x10)(None)
	struct FGeometryScriptVectorList             TangentYList;                                      // 0x18(0x10)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptVectorList             VertexNormalList;                                  // 0x8(0x10)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.RecomputeNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptCalculateNormalsOptions CalculateOptions;                                  // 0x8(0x2)(None)
	uint8                                        Pad_B24[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexTangents
struct UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptVectorList             TangentXList;                                      // 0x8(0x10)(None)
	struct FGeometryScriptVectorList             TangentYList;                                      // 0x18(0x10)(None)
	bool                                         bIsValidTangentSet;                                // 0x28(0x1)(None)
	bool                                         bHasVertexIDGaps;                                  // 0x29(0x1)(None)
	bool                                         bAverageSplitVertexValues;                         // 0x2A(0x1)(None)
	uint8                                        Pad_B30[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptVectorList             NormalList;                                        // 0x8(0x10)(None)
	bool                                         bIsValidNormalSet;                                 // 0x18(0x1)(None)
	bool                                         bHasVertexIDGaps;                                  // 0x19(0x1)(None)
	bool                                         bAverageSplitVertexValues;                         // 0x1A(0x1)(None)
	uint8                                        Pad_B37[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshHasTangents
struct UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	bool                                         bHasTangents;                                      // 0x8(0x1)(None)
	uint8                                        Pad_B3C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.FlipNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.DiscardTangents
struct UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeTangents
struct UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptTangentsOptions        Options;                                           // 0x8(0x8)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeSplitNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptSplitNormalsOptions    SplitOptions;                                      // 0x8(0x14)(None)
	struct FGeometryScriptCalculateNormalsOptions CalculateOptions;                                  // 0x1C(0x2)(None)
	uint8                                        Pad_B4A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.AutoRepairNormals
struct UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.SetPolygroupForMeshSelection
struct UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(None)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x10(0x10)(None)
	int32                                        SetPolygroupIDOut;                                 // 0x20(0x4)(None)
	int32                                        SetPolygroupID;                                    // 0x24(0x4)(None)
	bool                                         bGenerateNewPolygroup;                             // 0x28(0x1)(None)
	bool                                         bDeferChangeNotifications;                         // 0x29(0x1)(None)
	uint8                                        Pad_B5C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.SetNumExtendedPolygroupLayers
struct UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        NumLayers;                                         // 0x8(0x4)(None)
	uint8                                        Pad_B5F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglesInPolygroup
struct UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(None)
	int32                                        PolygroupID;                                       // 0x10(0x4)(None)
	uint8                                        Pad_B65[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptIndexList              TriangleIDsOut;                                    // 0x18(0x18)(None)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglePolygroupID
struct UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(None)
	int32                                        TriangleID;                                        // 0x10(0x4)(None)
	bool                                         bIsValidTriangle;                                  // 0x14(0x1)(None)
	uint8                                        Pad_B67[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x18(0x4)(None)
	uint8                                        Pad_B68[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetPolygroupIDsInMesh
struct UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(None)
	struct FGeometryScriptIndexList              PolygroupIDsOut;                                   // 0x10(0x18)(None)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetAllTrianglePolygroupIDs
struct UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(None)
	struct FGeometryScriptIndexList              PolygroupIDsOut;                                   // 0x10(0x18)(None)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.EnablePolygroups
struct UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.DeleteTrianglesInPolygroup
struct UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(None)
	int32                                        PolygroupID;                                       // 0x10(0x4)(None)
	int32                                        NumDeleted;                                        // 0x14(0x4)(None)
	bool                                         bDeferChangeNotifications;                         // 0x18(0x1)(None)
	uint8                                        Pad_B6E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.CopyPolygroupsLayer
struct UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptGroupLayer             FromGroupLayer;                                    // 0x8(0x8)(None)
	struct FGeometryScriptGroupLayer             ToGroupLayer;                                      // 0x10(0x8)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertUVIslandsToPolygroups
struct UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(None)
	int32                                        UVLayer;                                           // 0x10(0x4)(None)
	uint8                                        Pad_B78[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertComponentsToPolygroups
struct UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromPolygonDetection
struct UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(None)
	bool                                         bRespectUVSeams;                                   // 0x10(0x1)(None)
	bool                                         bRespectHardNormals;                               // 0x11(0x1)(None)
	uint8                                        Pad_B7A[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       QuadAdjacencyWeight;                               // 0x18(0x8)(None)
	double                                       QuadMetricClamp;                                   // 0x20(0x8)(None)
	int32                                        MaxSearchRounds;                                   // 0x28(0x4)(None)
	uint8                                        Pad_B7B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromAngleThreshold
struct UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(None)
	float                                        CreaseAngle;                                       // 0x10(0x4)(None)
	int32                                        MinGroupSize;                                      // 0x14(0x4)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ClearPolygroups
struct UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x8(0x8)(None)
	int32                                        ClearValue;                                        // 0x10(0x4)(None)
	uint8                                        Pad_B7D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0xF0 (0xF0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendVoronoiDiagram2D
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_B84[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	TArray<struct FVector2D>                     VoronoiSites;                                      // 0x70(0x10)(None)
	struct FGeometryScriptVoronoiOptions         VoronoiOptions;                                    // 0x80(0x58)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0xD8(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0xE0(0x8)(None)
	uint8                                        Pad_B86[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTriangulatedPolygon
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_B92[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	TArray<struct FVector2D>                     PolygonVertices;                                   // 0x70(0x10)(None)
	bool                                         bAllowSelfIntersections;                           // 0x80(0x1)(None)
	uint8                                        Pad_B94[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(None)
	uint8                                        Pad_B95[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTorus
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_B9E[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	struct FGeometryScriptRevolveOptions         RevolveOptions;                                    // 0x70(0x14)(None)
	float                                        MajorRadius;                                       // 0x84(0x4)(None)
	float                                        MinorRadius;                                       // 0x88(0x4)(None)
	int32                                        MajorSteps;                                        // 0x8C(0x4)(None)
	int32                                        MinorSteps;                                        // 0x90(0x4)(None)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x94(0x1)(None)
	uint8                                        Pad_B9F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x98(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA0(0x8)(None)
	uint8                                        Pad_BA2[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolyline
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_BB7[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	TArray<struct FVector2D>                     PolylineVertices;                                  // 0x70(0x10)(None)
	TArray<struct FTransform>                    SweepPath;                                         // 0x80(0x10)(None)
	TArray<float>                                PolylineTexParamU;                                 // 0x90(0x10)(None)
	TArray<float>                                SweepPathTexParamV;                                // 0xA0(0x10)(None)
	bool                                         bLoop;                                             // 0xB0(0x1)(None)
	uint8                                        Pad_BB8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartScale;                                        // 0xB4(0x4)(None)
	float                                        EndScale;                                          // 0xB8(0x4)(None)
	float                                        RotationAngleDeg;                                  // 0xBC(0x4)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0xC0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0xC8(0x8)(None)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolygon
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_BBB[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	TArray<struct FVector2D>                     PolygonVertices;                                   // 0x70(0x10)(None)
	TArray<struct FTransform>                    SweepPath;                                         // 0x80(0x10)(None)
	bool                                         bLoop;                                             // 0x90(0x1)(None)
	bool                                         bCapped;                                           // 0x91(0x1)(None)
	uint8                                        Pad_BBE[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartScale;                                        // 0x94(0x4)(None)
	float                                        EndScale;                                          // 0x98(0x4)(None)
	float                                        RotationAngleDeg;                                  // 0x9C(0x4)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0xA0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA8(0x8)(None)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSpiralRevolvePolygon
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_BC8[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	TArray<struct FVector2D>                     PolygonVertices;                                   // 0x70(0x10)(None)
	struct FGeometryScriptRevolveOptions         RevolveOptions;                                    // 0x80(0x14)(None)
	float                                        Radius;                                            // 0x94(0x4)(None)
	int32                                        Steps;                                             // 0x98(0x4)(None)
	float                                        RisePerRevolution;                                 // 0x9C(0x4)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0xA0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA8(0x8)(None)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereLatLong
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_BD2[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	float                                        Radius;                                            // 0x70(0x4)(None)
	int32                                        StepsPhi;                                          // 0x74(0x4)(None)
	int32                                        StepsTheta;                                        // 0x78(0x4)(None)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x7C(0x1)(None)
	uint8                                        Pad_BD4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereBox
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_BDE[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	float                                        Radius;                                            // 0x70(0x4)(None)
	int32                                        StepsX;                                            // 0x74(0x4)(None)
	int32                                        StepsY;                                            // 0x78(0x4)(None)
	int32                                        StepsZ;                                            // 0x7C(0x4)(None)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x80(0x1)(None)
	uint8                                        Pad_BDF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(None)
	uint8                                        Pad_BE0[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleSweptPolygon
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_BE8[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	TArray<struct FVector2D>                     PolygonVertices;                                   // 0x70(0x10)(None)
	TArray<struct FVector>                       SweepPath;                                         // 0x80(0x10)(None)
	bool                                         bLoop;                                             // 0x90(0x1)(None)
	bool                                         bCapped;                                           // 0x91(0x1)(None)
	uint8                                        Pad_BE9[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartScale;                                        // 0x94(0x4)(None)
	float                                        EndScale;                                          // 0x98(0x4)(None)
	uint8                                        Pad_BEA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0xA0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA8(0x8)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleExtrudePolygon
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_BF5[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	TArray<struct FVector2D>                     PolygonVertices;                                   // 0x70(0x10)(None)
	float                                        Height;                                            // 0x80(0x4)(None)
	int32                                        HeightSteps;                                       // 0x84(0x4)(None)
	bool                                         bCapped;                                           // 0x88(0x1)(None)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x89(0x1)(None)
	uint8                                        Pad_BF7[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x90(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x98(0x8)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangleXY
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_C00[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	float                                        DimensionX;                                        // 0x70(0x4)(None)
	float                                        DimensionY;                                        // 0x74(0x4)(None)
	float                                        CornerRadius;                                      // 0x78(0x4)(None)
	int32                                        StepsWidth;                                        // 0x7C(0x4)(None)
	int32                                        StepsHeight;                                       // 0x80(0x4)(None)
	int32                                        StepsRound;                                        // 0x84(0x4)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(None)
	uint8                                        Pad_C02[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangle_Compatibility_5_0
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_C0A[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	float                                        DimensionX;                                        // 0x70(0x4)(None)
	float                                        DimensionY;                                        // 0x74(0x4)(None)
	float                                        CornerRadius;                                      // 0x78(0x4)(None)
	int32                                        StepsWidth;                                        // 0x7C(0x4)(None)
	int32                                        StepsHeight;                                       // 0x80(0x4)(None)
	int32                                        StepsRound;                                        // 0x84(0x4)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(None)
	uint8                                        Pad_C0B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePolygon
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_C0D[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	TArray<struct FVector2D>                     PolygonVertices;                                   // 0x70(0x10)(None)
	struct FGeometryScriptRevolveOptions         RevolveOptions;                                    // 0x80(0x14)(None)
	float                                        Radius;                                            // 0x94(0x4)(None)
	int32                                        Steps;                                             // 0x98(0x4)(None)
	uint8                                        Pad_C0E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0xA0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA8(0x8)(None)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePath
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_C19[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	TArray<struct FVector2D>                     PathVertices;                                      // 0x70(0x10)(None)
	struct FGeometryScriptRevolveOptions         RevolveOptions;                                    // 0x80(0x14)(None)
	int32                                        Steps;                                             // 0x94(0x4)(None)
	bool                                         bCapped;                                           // 0x98(0x1)(None)
	uint8                                        Pad_C1B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0xA0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA8(0x8)(None)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangleXY
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_C24[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	float                                        DimensionX;                                        // 0x70(0x4)(None)
	float                                        DimensionY;                                        // 0x74(0x4)(None)
	int32                                        StepsWidth;                                        // 0x78(0x4)(None)
	int32                                        StepsHeight;                                       // 0x7C(0x4)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(None)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangle_Compatibility_5_0
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_C2E[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	float                                        DimensionX;                                        // 0x70(0x4)(None)
	float                                        DimensionY;                                        // 0x74(0x4)(None)
	int32                                        StepsWidth;                                        // 0x78(0x4)(None)
	int32                                        StepsHeight;                                       // 0x7C(0x4)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendLinearStairs
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_C38[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	float                                        StepWidth;                                         // 0x70(0x4)(None)
	float                                        StepHeight;                                        // 0x74(0x4)(None)
	float                                        StepDepth;                                         // 0x78(0x4)(None)
	int32                                        NumSteps;                                          // 0x7C(0x4)(None)
	bool                                         bFloating;                                         // 0x80(0x1)(None)
	uint8                                        Pad_C39[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(None)
	uint8                                        Pad_C3A[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendDisc
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_C57[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	float                                        Radius;                                            // 0x70(0x4)(None)
	int32                                        AngleSteps;                                        // 0x74(0x4)(None)
	int32                                        SpokeSteps;                                        // 0x78(0x4)(None)
	float                                        StartAngle;                                        // 0x7C(0x4)(None)
	float                                        EndAngle;                                          // 0x80(0x4)(None)
	float                                        HoleRadius;                                        // 0x84(0x4)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(None)
	uint8                                        Pad_C58[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCylinder
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_C65[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	float                                        Radius;                                            // 0x70(0x4)(None)
	float                                        Height;                                            // 0x74(0x4)(None)
	int32                                        RadialSteps;                                       // 0x78(0x4)(None)
	int32                                        HeightSteps;                                       // 0x7C(0x4)(None)
	bool                                         bCapped;                                           // 0x80(0x1)(None)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x81(0x1)(None)
	uint8                                        Pad_C66[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(None)
	uint8                                        Pad_C67[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCurvedStairs
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_C76[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	float                                        StepWidth;                                         // 0x70(0x4)(None)
	float                                        StepHeight;                                        // 0x74(0x4)(None)
	float                                        InnerRadius;                                       // 0x78(0x4)(None)
	float                                        CurveAngle;                                        // 0x7C(0x4)(None)
	int32                                        NumSteps;                                          // 0x80(0x4)(None)
	bool                                         bFloating;                                         // 0x84(0x1)(None)
	uint8                                        Pad_C78[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(None)
	uint8                                        Pad_C81[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCone
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_CA4[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	float                                        BaseRadius;                                        // 0x70(0x4)(None)
	float                                        TopRadius;                                         // 0x74(0x4)(None)
	float                                        Height;                                            // 0x78(0x4)(None)
	int32                                        RadialSteps;                                       // 0x7C(0x4)(None)
	int32                                        HeightSteps;                                       // 0x80(0x4)(None)
	bool                                         bCapped;                                           // 0x84(0x1)(None)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x85(0x1)(None)
	uint8                                        Pad_CA5[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(None)
	uint8                                        Pad_CA6[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCapsule
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_CAF[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	float                                        Radius;                                            // 0x70(0x4)(None)
	float                                        LineLength;                                        // 0x74(0x4)(None)
	int32                                        HemisphereSteps;                                   // 0x78(0x4)(None)
	int32                                        CircleSteps;                                       // 0x7C(0x4)(None)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x80(0x1)(None)
	uint8                                        Pad_CB0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(None)
	uint8                                        Pad_CB1[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendBox
struct UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPrimitiveOptions       PrimitiveOptions;                                  // 0x8(0x3)(None)
	uint8                                        Pad_CB9[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	float                                        DimensionX;                                        // 0x70(0x4)(None)
	float                                        DimensionY;                                        // 0x74(0x4)(None)
	float                                        DimensionZ;                                        // 0x78(0x4)(None)
	int32                                        StepsX;                                            // 0x7C(0x4)(None)
	int32                                        StepsY;                                            // 0x80(0x4)(None)
	int32                                        StepsZ;                                            // 0x84(0x4)(None)
	enum class EGeometryScriptPrimitiveOriginMode Origin;                                            // 0x88(0x1)(None)
	uint8                                        Pad_CBA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x90(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x98(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidVertexID
struct UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	int32                                        VertexID;                                          // 0x8(0x4)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
	uint8                                        Pad_D02[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidTriangleID
struct UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	int32                                        TriangleID;                                        // 0x8(0x4)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
	uint8                                        Pad_D09[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexPosition
struct UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	int32                                        VertexID;                                          // 0x8(0x4)(None)
	bool                                         bIsValidVertex;                                    // 0xC(0x1)(None)
	uint8                                        Pad_D16[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexCount
struct UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_D1B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetUVSetBoundingBox
struct UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(None)
	bool                                         bIsValidUVSet;                                     // 0xC(0x1)(None)
	bool                                         bUVSetIsEmpty;                                     // 0xD(0x1)(None)
	uint8                                        Pad_D21[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox2D                                ReturnValue;                                       // 0x10(0x28)(None)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleVertexColors
struct UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        TriangleID;                                        // 0x8(0x4)(None)
	struct FLinearColor                          Color1;                                            // 0xC(0x10)(None)
	struct FLinearColor                          Color2;                                            // 0x1C(0x10)(None)
	struct FLinearColor                          Color3;                                            // 0x2C(0x10)(None)
	bool                                         bTriHasValidVertexColors;                          // 0x3C(0x1)(None)
	uint8                                        Pad_D37[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(None)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleUVs
struct UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(None)
	int32                                        TriangleID;                                        // 0xC(0x4)(None)
	struct FVector2D                             UV1;                                               // 0x10(0x10)(None)
	struct FVector2D                             UV2;                                               // 0x20(0x10)(None)
	struct FVector2D                             UV3;                                               // 0x30(0x10)(None)
	bool                                         bHaveValidUVs;                                     // 0x40(0x1)(None)
	uint8                                        Pad_D40[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTrianglePositions
struct UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	int32                                        TriangleID;                                        // 0x8(0x4)(None)
	bool                                         bIsValidTriangle;                                  // 0xC(0x1)(None)
	uint8                                        Pad_D43[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Vertex1;                                           // 0x10(0x18)(None)
	struct FVector                               Vertex2;                                           // 0x28(0x18)(None)
	struct FVector                               Vertex3;                                           // 0x40(0x18)(None)
};

// 0xF0 (0xF0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormalTangents
struct UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        TriangleID;                                        // 0x8(0x4)(None)
	bool                                         bTriHasValidElements;                              // 0xC(0x1)(None)
	uint8                                        Pad_D49[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptTriangle               Normals;                                           // 0x10(0x48)(None)
	struct FGeometryScriptTriangle               Tangents;                                          // 0x58(0x48)(None)
	struct FGeometryScriptTriangle               BiTangents;                                        // 0xA0(0x48)(None)
	class UDynamicMesh*                          ReturnValue;                                       // 0xE8(0x8)(None)
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormals
struct UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        TriangleID;                                        // 0x8(0x4)(None)
	uint8                                        Pad_D4F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Normal1;                                           // 0x10(0x18)(None)
	struct FVector                               Normal2;                                           // 0x28(0x18)(None)
	struct FVector                               Normal3;                                           // 0x40(0x18)(None)
	bool                                         bTriHasValidNormals;                               // 0x58(0x1)(None)
	uint8                                        Pad_D50[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x60(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleIndices
struct UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	int32                                        TriangleID;                                        // 0x8(0x4)(None)
	bool                                         bIsValidTriangle;                                  // 0xC(0x1)(None)
	uint8                                        Pad_D57[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntVector                            ReturnValue;                                       // 0x10(0xC)(None)
	uint8                                        Pad_D58[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleFaceNormal
struct UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	int32                                        TriangleID;                                        // 0x8(0x4)(None)
	bool                                         bIsValidTriangle;                                  // 0xC(0x1)(None)
	uint8                                        Pad_D5A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumVertexIDs
struct UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_D5B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumUVSets
struct UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_D5C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumTriangleIDs
struct UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_D5D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderLoops
struct UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	bool                                         bAmbiguousTopologyFound;                           // 0x8(0x1)(None)
	uint8                                        Pad_D5E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0xC(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderEdges
struct UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_D5F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumExtendedPolygroupLayers
struct UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_D60[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumConnectedComponents
struct UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_D66[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshVolumeArea
struct UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	float                                        SurfaceArea;                                       // 0x8(0x4)(None)
	float                                        Volume;                                            // 0xC(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshInfoString
struct UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	class FString                                ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshHasAttributeSet
struct UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_D81[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshBoundingBox
struct UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	struct FBox                                  ReturnValue;                                       // 0x8(0x38)(None)
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsDenseMesh
struct UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_D92[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsClosedMesh
struct UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_D95[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleVertexColor
struct UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        TriangleID;                                        // 0x8(0x4)(None)
	uint8                                        Pad_D9A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BarycentricCoords;                                 // 0x10(0x18)(None)
	struct FLinearColor                          DefaultColor;                                      // 0x28(0x10)(None)
	bool                                         bTriHasValidVertexColors;                          // 0x38(0x1)(None)
	uint8                                        Pad_D9C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          InterpolatedColor;                                 // 0x3C(0x10)(None)
	uint8                                        Pad_D9D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x50(0x8)(None)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleUV
struct UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(None)
	int32                                        TriangleID;                                        // 0xC(0x4)(None)
	struct FVector                               BarycentricCoords;                                 // 0x10(0x18)(None)
	bool                                         bTriHasValidUVs;                                   // 0x28(0x1)(None)
	uint8                                        Pad_DAF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             InterpolatedUV;                                    // 0x30(0x10)(None)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTrianglePosition
struct UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        TriangleID;                                        // 0x8(0x4)(None)
	uint8                                        Pad_DC3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BarycentricCoords;                                 // 0x10(0x18)(None)
	bool                                         bIsValidTriangle;                                  // 0x28(0x1)(None)
	uint8                                        Pad_DC4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InterpolatedPosition;                              // 0x30(0x18)(None)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(None)
};

// 0x80 (0x80 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormalTangents
struct UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        TriangleID;                                        // 0x8(0x4)(None)
	uint8                                        Pad_DCB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BarycentricCoords;                                 // 0x10(0x18)(None)
	bool                                         bTriHasValidElements;                              // 0x28(0x1)(None)
	uint8                                        Pad_DCC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InterpolatedNormal;                                // 0x30(0x18)(None)
	struct FVector                               InterpolatedTangent;                               // 0x48(0x18)(None)
	struct FVector                               InterpolatedBiTangent;                             // 0x60(0x18)(None)
	class UDynamicMesh*                          ReturnValue;                                       // 0x78(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormal
struct UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        TriangleID;                                        // 0x8(0x4)(None)
	uint8                                        Pad_DD4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BarycentricCoords;                                 // 0x10(0x18)(None)
	bool                                         bTriHasValidNormals;                               // 0x28(0x1)(None)
	uint8                                        Pad_DD5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InterpolatedNormal;                                // 0x30(0x18)(None)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexIDGaps
struct UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_DDA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexColors
struct UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_DE3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleNormals
struct UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_DEA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleIDGaps
struct UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_DED[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasPolygroups
struct UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_DEF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasMaterialIDs
struct UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_E0D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexPositions
struct UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptVectorList             PositionList;                                      // 0x8(0x10)(None)
	bool                                         bSkipGaps;                                         // 0x18(0x1)(None)
	bool                                         bHasVertexIDGaps;                                  // 0x19(0x1)(None)
	uint8                                        Pad_E15[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexIDs
struct UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptIndexList              VertexIDList;                                      // 0x8(0x18)(None)
	bool                                         bHasVertexIDGaps;                                  // 0x20(0x1)(None)
	uint8                                        Pad_E1B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIndices
struct UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptTriangleList           TriangleList;                                      // 0x8(0x10)(None)
	bool                                         bSkipGaps;                                         // 0x18(0x1)(None)
	bool                                         bHasTriangleIDGaps;                                // 0x19(0x1)(None)
	uint8                                        Pad_E1F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIDs
struct UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptIndexList              TriangleIDList;                                    // 0x8(0x18)(None)
	bool                                         bHasTriangleIDGaps;                                // 0x20(0x1)(None)
	uint8                                        Pad_E22[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.ComputeTriangleBarycentricCoords
struct UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        TriangleID;                                        // 0x8(0x4)(None)
	bool                                         bIsValidTriangle;                                  // 0xC(0x1)(None)
	uint8                                        Pad_E23[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Point;                                             // 0x10(0x18)(None)
	struct FVector                               Vertex1;                                           // 0x28(0x18)(None)
	struct FVector                               Vertex2;                                           // 0x40(0x18)(None)
	struct FVector                               Vertex3;                                           // 0x58(0x18)(None)
	struct FVector                               BarycentricCoords;                                 // 0x70(0x18)(None)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions.ApplyUniformRemesh
struct UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptRemeshOptions          RemeshOptions;                                     // 0x8(0x1C)(None)
	struct FGeometryScriptUniformRemeshOptions   UniformOptions;                                    // 0x24(0xC)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.WeldMeshEdges
struct UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptWeldEdgesOptions       WeldOptions;                                       // 0x8(0x8)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.SplitMeshBowties
struct UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	bool                                         bMeshBowties;                                      // 0x8(0x1)(None)
	bool                                         bAttributeBowties;                                 // 0x9(0x1)(None)
	uint8                                        Pad_E9B[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.ResolveMeshTJunctions
struct UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptResolveTJunctionOptions ResolveOptions;                                    // 0x8(0x4)(None)
	uint8                                        Pad_E9C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RepairMeshDegenerateGeometry
struct UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptDegenerateTriangleOptions Options;                                           // 0x8(0x20)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveSmallComponents
struct UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptRemoveSmallComponentOptions Options;                                           // 0x8(0xC)(None)
	uint8                                        Pad_E9D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveHiddenTriangles
struct UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptRemoveHiddenTrianglesOptions Options;                                           // 0x8(0x1C)(None)
	uint8                                        Pad_E9E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.FillAllMeshHoles
struct UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptFillHolesOptions       FillOptions;                                       // 0x8(0x2)(None)
	uint8                                        Pad_E9F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumFilledHoles;                                    // 0xC(0x4)(None)
	int32                                        NumFailedHoleFills;                                // 0x10(0x4)(None)
	uint8                                        Pad_EA0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.CompactMesh
struct UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeVertexWeightedPointSampling
struct UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshPointSamplingOptions Options;                                           // 0x8(0x18)(None)
	struct FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions;                                 // 0x20(0x18)(None)
	struct FGeometryScriptScalarList             VertexWeights;                                     // 0x38(0x10)(None)
	TArray<struct FTransform>                    Samples;                                           // 0x48(0x10)(None)
	TArray<double>                               SampleRadii;                                       // 0x58(0x10)(None)
	struct FGeometryScriptIndexList              TriangleIDs;                                       // 0x68(0x18)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(None)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputePointSampling
struct UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshPointSamplingOptions Options;                                           // 0x8(0x18)(None)
	TArray<struct FTransform>                    Samples;                                           // 0x20(0x10)(None)
	struct FGeometryScriptIndexList              TriangleIDs;                                       // 0x30(0x18)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x48(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x50(0x8)(None)
};

// 0x80 (0x80 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeNonUniformPointSampling
struct UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshPointSamplingOptions Options;                                           // 0x8(0x18)(None)
	struct FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions;                                 // 0x20(0x18)(None)
	TArray<struct FTransform>                    Samples;                                           // 0x38(0x10)(None)
	TArray<double>                               SampleRadii;                                       // 0x48(0x10)(None)
	struct FGeometryScriptIndexList              TriangleIDs;                                       // 0x58(0x18)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x70(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x78(0x8)(None)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsWithPlane
struct UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	struct FVector                               PlaneOrigin;                                       // 0x18(0x18)(None)
	struct FVector                               PlaneNormal;                                       // 0x30(0x18)(None)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x48(0x1)(None)
	bool                                         bInvert;                                           // 0x49(0x1)(None)
	uint8                                        Pad_EB0[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinNumTrianglePoints;                              // 0x4C(0x4)(None)
	class UDynamicMesh*                          ReturnValue;                                       // 0x50(0x8)(None)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInSphere
struct UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	struct FVector                               SphereOrigin;                                      // 0x18(0x18)(None)
	double                                       SphereRadius;                                      // 0x30(0x8)(None)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x38(0x1)(None)
	bool                                         bInvert;                                           // 0x39(0x1)(None)
	uint8                                        Pad_EB1[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinNumTrianglePoints;                              // 0x3C(0x4)(None)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(None)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInsideMesh
struct UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          SelectionMesh;                                     // 0x8(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x10(0x10)(None)
	struct FTransform                            SelectionMeshTransform;                            // 0x20(0x60)(None)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x80(0x1)(None)
	bool                                         bInvert;                                           // 0x81(0x1)(None)
	uint8                                        Pad_EB2[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ShellDistance;                                     // 0x88(0x8)(None)
	double                                       WindingThreshold;                                  // 0x90(0x8)(None)
	int32                                        MinNumTrianglePoints;                              // 0x98(0x4)(None)
	uint8                                        Pad_EB4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0xA0(0x8)(None)
	uint8                                        Pad_EB5[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInBox
struct UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	struct FBox                                  Box;                                               // 0x18(0x38)(None)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x50(0x1)(None)
	bool                                         bInvert;                                           // 0x51(0x1)(None)
	uint8                                        Pad_EB6[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinNumTrianglePoints;                              // 0x54(0x4)(None)
	class UDynamicMesh*                          ReturnValue;                                       // 0x58(0x8)(None)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsByNormalAngle
struct UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	struct FVector                               Normal;                                            // 0x18(0x18)(None)
	double                                       MaxAngleDeg;                                       // 0x30(0x8)(None)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x38(0x1)(None)
	bool                                         bInvert;                                           // 0x39(0x1)(None)
	uint8                                        Pad_EBD[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinNumTrianglePoints;                              // 0x3C(0x4)(None)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.InvertMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	struct FGeometryScriptMeshSelection          NewSelection;                                      // 0x18(0x10)(None)
	bool                                         bOnlyToConnected;                                  // 0x28(0x1)(None)
	uint8                                        Pad_EBE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.GetMeshSelectionInfo
struct UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Params
{
public:
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x0(0x10)(None)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x10(0x1)(None)
	uint8                                        Pad_EBF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumSelected;                                       // 0x14(0x4)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandMeshSelectionToConnected
struct UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	struct FGeometryScriptMeshSelection          NewSelection;                                      // 0x18(0x10)(None)
	enum class EGeometryScriptTopologyConnectionType ConnectionType;                                    // 0x28(0x1)(None)
	uint8                                        Pad_EC1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandContractMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	struct FGeometryScriptMeshSelection          NewSelection;                                      // 0x18(0x10)(None)
	int32                                        Iterations;                                        // 0x28(0x4)(None)
	bool                                         bContract;                                         // 0x2C(0x1)(None)
	bool                                         bOnlyExpandToFaceNeighbours;                       // 0x2D(0x1)(None)
	uint8                                        Pad_EC3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.DebugPrintMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Params
{
public:
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x0(0x10)(None)
	bool                                         bDisable;                                          // 0x10(0x1)(None)
	uint8                                        Pad_EC4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CreateSelectAllMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x18(0x1)(None)
	uint8                                        Pad_EC5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexList
struct UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	struct FGeometryScriptIndexList              IndexList;                                         // 0x18(0x18)(None)
	enum class EGeometryScriptIndexType          ResultListType;                                    // 0x30(0x1)(None)
	enum class EGeometryScriptIndexType          ConvertToType;                                     // 0x31(0x1)(None)
	uint8                                        Pad_EC6[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexArray
struct UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	TArray<int32>                                IndexArray;                                        // 0x18(0x10)(None)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x28(0x1)(None)
	uint8                                        Pad_EC8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          FromSelection;                                     // 0x8(0x10)(None)
	struct FGeometryScriptMeshSelection          ToSelection;                                       // 0x18(0x10)(None)
	enum class EGeometryScriptMeshSelectionType  NewType;                                           // 0x28(0x1)(None)
	bool                                         bAllowPartialInclusion;                            // 0x29(0x1)(None)
	uint8                                        Pad_EC9[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x78 (0x78 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexSetToMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	TSet<int32>                                  IndexSet;                                          // 0x8(0x50)(None)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x58(0x1)(None)
	uint8                                        Pad_ECD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x60(0x10)(None)
	class UDynamicMesh*                          ReturnValue;                                       // 0x70(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexListToMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptIndexList              IndexList;                                         // 0x8(0x18)(None)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x20(0x1)(None)
	uint8                                        Pad_ECE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x28(0x10)(None)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexArrayToMeshSelection
struct UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	TArray<int32>                                IndexArray;                                        // 0x8(0x10)(None)
	enum class EGeometryScriptMeshSelectionType  SelectionType;                                     // 0x18(0x1)(None)
	uint8                                        Pad_ED0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x20(0x10)(None)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CombineMeshSelections
struct UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Params
{
public:
	struct FGeometryScriptMeshSelection          SelectionA;                                        // 0x0(0x10)(None)
	struct FGeometryScriptMeshSelection          SelectionB;                                        // 0x10(0x10)(None)
	struct FGeometryScriptMeshSelection          ResultSelection;                                   // 0x20(0x10)(None)
	enum class EGeometryScriptCombineSelectionMode CombineMode;                                       // 0x30(0x1)(None)
	uint8                                        Pad_ED1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundingBox
struct UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	struct FBox                                  SelectionBounds;                                   // 0x18(0x38)(None)
	bool                                         bIsEmpty;                                          // 0x50(0x1)(None)
	uint8                                        Pad_ED4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x58(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x60(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundaryLoops
struct UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	TArray<struct FGeometryScriptIndexList>      IndexLoops;                                        // 0x18(0x10)(None)
	TArray<struct FGeometryScriptPolyPath>       PathLoops;                                         // 0x28(0x10)(None)
	int32                                        NumLoops;                                          // 0x38(0x4)(None)
	bool                                         bFoundErrors;                                      // 0x3C(0x1)(None)
	uint8                                        Pad_ED6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x40(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToVertexCount
struct UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        Vertexcount;                                       // 0x8(0x4)(None)
	struct FGeometryScriptSimplifyMeshOptions    Options;                                           // 0xC(0x7)(None)
	uint8                                        Pad_EDF[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTriangleCount
struct UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        TriangleCount;                                     // 0x8(0x4)(None)
	struct FGeometryScriptSimplifyMeshOptions    Options;                                           // 0xC(0x7)(None)
	uint8                                        Pad_EE0[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTolerance
struct UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	float                                        Tolerance;                                         // 0x8(0x4)(None)
	struct FGeometryScriptSimplifyMeshOptions    Options;                                           // 0xC(0x7)(None)
	uint8                                        Pad_EE1[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPolygroupTopology
struct UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPolygroupSimplifyOptions Options;                                           // 0x8(0x8)(None)
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x10(0x8)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPlanar
struct UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPlanarSimplifyOptions  Options;                                           // 0x8(0x8)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.ResetBVH
struct UGeometryScriptLibrary_MeshSpatial_ResetBVH_Params
{
public:
	struct FGeometryScriptDynamicMeshBVH         ResetBVH;                                          // 0x0(0x20)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.RebuildBVHForMesh
struct UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptDynamicMeshBVH         UpdateBVH;                                         // 0x8(0x20)(None)
	bool                                         bOnlyIfInvalid;                                    // 0x28(0x1)(None)
	uint8                                        Pad_EE2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsPointInsideMesh
struct UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptDynamicMeshBVH         QueryBVH;                                          // 0x8(0x20)(None)
	struct FVector                               QueryPoint;                                        // 0x28(0x18)(None)
	struct FGeometryScriptSpatialQueryOptions    Options;                                           // 0x40(0xC)(None)
	bool                                         bIsInside;                                         // 0x4C(0x1)(None)
	enum class EGeometryScriptContainmentOutcomePins Outcome;                                           // 0x4D(0x1)(None)
	uint8                                        Pad_EE3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x50(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x58(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsBVHValidForMesh
struct UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptDynamicMeshBVH         TestBVH;                                           // 0x8(0x20)(None)
	bool                                         bIsValid;                                          // 0x28(0x1)(None)
	uint8                                        Pad_EE5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(None)
};

// 0xC0 (0xC0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestRayIntersectionWithMesh
struct UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptDynamicMeshBVH         QueryBVH;                                          // 0x8(0x20)(None)
	struct FVector                               RayOrigin;                                         // 0x28(0x18)(None)
	struct FVector                               RayDirection;                                      // 0x40(0x18)(None)
	struct FGeometryScriptSpatialQueryOptions    Options;                                           // 0x58(0xC)(None)
	uint8                                        Pad_EE7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptRayHitResult           HitResult;                                         // 0x68(0x40)(None)
	enum class EGeometryScriptSearchOutcomePins  Outcome;                                           // 0xA8(0x1)(None)
	uint8                                        Pad_EE8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0xB0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0xB8(0x8)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestPointOnMesh
struct UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptDynamicMeshBVH         QueryBVH;                                          // 0x8(0x20)(None)
	struct FVector                               QueryPoint;                                        // 0x28(0x18)(None)
	struct FGeometryScriptSpatialQueryOptions    Options;                                           // 0x40(0xC)(None)
	uint8                                        Pad_EEA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptTrianglePoint          NearestResult;                                     // 0x50(0x38)(None)
	enum class EGeometryScriptSearchOutcomePins  Outcome;                                           // 0x88(0x1)(None)
	uint8                                        Pad_EEB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x90(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x98(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.BuildBVHForMesh
struct UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptDynamicMeshBVH         OutputBVH;                                         // 0x8(0x20)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyUniformTessellation
struct UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        TessellationLevel;                                 // 0x8(0x4)(None)
	uint8                                        Pad_EEC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplySelectiveTessellation
struct UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	struct FGeometryScriptSelectiveTessellateOptions Options;                                           // 0x18(0x2)(None)
	uint8                                        Pad_EED[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TessellationLevel;                                 // 0x1C(0x4)(None)
	enum class ESelectiveTessellatePatternType   PatternType;                                       // 0x20(0x1)(None)
	uint8                                        Pad_EEE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyPNTessellation
struct UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptPNTessellateOptions    Options;                                           // 0x8(0x1)(None)
	uint8                                        Pad_EF0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TessellationLevel;                                 // 0xC(0x4)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslatePivotToLocation
struct UGeometryScriptLibrary_MeshTransformFunctions_TranslatePivotToLocation_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FVector                               PivotLocation;                                     // 0x8(0x18)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMeshSelection
struct UGeometryScriptLibrary_MeshTransformFunctions_TranslateMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	struct FVector                               Translation;                                       // 0x18(0x18)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMesh
struct UGeometryScriptLibrary_MeshTransformFunctions_TranslateMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FVector                               Translation;                                       // 0x8(0x18)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMeshSelection
struct UGeometryScriptLibrary_MeshTransformFunctions_TransformMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	uint8                                        Pad_EFA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x60)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(None)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMesh
struct UGeometryScriptLibrary_MeshTransformFunctions_TransformMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	uint8                                        Pad_EFB[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	bool                                         bFixOrientationForNegativeScale;                   // 0x70(0x1)(None)
	uint8                                        Pad_EFC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x78(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x80(0x8)(None)
	uint8                                        Pad_EFD[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMeshSelection
struct UGeometryScriptLibrary_MeshTransformFunctions_ScaleMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	struct FVector                               Scale;                                             // 0x18(0x18)(None)
	struct FVector                               ScaleOrigin;                                       // 0x30(0x18)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x48(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x50(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMesh
struct UGeometryScriptLibrary_MeshTransformFunctions_ScaleMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FVector                               Scale;                                             // 0x8(0x18)(None)
	struct FVector                               ScaleOrigin;                                       // 0x20(0x18)(None)
	bool                                         bFixOrientationForNegativeScale;                   // 0x38(0x1)(None)
	uint8                                        Pad_F02[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x40(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(None)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMeshSelection
struct UGeometryScriptLibrary_MeshTransformFunctions_RotateMeshSelection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(None)
	struct FVector                               RotationOrigin;                                    // 0x30(0x18)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x48(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x50(0x8)(None)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMesh
struct UGeometryScriptLibrary_MeshTransformFunctions_RotateMesh_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FRotator                              Rotation;                                          // 0x8(0x18)(None)
	struct FVector                               RotationOrigin;                                    // 0x20(0x18)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.TranslateMeshUVs
struct UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(None)
	uint8                                        Pad_F0E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Translation;                                       // 0x10(0x10)(None)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x20(0x10)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetNumUVSets
struct UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        NumUVSets;                                         // 0x8(0x4)(None)
	uint8                                        Pad_F0F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromPlanarProjection
struct UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(None)
	uint8                                        Pad_F10[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            PlaneTransform;                                    // 0x10(0x60)(None)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x70(0x10)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x80(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x88(0x8)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromCylinderProjection
struct UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(None)
	uint8                                        Pad_F14[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CylinderTransform;                                 // 0x10(0x60)(None)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x70(0x10)(None)
	float                                        SplitAngle;                                        // 0x80(0x4)(None)
	uint8                                        Pad_F17[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(None)
	uint8                                        Pad_F18[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromBoxProjection
struct UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(None)
	uint8                                        Pad_F1E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BoxTransform;                                      // 0x10(0x60)(None)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x70(0x10)(None)
	int32                                        MinIslandTriCount;                                 // 0x80(0x4)(None)
	uint8                                        Pad_F1F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(None)
	uint8                                        Pad_F20[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshTriangleUVs
struct UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(None)
	int32                                        TriangleID;                                        // 0xC(0x4)(None)
	struct FGeometryScriptUVTriangle             UVs;                                               // 0x10(0x30)(None)
	bool                                         bIsValidTriangle;                                  // 0x40(0x1)(None)
	bool                                         bDeferChangeNotifications;                         // 0x41(0x1)(None)
	uint8                                        Pad_F21[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.ScaleMeshUVs
struct UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(None)
	uint8                                        Pad_F27[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Scale;                                             // 0x10(0x10)(None)
	struct FVector2D                             ScaleOrigin;                                       // 0x20(0x10)(None)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x30(0x10)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x40(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RotateMeshUVs
struct UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(None)
	float                                        RotationAngle;                                     // 0xC(0x4)(None)
	struct FVector2D                             RotationOrigin;                                    // 0x10(0x10)(None)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x20(0x10)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RepackMeshUVs
struct UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(None)
	struct FGeometryScriptRepackUVsOptions       RepackOptions;                                     // 0xC(0x8)(None)
	uint8                                        Pad_F31[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RecomputeMeshUVs
struct UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(None)
	struct FGeometryScriptRecomputeUVsOptions    Options;                                           // 0xC(0x1C)(None)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x28(0x10)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x38(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x40(0x8)(None)
};

// 0xA8 (0xA8 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshUVSizeInfo
struct UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(None)
	uint8                                        Pad_F36[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x10(0x10)(None)
	double                                       MeshArea;                                          // 0x20(0x8)(None)
	double                                       UVArea;                                            // 0x28(0x8)(None)
	struct FBox                                  MeshBounds;                                        // 0x30(0x38)(None)
	struct FBox2D                                UVBounds;                                          // 0x68(0x28)(None)
	bool                                         bIsValidUVSet;                                     // 0x90(0x1)(None)
	bool                                         bFoundUnsetUVs;                                    // 0x91(0x1)(None)
	bool                                         bOnlyIncludeValidUVTris;                           // 0x92(0x1)(None)
	uint8                                        Pad_F38[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x98(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0xA0(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshPerVertexUVs
struct UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(None)
	uint8                                        Pad_F3D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptUVList                 UVList;                                            // 0x10(0x10)(None)
	bool                                         bIsValidUVSet;                                     // 0x20(0x1)(None)
	bool                                         bHasVertexIDGaps;                                  // 0x21(0x1)(None)
	bool                                         bHasSplitUVs;                                      // 0x22(0x1)(None)
	uint8                                        Pad_F3E[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyUVSet
struct UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        FromUVSet;                                         // 0x8(0x4)(None)
	int32                                        ToUVSet;                                           // 0xC(0x4)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshUVLayerToMesh
struct UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Params
{
public:
	class UDynamicMesh*                          CopyFromMesh;                                      // 0x0(0x8)(ZeroConstructor)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(None)
	uint8                                        Pad_F40[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          CopyToUVMesh;                                      // 0x10(0x8)(ZeroConstructor)
	class UDynamicMesh*                          CopyToUVMeshOut;                                   // 0x18(0x8)(ZeroConstructor)
	bool                                         bInvalidTopology;                                  // 0x20(0x1)(None)
	bool                                         bIsValidUVSet;                                     // 0x21(0x1)(None)
	uint8                                        Pad_F41[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshToMeshUVLayer
struct UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Params
{
public:
	class UDynamicMesh*                          CopyFromUVMesh;                                    // 0x0(0x8)(ZeroConstructor)
	int32                                        ToUVSetIndex;                                      // 0x8(0x4)(None)
	uint8                                        Pad_F43[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          CopyToMesh;                                        // 0x10(0x8)(ZeroConstructor)
	class UDynamicMesh*                          CopyToMeshOut;                                     // 0x18(0x8)(ZeroConstructor)
	bool                                         bFoundTopologyErrors;                              // 0x20(0x1)(None)
	bool                                         bIsValidUVSet;                                     // 0x21(0x1)(None)
	bool                                         bOnlyUVPositions;                                  // 0x22(0x1)(None)
	uint8                                        Pad_F44[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x28(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGenerateXAtlasMeshUVs
struct UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(None)
	struct FGeometryScriptXAtlasOptions          Options;                                           // 0xC(0x4)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x10(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGeneratePatchBuilderMeshUVs
struct UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	int32                                        UvSetIndex;                                        // 0x8(0x4)(None)
	struct FGeometryScriptPatchBuilderOptions    Options;                                           // 0xC(0x34)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x40(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x48(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshSelectionVertexColor
struct UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMeshSelection          Selection;                                         // 0x8(0x10)(None)
	struct FLinearColor                          Color;                                             // 0x18(0x10)(None)
	struct FGeometryScriptColorFlags             Flags;                                             // 0x28(0x4)(None)
	bool                                         bCreateColorSeam;                                  // 0x2C(0x1)(None)
	uint8                                        Pad_F55[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshPerVertexColors
struct UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptColorList              VertexColorList;                                   // 0x8(0x10)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshConstantVertexColor
struct UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FLinearColor                          Color;                                             // 0x8(0x10)(None)
	struct FGeometryScriptColorFlags             Flags;                                             // 0x18(0x4)(None)
	bool                                         bClearExisting;                                    // 0x1C(0x1)(None)
	uint8                                        Pad_F56[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x20(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.GetMeshPerVertexColors
struct UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptColorList              ColorList;                                         // 0x8(0x10)(None)
	bool                                         bIsValidColorSet;                                  // 0x18(0x1)(None)
	bool                                         bHasVertexIDGaps;                                  // 0x19(0x1)(None)
	bool                                         bBlendSplitVertexValues;                           // 0x1A(0x1)(None)
	uint8                                        Pad_F57[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsSRGBToLinear
struct UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsLinearToSRGB
struct UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	class UGeometryScriptDebug*                  Debug;                                             // 0x8(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions.ApplyMeshSolidify
struct UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptSolidifyOptions        Options;                                           // 0x8(0x28)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions.ApplyMeshMorphology
struct UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Params
{
public:
	class UDynamicMesh*                          TargetMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FGeometryScriptMorphologyOptions      Options;                                           // 0x8(0x24)(None)
	uint8                                        Pad_F5F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x30(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x38(0x8)(None)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.SampleSplineToTransforms
struct UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Params
{
public:
	class USplineComponent*                      Spline;                                            // 0x0(0x8)(None)
	TArray<struct FTransform>                    Frames;                                            // 0x8(0x10)(None)
	TArray<double>                               FrameTimes;                                        // 0x18(0x10)(None)
	struct FGeometryScriptSplineSamplingOptions  SamplingOptions;                                   // 0x28(0xC)(None)
	uint8                                        Pad_F60[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RelativeTransform;                                 // 0x40(0x60)(None)
	bool                                         bIncludeScale;                                     // 0xA0(0x1)(None)
	uint8                                        Pad_F61[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathVertex
struct UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(None)
	int32                                        Index;                                             // 0x18(0x4)(None)
	bool                                         bIsValidIndex;                                     // 0x1C(0x1)(None)
	uint8                                        Pad_F63[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x20(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathTangent
struct UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(None)
	int32                                        Index;                                             // 0x18(0x4)(None)
	bool                                         bIsValidIndex;                                     // 0x1C(0x1)(None)
	uint8                                        Pad_F64[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x20(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathNumVertices
struct UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(None)
	int32                                        ReturnValue;                                       // 0x18(0x4)(None)
	uint8                                        Pad_F68[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathLastIndex
struct UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(None)
	int32                                        ReturnValue;                                       // 0x18(0x4)(None)
	uint8                                        Pad_F6B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathArcLength
struct UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(None)
	double                                       ReturnValue;                                       // 0x18(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetNearestVertexIndex
struct UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(None)
	struct FVector                               Point;                                             // 0x18(0x18)(None)
	int32                                        ReturnValue;                                       // 0x30(0x4)(None)
	uint8                                        Pad_F6C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.FlattenTo2DOnAxis
struct UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(None)
	enum class EGeometryScriptAxis               DropAxis;                                          // 0x18(0x1)(None)
	uint8                                        Pad_F6D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptPolyPath               ReturnValue;                                       // 0x20(0x18)(None)
};

// 0x80 (0x80 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath3D
struct UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(None)
	float                                        Radius;                                            // 0x60(0x4)(None)
	int32                                        NumPoints;                                         // 0x64(0x4)(None)
	struct FGeometryScriptPolyPath               ReturnValue;                                       // 0x68(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath2D
struct UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Params
{
public:
	struct FVector2D                             Center;                                            // 0x0(0x10)(None)
	float                                        Radius;                                            // 0x10(0x4)(None)
	int32                                        NumPoints;                                         // 0x14(0x4)(None)
	struct FGeometryScriptPolyPath               ReturnValue;                                       // 0x18(0x18)(None)
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath3D
struct UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(None)
	float                                        Radius;                                            // 0x60(0x4)(None)
	int32                                        NumPoints;                                         // 0x64(0x4)(None)
	float                                        StartAngle;                                        // 0x68(0x4)(None)
	float                                        EndAngle;                                          // 0x6C(0x4)(None)
	struct FGeometryScriptPolyPath               ReturnValue;                                       // 0x70(0x18)(None)
	uint8                                        Pad_F70[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath2D
struct UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Params
{
public:
	struct FVector2D                             Center;                                            // 0x0(0x10)(None)
	float                                        Radius;                                            // 0x10(0x4)(None)
	int32                                        NumPoints;                                         // 0x14(0x4)(None)
	float                                        StartAngle;                                        // 0x18(0x4)(None)
	float                                        EndAngle;                                          // 0x1C(0x4)(None)
	struct FGeometryScriptPolyPath               ReturnValue;                                       // 0x20(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertSplineToPolyPath
struct UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Params
{
public:
	class USplineComponent*                      Spline;                                            // 0x0(0x8)(None)
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x8(0x18)(None)
	struct FGeometryScriptSplineSamplingOptions  SamplingOptions;                                   // 0x20(0xC)(None)
	uint8                                        Pad_F71[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArrayOfVector2D
struct UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(None)
	TArray<struct FVector2D>                     VertexArray;                                       // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArray
struct UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(None)
	TArray<struct FVector>                       VertexArray;                                       // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayToPolyPath
struct UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Params
{
public:
	TArray<struct FVector>                       VertexArray;                                       // 0x0(0x10)(None)
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x10(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayOfVector2DToPolyPath
struct UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Params
{
public:
	TArray<struct FVector2D>                     VertexArray;                                       // 0x0(0x10)(None)
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x10(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArrayOfVector2D
struct UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(None)
	TArray<struct FVector2D>                     ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArray
struct UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Params
{
public:
	struct FGeometryScriptPolyPath               PolyPath;                                          // 0x0(0x18)(None)
	TArray<struct FVector>                       ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayToGeometryScriptPolyPath
struct UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Params
{
public:
	TArray<struct FVector>                       PathVertices;                                      // 0x0(0x10)(None)
	struct FGeometryScriptPolyPath               ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayOfVector2DToGeometryScriptPolyPath
struct UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Params
{
public:
	TArray<struct FVector2D>                     PathVertices;                                      // 0x0(0x10)(None)
	struct FGeometryScriptPolyPath               ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.SetComponentMaterialList
struct UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Params
{
public:
	class UPrimitiveComponent*                   Component;                                         // 0x0(0x8)(ZeroConstructor)
	TArray<class UMaterialInterface*>            MaterialList;                                      // 0x8(0x10)(ZeroConstructor)
	class UGeometryScriptDebug*                  Debug;                                             // 0x18(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CreateDynamicMeshPool
struct UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Params
{
public:
	class UDynamicMeshPool*                      ReturnValue;                                       // 0x0(0x8)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyMeshFromComponent
struct UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Params
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ToDynamicMesh;                                     // 0x8(0x8)(ZeroConstructor)
	struct FGeometryScriptCopyMeshFromComponentOptions Options;                                           // 0x10(0xC)(None)
	bool                                         bTransformToWorld;                                 // 0x1C(0x1)(None)
	uint8                                        Pad_F72[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LocalToWorld;                                      // 0x20(0x60)(None)
	enum class EGeometryScriptOutcomePins        Outcome;                                           // 0x80(0x1)(None)
	uint8                                        Pad_F73[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(None)
	uint8                                        Pad_F74[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyCollisionMeshesFromObject
struct UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Params
{
public:
	class UObject*                               FromObject;                                        // 0x0(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ToDynamicMesh;                                     // 0x8(0x8)(ZeroConstructor)
	bool                                         bTransformToWorld;                                 // 0x10(0x1)(None)
	uint8                                        Pad_F77[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LocalToWorld;                                      // 0x20(0x60)(None)
	enum class EGeometryScriptOutcomePins        Outcome;                                           // 0x80(0x1)(None)
	bool                                         bUseComplexCollision;                              // 0x81(0x1)(None)
	uint8                                        Pad_F78[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SphereResolution;                                  // 0x84(0x4)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x88(0x8)(ZeroConstructor)
	class UDynamicMesh*                          ReturnValue;                                       // 0x90(0x8)(None)
	uint8                                        Pad_F79[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.MakeTransformFromZAxis
struct UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	struct FVector                               ZAxis;                                             // 0x18(0x18)(None)
	struct FTransform                            ReturnValue;                                       // 0x30(0x60)(None)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.MakeTransformFromAxes
struct UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	struct FVector                               ZAxis;                                             // 0x18(0x18)(None)
	struct FVector                               TangentAxis;                                       // 0x30(0x18)(None)
	bool                                         bTangentIsX;                                       // 0x48(0x1)(None)
	uint8                                        Pad_F7C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x50(0x60)(None)
};

// 0x80 (0x80 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisVector
struct UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(None)
	enum class EGeometryScriptAxis               Axis;                                              // 0x60(0x1)(None)
	uint8                                        Pad_F7D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x68(0x18)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisRay
struct UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(None)
	enum class EGeometryScriptAxis               Axis;                                              // 0x60(0x1)(None)
	uint8                                        Pad_F7F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRay                                  ReturnValue;                                       // 0x68(0x30)(None)
	uint8                                        Pad_F80[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisPlane
struct UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(None)
	enum class EGeometryScriptAxis               Axis;                                              // 0x60(0x1)(None)
	uint8                                        Pad_F82[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlane                                ReturnValue;                                       // 0x70(0x20)(None)
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.MakeRayFromPoints
struct UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Params
{
public:
	struct FVector                               A;                                                 // 0x0(0x18)(None)
	struct FVector                               B;                                                 // 0x18(0x18)(None)
	struct FRay                                  ReturnValue;                                       // 0x30(0x30)(None)
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.MakeRayFromPointDirection
struct UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Params
{
public:
	struct FVector                               Origin;                                            // 0x0(0x18)(None)
	struct FVector                               Direction;                                         // 0x18(0x18)(None)
	bool                                         bDirectionIsNormalized;                            // 0x30(0x1)(None)
	uint8                                        Pad_F8B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRay                                  ReturnValue;                                       // 0x38(0x30)(None)
};

// 0xD0 (0xD0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetTransformedRay
struct UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(None)
	struct FTransform                            Transform;                                         // 0x30(0x60)(None)
	bool                                         bInvert;                                           // 0x90(0x1)(None)
	uint8                                        Pad_F8D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRay                                  ReturnValue;                                       // 0x98(0x30)(None)
	uint8                                        Pad_F8E[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayStartEnd
struct UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(None)
	double                                       StartDistance;                                     // 0x30(0x8)(None)
	double                                       EndDistance;                                       // 0x38(0x8)(None)
	struct FVector                               StartPoint;                                        // 0x40(0x18)(None)
	struct FVector                               EndPoint;                                          // 0x58(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySphereIntersection
struct UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(None)
	struct FVector                               SphereCenter;                                      // 0x30(0x18)(None)
	double                                       SphereRadius;                                      // 0x48(0x8)(None)
	double                                       Distance1;                                         // 0x50(0x8)(None)
	double                                       Distance2;                                         // 0x58(0x8)(None)
	bool                                         ReturnValue;                                       // 0x60(0x1)(None)
	uint8                                        Pad_F94[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySegmentClosestPoint
struct UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(None)
	struct FVector                               SegStartPoint;                                     // 0x30(0x18)(None)
	struct FVector                               SegEndPoint;                                       // 0x48(0x18)(None)
	double                                       RayParameter;                                      // 0x60(0x8)(None)
	struct FVector                               RayPoint;                                          // 0x68(0x18)(None)
	struct FVector                               SegPoint;                                          // 0x80(0x18)(None)
	double                                       ReturnValue;                                       // 0x98(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPointDistance
struct UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(None)
	struct FVector                               Point;                                             // 0x30(0x18)(None)
	double                                       ReturnValue;                                       // 0x48(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPoint
struct UGeometryScriptLibrary_RayFunctions_GetRayPoint_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(None)
	double                                       Distance;                                          // 0x30(0x8)(None)
	struct FVector                               ReturnValue;                                       // 0x38(0x18)(None)
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPlaneIntersection
struct UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(None)
	struct FPlane                                Plane;                                             // 0x30(0x20)(None)
	double                                       HitDistance;                                       // 0x50(0x8)(None)
	bool                                         ReturnValue;                                       // 0x58(0x1)(None)
	uint8                                        Pad_FA0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayParameter
struct UGeometryScriptLibrary_RayFunctions_GetRayParameter_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(None)
	struct FVector                               Point;                                             // 0x30(0x18)(None)
	double                                       ReturnValue;                                       // 0x48(0x8)(None)
};

// 0xA8 (0xA8 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayLineClosestPoint
struct UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(None)
	struct FVector                               LineOrigin;                                        // 0x30(0x18)(None)
	struct FVector                               LineDirection;                                     // 0x48(0x18)(None)
	double                                       RayParameter;                                      // 0x60(0x8)(None)
	struct FVector                               RayPoint;                                          // 0x68(0x18)(None)
	double                                       LineParameter;                                     // 0x80(0x8)(None)
	struct FVector                               LinePoint;                                         // 0x88(0x18)(None)
	double                                       ReturnValue;                                       // 0xA0(0x8)(None)
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayClosestPoint
struct UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(None)
	struct FVector                               Point;                                             // 0x30(0x18)(None)
	struct FVector                               ReturnValue;                                       // 0x48(0x18)(None)
};

// 0x78 (0x78 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayBoxIntersection
struct UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Params
{
public:
	struct FRay                                  Ray;                                               // 0x0(0x30)(None)
	struct FBox                                  Box;                                               // 0x30(0x38)(None)
	double                                       HitDistance;                                       // 0x68(0x8)(None)
	bool                                         ReturnValue;                                       // 0x70(0x1)(None)
	uint8                                        Pad_FA1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestPointInsideBox
struct UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(None)
	struct FVector                               Point;                                             // 0x38(0x18)(None)
	bool                                         bConsiderOnBoxAsInside;                            // 0x50(0x1)(None)
	bool                                         ReturnValue;                                       // 0x51(0x1)(None)
	uint8                                        Pad_FA2[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxSphereIntersection
struct UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(None)
	struct FVector                               SphereCenter;                                      // 0x38(0x18)(None)
	double                                       SphereRadius;                                      // 0x50(0x8)(None)
	bool                                         ReturnValue;                                       // 0x58(0x1)(None)
	uint8                                        Pad_FA3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxBoxIntersection
struct UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Params
{
public:
	struct FBox                                  Box1;                                              // 0x0(0x38)(None)
	struct FBox                                  Box2;                                              // 0x38(0x38)(None)
	bool                                         ReturnValue;                                       // 0x70(0x1)(None)
	uint8                                        Pad_FA4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterSize
struct UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Params
{
public:
	struct FVector                               Center;                                            // 0x0(0x18)(None)
	struct FVector                               Dimensions;                                        // 0x18(0x18)(None)
	struct FBox                                  ReturnValue;                                       // 0x30(0x38)(None)
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterExtents
struct UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Params
{
public:
	struct FVector                               Center;                                            // 0x0(0x18)(None)
	struct FVector                               Extents;                                           // 0x18(0x18)(None)
	struct FBox                                  ReturnValue;                                       // 0x30(0x38)(None)
};

// 0xE0 (0xE0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetTransformedBox
struct UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(None)
	uint8                                        Pad_FA5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x40(0x60)(None)
	struct FBox                                  ReturnValue;                                       // 0xA0(0x38)(None)
	uint8                                        Pad_FA6[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetExpandedBox
struct UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(None)
	struct FVector                               ExpandBy;                                          // 0x38(0x18)(None)
	struct FBox                                  ReturnValue;                                       // 0x50(0x38)(None)
};

// 0x48 (0x48 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxVolumeArea
struct UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(None)
	double                                       Volume;                                            // 0x38(0x8)(None)
	double                                       SurfaceArea;                                       // 0x40(0x8)(None)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxPointDistance
struct UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(None)
	struct FVector                               Point;                                             // 0x38(0x18)(None)
	double                                       ReturnValue;                                       // 0x50(0x8)(None)
};

// 0x70 (0x70 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxFaceCenter
struct UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(None)
	int32                                        FaceIndex;                                         // 0x38(0x4)(None)
	uint8                                        Pad_FA7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               FaceNormal;                                        // 0x40(0x18)(None)
	struct FVector                               ReturnValue;                                       // 0x58(0x18)(None)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCorner
struct UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(None)
	int32                                        CornerIndex;                                       // 0x38(0x4)(None)
	uint8                                        Pad_FA8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x40(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCenterSize
struct UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(None)
	struct FVector                               Center;                                            // 0x38(0x18)(None)
	struct FVector                               Dimensions;                                        // 0x50(0x18)(None)
};

// 0x78 (0x78 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxBoxDistance
struct UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Params
{
public:
	struct FBox                                  Box1;                                              // 0x0(0x38)(None)
	struct FBox                                  Box2;                                              // 0x38(0x38)(None)
	double                                       ReturnValue;                                       // 0x70(0x8)(None)
};

// 0x70 (0x70 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindClosestPointOnBox
struct UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Params
{
public:
	struct FBox                                  Box;                                               // 0x0(0x38)(None)
	struct FVector                               Point;                                             // 0x38(0x18)(None)
	bool                                         bIsInside;                                         // 0x50(0x1)(None)
	uint8                                        Pad_FA9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x58(0x18)(None)
};

// 0xB0 (0xB0 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindBoxBoxIntersection
struct UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Params
{
public:
	struct FBox                                  Box1;                                              // 0x0(0x38)(None)
	struct FBox                                  Box2;                                              // 0x38(0x38)(None)
	bool                                         bIsIntersecting;                                   // 0x70(0x1)(None)
	uint8                                        Pad_FAB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox                                  ReturnValue;                                       // 0x78(0x38)(None)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTextureRenderTarget2DAtUVPositions
struct UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Params
{
public:
	struct FGeometryScriptUVList                 UVList;                                            // 0x0(0x10)(None)
	class UTextureRenderTarget2D*                Texture;                                           // 0x10(0x8)(ZeroConstructor)
	struct FGeometryScriptSampleTextureOptions   SampleOptions;                                     // 0x18(0x28)(None)
	struct FGeometryScriptColorList              ColorList;                                         // 0x40(0x10)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x50(0x8)(None)
};

// 0x58 (0x58 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTexture2DAtUVPositions
struct UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Params
{
public:
	struct FGeometryScriptUVList                 UVList;                                            // 0x0(0x10)(None)
	class UTexture2D*                            Texture;                                           // 0x10(0x8)(ZeroConstructor)
	struct FGeometryScriptSampleTextureOptions   SampleOptions;                                     // 0x18(0x28)(None)
	struct FGeometryScriptColorList              ColorList;                                         // 0x40(0x10)(None)
	class UGeometryScriptDebug*                  Debug;                                             // 0x50(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorToScalar
struct UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Params
{
public:
	struct FGeometryScriptVectorList             VectorList;                                        // 0x0(0x10)(None)
	double                                       ConstantX;                                         // 0x10(0x8)(None)
	double                                       ConstantY;                                         // 0x18(0x8)(None)
	double                                       ConstantZ;                                         // 0x20(0x8)(None)
	struct FGeometryScriptScalarList             ReturnValue;                                       // 0x28(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorNormalizeInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Params
{
public:
	struct FGeometryScriptVectorList             VectorList;                                        // 0x0(0x10)(None)
	struct FVector                               SetOnFailure;                                      // 0x10(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorLength
struct UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Params
{
public:
	struct FGeometryScriptVectorList             VectorList;                                        // 0x0(0x10)(None)
	struct FGeometryScriptScalarList             ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorDot
struct UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Params
{
public:
	struct FGeometryScriptVectorList             VectorListA;                                       // 0x0(0x10)(None)
	struct FGeometryScriptVectorList             VectorListB;                                       // 0x10(0x10)(None)
	struct FGeometryScriptScalarList             ReturnValue;                                       // 0x20(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorCross
struct UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Params
{
public:
	struct FGeometryScriptVectorList             VectorListA;                                       // 0x0(0x10)(None)
	struct FGeometryScriptVectorList             VectorListB;                                       // 0x10(0x10)(None)
	struct FGeometryScriptVectorList             ReturnValue;                                       // 0x20(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlendInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Params
{
public:
	struct FGeometryScriptVectorList             VectorListA;                                       // 0x0(0x10)(None)
	struct FGeometryScriptVectorList             VectorListB;                                       // 0x10(0x10)(None)
	double                                       ConstantA;                                         // 0x20(0x8)(None)
	double                                       ConstantB;                                         // 0x28(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlend
struct UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Params
{
public:
	struct FGeometryScriptVectorList             VectorListA;                                       // 0x0(0x10)(None)
	struct FGeometryScriptVectorList             VectorListB;                                       // 0x10(0x10)(None)
	double                                       ConstantA;                                         // 0x20(0x8)(None)
	double                                       ConstantB;                                         // 0x28(0x8)(None)
	struct FGeometryScriptVectorList             ReturnValue;                                       // 0x30(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiplyInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(None)
	struct FGeometryScriptVectorList             VectorList;                                        // 0x10(0x10)(None)
	double                                       ScalarMultiplier;                                  // 0x20(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiply
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(None)
	struct FGeometryScriptVectorList             VectorList;                                        // 0x10(0x10)(None)
	double                                       ScalarMultiplier;                                  // 0x20(0x8)(None)
	struct FGeometryScriptVectorList             ReturnValue;                                       // 0x28(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiplyInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Params
{
public:
	struct FGeometryScriptScalarList             ScalarListA;                                       // 0x0(0x10)(None)
	struct FGeometryScriptScalarList             ScalarListB;                                       // 0x10(0x10)(None)
	double                                       ConstantMultiplier;                                // 0x20(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiply
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Params
{
public:
	struct FGeometryScriptScalarList             ScalarListA;                                       // 0x0(0x10)(None)
	struct FGeometryScriptScalarList             ScalarListB;                                       // 0x10(0x10)(None)
	double                                       ConstantMultiplier;                                // 0x20(0x8)(None)
	struct FGeometryScriptScalarList             ReturnValue;                                       // 0x28(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvertInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(None)
	double                                       Numerator;                                         // 0x10(0x8)(None)
	double                                       SetOnFailure;                                      // 0x18(0x8)(None)
	double                                       Epsilon;                                           // 0x20(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvert
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Params
{
public:
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x0(0x10)(None)
	double                                       Numerator;                                         // 0x10(0x8)(None)
	double                                       SetOnFailure;                                      // 0x18(0x8)(None)
	double                                       Epsilon;                                           // 0x20(0x8)(None)
	struct FGeometryScriptScalarList             ReturnValue;                                       // 0x28(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlendInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Params
{
public:
	struct FGeometryScriptScalarList             ScalarListA;                                       // 0x0(0x10)(None)
	struct FGeometryScriptScalarList             ScalarListB;                                       // 0x10(0x10)(None)
	double                                       ConstantA;                                         // 0x20(0x8)(None)
	double                                       ConstantB;                                         // 0x28(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlend
struct UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Params
{
public:
	struct FGeometryScriptScalarList             ScalarListA;                                       // 0x0(0x10)(None)
	struct FGeometryScriptScalarList             ScalarListB;                                       // 0x10(0x10)(None)
	double                                       ConstantA;                                         // 0x20(0x8)(None)
	double                                       ConstantB;                                         // 0x28(0x8)(None)
	struct FGeometryScriptScalarList             ReturnValue;                                       // 0x30(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiplyInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Params
{
public:
	double                                       Constant;                                          // 0x0(0x8)(None)
	struct FGeometryScriptVectorList             VectorList;                                        // 0x8(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiply
struct UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Params
{
public:
	double                                       Constant;                                          // 0x0(0x8)(None)
	struct FGeometryScriptVectorList             VectorList;                                        // 0x8(0x10)(None)
	struct FGeometryScriptVectorList             ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiplyInPlace
struct UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Params
{
public:
	double                                       Constant;                                          // 0x0(0x8)(None)
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x8(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiply
struct UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Params
{
public:
	double                                       Constant;                                          // 0x0(0x8)(None)
	struct FGeometryScriptScalarList             ScalarList;                                        // 0x8(0x10)(None)
	struct FGeometryScriptScalarList             ReturnValue;                                       // 0x18(0x10)(None)
};

}
}


