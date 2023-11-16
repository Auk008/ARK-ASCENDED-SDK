#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.MultiSelectionMeshEditingToolBuilder
class UMultiSelectionMeshEditingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
public:

	static class UClass* StaticClass();
	static class UMultiSelectionMeshEditingToolBuilder* GetDefaultObj();

};

// 0x8 (0xB8 - 0xB0)
// Class ModelingComponents.MultiSelectionMeshEditingTool
class UMultiSelectionMeshEditingTool : public UMultiSelectionTool
{
public:
	TWeakObjectPtr<class UWorld>                 TargetWorld;                                       // 0xB0(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMultiSelectionMeshEditingTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.GeometrySelectionEditCommand
class UGeometrySelectionEditCommand : public UInteractiveCommand
{
public:

	static class UClass* StaticClass();
	static class UGeometrySelectionEditCommand* GetDefaultObj();

};

// 0x48 (0x100 - 0xB8)
// Class ModelingComponents.BaseCreateFromSelectedTool
class UBaseCreateFromSelectedTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_A91[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTransformInputsToolProperties*        TransformProperties;                               // 0xC0(0x8)(ZeroConstructor)
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xC8(0x8)(ZeroConstructor)
	class UBaseCreateFromSelectedHandleSourceProperties* HandleSourcesProperties;                           // 0xD0(0x8)(ZeroConstructor)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xD8(0x8)(ZeroConstructor)
	TArray<class UTransformProxy*>               TransformProxies;                                  // 0xE0(0x10)(ZeroConstructor)
	TArray<class UCombinedTransformGizmo*>       TransformGizmos;                                   // 0xF0(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBaseCreateFromSelectedTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.BaseCreateFromSelectedToolBuilder
class UBaseCreateFromSelectedToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UBaseCreateFromSelectedToolBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.SingleTargetWithSelectionToolBuilder
class USingleTargetWithSelectionToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
public:

	static class UClass* StaticClass();
	static class USingleTargetWithSelectionToolBuilder* GetDefaultObj();

};

// 0x68 (0x110 - 0xA8)
// Class ModelingComponents.SingleTargetWithSelectionTool
class USingleTargetWithSelectionTool : public USingleSelectionTool
{
public:
	TWeakObjectPtr<class UWorld>                 TargetWorld;                                       // 0xA8(0x8)(ZeroConstructor)
	uint8                                        Pad_A97[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USingleTargetWithSelectionTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.SingleSelectionMeshEditingToolBuilder
class USingleSelectionMeshEditingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
public:

	static class UClass* StaticClass();
	static class USingleSelectionMeshEditingToolBuilder* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class ModelingComponents.SingleSelectionMeshEditingTool
class USingleSelectionMeshEditingTool : public USingleSelectionTool
{
public:
	TWeakObjectPtr<class UWorld>                 TargetWorld;                                       // 0xA8(0x8)(ZeroConstructor)
	class UPersistentMeshSelection*              InputSelection;                                    // 0xB0(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class USingleSelectionMeshEditingTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class ModelingComponents.InteractiveToolActivity
class UInteractiveToolActivity : public UInteractionMechanic
{
public:

	static class UClass* StaticClass();
	static class UInteractiveToolActivity* GetDefaultObj();

};

// 0xAC0 (0xAF0 - 0x30)
// Class ModelingComponents.MeshTopologySelectionMechanic
class UMeshTopologySelectionMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_A9B[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshTopologySelectionMechanicProperties* Properties;                                        // 0x78(0x8)(ZeroConstructor)
	uint8                                        Pad_A9C[0x60];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMouseHoverBehavior*                   HoverBehavior;                                     // 0xE0(0x8)(ZeroConstructor)
	class USingleClickOrDragInputBehavior*       ClickOrDragBehavior;                               // 0xE8(0x8)(ZeroConstructor)
	class URectangleMarqueeMechanic*             MarqueeMechanic;                                   // 0xF0(0x8)(ZeroConstructor)
	uint8                                        Pad_A9F[0x5C8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class APreviewGeometryActor*                 PreviewGeometryActor;                              // 0x6C0(0x8)(ZeroConstructor)
	class UTriangleSetComponent*                 DrawnTriangleSetComponent;                         // 0x6C8(0x8)(ZeroConstructor)
	uint8                                        Pad_AA1[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    HighlightedFaceMaterial;                           // 0x720(0x8)(None)
	uint8                                        Pad_AA2[0x3C8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshTopologySelectionMechanic* GetDefaultObj();

};

// 0x0 (0xAF0 - 0xAF0)
// Class ModelingComponents.BoundarySelectionMechanic
class UBoundarySelectionMechanic : public UMeshTopologySelectionMechanic
{
public:

	static class UClass* StaticClass();
	static class UBoundarySelectionMechanic* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.DynamicMeshCommitter
class IDynamicMeshCommitter : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IDynamicMeshCommitter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.DynamicMeshProvider
class IDynamicMeshProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IDynamicMeshProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.PersistentDynamicMeshSource
class IPersistentDynamicMeshSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IPersistentDynamicMeshSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.ToolActivityHost
class IToolActivityHost : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IToolActivityHost* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class ModelingComponents.MeshTopologySelectionMechanicProperties
class UMeshTopologySelectionMechanicProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bSelectVertices;                                   // 0xA8(0x1)(None)
	bool                                         bSelectEdges;                                      // 0xA9(0x1)(None)
	bool                                         bSelectFaces;                                      // 0xAA(0x1)(None)
	bool                                         bSelectEdgeLoops;                                  // 0xAB(0x1)(None)
	bool                                         bSelectEdgeRings;                                  // 0xAC(0x1)(None)
	bool                                         bHitBackFaces;                                     // 0xAD(0x1)(None)
	bool                                         bEnableMarquee;                                    // 0xAE(0x1)(None)
	bool                                         bMarqueeIgnoreOcclusion;                           // 0xAF(0x1)(None)
	bool                                         bPreferProjectedElement;                           // 0xB0(0x1)(None)
	bool                                         bSelectDownRay;                                    // 0xB1(0x1)(None)
	bool                                         bIgnoreOcclusion;                                  // 0xB2(0x1)(None)
	uint8                                        Pad_AA8[0xD];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshTopologySelectionMechanicProperties* GetDefaultObj();

	void SelectAll();
	void InvertSelection();
};

// 0x20 (0x50 - 0x30)
// Class ModelingComponents.GeometrySelectionEditCommandArguments
class UGeometrySelectionEditCommandArguments : public UInteractiveCommandArguments
{
public:
	uint8                                        Pad_AA9[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometrySelectionEditCommandArguments* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class ModelingComponents.GeometrySelectionEditCommandResult
class UGeometrySelectionEditCommandResult : public UInteractiveCommandResult
{
public:
	uint8                                        Pad_AAC[0x78];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometrySelectionEditCommandResult* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class ModelingComponents.VoxelProperties
class UVoxelProperties : public UInteractiveToolPropertySet
{
public:
	int32                                        VoxelCount;                                        // 0xA8(0x4)(None)
	bool                                         bAutoSimplify;                                     // 0xAC(0x1)(None)
	bool                                         bRemoveInternalSurfaces;                           // 0xAD(0x1)(None)
	uint8                                        Pad_AAF[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SimplifyMaxErrorFactor;                            // 0xB0(0x8)(None)
	double                                       CubeRootMinComponentVolume;                        // 0xB8(0x8)(None)

	static class UClass* StaticClass();
	static class UVoxelProperties* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class ModelingComponents.OnAcceptHandleSourcesPropertiesBase
class UOnAcceptHandleSourcesPropertiesBase : public UInteractiveToolPropertySet
{
public:

	static class UClass* StaticClass();
	static class UOnAcceptHandleSourcesPropertiesBase* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class ModelingComponents.OnAcceptHandleSourcesProperties
class UOnAcceptHandleSourcesProperties : public UOnAcceptHandleSourcesPropertiesBase
{
public:
	enum class EHandleSourcesMethod              HandleInputs;                                      // 0xA8(0x1)(None)
	uint8                                        Pad_AB5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOnAcceptHandleSourcesProperties* GetDefaultObj();

};

// 0x28 (0xD8 - 0xB0)
// Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties
{
public:
	enum class EBaseCreateFromSelectedTargetType OutputWriteTo;                                     // 0xB0(0x4)(None)
	uint8                                        Pad_AB7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OutputNewName;                                     // 0xB8(0x10)(None)
	class FString                                OutputExistingName;                                // 0xC8(0x10)(None)

	static class UClass* StaticClass();
	static class UBaseCreateFromSelectedHandleSourceProperties* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class ModelingComponents.TransformInputsToolProperties
class UTransformInputsToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bShowTransformGizmo;                               // 0xA8(0x1)(None)
	uint8                                        Pad_ABA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTransformInputsToolProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.BaseMeshProcessingToolBuilder
class UBaseMeshProcessingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
public:

	static class UClass* StaticClass();
	static class UBaseMeshProcessingToolBuilder* GetDefaultObj();

};

// 0x358 (0x400 - 0xA8)
// Class ModelingComponents.BaseMeshProcessingTool
class UBaseMeshProcessingTool : public USingleSelectionTool
{
public:
	uint8                                        Pad_ABB[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xC8(0x8)(ZeroConstructor)
	uint8                                        Pad_ABC[0x330];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBaseMeshProcessingTool* GetDefaultObj();

};

// 0x18 (0x118 - 0x100)
// Class ModelingComponents.BaseVoxelTool
class UBaseVoxelTool : public UBaseCreateFromSelectedTool
{
public:
	class UVoxelProperties*                      VoxProperties;                                     // 0x100(0x8)(ZeroConstructor)
	uint8                                        Pad_ABD[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBaseVoxelTool* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class ModelingComponents.MeshSurfacePointMeshEditingToolBuilder
class UMeshSurfacePointMeshEditingToolBuilder : public UMeshSurfacePointToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UMeshSurfacePointMeshEditingToolBuilder* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class ModelingComponents.DynamicMeshReplacementChangeTarget
class UDynamicMeshReplacementChangeTarget : public UObject
{
public:
	uint8                                        Pad_ABF[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDynamicMeshReplacementChangeTarget* GetDefaultObj();

};

// 0x110 (0x840 - 0x730)
// Class ModelingComponents.OctreeDynamicMeshComponent
class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
{
public:
	uint8                                        Pad_AC2[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMesh*                          MeshObject;                                        // 0x780(0x8)(ZeroConstructor)
	uint8                                        Pad_AC3[0xB8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOctreeDynamicMeshComponent* GetDefaultObj();

	void SetDynamicMesh(class UDynamicMesh* NewMesh);
};

// 0x80 (0x740 - 0x6C0)
// Class ModelingComponents.LineSetComponent
class ULineSetComponent : public UMeshComponent
{
public:
	class UMaterialInterface*                    LineMaterial;                                      // 0x6C0(0x8)(ZeroConstructor)
	struct FBoxSphereBounds                      Bounds;                                            // 0x6C8(0x38)(None)
	bool                                         bBoundsDirty;                                      // 0x700(0x1)(None)
	uint8                                        Pad_AC6[0x3F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULineSetComponent* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class ModelingComponents.MeshElementsVisualizerProperties
class UMeshElementsVisualizerProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bVisible;                                          // 0xA8(0x1)(None)
	bool                                         bShowWireframe;                                    // 0xA9(0x1)(None)
	bool                                         bShowBorders;                                      // 0xAA(0x1)(None)
	bool                                         bShowUVSeams;                                      // 0xAB(0x1)(None)
	bool                                         bShowNormalSeams;                                  // 0xAC(0x1)(None)
	bool                                         bShowColorSeams;                                   // 0xAD(0x1)(None)
	uint8                                        Pad_AC8[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ThicknessScale;                                    // 0xB0(0x4)(None)
	struct FColor                                WireframeColor;                                    // 0xB4(0x4)(None)
	struct FColor                                BoundaryEdgeColor;                                 // 0xB8(0x4)(None)
	struct FColor                                UVSeamColor;                                       // 0xBC(0x4)(None)
	struct FColor                                NormalSeamColor;                                   // 0xC0(0x4)(None)
	struct FColor                                ColorSeamColor;                                    // 0xC4(0x4)(None)
	float                                        DepthBias;                                         // 0xC8(0x4)(None)
	bool                                         bAdjustDepthBiasUsingMeshSize;                     // 0xCC(0x1)(None)
	uint8                                        Pad_AC9[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshElementsVisualizerProperties* GetDefaultObj();

};

// 0xA8 (0xD0 - 0x28)
// Class ModelingComponents.PreviewGeometry
class UPreviewGeometry : public UObject
{
public:
	class APreviewGeometryActor*                 ParentActor;                                       // 0x28(0x8)(ZeroConstructor)
	TMap<class FString, class ULineSetComponent*> LineSets;                                          // 0x30(0x50)(ZeroConstructor)
	TMap<class FString, class UPointSetComponent*> PointSets;                                         // 0x80(0x50)(None)

	static class UClass* StaticClass();
	static class UPreviewGeometry* GetDefaultObj();

	void SetPointSetVisibility(const class FString& PointSetIdentifier, bool bVisible, bool ReturnValue);
	void SetPointSetMaterial(const class FString& PointSetIdentifier, class UMaterialInterface* NewMaterial, bool ReturnValue);
	void SetLineSetVisibility(const class FString& LineSetIdentifier, bool bVisible, bool ReturnValue);
	void SetLineSetMaterial(const class FString& LineSetIdentifier, class UMaterialInterface* NewMaterial, bool ReturnValue);
	void SetAllPointSetsMaterial(class UMaterialInterface* Material);
	void SetAllLineSetsMaterial(class UMaterialInterface* Material);
	void RemovePointSet(const class FString& PointSetIdentifier, bool bDestroy, bool ReturnValue);
	void RemoveLineSet(const class FString& LineSetIdentifier, bool bDestroy, bool ReturnValue);
	void RemoveAllPointSets(bool bDestroy);
	void RemoveAllLineSets(bool bDestroy);
	void GetActor(class APreviewGeometryActor* ReturnValue);
	void FindPointSet(const class FString& PointSetIdentifier, class UPointSetComponent* ReturnValue);
	void FindLineSet(const class FString& LineSetIdentifier, class ULineSetComponent* ReturnValue);
	void Disconnect();
	void CreateInWorld(class UWorld* World, const struct FTransform& WithTransform);
	void AddPointSet(const class FString& PointSetIdentifier, class UPointSetComponent* ReturnValue);
	void AddLineSet(const class FString& LineSetIdentifier, class ULineSetComponent* ReturnValue);
};

// 0x28 (0xF8 - 0xD0)
// Class ModelingComponents.MeshElementsVisualizer
class UMeshElementsVisualizer : public UPreviewGeometry
{
public:
	class UMeshElementsVisualizerProperties*     Settings;                                          // 0xD0(0x8)(ZeroConstructor)
	class UMeshWireframeComponent*               WireframeComponent;                                // 0xD8(0x8)(ZeroConstructor)
	uint8                                        Pad_AE3[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshElementsVisualizer* GetDefaultObj();

};

// 0xA0 (0x760 - 0x6C0)
// Class ModelingComponents.MeshWireframeComponent
class UMeshWireframeComponent : public UMeshComponent
{
public:
	float                                        LineDepthBias;                                     // 0x6C0(0x4)(None)
	float                                        LineDepthBiasSizeScale;                            // 0x6C4(0x4)(None)
	float                                        ThicknessScale;                                    // 0x6C8(0x4)(None)
	bool                                         bEnableWireframe;                                  // 0x6CC(0x1)(None)
	uint8                                        Pad_AE9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                WireframeColor;                                    // 0x6D0(0x4)(None)
	float                                        WireframeThickness;                                // 0x6D4(0x4)(None)
	bool                                         bEnableBoundaryEdges;                              // 0x6D8(0x1)(None)
	uint8                                        Pad_AEB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                BoundaryEdgeColor;                                 // 0x6DC(0x4)(None)
	float                                        BoundaryEdgeThickness;                             // 0x6E0(0x4)(None)
	bool                                         bEnableUVSeams;                                    // 0x6E4(0x1)(None)
	uint8                                        Pad_AEC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                UVSeamColor;                                       // 0x6E8(0x4)(None)
	float                                        UVSeamThickness;                                   // 0x6EC(0x4)(None)
	bool                                         bEnableNormalSeams;                                // 0x6F0(0x1)(None)
	uint8                                        Pad_AED[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                NormalSeamColor;                                   // 0x6F4(0x4)(None)
	float                                        NormalSeamThickness;                               // 0x6F8(0x4)(None)
	bool                                         bEnableColorSeams;                                 // 0x6FC(0x1)(None)
	uint8                                        Pad_AEE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                ColorSeamColor;                                    // 0x700(0x4)(None)
	float                                        ColorSeamThickness;                                // 0x704(0x4)(None)
	class UMaterialInterface*                    LineMaterial;                                      // 0x708(0x8)(ZeroConstructor)
	struct FBoxSphereBounds                      LocalBounds;                                       // 0x710(0x38)(None)
	uint8                                        Pad_AEF[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshWireframeComponent* GetDefaultObj();

};

// 0x80 (0x740 - 0x6C0)
// Class ModelingComponents.PointSetComponent
class UPointSetComponent : public UMeshComponent
{
public:
	class UMaterialInterface*                    PointMaterial;                                     // 0x6C0(0x8)(ZeroConstructor)
	struct FBoxSphereBounds                      Bounds;                                            // 0x6C8(0x38)(None)
	bool                                         bBoundsDirty;                                      // 0x700(0x1)(None)
	uint8                                        Pad_AF0[0x3F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPointSetComponent* GetDefaultObj();

};

// 0x118 (0x140 - 0x28)
// Class ModelingComponents.PreviewMesh
class UPreviewMesh : public UObject
{
public:
	uint8                                        Pad_AF1[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bBuildSpatialDataStructure;                        // 0x40(0x1)(None)
	uint8                                        Pad_AF2[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicMeshComponent*                 DynamicMeshComponent;                              // 0x50(0x8)(None)
	uint8                                        Pad_AF3[0xE8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPreviewMesh* GetDefaultObj();

};

// 0x410 (0x550 - 0x140)
// Class ModelingComponents.PolyEditPreviewMesh
class UPolyEditPreviewMesh : public UPreviewMesh
{
public:
	uint8                                        Pad_AFA[0x410];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditPreviewMesh* GetDefaultObj();

};

// 0x0 (0x4C0 - 0x4C0)
// Class ModelingComponents.PreviewGeometryActor
class APreviewGeometryActor : public AInternalToolFrameworkActor
{
public:

	static class UClass* StaticClass();
	static class APreviewGeometryActor* GetDefaultObj();

};

// 0x100 (0x7C0 - 0x6C0)
// Class ModelingComponents.TriangleSetComponent
class UTriangleSetComponent : public UMeshComponent
{
public:
	struct FBoxSphereBounds                      Bounds;                                            // 0x6C0(0x38)(None)
	bool                                         bBoundsDirty;                                      // 0x6F8(0x1)(None)
	uint8                                        Pad_AFC[0xC7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTriangleSetComponent* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class ModelingComponents.UVLayoutPreviewProperties
class UUVLayoutPreviewProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bEnabled;                                          // 0xA8(0x1)(None)
	uint8                                        Pad_AFD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EUVLayoutPreviewSide              Side;                                              // 0xAC(0x4)(None)
	float                                        Scale;                                             // 0xB0(0x4)(None)
	uint8                                        Pad_AFE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Offset;                                            // 0xB8(0x10)(None)
	bool                                         bShowWireframe;                                    // 0xC8(0x1)(None)
	uint8                                        Pad_AFF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUVLayoutPreviewProperties* GetDefaultObj();

};

// 0x138 (0x160 - 0x28)
// Class ModelingComponents.UVLayoutPreview
class UUVLayoutPreview : public UObject
{
public:
	class UUVLayoutPreviewProperties*            Settings;                                          // 0x28(0x8)(ZeroConstructor)
	class UPreviewMesh*                          PreviewMesh;                                       // 0x30(0x8)(ZeroConstructor)
	class UTriangleSetComponent*                 TriangleComponent;                                 // 0x38(0x8)(ZeroConstructor)
	bool                                         bShowBackingRectangle;                             // 0x40(0x1)(None)
	uint8                                        Pad_B01[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    BackingRectangleMaterial;                          // 0x48(0x8)(None)
	uint8                                        Pad_B02[0x110];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUVLayoutPreview* GetDefaultObj();

};

// 0x590 (0x5C0 - 0x30)
// Class ModelingComponents.CollectSurfacePathMechanic
class UCollectSurfacePathMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_B04[0x590];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCollectSurfacePathMechanic* GetDefaultObj();

};

// 0xC0 (0xF0 - 0x30)
// Class ModelingComponents.ConstructionPlaneMechanic
class UConstructionPlaneMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_B09[0x98];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCombinedTransformGizmo*               PlaneTransformGizmo;                               // 0xC8(0x8)(ZeroConstructor)
	class UTransformProxy*                       PlaneTransformProxy;                               // 0xD0(0x8)(ZeroConstructor)
	uint8                                        Pad_B0A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USingleClickInputBehavior*             ClickToSetPlaneBehavior;                           // 0xE0(0x8)(ZeroConstructor)
	class ULocalSingleClickInputBehavior*        MiddleClickToSetGizmoBehavior;                     // 0xE8(0x8)(None)

	static class UClass* StaticClass();
	static class UConstructionPlaneMechanic* GetDefaultObj();

};

// 0x650 (0x680 - 0x30)
// Class ModelingComponents.CurveControlPointsMechanic
class UCurveControlPointsMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_B0B[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USingleClickInputBehavior*             ClickBehavior;                                     // 0x40(0x8)(ZeroConstructor)
	class UMouseHoverBehavior*                   HoverBehavior;                                     // 0x48(0x8)(ZeroConstructor)
	uint8                                        Pad_B0C[0x498];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class APreviewGeometryActor*                 PreviewGeometryActor;                              // 0x4E8(0x8)(ZeroConstructor)
	class UPointSetComponent*                    DrawnControlPoints;                                // 0x4F0(0x8)(ZeroConstructor)
	class ULineSetComponent*                     DrawnControlSegments;                              // 0x4F8(0x8)(ZeroConstructor)
	class UPointSetComponent*                    PreviewPoint;                                      // 0x500(0x8)(ZeroConstructor)
	class ULineSetComponent*                     PreviewSegment;                                    // 0x508(0x8)(ZeroConstructor)
	uint8                                        Pad_B0D[0x78];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTransformProxy*                       PointTransformProxy;                               // 0x588(0x8)(ZeroConstructor)
	class UCombinedTransformGizmo*               PointTransformGizmo;                               // 0x590(0x8)(None)
	uint8                                        Pad_B0E[0xE8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCurveControlPointsMechanic* GetDefaultObj();

};

// 0x240 (0x270 - 0x30)
// Class ModelingComponents.DragAlignmentMechanic
class UDragAlignmentMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_B0F[0x240];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDragAlignmentMechanic* GetDefaultObj();

};

// 0x2A8 (0x2D0 - 0x28)
// Class ModelingComponents.DragAlignmentInteraction
class UDragAlignmentInteraction : public UObject
{
public:
	uint8                                        Pad_B10[0x2A8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDragAlignmentInteraction* GetDefaultObj();

};

// 0x4D0 (0x500 - 0x30)
// Class ModelingComponents.LatticeControlPointsMechanic
class ULatticeControlPointsMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_B11[0x1F0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class APreviewGeometryActor*                 PreviewGeometryActor;                              // 0x220(0x8)(ZeroConstructor)
	class UPointSetComponent*                    DrawnControlPoints;                                // 0x228(0x8)(ZeroConstructor)
	class ULineSetComponent*                     DrawnLatticeEdges;                                 // 0x230(0x8)(ZeroConstructor)
	uint8                                        Pad_B12[0xA8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTransformProxy*                       PointTransformProxy;                               // 0x2E0(0x8)(ZeroConstructor)
	class UCombinedTransformGizmo*               PointTransformGizmo;                               // 0x2E8(0x8)(ZeroConstructor)
	uint8                                        Pad_B13[0x58];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URectangleMarqueeMechanic*             MarqueeMechanic;                                   // 0x348(0x8)(None)
	uint8                                        Pad_B14[0x1B0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULatticeControlPointsMechanic* GetDefaultObj();

};

// 0x4F0 (0x520 - 0x30)
// Class ModelingComponents.PlaneDistanceFromHitMechanic
class UPlaneDistanceFromHitMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_B15[0x4F0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlaneDistanceFromHitMechanic* GetDefaultObj();

};

// 0x1A0 (0x1D0 - 0x30)
// Class ModelingComponents.PolyLassoMarqueeMechanic
class UPolyLassoMarqueeMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_B18[0x58];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpacingTolerance;                                  // 0x88(0x4)(None)
	float                                        LineThickness;                                     // 0x8C(0x4)(None)
	struct FLinearColor                          LineColor;                                         // 0x90(0x10)(None)
	struct FLinearColor                          ClosedColor;                                       // 0xA0(0x10)(None)
	bool                                         bEnableFreehandPolygons;                           // 0xB0(0x1)(None)
	bool                                         bEnableMultiClickPolygons;                         // 0xB1(0x1)(None)
	uint8                                        Pad_B19[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClickDragInputBehavior*               ClickDragBehavior;                                 // 0xB8(0x8)(ZeroConstructor)
	class UMouseHoverBehavior*                   HoverBehavior;                                     // 0xC0(0x8)(None)
	uint8                                        Pad_B1A[0x108];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyLassoMarqueeMechanic* GetDefaultObj();

};

// 0x1F0 (0x220 - 0x30)
// Class ModelingComponents.RectangleMarqueeMechanic
class URectangleMarqueeMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_B1B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUseExternalClickDragBehavior;                     // 0x38(0x1)(None)
	bool                                         bUseExternalUpdateCameraState;                     // 0x39(0x1)(None)
	uint8                                        Pad_B1C[0x46];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OnDragRectangleChangedDeferredThreshold;           // 0x80(0x8)(None)
	uint8                                        Pad_B1D[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClickDragInputBehavior*               ClickDragBehavior;                                 // 0xD0(0x8)(None)
	uint8                                        Pad_B1E[0x148];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URectangleMarqueeMechanic* GetDefaultObj();

};

// 0x1E8 (0x210 - 0x28)
// Class ModelingComponents.RectangleMarqueeInteraction
class URectangleMarqueeInteraction : public UObject
{
public:
	uint8                                        Pad_B1F[0x1E8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URectangleMarqueeInteraction* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet
class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet
{
public:
	enum class ESpaceCurveControlPointTransformMode TransformMode;                                     // 0xA8(0x4)(None)
	enum class ESpaceCurveControlPointOriginMode TransformOrigin;                                   // 0xAC(0x4)(None)
	float                                        Softness;                                          // 0xB0(0x4)(None)
	enum class ESpaceCurveControlPointFalloffType SoftFalloff;                                       // 0xB4(0x4)(None)

	static class UClass* StaticClass();
	static class USpaceCurveDeformationMechanicPropertySet* GetDefaultObj();

};

// 0x2A0 (0x2D0 - 0x30)
// Class ModelingComponents.SpaceCurveDeformationMechanic
class USpaceCurveDeformationMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_B23[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USingleClickInputBehavior*             ClickBehavior;                                     // 0x40(0x8)(ZeroConstructor)
	class UMouseHoverBehavior*                   HoverBehavior;                                     // 0x48(0x8)(ZeroConstructor)
	uint8                                        Pad_B25[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USpaceCurveDeformationMechanicPropertySet* TransformProperties;                               // 0x68(0x8)(ZeroConstructor)
	uint8                                        Pad_B26[0xF8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APreviewGeometryActor*                 PreviewGeometryActor;                              // 0x168(0x8)(ZeroConstructor)
	class UPointSetComponent*                    RenderPoints;                                      // 0x170(0x8)(ZeroConstructor)
	class ULineSetComponent*                     RenderSegments;                                    // 0x178(0x8)(ZeroConstructor)
	uint8                                        Pad_B27[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTransformProxy*                       PointTransformProxy;                               // 0x1B8(0x8)(ZeroConstructor)
	class UCombinedTransformGizmo*               PointTransformGizmo;                               // 0x1C0(0x8)(None)
	uint8                                        Pad_B28[0x108];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpaceCurveDeformationMechanic* GetDefaultObj();

};

// 0x3E0 (0x410 - 0x30)
// Class ModelingComponents.SpatialCurveDistanceMechanic
class USpatialCurveDistanceMechanic : public UInteractionMechanic
{
public:
	uint8                                        Pad_B2F[0x3E0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USpatialCurveDistanceMechanic* GetDefaultObj();

};

// 0x90 (0xB8 - 0x28)
// Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
class UMeshOpPreviewWithBackgroundCompute : public UObject
{
public:
	uint8                                        Pad_B34[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPreviewMesh*                          PreviewMesh;                                       // 0x58(0x8)(ZeroConstructor)
	TArray<class UMaterialInterface*>            StandardMaterials;                                 // 0x60(0x10)(ZeroConstructor)
	class UMaterialInterface*                    OverrideMaterial;                                  // 0x70(0x8)(ZeroConstructor)
	class UMaterialInterface*                    WorkingMaterial;                                   // 0x78(0x8)(ZeroConstructor)
	class UMaterialInterface*                    SecondaryMaterial;                                 // 0x80(0x8)(ZeroConstructor)
	TWeakObjectPtr<class UWorld>                 PreviewWorld;                                      // 0x88(0x8)(None)
	uint8                                        Pad_B35[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshOpPreviewWithBackgroundCompute* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class ModelingComponents.ModelingComponentsSettings
class UModelingComponentsSettings : public UDeveloperSettings
{
public:
	bool                                         bEnableRayTracingWhileEditing;                     // 0x38(0x1)(None)
	bool                                         bEnableRayTracing;                                 // 0x39(0x1)(None)
	bool                                         bEnableCollision;                                  // 0x3A(0x1)(None)
	enum class ECollisionTraceFlag               CollisionMode;                                     // 0x3B(0x1)(None)
	uint8                                        Pad_B36[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModelingComponentsSettings* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class ModelingComponents.ModelingComponentsEditorSettings
class UModelingComponentsEditorSettings : public UDeveloperSettings
{
public:
	enum class EModelingComponentsPlaneVisualizationMode GridMode;                                          // 0x38(0x1)(None)
	uint8                                        Pad_B38[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumGridLines;                                      // 0x3C(0x4)(None)
	float                                        GridSpacing;                                       // 0x40(0x4)(None)
	float                                        GridScale;                                         // 0x44(0x4)(None)
	float                                        GridSize;                                          // 0x48(0x4)(None)
	uint8                                        Pad_B39[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModelingComponentsEditorSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ModelingComponents.ModelingObjectsCreationAPI
class UModelingObjectsCreationAPI : public UObject
{
public:

	static class UClass* StaticClass();
	static class UModelingObjectsCreationAPI* GetDefaultObj();

	void CreateTextureObject(const struct FCreateTextureObjectParams& CreateTexParams, const struct FCreateTextureObjectResult& ReturnValue);
	void CreateMeshObject(const struct FCreateMeshObjectParams& CreateMeshParams, const struct FCreateMeshObjectResult& ReturnValue);
};

// 0x0 (0x4C0 - 0x4C0)
// Class ModelingComponents.PreviewMeshActor
class APreviewMeshActor : public AInternalToolFrameworkActor
{
public:

	static class UClass* StaticClass();
	static class APreviewMeshActor* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class ModelingComponents.CreateMeshObjectTypeProperties
class UCreateMeshObjectTypeProperties : public UInteractiveToolPropertySet
{
public:
	class FString                                OutputType;                                        // 0xA8(0x10)(None)
	class UClass*                                VolumeType;                                        // 0xB8(0x8)(ZeroConstructor)
	TArray<class FString>                        OutputTypeNamesList;                               // 0xC0(0x10)(None)
	bool                                         bShowVolumeList;                                   // 0xD0(0x1)(None)
	uint8                                        Pad_B50[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCreateMeshObjectTypeProperties* GetDefaultObj();

	void ShouldShowPropertySet(bool ReturnValue);
	void GetOutputTypeNamesFunc(const TArray<class FString>& ReturnValue);
	void GetCurrentCreateMeshType(enum class ECreateObjectTypeHint ReturnValue);
};

// 0x8 (0xB0 - 0xA8)
// Class ModelingComponents.OnAcceptHandleSourcesPropertiesSingle
class UOnAcceptHandleSourcesPropertiesSingle : public UOnAcceptHandleSourcesPropertiesBase
{
public:
	enum class EHandleSourcesMethod              HandleInputs;                                      // 0xA8(0x1)(None)
	uint8                                        Pad_B56[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOnAcceptHandleSourcesPropertiesSingle* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class ModelingComponents.PolygroupLayersProperties
class UPolygroupLayersProperties : public UInteractiveToolPropertySet
{
public:
	class FName                                  ActiveGroupLayer;                                  // 0xA8(0x8)(None)
	TArray<class FString>                        GroupLayersList;                                   // 0xB0(0x10)(None)

	static class UClass* StaticClass();
	static class UPolygroupLayersProperties* GetDefaultObj();

	void GetGroupLayersFunc(const TArray<class FString>& ReturnValue);
};

// 0x20 (0xC8 - 0xA8)
// Class ModelingComponents.WeightMapSetProperties
class UWeightMapSetProperties : public UInteractiveToolPropertySet
{
public:
	class FName                                  WeightMap;                                         // 0xA8(0x8)(None)
	TArray<class FString>                        WeightMapsList;                                    // 0xB0(0x10)(None)
	bool                                         bInvertWeightMap;                                  // 0xC0(0x1)(None)
	uint8                                        Pad_B5D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWeightMapSetProperties* GetDefaultObj();

	void GetWeightMapsFunc(const TArray<class FString>& ReturnValue);
};

// 0x250 (0x278 - 0x28)
// Class ModelingComponents.GeometrySelectionManager
class UGeometrySelectionManager : public UObject
{
public:
	uint8                                        Pad_B60[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeometrySelectionEditCommandArguments* SelectionArguments;                                // 0x50(0x8)(ZeroConstructor)
	uint8                                        Pad_B61[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UInteractiveToolsContext*              ToolsContext;                                      // 0x60(0x8)(None)
	uint8                                        Pad_B62[0x210];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGeometrySelectionManager* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class ModelingComponents.PersistentMeshSelection
class UPersistentMeshSelection : public UObject
{
public:
	uint8                                        Pad_B64[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPersistentMeshSelection* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class ModelingComponents.PersistentMeshSelectionManager
class UPersistentMeshSelectionManager : public UObject
{
public:
	class UInteractiveToolsContext*              ParentContext;                                     // 0x28(0x8)(ZeroConstructor)
	class UPersistentMeshSelection*              ActiveSelection;                                   // 0x30(0x8)(ZeroConstructor)
	class UPreviewGeometry*                      SelectionDisplay;                                  // 0x38(0x8)(None)

	static class UClass* StaticClass();
	static class UPersistentMeshSelectionManager* GetDefaultObj();

};

// 0x0 (0xC0 - 0xC0)
// Class ModelingComponents.PolygonSelectionMechanicProperties
class UPolygonSelectionMechanicProperties : public UMeshTopologySelectionMechanicProperties
{
public:

	static class UClass* StaticClass();
	static class UPolygonSelectionMechanicProperties* GetDefaultObj();

};

// 0x10 (0xB00 - 0xAF0)
// Class ModelingComponents.PolygonSelectionMechanic
class UPolygonSelectionMechanic : public UMeshTopologySelectionMechanic
{
public:
	class UPolygonSelectionMechanicProperties*   Properties;                                        // 0xAF0(0x8)(ZeroConstructor)
	uint8                                        Pad_B69[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolygonSelectionMechanic* GetDefaultObj();

};

// 0x128 (0x150 - 0x28)
// Class ModelingComponents.ModelingSceneSnappingManager
class UModelingSceneSnappingManager : public USceneSnappingManager
{
public:
	class UInteractiveToolsContext*              ParentContext;                                     // 0x28(0x8)(None)
	uint8                                        Pad_B6A[0x120];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModelingSceneSnappingManager* GetDefaultObj();

};

// 0x188 (0x1B0 - 0x28)
// Class ModelingComponents.MultiTransformer
class UMultiTransformer : public UObject
{
public:
	uint8                                        Pad_B6B[0x60];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInteractiveGizmoManager*              GizmoManager;                                      // 0x88(0x8)(ZeroConstructor)
	uint8                                        Pad_B6C[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCombinedTransformGizmo*               TransformGizmo;                                    // 0x100(0x8)(ZeroConstructor)
	class UTransformProxy*                       TransformProxy;                                    // 0x108(0x8)(ZeroConstructor)
	class UDragAlignmentMechanic*                DragAlignmentMechanic;                             // 0x110(0x8)(None)
	uint8                                        Pad_B6D[0x98];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMultiTransformer* GetDefaultObj();

};

}


