#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x120 - 0x28)
// Class MeshModelingTools.PolyEditActivityContext
class UPolyEditActivityContext : public UObject
{
public:
	class UPolyEditCommonProperties*             CommonProperties;                                  // 0x28(0x8)(ZeroConstructor)
	uint8                                        Pad_7C9[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0x40(0x8)(ZeroConstructor)
	uint8                                        Pad_7CA[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolygonSelectionMechanic*             SelectionMechanic;                                 // 0x70(0x8)(None)
	uint8                                        Pad_7CB[0xA8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditActivityContext* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.AddPrimitiveToolBuilder
class UAddPrimitiveToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_7CC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAddPrimitiveToolBuilder* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingTools.ProceduralShapeToolProperties
class UProceduralShapeToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EMakeMeshPolygroupMode            PolygroupMode;                                     // 0xA8(0x1)(None)
	enum class EMakeMeshPlacementType            TargetSurface;                                     // 0xA9(0x1)(None)
	enum class EMakeMeshPivotLocation            PivotLocation;                                     // 0xAA(0x1)(None)
	uint8                                        Pad_7CE[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Rotation;                                          // 0xAC(0x4)(None)
	bool                                         bAlignToNormal;                                    // 0xB0(0x1)(None)
	bool                                         bShowGizmo;                                        // 0xB1(0x1)(None)
	bool                                         bShowGizmoOptions;                                 // 0xB2(0x1)(None)
	uint8                                        Pad_7CF[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralShapeToolProperties* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class MeshModelingTools.ProceduralBoxToolProperties
class UProceduralBoxToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        Width;                                             // 0xB8(0x4)(None)
	float                                        Depth;                                             // 0xBC(0x4)(None)
	float                                        Height;                                            // 0xC0(0x4)(None)
	int32                                        WidthSubdivisions;                                 // 0xC4(0x4)(None)
	int32                                        DepthSubdivisions;                                 // 0xC8(0x4)(None)
	int32                                        HeightSubdivisions;                                // 0xCC(0x4)(None)

	static class UClass* StaticClass();
	static class UProceduralBoxToolProperties* GetDefaultObj();

};

// 0x20 (0xD8 - 0xB8)
// Class MeshModelingTools.ProceduralRectangleToolProperties
class UProceduralRectangleToolProperties : public UProceduralShapeToolProperties
{
public:
	enum class EProceduralRectType               RectangleType;                                     // 0xB8(0x4)(None)
	float                                        Width;                                             // 0xBC(0x4)(None)
	float                                        Depth;                                             // 0xC0(0x4)(None)
	int32                                        WidthSubdivisions;                                 // 0xC4(0x4)(None)
	int32                                        DepthSubdivisions;                                 // 0xC8(0x4)(None)
	float                                        CornerRadius;                                      // 0xCC(0x4)(None)
	int32                                        CornerSlices;                                      // 0xD0(0x4)(None)
	uint8                                        Pad_7D7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralRectangleToolProperties* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class MeshModelingTools.ProceduralDiscToolProperties
class UProceduralDiscToolProperties : public UProceduralShapeToolProperties
{
public:
	enum class EProceduralDiscType               DiscType;                                          // 0xB8(0x4)(None)
	float                                        Radius;                                            // 0xBC(0x4)(None)
	int32                                        RadialSlices;                                      // 0xC0(0x4)(None)
	int32                                        RadialSubdivisions;                                // 0xC4(0x4)(None)
	float                                        HoleRadius;                                        // 0xC8(0x4)(None)
	uint8                                        Pad_7DA[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralDiscToolProperties* GetDefaultObj();

};

// 0x10 (0xC8 - 0xB8)
// Class MeshModelingTools.ProceduralTorusToolProperties
class UProceduralTorusToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        MajorRadius;                                       // 0xB8(0x4)(None)
	float                                        MinorRadius;                                       // 0xBC(0x4)(None)
	int32                                        MajorSlices;                                       // 0xC0(0x4)(None)
	int32                                        MinorSlices;                                       // 0xC4(0x4)(None)

	static class UClass* StaticClass();
	static class UProceduralTorusToolProperties* GetDefaultObj();

};

// 0x10 (0xC8 - 0xB8)
// Class MeshModelingTools.ProceduralCylinderToolProperties
class UProceduralCylinderToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        Radius;                                            // 0xB8(0x4)(None)
	float                                        Height;                                            // 0xBC(0x4)(None)
	int32                                        RadialSlices;                                      // 0xC0(0x4)(None)
	int32                                        HeightSubdivisions;                                // 0xC4(0x4)(None)

	static class UClass* StaticClass();
	static class UProceduralCylinderToolProperties* GetDefaultObj();

};

// 0x10 (0xC8 - 0xB8)
// Class MeshModelingTools.ProceduralConeToolProperties
class UProceduralConeToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        Radius;                                            // 0xB8(0x4)(None)
	float                                        Height;                                            // 0xBC(0x4)(None)
	int32                                        RadialSlices;                                      // 0xC0(0x4)(None)
	int32                                        HeightSubdivisions;                                // 0xC4(0x4)(None)

	static class UClass* StaticClass();
	static class UProceduralConeToolProperties* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class MeshModelingTools.ProceduralArrowToolProperties
class UProceduralArrowToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        ShaftRadius;                                       // 0xB8(0x4)(None)
	float                                        ShaftHeight;                                       // 0xBC(0x4)(None)
	float                                        HeadRadius;                                        // 0xC0(0x4)(None)
	float                                        HeadHeight;                                        // 0xC4(0x4)(None)
	int32                                        RadialSlices;                                      // 0xC8(0x4)(None)
	int32                                        HeightSubdivisions;                                // 0xCC(0x4)(None)

	static class UClass* StaticClass();
	static class UProceduralArrowToolProperties* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class MeshModelingTools.ProceduralSphereToolProperties
class UProceduralSphereToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        Radius;                                            // 0xB8(0x4)(None)
	enum class EProceduralSphereType             SubdivisionType;                                   // 0xBC(0x4)(None)
	int32                                        Subdivisions;                                      // 0xC0(0x4)(None)
	int32                                        HorizontalSlices;                                  // 0xC4(0x4)(None)
	int32                                        VerticalSlices;                                    // 0xC8(0x4)(None)
	uint8                                        Pad_7F2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralSphereToolProperties* GetDefaultObj();

};

// 0x20 (0xD8 - 0xB8)
// Class MeshModelingTools.ProceduralStairsToolProperties
class UProceduralStairsToolProperties : public UProceduralShapeToolProperties
{
public:
	enum class EProceduralStairsType             StairsType;                                        // 0xB8(0x4)(None)
	int32                                        NumSteps;                                          // 0xBC(0x4)(None)
	float                                        StepWidth;                                         // 0xC0(0x4)(None)
	float                                        StepHeight;                                        // 0xC4(0x4)(None)
	float                                        StepDepth;                                         // 0xC8(0x4)(None)
	float                                        CurveAngle;                                        // 0xCC(0x4)(None)
	float                                        SpiralAngle;                                       // 0xD0(0x4)(None)
	float                                        InnerRadius;                                       // 0xD4(0x4)(None)

	static class UClass* StaticClass();
	static class UProceduralStairsToolProperties* GetDefaultObj();

};

// 0x98 (0x138 - 0xA0)
// Class MeshModelingTools.AddPrimitiveTool
class UAddPrimitiveTool : public USingleClickTool
{
public:
	uint8                                        Pad_7FA[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xB8(0x8)(ZeroConstructor)
	class UProceduralShapeToolProperties*        ShapeSettings;                                     // 0xC0(0x8)(ZeroConstructor)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0xC8(0x8)(ZeroConstructor)
	class UPreviewMesh*                          PreviewMesh;                                       // 0xD0(0x8)(ZeroConstructor)
	class UCombinedTransformGizmo*               Gizmo;                                             // 0xD8(0x8)(ZeroConstructor)
	class UDragAlignmentMechanic*                DragAlignmentMechanic;                             // 0xE0(0x8)(ZeroConstructor)
	class FString                                AssetName;                                         // 0xE8(0x10)(None)
	uint8                                        Pad_7FB[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAddPrimitiveTool* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddBoxPrimitiveTool
class UAddBoxPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddBoxPrimitiveTool* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddCylinderPrimitiveTool
class UAddCylinderPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddCylinderPrimitiveTool* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddConePrimitiveTool
class UAddConePrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddConePrimitiveTool* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddRectanglePrimitiveTool
class UAddRectanglePrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddRectanglePrimitiveTool* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddDiscPrimitiveTool
class UAddDiscPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddDiscPrimitiveTool* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddTorusPrimitiveTool
class UAddTorusPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddTorusPrimitiveTool* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddArrowPrimitiveTool
class UAddArrowPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddArrowPrimitiveTool* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddSpherePrimitiveTool
class UAddSpherePrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddSpherePrimitiveTool* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddStairsPrimitiveTool
class UAddStairsPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass();
	static class UAddStairsPrimitiveTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.CombineMeshesToolBuilder
class UCombineMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:
	uint8                                        Pad_811[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCombineMeshesToolBuilder* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class MeshModelingTools.CombineMeshesToolProperties
class UCombineMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bIsDuplicateMode;                                  // 0xA8(0x1)(None)
	uint8                                        Pad_815[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EBaseCreateFromSelectedTargetType OutputWriteTo;                                     // 0xAC(0x4)(None)
	class FString                                OutputNewName;                                     // 0xB0(0x10)(None)
	class FString                                OutputExistingName;                                // 0xC0(0x10)(None)

	static class UClass* StaticClass();
	static class UCombineMeshesToolProperties* GetDefaultObj();

};

// 0x28 (0xE0 - 0xB8)
// Class MeshModelingTools.CombineMeshesTool
class UCombineMeshesTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_848[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCombineMeshesToolProperties*          BasicProperties;                                   // 0xC0(0x8)(ZeroConstructor)
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xC8(0x8)(ZeroConstructor)
	class UOnAcceptHandleSourcesPropertiesBase*  HandleSourceProperties;                            // 0xD0(0x8)(ZeroConstructor)
	uint8                                        Pad_84A[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCombineMeshesTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.DeleteGeometrySelectionCommand
class UDeleteGeometrySelectionCommand : public UGeometrySelectionEditCommand
{
public:

	static class UClass* StaticClass();
	static class UDeleteGeometrySelectionCommand* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.DisconnectGeometrySelectionCommand
class UDisconnectGeometrySelectionCommand : public UGeometrySelectionEditCommand
{
public:

	static class UClass* StaticClass();
	static class UDisconnectGeometrySelectionCommand* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.ModifyGeometrySelectionCommand
class UModifyGeometrySelectionCommand : public UGeometrySelectionEditCommand
{
public:

	static class UClass* StaticClass();
	static class UModifyGeometrySelectionCommand* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.ModifyGeometrySelectionCommand_Invert
class UModifyGeometrySelectionCommand_Invert : public UModifyGeometrySelectionCommand
{
public:

	static class UClass* StaticClass();
	static class UModifyGeometrySelectionCommand_Invert* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.ModifyGeometrySelectionCommand_ExpandToConnected
class UModifyGeometrySelectionCommand_ExpandToConnected : public UModifyGeometrySelectionCommand
{
public:

	static class UClass* StaticClass();
	static class UModifyGeometrySelectionCommand_ExpandToConnected* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.ModifyGeometrySelectionCommand_InvertConnected
class UModifyGeometrySelectionCommand_InvertConnected : public UModifyGeometrySelectionCommand
{
public:

	static class UClass* StaticClass();
	static class UModifyGeometrySelectionCommand_InvertConnected* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.ModifyGeometrySelectionCommand_Expand
class UModifyGeometrySelectionCommand_Expand : public UModifyGeometrySelectionCommand
{
public:

	static class UClass* StaticClass();
	static class UModifyGeometrySelectionCommand_Expand* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.ModifyGeometrySelectionCommand_Contract
class UModifyGeometrySelectionCommand_Contract : public UModifyGeometrySelectionCommand
{
public:

	static class UClass* StaticClass();
	static class UModifyGeometrySelectionCommand_Contract* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.RetriangulateGeometrySelectionCommand
class URetriangulateGeometrySelectionCommand : public UGeometrySelectionEditCommand
{
public:

	static class UClass* StaticClass();
	static class URetriangulateGeometrySelectionCommand* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class MeshModelingTools.CSGMeshesToolProperties
class UCSGMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class ECSGOperation                     Operation;                                         // 0xA8(0x1)(None)
	bool                                         bTryFixHoles;                                      // 0xA9(0x1)(None)
	bool                                         bTryCollapseEdges;                                 // 0xAA(0x1)(None)
	uint8                                        Pad_86B[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WindingThreshold;                                  // 0xAC(0x4)(None)
	bool                                         bShowNewBoundaries;                                // 0xB0(0x1)(None)
	bool                                         bShowSubtractedMesh;                               // 0xB1(0x1)(None)
	uint8                                        Pad_86C[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SubtractedMeshOpacity;                             // 0xB4(0x4)(None)
	struct FLinearColor                          SubtractedMeshColor;                               // 0xB8(0x10)(None)
	bool                                         bUseFirstMeshMaterials;                            // 0xC8(0x1)(None)
	uint8                                        Pad_86D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCSGMeshesToolProperties* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingTools.TrimMeshesToolProperties
class UTrimMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class ETrimOperation                    WhichMesh;                                         // 0xA8(0x1)(None)
	enum class ETrimSide                         TrimSide;                                          // 0xA9(0x1)(None)
	uint8                                        Pad_874[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WindingThreshold;                                  // 0xAC(0x4)(None)
	bool                                         bShowTrimmingMesh;                                 // 0xB0(0x1)(None)
	uint8                                        Pad_876[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OpacityOfTrimmingMesh;                             // 0xB4(0x4)(None)
	struct FLinearColor                          ColorOfTrimmingMesh;                               // 0xB8(0x10)(None)

	static class UClass* StaticClass();
	static class UTrimMeshesToolProperties* GetDefaultObj();

};

// 0x58 (0x158 - 0x100)
// Class MeshModelingTools.CSGMeshesTool
class UCSGMeshesTool : public UBaseCreateFromSelectedTool
{
public:
	class UCSGMeshesToolProperties*              CSGProperties;                                     // 0x100(0x8)(ZeroConstructor)
	class UTrimMeshesToolProperties*             TrimProperties;                                    // 0x108(0x8)(ZeroConstructor)
	uint8                                        Pad_879[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPreviewMesh*>                  OriginalMeshPreviews;                              // 0x120(0x10)(ZeroConstructor)
	class UMaterialInstanceDynamic*              PreviewsGhostMaterial;                             // 0x130(0x8)(ZeroConstructor)
	class ULineSetComponent*                     DrawnLineSet;                                      // 0x138(0x8)(ZeroConstructor)
	uint8                                        Pad_87B[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCSGMeshesTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.CSGMeshesToolBuilder
class UCSGMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:
	uint8                                        Pad_87D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCSGMeshesToolBuilder* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingTools.CutMeshWithMeshToolProperties
class UCutMeshWithMeshToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bTryFixHoles;                                      // 0xA8(0x1)(None)
	bool                                         bTryCollapseEdges;                                 // 0xA9(0x1)(None)
	uint8                                        Pad_881[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WindingThreshold;                                  // 0xAC(0x4)(None)
	bool                                         bShowNewBoundaries;                                // 0xB0(0x1)(None)
	bool                                         bUseFirstMeshMaterials;                            // 0xB1(0x1)(None)
	uint8                                        Pad_882[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCutMeshWithMeshToolProperties* GetDefaultObj();

};

// 0x278 (0x378 - 0x100)
// Class MeshModelingTools.CutMeshWithMeshTool
class UCutMeshWithMeshTool : public UBaseCreateFromSelectedTool
{
public:
	class UCutMeshWithMeshToolProperties*        CutProperties;                                     // 0x100(0x8)(ZeroConstructor)
	class UPreviewMesh*                          IntersectPreviewMesh;                              // 0x108(0x8)(ZeroConstructor)
	uint8                                        Pad_883[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULineSetComponent*                     DrawnLineSet;                                      // 0x130(0x8)(ZeroConstructor)
	uint8                                        Pad_884[0x240];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCutMeshWithMeshTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.CutMeshWithMeshToolBuilder
class UCutMeshWithMeshToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UCutMeshWithMeshToolBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.DrawAndRevolveToolBuilder
class UDrawAndRevolveToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UDrawAndRevolveToolBuilder* GetDefaultObj();

};

// 0x70 (0x118 - 0xA8)
// Class MeshModelingTools.RevolveProperties
class URevolveProperties : public UInteractiveToolPropertySet
{
public:
	double                                       RevolveDegreesClamped;                             // 0xA8(0x8)(None)
	double                                       RevolveDegrees;                                    // 0xB0(0x8)(None)
	double                                       RevolveDegreesOffset;                              // 0xB8(0x8)(None)
	double                                       StepsMaxDegrees;                                   // 0xC0(0x8)(None)
	bool                                         bExplicitSteps;                                    // 0xC8(0x1)(None)
	uint8                                        Pad_88B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumExplicitSteps;                                  // 0xCC(0x4)(None)
	double                                       HeightOffsetPerDegree;                             // 0xD0(0x8)(None)
	bool                                         bReverseRevolutionDirection;                       // 0xD8(0x1)(None)
	bool                                         bFlipMesh;                                         // 0xD9(0x1)(None)
	bool                                         bSharpNormals;                                     // 0xDA(0x1)(None)
	uint8                                        Pad_88C[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SharpNormalsDegreeThreshold;                       // 0xE0(0x8)(None)
	bool                                         bPathAtMidpointOfStep;                             // 0xE8(0x1)(None)
	enum class ERevolvePropertiesPolygroupMode   PolygroupMode;                                     // 0xE9(0x1)(None)
	enum class ERevolvePropertiesQuadSplit       QuadSplitMode;                                     // 0xEA(0x1)(None)
	uint8                                        Pad_88D[0x2D];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URevolveProperties* GetDefaultObj();

};

// 0x40 (0x158 - 0x118)
// Class MeshModelingTools.RevolveToolProperties
class URevolveToolProperties : public URevolveProperties
{
public:
	enum class ERevolvePropertiesCapFillMode     CapFillMode;                                       // 0x118(0x1)(None)
	bool                                         bClosePathToAxis;                                  // 0x119(0x1)(None)
	uint8                                        Pad_892[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DrawPlaneOrigin;                                   // 0x120(0x18)(None)
	struct FRotator                              DrawPlaneOrientation;                              // 0x138(0x18)(None)
	bool                                         bEnableSnapping;                                   // 0x150(0x1)(None)
	bool                                         bAllowedToEditDrawPlane;                           // 0x151(0x1)(None)
	uint8                                        Pad_894[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URevolveToolProperties* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MeshModelingTools.RevolveOperatorFactory
class URevolveOperatorFactory : public UObject
{
public:
	uint8                                        Pad_898[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDrawAndRevolveTool*                   RevolveTool;                                       // 0x30(0x8)(None)

	static class UClass* StaticClass();
	static class URevolveOperatorFactory* GetDefaultObj();

};

// 0xC8 (0x160 - 0x98)
// Class MeshModelingTools.DrawAndRevolveTool
class UDrawAndRevolveTool : public UInteractiveTool
{
public:
	uint8                                        Pad_89A[0x90];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveControlPointsMechanic*           ControlPointsMechanic;                             // 0x128(0x8)(ZeroConstructor)
	class UConstructionPlaneMechanic*            PlaneMechanic;                                     // 0x130(0x8)(ZeroConstructor)
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0x138(0x8)(ZeroConstructor)
	class URevolveToolProperties*                Settings;                                          // 0x140(0x8)(ZeroConstructor)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0x148(0x8)(ZeroConstructor)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0x150(0x8)(ZeroConstructor)
	uint8                                        Pad_89B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDrawAndRevolveTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.DrawPolygonToolBuilder
class UDrawPolygonToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UDrawPolygonToolBuilder* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class MeshModelingTools.DrawPolygonToolStandardProperties
class UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet
{
public:
	enum class EDrawPolygonDrawMode              PolygonDrawMode;                                   // 0xA8(0x1)(None)
	bool                                         bAllowSelfIntersections;                           // 0xA9(0x1)(None)
	uint8                                        Pad_8A8[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FeatureSizeRatio;                                  // 0xAC(0x4)(None)
	int32                                        RadialSlices;                                      // 0xB0(0x4)(None)
	float                                        Distance;                                          // 0xB4(0x4)(None)
	bool                                         bShowGridGizmo;                                    // 0xB8(0x1)(None)
	enum class EDrawPolygonExtrudeMode           ExtrudeMode;                                       // 0xB9(0x1)(None)
	uint8                                        Pad_8AA[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExtrudeHeight;                                     // 0xBC(0x4)(None)

	static class UClass* StaticClass();
	static class UDrawPolygonToolStandardProperties* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingTools.DrawPolygonToolSnapProperties
class UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bEnableSnapping;                                   // 0xA8(0x1)(None)
	bool                                         bSnapToWorldGrid;                                  // 0xA9(0x1)(None)
	bool                                         bSnapToVertices;                                   // 0xAA(0x1)(None)
	bool                                         bSnapToEdges;                                      // 0xAB(0x1)(None)
	bool                                         bSnapToAxes;                                       // 0xAC(0x1)(None)
	bool                                         bSnapToLengths;                                    // 0xAD(0x1)(None)
	bool                                         bSnapToSurfaces;                                   // 0xAE(0x1)(None)
	uint8                                        Pad_8AE[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SnapToSurfacesOffset;                              // 0xB0(0x4)(None)
	uint8                                        Pad_8B1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDrawPolygonToolSnapProperties* GetDefaultObj();

};

// 0x4B8 (0x550 - 0x98)
// Class MeshModelingTools.DrawPolygonTool
class UDrawPolygonTool : public UInteractiveTool
{
public:
	uint8                                        Pad_8B5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xA0(0x8)(ZeroConstructor)
	class UDrawPolygonToolStandardProperties*    PolygonProperties;                                 // 0xA8(0x8)(ZeroConstructor)
	class UDrawPolygonToolSnapProperties*        SnapProperties;                                    // 0xB0(0x8)(ZeroConstructor)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0xB8(0x8)(ZeroConstructor)
	uint8                                        Pad_8B9[0x90];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPreviewMesh*                          PreviewMesh;                                       // 0x150(0x8)(ZeroConstructor)
	uint8                                        Pad_8BB[0x3D0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlaneDistanceFromHitMechanic*         HeightMechanic;                                    // 0x528(0x8)(ZeroConstructor)
	class UDragAlignmentMechanic*                DragAlignmentMechanic;                             // 0x530(0x8)(ZeroConstructor)
	class UConstructionPlaneMechanic*            PlaneMechanic;                                     // 0x538(0x8)(ZeroConstructor)
	uint8                                        Pad_8BD[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDrawPolygonTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.EditMeshPolygonsToolBuilder
class UEditMeshPolygonsToolBuilder : public USingleTargetWithSelectionToolBuilder
{
public:
	uint8                                        Pad_8C0[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolBuilder* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingTools.PolyEditCommonProperties
class UPolyEditCommonProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bShowWireframe;                                    // 0xA8(0x1)(None)
	bool                                         bShowSelectableCorners;                            // 0xA9(0x1)(None)
	bool                                         bGizmoVisible;                                     // 0xAA(0x1)(None)
	uint8                                        Pad_8C5[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ELocalFrameMode                   LocalFrameMode;                                    // 0xAC(0x4)(None)
	bool                                         bLockRotation;                                     // 0xB0(0x1)(None)
	bool                                         bLocalCoordSystem;                                 // 0xB1(0x1)(None)
	uint8                                        Pad_8C6[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditCommonProperties* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class MeshModelingTools.EditMeshPolygonsActionModeToolBuilder
class UEditMeshPolygonsActionModeToolBuilder : public UEditMeshPolygonsToolBuilder
{
public:
	uint8                                        Pad_8C8[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditMeshPolygonsActionModeToolBuilder* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class MeshModelingTools.EditMeshPolygonsSelectionModeToolBuilder
class UEditMeshPolygonsSelectionModeToolBuilder : public UEditMeshPolygonsToolBuilder
{
public:
	uint8                                        Pad_8CB[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditMeshPolygonsSelectionModeToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet
class UEditMeshPolygonsToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_8CF[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolActionPropertySet* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class MeshModelingTools.PolyEditTopologyProperties
class UPolyEditTopologyProperties : public UEditMeshPolygonsToolActionPropertySet
{
public:
	bool                                         bAddExtraCorners;                                  // 0xB0(0x1)(None)
	uint8                                        Pad_8D5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ExtraCornerAngleThresholdDegrees;                  // 0xB8(0x8)(None)

	static class UClass* StaticClass();
	static class UPolyEditTopologyProperties* GetDefaultObj();

	void RegenerateExtraCorners();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingTools.EditMeshPolygonsToolActions
class UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolActions* GetDefaultObj();

	void SimplifyByGroups();
	void Retriangulate();
	void RecalcNormals();
	void PushPull();
	void Outset();
	void Offset();
	void Merge();
	void Inset();
	void InsertEdgeLoop();
	void InsertEdge();
	void Flip();
	void Extrude();
	void Duplicate();
	void Disconnect();
	void Delete();
	void Decompose();
	void CutFaces();
	void Bevel();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles
class UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolActions_Triangles* GetDefaultObj();

	void RecalcNormals();
	void PushPull();
	void Poke();
	void Outset();
	void Offset();
	void Inset();
	void Flip();
	void Extrude();
	void Duplicate();
	void Disconnect();
	void Delete();
	void CutFaces();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingTools.EditMeshPolygonsToolUVActions
class UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolUVActions* GetDefaultObj();

	void PlanarProjection();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions
class UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolEdgeActions* GetDefaultObj();

	void Weld();
	void Straighten();
	void FillHole();
	void Bridge();
	void Bevel();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
class UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolEdgeActions_Triangles* GetDefaultObj();

	void Weld();
	void Split();
	void Flip();
	void FillHole();
	void Collapse();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingTools.EditMeshPolygonsToolCancelAction
class UEditMeshPolygonsToolCancelAction : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolCancelAction* GetDefaultObj();

	void Done();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingTools.EditMeshPolygonsToolAcceptCancelAction
class UEditMeshPolygonsToolAcceptCancelAction : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass();
	static class UEditMeshPolygonsToolAcceptCancelAction* GetDefaultObj();

	void Cancel();
	void Apply();
};

// 0x750 (0x860 - 0x110)
// Class MeshModelingTools.EditMeshPolygonsTool
class UEditMeshPolygonsTool : public USingleTargetWithSelectionTool
{
public:
	uint8                                        Pad_91A[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0x130(0x8)(ZeroConstructor)
	class UPolyEditCommonProperties*             CommonProps;                                       // 0x138(0x8)(ZeroConstructor)
	class UEditMeshPolygonsToolActions*          EditActions;                                       // 0x140(0x8)(ZeroConstructor)
	class UEditMeshPolygonsToolActions_Triangles* EditActions_Triangles;                             // 0x148(0x8)(ZeroConstructor)
	class UEditMeshPolygonsToolEdgeActions*      EditEdgeActions;                                   // 0x150(0x8)(ZeroConstructor)
	class UEditMeshPolygonsToolEdgeActions_Triangles* EditEdgeActions_Triangles;                         // 0x158(0x8)(ZeroConstructor)
	class UEditMeshPolygonsToolUVActions*        EditUVActions;                                     // 0x160(0x8)(ZeroConstructor)
	class UEditMeshPolygonsToolCancelAction*     CancelAction;                                      // 0x168(0x8)(ZeroConstructor)
	class UEditMeshPolygonsToolAcceptCancelAction* AcceptCancelAction;                                // 0x170(0x8)(ZeroConstructor)
	class UPolyEditTopologyProperties*           TopologyProperties;                                // 0x178(0x8)(ZeroConstructor)
	class UPolyEditExtrudeActivity*              ExtrudeActivity;                                   // 0x180(0x8)(ZeroConstructor)
	class UPolyEditInsetOutsetActivity*          InsetOutsetActivity;                               // 0x188(0x8)(ZeroConstructor)
	class UPolyEditCutFacesActivity*             CutFacesActivity;                                  // 0x190(0x8)(ZeroConstructor)
	class UPolyEditPlanarProjectionUVActivity*   PlanarProjectionUVActivity;                        // 0x198(0x8)(ZeroConstructor)
	class UPolyEditInsertEdgeActivity*           InsertEdgeActivity;                                // 0x1A0(0x8)(ZeroConstructor)
	class UPolyEditInsertEdgeLoopActivity*       InsertEdgeLoopActivity;                            // 0x1A8(0x8)(ZeroConstructor)
	class UPolyEditBevelEdgeActivity*            BevelEdgeActivity;                                 // 0x1B0(0x8)(ZeroConstructor)
	uint8                                        Pad_926[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x1F0(0x8)(ZeroConstructor)
	class UPolygonSelectionMechanic*             SelectionMechanic;                                 // 0x1F8(0x8)(ZeroConstructor)
	class UDragAlignmentMechanic*                DragAlignmentMechanic;                             // 0x200(0x8)(ZeroConstructor)
	class UCombinedTransformGizmo*               TransformGizmo;                                    // 0x208(0x8)(ZeroConstructor)
	class UTransformProxy*                       TransformProxy;                                    // 0x210(0x8)(ZeroConstructor)
	uint8                                        Pad_929[0x648];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEditMeshPolygonsTool* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingTools.NewMeshMaterialProperties
class UNewMeshMaterialProperties : public UInteractiveToolPropertySet
{
public:
	TWeakObjectPtr<class UMaterialInterface>     Material;                                          // 0xA8(0x8)(ZeroConstructor)
	float                                        UVScale;                                           // 0xB0(0x4)(None)
	bool                                         bWorldSpaceUVScale;                                // 0xB4(0x1)(None)
	bool                                         bShowWireframe;                                    // 0xB5(0x1)(None)
	bool                                         bShowExtendedOptions;                              // 0xB6(0x1)(None)
	uint8                                        Pad_931[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNewMeshMaterialProperties* GetDefaultObj();

};

// 0x38 (0xE0 - 0xA8)
// Class MeshModelingTools.ExistingMeshMaterialProperties
class UExistingMeshMaterialProperties : public UInteractiveToolPropertySet
{
public:
	enum class ESetMeshMaterialMode              MaterialMode;                                      // 0xA8(0x1)(None)
	uint8                                        Pad_93E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CheckerDensity;                                    // 0xAC(0x4)(None)
	class UMaterialInterface*                    OverrideMaterial;                                  // 0xB0(0x8)(ZeroConstructor)
	class FString                                UVChannel;                                         // 0xB8(0x10)(None)
	TArray<class FString>                        UVChannelNamesList;                                // 0xC8(0x10)(None)
	class UMaterialInstanceDynamic*              CheckerMaterial;                                   // 0xD8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UExistingMeshMaterialProperties* GetDefaultObj();

	void GetUVChannelNamesFunc(const TArray<class FString>& ReturnValue);
};

// 0x50 (0xF8 - 0xA8)
// Class MeshModelingTools.MeshEditingViewProperties
class UMeshEditingViewProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bShowWireframe;                                    // 0xA8(0x1)(None)
	uint8                                        Pad_945[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMeshEditingMaterialModes         MaterialMode;                                      // 0xAC(0x4)(None)
	bool                                         bFlatShading;                                      // 0xB0(0x1)(None)
	uint8                                        Pad_946[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0xB4(0x10)(None)
	uint8                                        Pad_947[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Image;                                             // 0xC8(0x8)(ZeroConstructor)
	double                                       Opacity;                                           // 0xD0(0x8)(None)
	struct FLinearColor                          TransparentMaterialColor;                          // 0xD8(0x10)(None)
	bool                                         bTwoSided;                                         // 0xE8(0x1)(None)
	uint8                                        Pad_94B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UMaterialInterface>     CustomMaterial;                                    // 0xEC(0x8)(ZeroConstructor)
	uint8                                        Pad_94C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshEditingViewProperties* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingTools.MeshUVChannelProperties
class UMeshUVChannelProperties : public UInteractiveToolPropertySet
{
public:
	class FString                                UVChannel;                                         // 0xA8(0x10)(None)
	TArray<class FString>                        UVChannelNamesList;                                // 0xB8(0x10)(None)

	static class UClass* StaticClass();
	static class UMeshUVChannelProperties* GetDefaultObj();

	void GetUVChannelNamesFunc(const TArray<class FString>& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.RecomputeUVsToolBuilder
class URecomputeUVsToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class URecomputeUVsToolBuilder* GetDefaultObj();

};

// 0x60 (0x118 - 0xB8)
// Class MeshModelingTools.RecomputeUVsTool
class URecomputeUVsTool : public USingleSelectionMeshEditingTool
{
public:
	class UMeshUVChannelProperties*              UVChannelProperties;                               // 0xB8(0x8)(ZeroConstructor)
	class URecomputeUVsToolProperties*           Settings;                                          // 0xC0(0x8)(ZeroConstructor)
	class UPolygroupLayersProperties*            PolygroupLayerProperties;                          // 0xC8(0x8)(ZeroConstructor)
	class UExistingMeshMaterialProperties*       MaterialSettings;                                  // 0xD0(0x8)(ZeroConstructor)
	bool                                         bCreateUVLayoutViewOnSetup;                        // 0xD8(0x1)(None)
	uint8                                        Pad_95C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUVLayoutPreview*                      UVLayoutView;                                      // 0xE0(0x8)(ZeroConstructor)
	class URecomputeUVsOpFactory*                RecomputeUVsOpFactory;                             // 0xE8(0x8)(ZeroConstructor)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xF0(0x8)(ZeroConstructor)
	uint8                                        Pad_95E[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URecomputeUVsTool* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingTools.PolyEditBevelEdgeProperties
class UPolyEditBevelEdgeProperties : public UInteractiveToolPropertySet
{
public:
	double                                       BevelDistance;                                     // 0xA8(0x8)(None)

	static class UClass* StaticClass();
	static class UPolyEditBevelEdgeProperties* GetDefaultObj();

};

// 0x110 (0x140 - 0x30)
// Class MeshModelingTools.PolyEditBevelEdgeActivity
class UPolyEditBevelEdgeActivity : public UInteractiveToolActivity
{
public:
	uint8                                        Pad_963[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolyEditBevelEdgeProperties*          BevelProperties;                                   // 0x38(0x8)(ZeroConstructor)
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x40(0x8)(None)
	uint8                                        Pad_964[0xF8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditBevelEdgeActivity* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingTools.PolyEditCutProperties
class UPolyEditCutProperties : public UInteractiveToolPropertySet
{
public:
	enum class EPolyEditCutPlaneOrientation      Orientation;                                       // 0xA8(0x4)(None)
	bool                                         bSnapToVertices;                                   // 0xAC(0x1)(None)
	uint8                                        Pad_967[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditCutProperties* GetDefaultObj();

};

// 0x90 (0xC0 - 0x30)
// Class MeshModelingTools.PolyEditCutFacesActivity
class UPolyEditCutFacesActivity : public UInteractiveToolActivity
{
public:
	uint8                                        Pad_969[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolyEditCutProperties*                CutProperties;                                     // 0x40(0x8)(ZeroConstructor)
	class UPolyEditPreviewMesh*                  EditPreview;                                       // 0x48(0x8)(ZeroConstructor)
	class UCollectSurfacePathMechanic*           SurfacePathMechanic;                               // 0x50(0x8)(ZeroConstructor)
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x58(0x8)(None)
	uint8                                        Pad_96A[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditCutFacesActivity* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingTools.PolyEditExtrudeProperties
class UPolyEditExtrudeProperties : public UInteractiveToolPropertySet
{
public:
	enum class EPolyEditExtrudeDistanceMode      DistanceMode;                                      // 0xA8(0x4)(None)
	uint8                                        Pad_971[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Distance;                                          // 0xB0(0x8)(None)
	enum class EPolyEditExtrudeDirection         Direction;                                         // 0xB8(0x4)(None)
	enum class EPolyEditExtrudeDirection         MeasureDirection;                                  // 0xBC(0x4)(None)
	bool                                         bShellsToSolids;                                   // 0xC0(0x1)(None)
	uint8                                        Pad_972[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EPolyEditExtrudeModeOptions       DirectionMode;                                     // 0xC4(0x4)(None)
	double                                       MaxDistanceScaleFactor;                            // 0xC8(0x8)(None)
	bool                                         bUseColinearityForSettingBorderGroups;             // 0xD0(0x1)(None)
	uint8                                        Pad_973[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditExtrudeProperties* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingTools.PolyEditOffsetProperties
class UPolyEditOffsetProperties : public UInteractiveToolPropertySet
{
public:
	enum class EPolyEditExtrudeDistanceMode      DistanceMode;                                      // 0xA8(0x4)(None)
	uint8                                        Pad_976[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Distance;                                          // 0xB0(0x8)(None)
	enum class EPolyEditOffsetModeOptions        DirectionMode;                                     // 0xB8(0x4)(None)
	uint8                                        Pad_978[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MaxDistanceScaleFactor;                            // 0xC0(0x8)(None)
	bool                                         bShellsToSolids;                                   // 0xC8(0x1)(None)
	uint8                                        Pad_97B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EPolyEditExtrudeDirection         MeasureDirection;                                  // 0xCC(0x4)(None)
	bool                                         bUseColinearityForSettingBorderGroups;             // 0xD0(0x1)(None)
	uint8                                        Pad_97D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditOffsetProperties* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingTools.PolyEditPushPullProperties
class UPolyEditPushPullProperties : public UInteractiveToolPropertySet
{
public:
	enum class EPolyEditExtrudeDistanceMode      DistanceMode;                                      // 0xA8(0x4)(None)
	uint8                                        Pad_980[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Distance;                                          // 0xB0(0x8)(None)
	enum class EPolyEditPushPullModeOptions      DirectionMode;                                     // 0xB8(0x4)(None)
	uint8                                        Pad_982[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MaxDistanceScaleFactor;                            // 0xC0(0x8)(None)
	bool                                         bShellsToSolids;                                   // 0xC8(0x1)(None)
	uint8                                        Pad_983[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EPolyEditExtrudeDirection         MeasureDirection;                                  // 0xCC(0x4)(None)
	bool                                         bUseColinearityForSettingBorderGroups;             // 0xD0(0x1)(None)
	uint8                                        Pad_985[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditPushPullProperties* GetDefaultObj();

};

// 0x1A0 (0x1D0 - 0x30)
// Class MeshModelingTools.PolyEditExtrudeActivity
class UPolyEditExtrudeActivity : public UInteractiveToolActivity
{
public:
	uint8                                        Pad_98A[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolyEditExtrudeProperties*            ExtrudeProperties;                                 // 0x50(0x8)(ZeroConstructor)
	class UPolyEditOffsetProperties*             OffsetProperties;                                  // 0x58(0x8)(ZeroConstructor)
	class UPolyEditPushPullProperties*           PushPullProperties;                                // 0x60(0x8)(ZeroConstructor)
	class UPlaneDistanceFromHitMechanic*         ExtrudeHeightMechanic;                             // 0x68(0x8)(ZeroConstructor)
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x70(0x8)(None)
	uint8                                        Pad_98D[0x158];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditExtrudeActivity* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingTools.GroupEdgeInsertionProperties
class UGroupEdgeInsertionProperties : public UInteractiveToolPropertySet
{
public:
	enum class EGroupEdgeInsertionMode           InsertionMode;                                     // 0xA8(0x4)(None)
	bool                                         bContinuousInsertion;                              // 0xAC(0x1)(None)
	uint8                                        Pad_992[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       VertexTolerance;                                   // 0xB0(0x8)(None)

	static class UClass* StaticClass();
	static class UGroupEdgeInsertionProperties* GetDefaultObj();

};

// 0x440 (0x470 - 0x30)
// Class MeshModelingTools.PolyEditInsertEdgeActivity
class UPolyEditInsertEdgeActivity : public UInteractiveToolActivity
{
public:
	uint8                                        Pad_996[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGroupEdgeInsertionProperties*         Settings;                                          // 0x48(0x8)(ZeroConstructor)
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x50(0x8)(None)
	uint8                                        Pad_997[0x418];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditInsertEdgeActivity* GetDefaultObj();

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingTools.EdgeLoopInsertionProperties
class UEdgeLoopInsertionProperties : public UInteractiveToolPropertySet
{
public:
	enum class EEdgeLoopPositioningMode          PositionMode;                                      // 0xA8(0x4)(None)
	enum class EEdgeLoopInsertionMode            InsertionMode;                                     // 0xAC(0x4)(None)
	int32                                        NumLoops;                                          // 0xB0(0x4)(None)
	uint8                                        Pad_99B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ProportionOffset;                                  // 0xB8(0x8)(None)
	double                                       DistanceOffset;                                    // 0xC0(0x8)(None)
	bool                                         bInteractive;                                      // 0xC8(0x1)(None)
	bool                                         bFlipOffsetDirection;                              // 0xC9(0x1)(None)
	bool                                         bHighlightProblemGroups;                           // 0xCA(0x1)(None)
	uint8                                        Pad_99E[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       VertexTolerance;                                   // 0xD0(0x8)(None)

	static class UClass* StaticClass();
	static class UEdgeLoopInsertionProperties* GetDefaultObj();

};

// 0x3D0 (0x400 - 0x30)
// Class MeshModelingTools.PolyEditInsertEdgeLoopActivity
class UPolyEditInsertEdgeLoopActivity : public UInteractiveToolActivity
{
public:
	uint8                                        Pad_9A2[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEdgeLoopInsertionProperties*          Settings;                                          // 0x48(0x8)(ZeroConstructor)
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x50(0x8)(None)
	uint8                                        Pad_9A3[0x3A8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditInsertEdgeLoopActivity* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingTools.PolyEditInsetOutsetProperties
class UPolyEditInsetOutsetProperties : public UInteractiveToolPropertySet
{
public:
	float                                        Softness;                                          // 0xA8(0x4)(None)
	bool                                         bBoundaryOnly;                                     // 0xAC(0x1)(None)
	uint8                                        Pad_9AD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AreaScale;                                         // 0xB0(0x4)(None)
	bool                                         bReproject;                                        // 0xB4(0x1)(None)
	bool                                         bOutset;                                           // 0xB5(0x1)(None)
	uint8                                        Pad_9AE[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditInsetOutsetProperties* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class MeshModelingTools.PolyEditInsetOutsetActivity
class UPolyEditInsetOutsetActivity : public UInteractiveToolActivity
{
public:
	uint8                                        Pad_9B6[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolyEditInsetOutsetProperties*        Settings;                                          // 0x40(0x8)(ZeroConstructor)
	uint8                                        Pad_9B7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolyEditPreviewMesh*                  EditPreview;                                       // 0x50(0x8)(ZeroConstructor)
	class USpatialCurveDistanceMechanic*         CurveDistMechanic;                                 // 0x58(0x8)(ZeroConstructor)
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x60(0x8)(None)
	uint8                                        Pad_9B8[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditInsetOutsetActivity* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingTools.PolyEditSetUVProperties
class UPolyEditSetUVProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bShowMaterial;                                     // 0xA8(0x1)(None)
	uint8                                        Pad_9BB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditSetUVProperties* GetDefaultObj();

};

// 0xC0 (0xF0 - 0x30)
// Class MeshModelingTools.PolyEditPlanarProjectionUVActivity
class UPolyEditPlanarProjectionUVActivity : public UInteractiveToolActivity
{
public:
	uint8                                        Pad_9BF[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolyEditSetUVProperties*              SetUVProperties;                                   // 0x40(0x8)(ZeroConstructor)
	class UPolyEditPreviewMesh*                  EditPreview;                                       // 0x48(0x8)(ZeroConstructor)
	class UCollectSurfacePathMechanic*           SurfacePathMechanic;                               // 0x50(0x8)(ZeroConstructor)
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x58(0x8)(None)
	uint8                                        Pad_9C1[0x90];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPolyEditPlanarProjectionUVActivity* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.UVLayoutToolBuilder
class UUVLayoutToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UUVLayoutToolBuilder* GetDefaultObj();

};

// 0xA8 (0x160 - 0xB8)
// Class MeshModelingTools.UVLayoutTool
class UUVLayoutTool : public UMultiSelectionMeshEditingTool
{
public:
	class UMeshUVChannelProperties*              UVChannelProperties;                               // 0xB8(0x8)(ZeroConstructor)
	class UUVLayoutProperties*                   BasicProperties;                                   // 0xC0(0x8)(ZeroConstructor)
	class UExistingMeshMaterialProperties*       MaterialSettings;                                  // 0xC8(0x8)(ZeroConstructor)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                          // 0xD0(0x10)(ZeroConstructor)
	TArray<class UUVLayoutOperatorFactory*>      Factories;                                         // 0xE0(0x10)(ZeroConstructor)
	uint8                                        Pad_9C4[0x60];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUVLayoutPreview*                      UVLayoutView;                                      // 0x150(0x8)(ZeroConstructor)
	uint8                                        Pad_9C5[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUVLayoutTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.UVProjectionToolBuilder
class UUVProjectionToolBuilder : public USingleTargetWithSelectionToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UUVProjectionToolBuilder* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingTools.UVProjectionToolEditActions
class UUVProjectionToolEditActions : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_9C9[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUVProjectionToolEditActions* GetDefaultObj();

	void Reset();
	void AutoFitAlign();
	void AutoFit();
};

// 0xE8 (0x190 - 0xA8)
// Class MeshModelingTools.UVProjectionToolProperties
class UUVProjectionToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EUVProjectionMethod               ProjectionType;                                    // 0xA8(0x1)(None)
	uint8                                        Pad_9CC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Dimensions;                                        // 0xB0(0x18)(None)
	bool                                         bProportionalDimensions;                           // 0xC8(0x1)(None)
	uint8                                        Pad_9CE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EUVProjectionToolInitializationMode Initialization;                                    // 0xCC(0x4)(None)
	float                                        CylinderSplitAngle;                                // 0xD0(0x4)(None)
	float                                        ExpMapNormalBlending;                              // 0xD4(0x4)(None)
	int32                                        ExpMapSmoothingSteps;                              // 0xD8(0x4)(None)
	float                                        ExpMapSmoothingAlpha;                              // 0xDC(0x4)(None)
	float                                        Rotation;                                          // 0xE0(0x4)(None)
	uint8                                        Pad_9D1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Scale;                                             // 0xE8(0x10)(None)
	struct FVector2D                             Translation;                                       // 0xF8(0x10)(None)
	struct FVector                               SavedDimensions;                                   // 0x108(0x18)(None)
	bool                                         bSavedProportionalDimensions;                      // 0x120(0x1)(None)
	uint8                                        Pad_9D2[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SavedTransform;                                    // 0x130(0x60)(None)

	static class UClass* StaticClass();
	static class UUVProjectionToolProperties* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MeshModelingTools.UVProjectionOperatorFactory
class UUVProjectionOperatorFactory : public UObject
{
public:
	uint8                                        Pad_9DC[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUVProjectionTool*                     Tool;                                              // 0x30(0x8)(None)

	static class UClass* StaticClass();
	static class UUVProjectionOperatorFactory* GetDefaultObj();

};

// 0x3B0 (0x4C0 - 0x110)
// Class MeshModelingTools.UVProjectionTool
class UUVProjectionTool : public USingleTargetWithSelectionTool
{
public:
	class UMeshUVChannelProperties*              UVChannelProperties;                               // 0x110(0x8)(ZeroConstructor)
	class UUVProjectionToolProperties*           BasicProperties;                                   // 0x118(0x8)(ZeroConstructor)
	class UUVProjectionToolEditActions*          EditActions;                                       // 0x120(0x8)(ZeroConstructor)
	class UExistingMeshMaterialProperties*       MaterialSettings;                                  // 0x128(0x8)(ZeroConstructor)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0x130(0x8)(ZeroConstructor)
	class UMaterialInstanceDynamic*              CheckerMaterial;                                   // 0x138(0x8)(ZeroConstructor)
	class UCombinedTransformGizmo*               TransformGizmo;                                    // 0x140(0x8)(ZeroConstructor)
	class UTransformProxy*                       TransformProxy;                                    // 0x148(0x8)(ZeroConstructor)
	class UUVProjectionOperatorFactory*          OperatorFactory;                                   // 0x150(0x8)(ZeroConstructor)
	class UPreviewGeometry*                      EdgeRenderer;                                      // 0x158(0x8)(ZeroConstructor)
	uint8                                        Pad_9E5[0x348];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class USingleClickInputBehavior*             ClickToSetPlaneBehavior;                           // 0x4A8(0x8)(ZeroConstructor)
	uint8                                        Pad_9E6[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUVProjectionTool* GetDefaultObj();

};

}


