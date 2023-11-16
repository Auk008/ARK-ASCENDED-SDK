#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class GeometryScriptingCore.GeometryScriptDebug
class UGeometryScriptDebug : public UObject
{
public:
	TArray<struct FGeometryScriptDebugMessage>   Messages;                                          // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UGeometryScriptDebug* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions
class UGeometryScriptLibrary_CollisionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_CollisionFunctions* GetDefaultObj();

	void SetStaticMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, const struct FGeometryScriptCollisionFromMeshOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void SetStaticMeshCollisionFromComponent(class UStaticMesh* StaticMeshAsset, class UPrimitiveComponent* SourceComponent, const struct FGeometryScriptSetSimpleCollisionOptions& Options, class UGeometryScriptDebug* Debug);
	void SetDynamicMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UDynamicMeshComponent* ToDynamicMeshComponent, const struct FGeometryScriptCollisionFromMeshOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ResetDynamicMeshCollision(class UDynamicMeshComponent* Component, bool bEmitTransaction, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions
class UGeometryScriptLibrary_ContainmentFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_ContainmentFunctions* GetDefaultObj();

	void ComputeMeshSweptHull(class UDynamicMesh* TargetMesh, class UDynamicMesh* CopyToMesh, class UDynamicMesh* CopyToMeshOut, const struct FTransform& ProjectionFrame, const struct FGeometryScriptSweptHullOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ComputeMeshConvexHull(class UDynamicMesh* TargetMesh, class UDynamicMesh* CopyToMesh, class UDynamicMesh* CopyToMeshOut, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptConvexHullOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ComputeMeshConvexDecomposition(class UDynamicMesh* TargetMesh, class UDynamicMesh* CopyToMesh, class UDynamicMesh* CopyToMeshOut, const struct FGeometryScriptConvexDecompositionOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions
class UGeometryScriptLibrary_ListUtilityFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_ListUtilityFunctions* GetDefaultObj();

	void SetVectorListItem(const struct FGeometryScriptVectorList& VectorList, int32 Index, const struct FVector& NewValue, bool bIsValidIndex);
	void SetUVListItem(const struct FGeometryScriptUVList& UVList, int32 Index, const struct FVector2D& NewUV, bool bIsValidIndex);
	void SetScalarListItem(const struct FGeometryScriptScalarList& ScalarList, int32 Index, double NewValue, bool bIsValidIndex);
	void SetIndexListItem(const struct FGeometryScriptIndexList& IndexList, int32 Index, int32 NewValue, bool bIsValidIndex);
	void SetColorListItem(const struct FGeometryScriptColorList& ColorList, int32 Index, const struct FLinearColor& NewColor, bool bIsValidIndex);
	void GetVectorListLength(const struct FGeometryScriptVectorList& VectorList, int32 ReturnValue);
	void GetVectorListLastIndex(const struct FGeometryScriptVectorList& VectorList, int32 ReturnValue);
	void GetVectorListItem(const struct FGeometryScriptVectorList& VectorList, int32 Index, bool bIsValidIndex, const struct FVector& ReturnValue);
	void GetUVListLength(const struct FGeometryScriptUVList& UVList, int32 ReturnValue);
	void GetUVListLastIndex(const struct FGeometryScriptUVList& UVList, int32 ReturnValue);
	void GetUVListItem(const struct FGeometryScriptUVList& UVList, int32 Index, bool bIsValidIndex, const struct FVector2D& ReturnValue);
	void GetTriangleListLength(const struct FGeometryScriptTriangleList& TriangleList, int32 ReturnValue);
	void GetTriangleListLastTriangle(const struct FGeometryScriptTriangleList& TriangleList, int32 ReturnValue);
	void GetTriangleListItem(const struct FGeometryScriptTriangleList& TriangleList, int32 Triangle, bool bIsValidTriangle, const struct FIntVector& ReturnValue);
	void GetScalarListLength(const struct FGeometryScriptScalarList& ScalarList, int32 ReturnValue);
	void GetScalarListLastIndex(const struct FGeometryScriptScalarList& ScalarList, int32 ReturnValue);
	void GetScalarListItem(const struct FGeometryScriptScalarList& ScalarList, int32 Index, bool bIsValidIndex, double ReturnValue);
	void GetIndexListLength(const struct FGeometryScriptIndexList& IndexList, int32 ReturnValue);
	void GetIndexListLastIndex(const struct FGeometryScriptIndexList& IndexList, int32 ReturnValue);
	void GetIndexListItem(const struct FGeometryScriptIndexList& IndexList, int32 Index, bool bIsValidIndex, int32 ReturnValue);
	void GetColorListLength(const struct FGeometryScriptColorList& ColorList, int32 ReturnValue);
	void GetColorListLastIndex(const struct FGeometryScriptColorList& ColorList, int32 ReturnValue);
	void GetColorListItem(const struct FGeometryScriptColorList& ColorList, int32 Index, bool bIsValidIndex, const struct FLinearColor& ReturnValue);
	void ExtractColorListChannels(const struct FGeometryScriptColorList& ColorList, const struct FGeometryScriptVectorList& VectorList, int32 XChannelIndex, int32 YChannelIndex, int32 ZChannelIndex);
	void ExtractColorListChannel(const struct FGeometryScriptColorList& ColorList, const struct FGeometryScriptScalarList& ScalarList, int32 ChannelIndex);
	void DuplicateVectorList(const struct FGeometryScriptVectorList& VectorList, const struct FGeometryScriptVectorList& DuplicateList);
	void DuplicateUVList(const struct FGeometryScriptUVList& UVList, const struct FGeometryScriptUVList& DuplicateList);
	void DuplicateScalarList(const struct FGeometryScriptScalarList& ScalarList, const struct FGeometryScriptScalarList& DuplicateList);
	void DuplicateIndexList(const struct FGeometryScriptIndexList& IndexList, const struct FGeometryScriptIndexList& DuplicateList);
	void DuplicateColorList(const struct FGeometryScriptColorList& ColorList, const struct FGeometryScriptColorList& DuplicateList);
	void ConvertVectorListToArray(const struct FGeometryScriptVectorList& VectorList, const TArray<struct FVector>& VectorArray);
	void ConvertUVListToArray(const struct FGeometryScriptUVList& UVList, const TArray<struct FVector2D>& UVArray);
	void ConvertTriangleListToArray(const struct FGeometryScriptTriangleList& TriangleList, const TArray<struct FIntVector>& TriangleArray);
	void ConvertScalarListToArray(const struct FGeometryScriptScalarList& ScalarList, const TArray<double>& ScalarArray);
	void ConvertIndexListToArray(const struct FGeometryScriptIndexList& IndexList, const TArray<int32>& IndexArray);
	void ConvertColorListToArray(const struct FGeometryScriptColorList& ColorList, const TArray<struct FLinearColor>& ColorArray);
	void ConvertArrayToVectorList(const TArray<struct FVector>& VectorArray, const struct FGeometryScriptVectorList& VectorList);
	void ConvertArrayToUVList(const TArray<struct FVector2D>& UVArray, const struct FGeometryScriptUVList& UVList);
	void ConvertArrayToTriangleList(const TArray<struct FIntVector>& TriangleArray, const struct FGeometryScriptTriangleList& TriangleList);
	void ConvertArrayToScalarList(const TArray<double>& VectorArray, const struct FGeometryScriptScalarList& ScalarList);
	void ConvertArrayToIndexList(const TArray<int32>& IndexArray, const struct FGeometryScriptIndexList& IndexList, enum class EGeometryScriptIndexType IndexType);
	void ConvertArrayToColorList(const TArray<struct FLinearColor>& ColorArray, const struct FGeometryScriptColorList& ColorList);
	void ClearVectorList(const struct FGeometryScriptVectorList& VectorList, const struct FVector& ClearValue);
	void ClearUVList(const struct FGeometryScriptUVList& UVList, const struct FVector2D& ClearUV);
	void ClearScalarList(const struct FGeometryScriptScalarList& ScalarList, double ClearValue);
	void ClearIndexList(const struct FGeometryScriptIndexList& IndexList, int32 ClearValue);
	void ClearColorList(const struct FGeometryScriptColorList& ColorList, const struct FLinearColor& ClearColor);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions
class UGeometryScriptLibrary_StaticMeshFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_StaticMeshFunctions* GetDefaultObj();

	void GetSectionMaterialListFromStaticMesh(class UStaticMesh* FromStaticMeshAsset, const struct FGeometryScriptMeshReadLOD& RequestedLOD, const TArray<class UMaterialInterface*>& MaterialList, const TArray<int32>& MaterialIndex, enum class EGeometryScriptOutcomePins Outcome, class UGeometryScriptDebug* Debug);
	void CopyMeshToStaticMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, const struct FGeometryScriptCopyMeshToAssetOptions& Options, const struct FGeometryScriptMeshWriteLOD& TargetLod, enum class EGeometryScriptOutcomePins Outcome, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void CopyMeshToSkeletalMesh(class UDynamicMesh* FromDynamicMesh, class USkeletalMesh* ToSkeletalMeshAsset, const struct FGeometryScriptCopyMeshToAssetOptions& Options, const struct FGeometryScriptMeshWriteLOD& TargetLod, enum class EGeometryScriptOutcomePins Outcome, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void CopyMeshFromStaticMesh(class UStaticMesh* FromStaticMeshAsset, class UDynamicMesh* ToDynamicMesh, const struct FGeometryScriptCopyMeshFromAssetOptions& AssetOptions, const struct FGeometryScriptMeshReadLOD& RequestedLOD, enum class EGeometryScriptOutcomePins Outcome, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void CopyMeshFromSkeletalMesh(class USkeletalMesh* FromSkeletalMeshAsset, class UDynamicMesh* ToDynamicMesh, const struct FGeometryScriptCopyMeshFromAssetOptions& AssetOptions, const struct FGeometryScriptMeshReadLOD& RequestedLOD, enum class EGeometryScriptOutcomePins Outcome, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions
class UGeometryScriptLibrary_MeshBakeFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBakeFunctions* GetDefaultObj();

	void MakeBakeTypeVertexColor(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	void MakeBakeTypeTexture(class UTexture2D* SourceTexture, int32 SourceUVLayer, const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	void MakeBakeTypeTangentNormal(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	void MakeBakeTypePosition(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	void MakeBakeTypeObjectNormal(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	void MakeBakeTypeMultiTexture(const TArray<class UTexture2D*>& MaterialIDSourceTextures, int32 SourceUVLayer, const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	void MakeBakeTypeMaterialID(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	void MakeBakeTypeFaceNormal(const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	void MakeBakeTypeCurvature(enum class EGeometryScriptBakeCurvatureTypeMode CurvatureType, enum class EGeometryScriptBakeCurvatureColorMode ColorMapping, float ColorRangeMultiplier, float MinRangeMultiplier, enum class EGeometryScriptBakeCurvatureClampMode Clamping, const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	void MakeBakeTypeBentNormal(int32 OcclusionRays, float MaxDistance, float SpreadAngle, const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	void MakeBakeTypeAmbientOcclusion(int32 OcclusionRays, float MaxDistance, float SpreadAngle, float BiasAngle, const struct FGeometryScriptBakeTypeOptions& ReturnValue);
	void BakeVertex(class UDynamicMesh* TargetMesh, const struct FTransform& TargetTransform, const struct FGeometryScriptBakeTargetMeshOptions& TargetOptions, class UDynamicMesh* SourceMesh, const struct FTransform& SourceTransform, const struct FGeometryScriptBakeSourceMeshOptions& SourceOptions, const struct FGeometryScriptBakeOutputType& BakeTypes, const struct FGeometryScriptBakeVertexOptions& BakeOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void BakeTextureFromRenderCaptures(class UDynamicMesh* TargetMesh, const struct FTransform& TargetLocalToWorld, const struct FGeometryScriptBakeTargetMeshOptions& TargetOptions, const TArray<class AActor*>& SourceActors, const struct FGeometryScriptBakeRenderCaptureOptions& BakeOptions, class UGeometryScriptDebug* Debug, const struct FGeometryScriptRenderCaptureTextures& ReturnValue);
	void BakeTexture(class UDynamicMesh* TargetMesh, const struct FTransform& TargetTransform, const struct FGeometryScriptBakeTargetMeshOptions& TargetOptions, class UDynamicMesh* SourceMesh, const struct FTransform& SourceTransform, const struct FGeometryScriptBakeSourceMeshOptions& SourceOptions, const TArray<struct FGeometryScriptBakeTypeOptions>& BakeTypes, const struct FGeometryScriptBakeTextureOptions& BakeOptions, class UGeometryScriptDebug* Debug, const TArray<class UTexture2D*>& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions
class UGeometryScriptLibrary_MeshBasicEditFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBasicEditFunctions* GetDefaultObj();

	void SetVertexPosition(class UDynamicMesh* TargetMesh, int32 VertexID, const struct FVector& NewPosition, bool bIsValidVertex, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	void SetAllMeshVertexPositions(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& PositionList, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void DiscardMeshAttributes(class UDynamicMesh* TargetMesh, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	void DeleteVerticesFromMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& VertexList, int32 NumDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	void DeleteVertexFromMesh(class UDynamicMesh* TargetMesh, int32 VertexID, bool bWasVertexDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	void DeleteTrianglesFromMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleList, int32 NumDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	void DeleteTriangleFromMesh(class UDynamicMesh* TargetMesh, int32 TriangleID, bool bWasTriangleDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	void DeleteSelectedTrianglesFromMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, int32 NumDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	void AppendMeshTransformed(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, const TArray<struct FTransform>& AppendTransforms, const struct FTransform& ConstantTransform, bool bConstantTransformIsRelative, bool bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendMeshRepeated(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, const struct FTransform& AppendTransform, int32 RepeatCount, bool bApplyTransformToFirstInstance, bool bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, const struct FTransform& AppendTransform, bool bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendBuffersToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptSimpleMeshBuffers& Buffers, const struct FGeometryScriptIndexList& NewTriangleIndicesList, int32 MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AddVerticesToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& NewPositionsList, const struct FGeometryScriptIndexList& NewIndicesList, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	void AddVertexToMesh(class UDynamicMesh* TargetMesh, const struct FVector& NewPosition, int32 NewVertexIndex, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	void AddTriangleToMesh(class UDynamicMesh* TargetMesh, const struct FIntVector& NewTriangle, int32 NewTriangleIndex, int32 NewTriangleGroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AddTrianglesToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptTriangleList& NewTrianglesList, const struct FGeometryScriptIndexList& NewIndicesList, int32 NewTriangleGroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions
class UGeometryScriptLibrary_MeshBoneWeightFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBoneWeightFunctions* GetDefaultObj();

	void SetVertexBoneWeights(class UDynamicMesh* TargetMesh, int32 VertexID, const TArray<struct FGeometryScriptBoneWeight>& BoneWeights, bool bIsValidVertexID, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue);
	void SetAllVertexBoneWeights(class UDynamicMesh* TargetMesh, const TArray<struct FGeometryScriptBoneWeight>& BoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue);
	void MeshHasBoneWeights(class UDynamicMesh* TargetMesh, bool bHasBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue);
	void MeshCreateBoneWeights(class UDynamicMesh* TargetMesh, bool bProfileExisted, bool bReplaceExistingProfile, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue);
	void GetVertexBoneWeights(class UDynamicMesh* TargetMesh, int32 VertexID, const TArray<struct FGeometryScriptBoneWeight>& BoneWeights, bool bHasValidBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue);
	void GetMaxBoneWeightIndex(class UDynamicMesh* TargetMesh, bool bHasBoneWeights, int32 MaxBoneIndex, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue);
	void GetLargestVertexBoneWeight(class UDynamicMesh* TargetMesh, int32 VertexID, const struct FGeometryScriptBoneWeight& BoneWeight, bool bHasValidBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue);
	void ComputeSmoothBoneWeights(class UDynamicMesh* TargetMesh, class USkeleton* Skeleton, const struct FGeometryScriptSmoothBoneWeightsOptions& Options, const struct FGeometryScriptBoneWeightProfile& Profile, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions
class UGeometryScriptLibrary_MeshBooleanFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBooleanFunctions* GetDefaultObj();

	void ApplyMeshSelfUnion(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelfUnionOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyMeshPlaneSlice(class UDynamicMesh* TargetMesh, const struct FTransform& CutFrame, const struct FGeometryScriptMeshPlaneSliceOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyMeshPlaneCut(class UDynamicMesh* TargetMesh, const struct FTransform& CutFrame, const struct FGeometryScriptMeshPlaneCutOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyMeshMirror(class UDynamicMesh* TargetMesh, const struct FTransform& MirrorFrame, const struct FGeometryScriptMeshMirrorOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyMeshBoolean(class UDynamicMesh* TargetMesh, const struct FTransform& TargetTransform, class UDynamicMesh* ToolMesh, const struct FTransform& ToolTransform, enum class EGeometryScriptBooleanOperation Operation, const struct FGeometryScriptMeshBooleanOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions
class UGeometryScriptLibrary_MeshComparisonFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshComparisonFunctions* GetDefaultObj();

	void MeasureDistancesBetweenMeshes(class UDynamicMesh* TargetMesh, class UDynamicMesh* OtherMesh, const struct FGeometryScriptMeasureMeshDistanceOptions& Options, double MaxDistance, double MinDistance, double AverageDistance, double RootMeanSqrDeviation, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void IsSameMeshAs(class UDynamicMesh* TargetMesh, class UDynamicMesh* OtherMesh, const struct FGeometryScriptIsSameMeshOptions& Options, bool bIsSameMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void IsIntersectingMesh(class UDynamicMesh* TargetMesh, const struct FTransform& TargetTransform, class UDynamicMesh* OtherMesh, const struct FTransform& OtherTransform, bool bIsIntersecting, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions
class UGeometryScriptLibrary_MeshDecompositionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshDecompositionFunctions* GetDefaultObj();

	void SplitMeshByPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, const TArray<class UDynamicMesh*>& ComponentMeshes, const TArray<int32>& ComponentPolygroups, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void SplitMeshByMaterialIDs(class UDynamicMesh* TargetMesh, const TArray<class UDynamicMesh*>& ComponentMeshes, const TArray<int32>& ComponentMaterialIDs, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void SplitMeshByComponents(class UDynamicMesh* TargetMesh, const TArray<class UDynamicMesh*>& ComponentMeshes, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void GetSubMeshFromMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* StoreToSubmesh, const struct FGeometryScriptIndexList& TriangleList, class UDynamicMesh* StoreToSubmeshOut, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void CopyMeshToMesh(class UDynamicMesh* CopyFromMesh, class UDynamicMesh* CopyToMesh, class UDynamicMesh* CopyToMeshOut, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void CopyMeshSelectionToMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* StoreToSubmesh, const struct FGeometryScriptMeshSelection& Selection, class UDynamicMesh* StoreToSubmeshOut, bool bAppendToExisting, bool bPreserveGroupIDs, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions
class UGeometryScriptLibrary_MeshDeformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshDeformFunctions* GetDefaultObj();

	void ApplyTwistWarpToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptTwistWarpOptions& Options, const struct FTransform& TwistOrientation, float TwistAngle, float TwistExtent, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyPerlinNoiseToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptPerlinNoiseOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyMathWarpToMesh(class UDynamicMesh* TargetMesh, const struct FTransform& WarpOrientation, enum class EGeometryScriptMathWarpType WarpType, const struct FGeometryScriptMathWarpOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyIterativeSmoothingToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptIterativeMeshSmoothingOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyFlareWarpToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptFlareWarpOptions& Options, const struct FTransform& FlareOrientation, float FlarePercentX, float FlarePercentY, float FlareExtent, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyDisplaceFromTextureMap(class UDynamicMesh* TargetMesh, class UTexture2D* Texture, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptDisplaceFromTextureOptions& Options, int32 UVLayer, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyDisplaceFromPerVertexVectors(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptVectorList& VectorList, float Magnitude, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyBendWarpToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptBendWarpOptions& Options, const struct FTransform& BendOrientation, float BendAngle, float BendExtent, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions
class UGeometryScriptLibrary_MeshMaterialFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshMaterialFunctions* GetDefaultObj();

	void SetTriangleMaterialID(class UDynamicMesh* TargetMesh, int32 TriangleID, int32 MaterialID, bool bIsValidTriangle, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	void SetPolygroupMaterialID(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 PolygroupID, int32 MaterialID, bool bIsValidPolygroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void SetMaterialIDOnTriangles(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleIDList, int32 MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void SetMaterialIDForMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, int32 MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void SetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleMaterialIDList, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void RemapMaterialIDs(class UDynamicMesh* TargetMesh, int32 FromMaterialID, int32 ToMaterialID, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void GetTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32 MaterialID, const struct FGeometryScriptIndexList& TriangleIDList, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void GetTriangleMaterialID(class UDynamicMesh* TargetMesh, int32 TriangleID, bool bIsValidTriangle, int32 ReturnValue);
	void GetMaxMaterialID(class UDynamicMesh* TargetMesh, bool bHasMaterialIDs, int32 ReturnValue);
	void GetMaterialIDsOfTriangles(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleIDList, const struct FGeometryScriptIndexList& MaterialIDList, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void GetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& MaterialIDList, bool bHasMaterialIDs, class UDynamicMesh* ReturnValue);
	void EnableMaterialIDs(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void DeleteTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32 MaterialID, int32 NumDeleted, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void CompactMaterialIDs(class UDynamicMesh* TargetMesh, const TArray<class UMaterialInterface*>& SourceMaterialList, const TArray<class UMaterialInterface*>& CompactedMaterialList, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ClearMaterialIDs(class UDynamicMesh* TargetMesh, int32 ClearValue, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions
class UGeometryScriptLibrary_MeshModelingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshModelingFunctions* GetDefaultObj();

	void ApplyMeshShell(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshOffsetOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyMeshPolygroupBevel(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshBevelOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyMeshOffsetFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshOffsetFacesOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyMeshOffset(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshOffsetOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyMeshLinearExtrudeFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshLinearExtrudeOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyMeshInsetOutsetFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshInsetOutsetFacesOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyMeshExtrude_Compatibility_5p0(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshExtrudeOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyMeshDuplicateFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptMeshSelection& NewTriangles, const struct FGeometryScriptMeshEditPolygroupOptions& GroupOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyMeshDisconnectFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, bool bAllowBowtiesInOutput, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyMeshBevelSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, enum class EGeometryScriptMeshBevelSelectionMode BevelMode, const struct FGeometryScriptMeshBevelSelectionOptions& BevelOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions
class UGeometryScriptLibrary_MeshNormalsFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshNormalsFunctions* GetDefaultObj();

	void UpdateVertexNormal(class UDynamicMesh* TargetMesh, int32 VertexID, bool bUpdateNormal, const struct FVector& NewNormal, bool bUpdateTangents, const struct FVector& NewTangentX, const struct FVector& NewTangentY, bool bIsValidVertex, bool bMergeSplitValues, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	void SetPerVertexNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void SetPerFaceNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void SetMeshTriangleNormals(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct FGeometryScriptTriangle& Normals, bool bIsValidTriangle, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	void SetMeshPerVertexTangents(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& TangentXList, const struct FGeometryScriptVectorList& TangentYList, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void SetMeshPerVertexNormals(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& VertexNormalList, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void RecomputeNormals(class UDynamicMesh* TargetMesh, const struct FGeometryScriptCalculateNormalsOptions& CalculateOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void GetMeshPerVertexTangents(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& TangentXList, const struct FGeometryScriptVectorList& TangentYList, bool bIsValidTangentSet, bool bHasVertexIDGaps, bool bAverageSplitVertexValues, class UDynamicMesh* ReturnValue);
	void GetMeshPerVertexNormals(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& NormalList, bool bIsValidNormalSet, bool bHasVertexIDGaps, bool bAverageSplitVertexValues, class UDynamicMesh* ReturnValue);
	void GetMeshHasTangents(class UDynamicMesh* TargetMesh, bool bHasTangents, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void FlipNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void DiscardTangents(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ComputeTangents(class UDynamicMesh* TargetMesh, const struct FGeometryScriptTangentsOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ComputeSplitNormals(class UDynamicMesh* TargetMesh, const struct FGeometryScriptSplitNormalsOptions& SplitOptions, const struct FGeometryScriptCalculateNormalsOptions& CalculateOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AutoRepairNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions
class UGeometryScriptLibrary_MeshPolygroupFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshPolygroupFunctions* GetDefaultObj();

	void SetPolygroupForMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, const struct FGeometryScriptMeshSelection& Selection, int32 SetPolygroupIDOut, int32 SetPolygroupID, bool bGenerateNewPolygroup, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	void SetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh, int32 NumLayers, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void GetTrianglesInPolygroup(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 PolygroupID, const struct FGeometryScriptIndexList& TriangleIDsOut, class UDynamicMesh* ReturnValue);
	void GetTrianglePolygroupID(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 TriangleID, bool bIsValidTriangle, int32 ReturnValue);
	void GetPolygroupIDsInMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, const struct FGeometryScriptIndexList& PolygroupIDsOut, class UDynamicMesh* ReturnValue);
	void GetAllTrianglePolygroupIDs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, const struct FGeometryScriptIndexList& PolygroupIDsOut, class UDynamicMesh* ReturnValue);
	void EnablePolygroups(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void DeleteTrianglesInPolygroup(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 PolygroupID, int32 NumDeleted, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void CopyPolygroupsLayer(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& FromGroupLayer, const struct FGeometryScriptGroupLayer& ToGroupLayer, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ConvertUVIslandsToPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 UVLayer, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ConvertComponentsToPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ComputePolygroupsFromPolygonDetection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, bool bRespectUVSeams, bool bRespectHardNormals, double QuadAdjacencyWeight, double QuadMetricClamp, int32 MaxSearchRounds, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ComputePolygroupsFromAngleThreshold(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, float CreaseAngle, int32 MinGroupSize, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ClearPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 ClearValue, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions
class UGeometryScriptLibrary_MeshPrimitiveFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshPrimitiveFunctions* GetDefaultObj();

	void AppendVoronoiDiagram2D(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const TArray<struct FVector2D>& VoronoiSites, const struct FGeometryScriptVoronoiOptions& VoronoiOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendTriangulatedPolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const TArray<struct FVector2D>& PolygonVertices, bool bAllowSelfIntersections, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendTorus(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const struct FGeometryScriptRevolveOptions& RevolveOptions, float MajorRadius, float MinorRadius, int32 MajorSteps, int32 MinorSteps, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendSweepPolyline(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const TArray<struct FVector2D>& PolylineVertices, const TArray<struct FTransform>& SweepPath, const TArray<float>& PolylineTexParamU, const TArray<float>& SweepPathTexParamV, bool bLoop, float StartScale, float EndScale, float RotationAngleDeg, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendSweepPolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const TArray<struct FVector2D>& PolygonVertices, const TArray<struct FTransform>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, float RotationAngleDeg, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendSpiralRevolvePolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const TArray<struct FVector2D>& PolygonVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, float Radius, int32 Steps, float RisePerRevolution, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendSphereLatLong(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, int32 StepsPhi, int32 StepsTheta, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendSphereBox(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, int32 StepsX, int32 StepsY, int32 StepsZ, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendSimpleSweptPolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const TArray<struct FVector2D>& PolygonVertices, const TArray<struct FVector>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendSimpleExtrudePolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const TArray<struct FVector2D>& PolygonVertices, float Height, int32 HeightSteps, bool bCapped, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendRoundRectangleXY(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, float CornerRadius, int32 StepsWidth, int32 StepsHeight, int32 StepsRound, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendRoundRectangle_Compatibility_5_0(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, float CornerRadius, int32 StepsWidth, int32 StepsHeight, int32 StepsRound, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendRevolvePolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const TArray<struct FVector2D>& PolygonVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, float Radius, int32 Steps, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendRevolvePath(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const TArray<struct FVector2D>& PathVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, int32 Steps, bool bCapped, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendRectangleXY(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, int32 StepsWidth, int32 StepsHeight, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendRectangle_Compatibility_5_0(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, int32 StepsWidth, int32 StepsHeight, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendLinearStairs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float StepWidth, float StepHeight, float StepDepth, int32 NumSteps, bool bFloating, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendDisc(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, int32 AngleSteps, int32 SpokeSteps, float StartAngle, float EndAngle, float HoleRadius, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendCylinder(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, float Height, int32 RadialSteps, int32 HeightSteps, bool bCapped, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendCurvedStairs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float StepWidth, float StepHeight, float InnerRadius, float CurveAngle, int32 NumSteps, bool bFloating, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendCone(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float BaseRadius, float TopRadius, float Height, int32 RadialSteps, int32 HeightSteps, bool bCapped, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendCapsule(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, float LineLength, int32 HemisphereSteps, int32 CircleSteps, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AppendBox(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, float DimensionZ, int32 StepsX, int32 StepsY, int32 StepsZ, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions
class UGeometryScriptLibrary_MeshQueryFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshQueryFunctions* GetDefaultObj();

	void IsValidVertexID(class UDynamicMesh* TargetMesh, int32 VertexID, bool ReturnValue);
	void IsValidTriangleID(class UDynamicMesh* TargetMesh, int32 TriangleID, bool ReturnValue);
	void GetVertexPosition(class UDynamicMesh* TargetMesh, int32 VertexID, bool bIsValidVertex, const struct FVector& ReturnValue);
	void GetVertexCount(class UDynamicMesh* TargetMesh, int32 ReturnValue);
	void GetUVSetBoundingBox(class UDynamicMesh* TargetMesh, int32 UvSetIndex, bool bIsValidUVSet, bool bUVSetIsEmpty, const struct FBox2D& ReturnValue);
	void GetTriangleVertexColors(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct FLinearColor& Color1, const struct FLinearColor& Color2, const struct FLinearColor& Color3, bool bTriHasValidVertexColors, class UDynamicMesh* ReturnValue);
	void GetTriangleUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, const struct FVector2D& UV1, const struct FVector2D& UV2, const struct FVector2D& UV3, bool bHaveValidUVs);
	void GetTrianglePositions(class UDynamicMesh* TargetMesh, int32 TriangleID, bool bIsValidTriangle, const struct FVector& Vertex1, const struct FVector& Vertex2, const struct FVector& Vertex3);
	void GetTriangleNormalTangents(class UDynamicMesh* TargetMesh, int32 TriangleID, bool bTriHasValidElements, const struct FGeometryScriptTriangle& Normals, const struct FGeometryScriptTriangle& Tangents, const struct FGeometryScriptTriangle& BiTangents, class UDynamicMesh* ReturnValue);
	void GetTriangleNormals(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct FVector& Normal1, const struct FVector& Normal2, const struct FVector& Normal3, bool bTriHasValidNormals, class UDynamicMesh* ReturnValue);
	void GetTriangleIndices(class UDynamicMesh* TargetMesh, int32 TriangleID, bool bIsValidTriangle, const struct FIntVector& ReturnValue);
	void GetTriangleFaceNormal(class UDynamicMesh* TargetMesh, int32 TriangleID, bool bIsValidTriangle, const struct FVector& ReturnValue);
	void GetNumVertexIDs(class UDynamicMesh* TargetMesh, int32 ReturnValue);
	void GetNumUVSets(class UDynamicMesh* TargetMesh, int32 ReturnValue);
	void GetNumTriangleIDs(class UDynamicMesh* TargetMesh, int32 ReturnValue);
	void GetNumOpenBorderLoops(class UDynamicMesh* TargetMesh, bool bAmbiguousTopologyFound, int32 ReturnValue);
	void GetNumOpenBorderEdges(class UDynamicMesh* TargetMesh, int32 ReturnValue);
	void GetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh, int32 ReturnValue);
	void GetNumConnectedComponents(class UDynamicMesh* TargetMesh, int32 ReturnValue);
	void GetMeshVolumeArea(class UDynamicMesh* TargetMesh, float SurfaceArea, float Volume);
	void GetMeshInfoString(class UDynamicMesh* TargetMesh, const class FString& ReturnValue);
	void GetMeshHasAttributeSet(class UDynamicMesh* TargetMesh, bool ReturnValue);
	void GetMeshBoundingBox(class UDynamicMesh* TargetMesh, const struct FBox& ReturnValue);
	void GetIsDenseMesh(class UDynamicMesh* TargetMesh, bool ReturnValue);
	void GetIsClosedMesh(class UDynamicMesh* TargetMesh, bool ReturnValue);
	void GetInterpolatedTriangleVertexColor(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct FVector& BarycentricCoords, const struct FLinearColor& DefaultColor, bool bTriHasValidVertexColors, const struct FLinearColor& InterpolatedColor, class UDynamicMesh* ReturnValue);
	void GetInterpolatedTriangleUV(class UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, const struct FVector& BarycentricCoords, bool bTriHasValidUVs, const struct FVector2D& InterpolatedUV, class UDynamicMesh* ReturnValue);
	void GetInterpolatedTrianglePosition(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct FVector& BarycentricCoords, bool bIsValidTriangle, const struct FVector& InterpolatedPosition, class UDynamicMesh* ReturnValue);
	void GetInterpolatedTriangleNormalTangents(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct FVector& BarycentricCoords, bool bTriHasValidElements, const struct FVector& InterpolatedNormal, const struct FVector& InterpolatedTangent, const struct FVector& InterpolatedBiTangent, class UDynamicMesh* ReturnValue);
	void GetInterpolatedTriangleNormal(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct FVector& BarycentricCoords, bool bTriHasValidNormals, const struct FVector& InterpolatedNormal, class UDynamicMesh* ReturnValue);
	void GetHasVertexIDGaps(class UDynamicMesh* TargetMesh, bool ReturnValue);
	void GetHasVertexColors(class UDynamicMesh* TargetMesh, bool ReturnValue);
	void GetHasTriangleNormals(class UDynamicMesh* TargetMesh, bool ReturnValue);
	void GetHasTriangleIDGaps(class UDynamicMesh* TargetMesh, bool ReturnValue);
	void GetHasPolygroups(class UDynamicMesh* TargetMesh, bool ReturnValue);
	void GetHasMaterialIDs(class UDynamicMesh* TargetMesh, bool ReturnValue);
	void GetAllVertexPositions(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& PositionList, bool bSkipGaps, bool bHasVertexIDGaps, class UDynamicMesh* ReturnValue);
	void GetAllVertexIDs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& VertexIDList, bool bHasVertexIDGaps, class UDynamicMesh* ReturnValue);
	void GetAllTriangleIndices(class UDynamicMesh* TargetMesh, const struct FGeometryScriptTriangleList& TriangleList, bool bSkipGaps, bool bHasTriangleIDGaps, class UDynamicMesh* ReturnValue);
	void GetAllTriangleIDs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleIDList, bool bHasTriangleIDGaps, class UDynamicMesh* ReturnValue);
	void ComputeTriangleBarycentricCoords(class UDynamicMesh* TargetMesh, int32 TriangleID, bool bIsValidTriangle, const struct FVector& Point, const struct FVector& Vertex1, const struct FVector& Vertex2, const struct FVector& Vertex3, const struct FVector& BarycentricCoords, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions
class UGeometryScriptLibrary_RemeshingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_RemeshingFunctions* GetDefaultObj();

	void ApplyUniformRemesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptRemeshOptions& RemeshOptions, const struct FGeometryScriptUniformRemeshOptions& UniformOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions
class UGeometryScriptLibrary_MeshRepairFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshRepairFunctions* GetDefaultObj();

	void WeldMeshEdges(class UDynamicMesh* TargetMesh, const struct FGeometryScriptWeldEdgesOptions& WeldOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void SplitMeshBowties(class UDynamicMesh* TargetMesh, bool bMeshBowties, bool bAttributeBowties, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ResolveMeshTJunctions(class UDynamicMesh* TargetMesh, const struct FGeometryScriptResolveTJunctionOptions& ResolveOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void RepairMeshDegenerateGeometry(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDegenerateTriangleOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void RemoveSmallComponents(class UDynamicMesh* TargetMesh, const struct FGeometryScriptRemoveSmallComponentOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void RemoveHiddenTriangles(class UDynamicMesh* TargetMesh, const struct FGeometryScriptRemoveHiddenTrianglesOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void FillAllMeshHoles(class UDynamicMesh* TargetMesh, const struct FGeometryScriptFillHolesOptions& FillOptions, int32 NumFilledHoles, int32 NumFailedHoleFills, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void CompactMesh(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions
class UGeometryScriptLibrary_MeshSamplingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSamplingFunctions* GetDefaultObj();

	void ComputeVertexWeightedPointSampling(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshPointSamplingOptions& Options, const struct FGeometryScriptNonUniformPointSamplingOptions& NonUniformOptions, const struct FGeometryScriptScalarList& VertexWeights, const TArray<struct FTransform>& Samples, const TArray<double>& SampleRadii, const struct FGeometryScriptIndexList& TriangleIDs, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ComputePointSampling(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshPointSamplingOptions& Options, const TArray<struct FTransform>& Samples, const struct FGeometryScriptIndexList& TriangleIDs, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ComputeNonUniformPointSampling(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshPointSamplingOptions& Options, const struct FGeometryScriptNonUniformPointSamplingOptions& NonUniformOptions, const TArray<struct FTransform>& Samples, const TArray<double>& SampleRadii, const struct FGeometryScriptIndexList& TriangleIDs, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions
class UGeometryScriptLibrary_MeshSelectionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSelectionFunctions* GetDefaultObj();

	void SelectMeshElementsWithPlane(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& PlaneOrigin, const struct FVector& PlaneNormal, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints, class UDynamicMesh* ReturnValue);
	void SelectMeshElementsInSphere(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& SphereOrigin, double SphereRadius, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints, class UDynamicMesh* ReturnValue);
	void SelectMeshElementsInsideMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* SelectionMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FTransform& SelectionMeshTransform, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, double ShellDistance, double WindingThreshold, int32 MinNumTrianglePoints, class UDynamicMesh* ReturnValue);
	void SelectMeshElementsInBox(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FBox& Box, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints, class UDynamicMesh* ReturnValue);
	void SelectMeshElementsByNormalAngle(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& Normal, double MaxAngleDeg, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints, class UDynamicMesh* ReturnValue);
	void InvertMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptMeshSelection& NewSelection, bool bOnlyToConnected, class UDynamicMesh* ReturnValue);
	void GetMeshSelectionInfo(const struct FGeometryScriptMeshSelection& Selection, enum class EGeometryScriptMeshSelectionType SelectionType, int32 NumSelected);
	void ExpandMeshSelectionToConnected(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptMeshSelection& NewSelection, enum class EGeometryScriptTopologyConnectionType ConnectionType, class UDynamicMesh* ReturnValue);
	void ExpandContractMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptMeshSelection& NewSelection, int32 Iterations, bool bContract, bool bOnlyExpandToFaceNeighbours, class UDynamicMesh* ReturnValue);
	void DebugPrintMeshSelection(const struct FGeometryScriptMeshSelection& Selection, bool bDisable);
	void CreateSelectAllMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, enum class EGeometryScriptMeshSelectionType SelectionType, class UDynamicMesh* ReturnValue);
	void ConvertMeshSelectionToIndexList(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptIndexList& IndexList, enum class EGeometryScriptIndexType ResultListType, enum class EGeometryScriptIndexType ConvertToType, class UDynamicMesh* ReturnValue);
	void ConvertMeshSelectionToIndexArray(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const TArray<int32>& IndexArray, enum class EGeometryScriptMeshSelectionType SelectionType, class UDynamicMesh* ReturnValue);
	void ConvertMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& FromSelection, const struct FGeometryScriptMeshSelection& ToSelection, enum class EGeometryScriptMeshSelectionType NewType, bool bAllowPartialInclusion, class UDynamicMesh* ReturnValue);
	void ConvertIndexSetToMeshSelection(class UDynamicMesh* TargetMesh, TSet<int32> IndexSet, enum class EGeometryScriptMeshSelectionType SelectionType, const struct FGeometryScriptMeshSelection& Selection, class UDynamicMesh* ReturnValue);
	void ConvertIndexListToMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& IndexList, enum class EGeometryScriptMeshSelectionType SelectionType, const struct FGeometryScriptMeshSelection& Selection, class UDynamicMesh* ReturnValue);
	void ConvertIndexArrayToMeshSelection(class UDynamicMesh* TargetMesh, const TArray<int32>& IndexArray, enum class EGeometryScriptMeshSelectionType SelectionType, const struct FGeometryScriptMeshSelection& Selection, class UDynamicMesh* ReturnValue);
	void CombineMeshSelections(const struct FGeometryScriptMeshSelection& SelectionA, const struct FGeometryScriptMeshSelection& SelectionB, const struct FGeometryScriptMeshSelection& ResultSelection, enum class EGeometryScriptCombineSelectionMode CombineMode);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions
class UGeometryScriptLibrary_MeshSelectionQueryFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSelectionQueryFunctions* GetDefaultObj();

	void GetMeshSelectionBoundingBox(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FBox& SelectionBounds, bool bIsEmpty, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void GetMeshSelectionBoundaryLoops(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const TArray<struct FGeometryScriptIndexList>& IndexLoops, const TArray<struct FGeometryScriptPolyPath>& PathLoops, int32 NumLoops, bool bFoundErrors, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions
class UGeometryScriptLibrary_MeshSimplifyFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSimplifyFunctions* GetDefaultObj();

	void ApplySimplifyToVertexCount(class UDynamicMesh* TargetMesh, int32 Vertexcount, const struct FGeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplySimplifyToTriangleCount(class UDynamicMesh* TargetMesh, int32 TriangleCount, const struct FGeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplySimplifyToTolerance(class UDynamicMesh* TargetMesh, float Tolerance, const struct FGeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplySimplifyToPolygroupTopology(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPolygroupSimplifyOptions& Options, const struct FGeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplySimplifyToPlanar(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPlanarSimplifyOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial
class UGeometryScriptLibrary_MeshSpatial : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSpatial* GetDefaultObj();

	void ResetBVH(const struct FGeometryScriptDynamicMeshBVH& ResetBVH);
	void RebuildBVHForMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& UpdateBVH, bool bOnlyIfInvalid, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void IsPointInsideMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& QueryBVH, const struct FVector& QueryPoint, const struct FGeometryScriptSpatialQueryOptions& Options, bool bIsInside, enum class EGeometryScriptContainmentOutcomePins Outcome, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void IsBVHValidForMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& TestBVH, bool bIsValid, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void FindNearestRayIntersectionWithMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& QueryBVH, const struct FVector& RayOrigin, const struct FVector& RayDirection, const struct FGeometryScriptSpatialQueryOptions& Options, const struct FGeometryScriptRayHitResult& HitResult, enum class EGeometryScriptSearchOutcomePins Outcome, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void FindNearestPointOnMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& QueryBVH, const struct FVector& QueryPoint, const struct FGeometryScriptSpatialQueryOptions& Options, const struct FGeometryScriptTrianglePoint& NearestResult, enum class EGeometryScriptSearchOutcomePins Outcome, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void BuildBVHForMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& OutputBVH, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions
class UGeometryScriptLibrary_MeshSubdivideFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSubdivideFunctions* GetDefaultObj();

	void ApplyUniformTessellation(class UDynamicMesh* TargetMesh, int32 TessellationLevel, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplySelectiveTessellation(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptSelectiveTessellateOptions& Options, int32 TessellationLevel, enum class ESelectiveTessellatePatternType PatternType, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyPNTessellation(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPNTessellateOptions& Options, int32 TessellationLevel, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions
class UGeometryScriptLibrary_MeshTransformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshTransformFunctions* GetDefaultObj();

	void TranslatePivotToLocation(class UDynamicMesh* TargetMesh, const struct FVector& PivotLocation, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void TranslateMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& Translation, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void TranslateMesh(class UDynamicMesh* TargetMesh, const struct FVector& Translation, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void TransformMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FTransform& Transform, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void TransformMesh(class UDynamicMesh* TargetMesh, const struct FTransform& Transform, bool bFixOrientationForNegativeScale, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ScaleMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& Scale, const struct FVector& ScaleOrigin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ScaleMesh(class UDynamicMesh* TargetMesh, const struct FVector& Scale, const struct FVector& ScaleOrigin, bool bFixOrientationForNegativeScale, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void RotateMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FRotator& Rotation, const struct FVector& RotationOrigin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void RotateMesh(class UDynamicMesh* TargetMesh, const struct FRotator& Rotation, const struct FVector& RotationOrigin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions
class UGeometryScriptLibrary_MeshUVFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshUVFunctions* GetDefaultObj();

	void TranslateMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FVector2D& Translation, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void SetNumUVSets(class UDynamicMesh* TargetMesh, int32 NumUVSets, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void SetMeshUVsFromPlanarProjection(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FTransform& PlaneTransform, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void SetMeshUVsFromCylinderProjection(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FTransform& CylinderTransform, const struct FGeometryScriptMeshSelection& Selection, float SplitAngle, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void SetMeshUVsFromBoxProjection(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FTransform& BoxTransform, const struct FGeometryScriptMeshSelection& Selection, int32 MinIslandTriCount, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void SetMeshTriangleUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, const struct FGeometryScriptUVTriangle& UVs, bool bIsValidTriangle, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue);
	void ScaleMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FVector2D& Scale, const struct FVector2D& ScaleOrigin, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void RotateMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, float RotationAngle, const struct FVector2D& RotationOrigin, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void RepackMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FGeometryScriptRepackUVsOptions& RepackOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void RecomputeMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FGeometryScriptRecomputeUVsOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void GetMeshUVSizeInfo(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FGeometryScriptMeshSelection& Selection, double MeshArea, double UVArea, const struct FBox& MeshBounds, const struct FBox2D& UVBounds, bool bIsValidUVSet, bool bFoundUnsetUVs, bool bOnlyIncludeValidUVTris, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void GetMeshPerVertexUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FGeometryScriptUVList& UVList, bool bIsValidUVSet, bool bHasVertexIDGaps, bool bHasSplitUVs, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void CopyUVSet(class UDynamicMesh* TargetMesh, int32 FromUVSet, int32 ToUVSet, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void CopyMeshUVLayerToMesh(class UDynamicMesh* CopyFromMesh, int32 UvSetIndex, class UDynamicMesh* CopyToUVMesh, class UDynamicMesh* CopyToUVMeshOut, bool bInvalidTopology, bool bIsValidUVSet, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void CopyMeshToMeshUVLayer(class UDynamicMesh* CopyFromUVMesh, int32 ToUVSetIndex, class UDynamicMesh* CopyToMesh, class UDynamicMesh* CopyToMeshOut, bool bFoundTopologyErrors, bool bIsValidUVSet, bool bOnlyUVPositions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AutoGenerateXAtlasMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FGeometryScriptXAtlasOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void AutoGeneratePatchBuilderMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FGeometryScriptPatchBuilderOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions
class UGeometryScriptLibrary_MeshVertexColorFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshVertexColorFunctions* GetDefaultObj();

	void SetMeshSelectionVertexColor(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FLinearColor& Color, const struct FGeometryScriptColorFlags& Flags, bool bCreateColorSeam, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void SetMeshPerVertexColors(class UDynamicMesh* TargetMesh, const struct FGeometryScriptColorList& VertexColorList, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void SetMeshConstantVertexColor(class UDynamicMesh* TargetMesh, const struct FLinearColor& Color, const struct FGeometryScriptColorFlags& Flags, bool bClearExisting, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void GetMeshPerVertexColors(class UDynamicMesh* TargetMesh, const struct FGeometryScriptColorList& ColorList, bool bIsValidColorSet, bool bHasVertexIDGaps, bool bBlendSplitVertexValues, class UDynamicMesh* ReturnValue);
	void ConvertMeshVertexColorsSRGBToLinear(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ConvertMeshVertexColorsLinearToSRGB(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions
class UGeometryScriptLibrary_MeshVoxelFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshVoxelFunctions* GetDefaultObj();

	void ApplyMeshSolidify(class UDynamicMesh* TargetMesh, const struct FGeometryScriptSolidifyOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void ApplyMeshMorphology(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMorphologyOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions
class UGeometryScriptLibrary_PolyPathFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_PolyPathFunctions* GetDefaultObj();

	void SampleSplineToTransforms(class USplineComponent* Spline, const TArray<struct FTransform>& Frames, const TArray<double>& FrameTimes, const struct FGeometryScriptSplineSamplingOptions& SamplingOptions, const struct FTransform& RelativeTransform, bool bIncludeScale);
	void GetPolyPathVertex(const struct FGeometryScriptPolyPath& PolyPath, int32 Index, bool bIsValidIndex, const struct FVector& ReturnValue);
	void GetPolyPathTangent(const struct FGeometryScriptPolyPath& PolyPath, int32 Index, bool bIsValidIndex, const struct FVector& ReturnValue);
	void GetPolyPathNumVertices(const struct FGeometryScriptPolyPath& PolyPath, int32 ReturnValue);
	void GetPolyPathLastIndex(const struct FGeometryScriptPolyPath& PolyPath, int32 ReturnValue);
	void GetPolyPathArcLength(const struct FGeometryScriptPolyPath& PolyPath, double ReturnValue);
	void GetNearestVertexIndex(const struct FGeometryScriptPolyPath& PolyPath, const struct FVector& Point, int32 ReturnValue);
	void FlattenTo2DOnAxis(const struct FGeometryScriptPolyPath& PolyPath, enum class EGeometryScriptAxis DropAxis, const struct FGeometryScriptPolyPath& ReturnValue);
	void CreateCirclePath3D(const struct FTransform& Transform, float Radius, int32 NumPoints, const struct FGeometryScriptPolyPath& ReturnValue);
	void CreateCirclePath2D(const struct FVector2D& Center, float Radius, int32 NumPoints, const struct FGeometryScriptPolyPath& ReturnValue);
	void CreateArcPath3D(const struct FTransform& Transform, float Radius, int32 NumPoints, float StartAngle, float EndAngle, const struct FGeometryScriptPolyPath& ReturnValue);
	void CreateArcPath2D(const struct FVector2D& Center, float Radius, int32 NumPoints, float StartAngle, float EndAngle, const struct FGeometryScriptPolyPath& ReturnValue);
	void ConvertSplineToPolyPath(class USplineComponent* Spline, const struct FGeometryScriptPolyPath& PolyPath, const struct FGeometryScriptSplineSamplingOptions& SamplingOptions);
	void ConvertPolyPathToArrayOfVector2D(const struct FGeometryScriptPolyPath& PolyPath, const TArray<struct FVector2D>& VertexArray);
	void ConvertPolyPathToArray(const struct FGeometryScriptPolyPath& PolyPath, const TArray<struct FVector>& VertexArray);
	void ConvertArrayToPolyPath(const TArray<struct FVector>& VertexArray, const struct FGeometryScriptPolyPath& PolyPath);
	void ConvertArrayOfVector2DToPolyPath(const TArray<struct FVector2D>& VertexArray, const struct FGeometryScriptPolyPath& PolyPath);
	void Conv_GeometryScriptPolyPathToArrayOfVector2D(const struct FGeometryScriptPolyPath& PolyPath, const TArray<struct FVector2D>& ReturnValue);
	void Conv_GeometryScriptPolyPathToArray(const struct FGeometryScriptPolyPath& PolyPath, const TArray<struct FVector>& ReturnValue);
	void Conv_ArrayToGeometryScriptPolyPath(const TArray<struct FVector>& PathVertices, const struct FGeometryScriptPolyPath& ReturnValue);
	void Conv_ArrayOfVector2DToGeometryScriptPolyPath(const TArray<struct FVector2D>& PathVertices, const struct FGeometryScriptPolyPath& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions
class UGeometryScriptLibrary_SceneUtilityFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_SceneUtilityFunctions* GetDefaultObj();

	void SetComponentMaterialList(class UPrimitiveComponent* Component, const TArray<class UMaterialInterface*>& MaterialList, class UGeometryScriptDebug* Debug);
	void CreateDynamicMeshPool(class UDynamicMeshPool* ReturnValue);
	void CopyMeshFromComponent(class USceneComponent* Component, class UDynamicMesh* ToDynamicMesh, const struct FGeometryScriptCopyMeshFromComponentOptions& Options, bool bTransformToWorld, const struct FTransform& LocalToWorld, enum class EGeometryScriptOutcomePins Outcome, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
	void CopyCollisionMeshesFromObject(class UObject* FromObject, class UDynamicMesh* ToDynamicMesh, bool bTransformToWorld, const struct FTransform& LocalToWorld, enum class EGeometryScriptOutcomePins Outcome, bool bUseComplexCollision, int32 SphereResolution, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions
class UGeometryScriptLibrary_TransformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_TransformFunctions* GetDefaultObj();

	void MakeTransformFromZAxis(const struct FVector& Location, const struct FVector& ZAxis, const struct FTransform& ReturnValue);
	void MakeTransformFromAxes(const struct FVector& Location, const struct FVector& ZAxis, const struct FVector& TangentAxis, bool bTangentIsX, const struct FTransform& ReturnValue);
	void GetTransformAxisVector(const struct FTransform& Transform, enum class EGeometryScriptAxis Axis, const struct FVector& ReturnValue);
	void GetTransformAxisRay(const struct FTransform& Transform, enum class EGeometryScriptAxis Axis, const struct FRay& ReturnValue);
	void GetTransformAxisPlane(const struct FTransform& Transform, enum class EGeometryScriptAxis Axis, const struct FPlane& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_RayFunctions
class UGeometryScriptLibrary_RayFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_RayFunctions* GetDefaultObj();

	void MakeRayFromPoints(const struct FVector& A, const struct FVector& B, const struct FRay& ReturnValue);
	void MakeRayFromPointDirection(const struct FVector& Origin, const struct FVector& Direction, bool bDirectionIsNormalized, const struct FRay& ReturnValue);
	void GetTransformedRay(const struct FRay& Ray, const struct FTransform& Transform, bool bInvert, const struct FRay& ReturnValue);
	void GetRayStartEnd(const struct FRay& Ray, double StartDistance, double EndDistance, const struct FVector& StartPoint, const struct FVector& EndPoint);
	void GetRaySphereIntersection(const struct FRay& Ray, const struct FVector& SphereCenter, double SphereRadius, double Distance1, double Distance2, bool ReturnValue);
	void GetRaySegmentClosestPoint(const struct FRay& Ray, const struct FVector& SegStartPoint, const struct FVector& SegEndPoint, double RayParameter, const struct FVector& RayPoint, const struct FVector& SegPoint, double ReturnValue);
	void GetRayPointDistance(const struct FRay& Ray, const struct FVector& Point, double ReturnValue);
	void GetRayPoint(const struct FRay& Ray, double Distance, const struct FVector& ReturnValue);
	void GetRayPlaneIntersection(const struct FRay& Ray, const struct FPlane& Plane, double HitDistance, bool ReturnValue);
	void GetRayParameter(const struct FRay& Ray, const struct FVector& Point, double ReturnValue);
	void GetRayLineClosestPoint(const struct FRay& Ray, const struct FVector& LineOrigin, const struct FVector& LineDirection, double RayParameter, const struct FVector& RayPoint, double LineParameter, const struct FVector& LinePoint, double ReturnValue);
	void GetRayClosestPoint(const struct FRay& Ray, const struct FVector& Point, const struct FVector& ReturnValue);
	void GetRayBoxIntersection(const struct FRay& Ray, const struct FBox& Box, double HitDistance, bool ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions
class UGeometryScriptLibrary_BoxFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_BoxFunctions* GetDefaultObj();

	void TestPointInsideBox(const struct FBox& Box, const struct FVector& Point, bool bConsiderOnBoxAsInside, bool ReturnValue);
	void TestBoxSphereIntersection(const struct FBox& Box, const struct FVector& SphereCenter, double SphereRadius, bool ReturnValue);
	void TestBoxBoxIntersection(const struct FBox& Box1, const struct FBox& Box2, bool ReturnValue);
	void MakeBoxFromCenterSize(const struct FVector& Center, const struct FVector& Dimensions, const struct FBox& ReturnValue);
	void MakeBoxFromCenterExtents(const struct FVector& Center, const struct FVector& Extents, const struct FBox& ReturnValue);
	void GetTransformedBox(const struct FBox& Box, const struct FTransform& Transform, const struct FBox& ReturnValue);
	void GetExpandedBox(const struct FBox& Box, const struct FVector& ExpandBy, const struct FBox& ReturnValue);
	void GetBoxVolumeArea(const struct FBox& Box, double Volume, double SurfaceArea);
	void GetBoxPointDistance(const struct FBox& Box, const struct FVector& Point, double ReturnValue);
	void GetBoxFaceCenter(const struct FBox& Box, int32 FaceIndex, const struct FVector& FaceNormal, const struct FVector& ReturnValue);
	void GetBoxCorner(const struct FBox& Box, int32 CornerIndex, const struct FVector& ReturnValue);
	void GetBoxCenterSize(const struct FBox& Box, const struct FVector& Center, const struct FVector& Dimensions);
	void GetBoxBoxDistance(const struct FBox& Box1, const struct FBox& Box2, double ReturnValue);
	void FindClosestPointOnBox(const struct FBox& Box, const struct FVector& Point, bool bIsInside, const struct FVector& ReturnValue);
	void FindBoxBoxIntersection(const struct FBox& Box1, const struct FBox& Box2, bool bIsIntersecting, const struct FBox& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions
class UGeometryScriptLibrary_TextureMapFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_TextureMapFunctions* GetDefaultObj();

	void SampleTextureRenderTarget2DAtUVPositions(const struct FGeometryScriptUVList& UVList, class UTextureRenderTarget2D* Texture, const struct FGeometryScriptSampleTextureOptions& SampleOptions, const struct FGeometryScriptColorList& ColorList, class UGeometryScriptDebug* Debug);
	void SampleTexture2DAtUVPositions(const struct FGeometryScriptUVList& UVList, class UTexture2D* Texture, const struct FGeometryScriptSampleTextureOptions& SampleOptions, const struct FGeometryScriptColorList& ColorList, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions
class UGeometryScriptLibrary_VectorMathFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_VectorMathFunctions* GetDefaultObj();

	void VectorToScalar(const struct FGeometryScriptVectorList& VectorList, double ConstantX, double ConstantY, double ConstantZ, const struct FGeometryScriptScalarList& ReturnValue);
	void VectorNormalizeInPlace(const struct FGeometryScriptVectorList& VectorList, const struct FVector& SetOnFailure);
	void VectorLength(const struct FGeometryScriptVectorList& VectorList, const struct FGeometryScriptScalarList& ReturnValue);
	void VectorDot(const struct FGeometryScriptVectorList& VectorListA, const struct FGeometryScriptVectorList& VectorListB, const struct FGeometryScriptScalarList& ReturnValue);
	void VectorCross(const struct FGeometryScriptVectorList& VectorListA, const struct FGeometryScriptVectorList& VectorListB, const struct FGeometryScriptVectorList& ReturnValue);
	void VectorBlendInPlace(const struct FGeometryScriptVectorList& VectorListA, const struct FGeometryScriptVectorList& VectorListB, double ConstantA, double ConstantB);
	void VectorBlend(const struct FGeometryScriptVectorList& VectorListA, const struct FGeometryScriptVectorList& VectorListB, double ConstantA, double ConstantB, const struct FGeometryScriptVectorList& ReturnValue);
	void ScalarVectorMultiplyInPlace(const struct FGeometryScriptScalarList& ScalarList, const struct FGeometryScriptVectorList& VectorList, double ScalarMultiplier);
	void ScalarVectorMultiply(const struct FGeometryScriptScalarList& ScalarList, const struct FGeometryScriptVectorList& VectorList, double ScalarMultiplier, const struct FGeometryScriptVectorList& ReturnValue);
	void ScalarMultiplyInPlace(const struct FGeometryScriptScalarList& ScalarListA, const struct FGeometryScriptScalarList& ScalarListB, double ConstantMultiplier);
	void ScalarMultiply(const struct FGeometryScriptScalarList& ScalarListA, const struct FGeometryScriptScalarList& ScalarListB, double ConstantMultiplier, const struct FGeometryScriptScalarList& ReturnValue);
	void ScalarInvertInPlace(const struct FGeometryScriptScalarList& ScalarList, double Numerator, double SetOnFailure, double Epsilon);
	void ScalarInvert(const struct FGeometryScriptScalarList& ScalarList, double Numerator, double SetOnFailure, double Epsilon, const struct FGeometryScriptScalarList& ReturnValue);
	void ScalarBlendInPlace(const struct FGeometryScriptScalarList& ScalarListA, const struct FGeometryScriptScalarList& ScalarListB, double ConstantA, double ConstantB);
	void ScalarBlend(const struct FGeometryScriptScalarList& ScalarListA, const struct FGeometryScriptScalarList& ScalarListB, double ConstantA, double ConstantB, const struct FGeometryScriptScalarList& ReturnValue);
	void ConstantVectorMultiplyInPlace(double Constant, const struct FGeometryScriptVectorList& VectorList);
	void ConstantVectorMultiply(double Constant, const struct FGeometryScriptVectorList& VectorList, const struct FGeometryScriptVectorList& ReturnValue);
	void ConstantScalarMultiplyInPlace(double Constant, const struct FGeometryScriptScalarList& ScalarList);
	void ConstantScalarMultiply(double Constant, const struct FGeometryScriptScalarList& ScalarList, const struct FGeometryScriptScalarList& ReturnValue);
};

}


