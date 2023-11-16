#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EIKRigGoalSpace : uint8
{
	Component                      = 0,
	Additive                       = 1,
	World                          = 2,
	EIKRigGoalSpace_MAX            = 3,
};

enum class EIKRigGoalTransformSource : uint8
{
	Manual                         = 0,
	Bone                           = 1,
	ActorComponent                 = 2,
	EIKRigGoalTransformSource_MAX  = 3,
};

enum class ERetargetSourceOrTarget : uint8
{
	Source                         = 0,
	Target                         = 1,
	ERetargetSourceOrTarget_MAX    = 2,
};

enum class ERetargetTranslationMode : uint8
{
	None                           = 0,
	GloballyScaled                 = 1,
	Absolute                       = 2,
	ERetargetTranslationMode_MAX   = 3,
};

enum class ERetargetRotationMode : uint8
{
	Interpolated                   = 0,
	OneToOne                       = 1,
	OneToOneReversed               = 2,
	None                           = 3,
	ERetargetRotationMode_MAX      = 4,
};

enum class EBasicAxis : int32
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	NegX                           = 3,
	NegY                           = 4,
	NegZ                           = 5,
	EBasicAxis_MAX                 = 6,
};

enum class EWarpingDirectionSource : int32
{
	Goals                          = 0,
	Chain                          = 1,
	EWarpingDirectionSource_MAX    = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct IKRig.TargetChainFKSettings
struct FTargetChainFKSettings
{
public:
	bool                                         EnableFK;                                          // 0x0(0x1)(None)
	enum class ERetargetRotationMode             RotationMode;                                      // 0x1(0x1)(None)
	uint8                                        Pad_2095[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RotationAlpha;                                     // 0x4(0x4)(None)
	enum class ERetargetTranslationMode          TranslationMode;                                   // 0x8(0x1)(None)
	uint8                                        Pad_2096[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TranslationAlpha;                                  // 0xC(0x4)(None)
	float                                        PoleVectorMatching;                                // 0x10(0x4)(None)
	float                                        PoleVectorOffset;                                  // 0x14(0x4)(None)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct IKRig.TargetChainIKSettings
struct FTargetChainIKSettings
{
public:
	bool                                         EnableIK;                                          // 0x0(0x1)(None)
	uint8                                        Pad_2097[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendToSource;                                     // 0x4(0x4)(None)
	struct FVector                               BlendToSourceWeights;                              // 0x8(0x18)(None)
	struct FVector                               StaticOffset;                                      // 0x20(0x18)(None)
	struct FVector                               StaticLocalOffset;                                 // 0x38(0x18)(None)
	struct FRotator                              StaticRotationOffset;                              // 0x50(0x18)(None)
	float                                        ScaleVertical;                                     // 0x68(0x4)(None)
	float                                        Extension;                                         // 0x6C(0x4)(None)
	bool                                         bAffectedByIKWarping;                              // 0x70(0x1)(None)
	uint8                                        Pad_2098[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IKRig.TargetChainSpeedPlantSettings
struct FTargetChainSpeedPlantSettings
{
public:
	bool                                         EnableSpeedPlanting;                               // 0x0(0x1)(None)
	uint8                                        Pad_2099[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SpeedCurveName;                                    // 0x4(0x8)(None)
	float                                        SpeedThreshold;                                    // 0xC(0x4)(None)
	float                                        UnplantStiffness;                                  // 0x10(0x4)(None)
	float                                        UnplantCriticalDamping;                            // 0x14(0x4)(None)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct IKRig.TargetChainSettings
struct FTargetChainSettings
{
public:
	struct FTargetChainFKSettings                FK;                                                // 0x0(0x18)(None)
	struct FTargetChainIKSettings                IK;                                                // 0x18(0x78)(None)
	struct FTargetChainSpeedPlantSettings        SpeedPlanting;                                     // 0x90(0x18)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct IKRig.TargetRootSettings
struct FTargetRootSettings
{
public:
	float                                        RotationAlpha;                                     // 0x0(0x4)(None)
	float                                        TranslationAlpha;                                  // 0x4(0x4)(None)
	float                                        BlendToSource;                                     // 0x8(0x4)(None)
	uint8                                        Pad_209B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BlendToSourceWeights;                              // 0x10(0x18)(None)
	float                                        ScaleHorizontal;                                   // 0x28(0x4)(None)
	float                                        ScaleVertical;                                     // 0x2C(0x4)(None)
	struct FVector                               TranslationOffset;                                 // 0x30(0x18)(None)
	struct FRotator                              RotationOffset;                                    // 0x48(0x18)(None)
	float                                        AffectIKHorizontal;                                // 0x60(0x4)(None)
	float                                        AffectIKVertical;                                  // 0x64(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct IKRig.RetargetGlobalSettings
struct FRetargetGlobalSettings
{
public:
	bool                                         bEnableRoot;                                       // 0x0(0x1)(None)
	bool                                         bEnableFK;                                         // 0x1(0x1)(None)
	bool                                         bEnableIK;                                         // 0x2(0x1)(None)
	bool                                         bWarping;                                          // 0x3(0x1)(None)
	enum class EWarpingDirectionSource           DirectionSource;                                   // 0x4(0x4)(None)
	enum class EBasicAxis                        ForwardDirection;                                  // 0x8(0x4)(None)
	class FName                                  DirectionChain;                                    // 0xC(0x8)(None)
	float                                        WarpForwards;                                      // 0x14(0x4)(None)
	float                                        SidewaysOffset;                                    // 0x18(0x4)(None)
	float                                        WarpSplay;                                         // 0x1C(0x4)(None)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct IKRig.RetargetProfile
struct FRetargetProfile
{
public:
	bool                                         bApplyTargetRetargetPose;                          // 0x0(0x1)(None)
	uint8                                        Pad_209D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TargetRetargetPoseName;                            // 0x4(0x8)(None)
	bool                                         bApplySourceRetargetPose;                          // 0xC(0x1)(None)
	uint8                                        Pad_209E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SourceRetargetPoseName;                            // 0x10(0x8)(None)
	bool                                         bApplyChainSettings;                               // 0x18(0x1)(None)
	uint8                                        Pad_209F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FTargetChainSettings> ChainSettings;                                     // 0x20(0x50)(None)
	bool                                         bApplyRootSettings;                                // 0x70(0x1)(None)
	uint8                                        Pad_20A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTargetRootSettings                   RootSettings;                                      // 0x78(0x68)(None)
	bool                                         bApplyGlobalSettings;                              // 0xE0(0x1)(None)
	uint8                                        Pad_20A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRetargetGlobalSettings               GlobalSettings;                                    // 0xE4(0x20)(None)
	uint8                                        Pad_20A2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct IKRig.IKRigGoal
struct FIKRigGoal
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	enum class EIKRigGoalTransformSource         TransformSource;                                   // 0x8(0x1)(None)
	uint8                                        Pad_20A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        SourceBone;                                        // 0xC(0x10)(None)
	uint8                                        Pad_20A4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x20(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x38(0x18)(None)
	float                                        PositionAlpha;                                     // 0x50(0x4)(None)
	float                                        RotationAlpha;                                     // 0x54(0x4)(None)
	enum class EIKRigGoalSpace                   PositionSpace;                                     // 0x58(0x1)(None)
	enum class EIKRigGoalSpace                   RotationSpace;                                     // 0x59(0x1)(None)
	uint8                                        Pad_20A5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               FinalBlendedPosition;                              // 0x60(0x18)(None)
	uint8                                        Pad_20A6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 FinalBlendedRotation;                              // 0x80(0x20)(None)
};

// 0x188 (0x1E0 - 0x58)
// ScriptStruct IKRig.AnimNode_IKRig
struct FAnimNode_IKRig : public FAnimNode_CustomProperty
{
public:
	struct FPoseLink                             Source;                                            // 0x58(0x10)(None)
	class UIKRigDefinition*                      RigDefinitionAsset;                                // 0x68(0x8)(ZeroConstructor)
	TArray<struct FIKRigGoal>                    Goals;                                             // 0x70(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	bool                                         bStartFromRefPose;                                 // 0x80(0x1)(None)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x81(0x1)(None)
	bool                                         bAlphaBoolEnabled;                                 // 0x82(0x1)(None)
	uint8                                        Pad_20A9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Alpha;                                             // 0x84(0x4)(None)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x88(0x8)(None)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x90(0x48)(ZeroConstructor)
	class FName                                  AlphaCurveName;                                    // 0xD8(0x8)(None)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0xE0(0x30)(None)
	class UIKRigProcessor*                       IKRigProcessor;                                    // 0x110(0x8)(ZeroConstructor)
	uint8                                        Pad_20AA[0xC0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ActualAlpha;                                       // 0x1D8(0x4)(None)
	uint8                                        Pad_20AB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x248 (0x258 - 0x10)
// ScriptStruct IKRig.AnimNode_RetargetPoseFromMesh
struct FAnimNode_RetargetPoseFromMesh : public FAnimNode_Base
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent> SourceMeshComponent;                               // 0x10(0x8)(ZeroConstructor)
	bool                                         bUseAttachedParent;                                // 0x18(0x1)(None)
	uint8                                        Pad_20AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIKRetargeter*                         IKRetargeterAsset;                                 // 0x20(0x8)(ZeroConstructor)
	struct FRetargetProfile                      CustomRetargetProfile;                             // 0x28(0x108)(None)
	bool                                         bSuppressWarnings;                                 // 0x130(0x1)(None)
	bool                                         bCopyCurves;                                       // 0x131(0x1)(None)
	uint8                                        Pad_20AD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIKRetargetProcessor*                  Processor;                                         // 0x138(0x8)(None)
	uint8                                        Pad_20AE[0x118];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IKRig.IKRigGoalContainer
struct FIKRigGoalContainer
{
public:
	uint8                                        Pad_20AF[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct IKRig.BoneChain
struct FBoneChain
{
public:
	class FName                                  ChainName;                                         // 0x0(0x8)(None)
	struct FBoneReference                        StartBone;                                         // 0x8(0x10)(None)
	struct FBoneReference                        EndBone;                                           // 0x18(0x10)(None)
	class FName                                  IKGoalName;                                        // 0x28(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IKRig.RetargetDefinition
struct FRetargetDefinition
{
public:
	class FName                                  RootBone;                                          // 0x0(0x8)(None)
	TArray<struct FBoneChain>                    BoneChains;                                        // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IKRig.GoalBone
struct FGoalBone
{
public:
	uint8                                        Pad_20B0[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct IKRig.IKRigInputSkeleton
struct FIKRigInputSkeleton
{
public:
	uint8                                        Pad_20B1[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct IKRig.IKRigSkeleton
struct FIKRigSkeleton
{
public:
	TArray<class FName>                          BoneNames;                                         // 0x0(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                ParentIndices;                                     // 0x10(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FName>                          ExcludedBones;                                     // 0x20(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTransform>                    CurrentPoseGlobal;                                 // 0x30(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTransform>                    CurrentPoseLocal;                                  // 0x40(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTransform>                    RefPoseGlobal;                                     // 0x50(0x10)(None)
	uint8                                        Pad_20B4[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct IKRig.RetargetChainMap
struct FRetargetChainMap
{
public:
	class FName                                  SourceChain;                                       // 0x0(0x8)(None)
	class FName                                  TargetChain;                                       // 0x8(0x8)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct IKRig.IKRetargetPose
struct FIKRetargetPose
{
public:
	struct FVector                               RootTranslationOffset;                             // 0x0(0x18)(None)
	TMap<class FName, struct FQuat>              BoneRotationOffsets;                               // 0x18(0x50)(None)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct IKRig.LimbSolverSettings
struct FLimbSolverSettings
{
public:
	float                                        ReachPrecision;                                    // 0x0(0x4)(None)
	enum class EAxis                             HingeRotationAxis;                                 // 0x4(0x1)(None)
	uint8                                        Pad_20B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxIterations;                                     // 0x8(0x4)(None)
	bool                                         bEnableLimit;                                      // 0xC(0x1)(None)
	uint8                                        Pad_20B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinRotationAngle;                                  // 0x10(0x4)(None)
	bool                                         bAveragePull;                                      // 0x14(0x1)(None)
	uint8                                        Pad_20B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PullDistribution;                                  // 0x18(0x4)(None)
	float                                        ReachStepAlpha;                                    // 0x1C(0x4)(None)
	bool                                         bEnableTwistCorrection;                            // 0x20(0x1)(None)
	enum class EAxis                             EndBoneForwardAxis;                                // 0x21(0x1)(None)
	uint8                                        Pad_20B8[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct IKRig.LimbLink
struct FLimbLink
{
public:
	uint8                                        Pad_20B9[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct IKRig.LimbSolver
struct FLimbSolver
{
public:
	uint8                                        Pad_20BA[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


