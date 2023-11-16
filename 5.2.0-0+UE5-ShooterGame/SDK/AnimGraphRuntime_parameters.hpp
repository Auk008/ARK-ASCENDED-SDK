#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpaceLibrary.SnapToPosition
struct UBlendSpaceLibrary_SnapToPosition_Params
{
public:
	struct FBlendSpaceReference                  BlendSpace;                                        // 0x0(0x10)(None)
	struct FVector                               NewPosition;                                       // 0x10(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpaceLibrary.GetPosition
struct UBlendSpaceLibrary_GetPosition_Params
{
public:
	struct FBlendSpaceReference                  BlendSpace;                                        // 0x0(0x10)(None)
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpaceLibrary.GetFilteredPosition
struct UBlendSpaceLibrary_GetFilteredPosition_Params
{
public:
	struct FBlendSpaceReference                  BlendSpace;                                        // 0x0(0x10)(None)
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpacePure
struct UBlendSpaceLibrary_ConvertToBlendSpacePure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(None)
	struct FBlendSpaceReference                  BlendSpace;                                        // 0x10(0x10)(None)
	bool                                         Result;                                            // 0x20(0x1)(None)
	uint8                                        Pad_2DB7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpace
struct UBlendSpaceLibrary_ConvertToBlendSpace_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(None)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(None)
	uint8                                        Pad_2DB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlendSpaceReference                  ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x48 (0x48 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.SetState
struct UAnimationStateMachineLibrary_SetState_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(None)
	struct FAnimationStateMachineReference       Node;                                              // 0x10(0x10)(None)
	class FName                                  TargetState;                                       // 0x20(0x8)(None)
	float                                        Duration;                                          // 0x28(0x4)(None)
	enum class ETransitionLogicType              BlendType;                                         // 0x2C(0x1)(None)
	uint8                                        Pad_2DC8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlendProfile*                         BlendProfile;                                      // 0x30(0x8)(ZeroConstructor)
	enum class EAlphaBlendOption                 AlphaBlendOption;                                  // 0x38(0x1)(None)
	uint8                                        Pad_2DCB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           CustomBlendCurve;                                  // 0x40(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut
struct UAnimationStateMachineLibrary_IsStateBlendingOut_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(None)
	struct FAnimationStateResultReference        Node;                                              // 0x10(0x10)(None)
	bool                                         ReturnValue;                                       // 0x20(0x1)(None)
	uint8                                        Pad_2DD1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn
struct UAnimationStateMachineLibrary_IsStateBlendingIn_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(None)
	struct FAnimationStateResultReference        Node;                                              // 0x10(0x10)(None)
	bool                                         ReturnValue;                                       // 0x20(0x1)(None)
	uint8                                        Pad_2DD2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.GetState
struct UAnimationStateMachineLibrary_GetState_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(None)
	struct FAnimationStateMachineReference       Node;                                              // 0x10(0x10)(None)
	class FName                                  ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemainingFraction
struct UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(None)
	struct FAnimationStateResultReference        Node;                                              // 0x10(0x10)(None)
	float                                        ReturnValue;                                       // 0x20(0x4)(None)
	uint8                                        Pad_2DD6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemaining
struct UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(None)
	struct FAnimationStateResultReference        Node;                                              // 0x10(0x10)(None)
	float                                        ReturnValue;                                       // 0x20(0x4)(None)
	uint8                                        Pad_2DD9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure
struct UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(None)
	struct FAnimationStateResultReference        AnimationState;                                    // 0x10(0x10)(None)
	bool                                         Result;                                            // 0x20(0x1)(None)
	uint8                                        Pad_2DDA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult
struct UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(None)
	struct FAnimationStateResultReference        AnimationState;                                    // 0x10(0x10)(None)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x20(0x1)(None)
	uint8                                        Pad_2DDE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachinePure
struct UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(None)
	struct FAnimationStateMachineReference       AnimationState;                                    // 0x10(0x10)(None)
	bool                                         Result;                                            // 0x20(0x1)(None)
	uint8                                        Pad_2DE1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachine
struct UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(None)
	struct FAnimationStateMachineReference       AnimationState;                                    // 0x10(0x10)(None)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x20(0x1)(None)
	uint8                                        Pad_2DE4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime
struct UAnimExecutionContextLibrary_GetDeltaTime_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(None)
	float                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_2DE9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight
struct UAnimExecutionContextLibrary_GetCurrentWeight_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(None)
	float                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_2DEA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference
struct UAnimExecutionContextLibrary_GetAnimNodeReference_Params
{
public:
	class UAnimInstance*                         Instance;                                          // 0x0(0x8)(None)
	int32                                        Index;                                             // 0x8(0x4)(None)
	uint8                                        Pad_2DEB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNodeReference                    ReturnValue;                                       // 0x10(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance
struct UAnimExecutionContextLibrary_GetAnimInstance_Params
{
public:
	struct FAnimExecutionContext                 Context;                                           // 0x0(0x10)(None)
	class UAnimInstance*                         ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext
struct UAnimExecutionContextLibrary_ConvertToUpdateContext_Params
{
public:
	struct FAnimExecutionContext                 Context;                                           // 0x0(0x10)(None)
	enum class EAnimExecutionContextConversionResult Result;                                            // 0x10(0x1)(None)
	uint8                                        Pad_2DEC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimUpdateContext                    ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext
struct UAnimExecutionContextLibrary_ConvertToPoseContext_Params
{
public:
	struct FAnimExecutionContext                 Context;                                           // 0x0(0x10)(None)
	enum class EAnimExecutionContextConversionResult Result;                                            // 0x10(0x1)(None)
	uint8                                        Pad_2DEF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimPoseContext                      ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext
struct UAnimExecutionContextLibrary_ConvertToInitializationContext_Params
{
public:
	struct FAnimExecutionContext                 Context;                                           // 0x0(0x10)(None)
	enum class EAnimExecutionContextConversionResult Result;                                            // 0x10(0x1)(None)
	uint8                                        Pad_2DF1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimInitializationContext            ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext
struct UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Params
{
public:
	struct FAnimExecutionContext                 Context;                                           // 0x0(0x10)(None)
	enum class EAnimExecutionContextConversionResult Result;                                            // 0x10(0x1)(None)
	uint8                                        Pad_2DF2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimComponentSpacePoseContext        ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SnapToPosition
struct UBlendSpacePlayerLibrary_SnapToPosition_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(None)
	struct FVector                               NewPosition;                                       // 0x10(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ShouldResetPlayTimeWhenBlendSpaceChanges
struct UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_2DFF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetResetPlayTimeWhenBlendSpaceChanges
struct UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(None)
	bool                                         bReset;                                            // 0x10(0x1)(None)
	uint8                                        Pad_2E02[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetPlayRate
struct UBlendSpacePlayerLibrary_SetPlayRate_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(None)
	float                                        PlayRate;                                          // 0x10(0x4)(None)
	uint8                                        Pad_2E04[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetLoop
struct UBlendSpacePlayerLibrary_SetLoop_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(None)
	bool                                         bLoop;                                             // 0x10(0x1)(None)
	uint8                                        Pad_2E07[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpaceWithInertialBlending
struct UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(None)
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x10(0x10)(None)
	class UBlendSpace*                           BlendSpace;                                        // 0x20(0x8)(None)
	float                                        BlendTime;                                         // 0x28(0x4)(None)
	uint8                                        Pad_2E0A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x30(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpace
struct UBlendSpacePlayerLibrary_SetBlendSpace_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(None)
	class UBlendSpace*                           BlendSpace;                                        // 0x10(0x8)(None)
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetStartPosition
struct UBlendSpacePlayerLibrary_GetStartPosition_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(None)
	float                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_2E0D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPosition
struct UBlendSpacePlayerLibrary_GetPosition_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(None)
	struct FVector                               ReturnValue;                                       // 0x10(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPlayRate
struct UBlendSpacePlayerLibrary_GetPlayRate_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(None)
	float                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_2E0E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetLoop
struct UBlendSpacePlayerLibrary_GetLoop_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_2E12[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetBlendSpace
struct UBlendSpacePlayerLibrary_GetBlendSpace_Params
{
public:
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x0(0x10)(None)
	class UBlendSpace*                           ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayerPure
struct UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(None)
	struct FBlendSpacePlayerReference            BlendSpacePlayer;                                  // 0x10(0x10)(None)
	bool                                         Result;                                            // 0x20(0x1)(None)
	uint8                                        Pad_2E15[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayer
struct UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(None)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(None)
	uint8                                        Pad_2E19[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlendSpacePlayerReference            ReturnValue;                                       // 0x18(0x10)(None)
};

// 0xB8 (0xB8 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
struct UKismetAnimationLibrary_K2_TwoBoneIK_Params
{
public:
	struct FVector                               RootPos;                                           // 0x0(0x18)(None)
	struct FVector                               JointPos;                                          // 0x18(0x18)(None)
	struct FVector                               EndPos;                                            // 0x30(0x18)(None)
	struct FVector                               JointTarget;                                       // 0x48(0x18)(None)
	struct FVector                               Effector;                                          // 0x60(0x18)(None)
	struct FVector                               OutJointPos;                                       // 0x78(0x18)(None)
	struct FVector                               OutEndPos;                                         // 0x90(0x18)(None)
	bool                                         bAllowStretching;                                  // 0xA8(0x1)(None)
	uint8                                        Pad_2E25[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartStretchRatio;                                 // 0xAC(0x4)(None)
	float                                        MaxStretchScale;                                   // 0xB0(0x4)(None)
	uint8                                        Pad_2E26[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
struct UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params
{
public:
	float                                        X;                                                 // 0x0(0x4)(None)
	float                                        Y;                                                 // 0x4(0x4)(None)
	float                                        Z;                                                 // 0x8(0x4)(None)
	float                                        RangeOutMinX;                                      // 0xC(0x4)(None)
	float                                        RangeOutMaxX;                                      // 0x10(0x4)(None)
	float                                        RangeOutMinY;                                      // 0x14(0x4)(None)
	float                                        RangeOutMaxY;                                      // 0x18(0x4)(None)
	float                                        RangeOutMinZ;                                      // 0x1C(0x4)(None)
	float                                        RangeOutMaxZ;                                      // 0x20(0x4)(None)
	uint8                                        Pad_2E30[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x28(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
struct UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(None)
	float                                        RangeOutMin;                                       // 0x4(0x4)(None)
	float                                        RangeOutMax;                                       // 0x8(0x4)(None)
	float                                        ReturnValue;                                       // 0xC(0x4)(None)
};

// 0x120 (0x120 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
struct UKismetAnimationLibrary_K2_LookAt_Params
{
public:
	struct FTransform                            CurrentTransform;                                  // 0x0(0x60)(None)
	struct FVector                               TargetPosition;                                    // 0x60(0x18)(None)
	struct FVector                               LookAtVector;                                      // 0x78(0x18)(None)
	bool                                         bUseUpVector;                                      // 0x90(0x1)(None)
	uint8                                        Pad_2E39[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               UpVector;                                          // 0x98(0x18)(None)
	float                                        ClampConeInDegree;                                 // 0xB0(0x4)(None)
	uint8                                        Pad_2E3A[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0xC0(0x60)(None)
};

// 0x20 (0x20 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
struct UKismetAnimationLibrary_K2_EndProfilingTimer_Params
{
public:
	bool                                         bLog;                                              // 0x0(0x1)(None)
	uint8                                        Pad_2E3D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LogPrefix;                                         // 0x8(0x10)(None)
	float                                        ReturnValue;                                       // 0x18(0x4)(None)
	uint8                                        Pad_2E3E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
struct UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Params
{
public:
	class USkeletalMeshComponent*                Component;                                         // 0x0(0x8)(None)
	class FName                                  SocketOrBoneNameA;                                 // 0x8(0x8)(None)
	enum class ERelativeTransformSpace           SocketSpaceA;                                      // 0x10(0x1)(None)
	uint8                                        Pad_2E41[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SocketOrBoneNameB;                                 // 0x14(0x8)(None)
	enum class ERelativeTransformSpace           SocketSpaceB;                                      // 0x1C(0x1)(None)
	bool                                         bRemapRange;                                       // 0x1D(0x1)(None)
	uint8                                        Pad_2E42[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InRangeMin;                                        // 0x20(0x4)(None)
	float                                        InRangeMax;                                        // 0x24(0x4)(None)
	float                                        OutRangeMin;                                       // 0x28(0x4)(None)
	float                                        OutRangeMax;                                       // 0x2C(0x4)(None)
	float                                        ReturnValue;                                       // 0x30(0x4)(None)
	uint8                                        Pad_2E43[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
struct UKismetAnimationLibrary_K2_DirectionBetweenSockets_Params
{
public:
	class USkeletalMeshComponent*                Component;                                         // 0x0(0x8)(None)
	class FName                                  SocketOrBoneNameFrom;                              // 0x8(0x8)(None)
	class FName                                  SocketOrBoneNameTo;                                // 0x10(0x8)(None)
	struct FVector                               ReturnValue;                                       // 0x18(0x18)(None)
};

// 0x110 (0x110 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
struct UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(None)
	uint8                                        Pad_2E48[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                Component;                                         // 0x8(0x8)(ZeroConstructor)
	class FName                                  SocketOrBoneName;                                  // 0x10(0x8)(None)
	class FName                                  ReferenceSocketOrBone;                             // 0x18(0x8)(None)
	enum class ERelativeTransformSpace           SocketSpace;                                       // 0x20(0x1)(None)
	uint8                                        Pad_2E49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OffsetInBoneSpace;                                 // 0x28(0x18)(None)
	struct FPositionHistory                      History;                                           // 0x40(0x30)(None)
	int32                                        NumberOfSamples;                                   // 0x70(0x4)(None)
	float                                        VelocityMin;                                       // 0x74(0x4)(None)
	float                                        VelocityMax;                                       // 0x78(0x4)(None)
	enum class EEasingFuncType                   EasingType;                                        // 0x7C(0x1)(None)
	uint8                                        Pad_2E4A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    CustomCurve;                                       // 0x80(0x88)(None)
	float                                        ReturnValue;                                       // 0x108(0x4)(None)
	uint8                                        Pad_2E4B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
struct UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(None)
	uint8                                        Pad_2E4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x8(0x18)(None)
	struct FPositionHistory                      History;                                           // 0x20(0x30)(None)
	int32                                        NumberOfSamples;                                   // 0x50(0x4)(None)
	float                                        VelocityMin;                                       // 0x54(0x4)(None)
	float                                        VelocityMax;                                       // 0x58(0x4)(None)
	float                                        ReturnValue;                                       // 0x5C(0x4)(None)
};

// 0x38 (0x38 - 0x0)
// Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection
struct UKismetAnimationLibrary_CalculateDirection_Params
{
public:
	struct FVector                               Velocity;                                          // 0x0(0x18)(None)
	struct FRotator                              BaseRotation;                                      // 0x18(0x18)(None)
	float                                        ReturnValue;                                       // 0x30(0x4)(None)
	uint8                                        Pad_2E4D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function AnimGraphRuntime.LayeredBoneBlendLibrary.SetBlendMask
struct ULayeredBoneBlendLibrary_SetBlendMask_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(None)
	struct FLayeredBoneBlendReference            LayeredBoneBlend;                                  // 0x10(0x10)(None)
	int32                                        PoseIndex;                                         // 0x20(0x4)(None)
	class FName                                  BlendMaskName;                                     // 0x24(0x8)(None)
	uint8                                        Pad_2E51[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLayeredBoneBlendReference            ReturnValue;                                       // 0x30(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.LayeredBoneBlendLibrary.GetNumPoses
struct ULayeredBoneBlendLibrary_GetNumPoses_Params
{
public:
	struct FLayeredBoneBlendReference            LayeredBoneBlend;                                  // 0x0(0x10)(None)
	int32                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_2E53[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBoneBlend
struct ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(None)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(None)
	uint8                                        Pad_2E55[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLayeredBoneBlendReference            ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBlendPerBonePure
struct ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(None)
	struct FLayeredBoneBlendReference            LayeredBoneBlend;                                  // 0x10(0x10)(None)
	bool                                         Result;                                            // 0x20(0x1)(None)
	uint8                                        Pad_2E56[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance
struct ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Params
{
public:
	struct FLinkedAnimGraphReference             Node;                                              // 0x0(0x10)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_2E5B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance
struct ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Params
{
public:
	struct FLinkedAnimGraphReference             Node;                                              // 0x0(0x10)(None)
	class UAnimInstance*                         ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure
struct ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(None)
	struct FLinkedAnimGraphReference             LinkedAnimGraph;                                   // 0x10(0x10)(None)
	bool                                         Result;                                            // 0x20(0x1)(None)
	uint8                                        Pad_2E5C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph
struct ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(None)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(None)
	uint8                                        Pad_2E5E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinkedAnimGraphReference             ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
struct UPlayMontageCallbackProxy_OnNotifyEndReceived_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(None)
	struct FBranchingPointNotifyPayload          BranchingPointNotifyPayload;                       // 0x8(0x20)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
struct UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(None)
	struct FBranchingPointNotifyPayload          BranchingPointNotifyPayload;                       // 0x8(0x20)(None)
};

// 0x10 (0x10 - 0x0)
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
struct UPlayMontageCallbackProxy_OnMontageEnded_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(None)
	bool                                         bInterrupted;                                      // 0x8(0x1)(None)
	uint8                                        Pad_2E60[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
struct UPlayMontageCallbackProxy_OnMontageBlendingOut_Params
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(None)
	bool                                         bInterrupted;                                      // 0x8(0x1)(None)
	uint8                                        Pad_2E61[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
struct UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params
{
public:
	class USkeletalMeshComponent*                InSkeletalMeshComponent;                           // 0x0(0x8)(ZeroConstructor)
	class UAnimMontage*                          MontageToPlay;                                     // 0x8(0x8)(ZeroConstructor)
	float                                        PlayRate;                                          // 0x10(0x4)(None)
	float                                        StartingPosition;                                  // 0x14(0x4)(None)
	class FName                                  StartingSection;                                   // 0x18(0x8)(None)
	class UPlayMontageCallbackProxy*             ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequenceWithInertialBlending
struct USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(None)
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x10(0x10)(None)
	class UAnimSequenceBase*                     Sequence;                                          // 0x20(0x8)(None)
	float                                        BlendTime;                                         // 0x28(0x4)(None)
	uint8                                        Pad_2E63[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x30(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence
struct USequenceEvaluatorLibrary_SetSequence_Params
{
public:
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x0(0x10)(None)
	class UAnimSequenceBase*                     Sequence;                                          // 0x10(0x8)(None)
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime
struct USequenceEvaluatorLibrary_SetExplicitTime_Params
{
public:
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x0(0x10)(None)
	float                                        Time;                                              // 0x10(0x4)(None)
	uint8                                        Pad_2E64[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence
struct USequenceEvaluatorLibrary_GetSequence_Params
{
public:
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x0(0x10)(None)
	class UAnimSequenceBase*                     ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime
struct USequenceEvaluatorLibrary_GetAccumulatedTime_Params
{
public:
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x0(0x10)(None)
	float                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_2E65[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure
struct USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(None)
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x10(0x10)(None)
	bool                                         Result;                                            // 0x20(0x1)(None)
	uint8                                        Pad_2E66[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator
struct USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(None)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(None)
	uint8                                        Pad_2E6B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime
struct USequenceEvaluatorLibrary_AdvanceTime_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(None)
	struct FSequenceEvaluatorReference           SequenceEvaluator;                                 // 0x10(0x10)(None)
	float                                        PlayRate;                                          // 0x20(0x4)(None)
	uint8                                        Pad_2E6C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequenceEvaluatorReference           ReturnValue;                                       // 0x28(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition
struct USequencePlayerLibrary_SetStartPosition_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(None)
	float                                        StartPosition;                                     // 0x10(0x4)(None)
	uint8                                        Pad_2E6D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending
struct USequencePlayerLibrary_SetSequenceWithInertialBlending_Params
{
public:
	struct FAnimUpdateContext                    UpdateContext;                                     // 0x0(0x10)(None)
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x10(0x10)(None)
	class UAnimSequenceBase*                     Sequence;                                          // 0x20(0x8)(None)
	float                                        BlendTime;                                         // 0x28(0x4)(None)
	uint8                                        Pad_2E6E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequencePlayerReference              ReturnValue;                                       // 0x30(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence
struct USequencePlayerLibrary_SetSequence_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(None)
	class UAnimSequenceBase*                     Sequence;                                          // 0x10(0x8)(None)
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate
struct USequencePlayerLibrary_SetPlayRate_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(None)
	float                                        PlayRate;                                          // 0x10(0x4)(None)
	uint8                                        Pad_2E6F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime
struct USequencePlayerLibrary_SetAccumulatedTime_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(None)
	float                                        Time;                                              // 0x10(0x4)(None)
	uint8                                        Pad_2E70[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition
struct USequencePlayerLibrary_GetStartPosition_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(None)
	float                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_2E71[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure
struct USequencePlayerLibrary_GetSequencePure_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(None)
	class UAnimSequenceBase*                     ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence
struct USequencePlayerLibrary_GetSequence_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(None)
	class UAnimSequenceBase*                     SequenceBase;                                      // 0x10(0x8)(None)
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate
struct USequencePlayerLibrary_GetPlayRate_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(None)
	float                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_2E72[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation
struct USequencePlayerLibrary_GetLoopAnimation_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_2E73[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime
struct USequencePlayerLibrary_GetAccumulatedTime_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(None)
	float                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_2E74[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure
struct USequencePlayerLibrary_ConvertToSequencePlayerPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(None)
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x10(0x10)(None)
	bool                                         Result;                                            // 0x20(0x1)(None)
	uint8                                        Pad_2E75[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer
struct USequencePlayerLibrary_ConvertToSequencePlayer_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(None)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(None)
	uint8                                        Pad_2E76[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSequencePlayerReference              ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SequencePlayerLibrary.ComputePlayRateFromDuration
struct USequencePlayerLibrary_ComputePlayRateFromDuration_Params
{
public:
	struct FSequencePlayerReference              SequencePlayer;                                    // 0x0(0x10)(None)
	float                                        Duration;                                          // 0x10(0x4)(None)
	float                                        ReturnValue;                                       // 0x14(0x4)(None)
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SkeletalControlLibrary.SetAlpha
struct USkeletalControlLibrary_SetAlpha_Params
{
public:
	struct FSkeletalControlReference             SkeletalControl;                                   // 0x0(0x10)(None)
	float                                        Alpha;                                             // 0x10(0x4)(None)
	uint8                                        Pad_2E78[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkeletalControlReference             ReturnValue;                                       // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha
struct USkeletalControlLibrary_GetAlpha_Params
{
public:
	struct FSkeletalControlReference             SkeletalControl;                                   // 0x0(0x10)(None)
	float                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_2E7C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure
struct USkeletalControlLibrary_ConvertToSkeletalControlPure_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(None)
	struct FSkeletalControlReference             SkeletalControl;                                   // 0x10(0x10)(None)
	bool                                         Result;                                            // 0x20(0x1)(None)
	uint8                                        Pad_2E80[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl
struct USkeletalControlLibrary_ConvertToSkeletalControl_Params
{
public:
	struct FAnimNodeReference                    Node;                                              // 0x0(0x10)(None)
	enum class EAnimNodeReferenceConversionResult Result;                                            // 0x10(0x1)(None)
	uint8                                        Pad_2E82[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkeletalControlReference             ReturnValue;                                       // 0x18(0x10)(None)
};

}
}


