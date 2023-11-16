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

// 0x58 (0x58 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
struct UKismetProceduralMeshLibrary_SliceProceduralMesh_Params
{
public:
	class UProceduralMeshComponent*              InProcMesh;                                        // 0x0(0x8)(ZeroConstructor)
	struct FVector                               PlanePosition;                                     // 0x8(0x18)(None)
	struct FVector                               PlaneNormal;                                       // 0x20(0x18)(None)
	bool                                         bCreateOtherHalf;                                  // 0x38(0x1)(None)
	uint8                                        Pad_2376[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProceduralMeshComponent*              OutOtherHalfProcMesh;                              // 0x40(0x8)(ZeroConstructor)
	enum class EProcMeshSliceCapOption           CapOption;                                         // 0x48(0x1)(None)
	uint8                                        Pad_2377[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    CapMaterial;                                       // 0x50(0x8)(None)
};

// 0x60 (0x60 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
struct UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Params
{
public:
	class UStaticMesh*                           InMesh;                                            // 0x0(0x8)(None)
	int32                                        LODIndex;                                          // 0x8(0x4)(None)
	int32                                        SectionIndex;                                      // 0xC(0x4)(None)
	TArray<struct FVector>                       Vertices;                                          // 0x10(0x10)(None)
	TArray<int32>                                Triangles;                                         // 0x20(0x10)(None)
	TArray<struct FVector>                       Normals;                                           // 0x30(0x10)(None)
	TArray<struct FVector2D>                     UVs;                                               // 0x40(0x10)(None)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x50(0x10)(None)
};

// 0x60 (0x60 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
struct UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Params
{
public:
	class UProceduralMeshComponent*              InProcMesh;                                        // 0x0(0x8)(None)
	int32                                        SectionIndex;                                      // 0x8(0x4)(None)
	uint8                                        Pad_237B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       Vertices;                                          // 0x10(0x10)(None)
	TArray<int32>                                Triangles;                                         // 0x20(0x10)(None)
	TArray<struct FVector>                       Normals;                                           // 0x30(0x10)(None)
	TArray<struct FVector2D>                     UVs;                                               // 0x40(0x10)(None)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x50(0x10)(None)
};

// 0x68 (0x68 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
struct UKismetProceduralMeshLibrary_GenerateBoxMesh_Params
{
public:
	struct FVector                               BoxRadius;                                         // 0x0(0x18)(None)
	TArray<struct FVector>                       Vertices;                                          // 0x18(0x10)(None)
	TArray<int32>                                Triangles;                                         // 0x28(0x10)(None)
	TArray<struct FVector>                       Normals;                                           // 0x38(0x10)(None)
	TArray<struct FVector2D>                     UVs;                                               // 0x48(0x10)(None)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x58(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
struct UKismetProceduralMeshLibrary_CreateGridMeshWelded_Params
{
public:
	int32                                        NumX;                                              // 0x0(0x4)(None)
	int32                                        NumY;                                              // 0x4(0x4)(None)
	TArray<int32>                                Triangles;                                         // 0x8(0x10)(None)
	TArray<struct FVector>                       Vertices;                                          // 0x18(0x10)(None)
	TArray<struct FVector2D>                     UVs;                                               // 0x28(0x10)(None)
	float                                        GridSpacing;                                       // 0x38(0x4)(None)
	uint8                                        Pad_237F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
struct UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Params
{
public:
	int32                                        NumX;                                              // 0x0(0x4)(None)
	int32                                        NumY;                                              // 0x4(0x4)(None)
	bool                                         bWinding;                                          // 0x8(0x1)(None)
	uint8                                        Pad_2380[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                Triangles;                                         // 0x10(0x10)(None)
};

// 0x50 (0x50 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
struct UKismetProceduralMeshLibrary_CreateGridMeshSplit_Params
{
public:
	int32                                        NumX;                                              // 0x0(0x4)(None)
	int32                                        NumY;                                              // 0x4(0x4)(None)
	TArray<int32>                                Triangles;                                         // 0x8(0x10)(None)
	TArray<struct FVector>                       Vertices;                                          // 0x18(0x10)(None)
	TArray<struct FVector2D>                     UVs;                                               // 0x28(0x10)(None)
	TArray<struct FVector2D>                     UV1s;                                              // 0x38(0x10)(None)
	float                                        GridSpacing;                                       // 0x48(0x4)(None)
	uint8                                        Pad_2381[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
struct UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Params
{
public:
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x0(0x8)(ZeroConstructor)
	int32                                        LODIndex;                                          // 0x8(0x4)(None)
	uint8                                        Pad_2383[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProceduralMeshComponent*              ProcMeshComponent;                                 // 0x10(0x8)(None)
	bool                                         bCreateCollision;                                  // 0x18(0x1)(None)
	uint8                                        Pad_2384[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
struct UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Params
{
public:
	TArray<int32>                                Triangles;                                         // 0x0(0x10)(None)
	int32                                        Vert0;                                             // 0x10(0x4)(None)
	int32                                        Vert1;                                             // 0x14(0x4)(None)
	int32                                        Vert2;                                             // 0x18(0x4)(None)
	int32                                        Vert3;                                             // 0x1C(0x4)(None)
};

// 0x50 (0x50 - 0x0)
// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
struct UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Params
{
public:
	TArray<struct FVector>                       Vertices;                                          // 0x0(0x10)(None)
	TArray<int32>                                Triangles;                                         // 0x10(0x10)(None)
	TArray<struct FVector2D>                     UVs;                                               // 0x20(0x10)(None)
	TArray<struct FVector>                       Normals;                                           // 0x30(0x10)(None)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x40(0x10)(None)
};

// 0x90 (0x90 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
struct UProceduralMeshComponent_UpdateMeshSection_LinearColor_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(None)
	uint8                                        Pad_2389[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       Vertices;                                          // 0x8(0x10)(None)
	TArray<struct FVector>                       Normals;                                           // 0x18(0x10)(None)
	TArray<struct FVector2D>                     UV0;                                               // 0x28(0x10)(None)
	TArray<struct FVector2D>                     UV1;                                               // 0x38(0x10)(None)
	TArray<struct FVector2D>                     UV2;                                               // 0x48(0x10)(None)
	TArray<struct FVector2D>                     UV3;                                               // 0x58(0x10)(None)
	TArray<struct FLinearColor>                  VertexColors;                                      // 0x68(0x10)(None)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x78(0x10)(None)
	bool                                         bSRGBConversion;                                   // 0x88(0x1)(None)
	uint8                                        Pad_238A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
struct UProceduralMeshComponent_UpdateMeshSection_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(None)
	uint8                                        Pad_238F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       Vertices;                                          // 0x8(0x10)(None)
	TArray<struct FVector>                       Normals;                                           // 0x18(0x10)(None)
	TArray<struct FVector2D>                     UV0;                                               // 0x28(0x10)(None)
	TArray<struct FColor>                        VertexColors;                                      // 0x38(0x10)(None)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x48(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
struct UProceduralMeshComponent_SetMeshSectionVisible_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(None)
	bool                                         bNewVisibility;                                    // 0x4(0x1)(None)
	uint8                                        Pad_2390[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
struct UProceduralMeshComponent_IsMeshSectionVisible_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(None)
	bool                                         ReturnValue;                                       // 0x4(0x1)(None)
	uint8                                        Pad_2391[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
struct UProceduralMeshComponent_GetNumSections_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
struct UProceduralMeshComponent_CreateMeshSection_LinearColor_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(None)
	uint8                                        Pad_2394[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       Vertices;                                          // 0x8(0x10)(None)
	TArray<int32>                                Triangles;                                         // 0x18(0x10)(None)
	TArray<struct FVector>                       Normals;                                           // 0x28(0x10)(None)
	TArray<struct FVector2D>                     UV0;                                               // 0x38(0x10)(None)
	TArray<struct FVector2D>                     UV1;                                               // 0x48(0x10)(None)
	TArray<struct FVector2D>                     UV2;                                               // 0x58(0x10)(None)
	TArray<struct FVector2D>                     UV3;                                               // 0x68(0x10)(None)
	TArray<struct FLinearColor>                  VertexColors;                                      // 0x78(0x10)(None)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x88(0x10)(None)
	bool                                         bCreateCollision;                                  // 0x98(0x1)(None)
	bool                                         bSRGBConversion;                                   // 0x99(0x1)(None)
	uint8                                        Pad_2395[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
struct UProceduralMeshComponent_CreateMeshSection_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(None)
	uint8                                        Pad_2396[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       Vertices;                                          // 0x8(0x10)(None)
	TArray<int32>                                Triangles;                                         // 0x18(0x10)(None)
	TArray<struct FVector>                       Normals;                                           // 0x28(0x10)(None)
	TArray<struct FVector2D>                     UV0;                                               // 0x38(0x10)(None)
	TArray<struct FColor>                        VertexColors;                                      // 0x48(0x10)(None)
	TArray<struct FProcMeshTangent>              Tangents;                                          // 0x58(0x10)(None)
	bool                                         bCreateCollision;                                  // 0x68(0x1)(None)
	uint8                                        Pad_2397[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
struct UProceduralMeshComponent_ClearMeshSection_Params
{
public:
	int32                                        SectionIndex;                                      // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
struct UProceduralMeshComponent_AddCollisionConvexMesh_Params
{
public:
	TArray<struct FVector>                       ConvexVerts;                                       // 0x0(0x10)(None)
};

}
}


