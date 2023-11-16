#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBoneModificationMode : uint8
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3,
};

enum class ERefPoseType : uint8
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2,
};

enum class EEasingFuncType : uint8
{
	Linear                         = 0,
	Sinusoidal                     = 1,
	Cubic                          = 2,
	QuadraticInOut                 = 3,
	CubicInOut                     = 4,
	HermiteCubic                   = 5,
	QuarticInOut                   = 6,
	QuinticInOut                   = 7,
	CircularIn                     = 8,
	CircularOut                    = 9,
	CircularInOut                  = 10,
	ExpIn                          = 11,
	ExpOut                         = 12,
	ExpInOut                       = 13,
	CustomCurve                    = 14,
	EEasingFuncType_MAX            = 15,
};

enum class ERotationComponent : uint8
{
	EulerX                         = 0,
	EulerY                         = 1,
	EulerZ                         = 2,
	QuaternionAngle                = 3,
	SwingAngle                     = 4,
	TwistAngle                     = 5,
	ERotationComponent_MAX         = 6,
};

enum class EBlendListTransitionType : uint8
{
	StandardBlend                  = 0,
	Inertialization                = 1,
	EBlendListTransitionType_MAX   = 2,
};

enum class EAnimFunctionCallSite : int32
{
	OnInitialize                   = 0,
	OnUpdate                       = 1,
	OnBecomeRelevant               = 2,
	OnEvaluate                     = 3,
	OnInitializePostRecursion      = 4,
	OnUpdatePostRecursion          = 5,
	OnBecomeRelevantPostRecursion  = 6,
	OnEvaluatePostRecursion        = 7,
	OnStartedBlendingOut           = 8,
	OnStartedBlendingIn            = 9,
	OnFinishedBlendingOut          = 10,
	OnFinishedBlendingIn           = 11,
	EAnimFunctionCallSite_MAX      = 12,
};

enum class ELayeredBoneBlendMode : uint8
{
	BranchFilter                   = 0,
	BlendMask                      = 1,
	ELayeredBoneBlendMode_MAX      = 2,
};

enum class EModifyCurveApplyMode : uint8
{
	Add                            = 0,
	Scale                          = 1,
	Blend                          = 2,
	WeightedMovingAverage          = 3,
	RemapCurve                     = 4,
	EModifyCurveApplyMode_MAX      = 5,
};

enum class EPoseDriverType : uint8
{
	SwingAndTwist                  = 0,
	SwingOnly                      = 1,
	Translation                    = 2,
	EPoseDriverType_MAX            = 3,
};

enum class EPoseDriverSource : uint8
{
	Rotation                       = 0,
	Translation                    = 1,
	EPoseDriverSource_MAX          = 2,
};

enum class EPoseDriverOutput : uint8
{
	DrivePoses                     = 0,
	DriveCurves                    = 1,
	EPoseDriverOutput_MAX          = 2,
};

enum class ESnapshotSourceMode : uint8
{
	NamedSnapshot                  = 0,
	SnapshotPin                    = 1,
	ESnapshotSourceMode_MAX        = 2,
};

enum class ESequenceEvalReinit : uint8
{
	NoReset                        = 0,
	StartPosition                  = 1,
	ExplicitTime                   = 2,
	ESequenceEvalReinit_MAX        = 3,
};

enum class ESwapRootBone : uint8
{
	SwapRootBone_Component         = 0,
	SwapRootBone_Actor             = 1,
	SwapRootBone_None              = 2,
	SwapRootBone_MAX               = 3,
};

enum class EAnimPhysAngularConstraintType : uint8
{
	Angular                        = 0,
	Cone                           = 1,
	AnimPhysAngularConstraintType_MAX = 2,
};

enum class EAnimPhysLinearConstraintType : uint8
{
	Free                           = 0,
	Limited                        = 1,
	AnimPhysLinearConstraintType_MAX = 2,
};

enum class EAnimPhysSimSpaceType : uint8
{
	Component                      = 0,
	Actor                          = 1,
	World                          = 2,
	RootRelative                   = 3,
	BoneRelative                   = 4,
	AnimPhysSimSpaceType_MAX       = 5,
};

enum class ESphericalLimitType : uint8
{
	Inner                          = 0,
	Outer                          = 1,
	ESphericalLimitType_MAX        = 2,
};

enum class EDrivenBoneModificationMode : uint8
{
	AddToInput                     = 0,
	ReplaceComponent               = 1,
	AddToRefPose                   = 2,
	EDrivenBoneModificationMode_MAX = 3,
};

enum class EDrivenDestinationMode : uint8
{
	Bone                           = 0,
	MorphTarget                    = 1,
	MaterialParameter              = 2,
	EDrivenDestinationMode_MAX     = 3,
};

enum class EConstraintOffsetOption : uint8
{
	None                           = 0,
	Offset_RefPose                 = 1,
	EConstraintOffsetOption_MAX    = 2,
};

enum class ECopyBoneDeltaMode : uint8
{
	Accumulate                     = 0,
	Copy                           = 1,
	CopyBoneDeltaMode_MAX          = 2,
};

enum class EInterpolationBlend : uint8
{
	Linear                         = 0,
	Cubic                          = 1,
	Sinusoidal                     = 2,
	EaseInOutExponent2             = 3,
	EaseInOutExponent3             = 4,
	EaseInOutExponent4             = 5,
	EaseInOutExponent5             = 6,
	MAX                            = 7,
};

enum class ESimulationSpace : uint8
{
	ComponentSpace                 = 0,
	WorldSpace                     = 1,
	BaseBoneSpace                  = 2,
	ESimulationSpace_MAX           = 3,
};

enum class ESimulationTiming : uint8
{
	Default                        = 0,
	Synchronous                    = 1,
	Deferred                       = 2,
	ESimulationTiming_MAX          = 3,
};

enum class EScaleChainInitialLength : uint8
{
	FixedDefaultLengthValue        = 0,
	Distance                       = 1,
	ChainLength                    = 2,
	EScaleChainInitialLength_MAX   = 3,
};

enum class ESplineBoneAxis : uint8
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	ESplineBoneAxis_MAX            = 4,
};

enum class EWarpingEvaluationMode : uint8
{
	Manual                         = 0,
	Graph                          = 1,
	EWarpingEvaluationMode_MAX     = 2,
};

enum class EWarpingVectorMode : uint8
{
	ComponentSpaceVector           = 0,
	ActorSpaceVector               = 1,
	WorldSpaceVector               = 2,
	IKFootRootLocalSpaceVector     = 3,
	EWarpingVectorMode_MAX         = 4,
};

enum class ERBFSolverType : uint8
{
	Additive                       = 0,
	Interpolative                  = 1,
	ERBFSolverType_MAX             = 2,
};

enum class ERBFFunctionType : uint8
{
	Gaussian                       = 0,
	Exponential                    = 1,
	Linear                         = 2,
	Cubic                          = 3,
	Quintic                        = 4,
	DefaultFunction                = 5,
	ERBFFunctionType_MAX           = 6,
};

enum class ERBFDistanceMethod : uint8
{
	Euclidean                      = 0,
	Quaternion                     = 1,
	SwingAngle                     = 2,
	TwistAngle                     = 3,
	DefaultMethod                  = 4,
	ERBFDistanceMethod_MAX         = 5,
};

enum class ERBFNormalizeMethod : uint8
{
	OnlyNormalizeAboveOne          = 0,
	AlwaysNormalize                = 1,
	NormalizeWithinMedian          = 2,
	NoNormalization                = 3,
	ERBFNormalizeMethod_MAX        = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0xC8 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
public:
	struct FComponentSpacePoseLink               ComponentPose;                                     // 0x10(0x10)(None)
	int32                                        LODThreshold;                                      // 0x20(0x4)(None)
	float                                        ActualAlpha;                                       // 0x24(0x4)(None)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x28(0x1)(None)
	bool                                         bAlphaBoolEnabled;                                 // 0x29(0x1)(None)
	uint8                                        Pad_2E88[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Alpha;                                             // 0x2C(0x4)(None)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x30(0x8)(None)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x38(0x48)(None)
	class FName                                  AlphaCurveName;                                    // 0x80(0x8)(None)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x88(0x30)(None)
	uint8                                        Pad_2E89[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct AnimGraphRuntime.IKFootPelvisPullDownSolver
struct FIKFootPelvisPullDownSolver
{
public:
	struct FVectorRK4SpringInterpolator          PelvisAdjustmentInterp;                            // 0x0(0x8)(None)
	uint8                                        Pad_2E8A[0x58];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       PelvisAdjustmentInterpAlpha;                       // 0x60(0x8)(None)
	double                                       PelvisAdjustmentMaxDistance;                       // 0x68(0x8)(None)
	double                                       PelvisAdjustmentErrorTolerance;                    // 0x70(0x8)(None)
	int32                                        PelvisAdjustmentMaxIter;                           // 0x78(0x4)(None)
	uint8                                        Pad_2E8B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AnimGraphRuntime.WarpingVectorValue
struct FWarpingVectorValue
{
public:
	enum class EWarpingVectorMode                Mode;                                              // 0x0(0x1)(None)
	uint8                                        Pad_2E8C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Value;                                             // 0x8(0x18)(None)
};

// 0x58 (0x68 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceGraphBase
struct FAnimNode_BlendSpaceGraphBase : public FAnimNode_Base
{
public:
	float                                        X;                                                 // 0x10(0x4)(None)
	float                                        Y;                                                 // 0x14(0x4)(None)
	class FName                                  GroupName;                                         // 0x18(0x8)(None)
	enum class EAnimGroupRole                    GroupRole;                                         // 0x20(0x1)(None)
	uint8                                        Pad_2E8F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlendSpace*                           BlendSpace;                                        // 0x28(0x8)(None)
	TArray<struct FPoseLink>                     SamplePoseLinks;                                   // 0x30(0x10)(None)
	uint8                                        Pad_2E90[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x68 - 0x68)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceGraph
struct FAnimNode_BlendSpaceGraph : public FAnimNode_BlendSpaceGraphBase
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceSampleResult
struct FAnimNode_BlendSpaceSampleResult : public FAnimNode_Root
{
public:
};

// 0xD8 (0x1A0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToModify;                                      // 0xC8(0x10)(None)
	struct FVector                               Translation;                                       // 0xD8(0x18)(None)
	struct FRotator                              Rotation;                                          // 0xF0(0x18)(None)
	struct FVector                               Scale;                                             // 0x108(0x18)(None)
	enum class EBoneModificationMode             TranslationMode;                                   // 0x120(0x1)(None)
	enum class EBoneModificationMode             RotationMode;                                      // 0x121(0x1)(None)
	enum class EBoneModificationMode             ScaleMode;                                         // 0x122(0x1)(None)
	enum class EBoneControlSpace                 TranslationSpace;                                  // 0x123(0x1)(None)
	enum class EBoneControlSpace                 RotationSpace;                                     // 0x124(0x1)(None)
	enum class EBoneControlSpace                 ScaleSpace;                                        // 0x125(0x1)(None)
	uint8                                        Pad_2E92[0xA];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BoneTransform;                                     // 0x130(0x60)(None)
	bool                                         bUseRotationTransform;                             // 0x190(0x1)(None)
	bool                                         bIgnoreOnDedicatedServer;                          // 0x191(0x1)(None)
	bool                                         bAllowUpdatingOutsideOfGameWorld;                  // 0x192(0x1)(None)
	bool                                         bADontApplyBoneModifiersAfterwards;                // 0x193(0x1)(None)
	uint8                                        Pad_2E93[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
struct FAnimNode_RefPose : public FAnimNode_Base
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{
public:
};

// 0x28 (0xF0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        TargetBone;                                        // 0xC8(0x10)(None)
	struct FBoneReference                        SourceBone;                                        // 0xD8(0x10)(None)
	float                                        Multiplier;                                        // 0xE8(0x4)(None)
	enum class EBoneAxis                         RotationAxisToRefer;                               // 0xEC(0x1)(None)
	bool                                         bIsAdditive;                                       // 0xED(0x1)(None)
	uint8                                        Pad_2E95[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.BlendSpaceReference
struct FBlendSpaceReference : public FAnimNodeReference
{
public:
};

// 0x1A0 (0x1A0 - 0x0)
// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
struct FRotationRetargetingInfo
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(None)
	uint8                                        Pad_2E96[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Source;                                            // 0x10(0x60)(None)
	struct FTransform                            Target;                                            // 0x70(0x60)(None)
	enum class ERotationComponent                RotationComponent;                                 // 0xD0(0x1)(None)
	uint8                                        Pad_2E97[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TwistAxis;                                         // 0xD8(0x18)(None)
	bool                                         bUseAbsoluteAngle;                                 // 0xF0(0x1)(None)
	uint8                                        Pad_2E98[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SourceMinimum;                                     // 0xF4(0x4)(None)
	float                                        SourceMaximum;                                     // 0xF8(0x4)(None)
	float                                        TargetMinimum;                                     // 0xFC(0x4)(None)
	float                                        TargetMaximum;                                     // 0x100(0x4)(None)
	enum class EEasingFuncType                   EasingType;                                        // 0x104(0x1)(None)
	uint8                                        Pad_2E99[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    CustomCurve;                                       // 0x108(0x88)(None)
	bool                                         bFlipEasing;                                       // 0x190(0x1)(None)
	uint8                                        Pad_2E9A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EasingWeight;                                      // 0x194(0x4)(None)
	bool                                         bClamp;                                            // 0x198(0x1)(None)
	uint8                                        Pad_2E9B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.PositionHistory
struct FPositionHistory
{
public:
	TArray<struct FVector>                       Positions;                                         // 0x0(0x10)(None)
	float                                        Range;                                             // 0x10(0x4)(None)
	uint8                                        Pad_2E9C[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimationStateResultReference
struct FAnimationStateResultReference : public FAnimNodeReference
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimationStateMachineReference
struct FAnimationStateMachineReference : public FAnimNodeReference
{
public:
};

// 0x30 (0x68 - 0x38)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayerBase
struct FAnimNode_BlendSpacePlayerBase : public FAnimNode_AssetPlayerBase
{
public:
	uint8                                        Pad_2EA0[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlendSpace*                           PreviousBlendSpace;                                // 0x60(0x8)(None)
};

// 0x8 (0x70 - 0x68)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
struct FAnimNode_BlendSpacePlayer : public FAnimNode_BlendSpacePlayerBase
{
public:
	class UBlendSpace*                           BlendSpace;                                        // 0x68(0x8)(ZeroConstructor)
};

// 0x160 (0x1D0 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
public:
	uint8                                        Pad_2EA1[0xC0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             BasePose;                                          // 0x130(0x10)(None)
	int32                                        LODThreshold;                                      // 0x140(0x4)(None)
	class FName                                  SourceSocketName;                                  // 0x144(0x8)(None)
	class FName                                  PivotSocketName;                                   // 0x14C(0x8)(None)
	uint8                                        Pad_2EA2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LookAtLocation;                                    // 0x158(0x18)(None)
	struct FVector                               SocketAxis;                                        // 0x170(0x18)(None)
	float                                        Alpha;                                             // 0x188(0x4)(None)
	uint8                                        Pad_2EA3[0x44];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xC8 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
public:
	struct FPoseLink                             Base;                                              // 0x10(0x10)(None)
	struct FPoseLink                             Additive;                                          // 0x20(0x10)(None)
	float                                        Alpha;                                             // 0x30(0x4)(None)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x34(0x8)(None)
	int32                                        LODThreshold;                                      // 0x3C(0x4)(None)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x40(0x48)(None)
	class FName                                  AlphaCurveName;                                    // 0x88(0x8)(None)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x90(0x30)(None)
	uint8                                        Pad_2EA6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0xC4(0x1)(None)
	bool                                         bAlphaBoolEnabled;                                 // 0xC5(0x1)(None)
	uint8                                        Pad_2EA7[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
struct FBlendBoneByChannelEntry
{
public:
	struct FBoneReference                        SourceBone;                                        // 0x0(0x10)(None)
	struct FBoneReference                        TargetBone;                                        // 0x10(0x10)(None)
	bool                                         bBlendTranslation;                                 // 0x20(0x1)(None)
	bool                                         bBlendRotation;                                    // 0x21(0x1)(None)
	bool                                         bBlendScale;                                       // 0x22(0x1)(None)
	uint8                                        Pad_2EA9[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x68 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{
public:
	struct FPoseLink                             A;                                                 // 0x10(0x10)(None)
	struct FPoseLink                             B;                                                 // 0x20(0x10)(None)
	TArray<struct FBlendBoneByChannelEntry>      BoneDefinitions;                                   // 0x30(0x10)(None)
	uint8                                        Pad_2EAA[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Alpha;                                             // 0x50(0x4)(None)
	uint8                                        Pad_2EAB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x58(0x8)(None)
	enum class EBoneControlSpace                 TransformsSpace;                                   // 0x60(0x1)(None)
	uint8                                        Pad_2EAC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x48 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
public:
	TArray<struct FPoseLink>                     BlendPose;                                         // 0x10(0x10)(None)
	uint8                                        Pad_2EAD[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x48 - 0x48)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
public:
};

// 0x0 (0x48 - 0x48)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
public:
};

// 0x0 (0x48 - 0x48)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
public:
};

// 0x8 (0x78 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
public:
	float                                        NormalizedTime;                                    // 0x70(0x4)(None)
	bool                                         bTeleportToNormalizedTime;                         // 0x74(0x1)(None)
	uint8                                        Pad_2EAF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x90 - 0x68)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer_Standalone
struct FAnimNode_BlendSpacePlayer_Standalone : public FAnimNode_BlendSpacePlayerBase
{
public:
	class FName                                  GroupName;                                         // 0x68(0x8)(None)
	enum class EAnimGroupRole                    GroupRole;                                         // 0x70(0x1)(None)
	enum class EAnimSyncMethod                   Method;                                            // 0x71(0x1)(None)
	bool                                         bIgnoreForRelevancyTest;                           // 0x72(0x1)(None)
	uint8                                        Pad_2EB1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        X;                                                 // 0x74(0x4)(None)
	float                                        Y;                                                 // 0x78(0x4)(None)
	float                                        PlayRate;                                          // 0x7C(0x4)(None)
	bool                                         bLoop;                                             // 0x80(0x1)(None)
	bool                                         bResetPlayTimeWhenBlendSpaceChanges;               // 0x81(0x1)(None)
	uint8                                        Pad_2EB3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartPosition;                                     // 0x84(0x4)(None)
	class UBlendSpace*                           BlendSpace;                                        // 0x88(0x8)(ZeroConstructor)
};

// 0x28 (0x38 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_CallFunction
struct FAnimNode_CallFunction : public FAnimNode_Base
{
public:
	struct FPoseLink                             Source;                                            // 0x10(0x10)(None)
	uint8                                        Pad_2EB4[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EAnimFunctionCallSite             CallSite;                                          // 0x34(0x4)(None)
};

// 0x1C8 (0x1D8 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent> SourceMeshComponent;                               // 0x10(0x8)(None)
	uint8                                        bUseAttachedParent : 1;                            // Mask: 0x1, PropSize: 0x10x18(0x1)(None)
	uint8                                        bCopyCurves : 1;                                   // Mask: 0x2, PropSize: 0x10x18(0x1)(None)
	uint8                                        BitPad_250 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	bool                                         bCopyCustomAttributes;                             // 0x19(0x1)(None)
	uint8                                        bUseMeshPose : 1;                                  // Mask: 0x1, PropSize: 0x10x1A(0x1)(None)
	uint8                                        BitPad_251 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2EB6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RootBoneToCopy;                                    // 0x1C(0x8)(None)
	uint8                                        Pad_2EB7[0x1B4];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x40 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
struct FAnimNode_CurveSource : public FAnimNode_Base
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x10(0x10)(None)
	class FName                                  SourceBinding;                                     // 0x20(0x8)(None)
	float                                        Alpha;                                             // 0x28(0x4)(None)
	uint8                                        Pad_2EC7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ICurveSourceInterface> CurveSource;                                       // 0x30(0x10)(None)
};

// 0xD0 (0xE0 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
public:
	struct FPoseLink                             BasePose;                                          // 0x10(0x10)(None)
	TArray<struct FPoseLink>                     BlendPoses;                                        // 0x20(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper)
	enum class ELayeredBoneBlendMode             BlendMode;                                         // 0x30(0x1)(None)
	uint8                                        Pad_2EC9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBlendProfile*>                 BlendMasks;                                        // 0x38(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper)
	TArray<struct FInputBlendPose>               LayerSetup;                                        // 0x48(0x10)(AdvancedDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper)
	TArray<float>                                BlendWeights;                                      // 0x58(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper)
	bool                                         bMeshSpaceRotationBlend;                           // 0x68(0x1)(None)
	bool                                         bMeshSpaceScaleBlend;                              // 0x69(0x1)(None)
	enum class ECurveBlendOption                 CurveBlendOption;                                  // 0x6A(0x1)(None)
	bool                                         bBlendRootMotionBasedOnRootBone;                   // 0x6B(0x1)(None)
	uint8                                        Pad_2ECA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LODThreshold;                                      // 0x70(0x4)(None)
	uint8                                        Pad_2ECB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPerBoneBlendWeight>           PerBoneBlendWeights;                               // 0x78(0x10)(None)
	struct FGuid                                 SkeletonGuid;                                      // 0x88(0x10)(None)
	struct FGuid                                 VirtualBoneGuid;                                   // 0x98(0x10)(None)
	uint8                                        Pad_2ECC[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x38 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{
public:
	struct FPoseLink                             Base;                                              // 0x10(0x10)(None)
	struct FPoseLink                             Additive;                                          // 0x20(0x10)(None)
	bool                                         bMeshSpaceAdditive;                                // 0x30(0x1)(None)
	uint8                                        Pad_2ECE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x48 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_MirrorBase
struct FAnimNode_MirrorBase : public FAnimNode_Base
{
public:
	struct FPoseLink                             Source;                                            // 0x10(0x10)(None)
	uint8                                        Pad_2ECF[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x48 - 0x48)
// ScriptStruct AnimGraphRuntime.AnimNode_Mirror
struct FAnimNode_Mirror : public FAnimNode_MirrorBase
{
public:
};

// 0x18 (0x60 - 0x48)
// ScriptStruct AnimGraphRuntime.AnimNode_Mirror_Standalone
struct FAnimNode_Mirror_Standalone : public FAnimNode_MirrorBase
{
public:
	bool                                         bMirror;                                           // 0x48(0x1)(None)
	uint8                                        Pad_2ED0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMirrorDataTable*                      MirrorDataTable;                                   // 0x50(0x8)(None)
	float                                        BlendTime;                                         // 0x58(0x4)(None)
	bool                                         bResetChild;                                       // 0x5C(0x1)(None)
	bool                                         bBoneMirroring;                                    // 0x5D(0x1)(None)
	bool                                         bCurveMirroring;                                   // 0x5E(0x1)(None)
	bool                                         bAttributeMirroring;                               // 0x5F(0x1)(None)
};

// 0xF0 (0x100 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x10(0x10)(None)
	TMap<class FName, float>                     CurveMap;                                          // 0x20(0x50)(AssetRegistrySearchable, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper)
	TArray<float>                                CurveValues;                                       // 0x70(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper)
	TArray<class FName>                          CurveNames;                                        // 0x80(0x10)(None)
	uint8                                        Pad_2ED1[0x64];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Alpha;                                             // 0xF4(0x4)(None)
	enum class EModifyCurveApplyMode             ApplyMode;                                         // 0xF8(0x1)(None)
	uint8                                        Pad_2ED2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x50 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
public:
	TArray<struct FPoseLink>                     Poses;                                             // 0x10(0x10)(AutoWeak, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper)
	TArray<float>                                DesiredAlphas;                                     // 0x20(0x10)(None)
	uint8                                        Pad_2ED3[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x40(0x8)(None)
	bool                                         bAdditiveNode;                                     // 0x48(0x1)(None)
	bool                                         bNormalizeAlpha;                                   // 0x49(0x1)(None)
	uint8                                        Pad_2ED4[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x98 - 0x38)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
public:
	class UPoseAsset*                            PoseAsset;                                         // 0x38(0x8)(None)
	uint8                                        Pad_2ED5[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0xB8 - 0x98)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x98(0x10)(None)
	enum class EAlphaBlendOption                 BlendOption;                                       // 0xA8(0x1)(None)
	uint8                                        Pad_2ED6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           CustomCurve;                                       // 0xB0(0x8)(ZeroConstructor)
};

// 0x18 (0xB0 - 0x98)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
public:
	class FName                                  PoseName;                                          // 0x98(0x8)(None)
	float                                        PoseWeight;                                        // 0xA0(0x4)(None)
	uint8                                        Pad_2ED7[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.PoseDriverTransform
struct FPoseDriverTransform
{
public:
	struct FVector                               TargetTranslation;                                 // 0x0(0x18)(None)
	struct FRotator                              TargetRotation;                                    // 0x18(0x18)(None)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct AnimGraphRuntime.PoseDriverTarget
struct FPoseDriverTarget
{
public:
	TArray<struct FPoseDriverTransform>          BoneTransforms;                                    // 0x0(0x10)(Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash)
	struct FRotator                              TargetRotation;                                    // 0x10(0x18)(None)
	float                                        TargetScale;                                       // 0x28(0x4)(None)
	enum class ERBFDistanceMethod                DistanceMethod;                                    // 0x2C(0x1)(None)
	enum class ERBFFunctionType                  FunctionType;                                      // 0x2D(0x1)(None)
	bool                                         bApplyCustomCurve;                                 // 0x2E(0x1)(None)
	uint8                                        Pad_2ED8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            CustomCurve;                                       // 0x30(0x80)(None)
	class FName                                  DrivenName;                                        // 0xB0(0x8)(None)
	uint8                                        Pad_2ED9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsHidden;                                         // 0xC0(0x1)(None)
	uint8                                        Pad_2EDA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct AnimGraphRuntime.RBFParams
struct FRBFParams
{
public:
	int32                                        TargetDimensions;                                  // 0x0(0x4)(None)
	enum class ERBFSolverType                    SolverType;                                        // 0x4(0x1)(None)
	uint8                                        Pad_2EDB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Radius;                                            // 0x8(0x4)(None)
	bool                                         bAutomaticRadius;                                  // 0xC(0x1)(None)
	enum class ERBFFunctionType                  Function;                                          // 0xD(0x1)(None)
	enum class ERBFDistanceMethod                DistanceMethod;                                    // 0xE(0x1)(None)
	enum class EBoneAxis                         TwistAxis;                                         // 0xF(0x1)(None)
	float                                        WeightThreshold;                                   // 0x10(0x4)(None)
	enum class ERBFNormalizeMethod               NormalizeMethod;                                   // 0x14(0x1)(None)
	uint8                                        Pad_2EDC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               MedianReference;                                   // 0x18(0x18)(None)
	float                                        MedianMin;                                         // 0x30(0x4)(None)
	float                                        MedianMax;                                         // 0x34(0x4)(None)
};

// 0xF8 (0x190 - 0x98)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x98(0x10)(None)
	TArray<struct FBoneReference>                SourceBones;                                       // 0xA8(0x10)(AutoWeak, Protected, TextExportTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FBoneReference>                OnlyDriveBones;                                    // 0xB8(0x10)(AutoWeak, ContainsInstancedReference, Protected, TextExportTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FPoseDriverTarget>             PoseTargets;                                       // 0xC8(0x10)(None)
	uint8                                        Pad_2EDD[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        EvalSpaceBone;                                     // 0x108(0x10)(None)
	bool                                         bEvalFromRefPose;                                  // 0x118(0x1)(None)
	uint8                                        Pad_2EDE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRBFParams                            RBFParams;                                         // 0x120(0x38)(None)
	enum class EPoseDriverSource                 DriveSource;                                       // 0x158(0x1)(None)
	enum class EPoseDriverOutput                 DriveOutput;                                       // 0x159(0x1)(None)
	uint8                                        bOnlyDriveSelectedBones : 1;                       // Mask: 0x1, PropSize: 0x10x15A(0x1)(None)
	uint8                                        BitPad_254 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2EDF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LODThreshold;                                      // 0x15C(0x4)(None)
	uint8                                        Pad_2EE0[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x90 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
public:
	class FName                                  SnapshotName;                                      // 0x10(0x8)(None)
	struct FPoseSnapshot                         Snapshot;                                          // 0x18(0x38)(None)
	enum class ESnapshotSourceMode               Mode;                                              // 0x50(0x1)(None)
	uint8                                        Pad_2EE1[0x3F];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
struct FRandomPlayerSequenceEntry
{
public:
	class UAnimSequenceBase*                     Sequence;                                          // 0x0(0x8)(ZeroConstructor)
	float                                        ChanceToPlay;                                      // 0x8(0x4)(None)
	int32                                        MinLoopCount;                                      // 0xC(0x4)(None)
	int32                                        MaxLoopCount;                                      // 0x10(0x4)(None)
	float                                        MinPlayRate;                                       // 0x14(0x4)(None)
	float                                        MaxPlayRate;                                       // 0x18(0x4)(None)
	uint8                                        Pad_2EE2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAlphaBlend                           BlendIn;                                           // 0x20(0x30)(None)
};

// 0x68 (0x78 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
struct FAnimNode_RandomPlayer : public FAnimNode_AssetPlayerRelevancyBase
{
public:
	TArray<struct FRandomPlayerSequenceEntry>    Entries;                                           // 0x10(0x10)(None)
	uint8                                        Pad_2EE5[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendWeight;                                       // 0x70(0x4)(None)
	bool                                         bShuffleMode;                                      // 0x74(0x1)(None)
	uint8                                        Pad_2EE6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0xA8 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
public:
	struct FPoseLink                             BasePose;                                          // 0x10(0x10)(None)
	float                                        Pitch;                                             // 0x20(0x4)(None)
	float                                        Yaw;                                               // 0x24(0x4)(None)
	struct FInputScaleBiasClamp                  PitchScaleBiasClamp;                               // 0x28(0x30)(None)
	struct FInputScaleBiasClamp                  YawScaleBiasClamp;                                 // 0x58(0x30)(None)
	struct FRotator                              MeshToComponent;                                   // 0x88(0x18)(None)
	uint8                                        Pad_2EE7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0x118 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
public:
	struct FPoseLink                             BasePose;                                          // 0x70(0x10)(None)
	int32                                        LODThreshold;                                      // 0x80(0x4)(None)
	float                                        Alpha;                                             // 0x84(0x4)(None)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x88(0x8)(None)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x90(0x48)(ZeroConstructor)
	class FName                                  AlphaCurveName;                                    // 0xD8(0x8)(None)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0xE0(0x30)(None)
	uint8                                        Pad_2EE8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x114(0x1)(None)
	bool                                         bAlphaBoolEnabled;                                 // 0x115(0x1)(None)
	uint8                                        Pad_2EE9[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0x110 - 0x68)
// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpaceGraph
struct FAnimNode_RotationOffsetBlendSpaceGraph : public FAnimNode_BlendSpaceGraphBase
{
public:
	struct FPoseLink                             BasePose;                                          // 0x68(0x10)(None)
	int32                                        LODThreshold;                                      // 0x78(0x4)(None)
	float                                        Alpha;                                             // 0x7C(0x4)(None)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x80(0x8)(None)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x88(0x48)(ZeroConstructor)
	class FName                                  AlphaCurveName;                                    // 0xD0(0x8)(None)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0xD8(0x30)(None)
	uint8                                        Pad_2EEA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x10C(0x1)(None)
	bool                                         bAlphaBoolEnabled;                                 // 0x10D(0x1)(None)
	uint8                                        Pad_2EEB[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x40 - 0x38)
// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluatorBase
struct FAnimNode_SequenceEvaluatorBase : public FAnimNode_AssetPlayerBase
{
public:
	uint8                                        Pad_2EEC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x40 - 0x40)
// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
struct FAnimNode_SequenceEvaluator : public FAnimNode_SequenceEvaluatorBase
{
public:
};

// 0x28 (0x68 - 0x40)
// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator_Standalone
struct FAnimNode_SequenceEvaluator_Standalone : public FAnimNode_SequenceEvaluatorBase
{
public:
	class FName                                  GroupName;                                         // 0x40(0x8)(None)
	enum class EAnimGroupRole                    GroupRole;                                         // 0x48(0x1)(None)
	enum class EAnimSyncMethod                   Method;                                            // 0x49(0x1)(None)
	bool                                         bIgnoreForRelevancyTest;                           // 0x4A(0x1)(None)
	uint8                                        Pad_2EED[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     Sequence;                                          // 0x50(0x8)(None)
	float                                        ExplicitTime;                                      // 0x58(0x4)(None)
	bool                                         bShouldLoop;                                       // 0x5C(0x1)(None)
	bool                                         bTeleportToExplicitTime;                           // 0x5D(0x1)(None)
	enum class ESequenceEvalReinit               ReinitializationBehavior;                          // 0x5E(0x1)(None)
	uint8                                        Pad_2EEE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartPosition;                                     // 0x60(0x4)(None)
	uint8                                        Pad_2EEF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x48 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_Slot
struct FAnimNode_Slot : public FAnimNode_Base
{
public:
	struct FPoseLink                             Source;                                            // 0x10(0x10)(None)
	class FName                                  SlotName;                                          // 0x20(0x8)(None)
	bool                                         bAlwaysUpdateSourcePose;                           // 0x28(0x1)(None)
	uint8                                        Pad_2EF1[0x1F];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x30 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_Sync
struct FAnimNode_Sync : public FAnimNode_Base
{
public:
	struct FPoseLink                             Source;                                            // 0x10(0x10)(None)
	class FName                                  GroupName;                                         // 0x20(0x8)(None)
	enum class EAnimGroupRole                    GroupRole;                                         // 0x28(0x1)(None)
	uint8                                        Pad_2EF2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xC8 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
public:
	struct FPoseLink                             A;                                                 // 0x10(0x10)(None)
	struct FPoseLink                             B;                                                 // 0x20(0x10)(None)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x30(0x1)(None)
	uint8                                        bAlphaBoolEnabled : 1;                             // Mask: 0x1, PropSize: 0x10x31(0x1)(None)
	uint8                                        BitPad_255 : 2;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bResetChildOnActivation : 1;                       // Mask: 0x8, PropSize: 0x10x31(0x1)(None)
	uint8                                        BitPad_256 : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2F02[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Alpha;                                             // 0x34(0x4)(None)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x38(0x8)(None)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x40(0x48)(None)
	class FName                                  AlphaCurveName;                                    // 0x88(0x8)(None)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x90(0x30)(None)
	uint8                                        Pad_2F03[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x468 (0xCE0 - 0x878)
// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_2F05[0x468];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.BlendSpacePlayerReference
struct FBlendSpacePlayerReference : public FAnimNodeReference
{
public:
};

// 0x88 (0x88 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
struct FAnimPhysConstraintSetup
{
public:
	enum class EAnimPhysLinearConstraintType     LinearXLimitType;                                  // 0x0(0x1)(None)
	enum class EAnimPhysLinearConstraintType     LinearYLimitType;                                  // 0x1(0x1)(None)
	enum class EAnimPhysLinearConstraintType     LinearZLimitType;                                  // 0x2(0x1)(None)
	uint8                                        Pad_2F06[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LinearAxesMin;                                     // 0x8(0x18)(None)
	struct FVector                               LinearAxesMax;                                     // 0x20(0x18)(None)
	enum class EAnimPhysAngularConstraintType    AngularConstraintType;                             // 0x38(0x1)(None)
	enum class EAnimPhysTwistAxis                TwistAxis;                                         // 0x39(0x1)(None)
	enum class EAnimPhysTwistAxis                AngularTargetAxis;                                 // 0x3A(0x1)(None)
	uint8                                        Pad_2F08[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ConeAngle;                                         // 0x3C(0x4)(None)
	struct FVector                               AngularLimitsMin;                                  // 0x40(0x18)(None)
	struct FVector                               AngularLimitsMax;                                  // 0x58(0x18)(None)
	struct FVector                               AngularTarget;                                     // 0x70(0x18)(None)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
struct FAnimPhysPlanarLimit
{
public:
	struct FBoneReference                        DrivingBone;                                       // 0x0(0x10)(None)
	struct FTransform                            PlaneTransform;                                    // 0x10(0x60)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
struct FAnimPhysSphericalLimit
{
public:
	struct FBoneReference                        DrivingBone;                                       // 0x0(0x10)(None)
	struct FVector                               SphereLocalOffset;                                 // 0x10(0x18)(None)
	float                                        LimitRadius;                                       // 0x28(0x4)(None)
	enum class ESphericalLimitType               LimitType;                                         // 0x2C(0x1)(None)
	uint8                                        Pad_2F0A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysBodyDefinition
struct FAnimPhysBodyDefinition
{
public:
	struct FBoneReference                        BoundBone;                                         // 0x0(0x10)(None)
	struct FVector                               BoxExtents;                                        // 0x10(0x18)(None)
	struct FVector                               LocalJointOffset;                                  // 0x28(0x18)(None)
	struct FAnimPhysConstraintSetup              ConstraintSetup;                                   // 0x40(0x88)(None)
	enum class EAnimPhysCollisionType            CollisionType;                                     // 0xC8(0x1)(None)
	uint8                                        Pad_2F0C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SphereCollisionRadius;                             // 0xCC(0x4)(None)
};

// 0x458 (0x520 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
public:
	float                                        LinearDampingOverride;                             // 0xC8(0x4)(None)
	float                                        AngularDampingOverride;                            // 0xCC(0x4)(None)
	uint8                                        Pad_2F0E[0xC0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        RelativeSpaceBone;                                 // 0x190(0x10)(None)
	struct FBoneReference                        BoundBone;                                         // 0x1A0(0x10)(None)
	struct FBoneReference                        ChainEnd;                                          // 0x1B0(0x10)(None)
	TArray<struct FAnimPhysBodyDefinition>       PhysicsBodyDefinitions;                            // 0x1C0(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper)
	float                                        GravityScale;                                      // 0x1D0(0x4)(None)
	uint8                                        Pad_2F10[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               GravityOverride;                                   // 0x1D8(0x18)(None)
	float                                        LinearSpringConstant;                              // 0x1F0(0x4)(None)
	float                                        AngularSpringConstant;                             // 0x1F4(0x4)(None)
	float                                        WindScale;                                         // 0x1F8(0x4)(None)
	uint8                                        Pad_2F11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ComponentLinearAccScale;                           // 0x200(0x18)(None)
	struct FVector                               ComponentLinearVelScale;                           // 0x218(0x18)(None)
	struct FVector                               ComponentAppliedLinearAccClamp;                    // 0x230(0x18)(None)
	float                                        AngularBiasOverride;                               // 0x248(0x4)(None)
	int32                                        NumSolverIterationsPreUpdate;                      // 0x24C(0x4)(None)
	int32                                        NumSolverIterationsPostUpdate;                     // 0x250(0x4)(None)
	uint8                                        Pad_2F13[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAnimPhysSphericalLimit>       SphericalLimits;                                   // 0x258(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper)
	struct FVector                               ExternalForce;                                     // 0x268(0x18)(None)
	TArray<struct FAnimPhysPlanarLimit>          PlanarLimits;                                      // 0x280(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EAnimPhysSimSpaceType             SimulationSpace;                                   // 0x290(0x1)(None)
	uint8                                        Pad_2F14[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bUseSphericalLimits : 1;                           // Mask: 0x1, PropSize: 0x10x293(0x1)(None)
	uint8                                        bUsePlanarLimit : 1;                               // Mask: 0x2, PropSize: 0x10x293(0x1)(None)
	uint8                                        bDoUpdate : 1;                                     // Mask: 0x4, PropSize: 0x10x293(0x1)(None)
	uint8                                        bDoEval : 1;                                       // Mask: 0x8, PropSize: 0x10x293(0x1)(None)
	uint8                                        bOverrideLinearDamping : 1;                        // Mask: 0x10, PropSize: 0x10x293(0x1)(None)
	uint8                                        bOverrideAngularBias : 1;                          // Mask: 0x20, PropSize: 0x10x293(0x1)(None)
	uint8                                        bOverrideAngularDamping : 1;                       // Mask: 0x40, PropSize: 0x10x293(0x1)(None)
	uint8                                        bEnableWind : 1;                                   // Mask: 0x80, PropSize: 0x10x293(0x1)(None)
	uint8                                        BitPad_257 : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bUseGravityOverride : 1;                           // Mask: 0x2, PropSize: 0x10x294(0x1)(None)
	uint8                                        bGravityOverrideInSimSpace : 1;                    // Mask: 0x4, PropSize: 0x10x294(0x1)(None)
	uint8                                        bLinearSpring : 1;                                 // Mask: 0x8, PropSize: 0x10x294(0x1)(None)
	uint8                                        bAngularSpring : 1;                                // Mask: 0x10, PropSize: 0x10x294(0x1)(None)
	uint8                                        bChain : 1;                                        // Mask: 0x20, PropSize: 0x10x294(0x1)(None)
	uint8                                        BitPad_258 : 2;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2F17[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotationRetargetingInfo              RetargetingSettings;                               // 0x2A0(0x1A0)(ZeroConstructor)
	uint8                                        Pad_2F18[0xE0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AnimGraphRuntime.AngularRangeLimit
struct FAngularRangeLimit
{
public:
	struct FVector                               LimitMin;                                          // 0x0(0x18)(None)
	struct FVector                               LimitMax;                                          // 0x18(0x18)(None)
	struct FBoneReference                        bone;                                              // 0x30(0x10)(None)
};

// 0x20 (0xE8 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{
public:
	TArray<struct FAngularRangeLimit>            AngularRangeLimits;                                // 0xC8(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FVector>                       AngularOffsets;                                    // 0xD8(0x10)(None)
};

// 0x60 (0x128 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SourceBone;                                        // 0xC8(0x10)(None)
	class UCurveFloat*                           DrivingCurve;                                      // 0xD8(0x8)(ZeroConstructor)
	float                                        Multiplier;                                        // 0xE0(0x4)(None)
	uint8                                        Pad_2F1D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RangeMin;                                          // 0xE8(0x8)(None)
	double                                       RangeMax;                                          // 0xF0(0x8)(None)
	double                                       RemappedMin;                                       // 0xF8(0x8)(None)
	double                                       RemappedMax;                                       // 0x100(0x8)(None)
	class FName                                  ParameterName;                                     // 0x108(0x8)(None)
	struct FBoneReference                        TargetBone;                                        // 0x110(0x10)(None)
	enum class EDrivenDestinationMode            DestinationMode;                                   // 0x120(0x1)(None)
	enum class EDrivenBoneModificationMode       ModificationMode;                                  // 0x121(0x1)(None)
	enum class EComponentType                    SourceComponent;                                   // 0x122(0x1)(None)
	uint8                                        bUseRange : 1;                                     // Mask: 0x1, PropSize: 0x10x123(0x1)(None)
	uint8                                        bAffectTargetTranslationX : 1;                     // Mask: 0x2, PropSize: 0x10x123(0x1)(None)
	uint8                                        bAffectTargetTranslationY : 1;                     // Mask: 0x4, PropSize: 0x10x123(0x1)(None)
	uint8                                        bAffectTargetTranslationZ : 1;                     // Mask: 0x8, PropSize: 0x10x123(0x1)(None)
	uint8                                        bAffectTargetRotationX : 1;                        // Mask: 0x10, PropSize: 0x10x123(0x1)(None)
	uint8                                        bAffectTargetRotationY : 1;                        // Mask: 0x20, PropSize: 0x10x123(0x1)(None)
	uint8                                        bAffectTargetRotationZ : 1;                        // Mask: 0x40, PropSize: 0x10x123(0x1)(None)
	uint8                                        bAffectTargetScaleX : 1;                           // Mask: 0x80, PropSize: 0x10x123(0x1)(None)
	uint8                                        bAffectTargetScaleY : 1;                           // Mask: 0x1, PropSize: 0x10x124(0x1)(None)
	uint8                                        bAffectTargetScaleZ : 1;                           // Mask: 0x2, PropSize: 0x10x124(0x1)(None)
	uint8                                        Pad_2F1E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0x1C0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{
public:
	struct FVector                               EffectorLocation;                                  // 0xC8(0x18)(None)
	enum class EBoneControlSpace                 EffectorLocationSpace;                             // 0xE0(0x1)(None)
	uint8                                        Pad_2F20[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneSocketTarget                     EffectorTarget;                                    // 0xF0(0x90)(None)
	struct FBoneReference                        TipBone;                                           // 0x180(0x10)(None)
	struct FBoneReference                        RootBone;                                          // 0x190(0x10)(None)
	float                                        Precision;                                         // 0x1A0(0x4)(None)
	int32                                        MaxIterations;                                     // 0x1A4(0x4)(None)
	bool                                         bStartFromTail;                                    // 0x1A8(0x1)(None)
	bool                                         bEnableRotationLimit;                              // 0x1A9(0x1)(None)
	uint8                                        Pad_2F21[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RotationLimitPerJoints;                            // 0x1B0(0x10)(None)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct AnimGraphRuntime.Constraint
struct FConstraint
{
public:
	struct FBoneReference                        TargetBone;                                        // 0x0(0x10)(None)
	enum class EConstraintOffsetOption           OffsetOption;                                      // 0x10(0x1)(None)
	enum class ETransformConstraintType          TransformType;                                     // 0x11(0x1)(None)
	struct FFilterOptionPerAxis                  PerAxis;                                           // 0x12(0x3)(None)
	uint8                                        Pad_2F22[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x108 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToModify;                                      // 0xC8(0x10)(None)
	TArray<struct FConstraint>                   ConstraintSetup;                                   // 0xD8(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper)
	TArray<float>                                ConstraintWeights;                                 // 0xE8(0x10)(None)
	uint8                                        Pad_2F23[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0xF0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SourceBone;                                        // 0xC8(0x10)(None)
	struct FBoneReference                        TargetBone;                                        // 0xD8(0x10)(None)
	bool                                         bCopyTranslation;                                  // 0xE8(0x1)(None)
	bool                                         bCopyRotation;                                     // 0xE9(0x1)(None)
	bool                                         bCopyScale;                                        // 0xEA(0x1)(None)
	enum class EBoneControlSpace                 ControlSpace;                                      // 0xEB(0x1)(None)
	uint8                                        Pad_2F24[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0xF8 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SourceBone;                                        // 0xC8(0x10)(None)
	struct FBoneReference                        TargetBone;                                        // 0xD8(0x10)(None)
	bool                                         bCopyTranslation;                                  // 0xE8(0x1)(None)
	bool                                         bCopyRotation;                                     // 0xE9(0x1)(None)
	bool                                         bCopyScale;                                        // 0xEA(0x1)(None)
	enum class ECopyBoneDeltaMode                CopyMode;                                          // 0xEB(0x1)(None)
	float                                        TranslationMultiplier;                             // 0xEC(0x4)(None)
	float                                        RotationMultiplier;                                // 0xF0(0x4)(None)
	float                                        ScaleMultiplier;                                   // 0xF4(0x4)(None)
};

// 0x128 (0x1F0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_2F26[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            EffectorTransform;                                 // 0xD0(0x60)(None)
	struct FBoneSocketTarget                     EffectorTarget;                                    // 0x130(0x90)(None)
	struct FBoneReference                        TipBone;                                           // 0x1C0(0x10)(None)
	struct FBoneReference                        RootBone;                                          // 0x1D0(0x10)(None)
	float                                        Precision;                                         // 0x1E0(0x4)(None)
	int32                                        MaxIterations;                                     // 0x1E4(0x4)(None)
	enum class EBoneControlSpace                 EffectorTransformSpace;                            // 0x1E8(0x1)(None)
	enum class EBoneRotationSource               EffectorRotationSource;                            // 0x1E9(0x1)(None)
	uint8                                        Pad_2F27[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x120 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        RightHandFK;                                       // 0xC8(0x10)(None)
	struct FBoneReference                        LeftHandFK;                                        // 0xD8(0x10)(None)
	struct FBoneReference                        RightHandIK;                                       // 0xE8(0x10)(None)
	struct FBoneReference                        LeftHandIK;                                        // 0xF8(0x10)(None)
	TArray<struct FBoneReference>                IKBonesToMove;                                     // 0x108(0x10)(None)
	float                                        HandFKWeight;                                      // 0x118(0x4)(None)
	uint8                                        Pad_2F28[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct AnimGraphRuntime.IKChainLink
struct FIKChainLink
{
public:
	uint8                                        Pad_2F29[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AnimGraphRuntime.IKChain
struct FIKChain
{
public:
	uint8                                        Pad_2F2A[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C (0x2C - 0x0)
// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
struct FAnimLegIKDefinition
{
public:
	struct FBoneReference                        IKFootBone;                                        // 0x0(0x10)(None)
	struct FBoneReference                        FKFootBone;                                        // 0x10(0x10)(None)
	int32                                        NumBonesInLimb;                                    // 0x20(0x4)(None)
	float                                        MinRotationAngle;                                  // 0x24(0x4)(None)
	enum class EAxis                             FootBoneForwardAxis;                               // 0x28(0x1)(None)
	enum class EAxis                             HingeRotationAxis;                                 // 0x29(0x1)(None)
	bool                                         bEnableRotationLimit;                              // 0x2A(0x1)(None)
	bool                                         bEnableKneeTwistCorrection;                        // 0x2B(0x1)(None)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimLegIKData
struct FAnimLegIKData
{
public:
	uint8                                        Pad_2F2B[0xE0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0xF8 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
public:
	float                                        ReachPrecision;                                    // 0xC8(0x4)(None)
	int32                                        MaxIterations;                                     // 0xCC(0x4)(None)
	TArray<struct FAnimLegIKDefinition>          LegsDefinition;                                    // 0xD0(0x10)(None)
	uint8                                        Pad_2F2C[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x188 (0x250 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToModify;                                      // 0xC8(0x10)(None)
	uint8                                        Pad_2F2E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneSocketTarget                     LookAtTarget;                                      // 0xE0(0x90)(None)
	struct FVector                               LookAtLocation;                                    // 0x170(0x18)(None)
	struct FAxis                                 LookAt_Axis;                                       // 0x188(0x20)(None)
	bool                                         bUseLookUpAxis;                                    // 0x1A8(0x1)(None)
	enum class EInterpolationBlend               InterpolationType;                                 // 0x1A9(0x1)(None)
	uint8                                        Pad_2F2F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAxis                                 LookUp_Axis;                                       // 0x1B0(0x20)(None)
	float                                        LookAtClamp;                                       // 0x1D0(0x4)(None)
	float                                        InterpolationTime;                                 // 0x1D4(0x4)(None)
	float                                        InterpolationTriggerThreashold;                    // 0x1D8(0x4)(None)
	uint8                                        Pad_2F30[0x74];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x128 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToObserve;                                     // 0xC8(0x10)(None)
	enum class EBoneControlSpace                 DisplaySpace;                                      // 0xD8(0x1)(None)
	bool                                         bRelativeToRefPose;                                // 0xD9(0x1)(None)
	uint8                                        Pad_2F31[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Translation;                                       // 0xE0(0x18)(None)
	struct FRotator                              Rotation;                                          // 0xF8(0x18)(None)
	struct FVector                               Scale;                                             // 0x110(0x18)(None)
};

// 0x10 (0xD8 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_2F32[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct AnimGraphRuntime.SimSpaceSettings
struct FSimSpaceSettings
{
public:
	float                                        WorldAlpha;                                        // 0x0(0x4)(None)
	float                                        VelocityScaleZ;                                    // 0x4(0x4)(None)
	float                                        MaxLinearVelocity;                                 // 0x8(0x4)(None)
	float                                        MaxAngularVelocity;                                // 0xC(0x4)(None)
	float                                        MaxLinearAcceleration;                             // 0x10(0x4)(None)
	float                                        MaxAngularAcceleration;                            // 0x14(0x4)(None)
	struct FVector                               ExternalLinearDragV;                               // 0x18(0x18)(None)
	struct FVector                               ExternalLinearVelocity;                            // 0x30(0x18)(None)
	struct FVector                               ExternalAngularVelocity;                           // 0x48(0x18)(None)
};

// 0x8E8 (0x9B0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
public:
	class UPhysicsAsset*                         OverridePhysicsAsset;                              // 0xC8(0x8)(ZeroConstructor)
	uint8                                        Pad_2F33[0x128];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OverrideWorldGravity;                              // 0x1F8(0x18)(None)
	struct FVector                               ExternalForce;                                     // 0x210(0x18)(None)
	struct FVector                               ComponentLinearAccScale;                           // 0x228(0x18)(None)
	struct FVector                               ComponentLinearVelScale;                           // 0x240(0x18)(None)
	struct FVector                               ComponentAppliedLinearAccClamp;                    // 0x258(0x18)(None)
	struct FSimSpaceSettings                     SimSpaceSettings;                                  // 0x270(0x60)(None)
	float                                        CachedBoundsScale;                                 // 0x2D0(0x4)(None)
	struct FBoneReference                        BaseBoneRef;                                       // 0x2D4(0x10)(None)
	enum class ECollisionChannel                 OverlapChannel;                                    // 0x2E4(0x1)(None)
	enum class ESimulationSpace                  SimulationSpace;                                   // 0x2E5(0x1)(None)
	bool                                         bForceDisableCollisionBetweenConstraintBodies;     // 0x2E6(0x1)(None)
	bool                                         bUseExternalClothCollision;                        // 0x2E7(0x1)(None)
	uint8                                        Pad_2F34[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bEnableWorldGeometry : 1;                          // Mask: 0x1, PropSize: 0x10x2E9(0x1)(None)
	uint8                                        bOverrideWorldGravity : 1;                         // Mask: 0x2, PropSize: 0x10x2E9(0x1)(None)
	uint8                                        bTransferBoneVelocities : 1;                       // Mask: 0x4, PropSize: 0x10x2E9(0x1)(None)
	uint8                                        bFreezeIncomingPoseOnStart : 1;                    // Mask: 0x8, PropSize: 0x10x2E9(0x1)(None)
	uint8                                        bClampLinearTranslationLimitToRefPose : 1;         // Mask: 0x10, PropSize: 0x10x2E9(0x1)(None)
	uint8                                        BitPad_259 : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2F35[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WorldSpaceMinimumScale;                            // 0x2EC(0x4)(None)
	float                                        EvaluationResetTime;                               // 0x2F0(0x4)(None)
	uint8                                        Pad_2F36[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ESimulationTiming                 SimulationTiming;                                  // 0x2F5(0x1)(None)
	uint8                                        Pad_2F37[0x6BA];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x88 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{
public:
	struct FPoseLink                             InputPose;                                         // 0x10(0x10)(None)
	float                                        DefaultChainLength;                                // 0x20(0x4)(None)
	struct FBoneReference                        ChainStartBone;                                    // 0x24(0x10)(None)
	struct FBoneReference                        ChainEndBone;                                      // 0x34(0x10)(None)
	uint8                                        Pad_2F38[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TargetLocation;                                    // 0x48(0x18)(None)
	float                                        Alpha;                                             // 0x60(0x4)(None)
	uint8                                        Pad_2F39[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x68(0x8)(None)
	enum class EScaleChainInitialLength          ChainInitialLength;                                // 0x70(0x1)(None)
	uint8                                        Pad_2F3A[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
struct FSplineIKCachedBoneData
{
public:
	struct FBoneReference                        bone;                                              // 0x0(0x10)(None)
	int32                                        RefSkeletonIndex;                                  // 0x10(0x4)(None)
};

// 0x1A8 (0x270 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        StartBone;                                         // 0xC8(0x10)(None)
	struct FBoneReference                        EndBone;                                           // 0xD8(0x10)(None)
	enum class ESplineBoneAxis                   BoneAxis;                                          // 0xE8(0x1)(None)
	bool                                         bAutoCalculateSpline;                              // 0xE9(0x1)(None)
	uint8                                        Pad_2F3B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PointCount;                                        // 0xEC(0x4)(None)
	TArray<struct FTransform>                    ControlPoints;                                     // 0xF0(0x10)(None)
	float                                        Roll;                                              // 0x100(0x4)(None)
	float                                        TwistStart;                                        // 0x104(0x4)(None)
	float                                        TwistEnd;                                          // 0x108(0x4)(None)
	uint8                                        Pad_2F3C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAlphaBlend                           TwistBlend;                                        // 0x110(0x30)(ZeroConstructor)
	float                                        Stretch;                                           // 0x140(0x4)(None)
	float                                        Offset;                                            // 0x144(0x4)(None)
	uint8                                        Pad_2F3D[0x128];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0x168 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SpringBone;                                        // 0xC8(0x10)(None)
	double                                       MaxDisplacement;                                   // 0xD8(0x8)(None)
	double                                       SpringStiffness;                                   // 0xE0(0x8)(None)
	double                                       SpringDamping;                                     // 0xE8(0x8)(None)
	double                                       ErrorResetThresh;                                  // 0xF0(0x8)(None)
	uint8                                        Pad_2F3E[0x6C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bLimitDisplacement : 1;                            // Mask: 0x1, PropSize: 0x10x164(0x1)(None)
	uint8                                        bTranslateX : 1;                                   // Mask: 0x2, PropSize: 0x10x164(0x1)(None)
	uint8                                        bTranslateY : 1;                                   // Mask: 0x4, PropSize: 0x10x164(0x1)(None)
	uint8                                        bTranslateZ : 1;                                   // Mask: 0x8, PropSize: 0x10x164(0x1)(None)
	uint8                                        bRotateX : 1;                                      // Mask: 0x10, PropSize: 0x10x164(0x1)(None)
	uint8                                        bRotateY : 1;                                      // Mask: 0x20, PropSize: 0x10x164(0x1)(None)
	uint8                                        bRotateZ : 1;                                      // Mask: 0x40, PropSize: 0x10x164(0x1)(None)
	uint8                                        Pad_2F3F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.RotationLimit
struct FRotationLimit
{
public:
	struct FVector                               LimitMin;                                          // 0x0(0x18)(None)
	struct FVector                               LimitMax;                                          // 0x18(0x18)(None)
};

// 0x1D8 (0x2A0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_Trail
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_2F40[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        TrailBone;                                         // 0x130(0x10)(None)
	int32                                        ChainLength;                                       // 0x140(0x4)(None)
	enum class EAxis                             ChainBoneAxis;                                     // 0x144(0x1)(None)
	uint8                                        bInvertChainBoneAxis : 1;                          // Mask: 0x1, PropSize: 0x10x145(0x1)(None)
	uint8                                        bLimitStretch : 1;                                 // Mask: 0x2, PropSize: 0x10x145(0x1)(None)
	uint8                                        bLimitRotation : 1;                                // Mask: 0x4, PropSize: 0x10x145(0x1)(None)
	uint8                                        bUsePlanarLimit : 1;                               // Mask: 0x8, PropSize: 0x10x145(0x1)(None)
	uint8                                        bActorSpaceFakeVel : 1;                            // Mask: 0x10, PropSize: 0x10x145(0x1)(None)
	uint8                                        bReorientParentToChild : 1;                        // Mask: 0x20, PropSize: 0x10x145(0x1)(None)
	uint8                                        BitPad_25A : 2;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2F41[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxDeltaTime;                                      // 0x148(0x4)(None)
	float                                        RelaxationSpeedScale;                              // 0x14C(0x4)(None)
	struct FRuntimeFloatCurve                    TrailRelaxationSpeed;                              // 0x150(0x88)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper)
	struct FInputScaleBiasClamp                  RelaxationSpeedScaleInputProcessor;                // 0x1D8(0x30)(None)
	TArray<struct FRotationLimit>                RotationLimits;                                    // 0x208(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FVector>                       RotationOffsets;                                   // 0x218(0x10)(AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper)
	TArray<struct FAnimPhysPlanarLimit>          PlanarLimits;                                      // 0x228(0x10)(None)
	float                                        StretchLimit;                                      // 0x238(0x4)(None)
	uint8                                        Pad_2F42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               FakeVelocity;                                      // 0x240(0x18)(None)
	struct FBoneReference                        BaseJoint;                                         // 0x258(0x10)(None)
	float                                        LastBoneRotationAnimAlphaBlend;                    // 0x268(0x4)(None)
	uint8                                        Pad_2F44[0x34];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
struct FReferenceBoneFrame
{
public:
	struct FBoneReference                        bone;                                              // 0x0(0x10)(None)
	struct FAxis                                 Axis;                                              // 0x10(0x20)(None)
};

// 0xA0 (0x168 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
public:
	struct FReferenceBoneFrame                   BaseFrame;                                         // 0xC8(0x30)(None)
	struct FReferenceBoneFrame                   TwistFrame;                                        // 0xF8(0x30)(None)
	struct FAxis                                 TwistPlaneNormalAxis;                              // 0x128(0x20)(None)
	float                                        RangeMax;                                          // 0x148(0x4)(None)
	float                                        RemappedMin;                                       // 0x14C(0x4)(None)
	float                                        RemappedMax;                                       // 0x150(0x4)(None)
	struct FAnimCurveParam                       Curve;                                             // 0x154(0xC)(None)
	uint8                                        Pad_2F45[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1B8 (0x280 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        IKBone;                                            // 0xC8(0x10)(None)
	double                                       StartStretchRatio;                                 // 0xD8(0x8)(None)
	double                                       MaxStretchScale;                                   // 0xE0(0x8)(None)
	struct FVector                               EffectorLocation;                                  // 0xE8(0x18)(None)
	uint8                                        Pad_2F46[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneSocketTarget                     EffectorTarget;                                    // 0x110(0x90)(None)
	struct FVector                               JointTargetLocation;                               // 0x1A0(0x18)(None)
	uint8                                        Pad_2F47[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneSocketTarget                     JointTarget;                                       // 0x1C0(0x90)(None)
	struct FAxis                                 TwistAxis;                                         // 0x250(0x20)(None)
	enum class EBoneControlSpace                 EffectorLocationSpace;                             // 0x270(0x1)(None)
	enum class EBoneControlSpace                 JointTargetLocationSpace;                          // 0x271(0x1)(None)
	uint8                                        bAllowStretching : 1;                              // Mask: 0x1, PropSize: 0x10x272(0x1)(None)
	uint8                                        bTakeRotationFromEffectorSpace : 1;                // Mask: 0x2, PropSize: 0x10x272(0x1)(None)
	uint8                                        bMaintainEffectorRelRot : 1;                       // Mask: 0x4, PropSize: 0x10x272(0x1)(None)
	uint8                                        bAllowTwist : 1;                                   // Mask: 0x8, PropSize: 0x10x272(0x1)(None)
	uint8                                        Pad_2F48[0xD];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.LayeredBoneBlendReference
struct FLayeredBoneBlendReference : public FAnimNodeReference
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.LinkedAnimGraphReference
struct FLinkedAnimGraphReference : public FAnimNodeReference
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimGraphRuntime.RBFEntry
struct FRBFEntry
{
public:
	TArray<float>                                Values;                                            // 0x0(0x10)(None)
};

// 0x90 (0xA0 - 0x10)
// ScriptStruct AnimGraphRuntime.RBFTarget
struct FRBFTarget : public FRBFEntry
{
public:
	float                                        ScaleFactor;                                       // 0x10(0x4)(None)
	bool                                         bApplyCustomCurve;                                 // 0x14(0x1)(None)
	uint8                                        Pad_2F49[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRichCurve                            CustomCurve;                                       // 0x18(0x80)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper)
	enum class ERBFDistanceMethod                DistanceMethod;                                    // 0x98(0x1)(None)
	enum class ERBFFunctionType                  FunctionType;                                      // 0x99(0x1)(None)
	uint8                                        Pad_2F4A[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.SequenceEvaluatorReference
struct FSequenceEvaluatorReference : public FAnimNodeReference
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.SequencePlayerReference
struct FSequencePlayerReference : public FAnimNodeReference
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.SkeletalControlReference
struct FSkeletalControlReference : public FAnimNodeReference
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
struct FAnimNode_StateResult : public FAnimNode_Root
{
public:
};

}


