#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFootPlacementLockType : uint8
{
	Unlocked                       = 0,
	PivotAroundBall                = 1,
	PivotAroundAnkle               = 2,
	LockRotation                   = 3,
	EFootPlacementLockType_MAX     = 4,
};

enum class EPelvisHeightMode : uint8
{
	AllLegs                        = 0,
	AllPlantedFeet                 = 1,
	FrontPlantedFeetUphill_FrontFeetDownhill = 2,
	EPelvisHeightMode_MAX          = 3,
};

enum class EActorMovementCompensationMode : uint8
{
	ComponentSpace                 = 0,
	WorldSpace                     = 1,
	SuddenMotionOnly               = 2,
	EActorMovementCompensationMode_MAX = 3,
};

enum class EOffsetRootBoneMode : uint8
{
	Accumulate                     = 0,
	Interpolate                    = 1,
	Hold                           = 2,
	Release                        = 3,
	EOffsetRootBoneMode_MAX        = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x24 - 0x0)
// ScriptStruct AnimationWarpingRuntime.FootPlacementInterpolationSettings
struct FFootPlacementInterpolationSettings
{
public:
	float                                        UnplantLinearStiffness;                            // 0x0(0x4)(None)
	float                                        UnplantLinearDamping;                              // 0x4(0x4)(None)
	float                                        UnplantAngularStiffness;                           // 0x8(0x4)(None)
	float                                        UnplantAngularDamping;                             // 0xC(0x4)(None)
	float                                        FloorLinearStiffness;                              // 0x10(0x4)(None)
	float                                        FloorLinearDamping;                                // 0x14(0x4)(None)
	float                                        FloorAngularStiffness;                             // 0x18(0x4)(None)
	float                                        FloorAngularDamping;                               // 0x1C(0x4)(None)
	bool                                         bEnableFloorInterpolation;                         // 0x20(0x1)(None)
	uint8                                        Pad_2C1C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct AnimationWarpingRuntime.FootPlacementTraceSettings
struct FFootPlacementTraceSettings
{
public:
	float                                        StartOffset;                                       // 0x0(0x4)(None)
	float                                        EndOffset;                                         // 0x4(0x4)(None)
	float                                        SweepRadius;                                       // 0x8(0x4)(None)
	enum class ETraceTypeQuery                   ComplexTraceChannel;                               // 0xC(0x1)(None)
	uint8                                        Pad_2C1D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxGroundPenetration;                              // 0x10(0x4)(None)
	float                                        SimpleCollisionInfluence;                          // 0x14(0x4)(None)
	enum class ETraceTypeQuery                   SimpleTraceChannel;                                // 0x18(0x1)(None)
	bool                                         bEnabled;                                          // 0x19(0x1)(None)
	uint8                                        Pad_2C1F[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AnimationWarpingRuntime.FootPlacementRootDefinition
struct FFootPlacementRootDefinition
{
public:
	struct FBoneReference                        PelvisBone;                                        // 0x0(0x10)(None)
	struct FBoneReference                        IKRootBone;                                        // 0x10(0x10)(None)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct AnimationWarpingRuntime.FootPlacementPelvisSettings
struct FFootPlacementPelvisSettings
{
public:
	float                                        MaxOffset;                                         // 0x0(0x4)(None)
	float                                        LinearStiffness;                                   // 0x4(0x4)(None)
	float                                        LinearDamping;                                     // 0x8(0x4)(None)
	float                                        HorizontalRebalancingWeight;                       // 0xC(0x4)(None)
	float                                        MaxOffsetHorizontal;                               // 0x10(0x4)(None)
	float                                        HeelLiftRatio;                                     // 0x14(0x4)(None)
	enum class EPelvisHeightMode                 PelvisHeightMode;                                  // 0x18(0x1)(None)
	enum class EActorMovementCompensationMode    ActorMovementCompensationMode;                     // 0x19(0x1)(None)
	bool                                         bEnableInterpolation;                              // 0x1A(0x1)(None)
	uint8                                        Pad_2C21[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x44 (0x44 - 0x0)
// ScriptStruct AnimationWarpingRuntime.FootPlacemenLegDefinition
struct FFootPlacemenLegDefinition
{
public:
	struct FBoneReference                        FKFootBone;                                        // 0x0(0x10)(None)
	struct FBoneReference                        IKFootBone;                                        // 0x10(0x10)(None)
	struct FBoneReference                        BallBone;                                          // 0x20(0x10)(None)
	int32                                        NumBonesInLimb;                                    // 0x30(0x4)(None)
	class FName                                  SpeedCurveName;                                    // 0x34(0x8)(None)
	class FName                                  DisableLockCurveName;                              // 0x3C(0x8)(None)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct AnimationWarpingRuntime.FootPlacementPlantSettings
struct FFootPlacementPlantSettings
{
public:
	float                                        SpeedThreshold;                                    // 0x0(0x4)(None)
	float                                        DistanceToGround;                                  // 0x4(0x4)(None)
	enum class EFootPlacementLockType            LockType;                                          // 0x8(0x1)(None)
	uint8                                        Pad_2C24[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UnplantRadius;                                     // 0xC(0x4)(None)
	float                                        ReplantRadiusRatio;                                // 0x10(0x4)(None)
	float                                        UnplantAngle;                                      // 0x14(0x4)(None)
	float                                        ReplantAngleRatio;                                 // 0x18(0x4)(None)
	float                                        MaxExtensionRatio;                                 // 0x1C(0x4)(None)
	float                                        MinExtensionRatio;                                 // 0x20(0x4)(None)
	float                                        SeparatingDistance;                                // 0x24(0x4)(None)
	float                                        UnalignmentSpeedThreshold;                         // 0x28(0x4)(None)
	float                                        AnkleTwistReduction;                               // 0x2C(0x4)(None)
	bool                                         bAdjustHeelBeforePlanting;                         // 0x30(0x1)(None)
	uint8                                        Pad_2C25[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x348 (0x410 - 0xC8)
// ScriptStruct AnimationWarpingRuntime.AnimNode_FootPlacement
struct FAnimNode_FootPlacement : public FAnimNode_SkeletalControlBase
{
public:
	enum class EWarpingEvaluationMode            PlantSpeedMode;                                    // 0xC8(0x1)(None)
	uint8                                        Pad_2C27[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        IKFootRootBone;                                    // 0xCC(0x10)(None)
	struct FBoneReference                        PelvisBone;                                        // 0xDC(0x10)(None)
	struct FFootPlacementPelvisSettings          PelvisSettings;                                    // 0xEC(0x1C)(None)
	TArray<struct FFootPlacemenLegDefinition>    LegDefinitions;                                    // 0x108(0x10)(None)
	struct FFootPlacementPlantSettings           PlantSettings;                                     // 0x118(0x34)(None)
	struct FFootPlacementInterpolationSettings   InterpolationSettings;                             // 0x14C(0x24)(None)
	struct FFootPlacementTraceSettings           TraceSettings;                                     // 0x170(0x1C)(None)
	uint8                                        Pad_2C28[0x284];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0x190 - 0xC8)
// ScriptStruct AnimationWarpingRuntime.AnimNode_OffsetRootBone
struct FAnimNode_OffsetRootBone : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_2C2B[0xC8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0x198 - 0xC8)
// ScriptStruct AnimationWarpingRuntime.AnimNode_OrientationWarping
struct FAnimNode_OrientationWarping : public FAnimNode_SkeletalControlBase
{
public:
	enum class EWarpingEvaluationMode            Mode;                                              // 0xC8(0x1)(None)
	uint8                                        Pad_2C53[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OrientationAngle;                                  // 0xCC(0x4)(None)
	float                                        LocomotionAngle;                                   // 0xD0(0x4)(None)
	float                                        MinRootMotionSpeedThreshold;                       // 0xD4(0x4)(None)
	float                                        LocomotionAngleDeltaThreshold;                     // 0xD8(0x4)(None)
	uint8                                        Pad_2C56[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBoneReference>                SpineBones;                                        // 0xE0(0x10)(ContainsInstancedReference, BlueprintCallable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FBoneReference                        IKFootRootBone;                                    // 0xF0(0x10)(None)
	TArray<struct FBoneReference>                IKFootBones;                                       // 0x100(0x10)(None)
	enum class EAxis                             RotationAxis;                                      // 0x110(0x1)(None)
	uint8                                        Pad_2C57[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistributedBoneOrientationAlpha;                   // 0x114(0x4)(None)
	float                                        RotationInterpSpeed;                               // 0x118(0x4)(None)
	float                                        WarpingAlpha;                                      // 0x11C(0x4)(None)
	float                                        OffsetAlpha;                                       // 0x120(0x4)(None)
	float                                        MaxOffsetAngle;                                    // 0x124(0x4)(None)
	uint8                                        Pad_2C58[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AnimationWarpingRuntime.SlopeWarpingFootDefinition
struct FSlopeWarpingFootDefinition
{
public:
	struct FBoneReference                        IKFootBone;                                        // 0x0(0x10)(None)
	struct FBoneReference                        FKFootBone;                                        // 0x10(0x10)(None)
	int32                                        NumBonesInLimb;                                    // 0x20(0x4)(None)
	float                                        FootSize;                                          // 0x24(0x4)(None)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct AnimationWarpingRuntime.SlopeWarpingFootData
struct FSlopeWarpingFootData
{
public:
	uint8                                        Pad_2C5A[0xB0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x218 (0x2E0 - 0xC8)
// ScriptStruct AnimationWarpingRuntime.AnimNode_SlopeWarping
struct FAnimNode_SlopeWarping : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_2C5D[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        IKFootRootBone;                                    // 0xE0(0x10)(None)
	struct FBoneReference                        PelvisBone;                                        // 0xF0(0x10)(None)
	TArray<struct FSlopeWarpingFootDefinition>   FeetDefinitions;                                   // 0x100(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FSlopeWarpingFootData>         FeetData;                                          // 0x110(0x10)(None)
	struct FVectorRK4SpringInterpolator          PelvisOffsetInterpolator;                          // 0x120(0x8)(None)
	uint8                                        Pad_2C5E[0x58];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               GravityDir;                                        // 0x180(0x18)(None)
	struct FVector                               CustomFloorOffset;                                 // 0x198(0x18)(None)
	float                                        CachedDeltaTime;                                   // 0x1B0(0x4)(None)
	uint8                                        Pad_2C5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TargetFloorNormalWorldSpace;                       // 0x1B8(0x18)(None)
	struct FVectorRK4SpringInterpolator          FloorNormalInterpolator;                           // 0x1D0(0x8)(None)
	uint8                                        Pad_2C61[0x58];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TargetFloorOffsetLocalSpace;                       // 0x230(0x18)(None)
	struct FVectorRK4SpringInterpolator          FloorOffsetInterpolator;                           // 0x248(0x8)(None)
	uint8                                        Pad_2C62[0x58];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxStepHeight;                                     // 0x2A8(0x4)(None)
	uint8                                        bKeepMeshInsideOfCapsule : 1;                      // Mask: 0x1, PropSize: 0x10x2AC(0x1)(None)
	uint8                                        bPullPelvisDown : 1;                               // Mask: 0x2, PropSize: 0x10x2AC(0x1)(None)
	uint8                                        bUseCustomFloorOffset : 1;                         // Mask: 0x4, PropSize: 0x10x2AC(0x1)(None)
	uint8                                        bWasOnGround : 1;                                  // Mask: 0x8, PropSize: 0x10x2AC(0x1)(None)
	uint8                                        bShowDebug : 1;                                    // Mask: 0x10, PropSize: 0x10x2AC(0x1)(None)
	uint8                                        bFloorSmoothingInitialized : 1;                    // Mask: 0x20, PropSize: 0x10x2AC(0x1)(None)
	uint8                                        BitPad_212 : 2;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2C63[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ActorLocation;                                     // 0x2B0(0x18)(None)
	struct FVector                               GravityDirCompSpace;                               // 0x2C8(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimationWarpingRuntime.StrideWarpingFootDefinition
struct FStrideWarpingFootDefinition
{
public:
	struct FBoneReference                        IKFootBone;                                        // 0x0(0x10)(None)
	struct FBoneReference                        FKFootBone;                                        // 0x10(0x10)(None)
	struct FBoneReference                        ThighBone;                                         // 0x20(0x10)(None)
};

// 0x180 (0x248 - 0xC8)
// ScriptStruct AnimationWarpingRuntime.AnimNode_StrideWarping
struct FAnimNode_StrideWarping : public FAnimNode_SkeletalControlBase
{
public:
	enum class EWarpingEvaluationMode            Mode;                                              // 0xC8(0x1)(None)
	uint8                                        Pad_2C69[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StrideDirection;                                   // 0xD0(0x18)(None)
	float                                        StrideScale;                                       // 0xE8(0x4)(None)
	float                                        LocomotionSpeed;                                   // 0xEC(0x4)(None)
	float                                        MinRootMotionSpeedThreshold;                       // 0xF0(0x4)(None)
	struct FBoneReference                        PelvisBone;                                        // 0xF4(0x10)(None)
	struct FBoneReference                        IKFootRootBone;                                    // 0x104(0x10)(None)
	uint8                                        Pad_2C6A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStrideWarpingFootDefinition>  FootDefinitions;                                   // 0x118(0x10)(None)
	struct FInputClampConstants                  StrideScaleModifier;                               // 0x128(0x14)(None)
	uint8                                        Pad_2C6B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWarpingVectorValue                   FloorNormalDirection;                              // 0x140(0x20)(None)
	struct FWarpingVectorValue                   GravityDirection;                                  // 0x160(0x20)(None)
	struct FIKFootPelvisPullDownSolver           PelvisIKFootSolver;                                // 0x180(0x80)(None)
	bool                                         bOrientStrideDirectionUsingFloorNormal;            // 0x200(0x1)(None)
	bool                                         bCompensateIKUsingFKThighRotation;                 // 0x201(0x1)(None)
	bool                                         bClampIKUsingFKLimits;                             // 0x202(0x1)(None)
	uint8                                        Pad_2C6C[0x45];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


