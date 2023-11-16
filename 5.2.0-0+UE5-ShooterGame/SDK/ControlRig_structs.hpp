#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERigElementType : uint8
{
	None                           = 0,
	Bone                           = 1,
	Null                           = 2,
	Space                          = 2,
	Control                        = 4,
	Curve                          = 8,
	RigidBody                      = 16,
	Reference                      = 32,
	Last                           = 64,
	All                            = 63,
	ToResetAfterConstructionEvent  = 13,
	ERigElementType_MAX            = 65,
};

enum class ERigControlTransformChannel : uint8
{
	TranslationX                   = 0,
	TranslationY                   = 1,
	TranslationZ                   = 2,
	Pitch                          = 3,
	Yaw                            = 4,
	Roll                           = 5,
	ScaleX                         = 6,
	ScaleY                         = 7,
	ScaleZ                         = 8,
	ERigControlTransformChannel_MAX = 9,
};

enum class ERigControlVisibility : uint8
{
	UserDefined                    = 0,
	BasedOnSelection               = 1,
	ERigControlVisibility_MAX      = 2,
};

enum class ERigControlAxis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	ERigControlAxis_MAX            = 3,
};

enum class ERigControlType : uint8
{
	Bool                           = 0,
	Float                          = 1,
	Integer                        = 2,
	Vector2D                       = 3,
	Position                       = 4,
	Scale                          = 5,
	Rotator                        = 6,
	Transform                      = 7,
	TransformNoScale               = 8,
	EulerTransform                 = 9,
	ERigControlType_MAX            = 10,
};

enum class ERigControlAnimationType : uint8
{
	AnimationControl               = 0,
	AnimationChannel               = 1,
	ProxyControl                   = 2,
	VisualCue                      = 3,
	ERigControlAnimationType_MAX   = 4,
};

enum class ERigExecutionType : uint8
{
	Runtime                        = 0,
	Editing                        = 1,
	Max                            = 2,
};

enum class ERigTransformStackEntryType : uint8
{
	TransformPose                  = 0,
	ControlOffset                  = 1,
	ControlShape                   = 2,
	CurveValue                     = 3,
	ERigTransformStackEntryType_MAX = 4,
};

enum class ERigTransformType : uint8
{
	InitialLocal                   = 0,
	CurrentLocal                   = 1,
	InitialGlobal                  = 2,
	CurrentGlobal                  = 3,
	NumTransformTypes              = 4,
	ERigTransformType_MAX          = 5,
};

enum class EControlRigInteractionType : uint8
{
	None                           = 0,
	Translate                      = 1,
	Rotate                         = 2,
	Scale                          = 4,
	All                            = 7,
	EControlRigInteractionType_MAX = 8,
};

enum class EControlRigVectorKind : uint8
{
	Direction                      = 0,
	Location                       = 1,
	EControlRigVectorKind_MAX      = 2,
};

enum class EControlRigComponentSpace : uint8
{
	WorldSpace                     = 0,
	ActorSpace                     = 1,
	ComponentSpace                 = 2,
	RigSpace                       = 3,
	LocalSpace                     = 4,
	Max                            = 5,
};

enum class EControlRigComponentMapDirection : uint8
{
	Input                          = 0,
	Output                         = 1,
	EControlRigComponentMapDirection_MAX = 2,
};

enum class ETransformSpaceMode : uint8
{
	LocalSpace                     = 0,
	GlobalSpace                    = 1,
	BaseSpace                      = 2,
	BaseJoint                      = 3,
	Max                            = 4,
};

enum class ETransformGetterType : uint8
{
	Initial                        = 0,
	Current                        = 1,
	Max                            = 2,
};

enum class EControlRigTestDataPlaybackMode : uint8
{
	Live                           = 0,
	ReplayInputs                   = 1,
	GroundTruth                    = 2,
	Max                            = 3,
};

enum class ECRSimConstraintType : uint8
{
	Distance                       = 0,
	DistanceFromA                  = 1,
	DistanceFromB                  = 2,
	Plane                          = 3,
	ECRSimConstraintType_MAX       = 4,
};

enum class ECRSimPointForceType : uint8
{
	Direction                      = 0,
	ECRSimPointForceType_MAX       = 1,
};

enum class ECRSimSoftCollisionType : uint8
{
	Plane                          = 0,
	Sphere                         = 1,
	Cone                           = 2,
	ECRSimSoftCollisionType_MAX    = 3,
};

enum class EControlRigFKRigExecuteMode : uint8
{
	Replace                        = 0,
	Additive                       = 1,
	Direct                         = 2,
	Max                            = 3,
};

enum class ERigBoneType : uint8
{
	Imported                       = 0,
	User                           = 1,
	ERigBoneType_MAX               = 2,
};

enum class ERigMetadataType : uint8
{
	Bool                           = 0,
	BoolArray                      = 1,
	Float                          = 2,
	FloatArray                     = 3,
	Int32                          = 4,
	Int32Array                     = 5,
	Name                           = 6,
	NameArray                      = 7,
	Vector                         = 8,
	VectorArray                    = 9,
	Rotator                        = 10,
	RotatorArray                   = 11,
	Quat                           = 12,
	QuatArray                      = 13,
	Transform                      = 14,
	TransformArray                 = 15,
	LinearColor                    = 16,
	LinearColorArray               = 17,
	RigElementKey                  = 18,
	RigElementKeyArray             = 19,
	Invalid                        = 20,
	ERigMetadataType_MAX           = 21,
};

enum class ERigHierarchyNotification : uint8
{
	ElementAdded                   = 0,
	ElementRemoved                 = 1,
	ElementRenamed                 = 2,
	ElementSelected                = 3,
	ElementDeselected              = 4,
	ParentChanged                  = 5,
	HierarchyReset                 = 6,
	ControlSettingChanged          = 7,
	ControlVisibilityChanged       = 8,
	ControlDrivenListChanged       = 9,
	ControlShapeTransformChanged   = 10,
	ParentWeightsChanged           = 11,
	InteractionBracketOpened       = 12,
	InteractionBracketClosed       = 13,
	ElementReordered               = 14,
	Max                            = 15,
};

enum class ERigEvent : uint8
{
	None                           = 0,
	RequestAutoKey                 = 1,
	OpenUndoBracket                = 2,
	CloseUndoBracket               = 3,
	Max                            = 4,
};

enum class EControlRigSetKey : uint8
{
	DoNotCare                      = 0,
	Always                         = 1,
	Never                          = 2,
	EControlRigSetKey_MAX          = 3,
};

enum class ERigControlValueType : uint8
{
	Initial                        = 0,
	Current                        = 1,
	Minimum                        = 2,
	Maximum                        = 3,
	ERigControlValueType_MAX       = 4,
};

enum class ERigSpaceType : uint8
{
	Global                         = 0,
	Bone                           = 1,
	Control                        = 2,
	Space                          = 3,
	ERigSpaceType_MAX              = 4,
};

enum class EMovieSceneControlRigSpaceType : uint8
{
	Parent                         = 0,
	World                          = 1,
	ControlRig                     = 2,
	EMovieSceneControlRigSpaceType_MAX = 3,
};

enum class EControlRigDrawHierarchyMode : uint8
{
	Axes                           = 0,
	Max                            = 1,
};

enum class EAimMode : uint8
{
	AimAtTarget                    = 0,
	OrientToTarget                 = 1,
	MAX                            = 2,
};

enum class EApplyTransformMode : uint8
{
	Override                       = 0,
	Additive                       = 1,
	Max                            = 2,
};

enum class ERigSwitchParentMode : uint8
{
	World                          = 0,
	DefaultParent                  = 1,
	ParentItem                     = 2,
	ERigSwitchParentMode_MAX       = 3,
};

enum class EControlRigCurveAlignment : uint8
{
	Front                          = 0,
	Stretched                      = 1,
	EControlRigCurveAlignment_MAX  = 2,
};

enum class EControlRigModifyBoneMode : uint8
{
	OverrideLocal                  = 0,
	OverrideGlobal                 = 1,
	AdditiveLocal                  = 2,
	AdditiveGlobal                 = 3,
	Max                            = 4,
};

enum class EConstraintInterpType : uint8
{
	Average                        = 0,
	Shortest                       = 1,
	Max                            = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigElementKey
struct FRigElementKey
{
public:
	enum class ERigElementType                   Type;                                              // 0x0(0x1)(None)
	uint8                                        Pad_16A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x4(0x8)(None)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct ControlRig.RigBaseElement
struct FRigBaseElement
{
public:
	uint8                                        Pad_16A8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        Key;                                               // 0x8(0xC)(None)
	uint8                                        Pad_16AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NameString;                                        // 0x18(0x10)(None)
	int32                                        Index;                                             // 0x28(0x4)(None)
	int32                                        SubIndex;                                          // 0x2C(0x4)(None)
	bool                                         bSelected;                                         // 0x30(0x1)(None)
	uint8                                        Pad_16AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CreatedAtInstructionIndex;                         // 0x34(0x4)(None)
	uint8                                        Pad_16AC[0xB8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigComputedTransform
struct FRigComputedTransform
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(None)
	uint8                                        Pad_16AF[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct ControlRig.RigLocalAndGlobalTransform
struct FRigLocalAndGlobalTransform
{
public:
	struct FRigComputedTransform                 Local;                                             // 0x0(0x70)(None)
	struct FRigComputedTransform                 Global;                                            // 0x70(0x70)(None)
};

// 0x1C0 (0x1C0 - 0x0)
// ScriptStruct ControlRig.RigCurrentAndInitialTransform
struct FRigCurrentAndInitialTransform
{
public:
	struct FRigLocalAndGlobalTransform           Current;                                           // 0x0(0xE0)(None)
	struct FRigLocalAndGlobalTransform           Initial;                                           // 0xE0(0xE0)(None)
};

// 0x200 (0x2F0 - 0xF0)
// ScriptStruct ControlRig.RigTransformElement
struct FRigTransformElement : public FRigBaseElement
{
public:
	struct FRigCurrentAndInitialTransform        Pose;                                              // 0xF0(0x1C0)(None)
	uint8                                        Pad_16B2[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x3F0 - 0x2F0)
// ScriptStruct ControlRig.RigMultiParentElement
struct FRigMultiParentElement : public FRigTransformElement
{
public:
	uint8                                        Pad_16B3[0x100];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.RigControlLimitEnabled
struct FRigControlLimitEnabled
{
public:
	bool                                         bMinimum;                                          // 0x0(0x1)(None)
	bool                                         bMaximum;                                          // 0x1(0x1)(None)
};

// 0x84 (0x84 - 0x0)
// ScriptStruct ControlRig.RigControlValueStorage
struct FRigControlValueStorage
{
public:
	float                                        Float00;                                           // 0x0(0x4)(None)
	float                                        Float01;                                           // 0x4(0x4)(None)
	float                                        Float02;                                           // 0x8(0x4)(None)
	float                                        Float03;                                           // 0xC(0x4)(None)
	float                                        Float10;                                           // 0x10(0x4)(None)
	float                                        Float11;                                           // 0x14(0x4)(None)
	float                                        Float12;                                           // 0x18(0x4)(None)
	float                                        Float13;                                           // 0x1C(0x4)(None)
	float                                        Float20;                                           // 0x20(0x4)(None)
	float                                        Float21;                                           // 0x24(0x4)(None)
	float                                        Float22;                                           // 0x28(0x4)(None)
	float                                        Float23;                                           // 0x2C(0x4)(None)
	float                                        Float30;                                           // 0x30(0x4)(None)
	float                                        Float31;                                           // 0x34(0x4)(None)
	float                                        Float32;                                           // 0x38(0x4)(None)
	float                                        Float33;                                           // 0x3C(0x4)(None)
	float                                        Float00_2;                                         // 0x40(0x4)(None)
	float                                        Float01_2;                                         // 0x44(0x4)(None)
	float                                        Float02_2;                                         // 0x48(0x4)(None)
	float                                        Float03_2;                                         // 0x4C(0x4)(None)
	float                                        Float10_2;                                         // 0x50(0x4)(None)
	float                                        Float11_2;                                         // 0x54(0x4)(None)
	float                                        Float12_2;                                         // 0x58(0x4)(None)
	float                                        Float13_2;                                         // 0x5C(0x4)(None)
	float                                        Float20_2;                                         // 0x60(0x4)(None)
	float                                        Float21_2;                                         // 0x64(0x4)(None)
	float                                        Float22_2;                                         // 0x68(0x4)(None)
	float                                        Float23_2;                                         // 0x6C(0x4)(None)
	float                                        Float30_2;                                         // 0x70(0x4)(None)
	float                                        Float31_2;                                         // 0x74(0x4)(None)
	float                                        Float32_2;                                         // 0x78(0x4)(None)
	float                                        Float33_2;                                         // 0x7C(0x4)(None)
	bool                                         bValid;                                            // 0x80(0x1)(None)
	uint8                                        Pad_16B8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x84 (0x84 - 0x0)
// ScriptStruct ControlRig.RigControlValue
struct FRigControlValue
{
public:
	struct FRigControlValueStorage               FloatStorage;                                      // 0x0(0x84)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigControlElementCustomization
struct FRigControlElementCustomization
{
public:
	TArray<struct FRigElementKey>                AvailableSpaces;                                   // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	TArray<struct FRigElementKey>                RemovedSpaces;                                     // 0x10(0x10)(None)
};

// 0x1B0 (0x1B0 - 0x0)
// ScriptStruct ControlRig.RigControlSettings
struct FRigControlSettings
{
public:
	enum class ERigControlAnimationType          AnimationType;                                     // 0x0(0x1)(None)
	enum class ERigControlType                   ControlType;                                       // 0x1(0x1)(None)
	uint8                                        Pad_16BB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DisplayName;                                       // 0x4(0x8)(None)
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0xC(0x1)(None)
	bool                                         bIsCurve;                                          // 0xD(0x1)(None)
	uint8                                        Pad_16BC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigControlLimitEnabled>       LimitEnabled;                                      // 0x10(0x10)(AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         bDrawLimits;                                       // 0x20(0x1)(None)
	uint8                                        Pad_16BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlValue                      MinimumValue;                                      // 0x24(0x84)(None)
	struct FRigControlValue                      MaximumValue;                                      // 0xA8(0x84)(None)
	bool                                         bShapeVisible;                                     // 0x12C(0x1)(None)
	enum class ERigControlVisibility             ShapeVisibility;                                   // 0x12D(0x1)(None)
	uint8                                        Pad_16BE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ShapeName;                                         // 0x130(0x8)(None)
	struct FLinearColor                          ShapeColor;                                        // 0x138(0x10)(None)
	bool                                         bIsTransientControl;                               // 0x148(0x1)(None)
	uint8                                        Pad_16C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnum*                                 ControlEnum;                                       // 0x150(0x8)(None)
	struct FRigControlElementCustomization       Customization;                                     // 0x158(0x20)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	TArray<struct FRigElementKey>                DrivenControls;                                    // 0x178(0x10)(AutoWeak, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16C2[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bGroupWithParentControl;                           // 0x198(0x1)(None)
	bool                                         bRestrictSpaceSwitching;                           // 0x199(0x1)(None)
	uint8                                        Pad_16C3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ERigControlTransformChannel> FilteredChannels;                                  // 0x1A0(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ControlRig.RigPreferredEulerAngles
struct FRigPreferredEulerAngles
{
public:
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x0(0x1)(None)
	uint8                                        Pad_16C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Current;                                           // 0x8(0x18)(None)
	struct FVector                               Initial;                                           // 0x20(0x18)(None)
};

// 0x570 (0x960 - 0x3F0)
// ScriptStruct ControlRig.RigControlElement
struct FRigControlElement : public FRigMultiParentElement
{
public:
	struct FRigControlSettings                   Settings;                                          // 0x3F0(0x1B0)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FRigCurrentAndInitialTransform        Offset;                                            // 0x5A0(0x1C0)(None)
	struct FRigCurrentAndInitialTransform        Shape;                                             // 0x760(0x1C0)(None)
	struct FRigPreferredEulerAngles              PreferredEulerAngles;                              // 0x920(0x38)(None)
	uint8                                        Pad_16C8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigInfluenceEntry
struct FRigInfluenceEntry
{
public:
	struct FRigElementKey                        Source;                                            // 0x0(0xC)(None)
	uint8                                        Pad_16CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                AffectedList;                                      // 0x10(0x10)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ControlRig.RigInfluenceMap
struct FRigInfluenceMap
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(None)
	TArray<struct FRigInfluenceEntry>            Entries;                                           // 0x8(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FRigElementKey, int32>           KeyToIndex;                                        // 0x18(0x50)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.RigInfluenceMapPerEvent
struct FRigInfluenceMapPerEvent
{
public:
	TArray<struct FRigInfluenceMap>              Maps;                                              // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, int32>                     EventToIndex;                                      // 0x10(0x50)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ControlRig.RigHierarchySettings
struct FRigHierarchySettings
{
public:
	int32                                        ProceduralElementLimit;                            // 0x0(0x4)(None)
};

// 0x140 (0x148 - 0x8)
// ScriptStruct ControlRig.MovieSceneControlRigInstanceData
struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
{
public:
	bool                                         bAdditive;                                         // 0x8(0x1)(None)
	bool                                         bApplyBoneFilter;                                  // 0x9(0x1)(None)
	uint8                                        Pad_16EE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputBlendPose                       BoneFilter;                                        // 0x10(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               Weight;                                            // 0x20(0x110)(None)
	struct FMovieSceneEvaluationOperand          Operand;                                           // 0x130(0x14)(None)
	uint8                                        Pad_16EF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct ControlRig.RigTransformStackEntry
struct FRigTransformStackEntry
{
public:
	struct FRigElementKey                        Key;                                               // 0x0(0xC)(None)
	enum class ERigTransformStackEntryType       EntryType;                                         // 0xC(0x1)(None)
	enum class ERigTransformType                 TransformType;                                     // 0xD(0x1)(None)
	uint8                                        Pad_16F5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OldTransform;                                      // 0x10(0x60)(None)
	struct FTransform                            NewTransform;                                      // 0x70(0x60)(None)
	bool                                         bAffectChildren;                                   // 0xD0(0x1)(None)
	uint8                                        Pad_16F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Callstack;                                         // 0xD8(0x10)(None)
	uint8                                        Pad_16F7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x2F8 - 0x2F0)
// ScriptStruct ControlRig.RigSingleParentElement
struct FRigSingleParentElement : public FRigTransformElement
{
public:
	uint8                                        Pad_16FC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigElementWeight
struct FRigElementWeight
{
public:
	float                                        Location;                                          // 0x0(0x4)(None)
	float                                        Rotation;                                          // 0x4(0x4)(None)
	float                                        Scale;                                             // 0x8(0x4)(None)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.RigElementParentConstraint
struct FRigElementParentConstraint
{
public:
	uint8                                        Pad_16FD[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x300 - 0x2F8)
// ScriptStruct ControlRig.RigBoneElement
struct FRigBoneElement : public FRigSingleParentElement
{
public:
	enum class ERigBoneType                      BoneType;                                          // 0x2F8(0x1)(None)
	uint8                                        Pad_16FF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x3F0 - 0x3F0)
// ScriptStruct ControlRig.RigNullElement
struct FRigNullElement : public FRigMultiParentElement
{
public:
};

// 0x8 (0xF8 - 0xF0)
// ScriptStruct ControlRig.RigCurveElement
struct FRigCurveElement : public FRigBaseElement
{
public:
	uint8                                        Pad_1700[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ControlRig.RigRigidBodySettings
struct FRigRigidBodySettings
{
public:
	float                                        Mass;                                              // 0x0(0x4)(None)
};

// 0x8 (0x300 - 0x2F8)
// ScriptStruct ControlRig.RigRigidBodyElement
struct FRigRigidBodyElement : public FRigSingleParentElement
{
public:
	struct FRigRigidBodySettings                 Settings;                                          // 0x2F8(0x4)(None)
	uint8                                        Pad_1702[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x310 - 0x2F8)
// ScriptStruct ControlRig.RigReferenceElement
struct FRigReferenceElement : public FRigSingleParentElement
{
public:
	uint8                                        Pad_1703[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x200 (0x200 - 0x0)
// ScriptStruct ControlRig.RigHierarchyCopyPasteContentPerElement
struct FRigHierarchyCopyPasteContentPerElement
{
public:
	struct FRigElementKey                        Key;                                               // 0x0(0xC)(None)
	uint8                                        Pad_1709[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Content;                                           // 0x10(0x10)(AssetRegistrySearchable, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FRigElementKey>                Parents;                                           // 0x20(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FRigElementWeight>             ParentWeights;                                     // 0x30(0x10)(None)
	struct FRigCurrentAndInitialTransform        Pose;                                              // 0x40(0x1C0)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ControlRig.RigHierarchyCopyPasteContent
struct FRigHierarchyCopyPasteContent
{
public:
	TArray<struct FRigHierarchyCopyPasteContentPerElement> Elements;                                          // 0x0(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<enum class ERigElementType>           Types;                                             // 0x10(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class FString>                        Contents;                                          // 0x20(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FTransform>                    LocalTransforms;                                   // 0x30(0x10)(ContainsInstancedReference, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FTransform>                    GlobalTransforms;                                  // 0x40(0x10)(None)
};

// 0x30 (0x120 - 0xF0)
// ScriptStruct ControlRig.ControlRigExecuteContext
struct FControlRigExecuteContext : public FRigVMExecuteContext
{
public:
	uint8                                        Pad_170C[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit
struct FRigUnit : public FRigVMStruct
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_HighlevelBase
struct FRigUnit_HighlevelBase : public FRigUnit
{
public:
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnitMutable
struct FRigUnitMutable : public FRigUnit
{
public:
	uint8                                        Pad_170D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x120)(None)
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_HighlevelBaseMutable
struct FRigUnit_HighlevelBaseMutable : public FRigUnitMutable
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.StructReference
struct FStructReference
{
public:
	uint8                                        Pad_1711[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.ControlRigIOSettings
struct FControlRigIOSettings
{
public:
	bool                                         bUpdatePose;                                       // 0x0(0x1)(None)
	bool                                         bUpdateCurves;                                     // 0x1(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.ControlRigAnimNodeEventName
struct FControlRigAnimNodeEventName
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(None)
};

// 0x218 (0x270 - 0x58)
// ScriptStruct ControlRig.AnimNode_ControlRigBase
struct FAnimNode_ControlRigBase : public FAnimNode_CustomProperty
{
public:
	struct FPoseLink                             Source;                                            // 0x58(0x10)(None)
	bool                                         bResetInputPoseToInitial;                          // 0x68(0x1)(None)
	bool                                         bTransferInputPose;                                // 0x69(0x1)(None)
	bool                                         bTransferInputCurves;                              // 0x6A(0x1)(None)
	bool                                         bTransferPoseInGlobalSpace;                        // 0x6B(0x1)(None)
	uint8                                        Pad_1714[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBoneReference>                InputBonesToTransfer;                              // 0x70(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1715[0x1C0];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UNodeMappingContainer>  NodeMappingContainer;                              // 0x240(0x8)(ZeroConstructor)
	struct FControlRigIOSettings                 InputSettings;                                     // 0x248(0x2)(None)
	struct FControlRigIOSettings                 OutputSettings;                                    // 0x24A(0x2)(None)
	bool                                         bExecute;                                          // 0x24C(0x1)(None)
	uint8                                        Pad_1716[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FControlRigAnimNodeEventName>  EventQueue;                                        // 0x258(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1717[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x200 (0x470 - 0x270)
// ScriptStruct ControlRig.AnimNode_ControlRig
struct FAnimNode_ControlRig : public FAnimNode_ControlRigBase
{
public:
	class UClass*                                ControlRigClass;                                   // 0x270(0x8)(ZeroConstructor)
	class UControlRig*                           ControlRig;                                        // 0x278(0x8)(ZeroConstructor)
	float                                        Alpha;                                             // 0x280(0x4)(None)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x284(0x1)(None)
	uint8                                        bAlphaBoolEnabled : 1;                             // Mask: 0x1, PropSize: 0x10x285(0x1)(None)
	uint8                                        bSetRefPoseFromSkeleton : 1;                       // Mask: 0x2, PropSize: 0x10x285(0x1)(None)
	uint8                                        BitPad_119 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_171A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x288(0x8)(None)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x290(0x48)(ZeroConstructor)
	class FName                                  AlphaCurveName;                                    // 0x2D8(0x8)(None)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x2E0(0x30)(None)
	TMap<class FName, class FName>               InputMapping;                                      // 0x310(0x50)(BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TMap<class FName, class FName>               OutputMapping;                                     // 0x360(0x50)(AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	uint8                                        Pad_171B[0xB0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LODThreshold;                                      // 0x460(0x4)(None)
	uint8                                        Pad_171C[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x278 - 0x270)
// ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
struct FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
{
public:
	TWeakObjectPtr<class UControlRig>            ControlRig;                                        // 0x270(0x8)(ZeroConstructor)
};

// 0xA8 (0x920 - 0x878)
// ScriptStruct ControlRig.ControlRigAnimInstanceProxy
struct FControlRigAnimInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_1720[0xA8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedElement
struct FControlRigComponentMappedElement
{
public:
	struct FComponentReference                   ComponentReference;                                // 0x0(0x28)(ZeroConstructor)
	int32                                        TransformIndex;                                    // 0x28(0x4)(None)
	class FName                                  TransformName;                                     // 0x2C(0x8)(None)
	enum class ERigElementType                   ElementType;                                       // 0x34(0x1)(None)
	uint8                                        Pad_1721[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ElementName;                                       // 0x38(0x8)(None)
	enum class EControlRigComponentMapDirection  Direction;                                         // 0x40(0x1)(None)
	uint8                                        Pad_1722[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Offset;                                            // 0x50(0x60)(None)
	float                                        Weight;                                            // 0xB0(0x4)(None)
	enum class EControlRigComponentSpace         Space;                                             // 0xB4(0x1)(None)
	uint8                                        Pad_1723[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       SceneComponent;                                    // 0xB8(0x8)(None)
	int32                                        ElementIndex;                                      // 0xC0(0x4)(None)
	int32                                        SubIndex;                                          // 0xC4(0x4)(None)
	uint8                                        Pad_1724[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedComponent
struct FControlRigComponentMappedComponent
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(None)
	class FName                                  ElementName;                                       // 0x8(0x8)(None)
	enum class ERigElementType                   ElementType;                                       // 0x10(0x1)(None)
	enum class EControlRigComponentMapDirection  Direction;                                         // 0x11(0x1)(None)
	uint8                                        Pad_1728[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedBone
struct FControlRigComponentMappedBone
{
public:
	class FName                                  Source;                                            // 0x0(0x8)(None)
	class FName                                  Target;                                            // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedCurve
struct FControlRigComponentMappedCurve
{
public:
	class FName                                  Source;                                            // 0x0(0x8)(None)
	class FName                                  Target;                                            // 0x8(0x8)(None)
};

// 0x1D0 (0x1D0 - 0x0)
// ScriptStruct ControlRig.ControlShapeActorCreationParam
struct FControlShapeActorCreationParam
{
public:
	uint8                                        Pad_172A[0x1D0];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ControlRig.ControlRigShapeDefinition
struct FControlRigShapeDefinition
{
public:
	class FName                                  ShapeName;                                         // 0x0(0x8)(None)
	TSoftObjectPtr<class UStaticMesh>            StaticMesh;                                        // 0x8(0x30)(None)
	uint8                                        Pad_172B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x40(0x60)(None)
	uint8                                        Pad_172C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.ControlRigTestDataVariable
struct FControlRigTestDataVariable
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	class FName                                  CPPType;                                           // 0x8(0x8)(None)
	class FString                                Value;                                             // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.CachedRigElement
struct FCachedRigElement
{
public:
	struct FRigElementKey                        Key;                                               // 0x0(0xC)(None)
	uint16                                       Index;                                             // 0xC(0x2)(None)
	uint8                                        Pad_1763[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ContainerVersion;                                  // 0x10(0x4)(None)
	uint8                                        Pad_1765[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct ControlRig.RigPoseElement
struct FRigPoseElement
{
public:
	struct FCachedRigElement                     Index;                                             // 0x0(0x20)(None)
	struct FTransform                            GlobalTransform;                                   // 0x20(0x60)(None)
	struct FTransform                            LocalTransform;                                    // 0x80(0x60)(None)
	float                                        CurveValue;                                        // 0xE0(0x4)(None)
	uint8                                        Pad_1768[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigPose
struct FRigPose
{
public:
	TArray<struct FRigPoseElement>               Elements;                                          // 0x0(0x10)(None)
	int32                                        HierarchyTopologyVersion;                          // 0x10(0x4)(None)
	int32                                        PoseHash;                                          // 0x14(0x4)(None)
	uint8                                        Pad_176D[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.ControlRigTestDataFrame
struct FControlRigTestDataFrame
{
public:
	double                                       AbsoluteTime;                                      // 0x0(0x8)(None)
	double                                       DeltaTime;                                         // 0x8(0x8)(None)
	TArray<struct FControlRigTestDataVariable>   Variables;                                         // 0x10(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigPose                              Pose;                                              // 0x20(0x70)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.ControlRigValidationContext
struct FControlRigValidationContext
{
public:
	uint8                                        Pad_1772[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.CRSimContainer
struct FCRSimContainer
{
public:
	uint8                                        Pad_1776[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeStep;                                          // 0x8(0x4)(None)
	float                                        AccumulatedTime;                                   // 0xC(0x4)(None)
	float                                        TimeLeftForStep;                                   // 0x10(0x4)(None)
	uint8                                        Pad_1777[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.CRSimLinearSpring
struct FCRSimLinearSpring
{
public:
	int32                                        SubjectA;                                          // 0x0(0x4)(None)
	int32                                        SubjectB;                                          // 0x4(0x4)(None)
	float                                        Coefficient;                                       // 0x8(0x4)(None)
	float                                        Equilibrium;                                       // 0xC(0x4)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.CRSimPointConstraint
struct FCRSimPointConstraint
{
public:
	enum class ECRSimConstraintType              Type;                                              // 0x0(0x1)(None)
	uint8                                        Pad_177C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SubjectA;                                          // 0x4(0x4)(None)
	int32                                        SubjectB;                                          // 0x8(0x4)(None)
	uint8                                        Pad_177E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DataA;                                             // 0x10(0x18)(None)
	struct FVector                               DataB;                                             // 0x28(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.CRSimPointForce
struct FCRSimPointForce
{
public:
	enum class ECRSimPointForceType              ForceType;                                         // 0x0(0x1)(None)
	uint8                                        Pad_1782[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Vector;                                            // 0x8(0x18)(None)
	float                                        Coefficient;                                       // 0x20(0x4)(None)
	bool                                         bNormalize;                                        // 0x24(0x1)(None)
	uint8                                        Pad_1784[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.CRSimSoftCollision
struct FCRSimSoftCollision
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(None)
	enum class ECRSimSoftCollisionType           ShapeType;                                         // 0x60(0x1)(None)
	uint8                                        Pad_1785[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumDistance;                                   // 0x64(0x4)(None)
	float                                        MaximumDistance;                                   // 0x68(0x4)(None)
	enum class ERigVMAnimEasingType              FalloffType;                                       // 0x6C(0x1)(None)
	uint8                                        Pad_1787[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Coefficient;                                       // 0x70(0x4)(None)
	bool                                         bInverted;                                         // 0x74(0x1)(None)
	uint8                                        Pad_1789[0xB];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x78 - 0x18)
// ScriptStruct ControlRig.CRSimPointContainer
struct FCRSimPointContainer : public FCRSimContainer
{
public:
	TArray<struct FRigVMSimPoint>                Points;                                            // 0x18(0x10)(AutoWeak, ContainsInstancedReference, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FCRSimLinearSpring>            Springs;                                           // 0x28(0x10)(SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FCRSimPointForce>              Forces;                                            // 0x38(0x10)(AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FCRSimSoftCollision>           CollisionVolumes;                                  // 0x48(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FCRSimPointConstraint>         Constraints;                                       // 0x58(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FRigVMSimPoint>                PreviousStep;                                      // 0x68(0x10)(None)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct ControlRig.ConstraintNodeData
struct FConstraintNodeData
{
public:
	struct FTransform                            RelativeParent;                                    // 0x0(0x60)(None)
	struct FConstraintOffset                     ConstraintOffset;                                  // 0x60(0xC0)(None)
	class FName                                  LinkedNode;                                        // 0x120(0x8)(None)
	TArray<struct FTransformConstraint>          Constraints;                                       // 0x128(0x10)(None)
	uint8                                        Pad_1793[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x88 - 0x78)
// ScriptStruct ControlRig.AnimationHierarchy
struct FAnimationHierarchy : public FNodeHierarchyWithUserData
{
public:
	TArray<struct FConstraintNodeData>           UserData;                                          // 0x78(0x10)(AssetRegistrySearchable, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.RigElement
struct FRigElement
{
public:
	uint8                                        Pad_1796[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x8(0x8)(None)
	int32                                        Index;                                             // 0x10(0x4)(None)
	uint8                                        Pad_1797[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x158 (0x170 - 0x18)
// ScriptStruct ControlRig.RigBone
struct FRigBone : public FRigElement
{
public:
	class FName                                  ParentName;                                        // 0x18(0x8)(None)
	int32                                        ParentIndex;                                       // 0x20(0x4)(None)
	uint8                                        Pad_179D[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialTransform;                                  // 0x30(0x60)(None)
	struct FTransform                            GlobalTransform;                                   // 0x90(0x60)(None)
	struct FTransform                            LocalTransform;                                    // 0xF0(0x60)(None)
	TArray<int32>                                Dependents;                                        // 0x150(0x10)(None)
	enum class ERigBoneType                      Type;                                              // 0x160(0x1)(None)
	uint8                                        Pad_17A3[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigBoneHierarchy
struct FRigBoneHierarchy
{
public:
	TArray<struct FRigBone>                      Bones;                                             // 0x0(0x10)(None)
};

// 0x348 (0x360 - 0x18)
// ScriptStruct ControlRig.RigControl
struct FRigControl : public FRigElement
{
public:
	enum class ERigControlType                   ControlType;                                       // 0x18(0x1)(None)
	uint8                                        Pad_17A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DisplayName;                                       // 0x1C(0x8)(None)
	class FName                                  ParentName;                                        // 0x24(0x8)(None)
	int32                                        ParentIndex;                                       // 0x2C(0x4)(None)
	class FName                                  SpaceName;                                         // 0x30(0x8)(None)
	int32                                        SpaceIndex;                                        // 0x38(0x4)(None)
	uint8                                        Pad_17A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OffsetTransform;                                   // 0x40(0x60)(None)
	struct FRigControlValue                      InitialValue;                                      // 0xA0(0x84)(None)
	struct FRigControlValue                      Value;                                             // 0x124(0x84)(None)
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x1A8(0x1)(None)
	bool                                         bIsCurve;                                          // 0x1A9(0x1)(None)
	bool                                         bAnimatable;                                       // 0x1AA(0x1)(None)
	bool                                         bLimitTranslation;                                 // 0x1AB(0x1)(None)
	bool                                         bLimitRotation;                                    // 0x1AC(0x1)(None)
	bool                                         bLimitScale;                                       // 0x1AD(0x1)(None)
	bool                                         bDrawLimits;                                       // 0x1AE(0x1)(None)
	uint8                                        Pad_17A7[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlValue                      MinimumValue;                                      // 0x1B0(0x84)(None)
	struct FRigControlValue                      MaximumValue;                                      // 0x234(0x84)(None)
	bool                                         bGizmoEnabled;                                     // 0x2B8(0x1)(None)
	bool                                         bGizmoVisible;                                     // 0x2B9(0x1)(None)
	uint8                                        Pad_17A8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GizmoName;                                         // 0x2BC(0x8)(None)
	uint8                                        Pad_17A9[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            GizmoTransform;                                    // 0x2D0(0x60)(None)
	struct FLinearColor                          GizmoColor;                                        // 0x330(0x10)(None)
	TArray<int32>                                Dependents;                                        // 0x340(0x10)(None)
	bool                                         bIsTransientControl;                               // 0x350(0x1)(None)
	uint8                                        Pad_17AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnum*                                 ControlEnum;                                       // 0x358(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigControlHierarchy
struct FRigControlHierarchy
{
public:
	TArray<struct FRigControl>                   Controls;                                          // 0x0(0x10)(None)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct ControlRig.RigCurve
struct FRigCurve : public FRigElement
{
public:
	float                                        Value;                                             // 0x18(0x4)(None)
	uint8                                        Pad_17AC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigCurveContainer
struct FRigCurveContainer
{
public:
	TArray<struct FRigCurve>                     Curves;                                            // 0x0(0x10)(None)
};

// 0xD8 (0xF0 - 0x18)
// ScriptStruct ControlRig.RigSpace
struct FRigSpace : public FRigElement
{
public:
	enum class ERigSpaceType                     SpaceType;                                         // 0x18(0x1)(None)
	uint8                                        Pad_17B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ParentName;                                        // 0x1C(0x8)(None)
	int32                                        ParentIndex;                                       // 0x24(0x4)(None)
	uint8                                        Pad_17B2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialTransform;                                  // 0x30(0x60)(None)
	struct FTransform                            LocalTransform;                                    // 0x90(0x60)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigSpaceHierarchy
struct FRigSpaceHierarchy
{
public:
	TArray<struct FRigSpace>                     Spaces;                                            // 0x0(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigHierarchyContainer
struct FRigHierarchyContainer
{
public:
	struct FRigBoneHierarchy                     BoneHierarchy;                                     // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigSpaceHierarchy                    SpaceHierarchy;                                    // 0x10(0x10)(SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigControlHierarchy                  ControlHierarchy;                                  // 0x20(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigCurveContainer                    CurveContainer;                                    // 0x30(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct ControlRig.RigHierarchyRef
struct FRigHierarchyRef
{
public:
	uint8                                        Pad_17B7[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.RigControlModifiedContext
struct FRigControlModifiedContext
{
public:
	uint8                                        Pad_17B9[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigElementKeyCollection
struct FRigElementKeyCollection
{
public:
	TArray<struct FRigElementKey>                Keys;                                              // 0x0(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigEventContext
struct FRigEventContext
{
public:
	uint8                                        Pad_17BA[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigBaseMetadata
struct FRigBaseMetadata
{
public:
	uint8                                        Pad_17BC[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x10(0x8)(None)
	enum class ERigMetadataType                  Type;                                              // 0x18(0x1)(None)
	uint8                                        Pad_17BE[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ControlRig.RigBoolMetadata
struct FRigBoolMetadata : public FRigBaseMetadata
{
public:
	bool                                         Value;                                             // 0x28(0x1)(None)
	uint8                                        Pad_17BF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigBoolArrayMetadata
struct FRigBoolArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<bool>                                 Value;                                             // 0x28(0x10)(None)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ControlRig.RigFloatMetadata
struct FRigFloatMetadata : public FRigBaseMetadata
{
public:
	float                                        Value;                                             // 0x28(0x4)(None)
	uint8                                        Pad_17C4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigFloatArrayMetadata
struct FRigFloatArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<float>                                Value;                                             // 0x28(0x10)(None)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ControlRig.RigInt32Metadata
struct FRigInt32Metadata : public FRigBaseMetadata
{
public:
	int32                                        Value;                                             // 0x28(0x4)(None)
	uint8                                        Pad_17C8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigInt32ArrayMetadata
struct FRigInt32ArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<int32>                                Value;                                             // 0x28(0x10)(None)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ControlRig.RigNameMetadata
struct FRigNameMetadata : public FRigBaseMetadata
{
public:
	class FName                                  Value;                                             // 0x28(0x8)(None)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigNameArrayMetadata
struct FRigNameArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<class FName>                          Value;                                             // 0x28(0x10)(None)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct ControlRig.RigVectorMetadata
struct FRigVectorMetadata : public FRigBaseMetadata
{
public:
	struct FVector                               Value;                                             // 0x28(0x18)(None)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigVectorArrayMetadata
struct FRigVectorArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FVector>                       Value;                                             // 0x28(0x10)(None)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct ControlRig.RigRotatorMetadata
struct FRigRotatorMetadata : public FRigBaseMetadata
{
public:
	struct FRotator                              Value;                                             // 0x28(0x18)(None)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigRotatorArrayMetadata
struct FRigRotatorArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FRotator>                      Value;                                             // 0x28(0x10)(None)
};

// 0x28 (0x50 - 0x28)
// ScriptStruct ControlRig.RigQuatMetadata
struct FRigQuatMetadata : public FRigBaseMetadata
{
public:
	uint8                                        Pad_17CC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x30(0x20)(None)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigQuatArrayMetadata
struct FRigQuatArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FQuat>                         Value;                                             // 0x28(0x10)(None)
};

// 0x68 (0x90 - 0x28)
// ScriptStruct ControlRig.RigTransformMetadata
struct FRigTransformMetadata : public FRigBaseMetadata
{
public:
	uint8                                        Pad_17CD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x30(0x60)(None)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigTransformArrayMetadata
struct FRigTransformArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FTransform>                    Value;                                             // 0x28(0x10)(None)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigLinearColorMetadata
struct FRigLinearColorMetadata : public FRigBaseMetadata
{
public:
	struct FLinearColor                          Value;                                             // 0x28(0x10)(None)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigLinearColorArrayMetadata
struct FRigLinearColorArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FLinearColor>                  Value;                                             // 0x28(0x10)(None)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigElementKeyMetadata
struct FRigElementKeyMetadata : public FRigBaseMetadata
{
public:
	struct FRigElementKey                        Value;                                             // 0x28(0xC)(None)
	uint8                                        Pad_17CF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigElementKeyArrayMetadata
struct FRigElementKeyArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FRigElementKey>                Value;                                             // 0x28(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigInfluenceEntryModifier
struct FRigInfluenceEntryModifier
{
public:
	TArray<struct FRigElementKey>                AffectedList;                                      // 0x0(0x10)(None)
};

// 0x20 (0x30 - 0x10)
// ScriptStruct ControlRig.AnimNode_ControlRigInputPose
struct FAnimNode_ControlRigInputPose : public FAnimNode_Base
{
public:
	struct FPoseLink                             InputPose;                                         // 0x10(0x10)(None)
	uint8                                        Pad_17D0[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0x920 - 0x878)
// ScriptStruct ControlRig.ControlRigLayerInstanceProxy
struct FControlRigLayerInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_17D1[0xA8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.ControlRigSequenceObjectReference
struct FControlRigSequenceObjectReference
{
public:
	class UClass*                                ControlRigClass;                                   // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.ControlRigSequenceObjectReferences
struct FControlRigSequenceObjectReferences
{
public:
	TArray<struct FControlRigSequenceObjectReference> Array;                                             // 0x0(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
struct FControlRigSequenceObjectReferenceMap
{
public:
	TArray<struct FGuid>                         BindingIds;                                        // 0x0(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FControlRigSequenceObjectReferences> References;                                        // 0x10(0x10)(None)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct ControlRig.EnumParameterNameAndCurve
struct FEnumParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(None)
	struct FMovieSceneByteChannel                ParameterCurve;                                    // 0x8(0x108)(None)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct ControlRig.IntegerParameterNameAndCurve
struct FIntegerParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(None)
	struct FMovieSceneIntegerChannel             ParameterCurve;                                    // 0x8(0x100)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.MovieSceneControlRigSpaceBaseKey
struct FMovieSceneControlRigSpaceBaseKey
{
public:
	enum class EMovieSceneControlRigSpaceType    SpaceType;                                         // 0x0(0x1)(None)
	uint8                                        Pad_17D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        ControlRigElement;                                 // 0x4(0xC)(None)
};

// 0xC0 (0x110 - 0x50)
// ScriptStruct ControlRig.MovieSceneControlRigSpaceChannel
struct FMovieSceneControlRigSpaceChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  KeyTimes;                                          // 0x50(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneControlRigSpaceBaseKey> KeyValues;                                         // 0x60(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x70(0x88)(None)
	uint8                                        Pad_17D6[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x118 (0x118 - 0x0)
// ScriptStruct ControlRig.SpaceControlNameAndChannel
struct FSpaceControlNameAndChannel
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(None)
	struct FMovieSceneControlRigSpaceChannel     SpaceCurve;                                        // 0x8(0x110)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.ChannelMapInfo
struct FChannelMapInfo
{
public:
	int32                                        ControlIndex;                                      // 0x0(0x4)(None)
	int32                                        TotalChannelIndex;                                 // 0x4(0x4)(None)
	int32                                        ChannelIndex;                                      // 0x8(0x4)(None)
	int32                                        ParentControlIndex;                                // 0xC(0x4)(None)
	class FName                                  ChannelTypeName;                                   // 0x10(0x8)(None)
	bool                                         bDoesHaveSpace;                                    // 0x18(0x1)(None)
	uint8                                        Pad_17D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SpaceChannelIndex;                                 // 0x1C(0x4)(None)
	int32                                        MaskIndex;                                         // 0x20(0x4)(None)
	int32                                        CategoryIndex;                                     // 0x24(0x4)(None)
	uint8                                        Pad_17D8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint32>                               ConstraintsIndex;                                  // 0x30(0x10)(None)
};

// 0x40 (0xC0 - 0x80)
// ScriptStruct ControlRig.MovieSceneControlRigParameterTemplate
struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate
{
public:
	TArray<struct FEnumParameterNameAndCurve>    Enums;                                             // 0x80(0x10)(ZeroConstructor, AutoWeak, AssetRegistrySearchable, AdvancedDisplay, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FIntegerParameterNameAndCurve> Integers;                                          // 0x90(0x10)(SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FSpaceControlNameAndChannel>   Spaces;                                            // 0xA0(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FConstraintAndActiveChannel>   Constraints;                                       // 0xB0(0x10)(ZeroConstructor, AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ControlRig.ControlRigSettingsPerPinBool
struct FControlRigSettingsPerPinBool
{
public:
	TMap<class FString, bool>                    Values;                                            // 0x0(0x50)(None)
};

// 0x230 (0x230 - 0x0)
// ScriptStruct ControlRig.RigControlCopy
struct FRigControlCopy
{
public:
	uint8                                        Pad_17D9[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x10(0x8)(None)
	enum class ERigControlType                   ControlType;                                       // 0x18(0x1)(None)
	uint8                                        Pad_17DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlValue                      Value;                                             // 0x1C(0x84)(None)
	struct FRigElementKey                        ParentKey;                                         // 0xA0(0xC)(None)
	uint8                                        Pad_17DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OffsetTransform;                                   // 0xB0(0x60)(None)
	struct FTransform                            ParentTransform;                                   // 0x110(0x60)(None)
	struct FTransform                            LocalTransform;                                    // 0x170(0x60)(None)
	struct FTransform                            GlobalTransform;                                   // 0x1D0(0x60)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.ControlRigControlPose
struct FControlRigControlPose
{
public:
	TArray<struct FRigControlCopy>               CopyOfControls;                                    // 0x0(0x10)(None)
	uint8                                        Pad_17DC[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigDispatchFactory
struct FRigDispatchFactory : public FRigVMDispatchFactory
{
public:
};

// 0x30 (0x48 - 0x18)
// ScriptStruct ControlRig.RigDispatch_AnimAttributeBase
struct FRigDispatch_AnimAttributeBase : public FRigDispatchFactory
{
public:
	uint8                                        Pad_17DD[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x48 - 0x48)
// ScriptStruct ControlRig.RigDispatch_GetAnimAttribute
struct FRigDispatch_GetAnimAttribute : public FRigDispatch_AnimAttributeBase
{
public:
};

// 0x0 (0x48 - 0x48)
// ScriptStruct ControlRig.RigDispatch_SetAnimAttribute
struct FRigDispatch_SetAnimAttribute : public FRigDispatch_AnimAttributeBase
{
public:
};

// 0x120 (0x250 - 0x130)
// ScriptStruct ControlRig.RigUnit_PrimalHitResultNotifyActor
struct FRigUnit_PrimalHitResultNotifyActor : public FRigUnitMutable
{
public:
	class FName                                  NotifyName;                                        // 0x130(0x8)(None)
	class FName                                  CustomTag;                                         // 0x138(0x8)(None)
	struct FHitResult                            HitResult;                                         // 0x140(0xF0)(None)
	struct FVector                               Velocity;                                          // 0x230(0x18)(None)
	uint8                                        Pad_17DE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x168 - 0x8)
// ScriptStruct ControlRig.RigUnit_SphereTraceWorld
struct FRigUnit_SphereTraceWorld : public FRigUnit
{
public:
	struct FVector                               Start;                                             // 0x8(0x18)(None)
	struct FVector                               End;                                               // 0x20(0x18)(None)
	enum class ECollisionChannel                 Channel;                                           // 0x38(0x1)(None)
	uint8                                        Pad_17DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Radius;                                            // 0x3C(0x4)(None)
	bool                                         bHit;                                              // 0x40(0x1)(None)
	uint8                                        Pad_17E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitLocation;                                       // 0x48(0x18)(None)
	struct FVector                               HitNormal;                                         // 0x60(0x18)(None)
	struct FHitResult                            WorldSpaceHitResult;                               // 0x78(0xF0)(None)
};

// 0x160 (0x168 - 0x8)
// ScriptStruct ControlRig.RigUnit_SphereTraceByTraceChannel
struct FRigUnit_SphereTraceByTraceChannel : public FRigUnit
{
public:
	struct FVector                               Start;                                             // 0x8(0x18)(None)
	struct FVector                               End;                                               // 0x20(0x18)(None)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x38(0x1)(None)
	uint8                                        Pad_17E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Radius;                                            // 0x3C(0x4)(None)
	bool                                         bHit;                                              // 0x40(0x1)(None)
	uint8                                        Pad_17E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitLocation;                                       // 0x48(0x18)(None)
	struct FVector                               HitNormal;                                         // 0x60(0x18)(None)
	struct FHitResult                            WorldSpaceHitResult;                               // 0x78(0xF0)(None)
};

// 0x168 (0x170 - 0x8)
// ScriptStruct ControlRig.RigUnit_SphereTraceByObjectTypes
struct FRigUnit_SphereTraceByObjectTypes : public FRigUnit
{
public:
	struct FVector                               Start;                                             // 0x8(0x18)(None)
	struct FVector                               End;                                               // 0x20(0x18)(None)
	TArray<enum class EObjectTypeQuery>          ObjectTypes;                                       // 0x38(0x10)(None)
	float                                        Radius;                                            // 0x48(0x4)(None)
	bool                                         bHit;                                              // 0x4C(0x1)(None)
	uint8                                        Pad_17E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitLocation;                                       // 0x50(0x18)(None)
	struct FVector                               HitNormal;                                         // 0x68(0x18)(None)
	struct FHitResult                            WorldSpaceHitResult;                               // 0x80(0xF0)(None)
};

// 0x178 (0x180 - 0x8)
// ScriptStruct ControlRig.RigUnit_Control
struct FRigUnit_Control : public FRigUnit
{
public:
	struct FEulerTransform                       Transform;                                         // 0x8(0x48)(None)
	struct FTransform                            Base;                                              // 0x50(0x60)(None)
	struct FTransform                            InitTransform;                                     // 0xB0(0x60)(None)
	struct FTransform                            Result;                                            // 0x110(0x60)(None)
	struct FTransformFilter                      Filter;                                            // 0x170(0x9)(None)
	bool                                         bIsInitialized;                                    // 0x179(0x1)(None)
	uint8                                        Pad_17E5[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x1E0 - 0x180)
// ScriptStruct ControlRig.RigUnit_Control_StaticMesh
struct FRigUnit_Control_StaticMesh : public FRigUnit_Control
{
public:
	struct FTransform                            MeshTransform;                                     // 0x180(0x60)(None)
};

// 0x100 (0x200 - 0x100)
// ScriptStruct ControlRig.RigUnit_DebugBezier
struct FRigUnit_DebugBezier : public FRigVMFunction_DebugBaseMutable
{
public:
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x100(0x60)(None)
	float                                        MinimumU;                                          // 0x160(0x4)(None)
	float                                        MaximumU;                                          // 0x164(0x4)(None)
	struct FLinearColor                          Color;                                             // 0x168(0x10)(None)
	float                                        Thickness;                                         // 0x178(0x4)(None)
	int32                                        Detail;                                            // 0x17C(0x4)(None)
	class FName                                  Space;                                             // 0x180(0x8)(None)
	uint8                                        Pad_17E6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x190(0x60)(None)
	bool                                         bEnabled;                                          // 0x1F0(0x1)(None)
	uint8                                        Pad_17E7[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x200 - 0x100)
// ScriptStruct ControlRig.RigUnit_DebugBezierItemSpace
struct FRigUnit_DebugBezierItemSpace : public FRigVMFunction_DebugBaseMutable
{
public:
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x100(0x60)(None)
	float                                        MinimumU;                                          // 0x160(0x4)(None)
	float                                        MaximumU;                                          // 0x164(0x4)(None)
	struct FLinearColor                          Color;                                             // 0x168(0x10)(None)
	float                                        Thickness;                                         // 0x178(0x4)(None)
	int32                                        Detail;                                            // 0x17C(0x4)(None)
	struct FRigElementKey                        Space;                                             // 0x180(0xC)(None)
	uint8                                        Pad_17E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x190(0x60)(None)
	bool                                         bEnabled;                                          // 0x1F0(0x1)(None)
	uint8                                        Pad_17E9[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1B8 (0x1C0 - 0x8)
// ScriptStruct ControlRig.RigUnit_DebugHierarchy
struct FRigUnit_DebugHierarchy : public FRigVMFunction_DebugBase
{
public:
	uint8                                        Pad_17EC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x120)(None)
	float                                        Scale;                                             // 0x130(0x4)(None)
	struct FLinearColor                          Color;                                             // 0x134(0x10)(None)
	float                                        Thickness;                                         // 0x144(0x4)(None)
	uint8                                        Pad_17EE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x150(0x60)(None)
	bool                                         bEnabled;                                          // 0x1B0(0x1)(None)
	uint8                                        Pad_17EF[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x228 (0x230 - 0x8)
// ScriptStruct ControlRig.RigUnit_DebugPose
struct FRigUnit_DebugPose : public FRigVMFunction_DebugBase
{
public:
	uint8                                        Pad_17F0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x120)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigPose                              Pose;                                              // 0x130(0x70)(None)
	float                                        Scale;                                             // 0x1A0(0x4)(None)
	struct FLinearColor                          Color;                                             // 0x1A4(0x10)(None)
	float                                        Thickness;                                         // 0x1B4(0x4)(None)
	uint8                                        Pad_17F1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x1C0(0x60)(None)
	bool                                         bEnabled;                                          // 0x220(0x1)(None)
	uint8                                        Pad_17F2[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x100 - 0x100)
// ScriptStruct ControlRig.RigUnit_StartProfilingTimer
struct FRigUnit_StartProfilingTimer : public FRigVMFunction_DebugBaseMutable
{
public:
};

// 0x30 (0x130 - 0x100)
// ScriptStruct ControlRig.RigUnit_EndProfilingTimer
struct FRigUnit_EndProfilingTimer : public FRigVMFunction_DebugBaseMutable
{
public:
	int32                                        NumberOfMeasurements;                              // 0x100(0x4)(None)
	uint8                                        Pad_17F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Prefix;                                            // 0x108(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        AccumulatedTime;                                   // 0x118(0x4)(None)
	int32                                        MeasurementsLeft;                                  // 0x11C(0x4)(None)
	bool                                         bIsInitialized;                                    // 0x120(0x1)(None)
	uint8                                        Pad_17F4[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertTransform
struct FRigUnit_ConvertTransform : public FRigUnit
{
public:
	uint8                                        Pad_17F5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Input;                                             // 0x10(0x60)(None)
	struct FEulerTransform                       Result;                                            // 0x70(0x48)(None)
	uint8                                        Pad_17F6[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
struct FRigUnit_ConvertEulerTransform : public FRigUnit
{
public:
	struct FEulerTransform                       Input;                                             // 0x8(0x48)(None)
	struct FTransform                            Result;                                            // 0x50(0x60)(None)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertRotation
struct FRigUnit_ConvertRotation : public FRigUnit
{
public:
	struct FRotator                              Input;                                             // 0x8(0x18)(None)
	struct FQuat                                 Result;                                            // 0x20(0x20)(None)
};

// 0x0 (0x40 - 0x40)
// ScriptStruct ControlRig.RigUnit_ConvertVectorRotation
struct FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertQuaternion
struct FRigUnit_ConvertQuaternion : public FRigUnit
{
public:
	uint8                                        Pad_17FA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Input;                                             // 0x10(0x20)(None)
	struct FRotator                              Result;                                            // 0x30(0x18)(None)
	uint8                                        Pad_17FB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
struct FRigUnit_ConvertVectorToRotation : public FRigUnit
{
public:
	struct FVector                               Input;                                             // 0x8(0x18)(None)
	struct FRotator                              Result;                                            // 0x20(0x18)(None)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
struct FRigUnit_ConvertVectorToQuaternion : public FRigUnit
{
public:
	struct FVector                               Input;                                             // 0x8(0x18)(None)
	struct FQuat                                 Result;                                            // 0x20(0x20)(None)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
struct FRigUnit_ConvertRotationToVector : public FRigUnit
{
public:
	struct FRotator                              Input;                                             // 0x8(0x18)(None)
	struct FVector                               Result;                                            // 0x20(0x18)(None)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
struct FRigUnit_ConvertQuaternionToVector : public FRigUnit
{
public:
	uint8                                        Pad_17FC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Input;                                             // 0x10(0x20)(None)
	struct FVector                               Result;                                            // 0x30(0x18)(None)
	uint8                                        Pad_17FD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
struct FRigUnit_ToSwingAndTwist : public FRigUnit
{
public:
	uint8                                        Pad_17FE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Input;                                             // 0x10(0x20)(None)
	struct FVector                               TwistAxis;                                         // 0x30(0x18)(None)
	uint8                                        Pad_17FF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Swing;                                             // 0x50(0x20)(None)
	struct FQuat                                 Twist;                                             // 0x70(0x20)(None)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryFloatOp
struct FRigUnit_BinaryFloatOp : public FRigUnit
{
public:
	float                                        Argument0;                                         // 0x8(0x4)(None)
	float                                        Argument1;                                         // 0xC(0x4)(None)
	float                                        Result;                                            // 0x10(0x4)(None)
	uint8                                        Pad_1800[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
struct FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Add_FloatFloat
struct FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
struct FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
struct FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_Clamp_Float
struct FRigUnit_Clamp_Float : public FRigUnit
{
public:
	float                                        Value;                                             // 0x8(0x4)(None)
	float                                        Min;                                               // 0xC(0x4)(None)
	float                                        Max;                                               // 0x10(0x4)(None)
	float                                        Result;                                            // 0x14(0x4)(None)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MapRange_Float
struct FRigUnit_MapRange_Float : public FRigUnit
{
public:
	float                                        Value;                                             // 0x8(0x4)(None)
	float                                        MinIn;                                             // 0xC(0x4)(None)
	float                                        MaxIn;                                             // 0x10(0x4)(None)
	float                                        MinOut;                                            // 0x14(0x4)(None)
	float                                        MaxOut;                                            // 0x18(0x4)(None)
	float                                        Result;                                            // 0x1C(0x4)(None)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
struct FRigUnit_BinaryQuaternionOp : public FRigUnit
{
public:
	uint8                                        Pad_1801[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Argument0;                                         // 0x10(0x20)(None)
	struct FQuat                                 Argument1;                                         // 0x30(0x20)(None)
	struct FQuat                                 Result;                                            // 0x50(0x20)(None)
};

// 0x0 (0x70 - 0x70)
// ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
struct FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
struct FRigUnit_UnaryQuaternionOp : public FRigUnit
{
public:
	uint8                                        Pad_1802[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Argument;                                          // 0x10(0x20)(None)
	struct FQuat                                 Result;                                            // 0x30(0x20)(None)
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_InverseQuaterion
struct FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
struct FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
{
public:
	uint8                                        Pad_1803[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Argument;                                          // 0x10(0x20)(None)
	struct FVector                               Axis;                                              // 0x30(0x18)(None)
	float                                        Angle;                                             // 0x48(0x4)(None)
	uint8                                        Pad_1804[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
struct FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
{
public:
	struct FVector                               Axis;                                              // 0x8(0x18)(None)
	float                                        Angle;                                             // 0x20(0x4)(None)
	uint8                                        Pad_1805[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Result;                                            // 0x30(0x20)(None)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_QuaternionToAngle
struct FRigUnit_QuaternionToAngle : public FRigUnit
{
public:
	struct FVector                               Axis;                                              // 0x8(0x18)(None)
	struct FQuat                                 Argument;                                          // 0x20(0x20)(None)
	float                                        Angle;                                             // 0x40(0x4)(None)
	uint8                                        Pad_1806[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryTransformOp
struct FRigUnit_BinaryTransformOp : public FRigUnit
{
public:
	uint8                                        Pad_180B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Argument0;                                         // 0x10(0x60)(None)
	struct FTransform                            Argument1;                                         // 0x70(0x60)(None)
	struct FTransform                            Result;                                            // 0xD0(0x60)(None)
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_MultiplyTransform
struct FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp
{
public:
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_GetRelativeTransform
struct FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryVectorOp
struct FRigUnit_BinaryVectorOp : public FRigUnit
{
public:
	struct FVector                               Argument0;                                         // 0x8(0x18)(None)
	struct FVector                               Argument1;                                         // 0x20(0x18)(None)
	struct FVector                               Result;                                            // 0x38(0x18)(None)
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
struct FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_Add_VectorVector
struct FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
struct FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_Divide_VectorVector
struct FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_Distance_VectorVector
struct FRigUnit_Distance_VectorVector : public FRigUnit
{
public:
	struct FVector                               Argument0;                                         // 0x8(0x18)(None)
	struct FVector                               Argument1;                                         // 0x20(0x18)(None)
	float                                        Result;                                            // 0x38(0x4)(None)
	uint8                                        Pad_180C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorBezierFourPoint
struct FRigUnit_MathVectorBezierFourPoint : public FRigVMFunction_MathVectorBase
{
public:
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x8(0x60)(None)
	float                                        T;                                                 // 0x68(0x4)(None)
	uint8                                        Pad_180D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x70(0x18)(None)
	struct FVector                               Tangent;                                           // 0x88(0x18)(None)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorMakeBezierFourPoint
struct FRigUnit_MathVectorMakeBezierFourPoint : public FRigVMFunction_MathVectorBase
{
public:
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x8(0x60)(None)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.AimTarget
struct FAimTarget
{
public:
	float                                        Weight;                                            // 0x0(0x4)(None)
	uint8                                        Pad_180E[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	struct FVector                               AlignVector;                                       // 0x70(0x18)(None)
	uint8                                        Pad_180F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimConstraint_WorkData
struct FRigUnit_AimConstraint_WorkData
{
public:
	TArray<struct FConstraintData>               ConstraintData;                                    // 0x0(0x10)(None)
};

// 0x70 (0x1A0 - 0x130)
// ScriptStruct ControlRig.RigUnit_AimConstraint
struct FRigUnit_AimConstraint : public FRigUnitMutable
{
public:
	class FName                                  Joint;                                             // 0x130(0x8)(None)
	enum class EAimMode                          AimMode;                                           // 0x138(0x1)(None)
	enum class EAimMode                          UpMode;                                            // 0x139(0x1)(None)
	uint8                                        Pad_1810[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AimVector;                                         // 0x140(0x18)(None)
	struct FVector                               UpVector;                                          // 0x158(0x18)(None)
	TArray<struct FAimTarget>                    AimTargets;                                        // 0x170(0x10)(AutoWeak, ContainsInstancedReference, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FAimTarget>                    UpTargets;                                         // 0x180(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigUnit_AimConstraint_WorkData       WorkData;                                          // 0x190(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0xF0 (0x220 - 0x130)
// ScriptStruct ControlRig.RigUnit_ApplyFK
struct FRigUnit_ApplyFK : public FRigUnitMutable
{
public:
	class FName                                  Joint;                                             // 0x130(0x8)(None)
	uint8                                        Pad_1811[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x140(0x60)(None)
	struct FTransformFilter                      Filter;                                            // 0x1A0(0x9)(None)
	enum class EApplyTransformMode               ApplyTransformMode;                                // 0x1A9(0x1)(None)
	enum class ETransformSpaceMode               ApplyTransformSpace;                               // 0x1AA(0x1)(None)
	uint8                                        Pad_1812[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BaseTransform;                                     // 0x1B0(0x60)(None)
	class FName                                  BaseJoint;                                         // 0x210(0x8)(None)
	uint8                                        Pad_1813[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.BlendTarget
struct FBlendTarget
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(None)
	float                                        Weight;                                            // 0x60(0x4)(None)
	uint8                                        Pad_1814[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct ControlRig.RigUnit_BlendTransform
struct FRigUnit_BlendTransform : public FRigUnit
{
public:
	uint8                                        Pad_1815[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Source;                                            // 0x10(0x60)(None)
	TArray<struct FBlendTarget>                  Targets;                                           // 0x70(0x10)(None)
	struct FTransform                            Result;                                            // 0x80(0x60)(None)
};

// 0xE0 (0x210 - 0x130)
// ScriptStruct ControlRig.RigUnit_GetJointTransform
struct FRigUnit_GetJointTransform : public FRigUnitMutable
{
public:
	class FName                                  Joint;                                             // 0x130(0x8)(None)
	enum class ETransformGetterType              Type;                                              // 0x138(0x1)(None)
	enum class ETransformSpaceMode               TransformSpace;                                    // 0x139(0x1)(None)
	uint8                                        Pad_1816[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BaseTransform;                                     // 0x140(0x60)(None)
	class FName                                  BaseJoint;                                         // 0x1A0(0x8)(None)
	uint8                                        Pad_1817[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Output;                                            // 0x1B0(0x60)(None)
};

// 0x310 (0x440 - 0x130)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
struct FRigUnit_TwoBoneIKFK : public FRigUnitMutable
{
public:
	class FName                                  StartJoint;                                        // 0x130(0x8)(None)
	class FName                                  EndJoint;                                          // 0x138(0x8)(None)
	struct FVector                               PoleTarget;                                        // 0x140(0x18)(None)
	float                                        Spin;                                              // 0x158(0x4)(None)
	uint8                                        Pad_1818[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            EndEffector;                                       // 0x160(0x60)(None)
	float                                        IKBlend;                                           // 0x1C0(0x4)(None)
	uint8                                        Pad_1819[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            StartJointFKTransform;                             // 0x1D0(0x60)(None)
	struct FTransform                            MidJointFKTransform;                               // 0x230(0x60)(None)
	struct FTransform                            EndJointFKTransform;                               // 0x290(0x60)(None)
	float                                        PreviousFKIKBlend;                                 // 0x2F0(0x4)(None)
	uint8                                        Pad_181A[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            StartJointIKTransform;                             // 0x300(0x60)(None)
	struct FTransform                            MidJointIKTransform;                               // 0x360(0x60)(None)
	struct FTransform                            EndJointIKTransform;                               // 0x3C0(0x60)(None)
	int32                                        StartJointIndex;                                   // 0x420(0x4)(None)
	int32                                        MidJointIndex;                                     // 0x424(0x4)(None)
	int32                                        EndJointIndex;                                     // 0x428(0x4)(None)
	float                                        UpperLimbLength;                                   // 0x42C(0x4)(None)
	float                                        LowerLimbLength;                                   // 0x430(0x4)(None)
	bool                                         bIsInitialized;                                    // 0x434(0x1)(None)
	uint8                                        Pad_181B[0xB];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_DrawContainerGetInstruction
struct FRigUnit_DrawContainerGetInstruction : public FRigUnit
{
public:
	class FName                                  InstructionName;                                   // 0x8(0x8)(None)
	struct FLinearColor                          Color;                                             // 0x10(0x10)(None)
	struct FTransform                            Transform;                                         // 0x20(0x60)(None)
};

// 0x20 (0x150 - 0x130)
// ScriptStruct ControlRig.RigUnit_DrawContainerSetColor
struct FRigUnit_DrawContainerSetColor : public FRigUnitMutable
{
public:
	class FName                                  InstructionName;                                   // 0x130(0x8)(None)
	struct FLinearColor                          Color;                                             // 0x138(0x10)(None)
	uint8                                        Pad_181D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x140 - 0x130)
// ScriptStruct ControlRig.RigUnit_DrawContainerSetThickness
struct FRigUnit_DrawContainerSetThickness : public FRigUnitMutable
{
public:
	class FName                                  InstructionName;                                   // 0x130(0x8)(None)
	float                                        Thickness;                                         // 0x138(0x4)(None)
	uint8                                        Pad_181E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x1A0 - 0x130)
// ScriptStruct ControlRig.RigUnit_DrawContainerSetTransform
struct FRigUnit_DrawContainerSetTransform : public FRigUnitMutable
{
public:
	class FName                                  InstructionName;                                   // 0x130(0x8)(None)
	uint8                                        Pad_181F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x140(0x60)(None)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_BeginExecution
struct FRigUnit_BeginExecution : public FRigUnit
{
public:
	uint8                                        Pad_1820[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x120)(None)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionBase
struct FRigUnit_CollectionBase : public FRigUnit
{
public:
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_CollectionBaseMutable
struct FRigUnit_CollectionBaseMutable : public FRigUnitMutable
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChain
struct FRigUnit_CollectionChain : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKey                        FirstItem;                                         // 0x8(0xC)(None)
	struct FRigElementKey                        LastItem;                                          // 0x14(0xC)(None)
	bool                                         Reverse;                                           // 0x20(0x1)(None)
	uint8                                        Pad_1821[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Collection;                                        // 0x28(0x10)(None)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChainArray
struct FRigUnit_CollectionChainArray : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKey                        FirstItem;                                         // 0x8(0xC)(None)
	struct FRigElementKey                        LastItem;                                          // 0x14(0xC)(None)
	bool                                         Reverse;                                           // 0x20(0x1)(None)
	uint8                                        Pad_1822[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Items;                                             // 0x28(0x10)(None)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionNameSearch
struct FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase
{
public:
	class FName                                  PartialName;                                       // 0x8(0x8)(None)
	enum class ERigElementType                   TypeToSearch;                                      // 0x10(0x1)(None)
	uint8                                        Pad_1823[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Collection;                                        // 0x18(0x10)(None)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionNameSearchArray
struct FRigUnit_CollectionNameSearchArray : public FRigUnit_CollectionBase
{
public:
	class FName                                  PartialName;                                       // 0x8(0x8)(None)
	enum class ERigElementType                   TypeToSearch;                                      // 0x10(0x1)(None)
	uint8                                        Pad_1824[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Items;                                             // 0x18(0x10)(None)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChildren
struct FRigUnit_CollectionChildren : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKey                        Parent;                                            // 0x8(0xC)(None)
	bool                                         bIncludeParent;                                    // 0x14(0x1)(None)
	bool                                         bRecursive;                                        // 0x15(0x1)(None)
	enum class ERigElementType                   TypeToSearch;                                      // 0x16(0x1)(None)
	uint8                                        Pad_1825[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Collection;                                        // 0x18(0x10)(None)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChildrenArray
struct FRigUnit_CollectionChildrenArray : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKey                        Parent;                                            // 0x8(0xC)(None)
	bool                                         bIncludeParent;                                    // 0x14(0x1)(None)
	bool                                         bRecursive;                                        // 0x15(0x1)(None)
	enum class ERigElementType                   TypeToSearch;                                      // 0x16(0x1)(None)
	uint8                                        Pad_1827[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Items;                                             // 0x18(0x10)(None)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionGetAll
struct FRigUnit_CollectionGetAll : public FRigUnit_CollectionBase
{
public:
	enum class ERigElementType                   TypeToSearch;                                      // 0x8(0x1)(None)
	uint8                                        Pad_1828[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Items;                                             // 0x10(0x10)(None)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionReplaceItems
struct FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x8(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FName                                  Old;                                               // 0x18(0x8)(None)
	class FName                                  New;                                               // 0x20(0x8)(None)
	bool                                         RemoveInvalidItems;                                // 0x28(0x1)(None)
	bool                                         bAllowDuplicates;                                  // 0x29(0x1)(None)
	uint8                                        Pad_182A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Collection;                                        // 0x30(0x10)(None)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionReplaceItemsArray
struct FRigUnit_CollectionReplaceItemsArray : public FRigUnit_CollectionBase
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(AutoWeak, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FName                                  Old;                                               // 0x18(0x8)(None)
	class FName                                  New;                                               // 0x20(0x8)(None)
	bool                                         RemoveInvalidItems;                                // 0x28(0x1)(None)
	bool                                         bAllowDuplicates;                                  // 0x29(0x1)(None)
	uint8                                        Pad_182B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Result;                                            // 0x30(0x10)(None)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionItems
struct FRigUnit_CollectionItems : public FRigUnit_CollectionBase
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bAllowDuplicates;                                  // 0x18(0x1)(None)
	uint8                                        Pad_1830[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Collection;                                        // 0x20(0x10)(None)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionGetItems
struct FRigUnit_CollectionGetItems : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FRigElementKey>                Items;                                             // 0x18(0x10)(None)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionGetParentIndices
struct FRigUnit_CollectionGetParentIndices : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(AutoWeak, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                ParentIndices;                                     // 0x18(0x10)(None)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionGetParentIndicesItemArray
struct FRigUnit_CollectionGetParentIndicesItemArray : public FRigUnit_CollectionBase
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                ParentIndices;                                     // 0x18(0x10)(None)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionUnion
struct FRigUnit_CollectionUnion : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              A;                                                 // 0x8(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigElementKeyCollection              B;                                                 // 0x18(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bAllowDuplicates;                                  // 0x28(0x1)(None)
	uint8                                        Pad_1839[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Collection;                                        // 0x30(0x10)(None)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionIntersection
struct FRigUnit_CollectionIntersection : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              A;                                                 // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigElementKeyCollection              B;                                                 // 0x18(0x10)(SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigElementKeyCollection              Collection;                                        // 0x28(0x10)(None)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionDifference
struct FRigUnit_CollectionDifference : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              A;                                                 // 0x8(0x10)(Protected, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigElementKeyCollection              B;                                                 // 0x18(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigElementKeyCollection              Collection;                                        // 0x28(0x10)(None)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionReverse
struct FRigUnit_CollectionReverse : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigElementKeyCollection              Reversed;                                          // 0x18(0x10)(None)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionCount
struct FRigUnit_CollectionCount : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(None)
	int32                                        Count;                                             // 0x18(0x4)(None)
	uint8                                        Pad_183A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionItemAtIndex
struct FRigUnit_CollectionItemAtIndex : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(None)
	int32                                        Index;                                             // 0x18(0x4)(None)
	struct FRigElementKey                        Item;                                              // 0x1C(0xC)(None)
};

// 0x150 (0x280 - 0x130)
// ScriptStruct ControlRig.RigUnit_CollectionLoop
struct FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable
{
public:
	class FName                                  BlockToRun;                                        // 0x130(0x8)(None)
	struct FRigElementKeyCollection              Collection;                                        // 0x138(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigElementKey                        Item;                                              // 0x148(0xC)(None)
	int32                                        Index;                                             // 0x154(0x4)(None)
	int32                                        Count;                                             // 0x158(0x4)(None)
	float                                        Ratio;                                             // 0x15C(0x4)(None)
	struct FControlRigExecuteContext             Completed;                                         // 0x160(0x120)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionAddItem
struct FRigUnit_CollectionAddItem : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigElementKey                        Item;                                              // 0x18(0xC)(None)
	uint8                                        Pad_183E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Result;                                            // 0x28(0x10)(None)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_DynamicHierarchyBase
struct FRigUnit_DynamicHierarchyBase : public FRigUnit
{
public:
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_DynamicHierarchyBaseMutable
struct FRigUnit_DynamicHierarchyBaseMutable : public FRigUnitMutable
{
public:
};

// 0x20 (0x150 - 0x130)
// ScriptStruct ControlRig.RigUnit_AddParent
struct FRigUnit_AddParent : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(None)
	struct FRigElementKey                        Parent;                                            // 0x13C(0xC)(None)
	uint8                                        Pad_183F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x150 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetDefaultParent
struct FRigUnit_SetDefaultParent : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(None)
	struct FRigElementKey                        Parent;                                            // 0x13C(0xC)(None)
	uint8                                        Pad_1841[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x150 - 0x130)
// ScriptStruct ControlRig.RigUnit_SwitchParent
struct FRigUnit_SwitchParent : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	enum class ERigSwitchParentMode              Mode;                                              // 0x130(0x1)(None)
	uint8                                        Pad_1842[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        Child;                                             // 0x134(0xC)(None)
	struct FRigElementKey                        Parent;                                            // 0x140(0xC)(None)
	bool                                         bMaintainGlobal;                                   // 0x14C(0x1)(None)
	uint8                                        Pad_1843[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeights
struct FRigUnit_HierarchyGetParentWeights : public FRigUnit_DynamicHierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(None)
	uint8                                        Pad_1844[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementWeight>             Weights;                                           // 0x18(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigElementKeyCollection              Parents;                                           // 0x28(0x10)(None)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeightsArray
struct FRigUnit_HierarchyGetParentWeightsArray : public FRigUnit_DynamicHierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(None)
	uint8                                        Pad_1845[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementWeight>             Weights;                                           // 0x18(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FRigElementKey>                Parents;                                           // 0x28(0x10)(None)
};

// 0x20 (0x150 - 0x130)
// ScriptStruct ControlRig.RigUnit_HierarchySetParentWeights
struct FRigUnit_HierarchySetParentWeights : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(None)
	uint8                                        Pad_1846[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementWeight>             Weights;                                           // 0x140(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_HierarchyReset
struct FRigUnit_HierarchyReset : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
};

// 0x20 (0x150 - 0x130)
// ScriptStruct ControlRig.RigUnit_HierarchyImportFromSkeleton
struct FRigUnit_HierarchyImportFromSkeleton : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	class FName                                  Namespace;                                         // 0x130(0x8)(None)
	bool                                         bIncludeCurves;                                    // 0x138(0x1)(None)
	uint8                                        Pad_1847[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Items;                                             // 0x140(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x10 (0x140 - 0x130)
// ScriptStruct ControlRig.RigUnit_HierarchyRemoveElement
struct FRigUnit_HierarchyRemoveElement : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(None)
	bool                                         bSuccess;                                          // 0x13C(0x1)(None)
	uint8                                        Pad_184E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x150 - 0x130)
// ScriptStruct ControlRig.RigUnit_HierarchyAddElement
struct FRigUnit_HierarchyAddElement : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Parent;                                            // 0x130(0xC)(None)
	class FName                                  Name;                                              // 0x13C(0x8)(None)
	struct FRigElementKey                        Item;                                              // 0x144(0xC)(None)
};

// 0x70 (0x1C0 - 0x150)
// ScriptStruct ControlRig.RigUnit_HierarchyAddBone
struct FRigUnit_HierarchyAddBone : public FRigUnit_HierarchyAddElement
{
public:
	struct FTransform                            Transform;                                         // 0x150(0x60)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x1B0(0x1)(None)
	uint8                                        Pad_1851[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x1C0 - 0x150)
// ScriptStruct ControlRig.RigUnit_HierarchyAddNull
struct FRigUnit_HierarchyAddNull : public FRigUnit_HierarchyAddElement
{
public:
	struct FTransform                            Transform;                                         // 0x150(0x60)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x1B0(0x1)(None)
	uint8                                        Pad_1852[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControl_Settings
struct FRigUnit_HierarchyAddControl_Settings
{
public:
	uint8                                        Pad_1853[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DisplayName;                                       // 0x8(0x8)(None)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControl_ShapeSettings
struct FRigUnit_HierarchyAddControl_ShapeSettings
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(None)
	uint8                                        Pad_1854[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x4(0x8)(None)
	struct FLinearColor                          Color;                                             // 0xC(0x10)(None)
	uint8                                        Pad_1855[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x60)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControl_ProxySettings
struct FRigUnit_HierarchyAddControl_ProxySettings
{
public:
	bool                                         bIsProxy;                                          // 0x0(0x1)(None)
	uint8                                        Pad_1856[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                DrivenControls;                                    // 0x8(0x10)(None)
	enum class ERigControlVisibility             ShapeVisibility;                                   // 0x18(0x1)(None)
	uint8                                        Pad_1857[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat_LimitSettings
struct FRigUnit_HierarchyAddControlFloat_LimitSettings
{
public:
	struct FRigControlLimitEnabled               Limit;                                             // 0x0(0x2)(None)
	uint8                                        Pad_1858[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinValue;                                          // 0x4(0x4)(None)
	float                                        MaxValue;                                          // 0x8(0x4)(None)
	bool                                         bDrawLimits;                                       // 0xC(0x1)(None)
	uint8                                        Pad_1859[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xD0 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat_Settings
struct FRigUnit_HierarchyAddControlFloat_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x10(0x1)(None)
	uint8                                        Pad_185A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControlFloat_LimitSettings Limits;                                            // 0x14(0x10)(None)
	uint8                                        Pad_185C[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x30(0x80)(None)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xB0(0x20)(None)
};

// 0x60 (0x1B0 - 0x150)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlElement
struct FRigUnit_HierarchyAddControlElement : public FRigUnit_HierarchyAddElement
{
public:
	struct FTransform                            OffsetTransform;                                   // 0x150(0x60)(None)
};

// 0xE0 (0x290 - 0x1B0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat
struct FRigUnit_HierarchyAddControlFloat : public FRigUnit_HierarchyAddControlElement
{
public:
	float                                        InitialValue;                                      // 0x1B0(0x4)(None)
	uint8                                        Pad_185F[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControlFloat_Settings Settings;                                          // 0x1C0(0xD0)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger_LimitSettings
struct FRigUnit_HierarchyAddControlInteger_LimitSettings
{
public:
	struct FRigControlLimitEnabled               Limit;                                             // 0x0(0x2)(None)
	uint8                                        Pad_1860[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinValue;                                          // 0x4(0x4)(None)
	int32                                        MaxValue;                                          // 0x8(0x4)(None)
	bool                                         bDrawLimits;                                       // 0xC(0x1)(None)
	uint8                                        Pad_1861[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xD0 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger_Settings
struct FRigUnit_HierarchyAddControlInteger_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x10(0x1)(None)
	uint8                                        Pad_1863[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControlInteger_LimitSettings Limits;                                            // 0x14(0x10)(None)
	uint8                                        Pad_1864[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x30(0x80)(None)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xB0(0x20)(None)
};

// 0xE0 (0x290 - 0x1B0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger
struct FRigUnit_HierarchyAddControlInteger : public FRigUnit_HierarchyAddControlElement
{
public:
	int32                                        InitialValue;                                      // 0x1B0(0x4)(None)
	uint8                                        Pad_1868[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControlInteger_Settings Settings;                                          // 0x1C0(0xD0)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D_LimitSettings
struct FRigUnit_HierarchyAddControlVector2D_LimitSettings
{
public:
	struct FRigControlLimitEnabled               LimitX;                                            // 0x0(0x2)(None)
	struct FRigControlLimitEnabled               LimitY;                                            // 0x2(0x2)(None)
	uint8                                        Pad_1869[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             MinValue;                                          // 0x8(0x10)(None)
	struct FVector2D                             MaxValue;                                          // 0x18(0x10)(None)
	bool                                         bDrawLimits;                                       // 0x28(0x1)(None)
	uint8                                        Pad_186A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0x100 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D_Settings
struct FRigUnit_HierarchyAddControlVector2D_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x10(0x1)(None)
	uint8                                        Pad_186B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControlVector2D_LimitSettings Limits;                                            // 0x18(0x30)(None)
	uint8                                        Pad_186C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x50(0x80)(None)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xD0(0x20)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<enum class ERigControlTransformChannel> FilteredChannels;                                  // 0xF0(0x10)(None)
};

// 0x110 (0x2C0 - 0x1B0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D
struct FRigUnit_HierarchyAddControlVector2D : public FRigUnit_HierarchyAddControlElement
{
public:
	struct FVector2D                             InitialValue;                                      // 0x1B0(0x10)(None)
	struct FRigUnit_HierarchyAddControlVector2D_Settings Settings;                                          // 0x1C0(0x100)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector_LimitSettings
struct FRigUnit_HierarchyAddControlVector_LimitSettings
{
public:
	struct FRigControlLimitEnabled               LimitX;                                            // 0x0(0x2)(None)
	struct FRigControlLimitEnabled               LimitY;                                            // 0x2(0x2)(None)
	struct FRigControlLimitEnabled               LimitZ;                                            // 0x4(0x2)(None)
	uint8                                        Pad_186D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               MinValue;                                          // 0x8(0x18)(None)
	struct FVector                               MaxValue;                                          // 0x20(0x18)(None)
	bool                                         bDrawLimits;                                       // 0x38(0x1)(None)
	uint8                                        Pad_186E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x110 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector_Settings
struct FRigUnit_HierarchyAddControlVector_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	bool                                         bIsPosition;                                       // 0x10(0x1)(None)
	uint8                                        Pad_186F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControlVector_LimitSettings Limits;                                            // 0x18(0x40)(None)
	uint8                                        Pad_1870[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x60(0x80)(None)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xE0(0x20)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<enum class ERigControlTransformChannel> FilteredChannels;                                  // 0x100(0x10)(None)
};

// 0x130 (0x2E0 - 0x1B0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector
struct FRigUnit_HierarchyAddControlVector : public FRigUnit_HierarchyAddControlElement
{
public:
	struct FVector                               InitialValue;                                      // 0x1B0(0x18)(None)
	uint8                                        Pad_1872[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControlVector_Settings Settings;                                          // 0x1D0(0x110)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator_LimitSettings
struct FRigUnit_HierarchyAddControlRotator_LimitSettings
{
public:
	struct FRigControlLimitEnabled               LimitPitch;                                        // 0x0(0x2)(None)
	struct FRigControlLimitEnabled               LimitYaw;                                          // 0x2(0x2)(None)
	struct FRigControlLimitEnabled               LimitRoll;                                         // 0x4(0x2)(None)
	uint8                                        Pad_1873[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              MinValue;                                          // 0x8(0x18)(None)
	struct FRotator                              MaxValue;                                          // 0x20(0x18)(None)
	bool                                         bDrawLimits;                                       // 0x38(0x1)(None)
	uint8                                        Pad_1874[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0x100 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator_Settings
struct FRigUnit_HierarchyAddControlRotator_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	struct FRigUnit_HierarchyAddControlRotator_LimitSettings Limits;                                            // 0x10(0x40)(None)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x50(0x80)(None)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xD0(0x20)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<enum class ERigControlTransformChannel> FilteredChannels;                                  // 0xF0(0x10)(None)
};

// 0x120 (0x2D0 - 0x1B0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator
struct FRigUnit_HierarchyAddControlRotator : public FRigUnit_HierarchyAddControlElement
{
public:
	struct FRotator                              InitialValue;                                      // 0x1B0(0x18)(None)
	uint8                                        Pad_1876[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControlRotator_Settings Settings;                                          // 0x1D0(0x100)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0xB0 (0xC0 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlTransform_Settings
struct FRigUnit_HierarchyAddControlTransform_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x10(0x80)(None)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0x90(0x20)(AutoWeak, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<enum class ERigControlTransformChannel> FilteredChannels;                                  // 0xB0(0x10)(None)
};

// 0x120 (0x2D0 - 0x1B0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlTransform
struct FRigUnit_HierarchyAddControlTransform : public FRigUnit_HierarchyAddControlElement
{
public:
	struct FTransform                            InitialValue;                                      // 0x1B0(0x60)(None)
	struct FRigUnit_HierarchyAddControlTransform_Settings Settings;                                          // 0x210(0xC0)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x10 (0x160 - 0x150)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelBool
struct FRigUnit_HierarchyAddAnimationChannelBool : public FRigUnit_HierarchyAddElement
{
public:
	bool                                         InitialValue;                                      // 0x150(0x1)(None)
	bool                                         MinimumValue;                                      // 0x151(0x1)(None)
	bool                                         MaximumValue;                                      // 0x152(0x1)(None)
	uint8                                        Pad_1878[0xD];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x160 - 0x150)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelFloat
struct FRigUnit_HierarchyAddAnimationChannelFloat : public FRigUnit_HierarchyAddElement
{
public:
	float                                        InitialValue;                                      // 0x150(0x4)(None)
	float                                        MinimumValue;                                      // 0x154(0x4)(None)
	float                                        MaximumValue;                                      // 0x158(0x4)(None)
	uint8                                        Pad_1879[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x160 - 0x150)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelInteger
struct FRigUnit_HierarchyAddAnimationChannelInteger : public FRigUnit_HierarchyAddElement
{
public:
	int32                                        InitialValue;                                      // 0x150(0x4)(None)
	int32                                        MinimumValue;                                      // 0x154(0x4)(None)
	int32                                        MaximumValue;                                      // 0x158(0x4)(None)
	uint8                                        Pad_187A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x180 - 0x150)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelVector2D
struct FRigUnit_HierarchyAddAnimationChannelVector2D : public FRigUnit_HierarchyAddElement
{
public:
	struct FVector2D                             InitialValue;                                      // 0x150(0x10)(None)
	struct FVector2D                             MinimumValue;                                      // 0x160(0x10)(None)
	struct FVector2D                             MaximumValue;                                      // 0x170(0x10)(None)
};

// 0x50 (0x1A0 - 0x150)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelVector
struct FRigUnit_HierarchyAddAnimationChannelVector : public FRigUnit_HierarchyAddElement
{
public:
	struct FVector                               InitialValue;                                      // 0x150(0x18)(None)
	struct FVector                               MinimumValue;                                      // 0x168(0x18)(None)
	struct FVector                               MaximumValue;                                      // 0x180(0x18)(None)
	uint8                                        Pad_187C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x1A0 - 0x150)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelRotator
struct FRigUnit_HierarchyAddAnimationChannelRotator : public FRigUnit_HierarchyAddElement
{
public:
	struct FRotator                              InitialValue;                                      // 0x150(0x18)(None)
	struct FRotator                              MinimumValue;                                      // 0x168(0x18)(None)
	struct FRotator                              MaximumValue;                                      // 0x180(0x18)(None)
	uint8                                        Pad_187D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetShapeSettings
struct FRigUnit_HierarchyGetShapeSettings : public FRigUnit_DynamicHierarchyBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(None)
	uint8                                        Pad_1880[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControl_ShapeSettings Settings;                                          // 0x20(0x80)(None)
};

// 0x90 (0x1C0 - 0x130)
// ScriptStruct ControlRig.RigUnit_HierarchySetShapeSettings
struct FRigUnit_HierarchySetShapeSettings : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(None)
	uint8                                        Pad_1881[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControl_ShapeSettings Settings;                                          // 0x140(0x80)(None)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyBase
struct FRigUnit_HierarchyBase : public FRigUnit
{
public:
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_HierarchyBaseMutable
struct FRigUnit_HierarchyBaseMutable : public FRigUnitMutable
{
public:
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParent
struct FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(None)
	struct FRigElementKey                        Parent;                                            // 0x14(0xC)(None)
	struct FCachedRigElement                     CachedChild;                                       // 0x20(0x20)(None)
	struct FCachedRigElement                     CachedParent;                                      // 0x40(0x20)(None)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParents
struct FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(None)
	bool                                         bIncludeChild;                                     // 0x14(0x1)(None)
	bool                                         bReverse;                                          // 0x15(0x1)(None)
	uint8                                        Pad_1884[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Parents;                                           // 0x18(0x10)(SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FCachedRigElement                     CachedChild;                                       // 0x28(0x20)(None)
	struct FRigElementKeyCollection              CachedParents;                                     // 0x48(0x10)(None)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParentsItemArray
struct FRigUnit_HierarchyGetParentsItemArray : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(None)
	bool                                         bIncludeChild;                                     // 0x14(0x1)(None)
	bool                                         bReverse;                                          // 0x15(0x1)(None)
	uint8                                        Pad_1885[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Parents;                                           // 0x18(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FCachedRigElement                     CachedChild;                                       // 0x28(0x20)(None)
	struct FRigElementKeyCollection              CachedParents;                                     // 0x48(0x10)(None)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetChildren
struct FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Parent;                                            // 0x8(0xC)(None)
	bool                                         bIncludeParent;                                    // 0x14(0x1)(None)
	bool                                         bRecursive;                                        // 0x15(0x1)(None)
	uint8                                        Pad_1886[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Children;                                          // 0x18(0x10)(AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FCachedRigElement                     CachedParent;                                      // 0x28(0x20)(None)
	struct FRigElementKeyCollection              CachedChildren;                                    // 0x48(0x10)(None)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetSiblings
struct FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(None)
	bool                                         bIncludeItem;                                      // 0x14(0x1)(None)
	uint8                                        Pad_1888[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Siblings;                                          // 0x18(0x10)(AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FCachedRigElement                     CachedItem;                                        // 0x28(0x20)(None)
	struct FRigElementKeyCollection              CachedSiblings;                                    // 0x48(0x10)(None)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetSiblingsItemArray
struct FRigUnit_HierarchyGetSiblingsItemArray : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(None)
	bool                                         bIncludeItem;                                      // 0x14(0x1)(None)
	uint8                                        Pad_1889[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Siblings;                                          // 0x18(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FCachedRigElement                     CachedItem;                                        // 0x28(0x20)(None)
	struct FRigElementKeyCollection              CachedSiblings;                                    // 0x48(0x10)(None)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetPose
struct FRigUnit_HierarchyGetPose : public FRigUnit_HierarchyBase
{
public:
	bool                                         Initial;                                           // 0x8(0x1)(None)
	enum class ERigElementType                   ElementType;                                       // 0x9(0x1)(None)
	uint8                                        Pad_188A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              ItemsToGet;                                        // 0x10(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigPose                              Pose;                                              // 0x20(0x70)(None)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetPoseItemArray
struct FRigUnit_HierarchyGetPoseItemArray : public FRigUnit_HierarchyBase
{
public:
	bool                                         Initial;                                           // 0x8(0x1)(None)
	enum class ERigElementType                   ElementType;                                       // 0x9(0x1)(None)
	uint8                                        Pad_188B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ItemsToGet;                                        // 0x10(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigPose                              Pose;                                              // 0x20(0x70)(None)
};

// 0x90 (0x1C0 - 0x130)
// ScriptStruct ControlRig.RigUnit_HierarchySetPose
struct FRigUnit_HierarchySetPose : public FRigUnit_HierarchyBaseMutable
{
public:
	struct FRigPose                              Pose;                                              // 0x130(0x70)(Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ERigElementType                   ElementType;                                       // 0x1A0(0x1)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x1A1(0x1)(None)
	uint8                                        Pad_188D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              ItemsToSet;                                        // 0x1A8(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Weight;                                            // 0x1B8(0x4)(None)
	uint8                                        Pad_188E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x1C0 - 0x130)
// ScriptStruct ControlRig.RigUnit_HierarchySetPoseItemArray
struct FRigUnit_HierarchySetPoseItemArray : public FRigUnit_HierarchyBaseMutable
{
public:
	struct FRigPose                              Pose;                                              // 0x130(0x70)(AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ERigElementType                   ElementType;                                       // 0x1A0(0x1)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x1A1(0x1)(None)
	uint8                                        Pad_1890[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ItemsToSet;                                        // 0x1A8(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Weight;                                            // 0x1B8(0x4)(None)
	uint8                                        Pad_1891[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseIsEmpty
struct FRigUnit_PoseIsEmpty : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(None)
	bool                                         IsEmpty;                                           // 0x78(0x1)(None)
	uint8                                        Pad_1893[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetItems
struct FRigUnit_PoseGetItems : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ERigElementType                   ElementType;                                       // 0x78(0x1)(None)
	uint8                                        Pad_1895[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Items;                                             // 0x80(0x10)(None)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetItemsItemArray
struct FRigUnit_PoseGetItemsItemArray : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(AutoWeak, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ERigElementType                   ElementType;                                       // 0x78(0x1)(None)
	uint8                                        Pad_1897[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Items;                                             // 0x80(0x10)(None)
};

// 0x120 (0x128 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetDelta
struct FRigUnit_PoseGetDelta : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              PoseA;                                             // 0x8(0x70)(AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigPose                              PoseB;                                             // 0x78(0x70)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        PositionThreshold;                                 // 0xE8(0x4)(None)
	float                                        RotationThreshold;                                 // 0xEC(0x4)(None)
	float                                        ScaleThreshold;                                    // 0xF0(0x4)(None)
	float                                        CurveThreshold;                                    // 0xF4(0x4)(None)
	enum class ERigElementType                   ElementType;                                       // 0xF8(0x1)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0xF9(0x1)(None)
	uint8                                        Pad_1898[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              ItemsToCompare;                                    // 0x100(0x10)(ContainsInstancedReference, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         PosesAreEqual;                                     // 0x110(0x1)(None)
	uint8                                        Pad_1899[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              ItemsWithDelta;                                    // 0x118(0x10)(None)
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetTransform
struct FRigUnit_PoseGetTransform : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(None)
	struct FRigElementKey                        Item;                                              // 0x78(0xC)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x84(0x1)(None)
	bool                                         Valid;                                             // 0x85(0x1)(None)
	uint8                                        Pad_189B[0xA];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x90(0x60)(None)
	float                                        CurveValue;                                        // 0xF0(0x4)(None)
	int32                                        CachedPoseElementIndex;                            // 0xF4(0x4)(None)
	int32                                        CachedPoseHash;                                    // 0xF8(0x4)(None)
	uint8                                        Pad_189C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetTransformArray
struct FRigUnit_PoseGetTransformArray : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ERigVMTransformSpace              Space;                                             // 0x78(0x1)(None)
	bool                                         Valid;                                             // 0x79(0x1)(None)
	uint8                                        Pad_189F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    Transforms;                                        // 0x80(0x10)(None)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetCurve
struct FRigUnit_PoseGetCurve : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(None)
	class FName                                  Curve;                                             // 0x78(0x8)(None)
	bool                                         Valid;                                             // 0x80(0x1)(None)
	uint8                                        Pad_18A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurveValue;                                        // 0x84(0x4)(None)
	int32                                        CachedPoseElementIndex;                            // 0x88(0x4)(None)
	int32                                        CachedPoseHash;                                    // 0x8C(0x4)(None)
};

// 0x280 (0x3B0 - 0x130)
// ScriptStruct ControlRig.RigUnit_PoseLoop
struct FRigUnit_PoseLoop : public FRigUnit_HierarchyBaseMutable
{
public:
	class FName                                  BlockToRun;                                        // 0x130(0x8)(None)
	struct FRigPose                              Pose;                                              // 0x138(0x70)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigElementKey                        Item;                                              // 0x1A8(0xC)(None)
	uint8                                        Pad_18AD[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            GlobalTransform;                                   // 0x1C0(0x60)(None)
	struct FTransform                            LocalTransform;                                    // 0x220(0x60)(None)
	float                                        CurveValue;                                        // 0x280(0x4)(None)
	int32                                        Index;                                             // 0x284(0x4)(None)
	int32                                        Count;                                             // 0x288(0x4)(None)
	float                                        Ratio;                                             // 0x28C(0x4)(None)
	struct FControlRigExecuteContext             Completed;                                         // 0x290(0x120)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_InteractionExecution
struct FRigUnit_InteractionExecution : public FRigUnit
{
public:
	uint8                                        Pad_18AF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x120)(None)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_InverseExecution
struct FRigUnit_InverseExecution : public FRigUnit
{
public:
	uint8                                        Pad_18B0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x120)(None)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_IsInteracting
struct FRigUnit_IsInteracting : public FRigUnit
{
public:
	bool                                         bIsInteracting;                                    // 0x8(0x1)(None)
	bool                                         bIsTranslating;                                    // 0x9(0x1)(None)
	bool                                         bIsRotating;                                       // 0xA(0x1)(None)
	bool                                         bIsScaling;                                        // 0xB(0x1)(None)
	uint8                                        Pad_18B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Items;                                             // 0x10(0x10)(None)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemBase
struct FRigUnit_ItemBase : public FRigUnit
{
public:
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_ItemBaseMutable
struct FRigUnit_ItemBaseMutable : public FRigUnitMutable
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemExists
struct FRigUnit_ItemExists : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(None)
	bool                                         Exists;                                            // 0x14(0x1)(None)
	uint8                                        Pad_18B2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x18(0x20)(None)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemReplace
struct FRigUnit_ItemReplace : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(None)
	class FName                                  Old;                                               // 0x14(0x8)(None)
	class FName                                  New;                                               // 0x1C(0x8)(None)
	struct FRigElementKey                        Result;                                            // 0x24(0xC)(None)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemEquals
struct FRigUnit_ItemEquals : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        A;                                                 // 0x8(0xC)(None)
	struct FRigElementKey                        B;                                                 // 0x14(0xC)(None)
	bool                                         Result;                                            // 0x20(0x1)(None)
	uint8                                        Pad_18B3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemNotEquals
struct FRigUnit_ItemNotEquals : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        A;                                                 // 0x8(0xC)(None)
	struct FRigElementKey                        B;                                                 // 0x14(0xC)(None)
	bool                                         Result;                                            // 0x20(0x1)(None)
	uint8                                        Pad_18B5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemTypeEquals
struct FRigUnit_ItemTypeEquals : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        A;                                                 // 0x8(0xC)(None)
	struct FRigElementKey                        B;                                                 // 0x14(0xC)(None)
	bool                                         Result;                                            // 0x20(0x1)(None)
	uint8                                        Pad_18B6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemTypeNotEquals
struct FRigUnit_ItemTypeNotEquals : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        A;                                                 // 0x8(0xC)(None)
	struct FRigElementKey                        B;                                                 // 0x14(0xC)(None)
	bool                                         Result;                                            // 0x20(0x1)(None)
	uint8                                        Pad_18B7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemToName
struct FRigUnit_ItemToName : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        Value;                                             // 0x8(0xC)(None)
	class FName                                  Result;                                            // 0x14(0x8)(None)
	uint8                                        Pad_18BA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_PrepareForExecution
struct FRigUnit_PrepareForExecution : public FRigUnit
{
public:
	uint8                                        Pad_18BD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x120)(None)
};

// 0x5A8 (0x5B0 - 0x8)
// ScriptStruct ControlRig.RigUnit_SequenceExecution
struct FRigUnit_SequenceExecution : public FRigUnit
{
public:
	uint8                                        Pad_18BE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x120)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FControlRigExecuteContext             A;                                                 // 0x130(0x120)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FControlRigExecuteContext             B;                                                 // 0x250(0x120)(Protected, BlueprintAuthorityOnly, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FControlRigExecuteContext             C;                                                 // 0x370(0x120)(ContainsInstancedReference, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FControlRigExecuteContext             D;                                                 // 0x490(0x120)(None)
};

// 0x368 (0x370 - 0x8)
// ScriptStruct ControlRig.RigUnit_SequenceAggregate
struct FRigUnit_SequenceAggregate : public FRigUnit
{
public:
	uint8                                        Pad_18C0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x10(0x120)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FControlRigExecuteContext             A;                                                 // 0x130(0x120)(SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FControlRigExecuteContext             B;                                                 // 0x250(0x120)(None)
};

// 0xA0 (0x1D0 - 0x130)
// ScriptStruct ControlRig.RigUnit_AddBoneTransform
struct FRigUnit_AddBoneTransform : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x130(0x8)(None)
	uint8                                        Pad_18C1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x140(0x60)(None)
	float                                        Weight;                                            // 0x1A0(0x4)(None)
	bool                                         bPostMultiply;                                     // 0x1A4(0x1)(None)
	bool                                         bPropagateToChildren;                              // 0x1A5(0x1)(None)
	uint8                                        Pad_18C2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedBone;                                        // 0x1A8(0x20)(None)
	uint8                                        Pad_18C3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_Item
struct FRigUnit_Item : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(None)
	uint8                                        Pad_18C4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemArray
struct FRigUnit_ItemArray : public FRigUnit
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(None)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_BoneName
struct FRigUnit_BoneName : public FRigUnit
{
public:
	class FName                                  bone;                                              // 0x8(0x8)(None)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpaceName
struct FRigUnit_SpaceName : public FRigUnit
{
public:
	class FName                                  Space;                                             // 0x8(0x8)(None)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_ControlName
struct FRigUnit_ControlName : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(None)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetAnimationChannelBase
struct FRigUnit_GetAnimationChannelBase : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(None)
	class FName                                  Channel;                                           // 0x10(0x8)(None)
	bool                                         bInitial;                                          // 0x18(0x1)(None)
	uint8                                        Pad_18C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        CachedChannelKey;                                  // 0x1C(0xC)(None)
	int32                                        CachedChannelHash;                                 // 0x28(0x4)(None)
	uint8                                        Pad_18C6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x38 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetBoolAnimationChannel
struct FRigUnit_GetBoolAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	bool                                         Value;                                             // 0x30(0x1)(None)
	uint8                                        Pad_18C8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x38 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetFloatAnimationChannel
struct FRigUnit_GetFloatAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	float                                        Value;                                             // 0x30(0x4)(None)
	uint8                                        Pad_18CA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x38 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetIntAnimationChannel
struct FRigUnit_GetIntAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	int32                                        Value;                                             // 0x30(0x4)(None)
	uint8                                        Pad_18CB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x40 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetVector2DAnimationChannel
struct FRigUnit_GetVector2DAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	struct FVector2D                             Value;                                             // 0x30(0x10)(None)
};

// 0x18 (0x48 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetVectorAnimationChannel
struct FRigUnit_GetVectorAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	struct FVector                               Value;                                             // 0x30(0x18)(None)
};

// 0x18 (0x48 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetRotatorAnimationChannel
struct FRigUnit_GetRotatorAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	struct FRotator                              Value;                                             // 0x30(0x18)(None)
};

// 0x60 (0x90 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetTransformAnimationChannel
struct FRigUnit_GetTransformAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	struct FTransform                            Value;                                             // 0x30(0x60)(None)
};

// 0x120 (0x150 - 0x30)
// ScriptStruct ControlRig.RigUnit_SetAnimationChannelBase
struct FRigUnit_SetAnimationChannelBase : public FRigUnit_GetAnimationChannelBase
{
public:
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x30(0x120)(None)
};

// 0x10 (0x160 - 0x150)
// ScriptStruct ControlRig.RigUnit_SetBoolAnimationChannel
struct FRigUnit_SetBoolAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	bool                                         Value;                                             // 0x150(0x1)(None)
	uint8                                        Pad_18D2[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x160 - 0x150)
// ScriptStruct ControlRig.RigUnit_SetFloatAnimationChannel
struct FRigUnit_SetFloatAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	float                                        Value;                                             // 0x150(0x4)(None)
	uint8                                        Pad_18D5[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x160 - 0x150)
// ScriptStruct ControlRig.RigUnit_SetIntAnimationChannel
struct FRigUnit_SetIntAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	int32                                        Value;                                             // 0x150(0x4)(None)
	uint8                                        Pad_18D6[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x160 - 0x150)
// ScriptStruct ControlRig.RigUnit_SetVector2DAnimationChannel
struct FRigUnit_SetVector2DAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	struct FVector2D                             Value;                                             // 0x150(0x10)(None)
};

// 0x20 (0x170 - 0x150)
// ScriptStruct ControlRig.RigUnit_SetVectorAnimationChannel
struct FRigUnit_SetVectorAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	struct FVector                               Value;                                             // 0x150(0x18)(None)
	uint8                                        Pad_18DA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x170 - 0x150)
// ScriptStruct ControlRig.RigUnit_SetRotatorAnimationChannel
struct FRigUnit_SetRotatorAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	struct FRotator                              Value;                                             // 0x150(0x18)(None)
	uint8                                        Pad_18DC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x1B0 - 0x150)
// ScriptStruct ControlRig.RigUnit_SetTransformAnimationChannel
struct FRigUnit_SetTransformAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	struct FTransform                            Value;                                             // 0x150(0x60)(None)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetBoneTransform
struct FRigUnit_GetBoneTransform : public FRigUnit
{
public:
	class FName                                  bone;                                              // 0x8(0x8)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x10(0x1)(None)
	uint8                                        Pad_18DD[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x60)(None)
	struct FCachedRigElement                     CachedBone;                                        // 0x80(0x20)(None)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlInitialTransform
struct FRigUnit_GetControlInitialTransform : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x10(0x1)(None)
	uint8                                        Pad_18DE[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x60)(None)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x80(0x20)(None)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlBool
struct FRigUnit_GetControlBool : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(None)
	bool                                         BoolValue;                                         // 0x10(0x1)(None)
	uint8                                        Pad_18DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0x18(0x20)(None)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlFloat
struct FRigUnit_GetControlFloat : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(None)
	float                                        FloatValue;                                        // 0x10(0x4)(None)
	float                                        Minimum;                                           // 0x14(0x4)(None)
	float                                        Maximum;                                           // 0x18(0x4)(None)
	uint8                                        Pad_18E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0x20(0x20)(None)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlInteger
struct FRigUnit_GetControlInteger : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(None)
	int32                                        IntegerValue;                                      // 0x10(0x4)(None)
	int32                                        Minimum;                                           // 0x14(0x4)(None)
	int32                                        Maximum;                                           // 0x18(0x4)(None)
	uint8                                        Pad_18E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0x20(0x20)(None)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlVector2D
struct FRigUnit_GetControlVector2D : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(None)
	struct FVector2D                             Vector;                                            // 0x10(0x10)(None)
	struct FVector2D                             Minimum;                                           // 0x20(0x10)(None)
	struct FVector2D                             Maximum;                                           // 0x30(0x10)(None)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x40(0x20)(None)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlVector
struct FRigUnit_GetControlVector : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x10(0x1)(None)
	uint8                                        Pad_18E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Vector;                                            // 0x18(0x18)(None)
	struct FVector                               Minimum;                                           // 0x30(0x18)(None)
	struct FVector                               Maximum;                                           // 0x48(0x18)(None)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x60(0x20)(None)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlRotator
struct FRigUnit_GetControlRotator : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x10(0x1)(None)
	uint8                                        Pad_18E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Rotator;                                           // 0x18(0x18)(None)
	struct FRotator                              Minimum;                                           // 0x30(0x18)(None)
	struct FRotator                              Maximum;                                           // 0x48(0x18)(None)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x60(0x20)(None)
};

// 0x158 (0x160 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlTransform
struct FRigUnit_GetControlTransform : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x10(0x1)(None)
	uint8                                        Pad_18E9[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x60)(None)
	struct FTransform                            Minimum;                                           // 0x80(0x60)(None)
	struct FTransform                            Maximum;                                           // 0xE0(0x60)(None)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x140(0x20)(None)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetCurveValue
struct FRigUnit_GetCurveValue : public FRigUnit
{
public:
	class FName                                  Curve;                                             // 0x8(0x8)(None)
	bool                                         Valid;                                             // 0x10(0x1)(None)
	uint8                                        Pad_18EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x14(0x4)(None)
	struct FCachedRigElement                     CachedCurveIndex;                                  // 0x18(0x20)(None)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetInitialBoneTransform
struct FRigUnit_GetInitialBoneTransform : public FRigUnit
{
public:
	class FName                                  bone;                                              // 0x8(0x8)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x10(0x1)(None)
	uint8                                        Pad_18EE[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x60)(None)
	struct FCachedRigElement                     CachedBone;                                        // 0x80(0x20)(None)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetRelativeBoneTransform
struct FRigUnit_GetRelativeBoneTransform : public FRigUnit
{
public:
	class FName                                  bone;                                              // 0x8(0x8)(None)
	class FName                                  Space;                                             // 0x10(0x8)(None)
	uint8                                        Pad_18EF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x60)(None)
	struct FCachedRigElement                     CachedBone;                                        // 0x80(0x20)(None)
	struct FCachedRigElement                     CachedSpace;                                       // 0xA0(0x20)(None)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetRelativeTransformForItem
struct FRigUnit_GetRelativeTransformForItem : public FRigUnit
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(None)
	bool                                         bChildInitial;                                     // 0x14(0x1)(None)
	uint8                                        Pad_18F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        Parent;                                            // 0x18(0xC)(None)
	bool                                         bParentInitial;                                    // 0x24(0x1)(None)
	uint8                                        Pad_18F3[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RelativeTransform;                                 // 0x30(0x60)(None)
	struct FCachedRigElement                     CachedChild;                                       // 0x90(0x20)(None)
	struct FCachedRigElement                     CachedParent;                                      // 0xB0(0x20)(None)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetSpaceTransform
struct FRigUnit_GetSpaceTransform : public FRigUnit
{
public:
	class FName                                  Space;                                             // 0x8(0x8)(None)
	enum class ERigVMTransformSpace              SpaceType;                                         // 0x10(0x1)(None)
	uint8                                        Pad_18F5[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x60)(None)
	struct FCachedRigElement                     CachedSpaceIndex;                                  // 0x80(0x20)(None)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetTransform
struct FRigUnit_GetTransform : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x14(0x1)(None)
	bool                                         bInitial;                                          // 0x15(0x1)(None)
	uint8                                        Pad_1900[0xA];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x60)(None)
	struct FCachedRigElement                     CachedIndex;                                       // 0x80(0x20)(None)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetTransformArray
struct FRigUnit_GetTransformArray : public FRigUnit
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x8(0x10)(AutoWeak, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ERigVMTransformSpace              Space;                                             // 0x18(0x1)(None)
	bool                                         bInitial;                                          // 0x19(0x1)(None)
	uint8                                        Pad_1903[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    Transforms;                                        // 0x20(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             CachedIndex;                                       // 0x30(0x10)(None)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetTransformItemArray
struct FRigUnit_GetTransformItemArray : public FRigUnit
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ERigVMTransformSpace              Space;                                             // 0x18(0x1)(None)
	bool                                         bInitial;                                          // 0x19(0x1)(None)
	uint8                                        Pad_190B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    Transforms;                                        // 0x20(0x10)(BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             CachedIndex;                                       // 0x30(0x10)(None)
};

// 0x30 (0x48 - 0x18)
// ScriptStruct ControlRig.RigDispatch_MetadataBase
struct FRigDispatch_MetadataBase : public FRigDispatchFactory
{
public:
	uint8                                        Pad_190C[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x48 - 0x48)
// ScriptStruct ControlRig.RigDispatch_GetMetadata
struct FRigDispatch_GetMetadata : public FRigDispatch_MetadataBase
{
public:
};

// 0x0 (0x48 - 0x48)
// ScriptStruct ControlRig.RigDispatch_SetMetadata
struct FRigDispatch_SetMetadata : public FRigDispatch_MetadataBase
{
public:
};

// 0x40 (0x170 - 0x130)
// ScriptStruct ControlRig.RigUnit_RemoveMetadata
struct FRigUnit_RemoveMetadata : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(None)
	class FName                                  Name;                                              // 0x13C(0x8)(None)
	bool                                         Removed;                                           // 0x144(0x1)(None)
	uint8                                        Pad_1911[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x148(0x20)(None)
	uint8                                        Pad_1912[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_RemoveAllMetadata
struct FRigUnit_RemoveAllMetadata : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(None)
	bool                                         Removed;                                           // 0x13C(0x1)(None)
	uint8                                        Pad_1915[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x140(0x20)(None)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_HasMetadata
struct FRigUnit_HasMetadata : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(None)
	class FName                                  Name;                                              // 0x14(0x8)(None)
	enum class ERigMetadataType                  Type;                                              // 0x1C(0x1)(None)
	bool                                         Found;                                             // 0x1D(0x1)(None)
	uint8                                        Pad_1917[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x20(0x20)(None)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_FindItemsWithMetadata
struct FRigUnit_FindItemsWithMetadata : public FRigUnit
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(None)
	enum class ERigMetadataType                  Type;                                              // 0x10(0x1)(None)
	uint8                                        Pad_1919[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Items;                                             // 0x18(0x10)(None)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetMetadataTags
struct FRigUnit_GetMetadataTags : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(None)
	uint8                                        Pad_191B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Tags;                                              // 0x18(0x10)(None)
	struct FCachedRigElement                     CachedIndex;                                       // 0x28(0x20)(None)
};

// 0x40 (0x170 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetMetadataTag
struct FRigUnit_SetMetadataTag : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(None)
	class FName                                  Tag;                                               // 0x13C(0x8)(None)
	uint8                                        Pad_191D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x148(0x20)(None)
	uint8                                        Pad_191E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x170 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetMetadataTagArray
struct FRigUnit_SetMetadataTagArray : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(None)
	uint8                                        Pad_1922[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Tags;                                              // 0x140(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FCachedRigElement                     CachedIndex;                                       // 0x150(0x20)(None)
};

// 0x40 (0x170 - 0x130)
// ScriptStruct ControlRig.RigUnit_RemoveMetadataTag
struct FRigUnit_RemoveMetadataTag : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(None)
	class FName                                  Tag;                                               // 0x13C(0x8)(None)
	bool                                         Removed;                                           // 0x144(0x1)(None)
	uint8                                        Pad_1923[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x148(0x20)(None)
	uint8                                        Pad_1924[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_HasMetadataTag
struct FRigUnit_HasMetadataTag : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(None)
	class FName                                  Tag;                                               // 0x14(0x8)(None)
	bool                                         Found;                                             // 0x1C(0x1)(None)
	uint8                                        Pad_1925[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x20(0x20)(None)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_HasMetadataTagArray
struct FRigUnit_HasMetadataTagArray : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(None)
	uint8                                        Pad_1926[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Tags;                                              // 0x18(0x10)(None)
	bool                                         Found;                                             // 0x28(0x1)(None)
	uint8                                        Pad_1927[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x30(0x20)(None)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_FindItemsWithMetadataTag
struct FRigUnit_FindItemsWithMetadataTag : public FRigUnit
{
public:
	class FName                                  Tag;                                               // 0x8(0x8)(None)
	TArray<struct FRigElementKey>                Items;                                             // 0x10(0x10)(None)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_FindItemsWithMetadataTagArray
struct FRigUnit_FindItemsWithMetadataTagArray : public FRigUnit
{
public:
	TArray<class FName>                          Tags;                                              // 0x8(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FRigElementKey>                Items;                                             // 0x18(0x10)(None)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_FilterItemsByMetadataTags
struct FRigUnit_FilterItemsByMetadataTags : public FRigUnit
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FName>                          Tags;                                              // 0x18(0x10)(AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         Inclusive;                                         // 0x28(0x1)(None)
	uint8                                        Pad_1929[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Result;                                            // 0x30(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             CachedIndices;                                     // 0x40(0x10)(None)
};

// 0xA0 (0x1D0 - 0x130)
// ScriptStruct ControlRig.RigUnit_OffsetTransformForItem
struct FRigUnit_OffsetTransformForItem : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(None)
	uint8                                        Pad_192A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OffsetTransform;                                   // 0x140(0x60)(None)
	float                                        Weight;                                            // 0x1A0(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x1A4(0x1)(None)
	uint8                                        Pad_192B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x1A8(0x20)(None)
	uint8                                        Pad_192C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1A0 (0x2D0 - 0x130)
// ScriptStruct ControlRig.RigUnit_ParentSwitchConstraint
struct FRigUnit_ParentSwitchConstraint : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Subject;                                           // 0x130(0xC)(None)
	int32                                        ParentIndex;                                       // 0x13C(0x4)(None)
	struct FRigElementKeyCollection              Parents;                                           // 0x140(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            InitialGlobalTransform;                            // 0x150(0x60)(None)
	float                                        Weight;                                            // 0x1B0(0x4)(None)
	uint8                                        Pad_192D[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x1C0(0x60)(None)
	bool                                         Switched;                                          // 0x220(0x1)(None)
	uint8                                        Pad_192E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedSubject;                                     // 0x228(0x20)(None)
	struct FCachedRigElement                     CachedParent;                                      // 0x248(0x20)(None)
	uint8                                        Pad_192F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RelativeOffset;                                    // 0x270(0x60)(None)
};

// 0x1A0 (0x2D0 - 0x130)
// ScriptStruct ControlRig.RigUnit_ParentSwitchConstraintArray
struct FRigUnit_ParentSwitchConstraintArray : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Subject;                                           // 0x130(0xC)(None)
	int32                                        ParentIndex;                                       // 0x13C(0x4)(None)
	TArray<struct FRigElementKey>                Parents;                                           // 0x140(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            InitialGlobalTransform;                            // 0x150(0x60)(None)
	float                                        Weight;                                            // 0x1B0(0x4)(None)
	uint8                                        Pad_1932[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x1C0(0x60)(None)
	bool                                         Switched;                                          // 0x220(0x1)(None)
	uint8                                        Pad_1933[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedSubject;                                     // 0x228(0x20)(None)
	struct FCachedRigElement                     CachedParent;                                      // 0x248(0x20)(None)
	uint8                                        Pad_1934[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RelativeOffset;                                    // 0x270(0x60)(None)
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct ControlRig.RigUnit_ProjectTransformToNewParent
struct FRigUnit_ProjectTransformToNewParent : public FRigUnit
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(None)
	bool                                         bChildInitial;                                     // 0x14(0x1)(None)
	uint8                                        Pad_1936[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        OldParent;                                         // 0x18(0xC)(None)
	bool                                         bOldParentInitial;                                 // 0x24(0x1)(None)
	uint8                                        Pad_1937[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        NewParent;                                         // 0x28(0xC)(None)
	bool                                         bNewParentInitial;                                 // 0x34(0x1)(None)
	uint8                                        Pad_1938[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x40(0x60)(None)
	struct FCachedRigElement                     CachedChild;                                       // 0xA0(0x20)(None)
	struct FCachedRigElement                     CachedOldParent;                                   // 0xC0(0x20)(None)
	struct FCachedRigElement                     CachedNewParent;                                   // 0xE0(0x20)(None)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_PropagateTransform
struct FRigUnit_PropagateTransform : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(None)
	bool                                         bRecomputeGlobal;                                  // 0x13C(0x1)(None)
	bool                                         bApplyToChildren;                                  // 0x13D(0x1)(None)
	bool                                         bRecursive;                                        // 0x13E(0x1)(None)
	uint8                                        Pad_193B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x140(0x20)(None)
};

// 0x20 (0x150 - 0x130)
// ScriptStruct ControlRig.RigUnit_SendEvent
struct FRigUnit_SendEvent : public FRigUnitMutable
{
public:
	enum class ERigEvent                         Event;                                             // 0x130(0x1)(None)
	uint8                                        Pad_193C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        Item;                                              // 0x134(0xC)(None)
	float                                        OffsetInSeconds;                                   // 0x140(0x4)(None)
	bool                                         bEnable;                                           // 0x144(0x1)(None)
	bool                                         bOnlyDuringInteraction;                            // 0x145(0x1)(None)
	uint8                                        Pad_193D[0xA];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x230 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetBoneInitialTransform
struct FRigUnit_SetBoneInitialTransform : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x130(0x8)(None)
	uint8                                        Pad_193E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x140(0x60)(None)
	struct FTransform                            Result;                                            // 0x1A0(0x60)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x200(0x1)(None)
	bool                                         bPropagateToChildren;                              // 0x201(0x1)(None)
	uint8                                        Pad_193F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedBone;                                        // 0x208(0x20)(None)
	uint8                                        Pad_1941[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x190 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetBoneRotation
struct FRigUnit_SetBoneRotation : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x130(0x8)(None)
	uint8                                        Pad_1949[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Rotation;                                          // 0x140(0x20)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x160(0x1)(None)
	uint8                                        Pad_194A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x164(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x168(0x1)(None)
	uint8                                        Pad_194C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedBone;                                        // 0x170(0x20)(None)
};

// 0x100 (0x230 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetBoneTransform
struct FRigUnit_SetBoneTransform : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x130(0x8)(None)
	uint8                                        Pad_194D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x140(0x60)(None)
	struct FTransform                            Result;                                            // 0x1A0(0x60)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x200(0x1)(None)
	uint8                                        Pad_194E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x204(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x208(0x1)(None)
	uint8                                        Pad_194F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedBone;                                        // 0x210(0x20)(None)
};

// 0x50 (0x180 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetBoneTranslation
struct FRigUnit_SetBoneTranslation : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x130(0x8)(None)
	struct FVector                               Translation;                                       // 0x138(0x18)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x150(0x1)(None)
	uint8                                        Pad_1950[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x154(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x158(0x1)(None)
	uint8                                        Pad_1951[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedBone;                                        // 0x160(0x20)(None)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlColor
struct FRigUnit_GetControlColor : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(None)
	struct FLinearColor                          Color;                                             // 0x10(0x10)(None)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x20(0x20)(None)
};

// 0x40 (0x170 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlColor
struct FRigUnit_SetControlColor : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(None)
	struct FLinearColor                          Color;                                             // 0x138(0x10)(None)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x148(0x20)(None)
	uint8                                        Pad_1953[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlDrivenList
struct FRigUnit_GetControlDrivenList : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(None)
	TArray<struct FRigElementKey>                Driven;                                            // 0x10(0x10)(None)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x20(0x20)(None)
};

// 0x40 (0x170 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlDrivenList
struct FRigUnit_SetControlDrivenList : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(None)
	TArray<struct FRigElementKey>                Driven;                                            // 0x138(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x148(0x20)(None)
	uint8                                        Pad_1956[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0x1D0 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlOffset
struct FRigUnit_SetControlOffset : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(None)
	uint8                                        Pad_1958[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Offset;                                            // 0x140(0x60)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x1A0(0x1)(None)
	uint8                                        Pad_1959[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0x1A8(0x20)(None)
	uint8                                        Pad_195A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetShapeTransform
struct FRigUnit_GetShapeTransform : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(None)
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x70(0x20)(None)
};

// 0x90 (0x1C0 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetShapeTransform
struct FRigUnit_SetShapeTransform : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(None)
	uint8                                        Pad_195E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x140(0x60)(None)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x1A0(0x20)(None)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlBool
struct FRigUnit_SetControlBool : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(None)
	bool                                         BoolValue;                                         // 0x138(0x1)(None)
	uint8                                        Pad_1960[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0x140(0x20)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlBool_Entry
struct FRigUnit_SetMultiControlBool_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(None)
	bool                                         BoolValue;                                         // 0x8(0x1)(None)
	uint8                                        Pad_1961[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x150 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetMultiControlBool
struct FRigUnit_SetMultiControlBool : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlBool_Entry> Entries;                                           // 0x130(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x140(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlFloat
struct FRigUnit_SetControlFloat : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(None)
	float                                        Weight;                                            // 0x138(0x4)(None)
	float                                        FloatValue;                                        // 0x13C(0x4)(None)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x140(0x20)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat_Entry
struct FRigUnit_SetMultiControlFloat_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(None)
	float                                        FloatValue;                                        // 0x8(0x4)(None)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat
struct FRigUnit_SetMultiControlFloat : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlFloat_Entry> Entries;                                           // 0x130(0x10)(AutoWeak, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Weight;                                            // 0x140(0x4)(None)
	uint8                                        Pad_1965[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x148(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1966[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlInteger
struct FRigUnit_SetControlInteger : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(None)
	int32                                        Weight;                                            // 0x138(0x4)(None)
	int32                                        IntegerValue;                                      // 0x13C(0x4)(None)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x140(0x20)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger_Entry
struct FRigUnit_SetMultiControlInteger_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(None)
	int32                                        IntegerValue;                                      // 0x8(0x4)(None)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger
struct FRigUnit_SetMultiControlInteger : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlInteger_Entry> Entries;                                           // 0x130(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Weight;                                            // 0x140(0x4)(None)
	uint8                                        Pad_196B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x148(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_196C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x170 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlVector2D
struct FRigUnit_SetControlVector2D : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(None)
	float                                        Weight;                                            // 0x138(0x4)(None)
	uint8                                        Pad_196E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Vector;                                            // 0x140(0x10)(None)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x150(0x20)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D_Entry
struct FRigUnit_SetMultiControlVector2D_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(None)
	struct FVector2D                             Vector;                                            // 0x8(0x10)(None)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D
struct FRigUnit_SetMultiControlVector2D : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlVector2D_Entry> Entries;                                           // 0x130(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Weight;                                            // 0x140(0x4)(None)
	uint8                                        Pad_198A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x148(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_198B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x180 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlVector
struct FRigUnit_SetControlVector : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(None)
	float                                        Weight;                                            // 0x138(0x4)(None)
	uint8                                        Pad_198C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Vector;                                            // 0x140(0x18)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x158(0x1)(None)
	uint8                                        Pad_198D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0x160(0x20)(None)
};

// 0x50 (0x180 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlRotator
struct FRigUnit_SetControlRotator : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(None)
	float                                        Weight;                                            // 0x138(0x4)(None)
	uint8                                        Pad_198F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Rotator;                                           // 0x140(0x18)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x158(0x1)(None)
	uint8                                        Pad_1990[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0x160(0x20)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator_Entry
struct FRigUnit_SetMultiControlRotator_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(None)
	struct FRotator                              Rotator;                                           // 0x8(0x18)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x20(0x1)(None)
	uint8                                        Pad_1992[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator
struct FRigUnit_SetMultiControlRotator : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlRotator_Entry> Entries;                                           // 0x130(0x10)(AutoWeak, ContainsInstancedReference, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Weight;                                            // 0x140(0x4)(None)
	uint8                                        Pad_1994[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x148(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1996[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0x1D0 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlTransform
struct FRigUnit_SetControlTransform : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x130(0x8)(None)
	float                                        Weight;                                            // 0x138(0x4)(None)
	uint8                                        Pad_199A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x140(0x60)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x1A0(0x1)(None)
	uint8                                        Pad_199C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0x1A8(0x20)(None)
	uint8                                        Pad_199D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlVisibility
struct FRigUnit_GetControlVisibility : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(None)
	bool                                         bVisible;                                          // 0x14(0x1)(None)
	uint8                                        Pad_199F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0x18(0x20)(None)
};

// 0x40 (0x170 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetControlVisibility
struct FRigUnit_SetControlVisibility : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(None)
	uint8                                        Pad_19A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Pattern;                                           // 0x140(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bVisible;                                          // 0x150(0x1)(None)
	uint8                                        Pad_19A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x158(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19A8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetCurveValue
struct FRigUnit_SetCurveValue : public FRigUnitMutable
{
public:
	class FName                                  Curve;                                             // 0x130(0x8)(None)
	float                                        Value;                                             // 0x138(0x4)(None)
	uint8                                        Pad_19A9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedCurveIndex;                                  // 0x140(0x20)(None)
};

// 0xC0 (0x1F0 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetRelativeBoneTransform
struct FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x130(0x8)(None)
	class FName                                  Space;                                             // 0x138(0x8)(None)
	struct FTransform                            Transform;                                         // 0x140(0x60)(None)
	float                                        Weight;                                            // 0x1A0(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x1A4(0x1)(None)
	uint8                                        Pad_19AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedBone;                                        // 0x1A8(0x20)(None)
	struct FCachedRigElement                     CachedSpaceIndex;                                  // 0x1C8(0x20)(None)
	uint8                                        Pad_19AD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0x200 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetRelativeTransformForItem
struct FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(None)
	struct FRigElementKey                        Parent;                                            // 0x13C(0xC)(None)
	bool                                         bParentInitial;                                    // 0x148(0x1)(None)
	uint8                                        Pad_19B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x150(0x60)(None)
	float                                        Weight;                                            // 0x1B0(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x1B4(0x1)(None)
	uint8                                        Pad_19B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedChild;                                       // 0x1B8(0x20)(None)
	struct FCachedRigElement                     CachedParent;                                      // 0x1D8(0x20)(None)
	uint8                                        Pad_19B2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x1B0 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetRelativeTranslationForItem
struct FRigUnit_SetRelativeTranslationForItem : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(None)
	struct FRigElementKey                        Parent;                                            // 0x13C(0xC)(None)
	bool                                         bParentInitial;                                    // 0x148(0x1)(None)
	uint8                                        Pad_19B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Value;                                             // 0x150(0x18)(None)
	float                                        Weight;                                            // 0x168(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x16C(0x1)(None)
	uint8                                        Pad_19B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedChild;                                       // 0x170(0x20)(None)
	struct FCachedRigElement                     CachedParent;                                      // 0x190(0x20)(None)
};

// 0x90 (0x1C0 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetRelativeRotationForItem
struct FRigUnit_SetRelativeRotationForItem : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(None)
	struct FRigElementKey                        Parent;                                            // 0x13C(0xC)(None)
	bool                                         bParentInitial;                                    // 0x148(0x1)(None)
	uint8                                        Pad_19B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x150(0x20)(None)
	float                                        Weight;                                            // 0x170(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x174(0x1)(None)
	uint8                                        Pad_19B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedChild;                                       // 0x178(0x20)(None)
	struct FCachedRigElement                     CachedParent;                                      // 0x198(0x20)(None)
	uint8                                        Pad_19B9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x230 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetSpaceInitialTransform
struct FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable
{
public:
	class FName                                  SpaceName;                                         // 0x130(0x8)(None)
	uint8                                        Pad_19BB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x140(0x60)(None)
	struct FTransform                            Result;                                            // 0x1A0(0x60)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x200(0x1)(None)
	uint8                                        Pad_19BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedSpaceIndex;                                  // 0x208(0x20)(None)
	uint8                                        Pad_19C0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0x1D0 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetSpaceTransform
struct FRigUnit_SetSpaceTransform : public FRigUnitMutable
{
public:
	class FName                                  Space;                                             // 0x130(0x8)(None)
	float                                        Weight;                                            // 0x138(0x4)(None)
	uint8                                        Pad_19C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x140(0x60)(None)
	enum class ERigVMTransformSpace              SpaceType;                                         // 0x1A0(0x1)(None)
	uint8                                        Pad_19C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedSpaceIndex;                                  // 0x1A8(0x20)(None)
	uint8                                        Pad_19C5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0x1D0 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetTransform
struct FRigUnit_SetTransform : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x13C(0x1)(None)
	bool                                         bInitial;                                          // 0x13D(0x1)(None)
	uint8                                        Pad_19C7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x140(0x60)(None)
	float                                        Weight;                                            // 0x1A0(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x1A4(0x1)(None)
	uint8                                        Pad_19C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x1A8(0x20)(None)
	uint8                                        Pad_19C9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x180 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetTranslation
struct FRigUnit_SetTranslation : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x13C(0x1)(None)
	bool                                         bInitial;                                          // 0x13D(0x1)(None)
	uint8                                        Pad_19CA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Value;                                             // 0x140(0x18)(None)
	float                                        Weight;                                            // 0x158(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x15C(0x1)(None)
	uint8                                        Pad_19CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x160(0x20)(None)
};

// 0x60 (0x190 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetRotation
struct FRigUnit_SetRotation : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x13C(0x1)(None)
	bool                                         bInitial;                                          // 0x13D(0x1)(None)
	uint8                                        Pad_19CC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x140(0x20)(None)
	float                                        Weight;                                            // 0x160(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x164(0x1)(None)
	uint8                                        Pad_19CD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x168(0x20)(None)
	uint8                                        Pad_19CE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x180 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetScale
struct FRigUnit_SetScale : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(None)
	enum class ERigVMTransformSpace              Space;                                             // 0x13C(0x1)(None)
	bool                                         bInitial;                                          // 0x13D(0x1)(None)
	uint8                                        Pad_19CF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Scale;                                             // 0x140(0x18)(None)
	float                                        Weight;                                            // 0x158(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x15C(0x1)(None)
	uint8                                        Pad_19D0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x160(0x20)(None)
};

// 0x40 (0x170 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetTransformArray
struct FRigUnit_SetTransformArray : public FRigUnitMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x130(0x10)(AutoWeak, AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ERigVMTransformSpace              Space;                                             // 0x140(0x1)(None)
	bool                                         bInitial;                                          // 0x141(0x1)(None)
	uint8                                        Pad_19D3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    Transforms;                                        // 0x148(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Weight;                                            // 0x158(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x15C(0x1)(None)
	uint8                                        Pad_19D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             CachedIndex;                                       // 0x160(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x40 (0x170 - 0x130)
// ScriptStruct ControlRig.RigUnit_SetTransformItemArray
struct FRigUnit_SetTransformItemArray : public FRigUnitMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x130(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ERigVMTransformSpace              Space;                                             // 0x140(0x1)(None)
	bool                                         bInitial;                                          // 0x141(0x1)(None)
	uint8                                        Pad_19D5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    Transforms;                                        // 0x148(0x10)(Protected, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Weight;                                            // 0x158(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x15C(0x1)(None)
	uint8                                        Pad_19D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             CachedIndex;                                       // 0x160(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_UnsetCurveValue
struct FRigUnit_UnsetCurveValue : public FRigUnitMutable
{
public:
	class FName                                  Curve;                                             // 0x130(0x8)(None)
	struct FCachedRigElement                     CachedCurveIndex;                                  // 0x138(0x20)(None)
	uint8                                        Pad_19D8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Transform
struct FRigUnit_ToWorldSpace_Transform : public FRigUnit
{
public:
	uint8                                        Pad_19DA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x60)(None)
	struct FTransform                            World;                                             // 0x70(0x60)(None)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToRigSpace_Transform
struct FRigUnit_ToRigSpace_Transform : public FRigUnit
{
public:
	uint8                                        Pad_19DB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x60)(None)
	struct FTransform                            Global;                                            // 0x70(0x60)(None)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Location
struct FRigUnit_ToWorldSpace_Location : public FRigUnit
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(None)
	struct FVector                               World;                                             // 0x20(0x18)(None)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToRigSpace_Location
struct FRigUnit_ToRigSpace_Location : public FRigUnit
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(None)
	struct FVector                               Global;                                            // 0x20(0x18)(None)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Rotation
struct FRigUnit_ToWorldSpace_Rotation : public FRigUnit
{
public:
	uint8                                        Pad_19DD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x20)(None)
	struct FQuat                                 World;                                             // 0x30(0x20)(None)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToRigSpace_Rotation
struct FRigUnit_ToRigSpace_Rotation : public FRigUnit
{
public:
	uint8                                        Pad_19DE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x20)(None)
	struct FQuat                                 Global;                                            // 0x30(0x20)(None)
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_BoneHarmonics_BoneTarget
struct FRigUnit_BoneHarmonics_BoneTarget
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(None)
	float                                        Ratio;                                             // 0x8(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_Harmonics_TargetItem
struct FRigUnit_Harmonics_TargetItem
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(None)
	float                                        Ratio;                                             // 0xC(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigUnit_BoneHarmonics_WorkData
struct FRigUnit_BoneHarmonics_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x0(0x10)(None)
	struct FVector                               WaveTime;                                          // 0x10(0x18)(None)
};

// 0xC0 (0x1F0 - 0x130)
// ScriptStruct ControlRig.RigUnit_BoneHarmonics
struct FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigUnit_BoneHarmonics_BoneTarget> Bones;                                             // 0x130(0x10)(ContainsInstancedReference, BlueprintCallable, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               WaveSpeed;                                         // 0x140(0x18)(None)
	struct FVector                               WaveFrequency;                                     // 0x158(0x18)(None)
	struct FVector                               WaveAmplitude;                                     // 0x170(0x18)(None)
	struct FVector                               WaveOffset;                                        // 0x188(0x18)(None)
	struct FVector                               WaveNoise;                                         // 0x1A0(0x18)(None)
	enum class ERigVMAnimEasingType              WaveEase;                                          // 0x1B8(0x1)(None)
	uint8                                        Pad_19E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaveMinimum;                                       // 0x1BC(0x4)(None)
	float                                        WaveMaximum;                                       // 0x1C0(0x4)(None)
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x1C4(0x1)(None)
	bool                                         bPropagateToChildren;                              // 0x1C5(0x1)(None)
	uint8                                        Pad_19E3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_BoneHarmonics_WorkData       WorkData;                                          // 0x1C8(0x28)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0xC0 (0x1F0 - 0x130)
// ScriptStruct ControlRig.RigUnit_ItemHarmonics
struct FRigUnit_ItemHarmonics : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigUnit_Harmonics_TargetItem> Targets;                                           // 0x130(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               WaveSpeed;                                         // 0x140(0x18)(None)
	struct FVector                               WaveFrequency;                                     // 0x158(0x18)(None)
	struct FVector                               WaveAmplitude;                                     // 0x170(0x18)(None)
	struct FVector                               WaveOffset;                                        // 0x188(0x18)(None)
	struct FVector                               WaveNoise;                                         // 0x1A0(0x18)(None)
	enum class ERigVMAnimEasingType              WaveEase;                                          // 0x1B8(0x1)(None)
	uint8                                        Pad_19E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaveMinimum;                                       // 0x1BC(0x4)(None)
	float                                        WaveMaximum;                                       // 0x1C0(0x4)(None)
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x1C4(0x1)(None)
	uint8                                        Pad_19E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_BoneHarmonics_WorkData       WorkData;                                          // 0x1C8(0x28)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Reach
struct FRigUnit_ChainHarmonics_Reach
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(None)
	uint8                                        Pad_19E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReachTarget;                                       // 0x8(0x18)(None)
	struct FVector                               ReachAxis;                                         // 0x20(0x18)(None)
	float                                        ReachMinimum;                                      // 0x38(0x4)(None)
	float                                        ReachMaximum;                                      // 0x3C(0x4)(None)
	enum class ERigVMAnimEasingType              ReachEase;                                         // 0x40(0x1)(None)
	uint8                                        Pad_19E9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Wave
struct FRigUnit_ChainHarmonics_Wave
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(None)
	uint8                                        Pad_19EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               WaveFrequency;                                     // 0x8(0x18)(None)
	struct FVector                               WaveAmplitude;                                     // 0x20(0x18)(None)
	struct FVector                               WaveOffset;                                        // 0x38(0x18)(None)
	struct FVector                               WaveNoise;                                         // 0x50(0x18)(None)
	float                                        WaveMinimum;                                       // 0x68(0x4)(None)
	float                                        WaveMaximum;                                       // 0x6C(0x4)(None)
	enum class ERigVMAnimEasingType              WaveEase;                                          // 0x70(0x1)(None)
	uint8                                        Pad_19EC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Pendulum
struct FRigUnit_ChainHarmonics_Pendulum
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(None)
	uint8                                        Pad_19EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PendulumStiffness;                                 // 0x4(0x4)(None)
	struct FVector                               PendulumGravity;                                   // 0x8(0x18)(None)
	float                                        PendulumBlend;                                     // 0x20(0x4)(None)
	float                                        PendulumDrag;                                      // 0x24(0x4)(None)
	float                                        PendulumMinimum;                                   // 0x28(0x4)(None)
	float                                        PendulumMaximum;                                   // 0x2C(0x4)(None)
	enum class ERigVMAnimEasingType              PendulumEase;                                      // 0x30(0x1)(None)
	uint8                                        Pad_19F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               UnwindAxis;                                        // 0x38(0x18)(None)
	float                                        UnwindMinimum;                                     // 0x50(0x4)(None)
	float                                        UnwindMaximum;                                     // 0x54(0x4)(None)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_WorkData
struct FRigUnit_ChainHarmonics_WorkData
{
public:
	struct FVector                               Time;                                              // 0x0(0x18)(None)
	TArray<struct FCachedRigElement>             Items;                                             // 0x18(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                Ratio;                                             // 0x28(0x10)(AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       LocalTip;                                          // 0x38(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       PendulumTip;                                       // 0x48(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       PendulumPosition;                                  // 0x58(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       PendulumVelocity;                                  // 0x68(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       HierarchyLine;                                     // 0x78(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       VelocityLines;                                     // 0x88(0x10)(None)
};

// 0x2D0 (0x400 - 0x130)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics
struct FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  ChainRoot;                                         // 0x130(0x8)(None)
	struct FVector                               Speed;                                             // 0x138(0x18)(None)
	struct FRigUnit_ChainHarmonics_Reach         Reach;                                             // 0x150(0x48)(None)
	struct FRigUnit_ChainHarmonics_Wave          Wave;                                              // 0x198(0x78)(None)
	struct FRuntimeFloatCurve                    WaveCurve;                                         // 0x210(0x88)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigUnit_ChainHarmonics_Pendulum      Pendulum;                                          // 0x298(0x58)(None)
	bool                                         bDrawDebug;                                        // 0x2F0(0x1)(None)
	uint8                                        Pad_19F2[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            DrawWorldOffset;                                   // 0x300(0x60)(None)
	struct FRigUnit_ChainHarmonics_WorkData      WorkData;                                          // 0x360(0x98)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19F3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2D0 (0x400 - 0x130)
// ScriptStruct ControlRig.RigUnit_ChainHarmonicsPerItem
struct FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        ChainRoot;                                         // 0x130(0xC)(None)
	uint8                                        Pad_19F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Speed;                                             // 0x140(0x18)(None)
	struct FRigUnit_ChainHarmonics_Reach         Reach;                                             // 0x158(0x48)(None)
	struct FRigUnit_ChainHarmonics_Wave          Wave;                                              // 0x1A0(0x78)(None)
	struct FRuntimeFloatCurve                    WaveCurve;                                         // 0x218(0x88)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigUnit_ChainHarmonics_Pendulum      Pendulum;                                          // 0x2A0(0x58)(None)
	bool                                         bDrawDebug;                                        // 0x2F8(0x1)(None)
	uint8                                        Pad_19F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            DrawWorldOffset;                                   // 0x300(0x60)(None)
	struct FRigUnit_ChainHarmonics_WorkData      WorkData;                                          // 0x360(0x98)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19F7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimBone_Target
struct FRigUnit_AimBone_Target
{
public:
	float                                        Weight;                                            // 0x0(0x4)(None)
	uint8                                        Pad_19F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Axis;                                              // 0x8(0x18)(None)
	struct FVector                               Target;                                            // 0x20(0x18)(None)
	enum class EControlRigVectorKind             Kind;                                              // 0x38(0x1)(None)
	uint8                                        Pad_19FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Space;                                             // 0x3C(0x8)(None)
	uint8                                        Pad_19FC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimItem_Target
struct FRigUnit_AimItem_Target
{
public:
	float                                        Weight;                                            // 0x0(0x4)(None)
	uint8                                        Pad_19FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Axis;                                              // 0x8(0x18)(None)
	struct FVector                               Target;                                            // 0x20(0x18)(None)
	enum class EControlRigVectorKind             Kind;                                              // 0x38(0x1)(None)
	uint8                                        Pad_19FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        Space;                                             // 0x3C(0xC)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimBone_DebugSettings
struct FRigUnit_AimBone_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(None)
	uint8                                        Pad_1A03[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x4(0x4)(None)
	uint8                                        Pad_1A04[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x10(0x60)(None)
};

// 0x228 (0x230 - 0x8)
// ScriptStruct ControlRig.RigUnit_AimBoneMath
struct FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase
{
public:
	uint8                                        Pad_1A06[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InputTransform;                                    // 0x10(0x60)(None)
	struct FRigUnit_AimItem_Target               Primary;                                           // 0x70(0x48)(None)
	struct FRigUnit_AimItem_Target               Secondary;                                         // 0xB8(0x48)(None)
	float                                        Weight;                                            // 0x100(0x4)(None)
	uint8                                        Pad_1A07[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Result;                                            // 0x110(0x60)(None)
	struct FRigUnit_AimBone_DebugSettings        DebugSettings;                                     // 0x170(0x70)(None)
	struct FCachedRigElement                     PrimaryCachedSpace;                                // 0x1E0(0x20)(None)
	struct FCachedRigElement                     SecondaryCachedSpace;                              // 0x200(0x20)(None)
	bool                                         bIsInitialized;                                    // 0x220(0x1)(None)
	uint8                                        Pad_1A0A[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x180 (0x2B0 - 0x130)
// ScriptStruct ControlRig.RigUnit_AimBone
struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  bone;                                              // 0x130(0x8)(None)
	struct FRigUnit_AimBone_Target               Primary;                                           // 0x138(0x48)(None)
	struct FRigUnit_AimBone_Target               Secondary;                                         // 0x180(0x48)(None)
	float                                        Weight;                                            // 0x1C8(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x1CC(0x1)(None)
	uint8                                        Pad_1A0D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimBone_DebugSettings        DebugSettings;                                     // 0x1D0(0x70)(None)
	struct FCachedRigElement                     CachedBoneIndex;                                   // 0x240(0x20)(None)
	struct FCachedRigElement                     PrimaryCachedSpace;                                // 0x260(0x20)(None)
	struct FCachedRigElement                     SecondaryCachedSpace;                              // 0x280(0x20)(None)
	bool                                         bIsInitialized;                                    // 0x2A0(0x1)(None)
	uint8                                        Pad_1A0E[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x190 (0x2C0 - 0x130)
// ScriptStruct ControlRig.RigUnit_AimItem
struct FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(None)
	uint8                                        Pad_1A0F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimItem_Target               Primary;                                           // 0x140(0x48)(None)
	struct FRigUnit_AimItem_Target               Secondary;                                         // 0x188(0x48)(None)
	float                                        Weight;                                            // 0x1D0(0x4)(None)
	uint8                                        Pad_1A11[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimBone_DebugSettings        DebugSettings;                                     // 0x1E0(0x70)(None)
	struct FCachedRigElement                     CachedItem;                                        // 0x250(0x20)(None)
	struct FCachedRigElement                     PrimaryCachedSpace;                                // 0x270(0x20)(None)
	struct FCachedRigElement                     SecondaryCachedSpace;                              // 0x290(0x20)(None)
	bool                                         bIsInitialized;                                    // 0x2B0(0x1)(None)
	uint8                                        Pad_1A12[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimConstraint_WorldUp
struct FRigUnit_AimConstraint_WorldUp
{
public:
	struct FVector                               Target;                                            // 0x0(0x18)(None)
	enum class EControlRigVectorKind             Kind;                                              // 0x18(0x1)(None)
	uint8                                        Pad_1A14[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        Space;                                             // 0x1C(0xC)(None)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimConstraint_AdvancedSettings
struct FRigUnit_AimConstraint_AdvancedSettings
{
public:
	struct FRigUnit_AimBone_DebugSettings        DebugSettings;                                     // 0x0(0x70)(None)
	enum class EEulerRotationOrder               RotationOrderForFilter;                            // 0x70(0x1)(None)
	uint8                                        Pad_1A17[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.ConstraintParent
struct FConstraintParent
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(None)
	float                                        Weight;                                            // 0xC(0x4)(None)
};

// 0x160 (0x290 - 0x130)
// ScriptStruct ControlRig.RigUnit_AimConstraintLocalSpaceOffset
struct FRigUnit_AimConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(None)
	bool                                         bMaintainOffset;                                   // 0x13C(0x1)(None)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x13D(0x3)(None)
	struct FVector                               AimAxis;                                           // 0x140(0x18)(None)
	struct FVector                               UpAxis;                                            // 0x158(0x18)(None)
	struct FRigUnit_AimConstraint_WorldUp        WorldUp;                                           // 0x170(0x28)(None)
	TArray<struct FConstraintParent>             Parents;                                           // 0x198(0x10)(AutoWeak, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A1A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimConstraint_AdvancedSettings AdvancedSettings;                                  // 0x1B0(0x80)(None)
	float                                        Weight;                                            // 0x230(0x4)(None)
	uint8                                        Pad_1A1B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     WorldUpSpaceCache;                                 // 0x238(0x20)(None)
	struct FCachedRigElement                     ChildCache;                                        // 0x258(0x20)(None)
	TArray<struct FCachedRigElement>             ParentCaches;                                      // 0x278(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bIsInitialized;                                    // 0x288(0x1)(None)
	uint8                                        Pad_1A1C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimit
struct FRigUnit_CCDIK_RotationLimit
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(None)
	float                                        Limit;                                             // 0x8(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimitPerItem
struct FRigUnit_CCDIK_RotationLimitPerItem
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(None)
	float                                        Limit;                                             // 0xC(0x4)(None)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.RigUnit_CCDIK_WorkData
struct FRigUnit_CCDIK_WorkData
{
public:
	TArray<struct FCCDIKChainLink>               Chain;                                             // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x10(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                RotationLimitIndex;                                // 0x20(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                RotationLimitsPerItem;                             // 0x30(0x10)(None)
	struct FCachedRigElement                     CachedEffector;                                    // 0x40(0x20)(None)
};

// 0x100 (0x230 - 0x130)
// ScriptStruct ControlRig.RigUnit_CCDIK
struct FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x130(0x8)(None)
	class FName                                  EffectorBone;                                      // 0x138(0x8)(None)
	struct FTransform                            EffectorTransform;                                 // 0x140(0x60)(None)
	float                                        Precision;                                         // 0x1A0(0x4)(None)
	float                                        Weight;                                            // 0x1A4(0x4)(None)
	int32                                        MaxIterations;                                     // 0x1A8(0x4)(None)
	bool                                         bStartFromTail;                                    // 0x1AC(0x1)(None)
	uint8                                        Pad_1A1F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseRotationLimit;                                 // 0x1B0(0x4)(None)
	uint8                                        Pad_1A20[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigUnit_CCDIK_RotationLimit>  RotationLimits;                                    // 0x1B8(0x10)(AdvancedDisplay, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bPropagateToChildren;                              // 0x1C8(0x1)(None)
	uint8                                        Pad_1A21[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_CCDIK_WorkData               WorkData;                                          // 0x1D0(0x60)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x100 (0x230 - 0x130)
// ScriptStruct ControlRig.RigUnit_CCDIKPerItem
struct FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x130(0x10)(AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            EffectorTransform;                                 // 0x140(0x60)(None)
	float                                        Precision;                                         // 0x1A0(0x4)(None)
	float                                        Weight;                                            // 0x1A4(0x4)(None)
	int32                                        MaxIterations;                                     // 0x1A8(0x4)(None)
	bool                                         bStartFromTail;                                    // 0x1AC(0x1)(None)
	uint8                                        Pad_1A23[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseRotationLimit;                                 // 0x1B0(0x4)(None)
	uint8                                        Pad_1A24[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;                                    // 0x1B8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bPropagateToChildren;                              // 0x1C8(0x1)(None)
	uint8                                        Pad_1A25[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_CCDIK_WorkData               WorkData;                                          // 0x1D0(0x60)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x100 (0x230 - 0x130)
// ScriptStruct ControlRig.RigUnit_CCDIKItemArray
struct FRigUnit_CCDIKItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x130(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            EffectorTransform;                                 // 0x140(0x60)(None)
	float                                        Precision;                                         // 0x1A0(0x4)(None)
	float                                        Weight;                                            // 0x1A4(0x4)(None)
	int32                                        MaxIterations;                                     // 0x1A8(0x4)(None)
	bool                                         bStartFromTail;                                    // 0x1AC(0x1)(None)
	uint8                                        Pad_1A28[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseRotationLimit;                                 // 0x1B0(0x4)(None)
	uint8                                        Pad_1A29[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;                                    // 0x1B8(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bPropagateToChildren;                              // 0x1C8(0x1)(None)
	uint8                                        Pad_1A2A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_CCDIK_WorkData               WorkData;                                          // 0x1D0(0x60)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.RigUnit_DistributeRotation_Rotation
struct FRigUnit_DistributeRotation_Rotation
{
public:
	struct FQuat                                 Rotation;                                          // 0x0(0x20)(None)
	float                                        Ratio;                                             // 0x20(0x4)(None)
	uint8                                        Pad_1A2C[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ControlRig.RigUnit_DistributeRotation_WorkData
struct FRigUnit_DistributeRotation_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x0(0x10)(AutoWeak, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                ItemRotationA;                                     // 0x10(0x10)(AutoWeak, ContainsInstancedReference, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                ItemRotationB;                                     // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                ItemRotationT;                                     // 0x30(0x10)(SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTransform>                    ItemLocalTransforms;                               // 0x40(0x10)(None)
};

// 0x80 (0x1B0 - 0x130)
// ScriptStruct ControlRig.RigUnit_DistributeRotation
struct FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x130(0x8)(None)
	class FName                                  EndBone;                                           // 0x138(0x8)(None)
	TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;                                         // 0x140(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x150(0x1)(None)
	uint8                                        Pad_1A31[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x154(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x158(0x1)(None)
	uint8                                        Pad_1A32[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_DistributeRotation_WorkData  WorkData;                                          // 0x160(0x50)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x80 (0x1B0 - 0x130)
// ScriptStruct ControlRig.RigUnit_DistributeRotationForCollection
struct FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x130(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;                                         // 0x140(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x150(0x1)(None)
	uint8                                        Pad_1A34[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x154(0x4)(None)
	struct FRigUnit_DistributeRotation_WorkData  WorkData;                                          // 0x158(0x50)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A35[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x1B0 - 0x130)
// ScriptStruct ControlRig.RigUnit_DistributeRotationForItemArray
struct FRigUnit_DistributeRotationForItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x130(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;                                         // 0x140(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x150(0x1)(None)
	uint8                                        Pad_1A36[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x154(0x4)(None)
	struct FRigUnit_DistributeRotation_WorkData  WorkData;                                          // 0x158(0x50)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A37[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigUnit_FABRIK_WorkData
struct FRigUnit_FABRIK_WorkData
{
public:
	TArray<struct FFABRIKChainLink>              Chain;                                             // 0x0(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x10(0x10)(None)
	struct FCachedRigElement                     CachedEffector;                                    // 0x20(0x20)(None)
};

// 0xD0 (0x200 - 0x130)
// ScriptStruct ControlRig.RigUnit_FABRIK
struct FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x130(0x8)(None)
	class FName                                  EffectorBone;                                      // 0x138(0x8)(None)
	struct FTransform                            EffectorTransform;                                 // 0x140(0x60)(None)
	float                                        Precision;                                         // 0x1A0(0x4)(None)
	float                                        Weight;                                            // 0x1A4(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x1A8(0x1)(None)
	uint8                                        Pad_1A39[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxIterations;                                     // 0x1AC(0x4)(None)
	struct FRigUnit_FABRIK_WorkData              WorkData;                                          // 0x1B0(0x40)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bSetEffectorTransform;                             // 0x1F0(0x1)(None)
	uint8                                        Pad_1A3A[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0x200 - 0x130)
// ScriptStruct ControlRig.RigUnit_FABRIKPerItem
struct FRigUnit_FABRIKPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x130(0x10)(AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            EffectorTransform;                                 // 0x140(0x60)(None)
	float                                        Precision;                                         // 0x1A0(0x4)(None)
	float                                        Weight;                                            // 0x1A4(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x1A8(0x1)(None)
	uint8                                        Pad_1A3C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxIterations;                                     // 0x1AC(0x4)(None)
	struct FRigUnit_FABRIK_WorkData              WorkData;                                          // 0x1B0(0x40)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bSetEffectorTransform;                             // 0x1F0(0x1)(None)
	uint8                                        Pad_1A3D[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0x200 - 0x130)
// ScriptStruct ControlRig.RigUnit_FABRIKItemArray
struct FRigUnit_FABRIKItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x130(0x10)(NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTransform                            EffectorTransform;                                 // 0x140(0x60)(None)
	float                                        Precision;                                         // 0x1A0(0x4)(None)
	float                                        Weight;                                            // 0x1A4(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x1A8(0x1)(None)
	uint8                                        Pad_1A3F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxIterations;                                     // 0x1AC(0x4)(None)
	struct FRigUnit_FABRIK_WorkData              WorkData;                                          // 0x1B0(0x40)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bSetEffectorTransform;                             // 0x1F0(0x1)(None)
	uint8                                        Pad_1A40[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve_Rotation
struct FRigUnit_FitChainToCurve_Rotation
{
public:
	struct FQuat                                 Rotation;                                          // 0x0(0x20)(None)
	float                                        Ratio;                                             // 0x20(0x4)(None)
	uint8                                        Pad_1A42[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve_DebugSettings
struct FRigUnit_FitChainToCurve_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(None)
	uint8                                        Pad_1A43[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x4(0x4)(None)
	struct FLinearColor                          CurveColor;                                        // 0x8(0x10)(None)
	struct FLinearColor                          SegmentsColor;                                     // 0x18(0x10)(None)
	uint8                                        Pad_1A44[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x30(0x60)(None)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve_WorkData
struct FRigUnit_FitChainToCurve_WorkData
{
public:
	float                                        ChainLength;                                       // 0x0(0x4)(None)
	uint8                                        Pad_1A45[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       ItemPositions;                                     // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                ItemSegments;                                      // 0x18(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                       CurvePositions;                                    // 0x28(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                CurveSegments;                                     // 0x38(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x48(0x10)(Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                ItemRotationA;                                     // 0x58(0x10)(AutoWeak, ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                ItemRotationB;                                     // 0x68(0x10)(AutoWeak, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                ItemRotationT;                                     // 0x78(0x10)(AutoWeak, ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTransform>                    ItemLocalTransforms;                               // 0x88(0x10)(None)
};

// 0x220 (0x350 - 0x130)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve
struct FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x130(0x8)(None)
	class FName                                  EndBone;                                           // 0x138(0x8)(None)
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x140(0x60)(None)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x1A0(0x1)(None)
	uint8                                        Pad_1A47[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Minimum;                                           // 0x1A4(0x4)(None)
	float                                        Maximum;                                           // 0x1A8(0x4)(None)
	int32                                        SamplingPrecision;                                 // 0x1AC(0x4)(None)
	struct FVector                               PrimaryAxis;                                       // 0x1B0(0x18)(None)
	struct FVector                               SecondaryAxis;                                     // 0x1C8(0x18)(None)
	struct FVector                               PoleVectorPosition;                                // 0x1E0(0x18)(None)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x1F8(0x10)(AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x208(0x1)(None)
	uint8                                        Pad_1A49[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x20C(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x210(0x1)(None)
	uint8                                        Pad_1A4A[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x220(0x90)(None)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x2B0(0x98)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A4D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x220 (0x350 - 0x130)
// ScriptStruct ControlRig.RigUnit_FitChainToCurvePerItem
struct FRigUnit_FitChainToCurvePerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x130(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x140(0x60)(None)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x1A0(0x1)(None)
	uint8                                        Pad_1A52[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Minimum;                                           // 0x1A4(0x4)(None)
	float                                        Maximum;                                           // 0x1A8(0x4)(None)
	int32                                        SamplingPrecision;                                 // 0x1AC(0x4)(None)
	struct FVector                               PrimaryAxis;                                       // 0x1B0(0x18)(None)
	struct FVector                               SecondaryAxis;                                     // 0x1C8(0x18)(None)
	struct FVector                               PoleVectorPosition;                                // 0x1E0(0x18)(None)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x1F8(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x208(0x1)(None)
	uint8                                        Pad_1A53[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x20C(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x210(0x1)(None)
	uint8                                        Pad_1A54[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x220(0x90)(None)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x2B0(0x98)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A55[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x220 (0x350 - 0x130)
// ScriptStruct ControlRig.RigUnit_FitChainToCurveItemArray
struct FRigUnit_FitChainToCurveItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x130(0x10)(BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x140(0x60)(None)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x1A0(0x1)(None)
	uint8                                        Pad_1A56[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Minimum;                                           // 0x1A4(0x4)(None)
	float                                        Maximum;                                           // 0x1A8(0x4)(None)
	int32                                        SamplingPrecision;                                 // 0x1AC(0x4)(None)
	struct FVector                               PrimaryAxis;                                       // 0x1B0(0x18)(None)
	struct FVector                               SecondaryAxis;                                     // 0x1C8(0x18)(None)
	struct FVector                               PoleVectorPosition;                                // 0x1E0(0x18)(None)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x1F8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x208(0x1)(None)
	uint8                                        Pad_1A59[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x20C(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x210(0x1)(None)
	uint8                                        Pad_1A5B[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x220(0x90)(None)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x2B0(0x98)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A5C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_PerBone
struct FRigUnit_ModifyBoneTransforms_PerBone
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(None)
	uint8                                        Pad_1A5D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_ModifyTransforms_WorkData
struct FRigUnit_ModifyTransforms_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x0(0x10)(None)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_WorkData
struct FRigUnit_ModifyBoneTransforms_WorkData : public FRigUnit_ModifyTransforms_WorkData
{
public:
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms
struct FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify;                                      // 0x130(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Weight;                                            // 0x140(0x4)(None)
	float                                        WeightMinimum;                                     // 0x144(0x4)(None)
	float                                        WeightMaximum;                                     // 0x148(0x4)(None)
	enum class EControlRigModifyBoneMode         Mode;                                              // 0x14C(0x1)(None)
	uint8                                        Pad_1A5E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_ModifyBoneTransforms_WorkData WorkData;                                          // 0x150(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigUnit_ModifyTransforms_PerItem
struct FRigUnit_ModifyTransforms_PerItem
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(None)
	uint8                                        Pad_1A5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(None)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_ModifyTransforms
struct FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigUnit_ModifyTransforms_PerItem> ItemToModify;                                      // 0x130(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Weight;                                            // 0x140(0x4)(None)
	float                                        WeightMinimum;                                     // 0x144(0x4)(None)
	float                                        WeightMaximum;                                     // 0x148(0x4)(None)
	enum class EControlRigModifyBoneMode         Mode;                                              // 0x14C(0x1)(None)
	uint8                                        Pad_1A60[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_ModifyTransforms_WorkData    WorkData;                                          // 0x150(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ControlRig.RigUnit_MultiFABRIK_WorkData
struct FRigUnit_MultiFABRIK_WorkData
{
public:
	uint8                                        Pad_1A61[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigUnit_MultiFABRIK_EndEffector
struct FRigUnit_MultiFABRIK_EndEffector
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(None)
	struct FVector                               Location;                                          // 0x8(0x18)(None)
};

// 0xA0 (0x1D0 - 0x130)
// ScriptStruct ControlRig.RigUnit_MultiFABRIK
struct FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  RootBone;                                          // 0x130(0x8)(None)
	TArray<struct FRigUnit_MultiFABRIK_EndEffector> Effectors;                                         // 0x138(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Precision;                                         // 0x148(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x14C(0x1)(None)
	uint8                                        Pad_1A62[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxIterations;                                     // 0x150(0x4)(None)
	uint8                                        Pad_1A63[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MultiFABRIK_WorkData         WorkData;                                          // 0x158(0x68)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bIsInitialized;                                    // 0x1C0(0x1)(None)
	uint8                                        Pad_1A64[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ControlRig.RigUnit_SlideChain_WorkData
struct FRigUnit_SlideChain_WorkData
{
public:
	float                                        ChainLength;                                       // 0x0(0x4)(None)
	uint8                                        Pad_1A65[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                ItemSegments;                                      // 0x8(0x10)(AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x18(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTransform>                    Transforms;                                        // 0x28(0x10)(AutoWeak, SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTransform>                    BlendedTransforms;                                 // 0x38(0x10)(None)
};

// 0x60 (0x190 - 0x130)
// ScriptStruct ControlRig.RigUnit_SlideChain
struct FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x130(0x8)(None)
	class FName                                  EndBone;                                           // 0x138(0x8)(None)
	float                                        SlideAmount;                                       // 0x140(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x144(0x1)(None)
	uint8                                        Pad_1A66[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_SlideChain_WorkData          WorkData;                                          // 0x148(0x48)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x60 (0x190 - 0x130)
// ScriptStruct ControlRig.RigUnit_SlideChainPerItem
struct FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x130(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        SlideAmount;                                       // 0x140(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x144(0x1)(None)
	uint8                                        Pad_1A67[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_SlideChain_WorkData          WorkData;                                          // 0x148(0x48)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x60 (0x190 - 0x130)
// ScriptStruct ControlRig.RigUnit_SlideChainItemArray
struct FRigUnit_SlideChainItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x130(0x10)(AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        SlideAmount;                                       // 0x140(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x144(0x1)(None)
	uint8                                        Pad_1A68[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_SlideChain_WorkData          WorkData;                                          // 0x148(0x48)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RegionScaleFactors
struct FRegionScaleFactors
{
public:
	float                                        PositiveWidth;                                     // 0x0(0x4)(None)
	float                                        NegativeWidth;                                     // 0x4(0x4)(None)
	float                                        PositiveHeight;                                    // 0x8(0x4)(None)
	float                                        NegativeHeight;                                    // 0xC(0x4)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ControlRig.SphericalRegion
struct FSphericalRegion
{
public:
	uint8                                        Pad_1A69[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.SphericalPoseReaderDebugSettings
struct FSphericalPoseReaderDebugSettings
{
public:
	bool                                         bDrawDebug;                                        // 0x0(0x1)(None)
	bool                                         bDraw2D;                                           // 0x1(0x1)(None)
	bool                                         bDrawLocalAxes;                                    // 0x2(0x1)(None)
	uint8                                        Pad_1A6A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DebugScale;                                        // 0x4(0x4)(None)
	int32                                        DebugSegments;                                     // 0x8(0x4)(None)
	float                                        DebugThickness;                                    // 0xC(0x4)(None)
};

// 0x1A0 (0x2D0 - 0x130)
// ScriptStruct ControlRig.RigUnit_SphericalPoseReader
struct FRigUnit_SphericalPoseReader : public FRigUnit_HighlevelBaseMutable
{
public:
	float                                        OutputParam;                                       // 0x130(0x4)(None)
	struct FRigElementKey                        DriverItem;                                        // 0x134(0xC)(None)
	struct FVector                               DriverAxis;                                        // 0x140(0x18)(None)
	struct FVector                               RotationOffset;                                    // 0x158(0x18)(None)
	float                                        ActiveRegionSize;                                  // 0x170(0x4)(None)
	struct FRegionScaleFactors                   ActiveRegionScaleFactors;                          // 0x174(0x10)(None)
	float                                        FalloffSize;                                       // 0x184(0x4)(None)
	struct FRegionScaleFactors                   FalloffRegionScaleFactors;                         // 0x188(0x10)(None)
	bool                                         FlipWidthScaling;                                  // 0x198(0x1)(None)
	bool                                         FlipHeightScaling;                                 // 0x199(0x1)(None)
	uint8                                        Pad_1A6C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        OptionalParentItem;                                // 0x19C(0xC)(None)
	struct FSphericalPoseReaderDebugSettings     Debug;                                             // 0x1A8(0x10)(None)
	struct FSphericalRegion                      InnerRegion;                                       // 0x1B8(0x14)(None)
	struct FSphericalRegion                      OuterRegion;                                       // 0x1CC(0x14)(None)
	struct FVector                               DriverNormal;                                      // 0x1E0(0x18)(None)
	struct FVector                               Driver2D;                                          // 0x1F8(0x18)(None)
	struct FCachedRigElement                     DriverCache;                                       // 0x210(0x20)(None)
	struct FCachedRigElement                     OptionalParentCache;                               // 0x230(0x20)(None)
	struct FTransform                            LocalDriverTransformInit;                          // 0x250(0x60)(None)
	struct FVector                               CachedRotationOffset;                              // 0x2B0(0x18)(None)
	bool                                         bCachedInitTransforms;                             // 0x2C8(0x1)(None)
	uint8                                        Pad_1A6F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.RigUnit_SpringIK_DebugSettings
struct FRigUnit_SpringIK_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(None)
	uint8                                        Pad_1A70[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x4(0x4)(None)
	struct FLinearColor                          Color;                                             // 0x8(0x10)(None)
	uint8                                        Pad_1A71[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x20(0x60)(None)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct ControlRig.RigUnit_SpringIK_WorkData
struct FRigUnit_SpringIK_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedBones;                                       // 0x0(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FCachedRigElement                     CachedPoleVector;                                  // 0x10(0x20)(None)
	TArray<struct FTransform>                    Transforms;                                        // 0x30(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FCRSimPointContainer                  Simulation;                                        // 0x40(0x78)(None)
};

// 0x1D0 (0x300 - 0x130)
// ScriptStruct ControlRig.RigUnit_SpringIK
struct FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x130(0x8)(None)
	class FName                                  EndBone;                                           // 0x138(0x8)(None)
	float                                        HierarchyStrength;                                 // 0x140(0x4)(None)
	float                                        EffectorStrength;                                  // 0x144(0x4)(None)
	float                                        EffectorRatio;                                     // 0x148(0x4)(None)
	float                                        RootStrength;                                      // 0x14C(0x4)(None)
	float                                        RootRatio;                                         // 0x150(0x4)(None)
	float                                        Damping;                                           // 0x154(0x4)(None)
	struct FVector                               PoleVector;                                        // 0x158(0x18)(None)
	bool                                         bFlipPolePlane;                                    // 0x170(0x1)(None)
	enum class EControlRigVectorKind             PoleVectorKind;                                    // 0x171(0x1)(None)
	uint8                                        Pad_1A75[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PoleVectorSpace;                                   // 0x174(0x8)(None)
	uint8                                        Pad_1A76[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PrimaryAxis;                                       // 0x180(0x18)(None)
	struct FVector                               SecondaryAxis;                                     // 0x198(0x18)(None)
	bool                                         bLiveSimulation;                                   // 0x1B0(0x1)(None)
	uint8                                        Pad_1A77[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Iterations;                                        // 0x1B4(0x4)(None)
	bool                                         bLimitLocalPosition;                               // 0x1B8(0x1)(None)
	bool                                         bPropagateToChildren;                              // 0x1B9(0x1)(None)
	uint8                                        Pad_1A78[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_SpringIK_DebugSettings       DebugSettings;                                     // 0x1C0(0x80)(None)
	struct FRigUnit_SpringIK_WorkData            WorkData;                                          // 0x240(0xB8)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A79[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.ConstraintTarget
struct FConstraintTarget
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(None)
	float                                        Weight;                                            // 0x60(0x4)(None)
	bool                                         bMaintainOffset;                                   // 0x64(0x1)(None)
	struct FTransformFilter                      Filter;                                            // 0x65(0x9)(None)
	uint8                                        Pad_1A7A[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.RigUnit_TransformConstraint_WorkData
struct FRigUnit_TransformConstraint_WorkData
{
public:
	TArray<struct FConstraintData>               ConstraintData;                                    // 0x0(0x10)(ContainsInstancedReference, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TMap<int32, int32>                           ConstraintDataToTargets;                           // 0x10(0x50)(None)
};

// 0xF0 (0x220 - 0x130)
// ScriptStruct ControlRig.RigUnit_TransformConstraint
struct FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  bone;                                              // 0x130(0x8)(None)
	enum class ETransformSpaceMode               BaseTransformSpace;                                // 0x138(0x1)(None)
	uint8                                        Pad_1A7C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BaseTransform;                                     // 0x140(0x60)(None)
	class FName                                  BaseBone;                                          // 0x1A0(0x8)(None)
	TArray<struct FConstraintTarget>             Targets;                                           // 0x1A8(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bUseInitialTransforms;                             // 0x1B8(0x1)(None)
	uint8                                        Pad_1A7D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TransformConstraint_WorkData WorkData;                                          // 0x1C0(0x60)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x100 (0x230 - 0x130)
// ScriptStruct ControlRig.RigUnit_TransformConstraintPerItem
struct FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x130(0xC)(None)
	enum class ETransformSpaceMode               BaseTransformSpace;                                // 0x13C(0x1)(None)
	uint8                                        Pad_1A7F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BaseTransform;                                     // 0x140(0x60)(None)
	struct FRigElementKey                        BaseItem;                                          // 0x1A0(0xC)(None)
	uint8                                        Pad_1A81[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConstraintTarget>             Targets;                                           // 0x1B0(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bUseInitialTransforms;                             // 0x1C0(0x1)(None)
	uint8                                        Pad_1A82[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TransformConstraint_WorkData WorkData;                                          // 0x1C8(0x60)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A83[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.RigUnit_ParentConstraint_AdvancedSettings
struct FRigUnit_ParentConstraint_AdvancedSettings
{
public:
	enum class EConstraintInterpType             InterpolationType;                                 // 0x0(0x1)(None)
	enum class EEulerRotationOrder               RotationOrderForFilter;                            // 0x1(0x1)(None)
};

// 0x60 (0x190 - 0x130)
// ScriptStruct ControlRig.RigUnit_ParentConstraint
struct FRigUnit_ParentConstraint : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(None)
	bool                                         bMaintainOffset;                                   // 0x13C(0x1)(None)
	struct FTransformFilter                      Filter;                                            // 0x13D(0x9)(None)
	uint8                                        Pad_1A85[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConstraintParent>             Parents;                                           // 0x148(0x10)(AutoWeak, SimpleDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigUnit_ParentConstraint_AdvancedSettings AdvancedSettings;                                  // 0x158(0x2)(None)
	uint8                                        Pad_1A86[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x15C(0x4)(None)
	struct FCachedRigElement                     ChildCache;                                        // 0x160(0x20)(None)
	TArray<struct FCachedRigElement>             ParentCaches;                                      // 0x180(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_PositionConstraint
struct FRigUnit_PositionConstraint : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(None)
	bool                                         bMaintainOffset;                                   // 0x13C(0x1)(None)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x13D(0x3)(None)
	TArray<struct FConstraintParent>             Parents;                                           // 0x140(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Weight;                                            // 0x150(0x4)(None)
	uint8                                        Pad_1A87[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x190 - 0x130)
// ScriptStruct ControlRig.RigUnit_PositionConstraintLocalSpaceOffset
struct FRigUnit_PositionConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(None)
	bool                                         bMaintainOffset;                                   // 0x13C(0x1)(None)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x13D(0x3)(None)
	TArray<struct FConstraintParent>             Parents;                                           // 0x140(0x10)(AutoWeak, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Weight;                                            // 0x150(0x4)(None)
	uint8                                        Pad_1A89[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     ChildCache;                                        // 0x158(0x20)(None)
	TArray<struct FCachedRigElement>             ParentCaches;                                      // 0x178(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A8A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.RigUnit_RotationConstraint_AdvancedSettings
struct FRigUnit_RotationConstraint_AdvancedSettings
{
public:
	enum class EConstraintInterpType             InterpolationType;                                 // 0x0(0x1)(None)
	enum class EEulerRotationOrder               RotationOrderForFilter;                            // 0x1(0x1)(None)
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_RotationConstraint
struct FRigUnit_RotationConstraint : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(None)
	bool                                         bMaintainOffset;                                   // 0x13C(0x1)(None)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x13D(0x3)(None)
	TArray<struct FConstraintParent>             Parents;                                           // 0x140(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings;                                  // 0x150(0x2)(None)
	uint8                                        Pad_1A8D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x154(0x4)(None)
	uint8                                        Pad_1A8E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x190 - 0x130)
// ScriptStruct ControlRig.RigUnit_RotationConstraintLocalSpaceOffset
struct FRigUnit_RotationConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(None)
	bool                                         bMaintainOffset;                                   // 0x13C(0x1)(None)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x13D(0x3)(None)
	TArray<struct FConstraintParent>             Parents;                                           // 0x140(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings;                                  // 0x150(0x2)(None)
	uint8                                        Pad_1A8F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x154(0x4)(None)
	struct FCachedRigElement                     ChildCache;                                        // 0x158(0x20)(None)
	TArray<struct FCachedRigElement>             ParentCaches;                                      // 0x178(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A90[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x160 - 0x130)
// ScriptStruct ControlRig.RigUnit_ScaleConstraint
struct FRigUnit_ScaleConstraint : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(None)
	bool                                         bMaintainOffset;                                   // 0x13C(0x1)(None)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x13D(0x3)(None)
	TArray<struct FConstraintParent>             Parents;                                           // 0x140(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Weight;                                            // 0x150(0x4)(None)
	uint8                                        Pad_1A91[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x190 - 0x130)
// ScriptStruct ControlRig.RigUnit_ScaleConstraintLocalSpaceOffset
struct FRigUnit_ScaleConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x130(0xC)(None)
	bool                                         bMaintainOffset;                                   // 0x13C(0x1)(None)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x13D(0x3)(None)
	TArray<struct FConstraintParent>             Parents;                                           // 0x140(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        Weight;                                            // 0x150(0x4)(None)
	uint8                                        Pad_1A92[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     ChildCache;                                        // 0x158(0x20)(None)
	TArray<struct FCachedRigElement>             ParentCaches;                                      // 0x178(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A93[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.RigUnit_TwistBones_WorkData
struct FRigUnit_TwistBones_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<float>                                ItemRatios;                                        // 0x10(0x10)(SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTransform>                    ItemTransforms;                                    // 0x20(0x10)(None)
};

// 0x80 (0x1B0 - 0x130)
// ScriptStruct ControlRig.RigUnit_TwistBones
struct FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x130(0x8)(None)
	class FName                                  EndBone;                                           // 0x138(0x8)(None)
	struct FVector                               TwistAxis;                                         // 0x140(0x18)(None)
	struct FVector                               PoleAxis;                                          // 0x158(0x18)(None)
	enum class ERigVMAnimEasingType              TwistEaseType;                                     // 0x170(0x1)(None)
	uint8                                        Pad_1A96[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x174(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x178(0x1)(None)
	uint8                                        Pad_1A97[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TwistBones_WorkData          WorkData;                                          // 0x180(0x30)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x80 (0x1B0 - 0x130)
// ScriptStruct ControlRig.RigUnit_TwistBonesPerItem
struct FRigUnit_TwistBonesPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x130(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector                               TwistAxis;                                         // 0x140(0x18)(None)
	struct FVector                               PoleAxis;                                          // 0x158(0x18)(None)
	enum class ERigVMAnimEasingType              TwistEaseType;                                     // 0x170(0x1)(None)
	uint8                                        Pad_1A98[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x174(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x178(0x1)(None)
	uint8                                        Pad_1A99[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TwistBones_WorkData          WorkData;                                          // 0x180(0x30)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(None)
	uint8                                        Pad_1A9A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x4(0x4)(None)
	uint8                                        Pad_1A9B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x10(0x60)(None)
};

// 0x1F0 (0x320 - 0x130)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple
struct FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  BoneA;                                             // 0x130(0x8)(None)
	class FName                                  BoneB;                                             // 0x138(0x8)(None)
	class FName                                  EffectorBone;                                      // 0x140(0x8)(None)
	uint8                                        Pad_1A9C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Effector;                                          // 0x150(0x60)(None)
	struct FVector                               PrimaryAxis;                                       // 0x1B0(0x18)(None)
	struct FVector                               SecondaryAxis;                                     // 0x1C8(0x18)(None)
	float                                        SecondaryAxisWeight;                               // 0x1E0(0x4)(None)
	uint8                                        Pad_1A9D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PoleVector;                                        // 0x1E8(0x18)(None)
	enum class EControlRigVectorKind             PoleVectorKind;                                    // 0x200(0x1)(None)
	uint8                                        Pad_1A9E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PoleVectorSpace;                                   // 0x204(0x8)(None)
	bool                                         bEnableStretch;                                    // 0x20C(0x1)(None)
	uint8                                        Pad_1A9F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchStartRatio;                                 // 0x210(0x4)(None)
	float                                        StretchMaximumRatio;                               // 0x214(0x4)(None)
	float                                        Weight;                                            // 0x218(0x4)(None)
	float                                        BoneALength;                                       // 0x21C(0x4)(None)
	float                                        BoneBLength;                                       // 0x220(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x224(0x1)(None)
	uint8                                        Pad_1AA0[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;                                     // 0x230(0x70)(None)
	struct FCachedRigElement                     CachedBoneAIndex;                                  // 0x2A0(0x20)(None)
	struct FCachedRigElement                     CachedBoneBIndex;                                  // 0x2C0(0x20)(None)
	struct FCachedRigElement                     CachedEffectorBoneIndex;                           // 0x2E0(0x20)(None)
	struct FCachedRigElement                     CachedPoleVectorSpaceIndex;                        // 0x300(0x20)(None)
};

// 0x200 (0x330 - 0x130)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimplePerItem
struct FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        ItemA;                                             // 0x130(0xC)(None)
	struct FRigElementKey                        ItemB;                                             // 0x13C(0xC)(None)
	struct FRigElementKey                        EffectorItem;                                      // 0x148(0xC)(None)
	uint8                                        Pad_1AA3[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Effector;                                          // 0x160(0x60)(None)
	struct FVector                               PrimaryAxis;                                       // 0x1C0(0x18)(None)
	struct FVector                               SecondaryAxis;                                     // 0x1D8(0x18)(None)
	float                                        SecondaryAxisWeight;                               // 0x1F0(0x4)(None)
	uint8                                        Pad_1AA4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PoleVector;                                        // 0x1F8(0x18)(None)
	enum class EControlRigVectorKind             PoleVectorKind;                                    // 0x210(0x1)(None)
	uint8                                        Pad_1AA5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        PoleVectorSpace;                                   // 0x214(0xC)(None)
	bool                                         bEnableStretch;                                    // 0x220(0x1)(None)
	uint8                                        Pad_1AA6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchStartRatio;                                 // 0x224(0x4)(None)
	float                                        StretchMaximumRatio;                               // 0x228(0x4)(None)
	float                                        Weight;                                            // 0x22C(0x4)(None)
	float                                        ItemALength;                                       // 0x230(0x4)(None)
	float                                        ItemBLength;                                       // 0x234(0x4)(None)
	bool                                         bPropagateToChildren;                              // 0x238(0x1)(None)
	uint8                                        Pad_1AA7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;                                     // 0x240(0x70)(None)
	struct FCachedRigElement                     CachedItemAIndex;                                  // 0x2B0(0x20)(None)
	struct FCachedRigElement                     CachedItemBIndex;                                  // 0x2D0(0x20)(None)
	struct FCachedRigElement                     CachedEffectorItemIndex;                           // 0x2F0(0x20)(None)
	struct FCachedRigElement                     CachedPoleVectorSpaceIndex;                        // 0x310(0x20)(None)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleVectors
struct FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase
{
public:
	struct FVector                               Root;                                              // 0x8(0x18)(None)
	struct FVector                               PoleVector;                                        // 0x20(0x18)(None)
	struct FVector                               Effector;                                          // 0x38(0x18)(None)
	bool                                         bEnableStretch;                                    // 0x50(0x1)(None)
	uint8                                        Pad_1AA9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchStartRatio;                                 // 0x54(0x4)(None)
	float                                        StretchMaximumRatio;                               // 0x58(0x4)(None)
	float                                        BoneALength;                                       // 0x5C(0x4)(None)
	float                                        BoneBLength;                                       // 0x60(0x4)(None)
	uint8                                        Pad_1AAA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Elbow;                                             // 0x68(0x18)(None)
};

// 0x198 (0x1A0 - 0x8)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleTransforms
struct FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase
{
public:
	uint8                                        Pad_1AAB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Root;                                              // 0x10(0x60)(None)
	struct FVector                               PoleVector;                                        // 0x70(0x18)(None)
	uint8                                        Pad_1AAC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Effector;                                          // 0x90(0x60)(None)
	struct FVector                               PrimaryAxis;                                       // 0xF0(0x18)(None)
	struct FVector                               SecondaryAxis;                                     // 0x108(0x18)(None)
	float                                        SecondaryAxisWeight;                               // 0x120(0x4)(None)
	bool                                         bEnableStretch;                                    // 0x124(0x1)(None)
	uint8                                        Pad_1AAD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchStartRatio;                                 // 0x128(0x4)(None)
	float                                        StretchMaximumRatio;                               // 0x12C(0x4)(None)
	float                                        BoneALength;                                       // 0x130(0x4)(None)
	float                                        BoneBLength;                                       // 0x134(0x4)(None)
	uint8                                        Pad_1AAE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Elbow;                                             // 0x140(0x60)(None)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.RigUnit_PointSimulation_DebugSettings
struct FRigUnit_PointSimulation_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(None)
	uint8                                        Pad_1AAF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x4(0x4)(None)
	float                                        CollisionScale;                                    // 0x8(0x4)(None)
	bool                                         bDrawPointsAsSpheres;                              // 0xC(0x1)(None)
	uint8                                        Pad_1AB0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x10(0x10)(None)
	struct FTransform                            WorldOffset;                                       // 0x20(0x60)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ControlRig.RigUnit_PointSimulation_BoneTarget
struct FRigUnit_PointSimulation_BoneTarget
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(None)
	int32                                        TranslationPoint;                                  // 0x8(0x4)(None)
	int32                                        PrimaryAimPoint;                                   // 0xC(0x4)(None)
	int32                                        SecondaryAimPoint;                                 // 0x10(0x4)(None)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ControlRig.RigUnit_PointSimulation_WorkData
struct FRigUnit_PointSimulation_WorkData
{
public:
	struct FCRSimPointContainer                  Simulation;                                        // 0x0(0x78)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCachedRigElement>             BoneIndices;                                       // 0x78(0x10)(None)
};

// 0x210 (0x310 - 0x100)
// ScriptStruct ControlRig.RigUnit_PointSimulation
struct FRigUnit_PointSimulation : public FRigVMFunction_SimBaseMutable
{
public:
	TArray<struct FRigVMSimPoint>                Points;                                            // 0x100(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCRSimLinearSpring>            Links;                                             // 0x110(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCRSimPointForce>              Forces;                                            // 0x120(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCRSimSoftCollision>           CollisionVolumes;                                  // 0x130(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        SimulatedStepsPerSecond;                           // 0x140(0x4)(None)
	enum class ERigVMSimPointIntegrateType       IntegratorType;                                    // 0x144(0x1)(None)
	uint8                                        Pad_1AB9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VerletBlend;                                       // 0x148(0x4)(None)
	uint8                                        Pad_1ABB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigUnit_PointSimulation_BoneTarget> BoneTargets;                                       // 0x150(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bLimitLocalPosition;                               // 0x160(0x1)(None)
	bool                                         bPropagateToChildren;                              // 0x161(0x1)(None)
	uint8                                        Pad_1ABC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PrimaryAimAxis;                                    // 0x168(0x18)(None)
	struct FVector                               SecondaryAimAxis;                                  // 0x180(0x18)(None)
	uint8                                        Pad_1ABD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_PointSimulation_DebugSettings DebugSettings;                                     // 0x1A0(0x80)(None)
	struct FRigVMFourPointBezier                 Bezier;                                            // 0x220(0x60)(None)
	struct FRigUnit_PointSimulation_WorkData     WorkData;                                          // 0x280(0x88)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1ABF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterp
struct FRigUnit_SpringInterp : public FRigVMFunction_SimBase
{
public:
	float                                        Current;                                           // 0x8(0x4)(None)
	float                                        Target;                                            // 0xC(0x4)(None)
	float                                        Stiffness;                                         // 0x10(0x4)(None)
	float                                        CriticalDamping;                                   // 0x14(0x4)(None)
	float                                        Mass;                                              // 0x18(0x4)(None)
	float                                        Result;                                            // 0x1C(0x4)(None)
	struct FFloatSpringState                     SpringState;                                       // 0x20(0xC)(None)
	uint8                                        Pad_1AC0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x98 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterpVector
struct FRigUnit_SpringInterpVector : public FRigVMFunction_SimBase
{
public:
	struct FVector                               Current;                                           // 0x8(0x18)(None)
	struct FVector                               Target;                                            // 0x20(0x18)(None)
	float                                        Stiffness;                                         // 0x38(0x4)(None)
	float                                        CriticalDamping;                                   // 0x3C(0x4)(None)
	float                                        Mass;                                              // 0x40(0x4)(None)
	uint8                                        Pad_1AC2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x48(0x18)(None)
	struct FVectorSpringState                    SpringState;                                       // 0x60(0x38)(None)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterpV2
struct FRigUnit_SpringInterpV2 : public FRigVMFunction_SimBase
{
public:
	float                                        Target;                                            // 0x8(0x4)(None)
	float                                        Strength;                                          // 0xC(0x4)(None)
	float                                        CriticalDamping;                                   // 0x10(0x4)(None)
	float                                        Force;                                             // 0x14(0x4)(None)
	bool                                         bUseCurrentInput;                                  // 0x18(0x1)(None)
	uint8                                        Pad_1AC3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Current;                                           // 0x1C(0x4)(None)
	float                                        TargetVelocityAmount;                              // 0x20(0x4)(None)
	bool                                         bInitializeFromTarget;                             // 0x24(0x1)(None)
	uint8                                        Pad_1AC4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Result;                                            // 0x28(0x4)(None)
	float                                        Velocity;                                          // 0x2C(0x4)(None)
	float                                        SimulatedResult;                                   // 0x30(0x4)(None)
	struct FFloatSpringState                     SpringState;                                       // 0x34(0xC)(None)
};

// 0xE0 (0xE8 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterpVectorV2
struct FRigUnit_SpringInterpVectorV2 : public FRigVMFunction_SimBase
{
public:
	struct FVector                               Target;                                            // 0x8(0x18)(None)
	float                                        Strength;                                          // 0x20(0x4)(None)
	float                                        CriticalDamping;                                   // 0x24(0x4)(None)
	struct FVector                               Force;                                             // 0x28(0x18)(None)
	bool                                         bUseCurrentInput;                                  // 0x40(0x1)(None)
	uint8                                        Pad_1AC6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Current;                                           // 0x48(0x18)(None)
	float                                        TargetVelocityAmount;                              // 0x60(0x4)(None)
	bool                                         bInitializeFromTarget;                             // 0x64(0x1)(None)
	uint8                                        Pad_1AC7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x68(0x18)(None)
	struct FVector                               Velocity;                                          // 0x80(0x18)(None)
	struct FVector                               SimulatedResult;                                   // 0x98(0x18)(None)
	struct FVectorSpringState                    SpringState;                                       // 0xB0(0x38)(None)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterpQuaternionV2
struct FRigUnit_SpringInterpQuaternionV2 : public FRigVMFunction_SimBase
{
public:
	uint8                                        Pad_1AC8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Target;                                            // 0x10(0x20)(None)
	float                                        Strength;                                          // 0x30(0x4)(None)
	float                                        CriticalDamping;                                   // 0x34(0x4)(None)
	struct FVector                               Torque;                                            // 0x38(0x18)(None)
	bool                                         bUseCurrentInput;                                  // 0x50(0x1)(None)
	uint8                                        Pad_1ACA[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Current;                                           // 0x60(0x20)(None)
	float                                        TargetVelocityAmount;                              // 0x80(0x4)(None)
	bool                                         bInitializeFromTarget;                             // 0x84(0x1)(None)
	uint8                                        Pad_1ACB[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Result;                                            // 0x90(0x20)(None)
	struct FVector                               AngularVelocity;                                   // 0xB0(0x18)(None)
	uint8                                        Pad_1ACC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 SimulatedResult;                                   // 0xD0(0x20)(None)
	struct FQuaternionSpringState                SpringState;                                       // 0xF0(0x40)(None)
};

}


