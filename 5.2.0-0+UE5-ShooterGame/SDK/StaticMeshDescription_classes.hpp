#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x2F0 - 0x2F0)
// Class StaticMeshDescription.StaticMeshDescription
class UStaticMeshDescription : public UMeshDescriptionBase
{
public:

	static class UClass* StaticClass();
	static class UStaticMeshDescription* GetDefaultObj();

	void SetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, const struct FVector2D& UV, int32 UVIndex);
	void SetPolygonGroupMaterialSlotName(const struct FPolygonGroupID& PolygonGroupID, class FName SlotName);
	void GetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, int32 UVIndex, const struct FVector2D& ReturnValue);
	void CreateCube(const struct FVector& Center, const struct FVector& HalfExtents, const struct FPolygonGroupID& PolygonGroup, const struct FPolygonID& PolygonID_PlusX, const struct FPolygonID& PolygonID_MinusX, const struct FPolygonID& PolygonID_PlusY, const struct FPolygonID& PolygonID_MinusY, const struct FPolygonID& PolygonID_PlusZ, const struct FPolygonID& PolygonID_MinusZ);
};

}


