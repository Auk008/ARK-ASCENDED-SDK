#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolBuilder
class UInteractiveToolBuilder : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInteractiveToolBuilder* GetDefaultObj();

};

// 0x80 (0xA8 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolPropertySet
class UInteractiveToolPropertySet : public UObject
{
public:
	uint8                                        Pad_7E6[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class UInteractiveToolPropertySet*> CachedPropertiesMap;                               // 0x38(0x50)(None)
	bool                                         bIsPropertySetEnabled;                             // 0x88(0x1)(None)
	uint8                                        Pad_7E7[0x1F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInteractiveToolPropertySet* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class InteractiveToolsFramework.InteractiveTool
class UInteractiveTool : public UObject
{
public:
	uint8                                        Pad_7E8[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputBehaviorSet*                     InputBehaviors;                                    // 0x60(0x8)(ZeroConstructor)
	TArray<class UObject*>                       ToolPropertyObjects;                               // 0x68(0x10)(None)
	uint8                                        Pad_7E9[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInteractiveTool* GetDefaultObj();

};

// 0x8 (0xA0 - 0x98)
// Class InteractiveToolsFramework.SingleClickTool
class USingleClickTool : public UInteractiveTool
{
public:
	uint8                                        Pad_7EB[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USingleClickTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolWithToolTargetsBuilder
class UInteractiveToolWithToolTargetsBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UInteractiveToolWithToolTargetsBuilder* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class InteractiveToolsFramework.MultiSelectionTool
class UMultiSelectionTool : public UInteractiveTool
{
public:
	uint8                                        Pad_7F0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UToolTarget*>                   Targets;                                           // 0xA0(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMultiSelectionTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveCommand
class UInteractiveCommand : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInteractiveCommand* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class InteractiveToolsFramework.SingleSelectionTool
class USingleSelectionTool : public UInteractiveTool
{
public:
	uint8                                        Pad_7F5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UToolTarget*                           Target;                                            // 0xA0(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class USingleSelectionTool* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.InteractionMechanic
class UInteractionMechanic : public UObject
{
public:
	uint8                                        Pad_7F7[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInteractionMechanic* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.InteractiveCommandArguments
class UInteractiveCommandArguments : public UObject
{
public:
	uint8                                        Pad_7F8[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInteractiveCommandArguments* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveCommandResult
class UInteractiveCommandResult : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInteractiveCommandResult* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
class UMeshSurfacePointToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
public:
	uint8                                        Pad_7FC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshSurfacePointToolBuilder* GetDefaultObj();

};

// 0x8 (0x4C0 - 0x4B8)
// Class InteractiveToolsFramework.InternalToolFrameworkActor
class AInternalToolFrameworkActor : public AActor
{
public:
	bool                                         bIsSelectableInEditor;                             // 0x4B8(0x1)(None)
	uint8                                        Pad_7FE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AInternalToolFrameworkActor* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.SceneSnappingManager
class USceneSnappingManager : public UObject
{
public:

	static class UClass* StaticClass();
	static class USceneSnappingManager* GetDefaultObj();

};

// 0x58 (0x100 - 0xA8)
// Class InteractiveToolsFramework.MeshSurfacePointTool
class UMeshSurfacePointTool : public USingleSelectionTool
{
public:
	uint8                                        Pad_804[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UWorld>                 TargetWorld;                                       // 0xF8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMeshSurfacePointTool* GetDefaultObj();

};

// 0x188 (0x288 - 0x100)
// Class InteractiveToolsFramework.BaseBrushTool
class UBaseBrushTool : public UMeshSurfacePointTool
{
public:
	class UBrushBaseProperties*                  BrushProperties;                                   // 0x100(0x8)(ZeroConstructor)
	bool                                         bInBrushStroke;                                    // 0x108(0x1)(None)
	uint8                                        Pad_807[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WorldToLocalScale;                                 // 0x10C(0x4)(None)
	struct FBrushStampData                       LastBrushStamp;                                    // 0x110(0x130)(None)
	uint8                                        Pad_808[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UBrushBaseProperties>    PropertyClass;                                     // 0x250(0x30)(ZeroConstructor)
	class UBrushStampIndicator*                  BrushStampIndicator;                               // 0x280(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBaseBrushTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.AssetBackedTarget
class IAssetBackedTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAssetBackedTarget* GetDefaultObj();

};

// 0x30 (0x6B0 - 0x680)
// Class InteractiveToolsFramework.GizmoBaseComponent
class UGizmoBaseComponent : public UPrimitiveComponent
{
public:
	struct FLinearColor                          Color;                                             // 0x680(0x10)(None)
	float                                        HoverSizeMultiplier;                               // 0x690(0x4)(None)
	float                                        PixelHitDistanceThreshold;                         // 0x694(0x4)(None)
	uint8                                        Pad_80F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGizmoViewContext*                     GizmoViewContext;                                  // 0x6A0(0x8)(ZeroConstructor)
	uint8                                        Pad_810[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoBaseComponent* GetDefaultObj();

	void UpdateWorldLocalState(bool bWorldIn);
	void UpdateHoverState(bool bHoveringIn);
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveGizmoBuilder
class UInteractiveGizmoBuilder : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInteractiveGizmoBuilder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ToolContextTransactionProvider
class IToolContextTransactionProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IToolContextTransactionProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ToolFrameworkComponent
class IToolFrameworkComponent : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IToolFrameworkComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolCameraFocusAPI
class IInteractiveToolCameraFocusAPI : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInteractiveToolCameraFocusAPI* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolNestedAcceptCancelAPI
class IInteractiveToolNestedAcceptCancelAPI : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInteractiveToolNestedAcceptCancelAPI* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolExclusiveToolAPI
class IInteractiveToolExclusiveToolAPI : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInteractiveToolExclusiveToolAPI* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.MaterialProvider
class IMaterialProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMaterialProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.MeshDescriptionCommitter
class IMeshDescriptionCommitter : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMeshDescriptionCommitter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.MeshDescriptionProvider
class IMeshDescriptionProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMeshDescriptionProvider* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
class UGizmoBaseVec2ParameterSource : public UObject
{
public:
	uint8                                        Pad_826[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoBaseVec2ParameterSource* GetDefaultObj();

};

// 0x30 (0x78 - 0x48)
// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	struct FVector2D                             Value;                                             // 0x48(0x10)(None)
	struct FGizmoVec2ParameterChange             LastChange;                                        // 0x58(0x20)(None)

	static class UClass* StaticClass();
	static class UGizmoLocalVec2ParameterSource* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
class UGizmoBaseFloatParameterSource : public UObject
{
public:
	uint8                                        Pad_829[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoBaseFloatParameterSource* GetDefaultObj();

};

// 0x148 (0x190 - 0x48)
// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	uint8                                        Pad_82C[0x88];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0xD0(0x10)(ZeroConstructor)
	TScriptInterface<class IGizmoTransformSource> TransformSource;                                   // 0xE0(0x10)(None)
	float                                        Parameter;                                         // 0xF0(0x4)(None)
	struct FGizmoFloatParameterChange            LastChange;                                        // 0xF4(0x8)(None)
	uint8                                        Pad_82D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CurTranslationAxis;                                // 0x100(0x18)(None)
	struct FVector                               CurTranslationOrigin;                              // 0x118(0x18)(None)
	struct FTransform                            InitialTransform;                                  // 0x130(0x60)(None)

	static class UClass* StaticClass();
	static class UGizmoAxisTranslationParameterSource* GetDefaultObj();

};

// 0x1D8 (0x220 - 0x48)
// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	uint8                                        Pad_830[0xC8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x110(0x10)(ZeroConstructor)
	TScriptInterface<class IGizmoTransformSource> TransformSource;                                   // 0x120(0x10)(None)
	struct FVector2D                             Parameter;                                         // 0x130(0x10)(None)
	struct FGizmoVec2ParameterChange             LastChange;                                        // 0x140(0x20)(None)
	struct FVector                               CurTranslationOrigin;                              // 0x160(0x18)(None)
	struct FVector                               CurTranslationNormal;                              // 0x178(0x18)(None)
	struct FVector                               CurTranslationAxisX;                               // 0x190(0x18)(None)
	struct FVector                               CurTranslationAxisY;                               // 0x1A8(0x18)(None)
	struct FTransform                            InitialTransform;                                  // 0x1C0(0x60)(None)

	static class UClass* StaticClass();
	static class UGizmoPlaneTranslationParameterSource* GetDefaultObj();

};

// 0x148 (0x190 - 0x48)
// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	uint8                                        Pad_832[0x88];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0xD0(0x10)(ZeroConstructor)
	TScriptInterface<class IGizmoTransformSource> TransformSource;                                   // 0xE0(0x10)(None)
	float                                        Angle;                                             // 0xF0(0x4)(None)
	struct FGizmoFloatParameterChange            LastChange;                                        // 0xF4(0x8)(None)
	uint8                                        Pad_833[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CurRotationAxis;                                   // 0x100(0x18)(None)
	struct FVector                               CurRotationOrigin;                                 // 0x118(0x18)(None)
	struct FTransform                            InitialTransform;                                  // 0x130(0x60)(None)

	static class UClass* StaticClass();
	static class UGizmoAxisRotationParameterSource* GetDefaultObj();

};

// 0x118 (0x160 - 0x48)
// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x48(0x10)(ZeroConstructor)
	TScriptInterface<class IGizmoTransformSource> TransformSource;                                   // 0x58(0x10)(None)
	float                                        ScaleMultiplier;                                   // 0x68(0x4)(None)
	uint8                                        Pad_835[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Parameter;                                         // 0x70(0x10)(None)
	struct FGizmoVec2ParameterChange             LastChange;                                        // 0x80(0x20)(None)
	struct FVector                               CurScaleOrigin;                                    // 0xA0(0x18)(None)
	struct FVector                               CurScaleNormal;                                    // 0xB8(0x18)(None)
	struct FVector                               CurScaleAxisX;                                     // 0xD0(0x18)(None)
	struct FVector                               CurScaleAxisY;                                     // 0xE8(0x18)(None)
	struct FTransform                            InitialTransform;                                  // 0x100(0x60)(None)

	static class UClass* StaticClass();
	static class UGizmoUniformScaleParameterSource* GetDefaultObj();

};

// 0xC8 (0x110 - 0x48)
// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x48(0x10)(ZeroConstructor)
	TScriptInterface<class IGizmoTransformSource> TransformSource;                                   // 0x58(0x10)(None)
	float                                        ScaleMultiplier;                                   // 0x68(0x4)(None)
	bool                                         bClampToZero;                                      // 0x6C(0x1)(None)
	uint8                                        Pad_836[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Parameter;                                         // 0x70(0x4)(None)
	struct FGizmoFloatParameterChange            LastChange;                                        // 0x74(0x8)(None)
	uint8                                        Pad_837[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CurScaleAxis;                                      // 0x80(0x18)(None)
	struct FVector                               CurScaleOrigin;                                    // 0x98(0x18)(None)
	struct FTransform                            InitialTransform;                                  // 0xB0(0x60)(None)

	static class UClass* StaticClass();
	static class UGizmoAxisScaleParameterSource* GetDefaultObj();

};

// 0x168 (0x1B0 - 0x48)
// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	uint8                                        Pad_838[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x90(0x10)(ZeroConstructor)
	TScriptInterface<class IGizmoTransformSource> TransformSource;                                   // 0xA0(0x10)(None)
	float                                        ScaleMultiplier;                                   // 0xB0(0x4)(None)
	bool                                         bUseEqualScaling;                                  // 0xB4(0x1)(None)
	bool                                         bClampToZero;                                      // 0xB5(0x1)(None)
	uint8                                        Pad_839[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Parameter;                                         // 0xB8(0x10)(None)
	struct FGizmoVec2ParameterChange             LastChange;                                        // 0xC8(0x20)(None)
	struct FVector                               CurScaleOrigin;                                    // 0xE8(0x18)(None)
	struct FVector                               CurScaleNormal;                                    // 0x100(0x18)(None)
	struct FVector                               CurScaleAxisX;                                     // 0x118(0x18)(None)
	struct FVector                               CurScaleAxisY;                                     // 0x130(0x18)(None)
	uint8                                        Pad_83A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialTransform;                                  // 0x150(0x60)(None)

	static class UClass* StaticClass();
	static class UGizmoPlaneScaleParameterSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.PhysicsDataSource
class IPhysicsDataSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IPhysicsDataSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.PrimitiveComponentBackedTarget
class IPrimitiveComponentBackedTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IPrimitiveComponentBackedTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.SkeletalMeshBackedTarget
class ISkeletalMeshBackedTarget : public IAssetBackedTarget
{
public:

	static class UClass* StaticClass();
	static class ISkeletalMeshBackedTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.StaticMeshBackedTarget
class IStaticMeshBackedTarget : public IAssetBackedTarget
{
public:

	static class UClass* StaticClass();
	static class IStaticMeshBackedTarget* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.InputBehavior
class UInputBehavior : public UObject
{
public:
	uint8                                        Pad_83E[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputBehavior* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class InteractiveToolsFramework.AnyButtonInputBehavior
class UAnyButtonInputBehavior : public UInputBehavior
{
public:
	uint8                                        Pad_83F[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnyButtonInputBehavior* GetDefaultObj();

};

// 0xC0 (0x140 - 0x80)
// Class InteractiveToolsFramework.ClickDragInputBehavior
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_841[0xA0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUpdateModifiersDuringDrag;                        // 0x120(0x1)(None)
	uint8                                        Pad_842[0x1F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UClickDragInputBehavior* GetDefaultObj();

};

// 0x140 (0x280 - 0x140)
// Class InteractiveToolsFramework.LocalClickDragInputBehavior
class ULocalClickDragInputBehavior : public UClickDragInputBehavior
{
public:
	uint8                                        Pad_849[0x140];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULocalClickDragInputBehavior* GetDefaultObj();

};

// 0x68 (0x98 - 0x30)
// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
class UKeyAsModifierInputBehavior : public UInputBehavior
{
public:
	uint8                                        Pad_84C[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UKeyAsModifierInputBehavior* GetDefaultObj();

};

// 0x68 (0x98 - 0x30)
// Class InteractiveToolsFramework.MouseHoverBehavior
class UMouseHoverBehavior : public UInputBehavior
{
public:
	uint8                                        Pad_84D[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMouseHoverBehavior* GetDefaultObj();

};

// 0x148 (0x1E0 - 0x98)
// Class InteractiveToolsFramework.LocalMouseHoverBehavior
class ULocalMouseHoverBehavior : public UMouseHoverBehavior
{
public:
	uint8                                        Pad_84F[0x148];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULocalMouseHoverBehavior* GetDefaultObj();

};

// 0xB0 (0x130 - 0x80)
// Class InteractiveToolsFramework.MouseWheelInputBehavior
class UMouseWheelInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_852[0xB0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMouseWheelInputBehavior* GetDefaultObj();

};

// 0xB0 (0x130 - 0x80)
// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_857[0xB0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMultiClickSequenceInputBehavior* GetDefaultObj();

};

// 0xB0 (0x130 - 0x80)
// Class InteractiveToolsFramework.SingleClickInputBehavior
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_85A[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         HitTestOnRelease;                                  // 0xC0(0x1)(None)
	uint8                                        Pad_85B[0x6F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USingleClickInputBehavior* GetDefaultObj();

};

// 0xD0 (0x200 - 0x130)
// Class InteractiveToolsFramework.LocalSingleClickInputBehavior
class ULocalSingleClickInputBehavior : public USingleClickInputBehavior
{
public:
	uint8                                        Pad_85C[0xD0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULocalSingleClickInputBehavior* GetDefaultObj();

};

// 0x100 (0x180 - 0x80)
// Class InteractiveToolsFramework.SingleClickOrDragInputBehavior
class USingleClickOrDragInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_85E[0xA0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bBeginDragIfClickTargetNotHit;                     // 0x120(0x1)(None)
	uint8                                        Pad_85F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ClickDistanceThreshold;                            // 0x124(0x4)(None)
	uint8                                        Pad_860[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USingleClickOrDragInputBehavior* GetDefaultObj();

};

// 0xE0 (0x110 - 0x30)
// Class InteractiveToolsFramework.SingleKeyCaptureBehavior
class USingleKeyCaptureBehavior : public UInputBehavior
{
public:
	uint8                                        Pad_862[0xE0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USingleKeyCaptureBehavior* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.WidgetBaseBehavior
class IWidgetBaseBehavior : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWidgetBaseBehavior* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class UAxisAngleGizmoBuilder* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class InteractiveToolsFramework.InteractiveGizmo
class UInteractiveGizmo : public UObject
{
public:
	uint8                                        Pad_866[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputBehaviorSet*                     InputBehaviors;                                    // 0x30(0x8)(None)

	static class UClass* StaticClass();
	static class UInteractiveGizmo* GetDefaultObj();

};

// 0x198 (0x1D0 - 0x38)
// Class InteractiveToolsFramework.AxisAngleGizmo
class UAxisAngleGizmo : public UInteractiveGizmo
{
public:
	uint8                                        Pad_867[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x48(0x10)(ZeroConstructor)
	TScriptInterface<class IGizmoFloatParameterSource> AngleSource;                                       // 0x58(0x10)(ZeroConstructor)
	TScriptInterface<class IGizmoClickTarget>    HitTarget;                                         // 0x68(0x10)(ZeroConstructor)
	TScriptInterface<class IGizmoStateTarget>    StateTarget;                                       // 0x78(0x10)(ZeroConstructor)
	class UClickDragInputBehavior*               MouseBehavior;                                     // 0x88(0x8)(ZeroConstructor)
	uint8                                        Pad_868[0x80];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bInInteraction;                                    // 0x110(0x1)(None)
	uint8                                        Pad_869[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RotationOrigin;                                    // 0x118(0x18)(None)
	struct FVector                               RotationAxis;                                      // 0x130(0x18)(None)
	struct FVector                               RotationPlaneX;                                    // 0x148(0x18)(None)
	struct FVector                               RotationPlaneY;                                    // 0x160(0x18)(None)
	struct FVector                               InteractionStartPoint;                             // 0x178(0x18)(None)
	struct FVector                               InteractionCurPoint;                               // 0x190(0x18)(None)
	float                                        InteractionStartAngle;                             // 0x1A8(0x4)(None)
	float                                        InteractionCurAngle;                               // 0x1AC(0x4)(None)
	uint8                                        Pad_86A[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAxisAngleGizmo* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class UAxisPositionGizmoBuilder* GetDefaultObj();

};

// 0x188 (0x1C0 - 0x38)
// Class InteractiveToolsFramework.AxisPositionGizmo
class UAxisPositionGizmo : public UInteractiveGizmo
{
public:
	uint8                                        Pad_870[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x48(0x10)(ZeroConstructor)
	TScriptInterface<class IGizmoFloatParameterSource> ParameterSource;                                   // 0x58(0x10)(ZeroConstructor)
	class UGizmoViewContext*                     GizmoViewContext;                                  // 0x68(0x8)(ZeroConstructor)
	TScriptInterface<class IGizmoClickTarget>    HitTarget;                                         // 0x70(0x10)(ZeroConstructor)
	TScriptInterface<class IGizmoStateTarget>    StateTarget;                                       // 0x80(0x10)(ZeroConstructor)
	class UClickDragInputBehavior*               MouseBehavior;                                     // 0x90(0x8)(ZeroConstructor)
	bool                                         bEnableSignedAxis;                                 // 0x98(0x1)(None)
	uint8                                        Pad_871[0x88];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bInInteraction;                                    // 0x121(0x1)(None)
	uint8                                        Pad_872[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InteractionOrigin;                                 // 0x128(0x18)(None)
	struct FVector                               InteractionAxis;                                   // 0x140(0x18)(None)
	struct FVector                               InteractionStartPoint;                             // 0x158(0x18)(None)
	struct FVector                               InteractionCurPoint;                               // 0x170(0x18)(None)
	float                                        InteractionStartParameter;                         // 0x188(0x4)(None)
	float                                        InteractionCurParameter;                           // 0x18C(0x4)(None)
	float                                        ParameterSign;                                     // 0x190(0x4)(None)
	uint8                                        Pad_873[0x2C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAxisPositionGizmo* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class InteractiveToolsFramework.GizmoConstantAxisSource
class UGizmoConstantAxisSource : public UObject
{
public:
	uint8                                        Pad_875[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Origin;                                            // 0x30(0x18)(None)
	struct FVector                               Direction;                                         // 0x48(0x18)(None)

	static class UClass* StaticClass();
	static class UGizmoConstantAxisSource* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
class UGizmoConstantFrameAxisSource : public UObject
{
public:
	uint8                                        Pad_878[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Origin;                                            // 0x30(0x18)(None)
	struct FVector                               Direction;                                         // 0x48(0x18)(None)
	struct FVector                               TangentX;                                          // 0x60(0x18)(None)
	struct FVector                               TangentY;                                          // 0x78(0x18)(None)

	static class UClass* StaticClass();
	static class UGizmoConstantFrameAxisSource* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class InteractiveToolsFramework.GizmoWorldAxisSource
class UGizmoWorldAxisSource : public UObject
{
public:
	uint8                                        Pad_87A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Origin;                                            // 0x30(0x18)(None)
	int32                                        AxisIndex;                                         // 0x48(0x4)(None)
	uint8                                        Pad_87C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoWorldAxisSource* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class InteractiveToolsFramework.GizmoComponentAxisSource
class UGizmoComponentAxisSource : public UObject
{
public:
	uint8                                        Pad_87E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       Component;                                         // 0x30(0x8)(None)
	int32                                        AxisIndex;                                         // 0x38(0x4)(None)
	bool                                         bLocalAxes;                                        // 0x3C(0x1)(None)
	uint8                                        Pad_87F[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoComponentAxisSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.BrushStampIndicatorBuilder
class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class UBrushStampIndicatorBuilder* GetDefaultObj();

};

// 0xA0 (0xD8 - 0x38)
// Class InteractiveToolsFramework.BrushStampIndicator
class UBrushStampIndicator : public UInteractiveGizmo
{
public:
	bool                                         bVisible;                                          // 0x38(0x1)(None)
	uint8                                        Pad_885[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BrushRadius;                                       // 0x3C(0x4)(None)
	float                                        BrushFalloff;                                      // 0x40(0x4)(None)
	uint8                                        Pad_886[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BrushPosition;                                     // 0x48(0x18)(None)
	struct FVector                               BrushNormal;                                       // 0x60(0x18)(None)
	bool                                         bDrawIndicatorLines;                               // 0x78(0x1)(None)
	bool                                         bDrawRadiusCircle;                                 // 0x79(0x1)(None)
	uint8                                        Pad_887[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SampleStepCount;                                   // 0x7C(0x4)(None)
	struct FLinearColor                          LineColor;                                         // 0x80(0x10)(None)
	float                                        LineThickness;                                     // 0x90(0x4)(None)
	bool                                         bDepthTested;                                      // 0x94(0x1)(None)
	bool                                         bDrawSecondaryLines;                               // 0x95(0x1)(None)
	uint8                                        Pad_888[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SecondaryLineThickness;                            // 0x98(0x4)(None)
	struct FLinearColor                          SecondaryLineColor;                                // 0x9C(0x10)(None)
	uint8                                        Pad_889[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   AttachedComponent;                                 // 0xB0(0x8)(ZeroConstructor)
	uint8                                        Pad_88A[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBrushStampIndicator* GetDefaultObj();

};

// 0x0 (0x4C0 - 0x4C0)
// Class InteractiveToolsFramework.GizmoActor
class AGizmoActor : public AInternalToolFrameworkActor
{
public:

	static class UClass* StaticClass();
	static class AGizmoActor* GetDefaultObj();

};

// 0x88 (0x548 - 0x4C0)
// Class InteractiveToolsFramework.CombinedTransformGizmoActor
class ACombinedTransformGizmoActor : public AGizmoActor
{
public:
	class UPrimitiveComponent*                   TranslateX;                                        // 0x4C0(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   TranslateY;                                        // 0x4C8(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   TranslateZ;                                        // 0x4D0(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   TranslateYZ;                                       // 0x4D8(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   TranslateXZ;                                       // 0x4E0(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   TranslateXY;                                       // 0x4E8(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   RotateX;                                           // 0x4F0(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   RotateY;                                           // 0x4F8(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   RotateZ;                                           // 0x500(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   RotationSphere;                                    // 0x508(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   UniformScale;                                      // 0x510(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   AxisScaleX;                                        // 0x518(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   AxisScaleY;                                        // 0x520(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   AxisScaleZ;                                        // 0x528(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   PlaneScaleYZ;                                      // 0x530(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   PlaneScaleXZ;                                      // 0x538(0x8)(ZeroConstructor)
	class UPrimitiveComponent*                   PlaneScaleXY;                                      // 0x540(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class ACombinedTransformGizmoActor* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class InteractiveToolsFramework.CombinedTransformGizmoBuilder
class UCombinedTransformGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
	uint8                                        Pad_88E[0xC8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCombinedTransformGizmoBuilder* GetDefaultObj();

};

// 0x368 (0x3A0 - 0x38)
// Class InteractiveToolsFramework.CombinedTransformGizmo
class UCombinedTransformGizmo : public UInteractiveGizmo
{
public:
	class UTransformProxy*                       ActiveTarget;                                      // 0x38(0x8)(ZeroConstructor)
	bool                                         bSnapToWorldGrid;                                  // 0x40(0x1)(None)
	uint8                                        Pad_890[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bGridSizeIsExplicit;                               // 0x44(0x1)(None)
	uint8                                        Pad_891[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ExplicitGridSize;                                  // 0x48(0x18)(None)
	bool                                         bRotationGridSizeIsExplicit;                       // 0x60(0x1)(None)
	uint8                                        Pad_893[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ExplicitRotationGridSize;                          // 0x68(0x18)(None)
	bool                                         bSnapToWorldRotGrid;                               // 0x80(0x1)(None)
	bool                                         bUseContextCoordinateSystem;                       // 0x81(0x1)(None)
	uint8                                        Pad_895[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EToolContextCoordinateSystem      CurrentCoordinateSystem;                           // 0x84(0x4)(None)
	bool                                         bUseContextGizmoMode;                              // 0x88(0x1)(None)
	enum class EToolContextTransformGizmoMode    ActiveGizmoMode;                                   // 0x89(0x1)(None)
	uint8                                        Pad_896[0x126];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPrimitiveComponent*>           ActiveComponents;                                  // 0x1B0(0x10)(ZeroConstructor)
	TArray<class UInteractiveGizmo*>             ActiveGizmos;                                      // 0x1C0(0x10)(ZeroConstructor)
	uint8                                        Pad_897[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGizmoConstantFrameAxisSource*         CameraAxisSource;                                  // 0x220(0x8)(ZeroConstructor)
	class UGizmoComponentAxisSource*             AxisXSource;                                       // 0x228(0x8)(ZeroConstructor)
	class UGizmoComponentAxisSource*             AxisYSource;                                       // 0x230(0x8)(ZeroConstructor)
	class UGizmoComponentAxisSource*             AxisZSource;                                       // 0x238(0x8)(ZeroConstructor)
	class UGizmoComponentAxisSource*             UnitAxisXSource;                                   // 0x240(0x8)(ZeroConstructor)
	class UGizmoComponentAxisSource*             UnitAxisYSource;                                   // 0x248(0x8)(ZeroConstructor)
	class UGizmoComponentAxisSource*             UnitAxisZSource;                                   // 0x250(0x8)(ZeroConstructor)
	class UGizmoTransformChangeStateTarget*      StateTarget;                                       // 0x258(0x8)(ZeroConstructor)
	uint8                                        Pad_899[0x140];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCombinedTransformGizmo* GetDefaultObj();

};

// 0x30 (0x6E0 - 0x6B0)
// Class InteractiveToolsFramework.GizmoArrowComponent
class UGizmoArrowComponent : public UGizmoBaseComponent
{
public:
	struct FVector                               Direction;                                         // 0x6B0(0x18)(None)
	float                                        Gap;                                               // 0x6C8(0x4)(None)
	float                                        Length;                                            // 0x6CC(0x4)(None)
	float                                        Thickness;                                         // 0x6D0(0x4)(None)
	uint8                                        Pad_8A0[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoArrowComponent* GetDefaultObj();

};

// 0x60 (0x710 - 0x6B0)
// Class InteractiveToolsFramework.GizmoBoxComponent
class UGizmoBoxComponent : public UGizmoBaseComponent
{
public:
	struct FVector                               Origin;                                            // 0x6B0(0x18)(None)
	uint8                                        Pad_8A3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Rotation;                                          // 0x6D0(0x20)(None)
	struct FVector                               Dimensions;                                        // 0x6F0(0x18)(None)
	float                                        LineThickness;                                     // 0x708(0x4)(None)
	bool                                         bRemoveHiddenLines;                                // 0x70C(0x1)(None)
	bool                                         bEnableAxisFlip;                                   // 0x70D(0x1)(None)
	uint8                                        Pad_8A4[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoBoxComponent* GetDefaultObj();

};

// 0x30 (0x6E0 - 0x6B0)
// Class InteractiveToolsFramework.GizmoCircleComponent
class UGizmoCircleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                               Normal;                                            // 0x6B0(0x18)(None)
	float                                        Radius;                                            // 0x6C8(0x4)(None)
	float                                        Thickness;                                         // 0x6CC(0x4)(None)
	int32                                        NumSides;                                          // 0x6D0(0x4)(None)
	bool                                         bViewAligned;                                      // 0x6D4(0x1)(None)
	bool                                         bDrawFullCircle;                                   // 0x6D5(0x1)(None)
	bool                                         bOnlyAllowFrontFacingHits;                         // 0x6D6(0x1)(None)
	uint8                                        Pad_8A5[0x9];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoCircleComponent* GetDefaultObj();

};

// 0xE0 (0x108 - 0x28)
// Class InteractiveToolsFramework.GizmoElementBase
class UGizmoElementBase : public UObject
{
public:
	bool                                         bEnabled;                                          // 0x28(0x1)(None)
	bool                                         bEnabledForPerspectiveProjection;                  // 0x29(0x1)(None)
	bool                                         bEnabledForOrthographicProjection;                 // 0x2A(0x1)(None)
	bool                                         bEnabledForDefaultState;                           // 0x2B(0x1)(None)
	bool                                         bEnabledForHoveringState;                          // 0x2C(0x1)(None)
	bool                                         bEnabledForInteractingState;                       // 0x2D(0x1)(None)
	uint8                                        Pad_8A6[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       PartIdentifier;                                    // 0x30(0x4)(None)
	struct FGizmoElementMeshRenderStateAttributes MeshRenderAttributes;                              // 0x34(0x60)(None)
	enum class EGizmoElementState                ElementState;                                      // 0x94(0x1)(None)
	uint8                                        Pad_8A7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EGizmoElementInteractionState     ElementInteractionState;                           // 0x98(0x4)(None)
	enum class EGizmoElementViewDependentType    ViewDependentType;                                 // 0x9C(0x4)(None)
	struct FVector                               ViewDependentAxis;                                 // 0xA0(0x18)(None)
	float                                        ViewDependentAngleTol;                             // 0xB8(0x4)(None)
	float                                        ViewDependentAxialMaxCosAngleTol;                  // 0xBC(0x4)(None)
	float                                        ViewDependentPlanarMinCosAngleTol;                 // 0xC0(0x4)(None)
	enum class EGizmoElementViewAlignType        ViewAlignType;                                     // 0xC4(0x4)(None)
	struct FVector                               ViewAlignAxis;                                     // 0xC8(0x18)(None)
	struct FVector                               ViewAlignNormal;                                   // 0xE0(0x18)(None)
	float                                        ViewAlignAxialAngleTol;                            // 0xF8(0x4)(None)
	float                                        ViewAlignAxialMaxCosAngleTol;                      // 0xFC(0x4)(None)
	float                                        PixelHitDistanceThreshold;                         // 0x100(0x4)(None)
	uint8                                        Pad_8AB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoElementBase* GetDefaultObj();

};

// 0x50 (0x158 - 0x108)
// Class InteractiveToolsFramework.GizmoElementLineBase
class UGizmoElementLineBase : public UGizmoElementBase
{
public:
	struct FGizmoElementLineRenderStateAttributes LineRenderAttributes;                              // 0x108(0x3C)(None)
	float                                        LineThickness;                                     // 0x144(0x4)(None)
	bool                                         bScreenSpaceLine;                                  // 0x148(0x1)(None)
	uint8                                        Pad_8B2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HoverLineThicknessMultiplier;                      // 0x14C(0x4)(None)
	float                                        InteractLineThicknessMultiplier;                   // 0x150(0x4)(None)
	uint8                                        Pad_8B3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoElementLineBase* GetDefaultObj();

};

// 0x70 (0x1C8 - 0x158)
// Class InteractiveToolsFramework.GizmoElementCircleBase
class UGizmoElementCircleBase : public UGizmoElementLineBase
{
public:
	struct FVector                               Center;                                            // 0x158(0x18)(None)
	struct FVector                               Axis0;                                             // 0x170(0x18)(None)
	struct FVector                               Axis1;                                             // 0x188(0x18)(None)
	double                                       Radius;                                            // 0x1A0(0x8)(None)
	int32                                        NumSegments;                                       // 0x1A8(0x4)(None)
	enum class EGizmoElementPartialType          PartialType;                                       // 0x1AC(0x4)(None)
	double                                       PartialStartAngle;                                 // 0x1B0(0x8)(None)
	double                                       PartialEndAngle;                                   // 0x1B8(0x8)(None)
	double                                       PartialViewDependentMaxCosTol;                     // 0x1C0(0x8)(None)

	static class UClass* StaticClass();
	static class UGizmoElementCircleBase* GetDefaultObj();

};

// 0x8 (0x1D0 - 0x1C8)
// Class InteractiveToolsFramework.GizmoElementArc
class UGizmoElementArc : public UGizmoElementCircleBase
{
public:
	double                                       InnerRadius;                                       // 0x1C8(0x8)(None)

	static class UClass* StaticClass();
	static class UGizmoElementArc* GetDefaultObj();

};

// 0x80 (0x188 - 0x108)
// Class InteractiveToolsFramework.GizmoElementArrow
class UGizmoElementArrow : public UGizmoElementBase
{
public:
	uint8                                        Pad_8BF[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGizmoElementCylinder*                 CylinderElement;                                   // 0x110(0x8)(ZeroConstructor)
	class UGizmoElementCone*                     ConeElement;                                       // 0x118(0x8)(ZeroConstructor)
	class UGizmoElementBox*                      BoxElement;                                        // 0x120(0x8)(ZeroConstructor)
	struct FVector                               Base;                                              // 0x128(0x18)(None)
	struct FVector                               Direction;                                         // 0x140(0x18)(None)
	struct FVector                               SideDirection;                                     // 0x158(0x18)(None)
	float                                        BodyLength;                                        // 0x170(0x4)(None)
	float                                        BodyRadius;                                        // 0x174(0x4)(None)
	float                                        HeadLength;                                        // 0x178(0x4)(None)
	float                                        HeadRadius;                                        // 0x17C(0x4)(None)
	int32                                        NumSides;                                          // 0x180(0x4)(None)
	enum class EGizmoElementArrowHeadType        HeadType;                                          // 0x184(0x4)(None)

	static class UClass* StaticClass();
	static class UGizmoElementArrow* GetDefaultObj();

};

// 0x60 (0x168 - 0x108)
// Class InteractiveToolsFramework.GizmoElementBox
class UGizmoElementBox : public UGizmoElementBase
{
public:
	struct FVector                               Center;                                            // 0x108(0x18)(None)
	struct FVector                               Dimensions;                                        // 0x120(0x18)(None)
	struct FVector                               UpDirection;                                       // 0x138(0x18)(None)
	struct FVector                               SideDirection;                                     // 0x150(0x18)(None)

	static class UClass* StaticClass();
	static class UGizmoElementBox* GetDefaultObj();

};

// 0x8 (0x1D0 - 0x1C8)
// Class InteractiveToolsFramework.GizmoElementCircle
class UGizmoElementCircle : public UGizmoElementCircleBase
{
public:
	bool                                         bDrawMesh;                                         // 0x1C8(0x1)(None)
	bool                                         bDrawLine;                                         // 0x1C9(0x1)(None)
	bool                                         bHitMesh;                                          // 0x1CA(0x1)(None)
	bool                                         bHitLine;                                          // 0x1CB(0x1)(None)
	uint8                                        Pad_8C4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoElementCircle* GetDefaultObj();

};

// 0x40 (0x148 - 0x108)
// Class InteractiveToolsFramework.GizmoElementCone
class UGizmoElementCone : public UGizmoElementBase
{
public:
	struct FVector                               Origin;                                            // 0x108(0x18)(None)
	struct FVector                               Direction;                                         // 0x120(0x18)(None)
	float                                        Height;                                            // 0x138(0x4)(None)
	float                                        Radius;                                            // 0x13C(0x4)(None)
	int32                                        NumSides;                                          // 0x140(0x4)(None)
	uint8                                        Pad_8C7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoElementCone* GetDefaultObj();

};

// 0x40 (0x148 - 0x108)
// Class InteractiveToolsFramework.GizmoElementCylinder
class UGizmoElementCylinder : public UGizmoElementBase
{
public:
	struct FVector                               Base;                                              // 0x108(0x18)(None)
	struct FVector                               Direction;                                         // 0x120(0x18)(None)
	float                                        Height;                                            // 0x138(0x4)(None)
	float                                        Radius;                                            // 0x13C(0x4)(None)
	int32                                        NumSides;                                          // 0x140(0x4)(None)
	uint8                                        Pad_8C9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoElementCylinder* GetDefaultObj();

};

// 0x18 (0x170 - 0x158)
// Class InteractiveToolsFramework.GizmoElementGroup
class UGizmoElementGroup : public UGizmoElementLineBase
{
public:
	bool                                         bConstantScale;                                    // 0x158(0x1)(None)
	bool                                         bHitOwner;                                         // 0x159(0x1)(None)
	uint8                                        Pad_8CE[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGizmoElementBase*>             Elements;                                          // 0x160(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UGizmoElementGroup* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class InteractiveToolsFramework.GizmoElementHitTarget
class UGizmoElementHitTarget : public UObject
{
public:
	uint8                                        Pad_8D0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGizmoElementBase*                     GizmoElement;                                      // 0x30(0x8)(ZeroConstructor)
	class UGizmoViewContext*                     GizmoViewContext;                                  // 0x38(0x8)(ZeroConstructor)
	class UTransformProxy*                       GizmoTransformProxy;                               // 0x40(0x8)(None)
	uint8                                        Pad_8D1[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoElementHitTarget* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class InteractiveToolsFramework.GizmoElementHitMultiTarget
class UGizmoElementHitMultiTarget : public UObject
{
public:
	uint8                                        Pad_8D3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGizmoElementBase*                     GizmoElement;                                      // 0x30(0x8)(ZeroConstructor)
	class UGizmoViewContext*                     GizmoViewContext;                                  // 0x38(0x8)(ZeroConstructor)
	class UTransformProxy*                       GizmoTransformProxy;                               // 0x40(0x8)(None)
	uint8                                        Pad_8D4[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoElementHitMultiTarget* GetDefaultObj();

};

// 0x58 (0x1B0 - 0x158)
// Class InteractiveToolsFramework.GizmoElementRectangle
class UGizmoElementRectangle : public UGizmoElementLineBase
{
public:
	struct FVector                               Center;                                            // 0x158(0x18)(None)
	float                                        Width;                                             // 0x170(0x4)(None)
	float                                        Height;                                            // 0x174(0x4)(None)
	struct FVector                               UpDirection;                                       // 0x178(0x18)(None)
	struct FVector                               SideDirection;                                     // 0x190(0x18)(None)
	bool                                         bDrawMesh;                                         // 0x1A8(0x1)(None)
	bool                                         bDrawLine;                                         // 0x1A9(0x1)(None)
	bool                                         bHitMesh;                                          // 0x1AA(0x1)(None)
	bool                                         bHitLine;                                          // 0x1AB(0x1)(None)
	uint8                                        Pad_8D7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoElementRectangle* GetDefaultObj();

};

// 0x10 (0x1D8 - 0x1C8)
// Class InteractiveToolsFramework.GizmoElementTorus
class UGizmoElementTorus : public UGizmoElementCircleBase
{
public:
	double                                       InnerRadius;                                       // 0x1C8(0x8)(None)
	int32                                        NumInnerSlices;                                    // 0x1D0(0x4)(None)
	bool                                         bEndCaps;                                          // 0x1D4(0x1)(None)
	uint8                                        Pad_8DD[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoElementTorus* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoTransformSource
class IGizmoTransformSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoTransformSource* GetDefaultObj();

	void SetTransform(const struct FTransform& NewTransform);
	void GetTransform(const struct FTransform& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoAxisSource
class IGizmoAxisSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoAxisSource* GetDefaultObj();

	void HasTangentVectors(bool ReturnValue);
	void GetTangentVectors(const struct FVector& TangentXOut, const struct FVector& TangentYOut);
	void GetOrigin(const struct FVector& ReturnValue);
	void GetDirection(const struct FVector& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoClickTarget
class IGizmoClickTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoClickTarget* GetDefaultObj();

	void UpdateInteractingState(bool bInteracting);
	void UpdateHoverState(bool bHovering);
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoClickMultiTarget
class IGizmoClickMultiTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoClickMultiTarget* GetDefaultObj();

	void UpdateInteractingState(bool bInteracting, uint32 InPartIdentifier);
	void UpdateHoverState(bool bHovering, uint32 InPartIdentifier);
	void UpdateHittableState(bool bHittable, uint32 InPartIdentifier);
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoRenderTarget
class IGizmoRenderTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoRenderTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoRenderMultiTarget
class IGizmoRenderMultiTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoRenderMultiTarget* GetDefaultObj();

	void UpdateVisibilityState(bool bVisible, uint32 InPartIdentifier);
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoStateTarget
class IGizmoStateTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoStateTarget* GetDefaultObj();

	void EndUpdate();
	void BeginUpdate();
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoFloatParameterSource
class IGizmoFloatParameterSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoFloatParameterSource* GetDefaultObj();

	void SetParameter(float NewValue);
	void GetParameter(float ReturnValue);
	void EndModify();
	void BeginModify();
};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.GizmoVec2ParameterSource
class IGizmoVec2ParameterSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGizmoVec2ParameterSource* GetDefaultObj();

	void SetParameter(const struct FVector2D& NewValue);
	void GetParameter(const struct FVector2D& ReturnValue);
	void EndModify();
	void BeginModify();
};

// 0x40 (0x6F0 - 0x6B0)
// Class InteractiveToolsFramework.GizmoLineHandleComponent
class UGizmoLineHandleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                               Normal;                                            // 0x6B0(0x18)(None)
	float                                        HandleSize;                                        // 0x6C8(0x4)(None)
	float                                        Thickness;                                         // 0x6CC(0x4)(None)
	struct FVector                               Direction;                                         // 0x6D0(0x18)(None)
	float                                        Length;                                            // 0x6E8(0x4)(None)
	bool                                         bImageScale;                                       // 0x6EC(0x1)(None)
	uint8                                        Pad_917[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoLineHandleComponent* GetDefaultObj();

};

// 0x50 (0x700 - 0x6B0)
// Class InteractiveToolsFramework.GizmoRectangleComponent
class UGizmoRectangleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                               DirectionX;                                        // 0x6B0(0x18)(None)
	struct FVector                               DirectionY;                                        // 0x6C8(0x18)(None)
	bool                                         bOrientYAccordingToCamera;                         // 0x6E0(0x1)(None)
	uint8                                        Pad_91E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OffsetX;                                           // 0x6E4(0x4)(None)
	float                                        OffsetY;                                           // 0x6E8(0x4)(None)
	float                                        LengthX;                                           // 0x6EC(0x4)(None)
	float                                        LengthY;                                           // 0x6F0(0x4)(None)
	float                                        Thickness;                                         // 0x6F4(0x4)(None)
	uint8                                        SegmentFlags;                                      // 0x6F8(0x1)(None)
	uint8                                        Pad_91F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoRectangleComponent* GetDefaultObj();

};

// 0x1B8 (0x1E0 - 0x28)
// Class InteractiveToolsFramework.GizmoViewContext
class UGizmoViewContext : public UObject
{
public:
	uint8                                        Pad_928[0x1B8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoViewContext* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class InteractiveToolsFramework.GizmoLambdaHitTarget
class UGizmoLambdaHitTarget : public UObject
{
public:
	uint8                                        Pad_92A[0xC8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoLambdaHitTarget* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class InteractiveToolsFramework.GizmoComponentHitTarget
class UGizmoComponentHitTarget : public UObject
{
public:
	uint8                                        Pad_92D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   Component;                                         // 0x30(0x8)(None)
	uint8                                        Pad_92E[0xC8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoComponentHitTarget* GetDefaultObj();

};

// 0x18 (0x4D8 - 0x4C0)
// Class InteractiveToolsFramework.IntervalGizmoActor
class AIntervalGizmoActor : public AGizmoActor
{
public:
	class UGizmoLineHandleComponent*             UpIntervalComponent;                               // 0x4C0(0x8)(ZeroConstructor)
	class UGizmoLineHandleComponent*             DownIntervalComponent;                             // 0x4C8(0x8)(ZeroConstructor)
	class UGizmoLineHandleComponent*             ForwardIntervalComponent;                          // 0x4D0(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class AIntervalGizmoActor* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class InteractiveToolsFramework.IntervalGizmoBuilder
class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
	uint8                                        Pad_940[0x98];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIntervalGizmoBuilder* GetDefaultObj();

};

// 0x1C8 (0x200 - 0x38)
// Class InteractiveToolsFramework.IntervalGizmo
class UIntervalGizmo : public UInteractiveGizmo
{
public:
	class UGizmoTransformChangeStateTarget*      StateTarget;                                       // 0x38(0x8)(ZeroConstructor)
	uint8                                        Pad_944[0x58];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTransformProxy*                       TransformProxy;                                    // 0x98(0x8)(ZeroConstructor)
	TArray<class UPrimitiveComponent*>           ActiveComponents;                                  // 0xA0(0x10)(ZeroConstructor)
	TArray<class UInteractiveGizmo*>             ActiveGizmos;                                      // 0xB0(0x10)(ZeroConstructor)
	uint8                                        Pad_948[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGizmoComponentAxisSource*             AxisYSource;                                       // 0xD8(0x8)(ZeroConstructor)
	class UGizmoComponentAxisSource*             AxisZSource;                                       // 0xE0(0x8)(ZeroConstructor)
	uint8                                        Pad_94A[0x118];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIntervalGizmo* GetDefaultObj();

};

// 0x18 (0x60 - 0x48)
// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class IGizmoFloatParameterSource> FloatParameterSource;                              // 0x48(0x10)(None)
	float                                        MinParameter;                                      // 0x58(0x4)(None)
	float                                        MaxParameter;                                      // 0x5C(0x4)(None)

	static class UClass* StaticClass();
	static class UGizmoAxisIntervalParameterSource* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	float                                        Value;                                             // 0x48(0x4)(None)
	struct FGizmoFloatParameterChange            LastChange;                                        // 0x4C(0x8)(None)
	uint8                                        Pad_950[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoLocalFloatParameterSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class UPlanePositionGizmoBuilder* GetDefaultObj();

};

// 0x238 (0x270 - 0x38)
// Class InteractiveToolsFramework.PlanePositionGizmo
class UPlanePositionGizmo : public UInteractiveGizmo
{
public:
	uint8                                        Pad_955[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGizmoAxisSource>     AxisSource;                                        // 0x48(0x10)(ZeroConstructor)
	TScriptInterface<class IGizmoVec2ParameterSource> ParameterSource;                                   // 0x58(0x10)(ZeroConstructor)
	TScriptInterface<class IGizmoClickTarget>    HitTarget;                                         // 0x68(0x10)(ZeroConstructor)
	TScriptInterface<class IGizmoStateTarget>    StateTarget;                                       // 0x78(0x10)(ZeroConstructor)
	class UClickDragInputBehavior*               MouseBehavior;                                     // 0x88(0x8)(ZeroConstructor)
	bool                                         bEnableSignedAxis;                                 // 0x90(0x1)(None)
	bool                                         bFlipX;                                            // 0x91(0x1)(None)
	bool                                         bFlipY;                                            // 0x92(0x1)(None)
	uint8                                        Pad_957[0x8D];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bInInteraction;                                    // 0x120(0x1)(None)
	uint8                                        Pad_958[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InteractionOrigin;                                 // 0x128(0x18)(None)
	struct FVector                               InteractionNormal;                                 // 0x140(0x18)(None)
	struct FVector                               InteractionAxisX;                                  // 0x158(0x18)(None)
	struct FVector                               InteractionAxisY;                                  // 0x170(0x18)(None)
	struct FVector                               InteractionStartPoint;                             // 0x188(0x18)(None)
	struct FVector                               InteractionCurPoint;                               // 0x1A0(0x18)(None)
	struct FVector2D                             InteractionStartParameter;                         // 0x1B8(0x10)(None)
	struct FVector2D                             InteractionCurParameter;                           // 0x1C8(0x10)(None)
	struct FVector2D                             ParameterSigns;                                    // 0x1D8(0x10)(None)
	uint8                                        Pad_961[0x88];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlanePositionGizmo* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class InteractiveToolsFramework.RepositionableTransformGizmoBuilder
class URepositionableTransformGizmoBuilder : public UCombinedTransformGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class URepositionableTransformGizmoBuilder* GetDefaultObj();

};

// 0xA0 (0x440 - 0x3A0)
// Class InteractiveToolsFramework.RepositionableTransformGizmo
class URepositionableTransformGizmo : public UCombinedTransformGizmo
{
public:
	uint8                                        Pad_96E[0x90];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGizmoTransformChangeStateTarget*      RepositionStateTarget;                             // 0x430(0x8)(ZeroConstructor)
	uint8                                        Pad_970[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URepositionableTransformGizmo* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ScalableSphereGizmoBuilder
class UScalableSphereGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static class UClass* StaticClass();
	static class UScalableSphereGizmoBuilder* GetDefaultObj();

};

// 0xC8 (0x100 - 0x38)
// Class InteractiveToolsFramework.ScalableSphereGizmo
class UScalableSphereGizmo : public UInteractiveGizmo
{
public:
	uint8                                        Pad_979[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HitErrorThreshold;                                 // 0x80(0x4)(None)
	uint8                                        Pad_97A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TransactionDescription;                            // 0x88(0x18)(None)
	float                                        Radius;                                            // 0xA0(0x4)(None)
	bool                                         bIsHovering;                                       // 0xA4(0x1)(None)
	bool                                         bIsDragging;                                       // 0xA5(0x1)(None)
	uint8                                        Pad_97C[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTransformProxy*                       ActiveTarget;                                      // 0xA8(0x8)(ZeroConstructor)
	struct FVector                               ActiveAxis;                                        // 0xB0(0x18)(None)
	struct FVector                               DragStartWorldPosition;                            // 0xC8(0x18)(None)
	struct FVector                               DragCurrentPositionProjected;                      // 0xE0(0x18)(None)
	float                                        InteractionStartParameter;                         // 0xF8(0x4)(None)
	uint8                                        Pad_97E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UScalableSphereGizmo* GetDefaultObj();

};

// 0x50 (0xD0 - 0x80)
// Class InteractiveToolsFramework.ScalableSphereGizmoInputBehavior
class UScalableSphereGizmoInputBehavior : public UAnyButtonInputBehavior
{
public:
	uint8                                        Pad_981[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UScalableSphereGizmoInputBehavior* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class InteractiveToolsFramework.GizmoNilStateTarget
class UGizmoNilStateTarget : public UObject
{
public:
	uint8                                        Pad_986[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoNilStateTarget* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class InteractiveToolsFramework.GizmoLambdaStateTarget
class UGizmoLambdaStateTarget : public UObject
{
public:
	uint8                                        Pad_98C[0x88];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoLambdaStateTarget* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
class UGizmoObjectModifyStateTarget : public UObject
{
public:
	uint8                                        Pad_990[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IToolContextTransactionProvider> TransactionManager;                                // 0x50(0x10)(None)

	static class UClass* StaticClass();
	static class UGizmoObjectModifyStateTarget* GetDefaultObj();

};

// 0x118 (0x140 - 0x28)
// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
class UGizmoTransformChangeStateTarget : public UObject
{
public:
	uint8                                        Pad_994[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IToolContextTransactionProvider> TransactionManager;                                // 0x50(0x10)(None)
	uint8                                        Pad_995[0xE0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoTransformChangeStateTarget* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class InteractiveToolsFramework.CombinedTransformGizmoContextObject
class UCombinedTransformGizmoContextObject : public UObject
{
public:
	uint8                                        Pad_998[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCombinedTransformGizmoContextObject* GetDefaultObj();

};

// 0x188 (0x1B0 - 0x28)
// Class InteractiveToolsFramework.TransformProxy
class UTransformProxy : public UObject
{
public:
	uint8                                        Pad_99C[0xA8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bRotatePerObject;                                  // 0xD0(0x1)(None)
	bool                                         bSetPivotMode;                                     // 0xD1(0x1)(None)
	uint8                                        Pad_99D[0x1E];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SharedTransform;                                   // 0xF0(0x60)(None)
	struct FTransform                            InitialSharedTransform;                            // 0x150(0x60)(None)

	static class UClass* StaticClass();
	static class UTransformProxy* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class InteractiveToolsFramework.GizmoBaseTransformSource
class UGizmoBaseTransformSource : public UObject
{
public:
	uint8                                        Pad_9A4[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoBaseTransformSource* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{
public:
	class USceneComponent*                       Component;                                         // 0x48(0x8)(None)
	bool                                         bModifyComponentOnTransform;                       // 0x50(0x1)(None)
	uint8                                        Pad_9A7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoComponentWorldTransformSource* GetDefaultObj();

};

// 0x98 (0xE0 - 0x48)
// Class InteractiveToolsFramework.GizmoScaledTransformSource
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
{
public:
	TScriptInterface<class IGizmoTransformSource> ChildTransformSource;                              // 0x48(0x10)(None)
	uint8                                        Pad_9A9[0x88];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoScaledTransformSource* GetDefaultObj();

};

// 0x28 (0x70 - 0x48)
// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{
public:
	class UTransformProxy*                       Proxy;                                             // 0x48(0x8)(None)
	uint8                                        Pad_9B0[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGizmoTransformProxyTransformSource* GetDefaultObj();

};

// 0x20 (0x68 - 0x48)
// Class InteractiveToolsFramework.GizmoScaledAndUnscaledTransformSources
class UGizmoScaledAndUnscaledTransformSources : public UGizmoBaseTransformSource
{
public:
	TScriptInterface<class IGizmoTransformSource> ScaledTransformSource;                             // 0x48(0x10)(ZeroConstructor)
	TScriptInterface<class IGizmoTransformSource> UnscaledTransformSource;                           // 0x58(0x10)(None)

	static class UClass* StaticClass();
	static class UGizmoScaledAndUnscaledTransformSources* GetDefaultObj();

};

// 0x18 (0xC0 - 0xA8)
// Class InteractiveToolsFramework.BrushBaseProperties
class UBrushBaseProperties : public UInteractiveToolPropertySet
{
public:
	float                                        BrushSize;                                         // 0xA8(0x4)(None)
	bool                                         bSpecifyRadius;                                    // 0xAC(0x1)(None)
	uint8                                        Pad_9BD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BrushRadius;                                       // 0xB0(0x4)(None)
	float                                        BrushStrength;                                     // 0xB4(0x4)(None)
	float                                        BrushFalloffAmount;                                // 0xB8(0x4)(None)
	bool                                         bShowStrength;                                     // 0xBC(0x1)(None)
	bool                                         bShowFalloff;                                      // 0xBD(0x1)(None)
	uint8                                        Pad_9BE[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBrushBaseProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ClickDragToolBuilder
class UClickDragToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class UClickDragToolBuilder* GetDefaultObj();

};

// 0x8 (0xA0 - 0x98)
// Class InteractiveToolsFramework.ClickDragTool
class UClickDragTool : public UInteractiveTool
{
public:
	uint8                                        Pad_9C3[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UClickDragTool* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.SingleClickToolBuilder
class USingleClickToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass();
	static class USingleClickToolBuilder* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class InteractiveToolsFramework.ContextObjectStore
class UContextObjectStore : public UObject
{
public:
	TArray<class UObject*>                       ContextObjects;                                    // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UContextObjectStore* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class InteractiveToolsFramework.InputBehaviorSet
class UInputBehaviorSet : public UObject
{
public:
	TArray<struct FBehaviorInfo>                 Behaviors;                                         // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UInputBehaviorSet* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.InputBehaviorSource
class IInputBehaviorSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInputBehaviorSource* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class InteractiveToolsFramework.LocalInputBehaviorSource
class ULocalInputBehaviorSource : public UObject
{
public:
	uint8                                        Pad_9C6[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULocalInputBehaviorSource* GetDefaultObj();

};

// 0x168 (0x190 - 0x28)
// Class InteractiveToolsFramework.InputRouter
class UInputRouter : public UObject
{
public:
	bool                                         bAutoInvalidateOnHover;                            // 0x28(0x1)(None)
	bool                                         bAutoInvalidateOnCapture;                          // 0x29(0x1)(None)
	uint8                                        Pad_9C7[0xE];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputBehaviorSet*                     ActiveInputBehaviors;                              // 0x38(0x8)(None)
	uint8                                        Pad_9C8[0x150];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputRouter* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class InteractiveToolsFramework.InteractiveGizmoManager
class UInteractiveGizmoManager : public UObject
{
public:
	uint8                                        Pad_9CD[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActiveGizmo>                  ActiveGizmos;                                      // 0x30(0x10)(ZeroConstructor)
	uint8                                        Pad_9CF[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class UInteractiveGizmoBuilder*> GizmoBuilders;                                     // 0x58(0x50)(None)
	uint8                                        Pad_9D0[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInteractiveGizmoManager* GetDefaultObj();

};

// 0x170 (0x198 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolManager
class UInteractiveToolManager : public UObject
{
public:
	uint8                                        Pad_9D3[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInteractiveTool*                      ActiveLeftTool;                                    // 0x58(0x8)(ZeroConstructor)
	class UInteractiveTool*                      ActiveRightTool;                                   // 0x60(0x8)(ZeroConstructor)
	uint8                                        Pad_9D4[0x80];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class UInteractiveToolBuilder*> ToolBuilders;                                      // 0xE8(0x50)(None)
	uint8                                        Pad_9D5[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInteractiveToolManager* GetDefaultObj();

};

// 0x308 (0x330 - 0x28)
// Class InteractiveToolsFramework.InteractiveToolsContext
class UInteractiveToolsContext : public UObject
{
public:
	uint8                                        Pad_9D6[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputRouter*                          InputRouter;                                       // 0x58(0x8)(ZeroConstructor)
	class UToolTargetManager*                    TargetManager;                                     // 0x60(0x8)(ZeroConstructor)
	class UInteractiveToolManager*               ToolManager;                                       // 0x68(0x8)(ZeroConstructor)
	class UInteractiveGizmoManager*              GizmoManager;                                      // 0x70(0x8)(ZeroConstructor)
	class UContextObjectStore*                   ContextObjectStore;                                // 0x78(0x8)(ZeroConstructor)
	uint8                                        Pad_9D8[0x280];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UInteractiveToolManager> ToolManagerClass;                                  // 0x300(0x30)(None)

	static class UClass* StaticClass();
	static class UInteractiveToolsContext* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class InteractiveToolsFramework.SelectionSet
class USelectionSet : public UObject
{
public:
	uint8                                        Pad_9DA[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USelectionSet* GetDefaultObj();

};

// 0x40 (0x80 - 0x40)
// Class InteractiveToolsFramework.MeshSelectionSet
class UMeshSelectionSet : public USelectionSet
{
public:
	TArray<int32>                                Vertices;                                          // 0x40(0x10)(None)
	TArray<int32>                                Edges;                                             // 0x50(0x10)(None)
	TArray<int32>                                Faces;                                             // 0x60(0x10)(None)
	TArray<int32>                                Groups;                                            // 0x70(0x10)(None)

	static class UClass* StaticClass();
	static class UMeshSelectionSet* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class InteractiveToolsFramework.ToolTargetManager
class UToolTargetManager : public UObject
{
public:
	uint8                                        Pad_9E0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UToolTargetFactory*>            Factories;                                         // 0x30(0x10)(None)

	static class UClass* StaticClass();
	static class UToolTargetManager* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ToolTarget
class UToolTarget : public UObject
{
public:

	static class UClass* StaticClass();
	static class UToolTarget* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class InteractiveToolsFramework.PrimitiveComponentToolTarget
class UPrimitiveComponentToolTarget : public UToolTarget
{
public:
	uint8                                        Pad_9E9[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPrimitiveComponentToolTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.ToolTargetFactory
class UToolTargetFactory : public UObject
{
public:

	static class UClass* StaticClass();
	static class UToolTargetFactory* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InteractiveToolsFramework.PrimitiveComponentToolTargetFactory
class UPrimitiveComponentToolTargetFactory : public UToolTargetFactory
{
public:

	static class UClass* StaticClass();
	static class UPrimitiveComponentToolTargetFactory* GetDefaultObj();

};

}


