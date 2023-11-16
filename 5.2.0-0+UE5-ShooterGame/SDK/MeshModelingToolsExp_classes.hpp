#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x140 - 0xA8)
// Class MeshModelingToolsExp.BakeInputMeshProperties
class UBakeInputMeshProperties : public UInteractiveToolPropertySet
{
public:
	class UStaticMesh*                           TargetStaticMesh;                                  // 0xA8(0x8)(ZeroConstructor)
	class USkeletalMesh*                         TargetSkeletalMesh;                                // 0xB0(0x8)(ZeroConstructor)
	class AActor*                                TargetDynamicMesh;                                 // 0xB8(0x8)(ZeroConstructor)
	class FString                                TargetUVLayer;                                     // 0xC0(0x10)(None)
	bool                                         bHasTargetUVLayer;                                 // 0xD0(0x1)(None)
	uint8                                        Pad_1B40[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           SourceStaticMesh;                                  // 0xD8(0x8)(ZeroConstructor)
	class USkeletalMesh*                         SourceSkeletalMesh;                                // 0xE0(0x8)(ZeroConstructor)
	class AActor*                                SourceDynamicMesh;                                 // 0xE8(0x8)(ZeroConstructor)
	bool                                         bHideSourceMesh;                                   // 0xF0(0x1)(None)
	uint8                                        Pad_1B42[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            SourceNormalMap;                                   // 0xF8(0x8)(ZeroConstructor)
	class FString                                SourceNormalMapUVLayer;                            // 0x100(0x10)(None)
	enum class EBakeNormalSpace                  SourceNormalSpace;                                 // 0x110(0x4)(None)
	bool                                         bHasSourceNormalMap;                               // 0x114(0x1)(None)
	uint8                                        Pad_1B43[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ProjectionDistance;                                // 0x118(0x4)(None)
	bool                                         bProjectionInWorldSpace;                           // 0x11C(0x1)(None)
	uint8                                        Pad_1B44[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        TargetUVLayerNamesList;                            // 0x120(0x10)(None)
	TArray<class FString>                        SourceUVLayerNamesList;                            // 0x130(0x10)(None)

	static class UClass* StaticClass();
	static class UBakeInputMeshProperties* GetDefaultObj();

	void GetTargetUVLayerNamesFunc(const TArray<class FString>& ReturnValue);
	void GetSourceUVLayerNamesFunc(const TArray<class FString>& ReturnValue);
};

// 0x0 (0xA8 - 0xA8)
// Class MeshModelingToolsExp.BakeNormalMapToolProperties
class UBakeNormalMapToolProperties : public UInteractiveToolPropertySet
{
public:

	static class UClass* StaticClass();
	static class UBakeNormalMapToolProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.BakeOcclusionMapToolProperties
class UBakeOcclusionMapToolProperties : public UInteractiveToolPropertySet
{
public:
	int32                                        OcclusionRays;                                     // 0xA8(0x4)(None)
	float                                        MaxDistance;                                       // 0xAC(0x4)(None)
	float                                        SpreadAngle;                                       // 0xB0(0x4)(None)
	float                                        BiasAngle;                                         // 0xB4(0x4)(None)

	static class UClass* StaticClass();
	static class UBakeOcclusionMapToolProperties* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class MeshModelingToolsExp.BakeCurvatureMapToolProperties
class UBakeCurvatureMapToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EBakeCurvatureTypeMode            CurvatureType;                                     // 0xA8(0x4)(None)
	enum class EBakeCurvatureColorMode           ColorMapping;                                      // 0xAC(0x4)(None)
	float                                        ColorRangeMultiplier;                              // 0xB0(0x4)(None)
	float                                        MinRangeMultiplier;                                // 0xB4(0x4)(None)
	enum class EBakeCurvatureClampMode           Clamping;                                          // 0xB8(0x4)(None)
	uint8                                        Pad_1B48[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBakeCurvatureMapToolProperties* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class MeshModelingToolsExp.BakeTexture2DProperties
class UBakeTexture2DProperties : public UInteractiveToolPropertySet
{
public:
	class UTexture2D*                            SourceTexture;                                     // 0xA8(0x8)(ZeroConstructor)
	class FString                                UVLayer;                                           // 0xB0(0x10)(None)
	TArray<class FString>                        UVLayerNamesList;                                  // 0xC0(0x10)(None)

	static class UClass* StaticClass();
	static class UBakeTexture2DProperties* GetDefaultObj();

	void GetUVLayerNamesFunc(const TArray<class FString>& ReturnValue);
};

// 0x40 (0xE8 - 0xA8)
// Class MeshModelingToolsExp.BakeMultiTexture2DProperties
class UBakeMultiTexture2DProperties : public UInteractiveToolPropertySet
{
public:
	TArray<class UTexture2D*>                    MaterialIDSourceTextures;                          // 0xA8(0x10)(ZeroConstructor)
	class FString                                UVLayer;                                           // 0xB8(0x10)(None)
	TArray<class FString>                        UVLayerNamesList;                                  // 0xC8(0x10)(None)
	TArray<class UTexture2D*>                    AllSourceTextures;                                 // 0xD8(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBakeMultiTexture2DProperties* GetDefaultObj();

	void GetUVLayerNamesFunc(const TArray<class FString>& ReturnValue);
};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.BakeVisualizationProperties
class UBakeVisualizationProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bPreviewAsMaterial;                                // 0xA8(0x1)(None)
	uint8                                        Pad_1B57[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Brightness;                                        // 0xAC(0x4)(None)
	float                                        AOMultiplier;                                      // 0xB0(0x4)(None)
	uint8                                        Pad_1B5A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBakeVisualizationProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.ExtrudeMeshSelectionToolBuilder
class UExtrudeMeshSelectionToolBuilder : public USingleTargetWithSelectionToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UExtrudeMeshSelectionToolBuilder* GetDefaultObj();

};

// 0x48 (0xF0 - 0xA8)
// Class MeshModelingToolsExp.ExtrudeMeshSelectionToolProperties
class UExtrudeMeshSelectionToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EExtrudeMeshSelectionInteractionMode InputMode;                                         // 0xA8(0x1)(None)
	uint8                                        Pad_1B65[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ExtrudeDistance;                                   // 0xB0(0x8)(None)
	enum class EExtrudeMeshSelectionRegionModifierMode RegionMode;                                        // 0xB8(0x1)(None)
	uint8                                        Pad_1B67[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumSubdivisions;                                   // 0xBC(0x4)(None)
	double                                       CreaseAngle;                                       // 0xC0(0x8)(None)
	double                                       RaycastMaxDistance;                                // 0xC8(0x8)(None)
	bool                                         bShellsToSolids;                                   // 0xD0(0x1)(None)
	bool                                         bInferGroupsFromNbrs;                              // 0xD1(0x1)(None)
	bool                                         bGroupPerSubdivision;                              // 0xD2(0x1)(None)
	bool                                         bReplaceSelectionGroups;                           // 0xD3(0x1)(None)
	uint8                                        Pad_1B6A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       UVScale;                                           // 0xD8(0x8)(None)
	bool                                         bUVIslandPerGroup;                                 // 0xE0(0x1)(None)
	bool                                         bInferMaterialID;                                  // 0xE1(0x1)(None)
	uint8                                        Pad_1B6C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SetMaterialID;                                     // 0xE4(0x4)(None)
	bool                                         bShowInputMaterials;                               // 0xE8(0x1)(None)
	uint8                                        Pad_1B6D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UExtrudeMeshSelectionToolProperties* GetDefaultObj();

};

// 0x748 (0x858 - 0x110)
// Class MeshModelingToolsExp.ExtrudeMeshSelectionTool
class UExtrudeMeshSelectionTool : public USingleTargetWithSelectionTool
{
public:
	class UExtrudeMeshSelectionToolProperties*   ExtrudeProperties;                                 // 0x110(0x8)(ZeroConstructor)
	uint8                                        Pad_1B7A[0x720];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UPreviewMesh*                          SourcePreview;                                     // 0x838(0x8)(ZeroConstructor)
	class UMeshOpPreviewWithBackgroundCompute*   EditCompute;                                       // 0x840(0x8)(ZeroConstructor)
	class UCombinedTransformGizmo*               TransformGizmo;                                    // 0x848(0x8)(ZeroConstructor)
	class UTransformProxy*                       TransformProxy;                                    // 0x850(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UExtrudeMeshSelectionTool* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class MeshModelingToolsExp.MeshSculptBrushOpProps
class UMeshSculptBrushOpProps : public UInteractiveToolPropertySet
{
public:

	static class UClass* StaticClass();
	static class UMeshSculptBrushOpProps* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.BaseKelvinletBrushOpProps
class UBaseKelvinletBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Stiffness;                                         // 0xA8(0x4)(None)
	float                                        Incompressiblity;                                  // 0xAC(0x4)(None)
	int32                                        BrushSteps;                                        // 0xB0(0x4)(None)
	uint8                                        Pad_1B8A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBaseKelvinletBrushOpProps* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class MeshModelingToolsExp.ScaleKelvinletBrushOpProps
class UScaleKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
public:
	float                                        Strength;                                          // 0xB8(0x4)(None)
	float                                        Falloff;                                           // 0xBC(0x4)(None)

	static class UClass* StaticClass();
	static class UScaleKelvinletBrushOpProps* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class MeshModelingToolsExp.PullKelvinletBrushOpProps
class UPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
public:
	float                                        Falloff;                                           // 0xB8(0x4)(None)
	float                                        Depth;                                             // 0xBC(0x4)(None)

	static class UClass* StaticClass();
	static class UPullKelvinletBrushOpProps* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class MeshModelingToolsExp.SharpPullKelvinletBrushOpProps
class USharpPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
public:
	float                                        Falloff;                                           // 0xB8(0x4)(None)
	float                                        Depth;                                             // 0xBC(0x4)(None)

	static class UClass* StaticClass();
	static class USharpPullKelvinletBrushOpProps* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class MeshModelingToolsExp.TwistKelvinletBrushOpProps
class UTwistKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
public:
	float                                        Strength;                                          // 0xB8(0x4)(None)
	float                                        Falloff;                                           // 0xBC(0x4)(None)

	static class UClass* StaticClass();
	static class UTwistKelvinletBrushOpProps* GetDefaultObj();

};

// 0x48 (0xF0 - 0xA8)
// Class MeshModelingToolsExp.GroupEraseBrushOpProps
class UGroupEraseBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	int32                                        Group;                                             // 0xA8(0x4)(None)
	bool                                         bOnlyEraseCurrent;                                 // 0xAC(0x1)(None)
	uint8                                        Pad_1B98[0x43];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGroupEraseBrushOpProps* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.GroupPaintBrushOpProps
class UGroupPaintBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	int32                                        Group;                                             // 0xA8(0x4)(None)
	bool                                         bOnlyPaintUngrouped;                               // 0xAC(0x1)(None)
	uint8                                        Pad_1B9F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGroupPaintBrushOpProps* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.InflateBrushOpProps
class UInflateBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(None)
	float                                        Falloff;                                           // 0xAC(0x4)(None)

	static class UClass* StaticClass();
	static class UInflateBrushOpProps* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.MoveBrushOpProps
class UMoveBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(None)
	float                                        Falloff;                                           // 0xAC(0x4)(None)
	float                                        Depth;                                             // 0xB0(0x4)(None)
	struct FModelingToolsAxisFilter              AxisFilters;                                       // 0xB4(0x3)(None)
	uint8                                        Pad_1BA6[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMoveBrushOpProps* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.PinchBrushOpProps
class UPinchBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(None)
	float                                        Falloff;                                           // 0xAC(0x4)(None)
	float                                        Depth;                                             // 0xB0(0x4)(None)
	bool                                         bPerpDamping;                                      // 0xB4(0x1)(None)
	uint8                                        Pad_1BA9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPinchBrushOpProps* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class MeshModelingToolsExp.BasePlaneBrushOpProps
class UBasePlaneBrushOpProps : public UMeshSculptBrushOpProps
{
public:

	static class UClass* StaticClass();
	static class UBasePlaneBrushOpProps* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.PlaneBrushOpProps
class UPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(None)
	float                                        Falloff;                                           // 0xAC(0x4)(None)
	float                                        Depth;                                             // 0xB0(0x4)(None)
	enum class EPlaneBrushSideMode               WhichSide;                                         // 0xB4(0x1)(None)
	uint8                                        Pad_1BAA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlaneBrushOpProps* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.ViewAlignedPlaneBrushOpProps
class UViewAlignedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(None)
	float                                        Falloff;                                           // 0xAC(0x4)(None)
	float                                        Depth;                                             // 0xB0(0x4)(None)
	enum class EPlaneBrushSideMode               WhichSide;                                         // 0xB4(0x1)(None)
	uint8                                        Pad_1BAC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UViewAlignedPlaneBrushOpProps* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.FixedPlaneBrushOpProps
class UFixedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(None)
	float                                        Falloff;                                           // 0xAC(0x4)(None)
	float                                        Depth;                                             // 0xB0(0x4)(None)
	enum class EPlaneBrushSideMode               WhichSide;                                         // 0xB4(0x1)(None)
	uint8                                        Pad_1BB0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFixedPlaneBrushOpProps* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.StandardSculptBrushOpProps
class UStandardSculptBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(None)
	float                                        Falloff;                                           // 0xAC(0x4)(None)

	static class UClass* StaticClass();
	static class UStandardSculptBrushOpProps* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.ViewAlignedSculptBrushOpProps
class UViewAlignedSculptBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(None)
	float                                        Falloff;                                           // 0xAC(0x4)(None)

	static class UClass* StaticClass();
	static class UViewAlignedSculptBrushOpProps* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class MeshModelingToolsExp.SculptMaxBrushOpProps
class USculptMaxBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(None)
	float                                        Falloff;                                           // 0xAC(0x4)(None)
	float                                        MaxHeight;                                         // 0xB0(0x4)(None)
	bool                                         bUseFixedHeight;                                   // 0xB4(0x1)(None)
	uint8                                        Pad_1BBB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FixedHeight;                                       // 0xB8(0x4)(None)
	uint8                                        Pad_1BBC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USculptMaxBrushOpProps* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class MeshModelingToolsExp.BaseSmoothBrushOpProps
class UBaseSmoothBrushOpProps : public UMeshSculptBrushOpProps
{
public:

	static class UClass* StaticClass();
	static class UBaseSmoothBrushOpProps* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.SmoothBrushOpProps
class USmoothBrushOpProps : public UBaseSmoothBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(None)
	float                                        Falloff;                                           // 0xAC(0x4)(None)
	bool                                         bPreserveUVFlow;                                   // 0xB0(0x1)(None)
	uint8                                        Pad_1BC5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USmoothBrushOpProps* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.SecondarySmoothBrushOpProps
class USecondarySmoothBrushOpProps : public UBaseSmoothBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(None)
	float                                        Falloff;                                           // 0xAC(0x4)(None)
	bool                                         bPreserveUVFlow;                                   // 0xB0(0x1)(None)
	uint8                                        Pad_1BC6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USecondarySmoothBrushOpProps* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.SmoothFillBrushOpProps
class USmoothFillBrushOpProps : public UBaseSmoothBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(None)
	float                                        Falloff;                                           // 0xAC(0x4)(None)
	bool                                         bPreserveUVFlow;                                   // 0xB0(0x1)(None)
	uint8                                        Pad_1BC9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USmoothFillBrushOpProps* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.FlattenBrushOpProps
class UFlattenBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(None)
	float                                        Falloff;                                           // 0xAC(0x4)(None)
	float                                        Depth;                                             // 0xB0(0x4)(None)
	enum class EPlaneBrushSideMode               WhichSide;                                         // 0xB4(0x1)(None)
	uint8                                        Pad_1BCC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFlattenBrushOpProps* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.EraseBrushOpProps
class UEraseBrushOpProps : public UMeshSculptBrushOpProps
{
public:
	float                                        Strength;                                          // 0xA8(0x4)(None)
	float                                        Falloff;                                           // 0xAC(0x4)(None)

	static class UClass* StaticClass();
	static class UEraseBrushOpProps* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.OffsetMeshSelectionToolBuilder
class UOffsetMeshSelectionToolBuilder : public USingleTargetWithSelectionToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UOffsetMeshSelectionToolBuilder* GetDefaultObj();

};

// 0x38 (0xE0 - 0xA8)
// Class MeshModelingToolsExp.OffsetMeshSelectionToolProperties
class UOffsetMeshSelectionToolProperties : public UInteractiveToolPropertySet
{
public:
	double                                       OffsetDistance;                                    // 0xA8(0x8)(None)
	enum class EOffsetMeshSelectionDirectionMode Direction;                                         // 0xB0(0x1)(None)
	uint8                                        Pad_1BCF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumSubdivisions;                                   // 0xB4(0x4)(None)
	double                                       CreaseAngle;                                       // 0xB8(0x8)(None)
	bool                                         bShellsToSolids;                                   // 0xC0(0x1)(None)
	bool                                         bInferGroupsFromNbrs;                              // 0xC1(0x1)(None)
	bool                                         bGroupPerSubdivision;                              // 0xC2(0x1)(None)
	bool                                         bReplaceSelectionGroups;                           // 0xC3(0x1)(None)
	uint8                                        Pad_1BD0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       UVScale;                                           // 0xC8(0x8)(None)
	bool                                         bUVIslandPerGroup;                                 // 0xD0(0x1)(None)
	bool                                         bInferMaterialID;                                  // 0xD1(0x1)(None)
	uint8                                        Pad_1BD1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SetMaterialID;                                     // 0xD4(0x4)(None)
	bool                                         bShowInputMaterials;                               // 0xD8(0x1)(None)
	uint8                                        Pad_1BD2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOffsetMeshSelectionToolProperties* GetDefaultObj();

};

// 0x738 (0x848 - 0x110)
// Class MeshModelingToolsExp.OffsetMeshSelectionTool
class UOffsetMeshSelectionTool : public USingleTargetWithSelectionTool
{
public:
	class UOffsetMeshSelectionToolProperties*    OffsetProperties;                                  // 0x110(0x8)(ZeroConstructor)
	uint8                                        Pad_1BD3[0x720];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UPreviewMesh*                          SourcePreview;                                     // 0x838(0x8)(ZeroConstructor)
	class UMeshOpPreviewWithBackgroundCompute*   EditCompute;                                       // 0x840(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UOffsetMeshSelectionTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.PatternToolBuilder
class UPatternToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UPatternToolBuilder* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class MeshModelingToolsExp.PatternToolSettings
class UPatternToolSettings : public UInteractiveToolPropertySet
{
public:
	int32                                        Seed;                                              // 0xA8(0x4)(None)
	bool                                         bProjectElementsDown;                              // 0xAC(0x1)(None)
	uint8                                        Pad_1BDB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ProjectionOffset;                                  // 0xB0(0x4)(None)
	bool                                         bHideSources;                                      // 0xB4(0x1)(None)
	bool                                         bUseRelativeTransforms;                            // 0xB5(0x1)(None)
	enum class EPatternToolShape                 Shape;                                             // 0xB6(0x1)(None)
	enum class EPatternToolSingleAxis            SingleAxis;                                        // 0xB7(0x1)(None)
	enum class EPatternToolSinglePlane           SinglePlane;                                       // 0xB8(0x1)(None)
	uint8                                        Pad_1BE4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPatternToolSettings* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.PatternTool_BoundingBoxSettings
class UPatternTool_BoundingBoxSettings : public UInteractiveToolPropertySet
{
public:
	bool                                         bIgnoreTransforms;                                 // 0xA8(0x1)(None)
	uint8                                        Pad_1BE8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Adjustment;                                        // 0xAC(0x4)(None)
	bool                                         bVisualize;                                        // 0xB0(0x1)(None)
	uint8                                        Pad_1BE9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPatternTool_BoundingBoxSettings* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.PatternTool_LinearSettings
class UPatternTool_LinearSettings : public UInteractiveToolPropertySet
{
public:
	enum class EPatternToolAxisSpacingMode       SpacingMode;                                       // 0xA8(0x1)(None)
	uint8                                        Pad_1BEC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count;                                             // 0xAC(0x4)(None)
	double                                       StepSize;                                          // 0xB0(0x8)(None)
	double                                       Extent;                                            // 0xB8(0x8)(None)
	bool                                         bCentered;                                         // 0xC0(0x1)(None)
	uint8                                        Pad_1BED[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPatternTool_LinearSettings* GetDefaultObj();

};

// 0x38 (0xE0 - 0xA8)
// Class MeshModelingToolsExp.PatternTool_GridSettings
class UPatternTool_GridSettings : public UInteractiveToolPropertySet
{
public:
	enum class EPatternToolAxisSpacingMode       SpacingX;                                          // 0xA8(0x1)(None)
	uint8                                        Pad_1BEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CountX;                                            // 0xAC(0x4)(None)
	double                                       StepSizeX;                                         // 0xB0(0x8)(None)
	double                                       ExtentX;                                           // 0xB8(0x8)(None)
	bool                                         bCenteredX;                                        // 0xC0(0x1)(None)
	enum class EPatternToolAxisSpacingMode       SpacingY;                                          // 0xC1(0x1)(None)
	uint8                                        Pad_1BF0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CountY;                                            // 0xC4(0x4)(None)
	double                                       StepSizeY;                                         // 0xC8(0x8)(None)
	double                                       ExtentY;                                           // 0xD0(0x8)(None)
	bool                                         bCenteredY;                                        // 0xD8(0x1)(None)
	uint8                                        Pad_1BF1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPatternTool_GridSettings* GetDefaultObj();

};

// 0x38 (0xE0 - 0xA8)
// Class MeshModelingToolsExp.PatternTool_RadialSettings
class UPatternTool_RadialSettings : public UInteractiveToolPropertySet
{
public:
	enum class EPatternToolAxisSpacingMode       SpacingMode;                                       // 0xA8(0x1)(None)
	uint8                                        Pad_1BF3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count;                                             // 0xAC(0x4)(None)
	double                                       StepSize;                                          // 0xB0(0x8)(None)
	double                                       Radius;                                            // 0xB8(0x8)(None)
	double                                       StartAngle;                                        // 0xC0(0x8)(None)
	double                                       EndAngle;                                          // 0xC8(0x8)(None)
	double                                       AngleShift;                                        // 0xD0(0x8)(None)
	bool                                         bOriented;                                         // 0xD8(0x1)(None)
	uint8                                        Pad_1BF4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPatternTool_RadialSettings* GetDefaultObj();

};

// 0x50 (0xF8 - 0xA8)
// Class MeshModelingToolsExp.PatternTool_RotationSettings
class UPatternTool_RotationSettings : public UInteractiveToolPropertySet
{
public:
	bool                                         bInterpolate;                                      // 0xA8(0x1)(None)
	bool                                         bJitter;                                           // 0xA9(0x1)(None)
	uint8                                        Pad_1BF8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              StartRotation;                                     // 0xB0(0x18)(None)
	struct FRotator                              EndRotation;                                       // 0xC8(0x18)(None)
	struct FRotator                              Jitter;                                            // 0xE0(0x18)(None)

	static class UClass* StaticClass();
	static class UPatternTool_RotationSettings* GetDefaultObj();

};

// 0x50 (0xF8 - 0xA8)
// Class MeshModelingToolsExp.PatternTool_TranslationSettings
class UPatternTool_TranslationSettings : public UInteractiveToolPropertySet
{
public:
	bool                                         bInterpolate;                                      // 0xA8(0x1)(None)
	bool                                         bJitter;                                           // 0xA9(0x1)(None)
	uint8                                        Pad_1BFB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StartTranslation;                                  // 0xB0(0x18)(None)
	struct FVector                               EndTranslation;                                    // 0xC8(0x18)(None)
	struct FVector                               Jitter;                                            // 0xE0(0x18)(None)

	static class UClass* StaticClass();
	static class UPatternTool_TranslationSettings* GetDefaultObj();

};

// 0x50 (0xF8 - 0xA8)
// Class MeshModelingToolsExp.PatternTool_ScaleSettings
class UPatternTool_ScaleSettings : public UInteractiveToolPropertySet
{
public:
	bool                                         bProportional;                                     // 0xA8(0x1)(None)
	bool                                         bInterpolate;                                      // 0xA9(0x1)(None)
	bool                                         bJitter;                                           // 0xAA(0x1)(None)
	uint8                                        Pad_1C08[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StartScale;                                        // 0xB0(0x18)(None)
	struct FVector                               EndScale;                                          // 0xC8(0x18)(None)
	struct FVector                               Jitter;                                            // 0xE0(0x18)(None)

	static class UClass* StaticClass();
	static class UPatternTool_ScaleSettings* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.PatternTool_OutputSettings
class UPatternTool_OutputSettings : public UInteractiveToolPropertySet
{
public:
	bool                                         bSeparateActors;                                   // 0xA8(0x1)(None)
	bool                                         bConvertToDynamic;                                 // 0xA9(0x1)(None)
	bool                                         bCreateISMCs;                                      // 0xAA(0x1)(None)
	bool                                         bHaveStaticMeshes;                                 // 0xAB(0x1)(None)
	uint8                                        Pad_1C0C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPatternTool_OutputSettings* GetDefaultObj();

};

// 0x3F8 (0x4B0 - 0xB8)
// Class MeshModelingToolsExp.PatternTool
class UPatternTool : public UMultiSelectionMeshEditingTool
{
public:
	class UPatternToolSettings*                  Settings;                                          // 0xB8(0x8)(ZeroConstructor)
	class UPatternTool_BoundingBoxSettings*      BoundingBoxSettings;                               // 0xC0(0x8)(ZeroConstructor)
	class UPatternTool_LinearSettings*           LinearSettings;                                    // 0xC8(0x8)(ZeroConstructor)
	class UPatternTool_GridSettings*             GridSettings;                                      // 0xD0(0x8)(ZeroConstructor)
	class UPatternTool_RadialSettings*           RadialSettings;                                    // 0xD8(0x8)(ZeroConstructor)
	class UPatternTool_RotationSettings*         RotationSettings;                                  // 0xE0(0x8)(ZeroConstructor)
	class UPatternTool_TranslationSettings*      TranslationSettings;                               // 0xE8(0x8)(ZeroConstructor)
	class UPatternTool_ScaleSettings*            ScaleSettings;                                     // 0xF0(0x8)(ZeroConstructor)
	uint8                                        Pad_1C10[0x58];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UPatternTool_OutputSettings*           OutputSettings;                                    // 0x150(0x8)(ZeroConstructor)
	uint8                                        Pad_1C11[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UTransformProxy*                       PatternGizmoProxy;                                 // 0x1A0(0x8)(ZeroConstructor)
	class UCombinedTransformGizmo*               PatternGizmo;                                      // 0x1A8(0x8)(ZeroConstructor)
	uint8                                        Pad_1C12[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UDragAlignmentMechanic*                DragAlignmentMechanic;                             // 0x1C8(0x8)(ZeroConstructor)
	class UConstructionPlaneMechanic*            PlaneMechanic;                                     // 0x1D0(0x8)(ZeroConstructor)
	uint8                                        Pad_1C14[0x1E0];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class UPrimitiveComponent*>             AllComponents;                                     // 0x3B8(0x50)(ZeroConstructor)
	uint8                                        Pad_1C15[0xA0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UPreviewGeometry*                      PreviewGeometry;                                   // 0x4A8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UPatternTool* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.MeshConstraintProperties
class UMeshConstraintProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bPreserveSharpEdges;                               // 0xA8(0x1)(None)
	enum class EMeshBoundaryConstraint           MeshBoundaryConstraint;                            // 0xA9(0x1)(None)
	enum class EGroupBoundaryConstraint          GroupBoundaryConstraint;                           // 0xAA(0x1)(None)
	enum class EMaterialBoundaryConstraint       MaterialBoundaryConstraint;                        // 0xAB(0x1)(None)
	bool                                         bPreventNormalFlips;                               // 0xAC(0x1)(None)
	bool                                         bPreventTinyTriangles;                             // 0xAD(0x1)(None)
	uint8                                        Pad_1C1B[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshConstraintProperties* GetDefaultObj();

};

// 0x8 (0xB8 - 0xB0)
// Class MeshModelingToolsExp.RemeshProperties
class URemeshProperties : public UMeshConstraintProperties
{
public:
	float                                        SmoothingStrength;                                 // 0xB0(0x4)(None)
	bool                                         bFlips;                                            // 0xB4(0x1)(None)
	bool                                         bSplits;                                           // 0xB5(0x1)(None)
	bool                                         bCollapses;                                        // 0xB6(0x1)(None)
	uint8                                        Pad_1C24[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URemeshProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.AddPatchToolBuilder
class UAddPatchToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UAddPatchToolBuilder* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.AddPatchToolProperties
class UAddPatchToolProperties : public UInteractiveToolPropertySet
{
public:
	float                                        Width;                                             // 0xA8(0x4)(None)
	float                                        Rotation;                                          // 0xAC(0x4)(None)
	int32                                        Subdivisions;                                      // 0xB0(0x4)(None)
	float                                        Shift;                                             // 0xB4(0x4)(None)

	static class UClass* StaticClass();
	static class UAddPatchToolProperties* GetDefaultObj();

};

// 0x88 (0x128 - 0xA0)
// Class MeshModelingToolsExp.AddPatchTool
class UAddPatchTool : public USingleClickTool
{
public:
	uint8                                        Pad_1C2D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAddPatchToolProperties*               ShapeSettings;                                     // 0xA8(0x8)(ZeroConstructor)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0xB0(0x8)(ZeroConstructor)
	class UPreviewMesh*                          PreviewMesh;                                       // 0xB8(0x8)(ZeroConstructor)
	uint8                                        Pad_1C2E[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAddPatchTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.AlignObjectsToolBuilder
class UAlignObjectsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UAlignObjectsToolBuilder* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.AlignObjectsToolProperties
class UAlignObjectsToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EAlignObjectsAlignTypes           AlignType;                                         // 0xA8(0x4)(None)
	enum class EAlignObjectsAlignToOptions       AlignTo;                                           // 0xAC(0x4)(None)
	enum class EAlignObjectsBoxPoint             BoxPosition;                                       // 0xB0(0x4)(None)
	bool                                         bAlignX;                                           // 0xB4(0x1)(None)
	bool                                         bAlignY;                                           // 0xB5(0x1)(None)
	bool                                         bAlignZ;                                           // 0xB6(0x1)(None)
	uint8                                        Pad_1C34[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAlignObjectsToolProperties* GetDefaultObj();

};

// 0xA0 (0x158 - 0xB8)
// Class MeshModelingToolsExp.AlignObjectsTool
class UAlignObjectsTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_1C37[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAlignObjectsToolProperties*           AlignProps;                                        // 0xC0(0x8)(ZeroConstructor)
	uint8                                        Pad_1C38[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAlignObjectsTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.BakeMeshAttributeMapsToolBuilder
class UBakeMeshAttributeMapsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UBakeMeshAttributeMapsToolBuilder* GetDefaultObj();

};

// 0x90 (0x138 - 0xA8)
// Class MeshModelingToolsExp.BakeMeshAttributeMapsToolProperties
class UBakeMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
{
public:
	int32                                        MapTypes;                                          // 0xA8(0x4)(None)
	uint8                                        Pad_1C3A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MapPreview;                                        // 0xB0(0x10)(None)
	enum class EBakeTextureResolution            Resolution;                                        // 0xC0(0x4)(None)
	enum class EBakeTextureBitDepth              BitDepth;                                          // 0xC4(0x4)(None)
	enum class EBakeTextureSamplesPerPixel       SamplesPerPixel;                                   // 0xC8(0x4)(None)
	uint8                                        Pad_1C3B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            SampleFilterMask;                                  // 0xD0(0x8)(ZeroConstructor)
	TArray<class FString>                        MapPreviewNamesList;                               // 0xD8(0x10)(None)
	uint8                                        Pad_1C3C[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBakeMeshAttributeMapsToolProperties* GetDefaultObj();

	void GetMapPreviewNamesFunc(const TArray<class FString>& ReturnValue);
};

// 0x3D8 (0x490 - 0xB8)
// Class MeshModelingToolsExp.BakeMeshAttributeTool
class UBakeMeshAttributeTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_1C3E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBakeOcclusionMapToolProperties*       OcclusionSettings;                                 // 0xC0(0x8)(ZeroConstructor)
	class UBakeCurvatureMapToolProperties*       CurvatureSettings;                                 // 0xC8(0x8)(ZeroConstructor)
	class UBakeTexture2DProperties*              TextureSettings;                                   // 0xD0(0x8)(ZeroConstructor)
	class UBakeMultiTexture2DProperties*         MultiTextureSettings;                              // 0xD8(0x8)(ZeroConstructor)
	class UMaterialInstanceDynamic*              WorkingPreviewMaterial;                            // 0xE0(0x8)(ZeroConstructor)
	class UMaterialInstanceDynamic*              ErrorPreviewMaterial;                              // 0xE8(0x8)(ZeroConstructor)
	uint8                                        Pad_1C3F[0x3A0];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBakeMeshAttributeTool* GetDefaultObj();

};

// 0x170 (0x600 - 0x490)
// Class MeshModelingToolsExp.BakeMeshAttributeMapsToolBase
class UBakeMeshAttributeMapsToolBase : public UBakeMeshAttributeTool
{
public:
	class UBakeVisualizationProperties*          VisualizationProps;                                // 0x490(0x8)(ZeroConstructor)
	class UPreviewMesh*                          PreviewMesh;                                       // 0x498(0x8)(ZeroConstructor)
	class UMaterialInstanceDynamic*              PreviewMaterial;                                   // 0x4A0(0x8)(ZeroConstructor)
	class UMaterialInstanceDynamic*              BentNormalPreviewMaterial;                         // 0x4A8(0x8)(ZeroConstructor)
	uint8                                        Pad_1C41[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EBakeMapType, class UTexture2D*> CachedMaps;                                        // 0x500(0x50)(ZeroConstructor)
	uint8                                        Pad_1C42[0x98];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            EmptyNormalMap;                                    // 0x5E8(0x8)(ZeroConstructor)
	class UTexture2D*                            EmptyColorMapBlack;                                // 0x5F0(0x8)(ZeroConstructor)
	class UTexture2D*                            EmptyColorMapWhite;                                // 0x5F8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBakeMeshAttributeMapsToolBase* GetDefaultObj();

};

// 0x70 (0x670 - 0x600)
// Class MeshModelingToolsExp.BakeMeshAttributeMapsTool
class UBakeMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase
{
public:
	class UBakeInputMeshProperties*              InputMeshSettings;                                 // 0x600(0x8)(ZeroConstructor)
	class UBakeMeshAttributeMapsToolProperties*  Settings;                                          // 0x608(0x8)(ZeroConstructor)
	class UBakeMeshAttributeMapsResultToolProperties* ResultSettings;                                    // 0x610(0x8)(ZeroConstructor)
	uint8                                        Pad_1C47[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBakeMeshAttributeMapsTool* GetDefaultObj();

};

// 0x50 (0xF8 - 0xA8)
// Class MeshModelingToolsExp.BakeMeshAttributeMapsResultToolProperties
class UBakeMeshAttributeMapsResultToolProperties : public UInteractiveToolPropertySet
{
public:
	TMap<enum class EBakeMapType, class UTexture2D*> Result;                                            // 0xA8(0x50)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBakeMeshAttributeMapsResultToolProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.BakeMeshAttributeVertexToolBuilder
class UBakeMeshAttributeVertexToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UBakeMeshAttributeVertexToolBuilder* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.BakeMeshAttributeVertexToolProperties
class UBakeMeshAttributeVertexToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EBakeVertexOutput                 OutputMode;                                        // 0xA8(0x4)(None)
	int32                                        OutputType;                                        // 0xAC(0x4)(None)
	int32                                        OutputTypeR;                                       // 0xB0(0x4)(None)
	int32                                        OutputTypeG;                                       // 0xB4(0x4)(None)
	int32                                        OutputTypeB;                                       // 0xB8(0x4)(None)
	int32                                        OutputTypeA;                                       // 0xBC(0x4)(None)
	enum class EBakeVertexChannel                PreviewMode;                                       // 0xC0(0x4)(None)
	bool                                         bSplitAtNormalSeams;                               // 0xC4(0x1)(None)
	bool                                         bSplitAtUVSeams;                                   // 0xC5(0x1)(None)
	uint8                                        Pad_1C4D[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBakeMeshAttributeVertexToolProperties* GetDefaultObj();

};

// 0x100 (0x590 - 0x490)
// Class MeshModelingToolsExp.BakeMeshAttributeVertexTool
class UBakeMeshAttributeVertexTool : public UBakeMeshAttributeTool
{
public:
	class UBakeInputMeshProperties*              InputMeshSettings;                                 // 0x490(0x8)(ZeroConstructor)
	class UBakeMeshAttributeVertexToolProperties* Settings;                                          // 0x498(0x8)(ZeroConstructor)
	class UPreviewMesh*                          PreviewMesh;                                       // 0x4A0(0x8)(ZeroConstructor)
	class UMaterialInstanceDynamic*              PreviewMaterial;                                   // 0x4A8(0x8)(ZeroConstructor)
	class UMaterialInstanceDynamic*              PreviewAlphaMaterial;                              // 0x4B0(0x8)(ZeroConstructor)
	uint8                                        Pad_1C52[0xD8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBakeMeshAttributeVertexTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolBuilder
class UBakeMultiMeshAttributeMapsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UBakeMultiMeshAttributeMapsToolBuilder* GetDefaultObj();

};

// 0x90 (0x138 - 0xA8)
// Class MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolProperties
class UBakeMultiMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
{
public:
	int32                                        MapTypes;                                          // 0xA8(0x4)(None)
	uint8                                        Pad_1C55[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MapPreview;                                        // 0xB0(0x10)(None)
	enum class EBakeTextureResolution            Resolution;                                        // 0xC0(0x4)(None)
	enum class EBakeTextureBitDepth              BitDepth;                                          // 0xC4(0x4)(None)
	enum class EBakeTextureSamplesPerPixel       SamplesPerPixel;                                   // 0xC8(0x4)(None)
	uint8                                        Pad_1C56[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            SampleFilterMask;                                  // 0xD0(0x8)(ZeroConstructor)
	TArray<class FString>                        MapPreviewNamesList;                               // 0xD8(0x10)(None)
	uint8                                        Pad_1C57[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBakeMultiMeshAttributeMapsToolProperties* GetDefaultObj();

	void GetMapPreviewNamesFunc(const TArray<class FString>& ReturnValue);
};

// 0x50 (0xF8 - 0xA8)
// Class MeshModelingToolsExp.BakeMultiMeshInputToolProperties
class UBakeMultiMeshInputToolProperties : public UInteractiveToolPropertySet
{
public:
	class UStaticMesh*                           TargetStaticMesh;                                  // 0xA8(0x8)(ZeroConstructor)
	class USkeletalMesh*                         TargetSkeletalMesh;                                // 0xB0(0x8)(ZeroConstructor)
	class AActor*                                TargetDynamicMesh;                                 // 0xB8(0x8)(ZeroConstructor)
	class FString                                TargetUVLayer;                                     // 0xC0(0x10)(None)
	TArray<struct FBakeMultiMeshDetailProperties> SourceMeshes;                                      // 0xD0(0x10)(ZeroConstructor)
	float                                        ProjectionDistance;                                // 0xE0(0x4)(None)
	uint8                                        Pad_1C62[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        TargetUVLayerNamesList;                            // 0xE8(0x10)(None)

	static class UClass* StaticClass();
	static class UBakeMultiMeshInputToolProperties* GetDefaultObj();

	void GetTargetUVLayerNamesFunc(const TArray<class FString>& ReturnValue);
};

// 0xB0 (0x6B0 - 0x600)
// Class MeshModelingToolsExp.BakeMultiMeshAttributeMapsTool
class UBakeMultiMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase
{
public:
	class UBakeMultiMeshAttributeMapsToolProperties* Settings;                                          // 0x600(0x8)(ZeroConstructor)
	class UBakeMultiMeshInputToolProperties*     InputMeshSettings;                                 // 0x608(0x8)(ZeroConstructor)
	class UBakeMeshAttributeMapsResultToolProperties* ResultSettings;                                    // 0x610(0x8)(ZeroConstructor)
	uint8                                        Pad_1C66[0x98];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBakeMultiMeshAttributeMapsTool* GetDefaultObj();

};

// 0x48 (0xF0 - 0xA8)
// Class MeshModelingToolsExp.BakeRenderCaptureResults
class UBakeRenderCaptureResults : public UInteractiveToolPropertySet
{
public:
	class UTexture2D*                            BaseColorMap;                                      // 0xA8(0x8)(ZeroConstructor)
	class UTexture2D*                            NormalMap;                                         // 0xB0(0x8)(ZeroConstructor)
	class UTexture2D*                            PackedMRSMap;                                      // 0xB8(0x8)(ZeroConstructor)
	class UTexture2D*                            MetallicMap;                                       // 0xC0(0x8)(ZeroConstructor)
	class UTexture2D*                            RoughnessMap;                                      // 0xC8(0x8)(ZeroConstructor)
	class UTexture2D*                            SpecularMap;                                       // 0xD0(0x8)(ZeroConstructor)
	class UTexture2D*                            EmissiveMap;                                       // 0xD8(0x8)(ZeroConstructor)
	class UTexture2D*                            OpacityMap;                                        // 0xE0(0x8)(ZeroConstructor)
	class UTexture2D*                            SubsurfaceColorMap;                                // 0xE8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBakeRenderCaptureResults* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.BakeRenderCaptureToolBuilder
class UBakeRenderCaptureToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UBakeRenderCaptureToolBuilder* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.RenderCaptureProperties
class URenderCaptureProperties : public UInteractiveToolPropertySet
{
public:
	enum class EBakeTextureResolution            Resolution;                                        // 0xA8(0x4)(None)
	bool                                         bBaseColorMap;                                     // 0xAC(0x1)(None)
	bool                                         bNormalMap;                                        // 0xAD(0x1)(None)
	bool                                         bPackedMRSMap;                                     // 0xAE(0x1)(None)
	bool                                         bMetallicMap;                                      // 0xAF(0x1)(None)
	bool                                         bRoughnessMap;                                     // 0xB0(0x1)(None)
	bool                                         bSpecularMap;                                      // 0xB1(0x1)(None)
	bool                                         bEmissiveMap;                                      // 0xB2(0x1)(None)
	bool                                         bOpacityMap;                                       // 0xB3(0x1)(None)
	bool                                         bSubsurfaceColorMap;                               // 0xB4(0x1)(None)
	bool                                         bAntiAliasing;                                     // 0xB5(0x1)(None)
	uint8                                        Pad_1C6D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CaptureFieldOfView;                                // 0xB8(0x4)(None)
	float                                        NearPlaneDist;                                     // 0xBC(0x4)(None)
	bool                                         bDeviceDepthMap;                                   // 0xC0(0x1)(None)
	uint8                                        Pad_1C6E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URenderCaptureProperties* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingToolsExp.BakeRenderCaptureToolProperties
class UBakeRenderCaptureToolProperties : public UInteractiveToolPropertySet
{
public:
	class FString                                MapPreview;                                        // 0xA8(0x10)(None)
	TArray<class FString>                        MapPreviewNamesList;                               // 0xB8(0x10)(None)
	enum class EBakeTextureSamplesPerPixel       SamplesPerPixel;                                   // 0xC8(0x4)(None)
	enum class EBakeTextureResolution            TextureSize;                                       // 0xCC(0x4)(None)
	float                                        ValidSampleDepthThreshold;                         // 0xD0(0x4)(None)
	uint8                                        Pad_1C74[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBakeRenderCaptureToolProperties* GetDefaultObj();

	void GetMapPreviewNamesFunc(const TArray<class FString>& ReturnValue);
};

// 0x28 (0xD0 - 0xA8)
// Class MeshModelingToolsExp.BakeRenderCaptureInputToolProperties
class UBakeRenderCaptureInputToolProperties : public UInteractiveToolPropertySet
{
public:
	class UStaticMesh*                           TargetStaticMesh;                                  // 0xA8(0x8)(ZeroConstructor)
	class FString                                TargetUVLayer;                                     // 0xB0(0x10)(None)
	TArray<class FString>                        TargetUVLayerNamesList;                            // 0xC0(0x10)(None)

	static class UClass* StaticClass();
	static class UBakeRenderCaptureInputToolProperties* GetDefaultObj();

	void GetTargetUVLayerNamesFunc(const TArray<class FString>& ReturnValue);
	void GetTargetUVLayerIndex(int32 ReturnValue);
};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.BakeRenderCaptureVisualizationProperties
class UBakeRenderCaptureVisualizationProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bPreviewAsMaterial;                                // 0xA8(0x1)(None)
	uint8                                        Pad_1C76[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Brightness;                                        // 0xAC(0x4)(None)
	float                                        SSBrightness;                                      // 0xB0(0x4)(None)
	float                                        EmissiveScale;                                     // 0xB4(0x4)(None)

	static class UClass* StaticClass();
	static class UBakeRenderCaptureVisualizationProperties* GetDefaultObj();

};

// 0x4A8 (0x560 - 0xB8)
// Class MeshModelingToolsExp.BakeRenderCaptureTool
class UBakeRenderCaptureTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_1C7A[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Actors;                                            // 0xC8(0x10)(ZeroConstructor)
	class UBakeRenderCaptureToolProperties*      Settings;                                          // 0xD8(0x8)(ZeroConstructor)
	class URenderCaptureProperties*              RenderCaptureProperties;                           // 0xE0(0x8)(ZeroConstructor)
	class UBakeRenderCaptureInputToolProperties* InputMeshSettings;                                 // 0xE8(0x8)(ZeroConstructor)
	class UBakeRenderCaptureVisualizationProperties* VisualizationProps;                                // 0xF0(0x8)(ZeroConstructor)
	class UBakeRenderCaptureResults*             ResultSettings;                                    // 0xF8(0x8)(ZeroConstructor)
	uint8                                        Pad_1C7B[0x330];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            EmptyNormalMap;                                    // 0x430(0x8)(ZeroConstructor)
	class UTexture2D*                            EmptyColorMapBlack;                                // 0x438(0x8)(ZeroConstructor)
	class UTexture2D*                            EmptyColorMapWhite;                                // 0x440(0x8)(ZeroConstructor)
	class UTexture2D*                            EmptyEmissiveMap;                                  // 0x448(0x8)(ZeroConstructor)
	class UTexture2D*                            EmptyOpacityMap;                                   // 0x450(0x8)(ZeroConstructor)
	class UTexture2D*                            EmptySubsurfaceColorMap;                           // 0x458(0x8)(ZeroConstructor)
	class UTexture2D*                            EmptyPackedMRSMap;                                 // 0x460(0x8)(ZeroConstructor)
	class UTexture2D*                            EmptyRoughnessMap;                                 // 0x468(0x8)(ZeroConstructor)
	class UTexture2D*                            EmptyMetallicMap;                                  // 0x470(0x8)(ZeroConstructor)
	class UTexture2D*                            EmptySpecularMap;                                  // 0x478(0x8)(ZeroConstructor)
	uint8                                        Pad_1C7E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              WorkingPreviewMaterial;                            // 0x488(0x8)(ZeroConstructor)
	class UMaterialInstanceDynamic*              ErrorPreviewMaterial;                              // 0x490(0x8)(ZeroConstructor)
	class UMaterialInstanceDynamic*              PreviewMaterialRC;                                 // 0x498(0x8)(ZeroConstructor)
	class UMaterialInstanceDynamic*              PreviewMaterialPackedRC;                           // 0x4A0(0x8)(ZeroConstructor)
	class UMaterialInstanceDynamic*              PreviewMaterialRC_Subsurface;                      // 0x4A8(0x8)(ZeroConstructor)
	class UMaterialInstanceDynamic*              PreviewMaterialPackedRC_Subsurface;                // 0x4B0(0x8)(ZeroConstructor)
	class UPreviewMesh*                          PreviewMesh;                                       // 0x4B8(0x8)(ZeroConstructor)
	uint8                                        Pad_1C7F[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBakeRenderCaptureTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.BakeTransformToolBuilder
class UBakeTransformToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UBakeTransformToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.BakeTransformToolProperties
class UBakeTransformToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bBakeRotation;                                     // 0xA8(0x1)(None)
	enum class EBakeScaleMethod                  BakeScale;                                         // 0xA9(0x1)(None)
	bool                                         bRecenterPivot;                                    // 0xAA(0x1)(None)
	bool                                         bAllowNoScale;                                     // 0xAB(0x1)(None)
	uint8                                        Pad_1C85[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBakeTransformToolProperties* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class MeshModelingToolsExp.BakeTransformTool
class UBakeTransformTool : public UMultiSelectionMeshEditingTool
{
public:
	class UBakeTransformToolProperties*          BasicProperties;                                   // 0xB8(0x8)(ZeroConstructor)
	uint8                                        Pad_1C86[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBakeTransformTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.ConvertMeshesToolBuilder
class UConvertMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UConvertMeshesToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.ConvertMeshesToolProperties
class UConvertMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bTransferMaterials;                                // 0xA8(0x1)(None)
	bool                                         bShowTransferMaterials;                            // 0xA9(0x1)(None)
	uint8                                        Pad_1C88[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConvertMeshesToolProperties* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class MeshModelingToolsExp.ConvertMeshesTool
class UConvertMeshesTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_1C89[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UConvertMeshesToolProperties*          BasicProperties;                                   // 0xC0(0x8)(ZeroConstructor)
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xC8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UConvertMeshesTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.ConvertToPolygonsToolBuilder
class UConvertToPolygonsToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UConvertToPolygonsToolBuilder* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingToolsExp.ConvertToPolygonsToolProperties
class UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EConvertToPolygonsMode            ConversionMode;                                    // 0xA8(0x4)(None)
	float                                        AngleTolerance;                                    // 0xAC(0x4)(None)
	int32                                        NumPoints;                                         // 0xB0(0x4)(None)
	bool                                         bSplitExisting;                                    // 0xB4(0x1)(None)
	bool                                         bNormalWeighted;                                   // 0xB5(0x1)(None)
	uint8                                        Pad_1C8A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NormalWeighting;                                   // 0xB8(0x4)(None)
	float                                        QuadAdjacencyWeight;                               // 0xBC(0x4)(None)
	float                                        QuadMetricClamp;                                   // 0xC0(0x4)(None)
	int32                                        QuadSearchRounds;                                  // 0xC4(0x4)(None)
	bool                                         bRespectUVSeams;                                   // 0xC8(0x1)(None)
	bool                                         bRespectHardNormals;                               // 0xC9(0x1)(None)
	uint8                                        Pad_1C8B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinGroupSize;                                      // 0xCC(0x4)(None)
	bool                                         bCalculateNormals;                                 // 0xD0(0x1)(None)
	bool                                         bShowGroupColors;                                  // 0xD1(0x1)(None)
	uint8                                        Pad_1C8C[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConvertToPolygonsToolProperties* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingToolsExp.OutputPolygroupLayerProperties
class UOutputPolygroupLayerProperties : public UInteractiveToolPropertySet
{
public:
	class FName                                  GroupLayer;                                        // 0xA8(0x8)(None)
	TArray<class FString>                        OptionsList;                                       // 0xB0(0x10)(None)
	bool                                         bShowNewLayerName;                                 // 0xC0(0x1)(None)
	uint8                                        Pad_1C95[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NewLayerName;                                      // 0xC8(0x10)(None)

	static class UClass* StaticClass();
	static class UOutputPolygroupLayerProperties* GetDefaultObj();

	void GetGroupOptionsList(const TArray<class FString>& ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class MeshModelingToolsExp.ConvertToPolygonsOperatorFactory
class UConvertToPolygonsOperatorFactory : public UObject
{
public:
	uint8                                        Pad_1C99[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UConvertToPolygonsTool*                ConvertToPolygonsTool;                             // 0x30(0x8)(None)

	static class UClass* StaticClass();
	static class UConvertToPolygonsOperatorFactory* GetDefaultObj();

};

// 0x58 (0x110 - 0xB8)
// Class MeshModelingToolsExp.ConvertToPolygonsTool
class UConvertToPolygonsTool : public USingleSelectionMeshEditingTool
{
public:
	class UConvertToPolygonsToolProperties*      Settings;                                          // 0xB8(0x8)(ZeroConstructor)
	class UPolygroupLayersProperties*            CopyFromLayerProperties;                           // 0xC0(0x8)(ZeroConstructor)
	class UOutputPolygroupLayerProperties*       OutputProperties;                                  // 0xC8(0x8)(ZeroConstructor)
	class UMeshOpPreviewWithBackgroundCompute*   PreviewCompute;                                    // 0xD0(0x8)(ZeroConstructor)
	class UPreviewGeometry*                      PreviewGeometry;                                   // 0xD8(0x8)(ZeroConstructor)
	uint8                                        Pad_1C9D[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConvertToPolygonsTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingToolsExp.CubeGridToolBuilder
class UCubeGridToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
public:
	uint8                                        Pad_1CA3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCubeGridToolBuilder* GetDefaultObj();

};

// 0x100 (0x1A8 - 0xA8)
// Class MeshModelingToolsExp.CubeGridToolProperties
class UCubeGridToolProperties : public UInteractiveToolPropertySet
{
public:
	struct FVector                               GridFrameOrigin;                                   // 0xA8(0x18)(None)
	struct FRotator                              GridFrameOrientation;                              // 0xC0(0x18)(None)
	bool                                         bShowGizmo;                                        // 0xD8(0x1)(None)
	uint8                                        Pad_1CA4[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        GridPower;                                         // 0xE8(0x1)(None)
	uint8                                        Pad_1CA5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CurrentBlockSize;                                  // 0xF0(0x8)(None)
	int32                                        BlocksPerStep;                                     // 0xF8(0x4)(None)
	bool                                         bPowerOfTwoBlockSizes;                             // 0xFC(0x1)(None)
	uint8                                        Pad_1CA6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       BlockBaseSize;                                     // 0x100(0x8)(None)
	bool                                         bCrosswiseDiagonal;                                // 0x108(0x1)(None)
	bool                                         bKeepSideGroups;                                   // 0x109(0x1)(None)
	uint8                                        Pad_1CA7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       PlaneTolerance;                                    // 0x110(0x8)(None)
	bool                                         bHitUnrelatedGeometry;                             // 0x118(0x1)(None)
	bool                                         bHitGridGroundPlaneIfCloser;                       // 0x119(0x1)(None)
	uint8                                        Pad_1CA8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECubeGridToolFaceSelectionMode    FaceSelectionMode;                                 // 0x11C(0x4)(None)
	class FString                                ToggleCornerMode;                                  // 0x120(0x10)(None)
	class FString                                PushPull;                                          // 0x130(0x10)(None)
	class FString                                ResizeGrid;                                        // 0x140(0x10)(None)
	class FString                                SlideSelection;                                    // 0x150(0x10)(None)
	class FString                                FlipSelection;                                     // 0x160(0x10)(None)
	class FString                                GridGizmo;                                         // 0x170(0x10)(None)
	class FString                                QuickShiftGizmo;                                   // 0x180(0x10)(None)
	class FString                                AlignGizmo;                                        // 0x190(0x10)(None)
	bool                                         bInCornerMode;                                     // 0x1A0(0x1)(None)
	bool                                         bAllowedToEditGrid;                                // 0x1A1(0x1)(None)
	uint8                                        Pad_1CA9[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCubeGridToolProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.CubeGridToolActions
class UCubeGridToolActions : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_1CAD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                GridSourceActor;                                   // 0xB0(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UCubeGridToolActions* GetDefaultObj();

	void SlideForward();
	void SlideBack();
	void ResetGridFromActor();
	void Push();
	void Pull();
	void Flip();
	void CornerMode();
};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.CubeGridDuringActivityActions
class UCubeGridDuringActivityActions : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_1CAF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCubeGridDuringActivityActions* GetDefaultObj();

	void Done();
	void Cancel();
};

// 0x588 (0x620 - 0x98)
// Class MeshModelingToolsExp.CubeGridTool
class UCubeGridTool : public UInteractiveTool
{
public:
	uint8                                        Pad_1CB1[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCombinedTransformGizmo*               GridGizmo;                                         // 0xC0(0x8)(ZeroConstructor)
	class UDragAlignmentMechanic*                GridGizmoAlignmentMechanic;                        // 0xC8(0x8)(ZeroConstructor)
	class UTransformProxy*                       GridGizmoTransformProxy;                           // 0xD0(0x8)(ZeroConstructor)
	class UPreviewGeometry*                      LineSets;                                          // 0xD8(0x8)(ZeroConstructor)
	class UClickDragInputBehavior*               ClickDragBehavior;                                 // 0xE0(0x8)(ZeroConstructor)
	class UMouseHoverBehavior*                   HoverBehavior;                                     // 0xE8(0x8)(ZeroConstructor)
	class ULocalSingleClickInputBehavior*        CtrlMiddleClickBehavior;                           // 0xF0(0x8)(ZeroConstructor)
	class ULocalClickDragInputBehavior*          MiddleClickDragBehavior;                           // 0xF8(0x8)(ZeroConstructor)
	class UCubeGridToolProperties*               Settings;                                          // 0x100(0x8)(ZeroConstructor)
	class UCubeGridToolActions*                  ToolActions;                                       // 0x108(0x8)(ZeroConstructor)
	class UCubeGridDuringActivityActions*        DuringActivityActions;                             // 0x110(0x8)(ZeroConstructor)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0x118(0x8)(ZeroConstructor)
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0x120(0x8)(ZeroConstructor)
	class UToolTarget*                           Target;                                            // 0x128(0x8)(ZeroConstructor)
	uint8                                        Pad_1CB3[0x180];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0x2B0(0x8)(ZeroConstructor)
	uint8                                        Pad_1CB4[0x368];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCubeGridTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingToolsExp.DeformMeshPolygonsToolBuilder
class UDeformMeshPolygonsToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UDeformMeshPolygonsToolBuilder* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.DeformMeshPolygonsTransformProperties
class UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet
{
public:
	enum class EGroupTopologyDeformationStrategy DeformationStrategy;                               // 0xA8(0x1)(None)
	enum class EQuickTransformerMode             TransformMode;                                     // 0xA9(0x1)(None)
	bool                                         bSelectFaces;                                      // 0xAA(0x1)(None)
	bool                                         bSelectEdges;                                      // 0xAB(0x1)(None)
	bool                                         bSelectVertices;                                   // 0xAC(0x1)(None)
	bool                                         bShowWireframe;                                    // 0xAD(0x1)(None)
	uint8                                        Pad_1CBA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EWeightScheme                     SelectedWeightScheme;                              // 0xB0(0x4)(None)
	uint8                                        Pad_1CBB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       HandleWeight;                                      // 0xB8(0x8)(None)
	bool                                         bPostFixHandles;                                   // 0xC0(0x1)(None)
	uint8                                        Pad_1CBC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDeformMeshPolygonsTransformProperties* GetDefaultObj();

};

// 0x1710 (0x1810 - 0x100)
// Class MeshModelingToolsExp.DeformMeshPolygonsTool
class UDeformMeshPolygonsTool : public UMeshSurfacePointTool
{
public:
	uint8                                        Pad_1CBE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AInternalToolFrameworkActor*           PreviewMeshActor;                                  // 0x108(0x8)(ZeroConstructor)
	class UDynamicMeshComponent*                 DynamicMeshComponent;                              // 0x110(0x8)(ZeroConstructor)
	class UDeformMeshPolygonsTransformProperties* TransformProps;                                    // 0x118(0x8)(ZeroConstructor)
	uint8                                        Pad_1CBF[0x16F0];                                  // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDeformMeshPolygonsTool* GetDefaultObj();

};

// 0x38 (0xE0 - 0xA8)
// Class MeshModelingToolsExp.DisplaceMeshCommonProperties
class UDisplaceMeshCommonProperties : public UInteractiveToolPropertySet
{
public:
	enum class EDisplaceMeshToolDisplaceType     DisplacementType;                                  // 0xA8(0x1)(None)
	uint8                                        Pad_1CE0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DisplaceIntensity;                                 // 0xAC(0x4)(None)
	int32                                        RandomSeed;                                        // 0xB0(0x4)(None)
	enum class EDisplaceMeshToolSubdivisionType  SubdivisionType;                                   // 0xB4(0x1)(None)
	uint8                                        Pad_1CE1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Subdivisions;                                      // 0xB8(0x4)(None)
	class FName                                  WeightMap;                                         // 0xBC(0x8)(None)
	uint8                                        Pad_1CE2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        WeightMapsList;                                    // 0xC8(0x10)(None)
	bool                                         bInvertWeightMap;                                  // 0xD8(0x1)(None)
	bool                                         bShowWireframe;                                    // 0xD9(0x1)(None)
	bool                                         bDisableSizeWarning;                               // 0xDA(0x1)(None)
	uint8                                        Pad_1CE3[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDisplaceMeshCommonProperties* GetDefaultObj();

	void GetWeightMapsFunc(const TArray<class FString>& ReturnValue);
};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.SelectiveTessellationProperties
class USelectiveTessellationProperties : public UInteractiveToolPropertySet
{
public:
	enum class EDisplaceMeshToolTriangleSelectionType SelectionType;                                     // 0xA8(0x1)(None)
	uint8                                        Pad_1CE9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ActiveMaterial;                                    // 0xAC(0x8)(None)
	uint8                                        Pad_1CEA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        MaterialIDList;                                    // 0xB8(0x10)(None)

	static class UClass* StaticClass();
	static class USelectiveTessellationProperties* GetDefaultObj();

	void GetMaterialIDsFunc(const TArray<class FString>& ReturnValue);
};

// 0x48 (0xF0 - 0xA8)
// Class MeshModelingToolsExp.DisplaceMeshTextureMapProperties
class UDisplaceMeshTextureMapProperties : public UInteractiveToolPropertySet
{
public:
	class UTexture2D*                            DisplacementMap;                                   // 0xA8(0x8)(ZeroConstructor)
	enum class EDisplaceMeshToolChannelType      Channel;                                           // 0xB0(0x1)(None)
	uint8                                        Pad_1CEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DisplacementMapBaseValue;                          // 0xB4(0x4)(None)
	struct FVector2D                             UVScale;                                           // 0xB8(0x10)(None)
	struct FVector2D                             UVOffset;                                          // 0xC8(0x10)(None)
	bool                                         bApplyAdjustmentCurve;                             // 0xD8(0x1)(None)
	uint8                                        Pad_1CF0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           AdjustmentCurve;                                   // 0xE0(0x8)(ZeroConstructor)
	bool                                         bRecalcNormals;                                    // 0xE8(0x1)(None)
	uint8                                        Pad_1CF1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDisplaceMeshTextureMapProperties* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class MeshModelingToolsExp.DisplaceMeshDirectionalFilterProperties
class UDisplaceMeshDirectionalFilterProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bEnableFilter;                                     // 0xA8(0x1)(None)
	uint8                                        Pad_1CF6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               FilterDirection;                                   // 0xB0(0x18)(None)
	float                                        FilterWidth;                                       // 0xC8(0x4)(None)
	uint8                                        Pad_1CF7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDisplaceMeshDirectionalFilterProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.DisplaceMeshPerlinNoiseProperties
class UDisplaceMeshPerlinNoiseProperties : public UInteractiveToolPropertySet
{
public:
	TArray<struct FPerlinLayerProperties>        PerlinLayerProperties;                             // 0xA8(0x10)(None)

	static class UClass* StaticClass();
	static class UDisplaceMeshPerlinNoiseProperties* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.DisplaceMeshSineWaveProperties
class UDisplaceMeshSineWaveProperties : public UInteractiveToolPropertySet
{
public:
	float                                        SineWaveFrequency;                                 // 0xA8(0x4)(None)
	float                                        SineWavePhaseShift;                                // 0xAC(0x4)(None)
	struct FVector                               SineWaveDirection;                                 // 0xB0(0x18)(None)

	static class UClass* StaticClass();
	static class UDisplaceMeshSineWaveProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.DisplaceMeshToolBuilder
class UDisplaceMeshToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UDisplaceMeshToolBuilder* GetDefaultObj();

};

// 0x3A8 (0x460 - 0xB8)
// Class MeshModelingToolsExp.DisplaceMeshTool
class UDisplaceMeshTool : public USingleSelectionMeshEditingTool
{
public:
	class UDisplaceMeshCommonProperties*         CommonProperties;                                  // 0xB8(0x8)(ZeroConstructor)
	class UDisplaceMeshDirectionalFilterProperties* DirectionalFilterProperties;                       // 0xC0(0x8)(ZeroConstructor)
	class UDisplaceMeshTextureMapProperties*     TextureMapProperties;                              // 0xC8(0x8)(ZeroConstructor)
	class UDisplaceMeshPerlinNoiseProperties*    NoiseProperties;                                   // 0xD0(0x8)(ZeroConstructor)
	class UDisplaceMeshSineWaveProperties*       SineWaveProperties;                                // 0xD8(0x8)(ZeroConstructor)
	class USelectiveTessellationProperties*      SelectiveTessellationProperties;                   // 0xE0(0x8)(ZeroConstructor)
	class UCurveFloat*                           ActiveContrastCurveTarget;                         // 0xE8(0x8)(ZeroConstructor)
	uint8                                        Pad_1D06[0x340];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class AInternalToolFrameworkActor*           PreviewMeshActor;                                  // 0x430(0x8)(ZeroConstructor)
	class UDynamicMeshComponent*                 DynamicMeshComponent;                              // 0x438(0x8)(ZeroConstructor)
	uint8                                        Pad_1D07[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDisplaceMeshTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingToolsExp.DrawPolyPathToolBuilder
class UDrawPolyPathToolBuilder : public UMeshSurfacePointToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UDrawPolyPathToolBuilder* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class MeshModelingToolsExp.DrawPolyPathProperties
class UDrawPolyPathProperties : public UInteractiveToolPropertySet
{
public:
	enum class EDrawPolyPathWidthMode            WidthMode;                                         // 0xA8(0x4)(None)
	float                                        Width;                                             // 0xAC(0x4)(None)
	bool                                         bRoundedCorners;                                   // 0xB0(0x1)(None)
	uint8                                        Pad_1D0F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EDrawPolyPathRadiusMode           RadiusMode;                                        // 0xB4(0x4)(None)
	float                                        CornerRadius;                                      // 0xB8(0x4)(None)
	int32                                        RadialSlices;                                      // 0xBC(0x4)(None)
	bool                                         bSinglePolyGroup;                                  // 0xC0(0x1)(None)
	uint8                                        Pad_1D11[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EDrawPolyPathExtrudeMode          ExtrudeMode;                                       // 0xC4(0x4)(None)
	float                                        ExtrudeHeight;                                     // 0xC8(0x4)(None)
	float                                        RampStartRatio;                                    // 0xCC(0x4)(None)

	static class UClass* StaticClass();
	static class UDrawPolyPathProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.DrawPolyPathExtrudeProperties
class UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet
{
public:
	enum class EDrawPolyPathExtrudeDirection     Direction;                                         // 0xA8(0x4)(None)
	uint8                                        Pad_1D13[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDrawPolyPathExtrudeProperties* GetDefaultObj();

};

// 0x1E8 (0x280 - 0x98)
// Class MeshModelingToolsExp.DrawPolyPathTool
class UDrawPolyPathTool : public UInteractiveTool
{
public:
	uint8                                        Pad_1D15[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xB0(0x8)(ZeroConstructor)
	class UDrawPolyPathProperties*               TransformProps;                                    // 0xB8(0x8)(ZeroConstructor)
	class UDrawPolyPathExtrudeProperties*        ExtrudeProperties;                                 // 0xC0(0x8)(ZeroConstructor)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0xC8(0x8)(ZeroConstructor)
	uint8                                        Pad_1D16[0xC0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UConstructionPlaneMechanic*            PlaneMechanic;                                     // 0x190(0x8)(ZeroConstructor)
	uint8                                        Pad_1D17[0xC0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolyEditPreviewMesh*                  EditPreview;                                       // 0x258(0x8)(ZeroConstructor)
	class UPlaneDistanceFromHitMechanic*         ExtrudeHeightMechanic;                             // 0x260(0x8)(ZeroConstructor)
	class USpatialCurveDistanceMechanic*         CurveDistMechanic;                                 // 0x268(0x8)(ZeroConstructor)
	class UCollectSurfacePathMechanic*           SurfacePathMechanic;                               // 0x270(0x8)(ZeroConstructor)
	uint8                                        Pad_1D19[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDrawPolyPathTool* GetDefaultObj();

};

// 0x40 (0x2C8 - 0x288)
// Class MeshModelingToolsExp.DynamicMeshBrushTool
class UDynamicMeshBrushTool : public UBaseBrushTool
{
public:
	class UPreviewMesh*                          PreviewMesh;                                       // 0x288(0x8)(ZeroConstructor)
	uint8                                        Pad_1D1B[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicMeshBrushTool* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class MeshModelingToolsExp.DynamicMeshSculptToolBuilder
class UDynamicMeshSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
public:
	uint8                                        Pad_1D1C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicMeshSculptToolBuilder* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.DynamicMeshBrushProperties
class UDynamicMeshBrushProperties : public UInteractiveToolPropertySet
{
public:
	struct FBrushToolRadius                      BrushSize;                                         // 0xA8(0x14)(None)
	float                                        BrushFalloffAmount;                                // 0xBC(0x4)(None)
	float                                        Depth;                                             // 0xC0(0x4)(None)
	bool                                         bHitBackFaces;                                     // 0xC4(0x1)(None)
	uint8                                        Pad_1D1E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicMeshBrushProperties* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class MeshModelingToolsExp.DynamicMeshBrushSculptProperties
class UDynamicMeshBrushSculptProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bIsRemeshingEnabled;                               // 0xA8(0x1)(None)
	enum class EDynamicMeshSculptBrushType       PrimaryBrushType;                                  // 0xA9(0x1)(None)
	uint8                                        Pad_1D23[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PrimaryBrushSpeed;                                 // 0xAC(0x4)(None)
	bool                                         bPreserveUVFlow;                                   // 0xB0(0x1)(None)
	bool                                         bFreezeTarget;                                     // 0xB1(0x1)(None)
	uint8                                        Pad_1D24[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SmoothBrushSpeed;                                  // 0xB4(0x4)(None)
	bool                                         bDetailPreservingSmooth;                           // 0xB8(0x1)(None)
	uint8                                        Pad_1D25[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicMeshBrushSculptProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.DynamicSculptToolActions
class UDynamicSculptToolActions : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_1D27[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicSculptToolActions* GetDefaultObj();

	void DiscardAttributes();
};

// 0x10 (0xC8 - 0xB8)
// Class MeshModelingToolsExp.BrushRemeshProperties
class UBrushRemeshProperties : public URemeshProperties
{
public:
	bool                                         bEnableRemeshing;                                  // 0xB8(0x1)(None)
	uint8                                        Pad_1D29[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TriangleSize;                                      // 0xBC(0x4)(None)
	int32                                        PreserveDetail;                                    // 0xC0(0x4)(None)
	int32                                        Iterations;                                        // 0xC4(0x4)(None)

	static class UClass* StaticClass();
	static class UBrushRemeshProperties* GetDefaultObj();

};

// 0x48 (0xF0 - 0xA8)
// Class MeshModelingToolsExp.FixedPlaneBrushProperties
class UFixedPlaneBrushProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bPropertySetEnabled;                               // 0xA8(0x1)(None)
	bool                                         bShowGizmo;                                        // 0xA9(0x1)(None)
	uint8                                        Pad_1D2C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0xB0(0x18)(None)
	uint8                                        Pad_1D2E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Rotation;                                          // 0xD0(0x20)(None)

	static class UClass* StaticClass();
	static class UFixedPlaneBrushProperties* GetDefaultObj();

};

// 0xF10 (0x1010 - 0x100)
// Class MeshModelingToolsExp.DynamicMeshSculptTool
class UDynamicMeshSculptTool : public UMeshSurfacePointTool
{
public:
	class UDynamicMeshBrushProperties*           BrushProperties;                                   // 0x100(0x8)(ZeroConstructor)
	class UDynamicMeshBrushSculptProperties*     SculptProperties;                                  // 0x108(0x8)(ZeroConstructor)
	class USculptMaxBrushProperties*             SculptMaxBrushProperties;                          // 0x110(0x8)(ZeroConstructor)
	class UKelvinBrushProperties*                KelvinBrushProperties;                             // 0x118(0x8)(ZeroConstructor)
	class UBrushRemeshProperties*                RemeshProperties;                                  // 0x120(0x8)(ZeroConstructor)
	class UFixedPlaneBrushProperties*            GizmoProperties;                                   // 0x128(0x8)(ZeroConstructor)
	class UMeshEditingViewProperties*            ViewProperties;                                    // 0x130(0x8)(ZeroConstructor)
	class UDynamicSculptToolActions*             SculptToolActions;                                 // 0x138(0x8)(ZeroConstructor)
	uint8                                        Pad_1D2F[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UBrushStampIndicator*                  BrushIndicator;                                    // 0x1A0(0x8)(ZeroConstructor)
	class UMaterialInstanceDynamic*              BrushIndicatorMaterial;                            // 0x1A8(0x8)(ZeroConstructor)
	class UPreviewMesh*                          BrushIndicatorMesh;                                // 0x1B0(0x8)(ZeroConstructor)
	class UOctreeDynamicMeshComponent*           DynamicMeshComponent;                              // 0x1B8(0x8)(ZeroConstructor)
	class UMaterialInstanceDynamic*              ActiveOverrideMaterial;                            // 0x1C0(0x8)(ZeroConstructor)
	uint8                                        Pad_1D30[0xE28];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UCombinedTransformGizmo*               PlaneTransformGizmo;                               // 0xFF0(0x8)(ZeroConstructor)
	class UTransformProxy*                       PlaneTransformProxy;                               // 0xFF8(0x8)(ZeroConstructor)
	uint8                                        Pad_1D31[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicMeshSculptTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.EditNormalsToolBuilder
class UEditNormalsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UEditNormalsToolBuilder* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.EditNormalsToolProperties
class UEditNormalsToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bRecomputeNormals;                                 // 0xA8(0x1)(None)
	enum class ENormalCalculationMethod          NormalCalculationMethod;                           // 0xA9(0x1)(None)
	bool                                         bFixInconsistentNormals;                           // 0xAA(0x1)(None)
	bool                                         bInvertNormals;                                    // 0xAB(0x1)(None)
	enum class ESplitNormalMethod                SplitNormalMethod;                                 // 0xAC(0x1)(None)
	uint8                                        Pad_1D33[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SharpEdgeAngleThreshold;                           // 0xB0(0x4)(None)
	bool                                         bAllowSharpVertices;                               // 0xB4(0x1)(None)
	uint8                                        Pad_1D34[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditNormalsToolProperties* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class MeshModelingToolsExp.EditNormalsAdvancedProperties
class UEditNormalsAdvancedProperties : public UInteractiveToolPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditNormalsAdvancedProperties* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class MeshModelingToolsExp.EditNormalsOperatorFactory
class UEditNormalsOperatorFactory : public UObject
{
public:
	uint8                                        Pad_1D3A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEditNormalsTool*                      Tool;                                              // 0x30(0x8)(None)
	uint8                                        Pad_1D3B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditNormalsOperatorFactory* GetDefaultObj();

};

// 0x98 (0x150 - 0xB8)
// Class MeshModelingToolsExp.EditNormalsTool
class UEditNormalsTool : public UMultiSelectionMeshEditingTool
{
public:
	class UEditNormalsToolProperties*            BasicProperties;                                   // 0xB8(0x8)(ZeroConstructor)
	class UEditNormalsAdvancedProperties*        AdvancedProperties;                                // 0xC0(0x8)(ZeroConstructor)
	class UPolygroupLayersProperties*            PolygroupLayerProperties;                          // 0xC8(0x8)(ZeroConstructor)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                          // 0xD0(0x10)(ZeroConstructor)
	uint8                                        Pad_1D3C[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditNormalsTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.EditPivotToolBuilder
class UEditPivotToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UEditPivotToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.EditPivotToolProperties
class UEditPivotToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bEnableSnapDragging;                               // 0xA8(0x1)(None)
	enum class EEditPivotSnapDragRotationMode    RotationMode;                                      // 0xA9(0x1)(None)
	uint8                                        Pad_1D3D[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditPivotToolProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.EditPivotToolActionPropertySet
class UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_1D3E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUseWorldBox;                                      // 0xB0(0x1)(None)
	uint8                                        Pad_1D3F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditPivotToolActionPropertySet* GetDefaultObj();

	void WorldOrigin();
	void Top();
	void Right();
	void Left();
	void Front();
	void Center();
	void Bottom();
	void Back();
};

// 0x178 (0x230 - 0xB8)
// Class MeshModelingToolsExp.EditPivotTool
class UEditPivotTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_1D41[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEditPivotToolProperties*              TransformProps;                                    // 0xC0(0x8)(ZeroConstructor)
	class UEditPivotToolActionPropertySet*       EditPivotActions;                                  // 0xC8(0x8)(ZeroConstructor)
	uint8                                        Pad_1D42[0xD0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEditPivotTarget>              ActiveGizmos;                                      // 0x1A0(0x10)(ZeroConstructor)
	class UDragAlignmentMechanic*                DragAlignmentMechanic;                             // 0x1B0(0x8)(ZeroConstructor)
	uint8                                        Pad_1D43[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditPivotTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingToolsExp.EditUVIslandsToolBuilder
class UEditUVIslandsToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UEditUVIslandsToolBuilder* GetDefaultObj();

};

// 0x3E0 (0x4E0 - 0x100)
// Class MeshModelingToolsExp.EditUVIslandsTool
class UEditUVIslandsTool : public UMeshSurfacePointTool
{
public:
	class UExistingMeshMaterialProperties*       MaterialSettings;                                  // 0x100(0x8)(ZeroConstructor)
	class UMaterialInstanceDynamic*              CheckerMaterial;                                   // 0x108(0x8)(ZeroConstructor)
	class AInternalToolFrameworkActor*           PreviewMeshActor;                                  // 0x110(0x8)(ZeroConstructor)
	class UDynamicMeshComponent*                 DynamicMeshComponent;                              // 0x118(0x8)(ZeroConstructor)
	class UPolygonSelectionMechanic*             SelectionMechanic;                                 // 0x120(0x8)(ZeroConstructor)
	uint8                                        Pad_1D47[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCombinedTransformGizmo*               TransformGizmo;                                    // 0x130(0x8)(ZeroConstructor)
	class UTransformProxy*                       TransformProxy;                                    // 0x138(0x8)(ZeroConstructor)
	uint8                                        Pad_1D48[0x3A0];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditUVIslandsTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.HoleFillToolBuilder
class UHoleFillToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UHoleFillToolBuilder* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class MeshModelingToolsExp.SmoothHoleFillProperties
class USmoothHoleFillProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bConstrainToHoleInterior;                          // 0xA8(0x1)(None)
	uint8                                        Pad_1D49[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RemeshingExteriorRegionWidth;                      // 0xAC(0x4)(None)
	int32                                        SmoothingExteriorRegionWidth;                      // 0xB0(0x4)(None)
	int32                                        SmoothingInteriorRegionWidth;                      // 0xB4(0x4)(None)
	float                                        InteriorSmoothness;                                // 0xB8(0x4)(None)
	uint8                                        Pad_1D4A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FillDensityScalar;                                 // 0xC0(0x8)(None)
	bool                                         bProjectDuringRemesh;                              // 0xC8(0x1)(None)
	uint8                                        Pad_1D4B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USmoothHoleFillProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.HoleFillToolProperties
class UHoleFillToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EHoleFillOpFillType               FillType;                                          // 0xA8(0x1)(None)
	bool                                         bRemoveIsolatedTriangles;                          // 0xA9(0x1)(None)
	bool                                         bQuickFillSmallHoles;                              // 0xAA(0x1)(None)
	uint8                                        Pad_1D4C[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoleFillToolProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.HoleFillToolActions
class UHoleFillToolActions : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_1D4D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoleFillToolActions* GetDefaultObj();

	void SelectAll();
	void Clear();
};

// 0x50 (0xF8 - 0xA8)
// Class MeshModelingToolsExp.HoleFillStatisticsProperties
class UHoleFillStatisticsProperties : public UInteractiveToolPropertySet
{
public:
	class FString                                InitialHoles;                                      // 0xA8(0x10)(None)
	class FString                                SelectedHoles;                                     // 0xB8(0x10)(None)
	class FString                                SuccessfulFills;                                   // 0xC8(0x10)(None)
	class FString                                FailedFills;                                       // 0xD8(0x10)(None)
	class FString                                RemainingHoles;                                    // 0xE8(0x10)(None)

	static class UClass* StaticClass();
	static class UHoleFillStatisticsProperties* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MeshModelingToolsExp.HoleFillOperatorFactory
class UHoleFillOperatorFactory : public UObject
{
public:
	uint8                                        Pad_1D4E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHoleFillTool*                         FillTool;                                          // 0x30(0x8)(None)

	static class UClass* StaticClass();
	static class UHoleFillOperatorFactory* GetDefaultObj();

};

// 0x188 (0x240 - 0xB8)
// Class MeshModelingToolsExp.HoleFillTool
class UHoleFillTool : public USingleSelectionMeshEditingTool
{
public:
	class USmoothHoleFillProperties*             SmoothHoleFillProperties;                          // 0xB8(0x8)(ZeroConstructor)
	class UHoleFillToolProperties*               Properties;                                        // 0xC0(0x8)(ZeroConstructor)
	class UHoleFillToolActions*                  Actions;                                           // 0xC8(0x8)(ZeroConstructor)
	class UHoleFillStatisticsProperties*         Statistics;                                        // 0xD0(0x8)(ZeroConstructor)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xD8(0x8)(ZeroConstructor)
	class UBoundarySelectionMechanic*            SelectionMechanic;                                 // 0xE0(0x8)(ZeroConstructor)
	uint8                                        Pad_1D50[0x158];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHoleFillTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.LatticeDeformerToolBuilder
class ULatticeDeformerToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class ULatticeDeformerToolBuilder* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class MeshModelingToolsExp.LatticeDeformerToolProperties
class ULatticeDeformerToolProperties : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_1D52[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        XAxisResolution;                                   // 0xB0(0x4)(None)
	int32                                        YAxisResolution;                                   // 0xB4(0x4)(None)
	int32                                        ZAxisResolution;                                   // 0xB8(0x4)(None)
	float                                        Padding;                                           // 0xBC(0x4)(None)
	enum class ELatticeInterpolationType         InterpolationType;                                 // 0xC0(0x1)(None)
	bool                                         bDeformNormals;                                    // 0xC1(0x1)(None)
	bool                                         bCanChangeResolution;                              // 0xC2(0x1)(None)
	uint8                                        Pad_1D53[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EToolContextCoordinateSystem      GizmoCoordinateSystem;                             // 0xC4(0x4)(None)
	bool                                         bSetPivotMode;                                     // 0xC8(0x1)(None)
	bool                                         bSoftDeformation;                                  // 0xC9(0x1)(None)
	uint8                                        Pad_1D54[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULatticeDeformerToolProperties* GetDefaultObj();

	void Constrain();
	void ClearConstraints();
};

// 0x10 (0x38 - 0x28)
// Class MeshModelingToolsExp.LatticeDeformerOperatorFactory
class ULatticeDeformerOperatorFactory : public UObject
{
public:
	uint8                                        Pad_1D55[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULatticeDeformerTool*                  LatticeDeformerTool;                               // 0x30(0x8)(None)

	static class UClass* StaticClass();
	static class ULatticeDeformerOperatorFactory* GetDefaultObj();

};

// 0xA8 (0x160 - 0xB8)
// Class MeshModelingToolsExp.LatticeDeformerTool
class ULatticeDeformerTool : public USingleSelectionMeshEditingTool
{
public:
	uint8                                        Pad_1D56[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class ULatticeControlPointsMechanic*         ControlPointsMechanic;                             // 0xD8(0x8)(ZeroConstructor)
	class ULatticeDeformerToolProperties*        Settings;                                          // 0xE0(0x8)(ZeroConstructor)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xE8(0x8)(ZeroConstructor)
	bool                                         bLatticeDeformed;                                  // 0xF0(0x1)(None)
	uint8                                        Pad_1D57[0x6F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULatticeDeformerTool* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class MeshModelingToolsExp.MeshAttributePaintToolBuilder
class UMeshAttributePaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
public:
	uint8                                        Pad_1D59[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshAttributePaintToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.MeshAttributePaintBrushOperationProperties
class UMeshAttributePaintBrushOperationProperties : public UInteractiveToolPropertySet
{
public:
	enum class EBrushActionMode                  BrushAction;                                       // 0xA8(0x4)(None)
	uint8                                        Pad_1D5D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshAttributePaintBrushOperationProperties* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.MeshAttributePaintToolProperties
class UMeshAttributePaintToolProperties : public UInteractiveToolPropertySet
{
public:
	class FString                                Attribute;                                         // 0xA8(0x10)(None)
	uint8                                        Pad_1D5F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshAttributePaintToolProperties* GetDefaultObj();

	void GetAttributeNames(const TArray<class FString>& ReturnValue);
};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.MeshAttributePaintEditActions
class UMeshAttributePaintEditActions : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_1D66[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshAttributePaintEditActions* GetDefaultObj();

};

// 0x508 (0x7D0 - 0x2C8)
// Class MeshModelingToolsExp.MeshAttributePaintTool
class UMeshAttributePaintTool : public UDynamicMeshBrushTool
{
public:
	class UMeshAttributePaintBrushOperationProperties* BrushActionProps;                                  // 0x2C8(0x8)(ZeroConstructor)
	class UMeshAttributePaintToolProperties*     AttribProps;                                       // 0x2D0(0x8)(ZeroConstructor)
	uint8                                        Pad_1D67[0x4F8];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshAttributePaintTool* GetDefaultObj();

};

// 0xF8 (0x1B0 - 0xB8)
// Class MeshModelingToolsExp.MeshBoundaryToolBase
class UMeshBoundaryToolBase : public USingleSelectionMeshEditingTool
{
public:
	uint8                                        Pad_1D69[0xE8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolygonSelectionMechanic*             SelectionMechanic;                                 // 0x1A0(0x8)(ZeroConstructor)
	uint8                                        Pad_1D6A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshBoundaryToolBase* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingToolsExp.MeshGroupPaintToolBuilder
class UMeshGroupPaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UMeshGroupPaintToolBuilder* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingToolsExp.GroupPaintBrushFilterProperties
class UGroupPaintBrushFilterProperties : public UInteractiveToolPropertySet
{
public:
	enum class EMeshGroupPaintBrushType          PrimaryBrushType;                                  // 0xA8(0x1)(None)
	enum class EMeshGroupPaintInteractionType    SubToolType;                                       // 0xA9(0x1)(None)
	uint8                                        Pad_1D6C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BrushSize;                                         // 0xAC(0x4)(None)
	enum class EMeshGroupPaintBrushAreaType      BrushAreaMode;                                     // 0xB0(0x1)(None)
	bool                                         bHitBackFaces;                                     // 0xB1(0x1)(None)
	uint8                                        Pad_1D6D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SetGroup;                                          // 0xB4(0x4)(None)
	bool                                         bOnlySetUngrouped;                                 // 0xB8(0x1)(None)
	uint8                                        Pad_1D6E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EraseGroup;                                        // 0xBC(0x4)(None)
	bool                                         bOnlyEraseCurrent;                                 // 0xC0(0x1)(None)
	uint8                                        Pad_1D70[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AngleThreshold;                                    // 0xC4(0x4)(None)
	bool                                         bUVSeams;                                          // 0xC8(0x1)(None)
	bool                                         bNormalSeams;                                      // 0xC9(0x1)(None)
	enum class EMeshGroupPaintVisibilityType     VisibilityFilter;                                  // 0xCA(0x1)(None)
	uint8                                        Pad_1D71[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinTriVertCount;                                   // 0xCC(0x4)(None)
	bool                                         bShowHitGroup;                                     // 0xD0(0x1)(None)
	bool                                         bShowAllGroups;                                    // 0xD1(0x1)(None)
	uint8                                        Pad_1D72[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGroupPaintBrushFilterProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.MeshGroupPaintToolActionPropertySet
class UMeshGroupPaintToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_1D73[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshGroupPaintToolActionPropertySet* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingToolsExp.MeshGroupPaintToolFreezeActions
class UMeshGroupPaintToolFreezeActions : public UMeshGroupPaintToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UMeshGroupPaintToolFreezeActions* GetDefaultObj();

	void UnfreezeAll();
	void ShrinkCurrent();
	void GrowCurrent();
	void FreezeOthers();
	void FreezeCurrent();
	void FloodFillCurrent();
	void ClearCurrent();
	void ClearAll();
};

// 0xA98 (0xB98 - 0x100)
// Class MeshModelingToolsExp.MeshSculptToolBase
class UMeshSculptToolBase : public UMeshSurfacePointTool
{
public:
	class USculptBrushProperties*                BrushProperties;                                   // 0x100(0x8)(ZeroConstructor)
	class UWorkPlaneProperties*                  GizmoProperties;                                   // 0x108(0x8)(ZeroConstructor)
	uint8                                        Pad_1D7E[0x120];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, class UMeshSculptBrushOpProps*>  BrushOpPropSets;                                   // 0x230(0x50)(ZeroConstructor)
	uint8                                        Pad_1D7F[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, class UMeshSculptBrushOpProps*>  SecondaryBrushOpPropSets;                          // 0x2D0(0x50)(ZeroConstructor)
	uint8                                        Pad_1D80[0x6F0];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshEditingViewProperties*            ViewProperties;                                    // 0xA10(0x8)(ZeroConstructor)
	class UMaterialInstanceDynamic*              ActiveOverrideMaterial;                            // 0xA18(0x8)(ZeroConstructor)
	class UBrushStampIndicator*                  BrushIndicator;                                    // 0xA20(0x8)(ZeroConstructor)
	bool                                         bIsVolumetricIndicator;                            // 0xA28(0x1)(None)
	uint8                                        Pad_1D81[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              BrushIndicatorMaterial;                            // 0xA30(0x8)(ZeroConstructor)
	class UPreviewMesh*                          BrushIndicatorMesh;                                // 0xA38(0x8)(ZeroConstructor)
	class UCombinedTransformGizmo*               PlaneTransformGizmo;                               // 0xA40(0x8)(ZeroConstructor)
	class UTransformProxy*                       PlaneTransformProxy;                               // 0xA48(0x8)(ZeroConstructor)
	uint8                                        Pad_1D82[0x148];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshSculptToolBase* GetDefaultObj();

};

// 0x438 (0xFD0 - 0xB98)
// Class MeshModelingToolsExp.MeshGroupPaintTool
class UMeshGroupPaintTool : public UMeshSculptToolBase
{
public:
	class UPolygroupLayersProperties*            PolygroupLayerProperties;                          // 0xB98(0x8)(ZeroConstructor)
	class UGroupPaintBrushFilterProperties*      FilterProperties;                                  // 0xBA0(0x8)(ZeroConstructor)
	class UGroupPaintBrushOpProps*               PaintBrushOpProperties;                            // 0xBA8(0x8)(ZeroConstructor)
	class UGroupEraseBrushOpProps*               EraseBrushOpProperties;                            // 0xBB0(0x8)(ZeroConstructor)
	class UMeshGroupPaintToolFreezeActions*      FreezeActions;                                     // 0xBB8(0x8)(ZeroConstructor)
	uint8                                        Pad_1D84[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolyLassoMarqueeMechanic*             PolyLassoMechanic;                                 // 0xBC8(0x8)(ZeroConstructor)
	class AInternalToolFrameworkActor*           PreviewMeshActor;                                  // 0xBD0(0x8)(ZeroConstructor)
	class UDynamicMeshComponent*                 DynamicMeshComponent;                              // 0xBD8(0x8)(ZeroConstructor)
	class UMeshElementsVisualizer*               MeshElementsDisplay;                               // 0xBE0(0x8)(ZeroConstructor)
	uint8                                        Pad_1D85[0x3E8];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshGroupPaintTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.MeshInspectorToolBuilder
class UMeshInspectorToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UMeshInspectorToolBuilder* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class MeshModelingToolsExp.MeshInspectorProperties
class UMeshInspectorProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bWireframe;                                        // 0xA8(0x1)(None)
	bool                                         bBoundaryEdges;                                    // 0xA9(0x1)(None)
	bool                                         bBowtieVertices;                                   // 0xAA(0x1)(None)
	bool                                         bPolygonBorders;                                   // 0xAB(0x1)(None)
	bool                                         bUVSeams;                                          // 0xAC(0x1)(None)
	bool                                         bUVBowties;                                        // 0xAD(0x1)(None)
	bool                                         bMissingUVs;                                       // 0xAE(0x1)(None)
	bool                                         bNormalSeams;                                      // 0xAF(0x1)(None)
	bool                                         bTangentSeams;                                     // 0xB0(0x1)(None)
	bool                                         bNormalVectors;                                    // 0xB1(0x1)(None)
	bool                                         bTangentVectors;                                   // 0xB2(0x1)(None)
	uint8                                        Pad_1D87[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NormalLength;                                      // 0xB4(0x4)(None)
	float                                        TangentLength;                                     // 0xB8(0x4)(None)
	enum class EMeshInspectorToolDrawIndexMode   ShowIndices;                                       // 0xBC(0x1)(None)
	uint8                                        Pad_1D88[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshInspectorProperties* GetDefaultObj();

};

// 0x78 (0x120 - 0xA8)
// Class MeshModelingToolsExp.MeshInspectorMaterialProperties
class UMeshInspectorMaterialProperties : public UInteractiveToolPropertySet
{
public:
	enum class EMeshInspectorMaterialMode        MaterialMode;                                      // 0xA8(0x1)(None)
	uint8                                        Pad_1D89[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CheckerDensity;                                    // 0xAC(0x4)(None)
	class UMaterialInterface*                    OverrideMaterial;                                  // 0xB0(0x8)(ZeroConstructor)
	class FString                                UVChannel;                                         // 0xB8(0x10)(None)
	TArray<class FString>                        UVChannelNamesList;                                // 0xC8(0x10)(None)
	bool                                         bFlatShading;                                      // 0xD8(0x1)(None)
	uint8                                        Pad_1D8A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0xDC(0x10)(None)
	uint8                                        Pad_1D8B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Opacity;                                           // 0xF0(0x8)(None)
	struct FLinearColor                          TransparentMaterialColor;                          // 0xF8(0x10)(None)
	bool                                         bTwoSided;                                         // 0x108(0x1)(None)
	uint8                                        Pad_1D8C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CheckerMaterial;                                   // 0x110(0x8)(ZeroConstructor)
	class UMaterialInstanceDynamic*              ActiveCustomMaterial;                              // 0x118(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMeshInspectorMaterialProperties* GetDefaultObj();

	void GetUVChannelNamesFunc(const TArray<class FString>& ReturnValue);
};

// 0x198 (0x250 - 0xB8)
// Class MeshModelingToolsExp.MeshInspectorTool
class UMeshInspectorTool : public USingleSelectionMeshEditingTool
{
public:
	class UMeshInspectorProperties*              Settings;                                          // 0xB8(0x8)(ZeroConstructor)
	class UPolygroupLayersProperties*            PolygroupLayerProperties;                          // 0xC0(0x8)(ZeroConstructor)
	class UMeshInspectorMaterialProperties*      MaterialSettings;                                  // 0xC8(0x8)(ZeroConstructor)
	uint8                                        Pad_1D8F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPreviewMesh*                          PreviewMesh;                                       // 0xD8(0x8)(ZeroConstructor)
	class ULineSetComponent*                     DrawnLineSet;                                      // 0xE0(0x8)(ZeroConstructor)
	class UMaterialInterface*                    DefaultMaterial;                                   // 0xE8(0x8)(ZeroConstructor)
	uint8                                        Pad_1D90[0x160];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshInspectorTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingToolsExp.MeshSelectionToolBuilder
class UMeshSelectionToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UMeshSelectionToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.MeshSelectionToolActionPropertySet
class UMeshSelectionToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_1D91[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshSelectionToolActionPropertySet* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingToolsExp.MeshSelectionEditActions
class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UMeshSelectionEditActions* GetDefaultObj();

	void Shrink();
	void SelectAll();
	void OptimizeBorder();
	void LargestTriCountPart();
	void LargestAreaPart();
	void Invert();
	void Grow();
	void FloodFill();
	void ExpandToMaterials();
	void Clear();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingToolsExp.MeshSelectionMeshEditActions
class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UMeshSelectionMeshEditActions* GetDefaultObj();

	void SmoothBorder();
	void Separate();
	void FlipNormals();
	void Duplicate();
	void Disconnect();
	void Delete();
	void CreatePolygroup();
};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.MeshSelectionToolProperties
class UMeshSelectionToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EMeshSelectionToolPrimaryMode     SelectionMode;                                     // 0xA8(0x4)(None)
	float                                        AngleTolerance;                                    // 0xAC(0x4)(None)
	bool                                         bHitBackFaces;                                     // 0xB0(0x1)(None)
	bool                                         bShowPoints;                                       // 0xB1(0x1)(None)
	uint8                                        Pad_1D9C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMeshFacesColorMode               FaceColorMode;                                     // 0xB4(0x4)(None)

	static class UClass* StaticClass();
	static class UMeshSelectionToolProperties* GetDefaultObj();

};

// 0x438 (0x700 - 0x2C8)
// Class MeshModelingToolsExp.MeshSelectionTool
class UMeshSelectionTool : public UDynamicMeshBrushTool
{
public:
	uint8                                        Pad_1D9E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshSelectionToolProperties*          SelectionProps;                                    // 0x2D0(0x8)(ZeroConstructor)
	class UMeshSelectionEditActions*             SelectionActions;                                  // 0x2D8(0x8)(ZeroConstructor)
	class UMeshSelectionToolActionPropertySet*   EditActions;                                       // 0x2E0(0x8)(ZeroConstructor)
	class UMeshStatisticsProperties*             MeshStatisticsProperties;                          // 0x2E8(0x8)(ZeroConstructor)
	class UMeshElementsVisualizer*               MeshElementsDisplay;                               // 0x2F0(0x8)(ZeroConstructor)
	class UMeshUVChannelProperties*              UVChannelProperties;                               // 0x2F8(0x8)(ZeroConstructor)
	class UPolygroupLayersProperties*            PolygroupLayerProperties;                          // 0x300(0x8)(ZeroConstructor)
	uint8                                        Pad_1DA1[0x58];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshSelectionSet*                     Selection;                                         // 0x360(0x8)(ZeroConstructor)
	TArray<class AActor*>                        SpawnedActors;                                     // 0x368(0x10)(ZeroConstructor)
	uint8                                        Pad_1DA2[0x388];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshSelectionTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.MeshSpaceDeformerToolBuilder
class UMeshSpaceDeformerToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UMeshSpaceDeformerToolBuilder* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class MeshModelingToolsExp.MeshSpaceDeformerToolProperties
class UMeshSpaceDeformerToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class ENonlinearOperationType           SelectedOperationType;                             // 0xA8(0x1)(None)
	uint8                                        Pad_1DA6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UpperBoundsInterval;                               // 0xAC(0x4)(None)
	float                                        LowerBoundsInterval;                               // 0xB0(0x4)(None)
	float                                        BendDegrees;                                       // 0xB4(0x4)(None)
	float                                        TwistDegrees;                                      // 0xB8(0x4)(None)
	enum class EFlareProfileType                 FlareProfileType;                                  // 0xBC(0x1)(None)
	uint8                                        Pad_1DA8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FlarePercentY;                                     // 0xC0(0x4)(None)
	bool                                         bLockXAndYFlaring;                                 // 0xC4(0x1)(None)
	uint8                                        Pad_1DA9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FlarePercentX;                                     // 0xC8(0x4)(None)
	bool                                         bLockBottom;                                       // 0xCC(0x1)(None)
	bool                                         bShowOriginalMesh;                                 // 0xCD(0x1)(None)
	bool                                         bDrawVisualization;                                // 0xCE(0x1)(None)
	bool                                         bAlignToNormalOnCtrlClick;                         // 0xCF(0x1)(None)

	static class UClass* StaticClass();
	static class UMeshSpaceDeformerToolProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.MeshSpaceDeformerToolActionPropertySet
class UMeshSpaceDeformerToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_1DAC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshSpaceDeformerToolActionPropertySet* GetDefaultObj();

	void ShiftToCenter();
};

// 0x10 (0x38 - 0x28)
// Class MeshModelingToolsExp.SpaceDeformerOperatorFactory
class USpaceDeformerOperatorFactory : public UObject
{
public:
	uint8                                        Pad_1DAE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshSpaceDeformerTool*                SpaceDeformerTool;                                 // 0x30(0x8)(None)

	static class UClass* StaticClass();
	static class USpaceDeformerOperatorFactory* GetDefaultObj();

};

// 0x208 (0x2C0 - 0xB8)
// Class MeshModelingToolsExp.MeshSpaceDeformerTool
class UMeshSpaceDeformerTool : public USingleSelectionMeshEditingTool
{
public:
	class UMeshSpaceDeformerToolProperties*      Settings;                                          // 0xB8(0x8)(ZeroConstructor)
	class UMeshSpaceDeformerToolActionPropertySet* ToolActions;                                       // 0xC0(0x8)(ZeroConstructor)
	class UGizmoTransformChangeStateTarget*      StateTarget;                                       // 0xC8(0x8)(ZeroConstructor)
	class UDragAlignmentMechanic*                DragAlignmentMechanic;                             // 0xD0(0x8)(ZeroConstructor)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xD8(0x8)(ZeroConstructor)
	uint8                                        Pad_1DB0[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UPreviewMesh*                          OriginalMeshPreview;                               // 0xF0(0x8)(ZeroConstructor)
	class UIntervalGizmo*                        IntervalGizmo;                                     // 0xF8(0x8)(ZeroConstructor)
	class UCombinedTransformGizmo*               TransformGizmo;                                    // 0x100(0x8)(ZeroConstructor)
	class UTransformProxy*                       TransformProxy;                                    // 0x108(0x8)(ZeroConstructor)
	class UGizmoLocalFloatParameterSource*       UpIntervalSource;                                  // 0x110(0x8)(ZeroConstructor)
	class UGizmoLocalFloatParameterSource*       DownIntervalSource;                                // 0x118(0x8)(ZeroConstructor)
	class UGizmoLocalFloatParameterSource*       ForwardIntervalSource;                             // 0x120(0x8)(ZeroConstructor)
	uint8                                        Pad_1DB4[0x198];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshSpaceDeformerTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingToolsExp.MeshVertexSculptToolBuilder
class UMeshVertexSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UMeshVertexSculptToolBuilder* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.VertexBrushSculptProperties
class UVertexBrushSculptProperties : public UInteractiveToolPropertySet
{
public:
	enum class EMeshVertexSculptBrushType        PrimaryBrushType;                                  // 0xA8(0x1)(None)
	enum class EMeshSculptFalloffType            PrimaryFalloffType;                                // 0xA9(0x1)(None)
	enum class EMeshVertexSculptBrushFilterType  BrushFilter;                                       // 0xAA(0x1)(None)
	bool                                         bFreezeTarget;                                     // 0xAB(0x1)(None)
	TWeakObjectPtr<class UMeshVertexSculptTool>  Tool;                                              // 0xAC(0x8)(ZeroConstructor)
	uint8                                        Pad_1DB6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVertexBrushSculptProperties* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class MeshModelingToolsExp.VertexBrushAlphaProperties
class UVertexBrushAlphaProperties : public UInteractiveToolPropertySet
{
public:
	class UTexture2D*                            Alpha;                                             // 0xA8(0x8)(ZeroConstructor)
	float                                        RotationAngle;                                     // 0xB0(0x4)(None)
	bool                                         bRandomize;                                        // 0xB4(0x1)(None)
	uint8                                        Pad_1DB7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomRange;                                       // 0xB8(0x4)(None)
	uint8                                        Pad_1DB8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVertexBrushAlphaProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.MeshSymmetryProperties
class UMeshSymmetryProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bEnableSymmetry;                                   // 0xA8(0x1)(None)
	bool                                         bSymmetryCanBeEnabled;                             // 0xA9(0x1)(None)
	uint8                                        Pad_1DB9[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshSymmetryProperties* GetDefaultObj();

};

// 0x948 (0x14E0 - 0xB98)
// Class MeshModelingToolsExp.MeshVertexSculptTool
class UMeshVertexSculptTool : public UMeshSculptToolBase
{
public:
	class UVertexBrushSculptProperties*          SculptProperties;                                  // 0xB98(0x8)(ZeroConstructor)
	class UVertexBrushAlphaProperties*           AlphaProperties;                                   // 0xBA0(0x8)(ZeroConstructor)
	class UTexture2D*                            BrushAlpha;                                        // 0xBA8(0x8)(ZeroConstructor)
	class UMeshSymmetryProperties*               SymmetryProperties;                                // 0xBB0(0x8)(ZeroConstructor)
	class AInternalToolFrameworkActor*           PreviewMeshActor;                                  // 0xBB8(0x8)(ZeroConstructor)
	class UDynamicMeshComponent*                 DynamicMeshComponent;                              // 0xBC0(0x8)(ZeroConstructor)
	uint8                                        Pad_1DBA[0x918];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshVertexSculptTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.MirrorToolBuilder
class UMirrorToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UMirrorToolBuilder* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class MeshModelingToolsExp.MirrorToolProperties
class UMirrorToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EMirrorOperationMode              OperationMode;                                     // 0xA8(0x1)(None)
	bool                                         bCropAlongMirrorPlaneFirst;                        // 0xA9(0x1)(None)
	bool                                         bWeldVerticesOnMirrorPlane;                        // 0xAA(0x1)(None)
	uint8                                        Pad_1DBB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       PlaneTolerance;                                    // 0xB0(0x8)(None)
	bool                                         bAllowBowtieVertexCreation;                        // 0xB8(0x1)(None)
	enum class EMirrorCtrlClickBehavior          CtrlClickBehavior;                                 // 0xB9(0x1)(None)
	bool                                         bButtonsOnlyChangeOrientation;                     // 0xBA(0x1)(None)
	bool                                         bShowPreview;                                      // 0xBB(0x1)(None)
	enum class EMirrorSaveMode                   SaveMode;                                          // 0xBC(0x1)(None)
	uint8                                        Pad_1DBC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMirrorToolProperties* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class MeshModelingToolsExp.MirrorOperatorFactory
class UMirrorOperatorFactory : public UObject
{
public:
	uint8                                        Pad_1DBE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMirrorTool*                           MirrorTool;                                        // 0x30(0x8)(None)
	uint8                                        Pad_1DBF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMirrorOperatorFactory* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.MirrorToolActionPropertySet
class UMirrorToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_1DC1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMirrorToolActionPropertySet* GetDefaultObj();

	void Up();
	void ShiftToCenter();
	void Right();
	void Left();
	void Forward();
	void Down();
	void Backward();
};

// 0xB0 (0x168 - 0xB8)
// Class MeshModelingToolsExp.MirrorTool
class UMirrorTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_1DC2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMirrorToolProperties*                 Settings;                                          // 0xC0(0x8)(ZeroConstructor)
	class UMirrorToolActionPropertySet*          ToolActions;                                       // 0xC8(0x8)(ZeroConstructor)
	TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToMirror;                                    // 0xD0(0x10)(ZeroConstructor)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                          // 0xE0(0x10)(ZeroConstructor)
	uint8                                        Pad_1DC3[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UConstructionPlaneMechanic*            PlaneMechanic;                                     // 0x120(0x8)(ZeroConstructor)
	uint8                                        Pad_1DC4[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMirrorTool* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.OffsetMeshToolProperties
class UOffsetMeshToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EOffsetMeshToolOffsetType         OffsetType;                                        // 0xA8(0x1)(None)
	uint8                                        Pad_1DC9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Distance;                                          // 0xAC(0x4)(None)
	bool                                         bCreateShell;                                      // 0xB0(0x1)(None)
	uint8                                        Pad_1DCA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOffsetMeshToolProperties* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class MeshModelingToolsExp.OffsetWeightMapSetProperties
class UOffsetWeightMapSetProperties : public UWeightMapSetProperties
{
public:
	float                                        MinDistance;                                       // 0xC8(0x4)(None)
	uint8                                        Pad_1DCE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOffsetWeightMapSetProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.IterativeOffsetProperties
class UIterativeOffsetProperties : public UInteractiveToolPropertySet
{
public:
	int32                                        Steps;                                             // 0xA8(0x4)(None)
	bool                                         bOffsetBoundaries;                                 // 0xAC(0x1)(None)
	uint8                                        Pad_1DCF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SmoothingPerStep;                                  // 0xB0(0x4)(None)
	bool                                         bReprojectSmooth;                                  // 0xB4(0x1)(None)
	uint8                                        Pad_1DD0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIterativeOffsetProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.ImplicitOffsetProperties
class UImplicitOffsetProperties : public UInteractiveToolPropertySet
{
public:
	float                                        Smoothness;                                        // 0xA8(0x4)(None)
	bool                                         bPreserveUVs;                                      // 0xAC(0x1)(None)
	uint8                                        Pad_1DD1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UImplicitOffsetProperties* GetDefaultObj();

};

// 0x20 (0x420 - 0x400)
// Class MeshModelingToolsExp.OffsetMeshTool
class UOffsetMeshTool : public UBaseMeshProcessingTool
{
public:
	class UOffsetMeshToolProperties*             OffsetProperties;                                  // 0x400(0x8)(ZeroConstructor)
	class UIterativeOffsetProperties*            IterativeProperties;                               // 0x408(0x8)(ZeroConstructor)
	class UImplicitOffsetProperties*             ImplicitProperties;                                // 0x410(0x8)(ZeroConstructor)
	class UOffsetWeightMapSetProperties*         WeightMapProperties;                               // 0x418(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UOffsetMeshTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.OffsetMeshToolBuilder
class UOffsetMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UOffsetMeshToolBuilder* GetDefaultObj();

};

// 0x68 (0x110 - 0xA8)
// Class MeshModelingToolsExp.PhysicsObjectToolPropertySet
class UPhysicsObjectToolPropertySet : public UInteractiveToolPropertySet
{
public:
	class FString                                ObjectName;                                        // 0xA8(0x10)(None)
	enum class ECollisionGeometryMode            CollisionType;                                     // 0xB8(0x4)(None)
	uint8                                        Pad_1DD6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPhysicsSphereData>            Spheres;                                           // 0xC0(0x10)(None)
	TArray<struct FPhysicsBoxData>               Boxes;                                             // 0xD0(0x10)(None)
	TArray<struct FPhysicsCapsuleData>           Capsules;                                          // 0xE0(0x10)(None)
	TArray<struct FPhysicsConvexData>            Convexes;                                          // 0xF0(0x10)(None)
	TArray<struct FPhysicsLevelSetData>          LevelSets;                                         // 0x100(0x10)(None)

	static class UClass* StaticClass();
	static class UPhysicsObjectToolPropertySet* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.CollisionGeometryVisualizationProperties
class UCollisionGeometryVisualizationProperties : public UInteractiveToolPropertySet
{
public:
	float                                        LineThickness;                                     // 0xA8(0x4)(None)
	bool                                         bShowHidden;                                       // 0xAC(0x1)(None)
	bool                                         bRandomColors;                                     // 0xAD(0x1)(None)
	uint8                                        Pad_1DD9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                Color;                                             // 0xB0(0x4)(None)
	uint8                                        Pad_1DDA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCollisionGeometryVisualizationProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.ExtractCollisionGeometryToolBuilder
class UExtractCollisionGeometryToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UExtractCollisionGeometryToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.ExtractCollisionToolProperties
class UExtractCollisionToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EExtractCollisionOutputType       CollisionType;                                     // 0xA8(0x1)(None)
	bool                                         bWeldEdges;                                        // 0xA9(0x1)(None)
	bool                                         bOutputSeparateMeshes;                             // 0xAA(0x1)(None)
	bool                                         bShowPreview;                                      // 0xAB(0x1)(None)
	bool                                         bShowInputMesh;                                    // 0xAC(0x1)(None)
	uint8                                        Pad_1DDC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UExtractCollisionToolProperties* GetDefaultObj();

};

// 0x278 (0x330 - 0xB8)
// Class MeshModelingToolsExp.ExtractCollisionGeometryTool
class UExtractCollisionGeometryTool : public USingleSelectionMeshEditingTool
{
public:
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xB8(0x8)(ZeroConstructor)
	class UExtractCollisionToolProperties*       Settings;                                          // 0xC0(0x8)(ZeroConstructor)
	class UCollisionGeometryVisualizationProperties* VizSettings;                                       // 0xC8(0x8)(ZeroConstructor)
	class UPhysicsObjectToolPropertySet*         ObjectProps;                                       // 0xD0(0x8)(ZeroConstructor)
	class UPreviewGeometry*                      PreviewElements;                                   // 0xD8(0x8)(ZeroConstructor)
	class UPreviewMesh*                          PreviewMesh;                                       // 0xE0(0x8)(ZeroConstructor)
	uint8                                        Pad_1DDD[0x248];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UExtractCollisionGeometryTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.PhysicsInspectorToolBuilder
class UPhysicsInspectorToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UPhysicsInspectorToolBuilder* GetDefaultObj();

};

// 0x48 (0x100 - 0xB8)
// Class MeshModelingToolsExp.PhysicsInspectorTool
class UPhysicsInspectorTool : public UMultiSelectionMeshEditingTool
{
public:
	class UCollisionGeometryVisualizationProperties* VizSettings;                                       // 0xB8(0x8)(ZeroConstructor)
	TArray<class UPhysicsObjectToolPropertySet*> ObjectData;                                        // 0xC0(0x10)(ZeroConstructor)
	class UMaterialInterface*                    LineMaterial;                                      // 0xD0(0x8)(ZeroConstructor)
	TArray<class UPreviewGeometry*>              PreviewElements;                                   // 0xD8(0x10)(ZeroConstructor)
	uint8                                        Pad_1DF0[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPhysicsInspectorTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.SetCollisionGeometryToolBuilder
class USetCollisionGeometryToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USetCollisionGeometryToolBuilder* GetDefaultObj();

};

// 0x48 (0xF0 - 0xA8)
// Class MeshModelingToolsExp.SetCollisionGeometryToolProperties
class USetCollisionGeometryToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class ECollisionGeometryType            GeometryType;                                      // 0xA8(0x4)(None)
	enum class ESetCollisionGeometryInputMode    InputMode;                                         // 0xAC(0x4)(None)
	bool                                         bUseWorldSpace;                                    // 0xB0(0x1)(None)
	bool                                         bRemoveContained;                                  // 0xB1(0x1)(None)
	bool                                         bEnableMaxCount;                                   // 0xB2(0x1)(None)
	uint8                                        Pad_1DF6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxCount;                                          // 0xB4(0x4)(None)
	float                                        MinThickness;                                      // 0xB8(0x4)(None)
	bool                                         bDetectBoxes;                                      // 0xBC(0x1)(None)
	bool                                         bDetectSpheres;                                    // 0xBD(0x1)(None)
	bool                                         bDetectCapsules;                                   // 0xBE(0x1)(None)
	bool                                         bSimplifyHulls;                                    // 0xBF(0x1)(None)
	int32                                        HullTargetFaceCount;                               // 0xC0(0x4)(None)
	int32                                        MaxHullsPerMesh;                                   // 0xC4(0x4)(None)
	float                                        ConvexDecompositionSearchFactor;                   // 0xC8(0x4)(None)
	float                                        AddHullsErrorTolerance;                            // 0xCC(0x4)(None)
	float                                        MinPartThickness;                                  // 0xD0(0x4)(None)
	bool                                         bSimplifyPolygons;                                 // 0xD4(0x1)(None)
	uint8                                        Pad_1DF8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HullTolerance;                                     // 0xD8(0x4)(None)
	enum class EProjectedHullAxis                SweepAxis;                                         // 0xDC(0x4)(None)
	int32                                        LevelSetResolution;                                // 0xE0(0x4)(None)
	bool                                         bAppendToExisting;                                 // 0xE4(0x1)(None)
	uint8                                        Pad_1DF9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECollisionGeometryMode            SetCollisionType;                                  // 0xE8(0x4)(None)
	uint8                                        Pad_1DFA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USetCollisionGeometryToolProperties* GetDefaultObj();

};

// 0x198 (0x250 - 0xB8)
// Class MeshModelingToolsExp.SetCollisionGeometryTool
class USetCollisionGeometryTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_1DFB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USetCollisionGeometryToolProperties*   Settings;                                          // 0xC0(0x8)(ZeroConstructor)
	class UPolygroupLayersProperties*            PolygroupLayerProperties;                          // 0xC8(0x8)(ZeroConstructor)
	class UCollisionGeometryVisualizationProperties* VizSettings;                                       // 0xD0(0x8)(ZeroConstructor)
	class UPhysicsObjectToolPropertySet*         CollisionProps;                                    // 0xD8(0x8)(ZeroConstructor)
	class UMaterialInterface*                    LineMaterial;                                      // 0xE0(0x8)(ZeroConstructor)
	uint8                                        Pad_1DFC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPreviewGeometry*                      PreviewGeom;                                       // 0xF0(0x8)(ZeroConstructor)
	uint8                                        Pad_1DFD[0x158];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USetCollisionGeometryTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.PlaneCutToolBuilder
class UPlaneCutToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UPlaneCutToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.AcceptOutputProperties
class UAcceptOutputProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bExportSeparatedPiecesAsNewMeshAssets;             // 0xA8(0x1)(None)
	uint8                                        Pad_1DFE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAcceptOutputProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.PlaneCutToolProperties
class UPlaneCutToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bKeepBothHalves;                                   // 0xA8(0x1)(None)
	uint8                                        Pad_1DFF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpacingBetweenHalves;                              // 0xAC(0x4)(None)
	bool                                         bShowPreview;                                      // 0xB0(0x1)(None)
	bool                                         bFillCutHole;                                      // 0xB1(0x1)(None)
	bool                                         bFillSpans;                                        // 0xB2(0x1)(None)
	uint8                                        Pad_1E00[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlaneCutToolProperties* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class MeshModelingToolsExp.PlaneCutOperatorFactory
class UPlaneCutOperatorFactory : public UObject
{
public:
	uint8                                        Pad_1E01[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlaneCutTool*                         CutTool;                                           // 0x30(0x8)(None)
	uint8                                        Pad_1E02[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlaneCutOperatorFactory* GetDefaultObj();

};

// 0xE8 (0x1A0 - 0xB8)
// Class MeshModelingToolsExp.PlaneCutTool
class UPlaneCutTool : public UMultiSelectionMeshEditingTool
{
public:
	class UPlaneCutToolProperties*               BasicProperties;                                   // 0xB8(0x8)(ZeroConstructor)
	class UAcceptOutputProperties*               AcceptProperties;                                  // 0xC0(0x8)(ZeroConstructor)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                          // 0xC8(0x10)(ZeroConstructor)
	TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToCut;                                       // 0xD8(0x10)(ZeroConstructor)
	class UConstructionPlaneMechanic*            PlaneMechanic;                                     // 0xE8(0x8)(ZeroConstructor)
	uint8                                        Pad_1E03[0xB0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlaneCutTool* GetDefaultObj();

	void FlipPlane();
	void Cut();
};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.ProjectToTargetToolBuilder
class UProjectToTargetToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UProjectToTargetToolBuilder* GetDefaultObj();

};

// 0x28 (0xE0 - 0xB8)
// Class MeshModelingToolsExp.RemeshMeshToolProperties
class URemeshMeshToolProperties : public URemeshProperties
{
public:
	int32                                        TargetTriangleCount;                               // 0xB8(0x4)(None)
	enum class ERemeshSmoothingType              SmoothingType;                                     // 0xBC(0x1)(None)
	bool                                         bDiscardAttributes;                                // 0xBD(0x1)(None)
	bool                                         bShowGroupColors;                                  // 0xBE(0x1)(None)
	enum class ERemeshType                       RemeshType;                                        // 0xBF(0x1)(None)
	int32                                        RemeshIterations;                                  // 0xC0(0x4)(None)
	int32                                        MaxRemeshIterations;                               // 0xC4(0x4)(None)
	int32                                        ExtraProjectionIterations;                         // 0xC8(0x4)(None)
	bool                                         bUseTargetEdgeLength;                              // 0xCC(0x1)(None)
	uint8                                        Pad_1E04[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TargetEdgeLength;                                  // 0xD0(0x4)(None)
	bool                                         bReproject;                                        // 0xD4(0x1)(None)
	bool                                         bReprojectConstraints;                             // 0xD5(0x1)(None)
	uint8                                        Pad_1E05[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BoundaryCornerAngleThreshold;                      // 0xD8(0x4)(None)
	uint8                                        Pad_1E06[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URemeshMeshToolProperties* GetDefaultObj();

};

// 0x20 (0x100 - 0xE0)
// Class MeshModelingToolsExp.ProjectToTargetToolProperties
class UProjectToTargetToolProperties : public URemeshMeshToolProperties
{
public:
	bool                                         bWorldSpace;                                       // 0xE0(0x1)(None)
	bool                                         bParallel;                                         // 0xE1(0x1)(None)
	uint8                                        Pad_1E09[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FaceProjectionPassesPerRemeshIteration;            // 0xE4(0x4)(None)
	float                                        SurfaceProjectionSpeed;                            // 0xE8(0x4)(None)
	float                                        NormalAlignmentSpeed;                              // 0xEC(0x4)(None)
	bool                                         bSmoothInFillAreas;                                // 0xF0(0x1)(None)
	uint8                                        Pad_1E0A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FillAreaDistanceMultiplier;                        // 0xF4(0x4)(None)
	float                                        FillAreaSmoothMultiplier;                          // 0xF8(0x4)(None)
	uint8                                        Pad_1E0B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProjectToTargetToolProperties* GetDefaultObj();

};

// 0x50 (0x108 - 0xB8)
// Class MeshModelingToolsExp.RemeshMeshTool
class URemeshMeshTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_1E0E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URemeshMeshToolProperties*             BasicProperties;                                   // 0xC0(0x8)(ZeroConstructor)
	class UMeshStatisticsProperties*             MeshStatisticsProperties;                          // 0xC8(0x8)(ZeroConstructor)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xD0(0x8)(ZeroConstructor)
	class UMeshElementsVisualizer*               MeshElementsDisplay;                               // 0xD8(0x8)(ZeroConstructor)
	uint8                                        Pad_1E0F[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URemeshMeshTool* GetDefaultObj();

};

// 0x10 (0x118 - 0x108)
// Class MeshModelingToolsExp.ProjectToTargetTool
class UProjectToTargetTool : public URemeshMeshTool
{
public:
	uint8                                        Pad_1E10[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProjectToTargetTool* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.MeshAnalysisProperties
class UMeshAnalysisProperties : public UInteractiveToolPropertySet
{
public:
	class FString                                SurfaceArea;                                       // 0xA8(0x10)(None)
	class FString                                Volume;                                            // 0xB8(0x10)(None)

	static class UClass* StaticClass();
	static class UMeshAnalysisProperties* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingToolsExp.MeshStatisticsProperties
class UMeshStatisticsProperties : public UInteractiveToolPropertySet
{
public:
	class FString                                Mesh;                                              // 0xA8(0x10)(None)
	class FString                                UV;                                                // 0xB8(0x10)(None)
	class FString                                Attributes;                                        // 0xC8(0x10)(None)

	static class UClass* StaticClass();
	static class UMeshStatisticsProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.RemeshMeshToolBuilder
class URemeshMeshToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class URemeshMeshToolBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.RemoveOccludedTrianglesToolBuilder
class URemoveOccludedTrianglesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class URemoveOccludedTrianglesToolBuilder* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingToolsExp.RemoveOccludedTrianglesToolProperties
class URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EOcclusionCalculationUIMode       OcclusionTestMethod;                               // 0xA8(0x1)(None)
	enum class EOcclusionTriangleSamplingUIMode  TriangleSampling;                                  // 0xA9(0x1)(None)
	uint8                                        Pad_1E1F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       WindingIsoValue;                                   // 0xB0(0x8)(None)
	int32                                        AddRandomRays;                                     // 0xB8(0x4)(None)
	int32                                        AddTriangleSamples;                                // 0xBC(0x4)(None)
	bool                                         bOnlySelfOcclude;                                  // 0xC0(0x1)(None)
	uint8                                        Pad_1E21[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ShrinkRemoval;                                     // 0xC4(0x4)(None)
	double                                       MinAreaIsland;                                     // 0xC8(0x8)(None)
	int32                                        MinTriCountIsland;                                 // 0xD0(0x4)(None)
	enum class EOccludedAction                   Action;                                            // 0xD4(0x1)(None)
	uint8                                        Pad_1E22[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URemoveOccludedTrianglesToolProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.RemoveOccludedTrianglesAdvancedProperties
class URemoveOccludedTrianglesAdvancedProperties : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_1E24[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URemoveOccludedTrianglesAdvancedProperties* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class MeshModelingToolsExp.RemoveOccludedTrianglesOperatorFactory
class URemoveOccludedTrianglesOperatorFactory : public UObject
{
public:
	uint8                                        Pad_1E26[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URemoveOccludedTrianglesTool*          Tool;                                              // 0x30(0x8)(None)
	uint8                                        Pad_1E27[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URemoveOccludedTrianglesOperatorFactory* GetDefaultObj();

};

// 0x118 (0x1D0 - 0xB8)
// Class MeshModelingToolsExp.RemoveOccludedTrianglesTool
class URemoveOccludedTrianglesTool : public UMultiSelectionMeshEditingTool
{
public:
	class URemoveOccludedTrianglesToolProperties* BasicProperties;                                   // 0xB8(0x8)(ZeroConstructor)
	class UPolygroupLayersProperties*            PolygroupLayersProperties;                         // 0xC0(0x8)(ZeroConstructor)
	class URemoveOccludedTrianglesAdvancedProperties* AdvancedProperties;                                // 0xC8(0x8)(ZeroConstructor)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                          // 0xD0(0x10)(ZeroConstructor)
	TArray<class UPreviewMesh*>                  PreviewCopies;                                     // 0xE0(0x10)(ZeroConstructor)
	uint8                                        Pad_1E28[0xE0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URemoveOccludedTrianglesTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.RevolveBoundaryToolBuilder
class URevolveBoundaryToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class URevolveBoundaryToolBuilder* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MeshModelingToolsExp.RevolveBoundaryOperatorFactory
class URevolveBoundaryOperatorFactory : public UObject
{
public:
	uint8                                        Pad_1E2C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URevolveBoundaryTool*                  RevolveBoundaryTool;                               // 0x30(0x8)(None)

	static class UClass* StaticClass();
	static class URevolveBoundaryOperatorFactory* GetDefaultObj();

};

// 0x30 (0x148 - 0x118)
// Class MeshModelingToolsExp.RevolveBoundaryToolProperties
class URevolveBoundaryToolProperties : public URevolveProperties
{
public:
	enum class ERevolvePropertiesCapFillMode     CapFillMode;                                       // 0x118(0x1)(None)
	bool                                         bDisplayInputMesh;                                 // 0x119(0x1)(None)
	uint8                                        Pad_1E2D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AxisOrigin;                                        // 0x120(0x18)(None)
	struct FVector2D                             AxisOrientation;                                   // 0x138(0x10)(None)

	static class UClass* StaticClass();
	static class URevolveBoundaryToolProperties* GetDefaultObj();

};

// 0x70 (0x220 - 0x1B0)
// Class MeshModelingToolsExp.RevolveBoundaryTool
class URevolveBoundaryTool : public UMeshBoundaryToolBase
{
public:
	uint8                                        Pad_1E30[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0x1C8(0x8)(ZeroConstructor)
	class URevolveBoundaryToolProperties*        Settings;                                          // 0x1D0(0x8)(ZeroConstructor)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0x1D8(0x8)(ZeroConstructor)
	class UConstructionPlaneMechanic*            PlaneMechanic;                                     // 0x1E0(0x8)(ZeroConstructor)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0x1E8(0x8)(ZeroConstructor)
	uint8                                        Pad_1E32[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URevolveBoundaryTool* GetDefaultObj();

};

// 0x38 (0xE0 - 0xA8)
// Class MeshModelingToolsExp.SculptBrushProperties
class USculptBrushProperties : public UInteractiveToolPropertySet
{
public:
	struct FBrushToolRadius                      BrushSize;                                         // 0xA8(0x14)(None)
	float                                        BrushFalloffAmount;                                // 0xBC(0x4)(None)
	bool                                         bShowFalloff;                                      // 0xC0(0x1)(None)
	uint8                                        Pad_1E37[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Depth;                                             // 0xC4(0x4)(None)
	bool                                         bHitBackFaces;                                     // 0xC8(0x1)(None)
	uint8                                        Pad_1E38[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FlowRate;                                          // 0xCC(0x4)(None)
	float                                        Spacing;                                           // 0xD0(0x4)(None)
	float                                        Lazyness;                                          // 0xD4(0x4)(None)
	bool                                         bShowPerBrushProps;                                // 0xD8(0x1)(None)
	bool                                         bShowLazyness;                                     // 0xD9(0x1)(None)
	bool                                         bShowFlowRate;                                     // 0xDA(0x1)(None)
	bool                                         bShowSpacing;                                      // 0xDB(0x1)(None)
	uint8                                        Pad_1E39[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USculptBrushProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.KelvinBrushProperties
class UKelvinBrushProperties : public UInteractiveToolPropertySet
{
public:
	float                                        FalloffDistance;                                   // 0xA8(0x4)(None)
	float                                        Stiffness;                                         // 0xAC(0x4)(None)
	float                                        Incompressiblity;                                  // 0xB0(0x4)(None)
	int32                                        BrushSteps;                                        // 0xB4(0x4)(None)

	static class UClass* StaticClass();
	static class UKelvinBrushProperties* GetDefaultObj();

};

// 0x48 (0xF0 - 0xA8)
// Class MeshModelingToolsExp.WorkPlaneProperties
class UWorkPlaneProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bPropertySetEnabled;                               // 0xA8(0x1)(None)
	bool                                         bShowGizmo;                                        // 0xA9(0x1)(None)
	uint8                                        Pad_1E42[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0xB0(0x18)(None)
	uint8                                        Pad_1E43[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Rotation;                                          // 0xD0(0x20)(None)

	static class UClass* StaticClass();
	static class UWorkPlaneProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.SculptMaxBrushProperties
class USculptMaxBrushProperties : public UInteractiveToolPropertySet
{
public:
	float                                        MaxHeight;                                         // 0xA8(0x4)(None)
	bool                                         bFreezeCurrentHeight;                              // 0xAC(0x1)(None)
	uint8                                        Pad_1E44[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USculptMaxBrushProperties* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingToolsExp.SeamSculptToolBuilder
class USeamSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USeamSculptToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.SeamSculptToolProperties
class USeamSculptToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bShowWireframe;                                    // 0xA8(0x1)(None)
	bool                                         bHitBackFaces;                                     // 0xA9(0x1)(None)
	uint8                                        Pad_1E46[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USeamSculptToolProperties* GetDefaultObj();

};

// 0xF8 (0x3C0 - 0x2C8)
// Class MeshModelingToolsExp.SeamSculptTool
class USeamSculptTool : public UDynamicMeshBrushTool
{
public:
	class USeamSculptToolProperties*             Settings;                                          // 0x2C8(0x8)(ZeroConstructor)
	class UPreviewGeometry*                      PreviewGeom;                                       // 0x2D0(0x8)(ZeroConstructor)
	uint8                                        Pad_1E47[0xE8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USeamSculptTool* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.SelfUnionMeshesToolProperties
class USelfUnionMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bTrimFlaps;                                        // 0xA8(0x1)(None)
	bool                                         bTryFixHoles;                                      // 0xA9(0x1)(None)
	bool                                         bTryCollapseEdges;                                 // 0xAA(0x1)(None)
	uint8                                        Pad_1E4C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WindingThreshold;                                  // 0xAC(0x4)(None)
	bool                                         bShowNewBoundaryEdges;                             // 0xB0(0x1)(None)
	bool                                         bOnlyUseFirstMeshMaterials;                        // 0xB1(0x1)(None)
	uint8                                        Pad_1E4D[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USelfUnionMeshesToolProperties* GetDefaultObj();

};

// 0x48 (0x148 - 0x100)
// Class MeshModelingToolsExp.SelfUnionMeshesTool
class USelfUnionMeshesTool : public UBaseCreateFromSelectedTool
{
public:
	class USelfUnionMeshesToolProperties*        Properties;                                        // 0x100(0x8)(ZeroConstructor)
	class ULineSetComponent*                     DrawnLineSet;                                      // 0x108(0x8)(ZeroConstructor)
	uint8                                        Pad_1E52[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USelfUnionMeshesTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.SelfUnionMeshesToolBuilder
class USelfUnionMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USelfUnionMeshesToolBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.SkinWeightsBindingToolBuilder
class USkinWeightsBindingToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USkinWeightsBindingToolBuilder* GetDefaultObj();

};

// 0x38 (0xE0 - 0xA8)
// Class MeshModelingToolsExp.SkinWeightsBindingToolProperties
class USkinWeightsBindingToolProperties : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_1E5C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        CurrentBone;                                       // 0xB0(0x10)(None)
	enum class ESkinWeightsBindType              BindingType;                                       // 0xC0(0x1)(None)
	uint8                                        Pad_1E5D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Stiffness;                                         // 0xC4(0x4)(None)
	int32                                        MaxInfluences;                                     // 0xC8(0x4)(None)
	int32                                        VoxelResolution;                                   // 0xCC(0x4)(None)
	uint8                                        Pad_1E5F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USkinWeightsBindingToolProperties* GetDefaultObj();

};

// 0x2D0 (0x388 - 0xB8)
// Class MeshModelingToolsExp.SkinWeightsBindingTool
class USkinWeightsBindingTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_1E65[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkinWeightsBindingToolProperties*     Properties;                                        // 0xC0(0x8)(ZeroConstructor)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xC8(0x8)(ZeroConstructor)
	uint8                                        Pad_1E66[0x2B8];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USkinWeightsBindingTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshModelingToolsExp.SkinWeightsPaintToolBuilder
class USkinWeightsPaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USkinWeightsPaintToolBuilder* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.SkinWeightsPaintToolProperties
class USkinWeightsPaintToolProperties : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_1E68[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        CurrentBone;                                       // 0xB0(0x10)(None)
	uint8                                        Pad_1E6B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USkinWeightsPaintToolProperties* GetDefaultObj();

};

// 0x6C8 (0x990 - 0x2C8)
// Class MeshModelingToolsExp.SkinWeightsPaintTool
class USkinWeightsPaintTool : public UDynamicMeshBrushTool
{
public:
	class USkinWeightsPaintToolProperties*       ToolProps;                                         // 0x2C8(0x8)(ZeroConstructor)
	uint8                                        Pad_1E6D[0x6C0];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USkinWeightsPaintTool* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.SmoothMeshToolProperties
class USmoothMeshToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class ESmoothMeshToolSmoothType         SmoothingType;                                     // 0xA8(0x1)(None)
	uint8                                        Pad_1E70[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USmoothMeshToolProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.IterativeSmoothProperties
class UIterativeSmoothProperties : public UInteractiveToolPropertySet
{
public:
	float                                        SmoothingPerStep;                                  // 0xA8(0x4)(None)
	int32                                        Steps;                                             // 0xAC(0x4)(None)
	bool                                         bSmoothBoundary;                                   // 0xB0(0x1)(None)
	uint8                                        Pad_1E71[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIterativeSmoothProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.DiffusionSmoothProperties
class UDiffusionSmoothProperties : public UInteractiveToolPropertySet
{
public:
	float                                        SmoothingPerStep;                                  // 0xA8(0x4)(None)
	int32                                        Steps;                                             // 0xAC(0x4)(None)
	bool                                         bPreserveUVs;                                      // 0xB0(0x1)(None)
	uint8                                        Pad_1E72[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDiffusionSmoothProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.ImplicitSmoothProperties
class UImplicitSmoothProperties : public UInteractiveToolPropertySet
{
public:
	float                                        SmoothSpeed;                                       // 0xA8(0x4)(None)
	float                                        Smoothness;                                        // 0xAC(0x4)(None)
	bool                                         bPreserveUVs;                                      // 0xB0(0x1)(None)
	uint8                                        Pad_1E74[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VolumeCorrection;                                  // 0xB4(0x4)(None)

	static class UClass* StaticClass();
	static class UImplicitSmoothProperties* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class MeshModelingToolsExp.SmoothWeightMapSetProperties
class USmoothWeightMapSetProperties : public UWeightMapSetProperties
{
public:
	float                                        MinSmoothMultiplier;                               // 0xC8(0x4)(None)
	uint8                                        Pad_1E75[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USmoothWeightMapSetProperties* GetDefaultObj();

};

// 0x30 (0x430 - 0x400)
// Class MeshModelingToolsExp.SmoothMeshTool
class USmoothMeshTool : public UBaseMeshProcessingTool
{
public:
	class USmoothMeshToolProperties*             SmoothProperties;                                  // 0x400(0x8)(ZeroConstructor)
	class UIterativeSmoothProperties*            IterativeProperties;                               // 0x408(0x8)(ZeroConstructor)
	class UDiffusionSmoothProperties*            DiffusionProperties;                               // 0x410(0x8)(ZeroConstructor)
	class UImplicitSmoothProperties*             ImplicitProperties;                                // 0x418(0x8)(ZeroConstructor)
	class USmoothWeightMapSetProperties*         WeightMapProperties;                               // 0x420(0x8)(ZeroConstructor)
	uint8                                        Pad_1E78[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USmoothMeshTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.SmoothMeshToolBuilder
class USmoothMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USmoothMeshToolBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.SplitMeshesToolBuilder
class USplitMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USplitMeshesToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.SplitMeshesToolProperties
class USplitMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bTransferMaterials;                                // 0xA8(0x1)(None)
	uint8                                        Pad_1E7C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USplitMeshesToolProperties* GetDefaultObj();

};

// 0x38 (0xF0 - 0xB8)
// Class MeshModelingToolsExp.SplitMeshesTool
class USplitMeshesTool : public UMultiSelectionMeshEditingTool
{
public:
	class USplitMeshesToolProperties*            BasicProperties;                                   // 0xB8(0x8)(ZeroConstructor)
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xC0(0x8)(ZeroConstructor)
	uint8                                        Pad_1E7D[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USplitMeshesTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.TransferMeshToolBuilder
class UTransferMeshToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UTransferMeshToolBuilder* GetDefaultObj();

};

// 0x78 (0x120 - 0xA8)
// Class MeshModelingToolsExp.TransferMeshToolProperties
class UTransferMeshToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bTransferMaterials;                                // 0xA8(0x1)(None)
	uint8                                        Pad_1E89[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SourceLOD;                                         // 0xB0(0x10)(None)
	class FString                                TargetLod;                                         // 0xC0(0x10)(None)
	bool                                         bIsStaticMeshSource;                               // 0xD0(0x1)(None)
	uint8                                        Pad_1E8A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        SourceLODNamesList;                                // 0xD8(0x10)(None)
	uint8                                        Pad_1E8B[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        TargetLODNamesList;                                // 0xF8(0x10)(None)
	uint8                                        Pad_1E8C[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsStaticMeshTarget;                               // 0x118(0x1)(None)
	uint8                                        Pad_1E8D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTransferMeshToolProperties* GetDefaultObj();

	void GetTargetLODNamesFunc(const TArray<class FString>& ReturnValue);
	void GetSourceLODNamesFunc(const TArray<class FString>& ReturnValue);
};

// 0x10 (0xC8 - 0xB8)
// Class MeshModelingToolsExp.TransferMeshTool
class UTransferMeshTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_1E90[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTransferMeshToolProperties*           BasicProperties;                                   // 0xC0(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UTransferMeshTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.TransformMeshesToolBuilder
class UTransformMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UTransformMeshesToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.TransformMeshesToolProperties
class UTransformMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class ETransformMeshesTransformMode     TransformMode;                                     // 0xA8(0x1)(None)
	bool                                         bApplyToInstances;                                 // 0xA9(0x1)(None)
	bool                                         bSetPivotMode;                                     // 0xAA(0x1)(None)
	bool                                         bEnableSnapDragging;                               // 0xAB(0x1)(None)
	enum class ETransformMeshesSnapDragSource    SnapDragSource;                                    // 0xAC(0x1)(None)
	enum class ETransformMeshesSnapDragRotationMode RotationMode;                                      // 0xAD(0x1)(None)
	bool                                         bHaveInstances;                                    // 0xAE(0x1)(None)
	uint8                                        Pad_1E93[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTransformMeshesToolProperties* GetDefaultObj();

};

// 0xD8 (0x190 - 0xB8)
// Class MeshModelingToolsExp.TransformMeshesTool
class UTransformMeshesTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_1E97[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTransformMeshesToolProperties*        TransformProps;                                    // 0xC0(0x8)(ZeroConstructor)
	TArray<struct FTransformMeshesTarget>        ActiveGizmos;                                      // 0xC8(0x10)(ZeroConstructor)
	class UDragAlignmentMechanic*                DragAlignmentMechanic;                             // 0xD8(0x8)(ZeroConstructor)
	uint8                                        Pad_1E98[0xB0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTransformMeshesTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.VolumeToMeshToolBuilder
class UVolumeToMeshToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UVolumeToMeshToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingToolsExp.VolumeToMeshToolProperties
class UVolumeToMeshToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bWeldEdges;                                        // 0xA8(0x1)(None)
	bool                                         bAutoRepair;                                       // 0xA9(0x1)(None)
	bool                                         bOptimizeMesh;                                     // 0xAA(0x1)(None)
	bool                                         bShowWireframe;                                    // 0xAB(0x1)(None)
	uint8                                        Pad_1E99[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVolumeToMeshToolProperties* GetDefaultObj();

};

// 0x270 (0x308 - 0x98)
// Class MeshModelingToolsExp.VolumeToMeshTool
class UVolumeToMeshTool : public UInteractiveTool
{
public:
	class UVolumeToMeshToolProperties*           Settings;                                          // 0x98(0x8)(ZeroConstructor)
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xA0(0x8)(ZeroConstructor)
	class UPreviewMesh*                          PreviewMesh;                                       // 0xA8(0x8)(ZeroConstructor)
	TLazyObjectPtr<class AVolume>                TargetVolume;                                      // 0xB0(0x1C)(ZeroConstructor)
	uint8                                        Pad_1E9A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULineSetComponent*                     VolumeEdgesSet;                                    // 0xD0(0x8)(ZeroConstructor)
	uint8                                        Pad_1E9B[0x230];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVolumeToMeshTool* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.VoxelBlendMeshesToolProperties
class UVoxelBlendMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	double                                       BlendPower;                                        // 0xA8(0x8)(None)
	double                                       BlendFalloff;                                      // 0xB0(0x8)(None)
	enum class EVoxelBlendOperation              Operation;                                         // 0xB8(0x1)(None)
	bool                                         bVoxWrap;                                          // 0xB9(0x1)(None)
	bool                                         bRemoveInternalsAfterVoxWrap;                      // 0xBA(0x1)(None)
	uint8                                        Pad_1E9C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ThickenShells;                                     // 0xC0(0x8)(None)

	static class UClass* StaticClass();
	static class UVoxelBlendMeshesToolProperties* GetDefaultObj();

};

// 0x8 (0x120 - 0x118)
// Class MeshModelingToolsExp.VoxelBlendMeshesTool
class UVoxelBlendMeshesTool : public UBaseVoxelTool
{
public:
	class UVoxelBlendMeshesToolProperties*       BlendProperties;                                   // 0x118(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UVoxelBlendMeshesTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.VoxelBlendMeshesToolBuilder
class UVoxelBlendMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UVoxelBlendMeshesToolBuilder* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.VoxelMorphologyMeshesToolProperties
class UVoxelMorphologyMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EMorphologyOperation              Operation;                                         // 0xA8(0x1)(None)
	uint8                                        Pad_1E9D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Distance;                                          // 0xB0(0x8)(None)
	bool                                         bVoxWrap;                                          // 0xB8(0x1)(None)
	bool                                         bRemoveInternalsAfterVoxWrap;                      // 0xB9(0x1)(None)
	uint8                                        Pad_1E9E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ThickenShells;                                     // 0xC0(0x8)(None)

	static class UClass* StaticClass();
	static class UVoxelMorphologyMeshesToolProperties* GetDefaultObj();

};

// 0x8 (0x120 - 0x118)
// Class MeshModelingToolsExp.VoxelMorphologyMeshesTool
class UVoxelMorphologyMeshesTool : public UBaseVoxelTool
{
public:
	class UVoxelMorphologyMeshesToolProperties*  MorphologyProperties;                              // 0x118(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UVoxelMorphologyMeshesTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.VoxelMorphologyMeshesToolBuilder
class UVoxelMorphologyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UVoxelMorphologyMeshesToolBuilder* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingToolsExp.VoxelSolidifyMeshesToolProperties
class UVoxelSolidifyMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	double                                       WindingThreshold;                                  // 0xA8(0x8)(None)
	double                                       ExtendBounds;                                      // 0xB0(0x8)(None)
	int32                                        SurfaceSearchSteps;                                // 0xB8(0x4)(None)
	bool                                         bSolidAtBoundaries;                                // 0xBC(0x1)(None)
	bool                                         bApplyThickenShells;                               // 0xBD(0x1)(None)
	uint8                                        Pad_1EA2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ThickenShells;                                     // 0xC0(0x8)(None)

	static class UClass* StaticClass();
	static class UVoxelSolidifyMeshesToolProperties* GetDefaultObj();

};

// 0x8 (0x120 - 0x118)
// Class MeshModelingToolsExp.VoxelSolidifyMeshesTool
class UVoxelSolidifyMeshesTool : public UBaseVoxelTool
{
public:
	class UVoxelSolidifyMeshesToolProperties*    SolidifyProperties;                                // 0x118(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UVoxelSolidifyMeshesTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.VoxelSolidifyMeshesToolBuilder
class UVoxelSolidifyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UVoxelSolidifyMeshesToolBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingToolsExp.WeldMeshEdgesToolBuilder
class UWeldMeshEdgesToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UWeldMeshEdgesToolBuilder* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingToolsExp.WeldMeshEdgesToolProperties
class UWeldMeshEdgesToolProperties : public UInteractiveToolPropertySet
{
public:
	float                                        Tolerance;                                         // 0xA8(0x4)(None)
	bool                                         bOnlyUnique;                                       // 0xAC(0x1)(None)
	bool                                         bResolveTJunctions;                                // 0xAD(0x1)(None)
	uint8                                        Pad_1EAF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InitialEdges;                                      // 0xB0(0x4)(None)
	int32                                        RemainingEdges;                                    // 0xB4(0x4)(None)

	static class UClass* StaticClass();
	static class UWeldMeshEdgesToolProperties* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MeshModelingToolsExp.WeldMeshEdgesOperatorFactory
class UWeldMeshEdgesOperatorFactory : public UObject
{
public:
	uint8                                        Pad_1EB4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWeldMeshEdgesTool*                    WeldMeshEdgesTool;                                 // 0x30(0x8)(None)

	static class UClass* StaticClass();
	static class UWeldMeshEdgesOperatorFactory* GetDefaultObj();

};

// 0x30 (0xE8 - 0xB8)
// Class MeshModelingToolsExp.WeldMeshEdgesTool
class UWeldMeshEdgesTool : public USingleSelectionMeshEditingTool
{
public:
	class UWeldMeshEdgesToolProperties*          Settings;                                          // 0xB8(0x8)(ZeroConstructor)
	class UMeshOpPreviewWithBackgroundCompute*   PreviewCompute;                                    // 0xC0(0x8)(ZeroConstructor)
	class UMeshElementsVisualizer*               MeshElementsDisplay;                               // 0xC8(0x8)(ZeroConstructor)
	class UWeldMeshEdgesOperatorFactory*         OperatorFactory;                                   // 0xD0(0x8)(ZeroConstructor)
	uint8                                        Pad_1EB9[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeldMeshEdgesTool* GetDefaultObj();

};

}


