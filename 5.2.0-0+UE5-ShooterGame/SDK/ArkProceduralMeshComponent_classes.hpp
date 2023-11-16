#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x748 - 0x6C0)
// Class ArkProceduralMeshComponent.ArkProceduralMeshComponent
class UArkProceduralMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_5FA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUseComplexAsSimpleCollision;                      // 0x6C8(0x1)(None)
	bool                                         bUseAsyncCooking;                                  // 0x6C9(0x1)(None)
	uint8                                        Pad_5FB[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBodySetup*                            ProcMeshBodySetup;                                 // 0x6D0(0x8)(ZeroConstructor)
	bool                                         bEnableCollisionBuilding;                          // 0x6D8(0x1)(None)
	uint8                                        Pad_5FC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FArkProcMeshSection>           ProcMeshSections;                                  // 0x6E0(0x10)(None)
	TArray<struct FKConvexElem>                  CollisionConvexElems;                              // 0x6F0(0x10)(None)
	struct FBoxSphereBounds                      LocalBounds;                                       // 0x700(0x38)(None)
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x738(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UArkProceduralMeshComponent* GetDefaultObj();

	void UpdateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector3f>& Vertices, const TArray<struct FVector3f>& Normals, const TArray<struct FVector2f>& UV0, const TArray<struct FVector2f>& UV1, const TArray<struct FVector2f>& UV2, const TArray<struct FVector2f>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents);
	void UpdateMeshSection(int32 SectionIndex, const TArray<struct FVector3f>& Vertices, const TArray<struct FVector3f>& Normals, const TArray<struct FVector2f>& UV0, const TArray<struct FColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents);
	void SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility);
	void IsMeshSectionVisible(int32 SectionIndex, bool ReturnValue);
	void GetNumSections(int32 ReturnValue);
	void CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector3f>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector3f>& Normals, const TArray<struct FVector2f>& UV0, const TArray<struct FVector2f>& UV1, const TArray<struct FVector2f>& UV2, const TArray<struct FVector2f>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents, bool bCreateCollision);
	void CreateMeshSection(int32 SectionIndex, const TArray<struct FVector3f>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector3f>& Normals, const TArray<struct FVector2f>& UV0, const TArray<struct FColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents, bool bCreateCollision);
	void ClearMeshSection(int32 SectionIndex);
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	void AddCollisionConvexMesh(const TArray<struct FVector>& ConvexVerts);
};

}


