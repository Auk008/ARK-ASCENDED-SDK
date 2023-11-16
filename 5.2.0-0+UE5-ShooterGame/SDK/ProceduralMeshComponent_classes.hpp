#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UKismetProceduralMeshLibrary* GetDefaultObj();

	void SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent* OutOtherHalfProcMesh, enum class EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial);
	void GetSectionFromStaticMesh(class UStaticMesh* InMesh, int32 LODIndex, int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UVs, const TArray<struct FProcMeshTangent>& Tangents);
	void GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UVs, const TArray<struct FProcMeshTangent>& Tangents);
	void GenerateBoxMesh(const struct FVector& BoxRadius, const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UVs, const TArray<struct FProcMeshTangent>& Tangents);
	void CreateGridMeshWelded(int32 NumX, int32 NumY, const TArray<int32>& Triangles, const TArray<struct FVector>& Vertices, const TArray<struct FVector2D>& UVs, float GridSpacing);
	void CreateGridMeshTriangles(int32 NumX, int32 NumY, bool bWinding, const TArray<int32>& Triangles);
	void CreateGridMeshSplit(int32 NumX, int32 NumY, const TArray<int32>& Triangles, const TArray<struct FVector>& Vertices, const TArray<struct FVector2D>& UVs, const TArray<struct FVector2D>& UV1s, float GridSpacing);
	void CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int32 LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision);
	void ConvertQuadToTriangles(const TArray<int32>& Triangles, int32 Vert0, int32 Vert1, int32 Vert2, int32 Vert3);
	void CalculateTangentsForMesh(const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector2D>& UVs, const TArray<struct FVector>& Normals, const TArray<struct FProcMeshTangent>& Tangents);
};

// 0x80 (0x740 - 0x6C0)
// Class ProceduralMeshComponent.ProceduralMeshComponent
class UProceduralMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_23A2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUseComplexAsSimpleCollision;                      // 0x6C8(0x1)(None)
	bool                                         bUseAsyncCooking;                                  // 0x6C9(0x1)(None)
	uint8                                        Pad_23A5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBodySetup*                            ProcMeshBodySetup;                                 // 0x6D0(0x8)(ZeroConstructor)
	TArray<struct FProcMeshSection>              ProcMeshSections;                                  // 0x6D8(0x10)(None)
	TArray<struct FKConvexElem>                  CollisionConvexElems;                              // 0x6E8(0x10)(None)
	struct FBoxSphereBounds                      LocalBounds;                                       // 0x6F8(0x38)(None)
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x730(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UProceduralMeshComponent* GetDefaultObj();

	void UpdateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UV0, const TArray<struct FVector2D>& UV1, const TArray<struct FVector2D>& UV2, const TArray<struct FVector2D>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool bSRGBConversion);
	void UpdateMeshSection(int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UV0, const TArray<struct FColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents);
	void SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility);
	void IsMeshSectionVisible(int32 SectionIndex, bool ReturnValue);
	void GetNumSections(int32 ReturnValue);
	void CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UV0, const TArray<struct FVector2D>& UV1, const TArray<struct FVector2D>& UV2, const TArray<struct FVector2D>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision, bool bSRGBConversion);
	void CreateMeshSection(int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UV0, const TArray<struct FColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision);
	void ClearMeshSection(int32 SectionIndex);
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	void AddCollisionConvexMesh(const TArray<struct FVector>& ConvexVerts);
};

}


