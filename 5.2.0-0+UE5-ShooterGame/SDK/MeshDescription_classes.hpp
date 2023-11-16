#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C8 (0x2F0 - 0x28)
// Class MeshDescription.MeshDescriptionBase
class UMeshDescriptionBase : public UObject
{
public:
	uint8                                        Pad_2C7B[0x2C8];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshDescriptionBase* GetDefaultObj();

	void SetVertexPosition(const struct FVertexID& VertexID, const struct FVector& Position);
	void SetPolygonVertexInstances(const struct FPolygonID& PolygonID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs);
	void SetPolygonPolygonGroup(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID);
	void ReversePolygonFacing(const struct FPolygonID& PolygonID);
	void ReserveNewVertices(int32 NumberOfNewVertices);
	void ReserveNewVertexInstances(int32 NumberOfNewVertexInstances);
	void ReserveNewTriangles(int32 NumberOfNewTriangles);
	void ReserveNewPolygons(int32 NumberOfNewPolygons);
	void ReserveNewPolygonGroups(int32 NumberOfNewPolygonGroups);
	void ReserveNewEdges(int32 NumberOfNewEdges);
	void IsVertexValid(const struct FVertexID& VertexID, bool ReturnValue);
	void IsVertexOrphaned(const struct FVertexID& VertexID, bool ReturnValue);
	void IsVertexInstanceValid(const struct FVertexInstanceID& VertexInstanceID, bool ReturnValue);
	void IsTriangleValid(const struct FTriangleID& TriangleID, bool ReturnValue);
	void IsTrianglePartOfNgon(const struct FTriangleID& TriangleID, bool ReturnValue);
	void IsPolygonValid(const struct FPolygonID& PolygonID, bool ReturnValue);
	void IsPolygonGroupValid(const struct FPolygonGroupID& PolygonGroupID, bool ReturnValue);
	void IsEmpty(bool ReturnValue);
	void IsEdgeValid(const struct FEdgeID& EdgeID, bool ReturnValue);
	void IsEdgeInternalToPolygon(const struct FEdgeID& EdgeID, const struct FPolygonID& PolygonID, bool ReturnValue);
	void IsEdgeInternal(const struct FEdgeID& EdgeID, bool ReturnValue);
	void GetVertexVertexInstances(const struct FVertexID& VertexID, const TArray<struct FVertexInstanceID>& OutVertexInstanceIDs);
	void GetVertexPosition(const struct FVertexID& VertexID, const struct FVector& ReturnValue);
	void GetVertexPairEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1, const struct FEdgeID& ReturnValue);
	void GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID, const struct FVertexID& ReturnValue);
	void GetVertexInstancePairEdge(const struct FVertexInstanceID& VertexInstanceID0, const struct FVertexInstanceID& VertexInstanceID1, const struct FEdgeID& ReturnValue);
	void GetVertexInstanceForTriangleVertex(const struct FTriangleID& TriangleID, const struct FVertexID& VertexID, const struct FVertexInstanceID& ReturnValue);
	void GetVertexInstanceForPolygonVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID, const struct FVertexInstanceID& ReturnValue);
	void GetVertexInstanceCount(int32 ReturnValue);
	void GetVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID, const TArray<struct FTriangleID>& OutConnectedTriangleIDs);
	void GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, const TArray<struct FPolygonID>& OutConnectedPolygonIDs);
	void GetVertexCount(int32 ReturnValue);
	void GetVertexConnectedTriangles(const struct FVertexID& VertexID, const TArray<struct FTriangleID>& OutConnectedTriangleIDs);
	void GetVertexConnectedPolygons(const struct FVertexID& VertexID, const TArray<struct FPolygonID>& OutConnectedPolygonIDs);
	void GetVertexConnectedEdges(const struct FVertexID& VertexID, const TArray<struct FEdgeID>& OutEdgeIDs);
	void GetVertexAdjacentVertices(const struct FVertexID& VertexID, const TArray<struct FVertexID>& OutAdjacentVertexIDs);
	void GetTriangleVertices(const struct FTriangleID& TriangleID, const TArray<struct FVertexID>& OutVertexIDs);
	void GetTriangleVertexInstances(const struct FTriangleID& TriangleID, const TArray<struct FVertexInstanceID>& OutVertexInstanceIDs);
	void GetTriangleVertexInstance(const struct FTriangleID& TriangleID, int32 Index, const struct FVertexInstanceID& ReturnValue);
	void GetTrianglePolygonGroup(const struct FTriangleID& TriangleID, const struct FPolygonGroupID& ReturnValue);
	void GetTrianglePolygon(const struct FTriangleID& TriangleID, const struct FPolygonID& ReturnValue);
	void GetTriangleEdges(const struct FTriangleID& TriangleID, const TArray<struct FEdgeID>& OutEdgeIDs);
	void GetTriangleCount(int32 ReturnValue);
	void GetTriangleAdjacentTriangles(const struct FTriangleID& TriangleID, const TArray<struct FTriangleID>& OutTriangleIDs);
	void GetPolygonVertices(const struct FPolygonID& PolygonID, const TArray<struct FVertexID>& OutVertexIDs);
	void GetPolygonVertexInstances(const struct FPolygonID& PolygonID, const TArray<struct FVertexInstanceID>& OutVertexInstanceIDs);
	void GetPolygonTriangles(const struct FPolygonID& PolygonID, const TArray<struct FTriangleID>& OutTriangleIDs);
	void GetPolygonPolygonGroup(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& ReturnValue);
	void GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, const TArray<struct FEdgeID>& OutEdgeIDs);
	void GetPolygonInternalEdges(const struct FPolygonID& PolygonID, const TArray<struct FEdgeID>& OutEdgeIDs);
	void GetPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID, const TArray<struct FPolygonID>& OutPolygonIDs);
	void GetPolygonGroupCount(int32 ReturnValue);
	void GetPolygonCount(int32 ReturnValue);
	void GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, const TArray<struct FPolygonID>& OutPolygonIDs);
	void GetNumVertexVertexInstances(const struct FVertexID& VertexID, int32 ReturnValue);
	void GetNumVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID, int32 ReturnValue);
	void GetNumVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, int32 ReturnValue);
	void GetNumVertexConnectedTriangles(const struct FVertexID& VertexID, int32 ReturnValue);
	void GetNumVertexConnectedPolygons(const struct FVertexID& VertexID, int32 ReturnValue);
	void GetNumVertexConnectedEdges(const struct FVertexID& VertexID, int32 ReturnValue);
	void GetNumPolygonVertices(const struct FPolygonID& PolygonID, int32 ReturnValue);
	void GetNumPolygonTriangles(const struct FPolygonID& PolygonID, int32 ReturnValue);
	void GetNumPolygonInternalEdges(const struct FPolygonID& PolygonID, int32 ReturnValue);
	void GetNumPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID, int32 ReturnValue);
	void GetNumEdgeConnectedTriangles(const struct FEdgeID& EdgeID, int32 ReturnValue);
	void GetNumEdgeConnectedPolygons(const struct FEdgeID& EdgeID, int32 ReturnValue);
	void GetEdgeVertices(const struct FEdgeID& EdgeID, const TArray<struct FVertexID>& OutVertexIDs);
	void GetEdgeVertex(const struct FEdgeID& EdgeID, int32 VertexNumber, const struct FVertexID& ReturnValue);
	void GetEdgeCount(int32 ReturnValue);
	void GetEdgeConnectedTriangles(const struct FEdgeID& EdgeID, const TArray<struct FTriangleID>& OutConnectedTriangleIDs);
	void GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, const TArray<struct FPolygonID>& OutConnectedPolygonIDs);
	void Empty();
	void DeleteVertexInstance(const struct FVertexInstanceID& VertexInstanceID, const TArray<struct FVertexID>& OrphanedVertices);
	void DeleteVertex(const struct FVertexID& VertexID);
	void DeleteTriangle(const struct FTriangleID& TriangleID, const TArray<struct FEdgeID>& OrphanedEdges, const TArray<struct FVertexInstanceID>& OrphanedVertexInstances, const TArray<struct FPolygonGroupID>& OrphanedPolygonGroupsPtr);
	void DeletePolygonGroup(const struct FPolygonGroupID& PolygonGroupID);
	void DeletePolygon(const struct FPolygonID& PolygonID, const TArray<struct FEdgeID>& OrphanedEdges, const TArray<struct FVertexInstanceID>& OrphanedVertexInstances, const TArray<struct FPolygonGroupID>& OrphanedPolygonGroups);
	void DeleteEdge(const struct FEdgeID& EdgeID, const TArray<struct FVertexID>& OrphanedVertices);
	void CreateVertexWithID(const struct FVertexID& VertexID);
	void CreateVertexInstanceWithID(const struct FVertexInstanceID& VertexInstanceID, const struct FVertexID& VertexID);
	void CreateVertexInstance(const struct FVertexID& VertexID, const struct FVertexInstanceID& ReturnValue);
	void CreateVertex(const struct FVertexID& ReturnValue);
	void CreateTriangleWithID(const struct FTriangleID& TriangleID, const struct FPolygonGroupID& PolygonGroupID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs, const TArray<struct FEdgeID>& NewEdgeIDs);
	void CreateTriangle(const struct FPolygonGroupID& PolygonGroupID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs, const TArray<struct FEdgeID>& NewEdgeIDs, const struct FTriangleID& ReturnValue);
	void CreatePolygonWithID(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs, const TArray<struct FEdgeID>& NewEdgeIDs);
	void CreatePolygonGroupWithID(const struct FPolygonGroupID& PolygonGroupID);
	void CreatePolygonGroup(const struct FPolygonGroupID& ReturnValue);
	void CreatePolygon(const struct FPolygonGroupID& PolygonGroupID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs, const TArray<struct FEdgeID>& NewEdgeIDs, const struct FPolygonID& ReturnValue);
	void CreateEdgeWithID(const struct FEdgeID& EdgeID, const struct FVertexID& VertexID0, const struct FVertexID& VertexID1);
	void CreateEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1, const struct FEdgeID& ReturnValue);
	void ComputePolygonTriangulation(const struct FPolygonID& PolygonID);
};

// 0x0 (0x28 - 0x28)
// Class MeshDescription.MeshDescriptionBaseBulkData
class UMeshDescriptionBaseBulkData : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMeshDescriptionBaseBulkData* GetDefaultObj();

};

}


