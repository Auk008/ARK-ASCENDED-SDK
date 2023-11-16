#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AnimGraphRuntime.BlendSpaceLibrary
// (None)

class UClass* UBlendSpaceLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlendSpaceLibrary");

	return Clss;
}


// BlendSpaceLibrary AnimGraphRuntime.Default__BlendSpaceLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlendSpaceLibrary* UBlendSpaceLibrary::GetDefaultObj()
{
	static class UBlendSpaceLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlendSpaceLibrary*>(UBlendSpaceLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.BlendSpaceLibrary.SnapToPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBlendSpaceReference        BlendSpace                                                       (None)
// struct FVector                     NewPosition                                                      (None)

void UBlendSpaceLibrary::SnapToPosition(const struct FBlendSpaceReference& BlendSpace, const struct FVector& NewPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpaceLibrary", "SnapToPosition");

	Params::UBlendSpaceLibrary_SnapToPosition_Params Parms{};

	Parms.BlendSpace = BlendSpace;
	Parms.NewPosition = NewPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpaceLibrary.GetPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpaceReference        BlendSpace                                                       (None)
// struct FVector                     ReturnValue                                                      (None)

void UBlendSpaceLibrary::GetPosition(const struct FBlendSpaceReference& BlendSpace, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpaceLibrary", "GetPosition");

	Params::UBlendSpaceLibrary_GetPosition_Params Parms{};

	Parms.BlendSpace = BlendSpace;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpaceLibrary.GetFilteredPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpaceReference        BlendSpace                                                       (None)
// struct FVector                     ReturnValue                                                      (None)

void UBlendSpaceLibrary::GetFilteredPosition(const struct FBlendSpaceReference& BlendSpace, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpaceLibrary", "GetFilteredPosition");

	Params::UBlendSpaceLibrary_GetFilteredPosition_Params Parms{};

	Parms.BlendSpace = BlendSpace;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpacePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (None)
// struct FBlendSpaceReference        BlendSpace                                                       (None)
// bool                               Result                                                           (None)

void UBlendSpaceLibrary::ConvertToBlendSpacePure(const struct FAnimNodeReference& Node, const struct FBlendSpaceReference& BlendSpace, bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpaceLibrary", "ConvertToBlendSpacePure");

	Params::UBlendSpaceLibrary_ConvertToBlendSpacePure_Params Parms{};

	Parms.Node = Node;
	Parms.BlendSpace = BlendSpace;
	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (None)
// enum class EAnimNodeReferenceConversionResultResult                                                           (None)
// struct FBlendSpaceReference        ReturnValue                                                      (None)

void UBlendSpaceLibrary::ConvertToBlendSpace(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult Result, const struct FBlendSpaceReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpaceLibrary", "ConvertToBlendSpace");

	Params::UBlendSpaceLibrary_ConvertToBlendSpace_Params Parms{};

	Parms.Node = Node;
	Parms.Result = Result;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AnimGraphRuntime.AnimationStateMachineLibrary
// (None)

class UClass* UAnimationStateMachineLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimationStateMachineLibrary");

	return Clss;
}


// AnimationStateMachineLibrary AnimGraphRuntime.Default__AnimationStateMachineLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimationStateMachineLibrary* UAnimationStateMachineLibrary::GetDefaultObj()
{
	static class UAnimationStateMachineLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimationStateMachineLibrary*>(UAnimationStateMachineLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.SetState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (None)
// struct FAnimationStateMachineReferenceNode                                                             (None)
// class FName                        TargetState                                                      (None)
// float                              Duration                                                         (None)
// enum class ETransitionLogicType    BlendType                                                        (None)
// class UBlendProfile*               BlendProfile                                                     (ZeroConstructor)
// enum class EAlphaBlendOption       AlphaBlendOption                                                 (None)
// class UCurveFloat*                 CustomBlendCurve                                                 (None)

void UAnimationStateMachineLibrary::SetState(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateMachineReference& Node, class FName TargetState, float Duration, enum class ETransitionLogicType BlendType, class UBlendProfile* BlendProfile, enum class EAlphaBlendOption AlphaBlendOption, class UCurveFloat* CustomBlendCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "SetState");

	Params::UAnimationStateMachineLibrary_SetState_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.Node = Node;
	Parms.TargetState = TargetState;
	Parms.Duration = Duration;
	Parms.BlendType = BlendType;
	Parms.BlendProfile = BlendProfile;
	Parms.AlphaBlendOption = AlphaBlendOption;
	Parms.CustomBlendCurve = CustomBlendCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (None)
// struct FAnimationStateResultReferenceNode                                                             (None)
// bool                               ReturnValue                                                      (None)

void UAnimationStateMachineLibrary::IsStateBlendingOut(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "IsStateBlendingOut");

	Params::UAnimationStateMachineLibrary_IsStateBlendingOut_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.Node = Node;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (None)
// struct FAnimationStateResultReferenceNode                                                             (None)
// bool                               ReturnValue                                                      (None)

void UAnimationStateMachineLibrary::IsStateBlendingIn(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "IsStateBlendingIn");

	Params::UAnimationStateMachineLibrary_IsStateBlendingIn_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.Node = Node;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.GetState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (None)
// struct FAnimationStateMachineReferenceNode                                                             (None)
// class FName                        ReturnValue                                                      (None)

void UAnimationStateMachineLibrary::GetState(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateMachineReference& Node, class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "GetState");

	Params::UAnimationStateMachineLibrary_GetState_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.Node = Node;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemainingFraction
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (None)
// struct FAnimationStateResultReferenceNode                                                             (None)
// float                              ReturnValue                                                      (None)

void UAnimationStateMachineLibrary::GetRelevantAnimTimeRemainingFraction(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "GetRelevantAnimTimeRemainingFraction");

	Params::UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.Node = Node;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemaining
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (None)
// struct FAnimationStateResultReferenceNode                                                             (None)
// float                              ReturnValue                                                      (None)

void UAnimationStateMachineLibrary::GetRelevantAnimTimeRemaining(const struct FAnimUpdateContext& UpdateContext, const struct FAnimationStateResultReference& Node, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "GetRelevantAnimTimeRemaining");

	Params::UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.Node = Node;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (None)
// struct FAnimationStateResultReferenceAnimationState                                                   (None)
// bool                               Result                                                           (None)

void UAnimationStateMachineLibrary::ConvertToAnimationStateResultPure(const struct FAnimNodeReference& Node, const struct FAnimationStateResultReference& AnimationState, bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "ConvertToAnimationStateResultPure");

	Params::UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Params Parms{};

	Parms.Node = Node;
	Parms.AnimationState = AnimationState;
	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (None)
// struct FAnimationStateResultReferenceAnimationState                                                   (None)
// enum class EAnimNodeReferenceConversionResultResult                                                           (None)

void UAnimationStateMachineLibrary::ConvertToAnimationStateResult(const struct FAnimNodeReference& Node, const struct FAnimationStateResultReference& AnimationState, enum class EAnimNodeReferenceConversionResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "ConvertToAnimationStateResult");

	Params::UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Params Parms{};

	Parms.Node = Node;
	Parms.AnimationState = AnimationState;
	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachinePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (None)
// struct FAnimationStateMachineReferenceAnimationState                                                   (None)
// bool                               Result                                                           (None)

void UAnimationStateMachineLibrary::ConvertToAnimationStateMachinePure(const struct FAnimNodeReference& Node, const struct FAnimationStateMachineReference& AnimationState, bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "ConvertToAnimationStateMachinePure");

	Params::UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Params Parms{};

	Parms.Node = Node;
	Parms.AnimationState = AnimationState;
	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachine
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (None)
// struct FAnimationStateMachineReferenceAnimationState                                                   (None)
// enum class EAnimNodeReferenceConversionResultResult                                                           (None)

void UAnimationStateMachineLibrary::ConvertToAnimationStateMachine(const struct FAnimNodeReference& Node, const struct FAnimationStateMachineReference& AnimationState, enum class EAnimNodeReferenceConversionResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "ConvertToAnimationStateMachine");

	Params::UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Params Parms{};

	Parms.Node = Node;
	Parms.AnimationState = AnimationState;
	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AnimGraphRuntime.AnimExecutionContextLibrary
// (None)

class UClass* UAnimExecutionContextLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimExecutionContextLibrary");

	return Clss;
}


// AnimExecutionContextLibrary AnimGraphRuntime.Default__AnimExecutionContextLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimExecutionContextLibrary* UAnimExecutionContextLibrary::GetDefaultObj()
{
	static class UAnimExecutionContextLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimExecutionContextLibrary*>(UAnimExecutionContextLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (None)
// float                              ReturnValue                                                      (None)

void UAnimExecutionContextLibrary::GetDeltaTime(const struct FAnimUpdateContext& Context, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "GetDeltaTime");

	Params::UAnimExecutionContextLibrary_GetDeltaTime_Params Parms{};

	Parms.Context = Context;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (None)
// float                              ReturnValue                                                      (None)

void UAnimExecutionContextLibrary::GetCurrentWeight(const struct FAnimUpdateContext& Context, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "GetCurrentWeight");

	Params::UAnimExecutionContextLibrary_GetCurrentWeight_Params Parms{};

	Parms.Context = Context;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimInstance*               Instance                                                         (None)
// int32                              Index                                                            (None)
// struct FAnimNodeReference          ReturnValue                                                      (None)

void UAnimExecutionContextLibrary::GetAnimNodeReference(class UAnimInstance* Instance, int32 Index, const struct FAnimNodeReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "GetAnimNodeReference");

	Params::UAnimExecutionContextLibrary_GetAnimNodeReference_Params Parms{};

	Parms.Instance = Instance;
	Parms.Index = Index;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (None)
// class UAnimInstance*               ReturnValue                                                      (None)

void UAnimExecutionContextLibrary::GetAnimInstance(const struct FAnimExecutionContext& Context, class UAnimInstance* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "GetAnimInstance");

	Params::UAnimExecutionContextLibrary_GetAnimInstance_Params Parms{};

	Parms.Context = Context;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (None)
// enum class EAnimExecutionContextConversionResultResult                                                           (None)
// struct FAnimUpdateContext          ReturnValue                                                      (None)

void UAnimExecutionContextLibrary::ConvertToUpdateContext(const struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult Result, const struct FAnimUpdateContext& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "ConvertToUpdateContext");

	Params::UAnimExecutionContextLibrary_ConvertToUpdateContext_Params Parms{};

	Parms.Context = Context;
	Parms.Result = Result;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (None)
// enum class EAnimExecutionContextConversionResultResult                                                           (None)
// struct FAnimPoseContext            ReturnValue                                                      (None)

void UAnimExecutionContextLibrary::ConvertToPoseContext(const struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult Result, const struct FAnimPoseContext& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "ConvertToPoseContext");

	Params::UAnimExecutionContextLibrary_ConvertToPoseContext_Params Parms{};

	Parms.Context = Context;
	Parms.Result = Result;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (None)
// enum class EAnimExecutionContextConversionResultResult                                                           (None)
// struct FAnimInitializationContext  ReturnValue                                                      (None)

void UAnimExecutionContextLibrary::ConvertToInitializationContext(const struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult Result, const struct FAnimInitializationContext& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "ConvertToInitializationContext");

	Params::UAnimExecutionContextLibrary_ConvertToInitializationContext_Params Parms{};

	Parms.Context = Context;
	Parms.Result = Result;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (None)
// enum class EAnimExecutionContextConversionResultResult                                                           (None)
// struct FAnimComponentSpacePoseContextReturnValue                                                      (None)

void UAnimExecutionContextLibrary::ConvertToComponentSpacePoseContext(const struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult Result, const struct FAnimComponentSpacePoseContext& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "ConvertToComponentSpacePoseContext");

	Params::UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Params Parms{};

	Parms.Context = Context;
	Parms.Result = Result;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// (None)

class UClass* UAnimNotify_PlayMontageNotify::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_PlayMontageNotify");

	return Clss;
}


// AnimNotify_PlayMontageNotify AnimGraphRuntime.Default__AnimNotify_PlayMontageNotify
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_PlayMontageNotify* UAnimNotify_PlayMontageNotify::GetDefaultObj()
{
	static class UAnimNotify_PlayMontageNotify* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_PlayMontageNotify*>(UAnimNotify_PlayMontageNotify::StaticClass()->DefaultObject);

	return Default;
}


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// (None)

class UClass* UAnimNotify_PlayMontageNotifyWindow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_PlayMontageNotifyWindow");

	return Clss;
}


// AnimNotify_PlayMontageNotifyWindow AnimGraphRuntime.Default__AnimNotify_PlayMontageNotifyWindow
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_PlayMontageNotifyWindow* UAnimNotify_PlayMontageNotifyWindow::GetDefaultObj()
{
	static class UAnimNotify_PlayMontageNotifyWindow* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_PlayMontageNotifyWindow*>(UAnimNotify_PlayMontageNotifyWindow::StaticClass()->DefaultObject);

	return Default;
}


// Class AnimGraphRuntime.AnimSequencerInstance
// (None)

class UClass* UAnimSequencerInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimSequencerInstance");

	return Clss;
}


// AnimSequencerInstance AnimGraphRuntime.Default__AnimSequencerInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimSequencerInstance* UAnimSequencerInstance::GetDefaultObj()
{
	static class UAnimSequencerInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimSequencerInstance*>(UAnimSequencerInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class AnimGraphRuntime.BlendSpacePlayerLibrary
// (None)

class UClass* UBlendSpacePlayerLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlendSpacePlayerLibrary");

	return Clss;
}


// BlendSpacePlayerLibrary AnimGraphRuntime.Default__BlendSpacePlayerLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlendSpacePlayerLibrary* UBlendSpacePlayerLibrary::GetDefaultObj()
{
	static class UBlendSpacePlayerLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlendSpacePlayerLibrary*>(UBlendSpacePlayerLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SnapToPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (None)
// struct FVector                     NewPosition                                                      (None)

void UBlendSpacePlayerLibrary::SnapToPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer, const struct FVector& NewPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SnapToPosition");

	Params::UBlendSpacePlayerLibrary_SnapToPosition_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.NewPosition = NewPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ShouldResetPlayTimeWhenBlendSpaceChanges
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (None)
// bool                               ReturnValue                                                      (None)

void UBlendSpacePlayerLibrary::ShouldResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "ShouldResetPlayTimeWhenBlendSpaceChanges");

	Params::UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetResetPlayTimeWhenBlendSpaceChanges
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (None)
// bool                               bReset                                                           (None)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (None)

void UBlendSpacePlayerLibrary::SetResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bReset, const struct FBlendSpacePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetResetPlayTimeWhenBlendSpaceChanges");

	Params::UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.bReset = bReset;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetPlayRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (None)
// float                              PlayRate                                                         (None)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (None)

void UBlendSpacePlayerLibrary::SetPlayRate(const struct FBlendSpacePlayerReference& BlendSpacePlayer, float PlayRate, const struct FBlendSpacePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetPlayRate");

	Params::UBlendSpacePlayerLibrary_SetPlayRate_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.PlayRate = PlayRate;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetLoop
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (None)
// bool                               bLoop                                                            (None)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (None)

void UBlendSpacePlayerLibrary::SetLoop(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bLoop, const struct FBlendSpacePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetLoop");

	Params::UBlendSpacePlayerLibrary_SetLoop_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.bLoop = bLoop;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpaceWithInertialBlending
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (None)
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (None)
// class UBlendSpace*                 BlendSpace                                                       (None)
// float                              BlendTime                                                        (None)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (None)

void UBlendSpacePlayerLibrary::SetBlendSpaceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace, float BlendTime, const struct FBlendSpacePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetBlendSpaceWithInertialBlending");

	Params::UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.BlendSpace = BlendSpace;
	Parms.BlendTime = BlendTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (None)
// class UBlendSpace*                 BlendSpace                                                       (None)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (None)

void UBlendSpacePlayerLibrary::SetBlendSpace(const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace, const struct FBlendSpacePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetBlendSpace");

	Params::UBlendSpacePlayerLibrary_SetBlendSpace_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.BlendSpace = BlendSpace;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetStartPosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (None)
// float                              ReturnValue                                                      (None)

void UBlendSpacePlayerLibrary::GetStartPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "GetStartPosition");

	Params::UBlendSpacePlayerLibrary_GetStartPosition_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (None)
// struct FVector                     ReturnValue                                                      (None)

void UBlendSpacePlayerLibrary::GetPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "GetPosition");

	Params::UBlendSpacePlayerLibrary_GetPosition_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPlayRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (None)
// float                              ReturnValue                                                      (None)

void UBlendSpacePlayerLibrary::GetPlayRate(const struct FBlendSpacePlayerReference& BlendSpacePlayer, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "GetPlayRate");

	Params::UBlendSpacePlayerLibrary_GetPlayRate_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetLoop
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (None)
// bool                               ReturnValue                                                      (None)

void UBlendSpacePlayerLibrary::GetLoop(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "GetLoop");

	Params::UBlendSpacePlayerLibrary_GetLoop_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetBlendSpace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (None)
// class UBlendSpace*                 ReturnValue                                                      (None)

void UBlendSpacePlayerLibrary::GetBlendSpace(const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "GetBlendSpace");

	Params::UBlendSpacePlayerLibrary_GetBlendSpace_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayerPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (None)
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (None)
// bool                               Result                                                           (None)

void UBlendSpacePlayerLibrary::ConvertToBlendSpacePlayerPure(const struct FAnimNodeReference& Node, const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "ConvertToBlendSpacePlayerPure");

	Params::UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Params Parms{};

	Parms.Node = Node;
	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (None)
// enum class EAnimNodeReferenceConversionResultResult                                                           (None)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (None)

void UBlendSpacePlayerLibrary::ConvertToBlendSpacePlayer(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult Result, const struct FBlendSpacePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "ConvertToBlendSpacePlayer");

	Params::UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Params Parms{};

	Parms.Node = Node;
	Parms.Result = Result;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AnimGraphRuntime.KismetAnimationLibrary
// (None)

class UClass* UKismetAnimationLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KismetAnimationLibrary");

	return Clss;
}


// KismetAnimationLibrary AnimGraphRuntime.Default__KismetAnimationLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UKismetAnimationLibrary* UKismetAnimationLibrary::GetDefaultObj()
{
	static class UKismetAnimationLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UKismetAnimationLibrary*>(UKismetAnimationLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     RootPos                                                          (None)
// struct FVector                     JointPos                                                         (None)
// struct FVector                     EndPos                                                           (None)
// struct FVector                     JointTarget                                                      (None)
// struct FVector                     Effector                                                         (None)
// struct FVector                     OutJointPos                                                      (None)
// struct FVector                     OutEndPos                                                        (None)
// bool                               bAllowStretching                                                 (None)
// float                              StartStretchRatio                                                (None)
// float                              MaxStretchScale                                                  (None)

void UKismetAnimationLibrary::K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, const struct FVector& OutJointPos, const struct FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_TwoBoneIK");

	Params::UKismetAnimationLibrary_K2_TwoBoneIK_Params Parms{};

	Parms.RootPos = RootPos;
	Parms.JointPos = JointPos;
	Parms.EndPos = EndPos;
	Parms.JointTarget = JointTarget;
	Parms.Effector = Effector;
	Parms.OutJointPos = OutJointPos;
	Parms.OutEndPos = OutEndPos;
	Parms.bAllowStretching = bAllowStretching;
	Parms.StartStretchRatio = StartStretchRatio;
	Parms.MaxStretchScale = MaxStretchScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UKismetAnimationLibrary::K2_StartProfilingTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_StartProfilingTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              X                                                                (None)
// float                              Y                                                                (None)
// float                              Z                                                                (None)
// float                              RangeOutMinX                                                     (None)
// float                              RangeOutMaxX                                                     (None)
// float                              RangeOutMinY                                                     (None)
// float                              RangeOutMaxY                                                     (None)
// float                              RangeOutMinZ                                                     (None)
// float                              RangeOutMaxZ                                                     (None)
// struct FVector                     ReturnValue                                                      (None)

void UKismetAnimationLibrary::K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_MakePerlinNoiseVectorAndRemap");

	Params::UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;
	Parms.RangeOutMinX = RangeOutMinX;
	Parms.RangeOutMaxX = RangeOutMaxX;
	Parms.RangeOutMinY = RangeOutMinY;
	Parms.RangeOutMaxY = RangeOutMaxY;
	Parms.RangeOutMinZ = RangeOutMinZ;
	Parms.RangeOutMaxZ = RangeOutMaxZ;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Value                                                            (None)
// float                              RangeOutMin                                                      (None)
// float                              RangeOutMax                                                      (None)
// float                              ReturnValue                                                      (None)

void UKismetAnimationLibrary::K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_MakePerlinNoiseAndRemap");

	Params::UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params Parms{};

	Parms.Value = Value;
	Parms.RangeOutMin = RangeOutMin;
	Parms.RangeOutMax = RangeOutMax;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  CurrentTransform                                                 (None)
// struct FVector                     TargetPosition                                                   (None)
// struct FVector                     LookAtVector                                                     (None)
// bool                               bUseUpVector                                                     (None)
// struct FVector                     UpVector                                                         (None)
// float                              ClampConeInDegree                                                (None)
// struct FTransform                  ReturnValue                                                      (None)

void UKismetAnimationLibrary::K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_LookAt");

	Params::UKismetAnimationLibrary_K2_LookAt_Params Parms{};

	Parms.CurrentTransform = CurrentTransform;
	Parms.TargetPosition = TargetPosition;
	Parms.LookAtVector = LookAtVector;
	Parms.bUseUpVector = bUseUpVector;
	Parms.UpVector = UpVector;
	Parms.ClampConeInDegree = ClampConeInDegree;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bLog                                                             (None)
// class FString                      LogPrefix                                                        (None)
// float                              ReturnValue                                                      (None)

void UKismetAnimationLibrary::K2_EndProfilingTimer(bool bLog, const class FString& LogPrefix, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_EndProfilingTimer");

	Params::UKismetAnimationLibrary_K2_EndProfilingTimer_Params Parms{};

	Parms.bLog = bLog;
	Parms.LogPrefix = LogPrefix;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      Component                                                        (None)
// class FName                        SocketOrBoneNameA                                                (None)
// enum class ERelativeTransformSpace SocketSpaceA                                                     (None)
// class FName                        SocketOrBoneNameB                                                (None)
// enum class ERelativeTransformSpace SocketSpaceB                                                     (None)
// bool                               bRemapRange                                                      (None)
// float                              InRangeMin                                                       (None)
// float                              InRangeMax                                                       (None)
// float                              OutRangeMin                                                      (None)
// float                              OutRangeMax                                                      (None)
// float                              ReturnValue                                                      (None)

void UKismetAnimationLibrary::K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, class FName SocketOrBoneNameA, enum class ERelativeTransformSpace SocketSpaceA, class FName SocketOrBoneNameB, enum class ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_DistanceBetweenTwoSocketsAndMapRange");

	Params::UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Params Parms{};

	Parms.Component = Component;
	Parms.SocketOrBoneNameA = SocketOrBoneNameA;
	Parms.SocketSpaceA = SocketSpaceA;
	Parms.SocketOrBoneNameB = SocketOrBoneNameB;
	Parms.SocketSpaceB = SocketSpaceB;
	Parms.bRemapRange = bRemapRange;
	Parms.InRangeMin = InRangeMin;
	Parms.InRangeMax = InRangeMax;
	Parms.OutRangeMin = OutRangeMin;
	Parms.OutRangeMax = OutRangeMax;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      Component                                                        (None)
// class FName                        SocketOrBoneNameFrom                                             (None)
// class FName                        SocketOrBoneNameTo                                               (None)
// struct FVector                     ReturnValue                                                      (None)

void UKismetAnimationLibrary::K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, class FName SocketOrBoneNameFrom, class FName SocketOrBoneNameTo, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_DirectionBetweenSockets");

	Params::UKismetAnimationLibrary_K2_DirectionBetweenSockets_Params Parms{};

	Parms.Component = Component;
	Parms.SocketOrBoneNameFrom = SocketOrBoneNameFrom;
	Parms.SocketOrBoneNameTo = SocketOrBoneNameTo;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (None)
// class USkeletalMeshComponent*      Component                                                        (ZeroConstructor)
// class FName                        SocketOrBoneName                                                 (None)
// class FName                        ReferenceSocketOrBone                                            (None)
// enum class ERelativeTransformSpace SocketSpace                                                      (None)
// struct FVector                     OffsetInBoneSpace                                                (None)
// struct FPositionHistory            History                                                          (None)
// int32                              NumberOfSamples                                                  (None)
// float                              VelocityMin                                                      (None)
// float                              VelocityMax                                                      (None)
// enum class EEasingFuncType         EasingType                                                       (None)
// struct FRuntimeFloatCurve          CustomCurve                                                      (None)
// float                              ReturnValue                                                      (None)

void UKismetAnimationLibrary::K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, class FName SocketOrBoneName, class FName ReferenceSocketOrBone, enum class ERelativeTransformSpace SocketSpace, const struct FVector& OffsetInBoneSpace, const struct FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax, enum class EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_CalculateVelocityFromSockets");

	Params::UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.Component = Component;
	Parms.SocketOrBoneName = SocketOrBoneName;
	Parms.ReferenceSocketOrBone = ReferenceSocketOrBone;
	Parms.SocketSpace = SocketSpace;
	Parms.OffsetInBoneSpace = OffsetInBoneSpace;
	Parms.History = History;
	Parms.NumberOfSamples = NumberOfSamples;
	Parms.VelocityMin = VelocityMin;
	Parms.VelocityMax = VelocityMax;
	Parms.EasingType = EasingType;
	Parms.CustomCurve = CustomCurve;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (None)
// struct FVector                     Position                                                         (None)
// struct FPositionHistory            History                                                          (None)
// int32                              NumberOfSamples                                                  (None)
// float                              VelocityMin                                                      (None)
// float                              VelocityMax                                                      (None)
// float                              ReturnValue                                                      (None)

void UKismetAnimationLibrary::K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, const struct FVector& Position, const struct FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_CalculateVelocityFromPositionHistory");

	Params::UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.Position = Position;
	Parms.History = History;
	Parms.NumberOfSamples = NumberOfSamples;
	Parms.VelocityMin = VelocityMin;
	Parms.VelocityMax = VelocityMax;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Velocity                                                         (None)
// struct FRotator                    BaseRotation                                                     (None)
// float                              ReturnValue                                                      (None)

void UKismetAnimationLibrary::CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "CalculateDirection");

	Params::UKismetAnimationLibrary_CalculateDirection_Params Parms{};

	Parms.Velocity = Velocity;
	Parms.BaseRotation = BaseRotation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AnimGraphRuntime.LayeredBoneBlendLibrary
// (None)

class UClass* ULayeredBoneBlendLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LayeredBoneBlendLibrary");

	return Clss;
}


// LayeredBoneBlendLibrary AnimGraphRuntime.Default__LayeredBoneBlendLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULayeredBoneBlendLibrary* ULayeredBoneBlendLibrary::GetDefaultObj()
{
	static class ULayeredBoneBlendLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULayeredBoneBlendLibrary*>(ULayeredBoneBlendLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.LayeredBoneBlendLibrary.SetBlendMask
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (None)
// struct FLayeredBoneBlendReference  LayeredBoneBlend                                                 (None)
// int32                              PoseIndex                                                        (None)
// class FName                        BlendMaskName                                                    (None)
// struct FLayeredBoneBlendReference  ReturnValue                                                      (None)

void ULayeredBoneBlendLibrary::SetBlendMask(const struct FAnimUpdateContext& UpdateContext, const struct FLayeredBoneBlendReference& LayeredBoneBlend, int32 PoseIndex, class FName BlendMaskName, const struct FLayeredBoneBlendReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayeredBoneBlendLibrary", "SetBlendMask");

	Params::ULayeredBoneBlendLibrary_SetBlendMask_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.LayeredBoneBlend = LayeredBoneBlend;
	Parms.PoseIndex = PoseIndex;
	Parms.BlendMaskName = BlendMaskName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.LayeredBoneBlendLibrary.GetNumPoses
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLayeredBoneBlendReference  LayeredBoneBlend                                                 (None)
// int32                              ReturnValue                                                      (None)

void ULayeredBoneBlendLibrary::GetNumPoses(const struct FLayeredBoneBlendReference& LayeredBoneBlend, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayeredBoneBlendLibrary", "GetNumPoses");

	Params::ULayeredBoneBlendLibrary_GetNumPoses_Params Parms{};

	Parms.LayeredBoneBlend = LayeredBoneBlend;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBoneBlend
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (None)
// enum class EAnimNodeReferenceConversionResultResult                                                           (None)
// struct FLayeredBoneBlendReference  ReturnValue                                                      (None)

void ULayeredBoneBlendLibrary::ConvertToLayeredBoneBlend(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult Result, const struct FLayeredBoneBlendReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayeredBoneBlendLibrary", "ConvertToLayeredBoneBlend");

	Params::ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Params Parms{};

	Parms.Node = Node;
	Parms.Result = Result;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBlendPerBonePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (None)
// struct FLayeredBoneBlendReference  LayeredBoneBlend                                                 (None)
// bool                               Result                                                           (None)

void ULayeredBoneBlendLibrary::ConvertToLayeredBlendPerBonePure(const struct FAnimNodeReference& Node, const struct FLayeredBoneBlendReference& LayeredBoneBlend, bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayeredBoneBlendLibrary", "ConvertToLayeredBlendPerBonePure");

	Params::ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Params Parms{};

	Parms.Node = Node;
	Parms.LayeredBoneBlend = LayeredBoneBlend;
	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AnimGraphRuntime.LinkedAnimGraphLibrary
// (None)

class UClass* ULinkedAnimGraphLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LinkedAnimGraphLibrary");

	return Clss;
}


// LinkedAnimGraphLibrary AnimGraphRuntime.Default__LinkedAnimGraphLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULinkedAnimGraphLibrary* ULinkedAnimGraphLibrary::GetDefaultObj()
{
	static class ULinkedAnimGraphLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULinkedAnimGraphLibrary*>(ULinkedAnimGraphLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinkedAnimGraphReference   Node                                                             (None)
// bool                               ReturnValue                                                      (None)

void ULinkedAnimGraphLibrary::HasLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinkedAnimGraphLibrary", "HasLinkedAnimInstance");

	Params::ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Params Parms{};

	Parms.Node = Node;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinkedAnimGraphReference   Node                                                             (None)
// class UAnimInstance*               ReturnValue                                                      (None)

void ULinkedAnimGraphLibrary::GetLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node, class UAnimInstance* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinkedAnimGraphLibrary", "GetLinkedAnimInstance");

	Params::ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Params Parms{};

	Parms.Node = Node;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (None)
// struct FLinkedAnimGraphReference   LinkedAnimGraph                                                  (None)
// bool                               Result                                                           (None)

void ULinkedAnimGraphLibrary::ConvertToLinkedAnimGraphPure(const struct FAnimNodeReference& Node, const struct FLinkedAnimGraphReference& LinkedAnimGraph, bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinkedAnimGraphLibrary", "ConvertToLinkedAnimGraphPure");

	Params::ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Params Parms{};

	Parms.Node = Node;
	Parms.LinkedAnimGraph = LinkedAnimGraph;
	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (None)
// enum class EAnimNodeReferenceConversionResultResult                                                           (None)
// struct FLinkedAnimGraphReference   ReturnValue                                                      (None)

void ULinkedAnimGraphLibrary::ConvertToLinkedAnimGraph(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult Result, const struct FLinkedAnimGraphReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinkedAnimGraphLibrary", "ConvertToLinkedAnimGraph");

	Params::ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Params Parms{};

	Parms.Node = Node;
	Parms.Result = Result;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AnimGraphRuntime.PlayMontageCallbackProxy
// (None)

class UClass* UPlayMontageCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayMontageCallbackProxy");

	return Clss;
}


// PlayMontageCallbackProxy AnimGraphRuntime.Default__PlayMontageCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::GetDefaultObj()
{
	static class UPlayMontageCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayMontageCallbackProxy*>(UPlayMontageCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (None)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (None)

void UPlayMontageCallbackProxy::OnNotifyEndReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnNotifyEndReceived");

	Params::UPlayMontageCallbackProxy_OnNotifyEndReceived_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (None)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (None)

void UPlayMontageCallbackProxy::OnNotifyBeginReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnNotifyBeginReceived");

	Params::UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*                Montage                                                          (None)
// bool                               bInterrupted                                                     (None)

void UPlayMontageCallbackProxy::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnMontageEnded");

	Params::UPlayMontageCallbackProxy_OnMontageEnded_Params Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*                Montage                                                          (None)
// bool                               bInterrupted                                                     (None)

void UPlayMontageCallbackProxy::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnMontageBlendingOut");

	Params::UPlayMontageCallbackProxy_OnMontageBlendingOut_Params Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      InSkeletalMeshComponent                                          (ZeroConstructor)
// class UAnimMontage*                MontageToPlay                                                    (ZeroConstructor)
// float                              PlayRate                                                         (None)
// float                              StartingPosition                                                 (None)
// class FName                        StartingSection                                                  (None)
// class UPlayMontageCallbackProxy*   ReturnValue                                                      (None)

void UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection, class UPlayMontageCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "CreateProxyObjectForPlayMontage");

	Params::UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params Parms{};

	Parms.InSkeletalMeshComponent = InSkeletalMeshComponent;
	Parms.MontageToPlay = MontageToPlay;
	Parms.PlayRate = PlayRate;
	Parms.StartingPosition = StartingPosition;
	Parms.StartingSection = StartingSection;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AnimGraphRuntime.SequenceEvaluatorLibrary
// (None)

class UClass* USequenceEvaluatorLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequenceEvaluatorLibrary");

	return Clss;
}


// SequenceEvaluatorLibrary AnimGraphRuntime.Default__SequenceEvaluatorLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USequenceEvaluatorLibrary* USequenceEvaluatorLibrary::GetDefaultObj()
{
	static class USequenceEvaluatorLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USequenceEvaluatorLibrary*>(USequenceEvaluatorLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequenceWithInertialBlending
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (None)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (None)
// class UAnimSequenceBase*           Sequence                                                         (None)
// float                              BlendTime                                                        (None)
// struct FSequenceEvaluatorReference ReturnValue                                                      (None)

void USequenceEvaluatorLibrary::SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence, float BlendTime, const struct FSequenceEvaluatorReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "SetSequenceWithInertialBlending");

	Params::USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.SequenceEvaluator = SequenceEvaluator;
	Parms.Sequence = Sequence;
	Parms.BlendTime = BlendTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (None)
// class UAnimSequenceBase*           Sequence                                                         (None)
// struct FSequenceEvaluatorReference ReturnValue                                                      (None)

void USequenceEvaluatorLibrary::SetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence, const struct FSequenceEvaluatorReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "SetSequence");

	Params::USequenceEvaluatorLibrary_SetSequence_Params Parms{};

	Parms.SequenceEvaluator = SequenceEvaluator;
	Parms.Sequence = Sequence;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (None)
// float                              Time                                                             (None)
// struct FSequenceEvaluatorReference ReturnValue                                                      (None)

void USequenceEvaluatorLibrary::SetExplicitTime(const struct FSequenceEvaluatorReference& SequenceEvaluator, float Time, const struct FSequenceEvaluatorReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "SetExplicitTime");

	Params::USequenceEvaluatorLibrary_SetExplicitTime_Params Parms{};

	Parms.SequenceEvaluator = SequenceEvaluator;
	Parms.Time = Time;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (None)
// class UAnimSequenceBase*           ReturnValue                                                      (None)

void USequenceEvaluatorLibrary::GetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "GetSequence");

	Params::USequenceEvaluatorLibrary_GetSequence_Params Parms{};

	Parms.SequenceEvaluator = SequenceEvaluator;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (None)
// float                              ReturnValue                                                      (None)

void USequenceEvaluatorLibrary::GetAccumulatedTime(const struct FSequenceEvaluatorReference& SequenceEvaluator, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "GetAccumulatedTime");

	Params::USequenceEvaluatorLibrary_GetAccumulatedTime_Params Parms{};

	Parms.SequenceEvaluator = SequenceEvaluator;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (None)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (None)
// bool                               Result                                                           (None)

void USequenceEvaluatorLibrary::ConvertToSequenceEvaluatorPure(const struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& SequenceEvaluator, bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "ConvertToSequenceEvaluatorPure");

	Params::USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Params Parms{};

	Parms.Node = Node;
	Parms.SequenceEvaluator = SequenceEvaluator;
	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (None)
// enum class EAnimNodeReferenceConversionResultResult                                                           (None)
// struct FSequenceEvaluatorReference ReturnValue                                                      (None)

void USequenceEvaluatorLibrary::ConvertToSequenceEvaluator(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult Result, const struct FSequenceEvaluatorReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "ConvertToSequenceEvaluator");

	Params::USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Params Parms{};

	Parms.Node = Node;
	Parms.Result = Result;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (None)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (None)
// float                              PlayRate                                                         (None)
// struct FSequenceEvaluatorReference ReturnValue                                                      (None)

void USequenceEvaluatorLibrary::AdvanceTime(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate, const struct FSequenceEvaluatorReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "AdvanceTime");

	Params::USequenceEvaluatorLibrary_AdvanceTime_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.SequenceEvaluator = SequenceEvaluator;
	Parms.PlayRate = PlayRate;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AnimGraphRuntime.SequencePlayerLibrary
// (None)

class UClass* USequencePlayerLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequencePlayerLibrary");

	return Clss;
}


// SequencePlayerLibrary AnimGraphRuntime.Default__SequencePlayerLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USequencePlayerLibrary* USequencePlayerLibrary::GetDefaultObj()
{
	static class USequencePlayerLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USequencePlayerLibrary*>(USequencePlayerLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (None)
// float                              StartPosition                                                    (None)
// struct FSequencePlayerReference    ReturnValue                                                      (None)

void USequencePlayerLibrary::SetStartPosition(const struct FSequencePlayerReference& SequencePlayer, float StartPosition, const struct FSequencePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "SetStartPosition");

	Params::USequencePlayerLibrary_SetStartPosition_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.StartPosition = StartPosition;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (None)
// struct FSequencePlayerReference    SequencePlayer                                                   (None)
// class UAnimSequenceBase*           Sequence                                                         (None)
// float                              BlendTime                                                        (None)
// struct FSequencePlayerReference    ReturnValue                                                      (None)

void USequencePlayerLibrary::SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence, float BlendTime, const struct FSequencePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "SetSequenceWithInertialBlending");

	Params::USequencePlayerLibrary_SetSequenceWithInertialBlending_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.SequencePlayer = SequencePlayer;
	Parms.Sequence = Sequence;
	Parms.BlendTime = BlendTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (None)
// class UAnimSequenceBase*           Sequence                                                         (None)
// struct FSequencePlayerReference    ReturnValue                                                      (None)

void USequencePlayerLibrary::SetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence, const struct FSequencePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "SetSequence");

	Params::USequencePlayerLibrary_SetSequence_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.Sequence = Sequence;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (None)
// float                              PlayRate                                                         (None)
// struct FSequencePlayerReference    ReturnValue                                                      (None)

void USequencePlayerLibrary::SetPlayRate(const struct FSequencePlayerReference& SequencePlayer, float PlayRate, const struct FSequencePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "SetPlayRate");

	Params::USequencePlayerLibrary_SetPlayRate_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.PlayRate = PlayRate;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (None)
// float                              Time                                                             (None)
// struct FSequencePlayerReference    ReturnValue                                                      (None)

void USequencePlayerLibrary::SetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer, float Time, const struct FSequencePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "SetAccumulatedTime");

	Params::USequencePlayerLibrary_SetAccumulatedTime_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.Time = Time;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (None)
// float                              ReturnValue                                                      (None)

void USequencePlayerLibrary::GetStartPosition(const struct FSequencePlayerReference& SequencePlayer, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetStartPosition");

	Params::USequencePlayerLibrary_GetStartPosition_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (None)
// class UAnimSequenceBase*           ReturnValue                                                      (None)

void USequencePlayerLibrary::GetSequencePure(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetSequencePure");

	Params::USequencePlayerLibrary_GetSequencePure_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (None)
// class UAnimSequenceBase*           SequenceBase                                                     (None)
// struct FSequencePlayerReference    ReturnValue                                                      (None)

void USequencePlayerLibrary::GetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* SequenceBase, const struct FSequencePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetSequence");

	Params::USequencePlayerLibrary_GetSequence_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.SequenceBase = SequenceBase;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (None)
// float                              ReturnValue                                                      (None)

void USequencePlayerLibrary::GetPlayRate(const struct FSequencePlayerReference& SequencePlayer, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetPlayRate");

	Params::USequencePlayerLibrary_GetPlayRate_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (None)
// bool                               ReturnValue                                                      (None)

void USequencePlayerLibrary::GetLoopAnimation(const struct FSequencePlayerReference& SequencePlayer, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetLoopAnimation");

	Params::USequencePlayerLibrary_GetLoopAnimation_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (None)
// float                              ReturnValue                                                      (None)

void USequencePlayerLibrary::GetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetAccumulatedTime");

	Params::USequencePlayerLibrary_GetAccumulatedTime_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (None)
// struct FSequencePlayerReference    SequencePlayer                                                   (None)
// bool                               Result                                                           (None)

void USequencePlayerLibrary::ConvertToSequencePlayerPure(const struct FAnimNodeReference& Node, const struct FSequencePlayerReference& SequencePlayer, bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "ConvertToSequencePlayerPure");

	Params::USequencePlayerLibrary_ConvertToSequencePlayerPure_Params Parms{};

	Parms.Node = Node;
	Parms.SequencePlayer = SequencePlayer;
	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (None)
// enum class EAnimNodeReferenceConversionResultResult                                                           (None)
// struct FSequencePlayerReference    ReturnValue                                                      (None)

void USequencePlayerLibrary::ConvertToSequencePlayer(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult Result, const struct FSequencePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "ConvertToSequencePlayer");

	Params::USequencePlayerLibrary_ConvertToSequencePlayer_Params Parms{};

	Parms.Node = Node;
	Parms.Result = Result;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.ComputePlayRateFromDuration
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (None)
// float                              Duration                                                         (None)
// float                              ReturnValue                                                      (None)

void USequencePlayerLibrary::ComputePlayRateFromDuration(const struct FSequencePlayerReference& SequencePlayer, float Duration, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "ComputePlayRateFromDuration");

	Params::USequencePlayerLibrary_ComputePlayRateFromDuration_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.Duration = Duration;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AnimGraphRuntime.SequencerAnimationSupport
// (None)

class UClass* ISequencerAnimationSupport::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequencerAnimationSupport");

	return Clss;
}


// SequencerAnimationSupport AnimGraphRuntime.Default__SequencerAnimationSupport
// (Public, ClassDefaultObject, ArchetypeObject)

class ISequencerAnimationSupport* ISequencerAnimationSupport::GetDefaultObj()
{
	static class ISequencerAnimationSupport* Default = nullptr;

	if (!Default)
		Default = static_cast<ISequencerAnimationSupport*>(ISequencerAnimationSupport::StaticClass()->DefaultObject);

	return Default;
}


// Class AnimGraphRuntime.SkeletalControlLibrary
// (None)

class UClass* USkeletalControlLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkeletalControlLibrary");

	return Clss;
}


// SkeletalControlLibrary AnimGraphRuntime.Default__SkeletalControlLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USkeletalControlLibrary* USkeletalControlLibrary::GetDefaultObj()
{
	static class USkeletalControlLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USkeletalControlLibrary*>(USkeletalControlLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.SkeletalControlLibrary.SetAlpha
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSkeletalControlReference   SkeletalControl                                                  (None)
// float                              Alpha                                                            (None)
// struct FSkeletalControlReference   ReturnValue                                                      (None)

void USkeletalControlLibrary::SetAlpha(const struct FSkeletalControlReference& SkeletalControl, float Alpha, const struct FSkeletalControlReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkeletalControlLibrary", "SetAlpha");

	Params::USkeletalControlLibrary_SetAlpha_Params Parms{};

	Parms.SkeletalControl = SkeletalControl;
	Parms.Alpha = Alpha;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSkeletalControlReference   SkeletalControl                                                  (None)
// float                              ReturnValue                                                      (None)

void USkeletalControlLibrary::GetAlpha(const struct FSkeletalControlReference& SkeletalControl, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkeletalControlLibrary", "GetAlpha");

	Params::USkeletalControlLibrary_GetAlpha_Params Parms{};

	Parms.SkeletalControl = SkeletalControl;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (None)
// struct FSkeletalControlReference   SkeletalControl                                                  (None)
// bool                               Result                                                           (None)

void USkeletalControlLibrary::ConvertToSkeletalControlPure(const struct FAnimNodeReference& Node, const struct FSkeletalControlReference& SkeletalControl, bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkeletalControlLibrary", "ConvertToSkeletalControlPure");

	Params::USkeletalControlLibrary_ConvertToSkeletalControlPure_Params Parms{};

	Parms.Node = Node;
	Parms.SkeletalControl = SkeletalControl;
	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (None)
// enum class EAnimNodeReferenceConversionResultResult                                                           (None)
// struct FSkeletalControlReference   ReturnValue                                                      (None)

void USkeletalControlLibrary::ConvertToSkeletalControl(const struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult Result, const struct FSkeletalControlReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkeletalControlLibrary", "ConvertToSkeletalControl");

	Params::USkeletalControlLibrary_ConvertToSkeletalControl_Params Parms{};

	Parms.Node = Node;
	Parms.Result = Result;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


