#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.BlendSpaceLibrary
class UBlendSpaceLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBlendSpaceLibrary* GetDefaultObj();

	void SnapToPosition(const struct FBlendSpaceReference& BlendSpace, const struct FVector& NewPosition);
	void GetPosition(const struct FBlendSpaceReference& BlendSpace, const struct FVector& ReturnValue);
	void GetFilteredPosition(const struct FBlendSpaceReference& BlendSpace, const struct FVector& ReturnValue);
	void ConvertToBlendSpacePure(const struct FAnimNodeReference& Node, const struct FBlendSpaceReference& BlendSpace, bool Result);
	void ConvertToBlendSpace(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult Result, const struct FBlendSpaceReference& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.AnimationStateMachineLibrary
class UAnimationStateMachineLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimationStateMachineLibrary* GetDefaultObj();

	void SetState(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateMachineReference& Node, class FName TargetState, float Duration, enum class ETransitionLogicType BlendType, class UBlendProfile* BlendProfile, enum class EAlphaBlendOption AlphaBlendOption, class UCurveFloat* CustomBlendCurve);
	void IsStateBlendingOut(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node, bool ReturnValue);
	void IsStateBlendingIn(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node, bool ReturnValue);
	void GetState(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateMachineReference& Node, class FName ReturnValue);
	void GetRelevantAnimTimeRemainingFraction(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node, float ReturnValue);
	void GetRelevantAnimTimeRemaining(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node, float ReturnValue);
	void ConvertToAnimationStateResultPure(const struct FAnimNodeReference& Node, const struct FAnimationStateResultReference& AnimationState, bool Result);
	void ConvertToAnimationStateResult(const struct FAnimNodeReference& Node, const struct FAnimationStateResultReference& AnimationState, enum class EAnimNodeReferenceConversionResult Result);
	void ConvertToAnimationStateMachinePure(const struct FAnimNodeReference& Node, const struct FAnimationStateMachineReference& AnimationState, bool Result);
	void ConvertToAnimationStateMachine(const struct FAnimNodeReference& Node, const struct FAnimationStateMachineReference& AnimationState, enum class EAnimNodeReferenceConversionResult Result);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.AnimExecutionContextLibrary
class UAnimExecutionContextLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnimExecutionContextLibrary* GetDefaultObj();

	void GetDeltaTime(const struct FAnimUpdateContext& Context, float ReturnValue);
	void GetCurrentWeight(const struct FAnimUpdateContext& Context, float ReturnValue);
	void GetAnimNodeReference(class UAnimInstance* Instance, int32 Index, const struct FAnimNodeReference& ReturnValue);
	void GetAnimInstance(const struct FAnimExecutionContext& Context, class UAnimInstance* ReturnValue);
	void ConvertToUpdateContext(const struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult Result, const struct FAnimUpdateContext& ReturnValue);
	void ConvertToPoseContext(const struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult Result, const struct FAnimPoseContext& ReturnValue);
	void ConvertToInitializationContext(const struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult Result, const struct FAnimInitializationContext& ReturnValue);
	void ConvertToComponentSpacePoseContext(const struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult Result, const struct FAnimComponentSpacePoseContext& ReturnValue);
};

// 0x8 (0x48 - 0x40)
// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
public:
	class FName                                  NotifyName;                                        // 0x40(0x8)(None)

	static class UClass* StaticClass();
	static class UAnimNotify_PlayMontageNotify* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
public:
	class FName                                  NotifyName;                                        // 0x30(0x8)(None)

	static class UClass* StaticClass();
	static class UAnimNotify_PlayMontageNotifyWindow* GetDefaultObj();

};

// 0x8 (0x350 - 0x348)
// Class AnimGraphRuntime.AnimSequencerInstance
class UAnimSequencerInstance : public UAnimInstance
{
public:
	uint8                                        Pad_2DFB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimSequencerInstance* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.BlendSpacePlayerLibrary
class UBlendSpacePlayerLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBlendSpacePlayerLibrary* GetDefaultObj();

	void SnapToPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer, const struct FVector& NewPosition);
	void ShouldResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool ReturnValue);
	void SetResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bReset, const struct FBlendSpacePlayerReference& ReturnValue);
	void SetPlayRate(const struct FBlendSpacePlayerReference& BlendSpacePlayer, float PlayRate, const struct FBlendSpacePlayerReference& ReturnValue);
	void SetLoop(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bLoop, const struct FBlendSpacePlayerReference& ReturnValue);
	void SetBlendSpaceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace, float BlendTime, const struct FBlendSpacePlayerReference& ReturnValue);
	void SetBlendSpace(const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace, const struct FBlendSpacePlayerReference& ReturnValue);
	void GetStartPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer, float ReturnValue);
	void GetPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer, const struct FVector& ReturnValue);
	void GetPlayRate(const struct FBlendSpacePlayerReference& BlendSpacePlayer, float ReturnValue);
	void GetLoop(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool ReturnValue);
	void GetBlendSpace(const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* ReturnValue);
	void ConvertToBlendSpacePlayerPure(const struct FAnimNodeReference& Node, const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool Result);
	void ConvertToBlendSpacePlayer(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult Result, const struct FBlendSpacePlayerReference& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.KismetAnimationLibrary
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UKismetAnimationLibrary* GetDefaultObj();

	void K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, const struct FVector& OutJointPos, const struct FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
	void K2_StartProfilingTimer();
	void K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ, const struct FVector& ReturnValue);
	void K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax, float ReturnValue);
	void K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree, const struct FTransform& ReturnValue);
	void K2_EndProfilingTimer(bool bLog, const class FString& LogPrefix, float ReturnValue);
	void K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, class FName SocketOrBoneNameA, enum class ERelativeTransformSpace SocketSpaceA, class FName SocketOrBoneNameB, enum class ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax, float ReturnValue);
	void K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, class FName SocketOrBoneNameFrom, class FName SocketOrBoneNameTo, const struct FVector& ReturnValue);
	void K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, class FName SocketOrBoneName, class FName ReferenceSocketOrBone, enum class ERelativeTransformSpace SocketSpace, const struct FVector& OffsetInBoneSpace, const struct FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax, enum class EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve, float ReturnValue);
	void K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, const struct FVector& Position, const struct FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax, float ReturnValue);
	void CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation, float ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.LayeredBoneBlendLibrary
class ULayeredBoneBlendLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULayeredBoneBlendLibrary* GetDefaultObj();

	void SetBlendMask(const struct FAnimUpdateContext& UpdateContext, const struct FLayeredBoneBlendReference& LayeredBoneBlend, int32 PoseIndex, class FName BlendMaskName, const struct FLayeredBoneBlendReference& ReturnValue);
	void GetNumPoses(const struct FLayeredBoneBlendReference& LayeredBoneBlend, int32 ReturnValue);
	void ConvertToLayeredBoneBlend(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult Result, const struct FLayeredBoneBlendReference& ReturnValue);
	void ConvertToLayeredBlendPerBonePure(const struct FAnimNodeReference& Node, const struct FLayeredBoneBlendReference& LayeredBoneBlend, bool Result);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.LinkedAnimGraphLibrary
class ULinkedAnimGraphLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULinkedAnimGraphLibrary* GetDefaultObj();

	void HasLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node, bool ReturnValue);
	void GetLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node, class UAnimInstance* ReturnValue);
	void ConvertToLinkedAnimGraphPure(const struct FAnimNodeReference& Node, const struct FLinkedAnimGraphReference& LinkedAnimGraph, bool Result);
	void ConvertToLinkedAnimGraph(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult Result, const struct FLinkedAnimGraphReference& ReturnValue);
};

// 0x80 (0xA8 - 0x28)
// Class AnimGraphRuntime.PlayMontageCallbackProxy
class UPlayMontageCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x28(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnBlendOut;                                        // 0x38(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnInterrupted;                                     // 0x48(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnNotifyBegin;                                     // 0x58(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnNotifyEnd;                                       // 0x68(0x10)(None)
	uint8                                        Pad_2E62[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlayMontageCallbackProxy* GetDefaultObj();

	void OnNotifyEndReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnNotifyBeginReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	void CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection, class UPlayMontageCallbackProxy* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SequenceEvaluatorLibrary
class USequenceEvaluatorLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USequenceEvaluatorLibrary* GetDefaultObj();

	void SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence, float BlendTime, const struct FSequenceEvaluatorReference& ReturnValue);
	void SetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence, const struct FSequenceEvaluatorReference& ReturnValue);
	void SetExplicitTime(const struct FSequenceEvaluatorReference& SequenceEvaluator, float Time, const struct FSequenceEvaluatorReference& ReturnValue);
	void GetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* ReturnValue);
	void GetAccumulatedTime(const struct FSequenceEvaluatorReference& SequenceEvaluator, float ReturnValue);
	void ConvertToSequenceEvaluatorPure(const struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& SequenceEvaluator, bool Result);
	void ConvertToSequenceEvaluator(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult Result, const struct FSequenceEvaluatorReference& ReturnValue);
	void AdvanceTime(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate, const struct FSequenceEvaluatorReference& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SequencePlayerLibrary
class USequencePlayerLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USequencePlayerLibrary* GetDefaultObj();

	void SetStartPosition(const struct FSequencePlayerReference& SequencePlayer, float StartPosition, const struct FSequencePlayerReference& ReturnValue);
	void SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence, float BlendTime, const struct FSequencePlayerReference& ReturnValue);
	void SetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence, const struct FSequencePlayerReference& ReturnValue);
	void SetPlayRate(const struct FSequencePlayerReference& SequencePlayer, float PlayRate, const struct FSequencePlayerReference& ReturnValue);
	void SetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer, float Time, const struct FSequencePlayerReference& ReturnValue);
	void GetStartPosition(const struct FSequencePlayerReference& SequencePlayer, float ReturnValue);
	void GetSequencePure(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* ReturnValue);
	void GetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* SequenceBase, const struct FSequencePlayerReference& ReturnValue);
	void GetPlayRate(const struct FSequencePlayerReference& SequencePlayer, float ReturnValue);
	void GetLoopAnimation(const struct FSequencePlayerReference& SequencePlayer, bool ReturnValue);
	void GetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer, float ReturnValue);
	void ConvertToSequencePlayerPure(const struct FAnimNodeReference& Node, const struct FSequencePlayerReference& SequencePlayer, bool Result);
	void ConvertToSequencePlayer(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult Result, const struct FSequencePlayerReference& ReturnValue);
	void ComputePlayRateFromDuration(const struct FSequencePlayerReference& SequencePlayer, float Duration, float ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SequencerAnimationSupport
class ISequencerAnimationSupport : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ISequencerAnimationSupport* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SkeletalControlLibrary
class USkeletalControlLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USkeletalControlLibrary* GetDefaultObj();

	void SetAlpha(const struct FSkeletalControlReference& SkeletalControl, float Alpha, const struct FSkeletalControlReference& ReturnValue);
	void GetAlpha(const struct FSkeletalControlReference& SkeletalControl, float ReturnValue);
	void ConvertToSkeletalControlPure(const struct FAnimNodeReference& Node, const struct FSkeletalControlReference& SkeletalControl, bool Result);
	void ConvertToSkeletalControl(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult Result, const struct FSkeletalControlReference& ReturnValue);
};

}


