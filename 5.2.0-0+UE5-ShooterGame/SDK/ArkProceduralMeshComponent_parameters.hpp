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

// 0x88 (0x88 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.UpdateMeshSection_LinearColor
struct UArkProceduralMeshComponent_UpdateMeshSection_LinearColor_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(None)
	uint8                                        Pad_556[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector3f>                     Vertices;                                          // 0x8(0x10)(None)
	TArray<struct FVector3f>                     Normals;                                           // 0x18(0x10)(None)
	TArray<struct FVector2f>                     UV0;                                               // 0x28(0x10)(None)
	TArray<struct FVector2f>                     UV1;                                               // 0x38(0x10)(None)
	TArray<struct FVector2f>                     UV2;                                               // 0x48(0x10)(None)
	TArray<struct FVector2f>                     UV3;                                               // 0x58(0x10)(None)
	TArray<struct FLinearColor>                  VertexColors;                                      // 0x68(0x10)(None)
	TArray<struct FArkProcMeshTangent>           Tangents;                                          // 0x78(0x10)(None)
};

// 0x58 (0x58 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.UpdateMeshSection
struct UArkProceduralMeshComponent_UpdateMeshSection_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(None)
	uint8                                        Pad_57E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector3f>                     Vertices;                                          // 0x8(0x10)(None)
	TArray<struct FVector3f>                     Normals;                                           // 0x18(0x10)(None)
	TArray<struct FVector2f>                     UV0;                                               // 0x28(0x10)(None)
	TArray<struct FColor>                        VertexColors;                                      // 0x38(0x10)(None)
	TArray<struct FArkProcMeshTangent>           Tangents;                                          // 0x48(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.SetMeshSectionVisible
struct UArkProceduralMeshComponent_SetMeshSectionVisible_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(None)
	bool                                         bNewVisibility;                                    // 0x4(0x1)(None)
	uint8                                        Pad_57F[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.IsMeshSectionVisible
struct UArkProceduralMeshComponent_IsMeshSectionVisible_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(None)
	bool                                         ReturnValue;                                       // 0x4(0x1)(None)
	uint8                                        Pad_580[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.GetNumSections
struct UArkProceduralMeshComponent_GetNumSections_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection_LinearColor
struct UArkProceduralMeshComponent_CreateMeshSection_LinearColor_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(None)
	uint8                                        Pad_5E2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector3f>                     Vertices;                                          // 0x8(0x10)(None)
	TArray<int32>                                Triangles;                                         // 0x18(0x10)(None)
	TArray<struct FVector3f>                     Normals;                                           // 0x28(0x10)(None)
	TArray<struct FVector2f>                     UV0;                                               // 0x38(0x10)(None)
	TArray<struct FVector2f>                     UV1;                                               // 0x48(0x10)(None)
	TArray<struct FVector2f>                     UV2;                                               // 0x58(0x10)(None)
	TArray<struct FVector2f>                     UV3;                                               // 0x68(0x10)(None)
	TArray<struct FLinearColor>                  VertexColors;                                      // 0x78(0x10)(None)
	TArray<struct FArkProcMeshTangent>           Tangents;                                          // 0x88(0x10)(None)
	bool                                         bCreateCollision;                                  // 0x98(0x1)(None)
	uint8                                        Pad_5E5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection
struct UArkProceduralMeshComponent_CreateMeshSection_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(None)
	uint8                                        Pad_5F1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector3f>                     Vertices;                                          // 0x8(0x10)(None)
	TArray<int32>                                Triangles;                                         // 0x18(0x10)(None)
	TArray<struct FVector3f>                     Normals;                                           // 0x28(0x10)(None)
	TArray<struct FVector2f>                     UV0;                                               // 0x38(0x10)(None)
	TArray<struct FColor>                        VertexColors;                                      // 0x48(0x10)(None)
	TArray<struct FArkProcMeshTangent>           Tangents;                                          // 0x58(0x10)(None)
	bool                                         bCreateCollision;                                  // 0x68(0x1)(None)
	uint8                                        Pad_5F2[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearMeshSection
struct UArkProceduralMeshComponent_ClearMeshSection_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.AddCollisionConvexMesh
struct UArkProceduralMeshComponent_AddCollisionConvexMesh_Params
{
public:
	TArray<struct FVector>                       ConvexVerts;                                       // 0x0(0x10)(None)
};

}
}


