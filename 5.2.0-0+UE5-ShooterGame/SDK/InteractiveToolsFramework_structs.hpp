#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGizmoElementState : uint8
{
	None                           = 0,
	Visible                        = 2,
	Hittable                       = 4,
	VisibleAndHittable             = 6,
	EGizmoElementState_MAX         = 7,
};

enum class EGizmoElementInteractionState : int32
{
	None                           = 0,
	Hovering                       = 1,
	Interacting                    = 2,
	EGizmoElementInteractionState_MAX = 3,
};

enum class EGizmoElementViewDependentType : int32
{
	None                           = 0,
	Axis                           = 1,
	Plane                          = 2,
	EGizmoElementViewDependentType_MAX = 3,
};

enum class EGizmoElementViewAlignType : int32
{
	None                           = 0,
	PointOnly                      = 1,
	PointEye                       = 2,
	PointScreen                    = 3,
	Axial                          = 4,
	EGizmoElementViewAlignType_MAX = 5,
};

enum class EGizmoElementPartialType : int32
{
	None                           = 0,
	Partial                        = 1,
	PartialViewDependent           = 2,
	EGizmoElementPartialType_MAX   = 3,
};

enum class EStandardToolContextMaterials : uint8
{
	VertexColorMaterial            = 1,
	EStandardToolContextMaterials_MAX = 2,
};

enum class EToolContextCoordinateSystem : int32
{
	World                          = 0,
	Local                          = 1,
	EToolContextCoordinateSystem_MAX = 2,
};

enum class EToolContextTransformGizmoMode : uint8
{
	NoGizmo                        = 0,
	Translation                    = 1,
	Rotation                       = 2,
	Scale                          = 3,
	Combined                       = 8,
	EToolContextTransformGizmoMode_MAX = 9,
};

enum class EToolMessageLevel : uint8
{
	Internal                       = 0,
	UserMessage                    = 1,
	UserNotification               = 2,
	UserWarning                    = 3,
	UserError                      = 4,
	EToolMessageLevel_MAX          = 5,
};

enum class ESelectedObjectsModificationType : uint8
{
	Replace                        = 0,
	Add                            = 1,
	Remove                         = 2,
	Clear                          = 3,
	ESelectedObjectsModificationType_MAX = 4,
};

enum class EViewInteractionState : uint8
{
	None                           = 0,
	Hovered                        = 1,
	Focused                        = 2,
	EViewInteractionState_MAX      = 3,
};

enum class EGizmoElementArrowHeadType : int32
{
	Cone                           = 0,
	Cube                           = 1,
	EGizmoElementArrowHeadType_MAX = 2,
};

enum class EInputCaptureSide : uint8
{
	None                           = 0,
	Left                           = 1,
	Right                          = 2,
	Both                           = 3,
	Any                            = 99,
	EInputCaptureSide_MAX          = 100,
};

enum class EInputCaptureRequestType : uint8
{
	Begin                          = 1,
	Ignore                         = 2,
	EInputCaptureRequestType_MAX   = 3,
};

enum class EInputCaptureState : uint8
{
	Begin                          = 1,
	Continue                       = 2,
	End                            = 3,
	Ignore                         = 4,
	EInputCaptureState_MAX         = 5,
};

enum class EInputDevices : uint8
{
	None                           = 0,
	Keyboard                       = 1,
	Mouse                          = 2,
	Gamepad                        = 4,
	OculusTouch                    = 8,
	HTCViveWands                   = 16,
	AnySpatialDevice               = 24,
	TabletFingers                  = 1024,
	EInputDevices_MAX              = 1025,
};

enum class ETransformGizmoSubElements : uint8
{
	None                           = 0,
	TranslateAxisX                 = 2,
	TranslateAxisY                 = 4,
	TranslateAxisZ                 = 8,
	TranslateAllAxes               = 14,
	TranslatePlaneXY               = 16,
	TranslatePlaneXZ               = 32,
	TranslatePlaneYZ               = 64,
	TranslateAllPlanes             = 112,
	RotateAxisX                    = 128,
	RotateAxisY                    = 256,
	RotateAxisZ                    = 512,
	RotateAllAxes                  = 896,
	ScaleAxisX                     = 1024,
	ScaleAxisY                     = 2048,
	ScaleAxisZ                     = 4096,
	ScaleAllAxes                   = 7168,
	ScalePlaneYZ                   = 8192,
	ScalePlaneXZ                   = 16384,
	ScalePlaneXY                   = 32768,
	ScaleAllPlanes                 = 57344,
	ScaleUniform                   = 65536,
	StandardTranslateRotate        = 1022,
	TranslateRotateUniformScale    = 66558,
	FullTranslateRotateScale       = 131070,
	ETransformGizmoSubElements_MAX = 131071,
};

enum class EToolShutdownType : uint8
{
	Completed                      = 0,
	Accept                         = 1,
	Cancel                         = 2,
	EToolShutdownType_MAX          = 3,
};

enum class EToolSide : uint8
{
	Left                           = 1,
	Mouse                          = 1,
	Right                          = 2,
	EToolSide_MAX                  = 3,
};

enum class EToolChangeTrackingMode : uint8
{
	NoChangeTracking               = 1,
	UndoToExit                     = 2,
	FullUndoRedo                   = 3,
	EToolChangeTrackingMode_MAX    = 4,
};

enum class ESceneSnapQueryType : uint8
{
	Position                       = 1,
	Rotation                       = 2,
	ESceneSnapQueryType_MAX        = 3,
};

enum class ESceneSnapQueryTargetType : uint8
{
	None                           = 0,
	MeshVertex                     = 1,
	MeshEdge                       = 2,
	Grid                           = 4,
	All                            = 7,
	ESceneSnapQueryTargetType_MAX  = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
struct FGizmoVec2ParameterChange
{
public:
	struct FVector2D                             InitialValue;                                      // 0x0(0x10)(None)
	struct FVector2D                             CurrentValue;                                      // 0x10(0x10)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct InteractiveToolsFramework.GizmoElementColorAttribute
struct FGizmoElementColorAttribute
{
public:
	struct FLinearColor                          Value;                                             // 0x0(0x10)(None)
	bool                                         bHasValue;                                         // 0x10(0x1)(None)
	bool                                         bOverridesChildState;                              // 0x11(0x1)(None)
	uint8                                        Pad_9F2[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct InteractiveToolsFramework.GizmoElementMaterialAttribute
struct FGizmoElementMaterialAttribute
{
public:
	TWeakObjectPtr<class UMaterialInterface>     Value;                                             // 0x0(0x8)(None)
	bool                                         bOverridesChildState;                              // 0x8(0x1)(None)
	uint8                                        Pad_9F3[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct InteractiveToolsFramework.GizmoElementMeshRenderStateAttributes
struct FGizmoElementMeshRenderStateAttributes
{
public:
	struct FGizmoElementMaterialAttribute        Material;                                          // 0x0(0xC)(ZeroConstructor)
	struct FGizmoElementMaterialAttribute        HoverMaterial;                                     // 0xC(0xC)(ZeroConstructor)
	struct FGizmoElementMaterialAttribute        InteractMaterial;                                  // 0x18(0xC)(None)
	struct FGizmoElementColorAttribute           VertexColor;                                       // 0x24(0x14)(None)
	struct FGizmoElementColorAttribute           HoverVertexColor;                                  // 0x38(0x14)(None)
	struct FGizmoElementColorAttribute           InteractVertexColor;                               // 0x4C(0x14)(None)
};

// 0x3C (0x3C - 0x0)
// ScriptStruct InteractiveToolsFramework.GizmoElementLineRenderStateAttributes
struct FGizmoElementLineRenderStateAttributes
{
public:
	struct FGizmoElementColorAttribute           LineColor;                                         // 0x0(0x14)(None)
	struct FGizmoElementColorAttribute           HoverLineColor;                                    // 0x14(0x14)(None)
	struct FGizmoElementColorAttribute           InteractLineColor;                                 // 0x28(0x14)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
struct FGizmoFloatParameterChange
{
public:
	float                                        InitialValue;                                      // 0x0(0x4)(None)
	float                                        CurrentValue;                                      // 0x4(0x4)(None)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct InteractiveToolsFramework.BrushStampData
struct FBrushStampData
{
public:
	uint8                                        Pad_9F6[0x130];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct InteractiveToolsFramework.BehaviorInfo
struct FBehaviorInfo
{
public:
	class UInputBehavior*                        Behavior;                                          // 0x0(0x8)(None)
	uint8                                        Pad_9F7[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct InteractiveToolsFramework.InputRayHit
struct FInputRayHit
{
public:
	bool                                         bHit;                                              // 0x0(0x1)(None)
	uint8                                        Pad_9F8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       HitDepth;                                          // 0x8(0x8)(None)
	struct FVector                               HitNormal;                                         // 0x10(0x18)(None)
	bool                                         bHasHitNormal;                                     // 0x28(0x1)(None)
	uint8                                        Pad_9F9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HitIdentifier;                                     // 0x2C(0x4)(None)
	uint8                                        Pad_9FA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UObject>                HitObject;                                         // 0x38(0x8)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct InteractiveToolsFramework.InputDeviceRay
struct FInputDeviceRay
{
public:
	struct FRay                                  WorldRay;                                          // 0x0(0x30)(None)
	bool                                         bHas2D;                                            // 0x30(0x1)(None)
	uint8                                        Pad_9FC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ScreenPosition;                                    // 0x38(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct InteractiveToolsFramework.ActiveGizmo
struct FActiveGizmo
{
public:
	class UInteractiveGizmo*                     Gizmo;                                             // 0x0(0x8)(None)
	uint8                                        Pad_9FD[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


