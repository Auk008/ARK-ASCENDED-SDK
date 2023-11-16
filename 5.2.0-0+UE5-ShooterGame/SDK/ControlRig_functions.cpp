#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ControlRig.RigHierarchy
// (None)

class UClass* URigHierarchy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigHierarchy");

	return Clss;
}


// RigHierarchy ControlRig.Default__RigHierarchy
// (Public, ClassDefaultObject, ArchetypeObject)

class URigHierarchy* URigHierarchy::GetDefaultObj()
{
	static class URigHierarchy* Default = nullptr;

	if (!Default)
		Default = static_cast<URigHierarchy*>(URigHierarchy::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlRig.RigHierarchy.UnsetCurveValueByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (None)
// bool                               bSetupUndo                                                       (None)

void URigHierarchy::UnsetCurveValueByIndex(int32 InElementIndex, bool bSetupUndo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "UnsetCurveValueByIndex");

	Params::URigHierarchy_UnsetCurveValueByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.UnsetCurveValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// bool                               bSetupUndo                                                       (None)

void URigHierarchy::UnsetCurveValue(const struct FRigElementKey& InKey, bool bSetupUndo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "UnsetCurveValue");

	Params::URigHierarchy_UnsetCurveValue_Params Parms{};

	Parms.InKey = InKey;
	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SwitchToWorldSpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (None)
// bool                               bInitial                                                         (None)
// bool                               bAffectChildren                                                  (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SwitchToWorldSpace(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SwitchToWorldSpace");

	Params::URigHierarchy_SwitchToWorldSpace_Params Parms{};

	Parms.InChild = InChild;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SwitchToParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (None)
// struct FRigElementKey              InParent                                                         (None)
// bool                               bInitial                                                         (None)
// bool                               bAffectChildren                                                  (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SwitchToParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial, bool bAffectChildren, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SwitchToParent");

	Params::URigHierarchy_SwitchToParent_Params Parms{};

	Parms.InChild = InChild;
	Parms.InParent = InParent;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SwitchToDefaultParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (None)
// bool                               bInitial                                                         (None)
// bool                               bAffectChildren                                                  (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SwitchToDefaultParent(const struct FRigElementKey& InChild, bool bInitial, bool bAffectChildren, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SwitchToDefaultParent");

	Params::URigHierarchy_SwitchToDefaultParent_Params Parms{};

	Parms.InChild = InChild;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SortKeys
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRigElementKey>      InKeys                                                           (None)
// TArray<struct FRigElementKey>      ReturnValue                                                      (None)

void URigHierarchy::SortKeys(const TArray<struct FRigElementKey>& InKeys, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SortKeys");

	Params::URigHierarchy_SortKeys_Params Parms{};

	Parms.InKeys = InKeys;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetVectorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// struct FVector                     InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetVectorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FVector& InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetVectorMetadata");

	Params::URigHierarchy_SetVectorMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetVectorArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// TArray<struct FVector>             InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetVectorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FVector>& InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetVectorArrayMetadata");

	Params::URigHierarchy_SetVectorArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetTransformMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// struct FTransform                  InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetTransformMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FTransform& InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetTransformMetadata");

	Params::URigHierarchy_SetTransformMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetTransformArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// TArray<struct FTransform>          InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetTransformArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FTransform>& InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetTransformArrayMetadata");

	Params::URigHierarchy_SetTransformArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InTag                                                            (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetTag(const struct FRigElementKey& InItem, class FName InTag, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetTag");

	Params::URigHierarchy_SetTag_Params Parms{};

	Parms.InItem = InItem;
	Parms.InTag = InTag;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetRotatorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// struct FRotator                    InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetRotatorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRotator& InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetRotatorMetadata");

	Params::URigHierarchy_SetRotatorMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetRotatorArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// TArray<struct FRotator>            InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetRotatorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FRotator>& InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetRotatorArrayMetadata");

	Params::URigHierarchy_SetRotatorArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetRigElementKeyMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// struct FRigElementKey              InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetRigElementKeyMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRigElementKey& InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetRigElementKeyMetadata");

	Params::URigHierarchy_SetRigElementKeyMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetRigElementKeyArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// TArray<struct FRigElementKey>      InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetRigElementKeyArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FRigElementKey>& InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetRigElementKeyArrayMetadata");

	Params::URigHierarchy_SetRigElementKeyArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetQuatMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// struct FQuat                       InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetQuatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FQuat& InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetQuatMetadata");

	Params::URigHierarchy_SetQuatMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetQuatArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// TArray<struct FQuat>               InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetQuatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FQuat>& InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetQuatArrayMetadata");

	Params::URigHierarchy_SetQuatArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetPose_ForBlueprint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigPose                    InPose                                                           (None)

void URigHierarchy::SetPose_ForBlueprint(const struct FRigPose& InPose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetPose_ForBlueprint");

	Params::URigHierarchy_SetPose_ForBlueprint_Params Parms{};

	Parms.InPose = InPose;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetParentWeightArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (None)
// TArray<struct FRigElementWeight>   InWeights                                                        (None)
// bool                               bInitial                                                         (None)
// bool                               bAffectChildren                                                  (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetParentWeightArray(const struct FRigElementKey& InChild, const TArray<struct FRigElementWeight>& InWeights, bool bInitial, bool bAffectChildren, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetParentWeightArray");

	Params::URigHierarchy_SetParentWeightArray_Params Parms{};

	Parms.InChild = InChild;
	Parms.InWeights = InWeights;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetParentWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (None)
// struct FRigElementKey              InParent                                                         (None)
// struct FRigElementWeight           InWeight                                                         (None)
// bool                               bInitial                                                         (None)
// bool                               bAffectChildren                                                  (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, const struct FRigElementWeight& InWeight, bool bInitial, bool bAffectChildren, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetParentWeight");

	Params::URigHierarchy_SetParentWeight_Params Parms{};

	Parms.InChild = InChild;
	Parms.InParent = InParent;
	Parms.InWeight = InWeight;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetNameMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// class FName                        InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetNameMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, class FName InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetNameMetadata");

	Params::URigHierarchy_SetNameMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetNameArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// TArray<class FName>                InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetNameArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<class FName>& InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetNameArrayMetadata");

	Params::URigHierarchy_SetNameArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetLocalTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (None)
// struct FTransform                  InTransform                                                      (None)
// bool                               bInitial                                                         (None)
// bool                               bAffectChildren                                                  (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommands                                             (None)

void URigHierarchy::SetLocalTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetLocalTransformByIndex");

	Params::URigHierarchy_SetLocalTransformByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.InTransform = InTransform;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetLocalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// struct FTransform                  InTransform                                                      (None)
// bool                               bInitial                                                         (None)
// bool                               bAffectChildren                                                  (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommands                                             (None)

void URigHierarchy::SetLocalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetLocalTransform");

	Params::URigHierarchy_SetLocalTransform_Params Parms{};

	Parms.InKey = InKey;
	Parms.InTransform = InTransform;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetLinearColorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// struct FLinearColor                InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetLinearColorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FLinearColor& InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetLinearColorMetadata");

	Params::URigHierarchy_SetLinearColorMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetLinearColorArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// TArray<struct FLinearColor>        InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetLinearColorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FLinearColor>& InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetLinearColorArrayMetadata");

	Params::URigHierarchy_SetLinearColorArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetInt32Metadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// int32                              InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetInt32Metadata(const struct FRigElementKey& InItem, class FName InMetadataName, int32 InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetInt32Metadata");

	Params::URigHierarchy_SetInt32Metadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetInt32ArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// TArray<int32>                      InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetInt32ArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<int32>& InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetInt32ArrayMetadata");

	Params::URigHierarchy_SetInt32ArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetGlobalTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (None)
// struct FTransform                  InTransform                                                      (None)
// bool                               bInitial                                                         (None)
// bool                               bAffectChildren                                                  (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommand                                              (None)

void URigHierarchy::SetGlobalTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetGlobalTransformByIndex");

	Params::URigHierarchy_SetGlobalTransformByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.InTransform = InTransform;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetGlobalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// struct FTransform                  InTransform                                                      (None)
// bool                               bInitial                                                         (None)
// bool                               bAffectChildren                                                  (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommand                                              (None)

void URigHierarchy::SetGlobalTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetGlobalTransform");

	Params::URigHierarchy_SetGlobalTransform_Params Parms{};

	Parms.InKey = InKey;
	Parms.InTransform = InTransform;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetFloatMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// float                              InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetFloatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, float InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetFloatMetadata");

	Params::URigHierarchy_SetFloatMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetFloatArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// TArray<float>                      InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetFloatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<float>& InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetFloatArrayMetadata");

	Params::URigHierarchy_SetFloatArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetCurveValueByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (None)
// float                              InValue                                                          (None)
// bool                               bSetupUndo                                                       (None)

void URigHierarchy::SetCurveValueByIndex(int32 InElementIndex, float InValue, bool bSetupUndo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetCurveValueByIndex");

	Params::URigHierarchy_SetCurveValueByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.InValue = InValue;
	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetCurveValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// float                              InValue                                                          (None)
// bool                               bSetupUndo                                                       (None)

void URigHierarchy::SetCurveValue(const struct FRigElementKey& InKey, float InValue, bool bSetupUndo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetCurveValue");

	Params::URigHierarchy_SetCurveValue_Params Parms{};

	Parms.InKey = InKey;
	Parms.InValue = InValue;
	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetControlVisibilityByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (None)
// bool                               bVisibility                                                      (None)

void URigHierarchy::SetControlVisibilityByIndex(int32 InElementIndex, bool bVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlVisibilityByIndex");

	Params::URigHierarchy_SetControlVisibilityByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bVisibility = bVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetControlVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// bool                               bVisibility                                                      (None)

void URigHierarchy::SetControlVisibility(const struct FRigElementKey& InKey, bool bVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlVisibility");

	Params::URigHierarchy_SetControlVisibility_Params Parms{};

	Parms.InKey = InKey;
	Parms.bVisibility = bVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetControlValueByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (None)
// struct FRigControlValue            InValue                                                          (None)
// enum class ERigControlValueType    InValueType                                                      (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommands                                             (None)

void URigHierarchy::SetControlValueByIndex(int32 InElementIndex, const struct FRigControlValue& InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlValueByIndex");

	Params::URigHierarchy_SetControlValueByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.InValue = InValue;
	Parms.InValueType = InValueType;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetControlValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// struct FRigControlValue            InValue                                                          (None)
// enum class ERigControlValueType    InValueType                                                      (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommands                                             (None)

void URigHierarchy::SetControlValue(const struct FRigElementKey& InKey, const struct FRigControlValue& InValue, enum class ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlValue");

	Params::URigHierarchy_SetControlValue_Params Parms{};

	Parms.InKey = InKey;
	Parms.InValue = InValue;
	Parms.InValueType = InValueType;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetControlShapeTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (None)
// struct FTransform                  InTransform                                                      (None)
// bool                               bInitial                                                         (None)
// bool                               bSetupUndo                                                       (None)

void URigHierarchy::SetControlShapeTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlShapeTransformByIndex");

	Params::URigHierarchy_SetControlShapeTransformByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.InTransform = InTransform;
	Parms.bInitial = bInitial;
	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetControlShapeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// struct FTransform                  InTransform                                                      (None)
// bool                               bInitial                                                         (None)
// bool                               bSetupUndo                                                       (None)

void URigHierarchy::SetControlShapeTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bSetupUndo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlShapeTransform");

	Params::URigHierarchy_SetControlShapeTransform_Params Parms{};

	Parms.InKey = InKey;
	Parms.InTransform = InTransform;
	Parms.bInitial = bInitial;
	Parms.bSetupUndo = bSetupUndo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetControlSettingsByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (None)
// struct FRigControlSettings         InSettings                                                       (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bForce                                                           (None)
// bool                               bPrintPythonCommands                                             (None)

void URigHierarchy::SetControlSettingsByIndex(int32 InElementIndex, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlSettingsByIndex");

	Params::URigHierarchy_SetControlSettingsByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.InSettings = InSettings;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bForce = bForce;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetControlSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// struct FRigControlSettings         InSettings                                                       (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bForce                                                           (None)
// bool                               bPrintPythonCommands                                             (None)

void URigHierarchy::SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlSettings");

	Params::URigHierarchy_SetControlSettings_Params Parms{};

	Parms.InKey = InKey;
	Parms.InSettings = InSettings;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bForce = bForce;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetControlPreferredRotatorByIndex
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (None)
// struct FRotator                    InValue                                                          (None)
// bool                               bInitial                                                         (None)
// bool                               bFixEulerFlips                                                   (None)

void URigHierarchy::SetControlPreferredRotatorByIndex(int32 InElementIndex, const struct FRotator& InValue, bool bInitial, bool bFixEulerFlips)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlPreferredRotatorByIndex");

	Params::URigHierarchy_SetControlPreferredRotatorByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.InValue = InValue;
	Parms.bInitial = bInitial;
	Parms.bFixEulerFlips = bFixEulerFlips;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetControlPreferredRotator
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// struct FRotator                    InValue                                                          (None)
// bool                               bInitial                                                         (None)
// bool                               bFixEulerFlips                                                   (None)

void URigHierarchy::SetControlPreferredRotator(const struct FRigElementKey& InKey, const struct FRotator& InValue, bool bInitial, bool bFixEulerFlips)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlPreferredRotator");

	Params::URigHierarchy_SetControlPreferredRotator_Params Parms{};

	Parms.InKey = InKey;
	Parms.InValue = InValue;
	Parms.bInitial = bInitial;
	Parms.bFixEulerFlips = bFixEulerFlips;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetControlOffsetTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              InElementIndex                                                   (None)
// struct FTransform                  InTransform                                                      (None)
// bool                               bInitial                                                         (None)
// bool                               bAffectChildren                                                  (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommands                                             (None)

void URigHierarchy::SetControlOffsetTransformByIndex(int32 InElementIndex, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlOffsetTransformByIndex");

	Params::URigHierarchy_SetControlOffsetTransformByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.InTransform = InTransform;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetControlOffsetTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// struct FTransform                  InTransform                                                      (None)
// bool                               bInitial                                                         (None)
// bool                               bAffectChildren                                                  (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommands                                             (None)

void URigHierarchy::SetControlOffsetTransform(const struct FRigElementKey& InKey, const struct FTransform& InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetControlOffsetTransform");

	Params::URigHierarchy_SetControlOffsetTransform_Params Parms{};

	Parms.InKey = InKey;
	Parms.InTransform = InTransform;
	Parms.bInitial = bInitial;
	Parms.bAffectChildren = bAffectChildren;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetBoolMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// bool                               InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetBoolMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, bool InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetBoolMetadata");

	Params::URigHierarchy_SetBoolMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SetBoolArrayMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// TArray<bool>                       InValue                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::SetBoolArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<bool>& InValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SetBoolArrayMetadata");

	Params::URigHierarchy_SetBoolArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.SendAutoKeyEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InElement                                                        (None)
// float                              InOffsetInSeconds                                                (None)
// bool                               bAsynchronous                                                    (None)

void URigHierarchy::SendAutoKeyEvent(const struct FRigElementKey& InElement, float InOffsetInSeconds, bool bAsynchronous)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "SendAutoKeyEvent");

	Params::URigHierarchy_SendAutoKeyEvent_Params Parms{};

	Parms.InElement = InElement;
	Parms.InOffsetInSeconds = InOffsetInSeconds;
	Parms.bAsynchronous = bAsynchronous;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.ResetToDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URigHierarchy::ResetToDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "ResetToDefault");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.ResetPoseToInitial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ERigElementType         InTypeFilter                                                     (None)

void URigHierarchy::ResetPoseToInitial(enum class ERigElementType InTypeFilter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "ResetPoseToInitial");

	Params::URigHierarchy_ResetPoseToInitial_Params Parms{};

	Parms.InTypeFilter = InTypeFilter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.ResetCurveValues
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URigHierarchy::ResetCurveValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "ResetCurveValues");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.Reset
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URigHierarchy::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "Reset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.RemoveMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::RemoveMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "RemoveMetadata");

	Params::URigHierarchy_RemoveMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.RemoveAllMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::RemoveAllMetadata(const struct FRigElementKey& InItem, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "RemoveAllMetadata");

	Params::URigHierarchy_RemoveAllMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.Num
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void URigHierarchy::Num(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "Num");

	Params::URigHierarchy_Num_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromVector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InValue                                                          (None)
// struct FRigControlValue            ReturnValue                                                      (None)

void URigHierarchy::MakeControlValueFromVector2D(const struct FVector2D& InValue, const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromVector2D");

	Params::URigHierarchy_MakeControlValueFromVector2D_Params Parms{};

	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InValue                                                          (None)
// struct FRigControlValue            ReturnValue                                                      (None)

void URigHierarchy::MakeControlValueFromVector(const struct FVector& InValue, const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromVector");

	Params::URigHierarchy_MakeControlValueFromVector_Params Parms{};

	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTransformNoScale           InValue                                                          (None)
// struct FRigControlValue            ReturnValue                                                      (None)

void URigHierarchy::MakeControlValueFromTransformNoScale(const struct FTransformNoScale& InValue, const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromTransformNoScale");

	Params::URigHierarchy_MakeControlValueFromTransformNoScale_Params Parms{};

	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  InValue                                                          (None)
// struct FRigControlValue            ReturnValue                                                      (None)

void URigHierarchy::MakeControlValueFromTransform(const struct FTransform& InValue, const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromTransform");

	Params::URigHierarchy_MakeControlValueFromTransform_Params Parms{};

	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromRotator
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    InValue                                                          (None)
// struct FRigControlValue            ReturnValue                                                      (None)

void URigHierarchy::MakeControlValueFromRotator(const struct FRotator& InValue, const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromRotator");

	Params::URigHierarchy_MakeControlValueFromRotator_Params Parms{};

	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              InValue                                                          (None)
// struct FRigControlValue            ReturnValue                                                      (None)

void URigHierarchy::MakeControlValueFromInt(int32 InValue, const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromInt");

	Params::URigHierarchy_MakeControlValueFromInt_Params Parms{};

	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (None)
// struct FRigControlValue            ReturnValue                                                      (None)

void URigHierarchy::MakeControlValueFromFloat(float InValue, const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromFloat");

	Params::URigHierarchy_MakeControlValueFromFloat_Params Parms{};

	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromEulerTransform
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FEulerTransform             InValue                                                          (None)
// struct FRigControlValue            ReturnValue                                                      (None)

void URigHierarchy::MakeControlValueFromEulerTransform(const struct FEulerTransform& InValue, const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromEulerTransform");

	Params::URigHierarchy_MakeControlValueFromEulerTransform_Params Parms{};

	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.MakeControlValueFromBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (None)
// struct FRigControlValue            ReturnValue                                                      (None)

void URigHierarchy::MakeControlValueFromBool(bool InValue, const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "MakeControlValueFromBool");

	Params::URigHierarchy_MakeControlValueFromBool_Params Parms{};

	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.IsValidIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::IsValidIndex(int32 InElementIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsValidIndex");

	Params::URigHierarchy_IsValidIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.IsSelectedByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InIndex                                                          (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::IsSelectedByIndex(int32 InIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsSelectedByIndex");

	Params::URigHierarchy_IsSelectedByIndex_Params Parms{};

	Parms.InIndex = InIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.IsSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::IsSelected(const struct FRigElementKey& InKey, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsSelected");

	Params::URigHierarchy_IsSelected_Params Parms{};

	Parms.InKey = InKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.IsProcedural
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::IsProcedural(const struct FRigElementKey& InKey, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsProcedural");

	Params::URigHierarchy_IsProcedural_Params Parms{};

	Parms.InKey = InKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.IsParentedTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InChild                                                          (None)
// struct FRigElementKey              InParent                                                         (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::IsParentedTo(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsParentedTo");

	Params::URigHierarchy_IsParentedTo_Params Parms{};

	Parms.InChild = InChild;
	Parms.InParent = InParent;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.IsCurveValueSetByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::IsCurveValueSetByIndex(int32 InElementIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsCurveValueSetByIndex");

	Params::URigHierarchy_IsCurveValueSetByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.IsCurveValueSet
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::IsCurveValueSet(const struct FRigElementKey& InKey, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsCurveValueSet");

	Params::URigHierarchy_IsCurveValueSet_Params Parms{};

	Parms.InKey = InKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.IsControllerAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void URigHierarchy::IsControllerAvailable(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "IsControllerAvailable");

	Params::URigHierarchy_IsControllerAvailable_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.HasTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InTag                                                            (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::HasTag(const struct FRigElementKey& InItem, class FName InTag, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "HasTag");

	Params::URigHierarchy_HasTag_Params Parms{};

	Parms.InItem = InItem;
	Parms.InTag = InTag;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetVectorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// struct FVector                     DefaultValue                                                     (None)
// struct FVector                     ReturnValue                                                      (None)

void URigHierarchy::GetVectorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FVector& DefaultValue, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetVectorMetadata");

	Params::URigHierarchy_GetVectorMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetVectorFromControlValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (None)
// struct FVector                     ReturnValue                                                      (None)

void URigHierarchy::GetVectorFromControlValue(const struct FRigControlValue& InValue, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetVectorFromControlValue");

	Params::URigHierarchy_GetVectorFromControlValue_Params Parms{};

	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetVectorArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// TArray<struct FVector>             ReturnValue                                                      (None)

void URigHierarchy::GetVectorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FVector>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetVectorArrayMetadata");

	Params::URigHierarchy_GetVectorArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetVector2DFromControlValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (None)
// struct FVector2D                   ReturnValue                                                      (None)

void URigHierarchy::GetVector2DFromControlValue(const struct FRigControlValue& InValue, const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetVector2DFromControlValue");

	Params::URigHierarchy_GetVector2DFromControlValue_Params Parms{};

	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (None)
// struct FTransformNoScale           ReturnValue                                                      (None)

void URigHierarchy::GetTransformNoScaleFromControlValue(const struct FRigControlValue& InValue, const struct FTransformNoScale& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetTransformNoScaleFromControlValue");

	Params::URigHierarchy_GetTransformNoScaleFromControlValue_Params Parms{};

	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetTransformMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// struct FTransform                  DefaultValue                                                     (None)
// struct FTransform                  ReturnValue                                                      (None)

void URigHierarchy::GetTransformMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FTransform& DefaultValue, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetTransformMetadata");

	Params::URigHierarchy_GetTransformMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetTransformFromControlValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (None)
// struct FTransform                  ReturnValue                                                      (None)

void URigHierarchy::GetTransformFromControlValue(const struct FRigControlValue& InValue, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetTransformFromControlValue");

	Params::URigHierarchy_GetTransformFromControlValue_Params Parms{};

	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetTransformArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// TArray<struct FTransform>          ReturnValue                                                      (None)

void URigHierarchy::GetTransformArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FTransform>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetTransformArrayMetadata");

	Params::URigHierarchy_GetTransformArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// TArray<class FName>                ReturnValue                                                      (None)

void URigHierarchy::GetTags(const struct FRigElementKey& InItem, const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetTags");

	Params::URigHierarchy_GetTags_Params Parms{};

	Parms.InItem = InItem;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetSelectedKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ERigElementType         InTypeFilter                                                     (None)
// TArray<struct FRigElementKey>      ReturnValue                                                      (None)

void URigHierarchy::GetSelectedKeys(enum class ERigElementType InTypeFilter, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetSelectedKeys");

	Params::URigHierarchy_GetSelectedKeys_Params Parms{};

	Parms.InTypeFilter = InTypeFilter;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetRotatorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// struct FRotator                    DefaultValue                                                     (None)
// struct FRotator                    ReturnValue                                                      (None)

void URigHierarchy::GetRotatorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRotator& DefaultValue, const struct FRotator& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetRotatorMetadata");

	Params::URigHierarchy_GetRotatorMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetRotatorFromControlValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (None)
// struct FRotator                    ReturnValue                                                      (None)

void URigHierarchy::GetRotatorFromControlValue(const struct FRigControlValue& InValue, const struct FRotator& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetRotatorFromControlValue");

	Params::URigHierarchy_GetRotatorFromControlValue_Params Parms{};

	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetRotatorArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// TArray<struct FRotator>            ReturnValue                                                      (None)

void URigHierarchy::GetRotatorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FRotator>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetRotatorArrayMetadata");

	Params::URigHierarchy_GetRotatorArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetRootElementKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRigElementKey>      ReturnValue                                                      (None)

void URigHierarchy::GetRootElementKeys(const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetRootElementKeys");

	Params::URigHierarchy_GetRootElementKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetRigidBodyKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (None)
// TArray<struct FRigElementKey>      ReturnValue                                                      (None)

void URigHierarchy::GetRigidBodyKeys(bool bTraverse, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetRigidBodyKeys");

	Params::URigHierarchy_GetRigidBodyKeys_Params Parms{};

	Parms.bTraverse = bTraverse;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetRigElementKeyMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// struct FRigElementKey              DefaultValue                                                     (None)
// struct FRigElementKey              ReturnValue                                                      (None)

void URigHierarchy::GetRigElementKeyMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FRigElementKey& DefaultValue, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetRigElementKeyMetadata");

	Params::URigHierarchy_GetRigElementKeyMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetRigElementKeyArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// TArray<struct FRigElementKey>      ReturnValue                                                      (None)

void URigHierarchy::GetRigElementKeyArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetRigElementKeyArrayMetadata");

	Params::URigHierarchy_GetRigElementKeyArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetReferenceKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (None)
// TArray<struct FRigElementKey>      ReturnValue                                                      (None)

void URigHierarchy::GetReferenceKeys(bool bTraverse, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetReferenceKeys");

	Params::URigHierarchy_GetReferenceKeys_Params Parms{};

	Parms.bTraverse = bTraverse;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetQuatMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// struct FQuat                       DefaultValue                                                     (None)
// struct FQuat                       ReturnValue                                                      (None)

void URigHierarchy::GetQuatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FQuat& DefaultValue, const struct FQuat& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetQuatMetadata");

	Params::URigHierarchy_GetQuatMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetQuatArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// TArray<struct FQuat>               ReturnValue                                                      (None)

void URigHierarchy::GetQuatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FQuat>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetQuatArrayMetadata");

	Params::URigHierarchy_GetQuatArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetPreviousParent
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// struct FRigElementKey              ReturnValue                                                      (None)

void URigHierarchy::GetPreviousParent(const struct FRigElementKey& InKey, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetPreviousParent");

	Params::URigHierarchy_GetPreviousParent_Params Parms{};

	Parms.InKey = InKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetPreviousName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// class FName                        ReturnValue                                                      (None)

void URigHierarchy::GetPreviousName(const struct FRigElementKey& InKey, class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetPreviousName");

	Params::URigHierarchy_GetPreviousName_Params Parms{};

	Parms.InKey = InKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetPose
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bInitial                                                         (None)
// struct FRigPose                    ReturnValue                                                      (None)

void URigHierarchy::GetPose(bool bInitial, const struct FRigPose& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetPose");

	Params::URigHierarchy_GetPose_Params Parms{};

	Parms.bInitial = bInitial;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetParentWeightArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InChild                                                          (None)
// bool                               bInitial                                                         (None)
// TArray<struct FRigElementWeight>   ReturnValue                                                      (None)

void URigHierarchy::GetParentWeightArray(const struct FRigElementKey& InChild, bool bInitial, const TArray<struct FRigElementWeight>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetParentWeightArray");

	Params::URigHierarchy_GetParentWeightArray_Params Parms{};

	Parms.InChild = InChild;
	Parms.bInitial = bInitial;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetParentWeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InChild                                                          (None)
// struct FRigElementKey              InParent                                                         (None)
// bool                               bInitial                                                         (None)
// struct FRigElementWeight           ReturnValue                                                      (None)

void URigHierarchy::GetParentWeight(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bInitial, const struct FRigElementWeight& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetParentWeight");

	Params::URigHierarchy_GetParentWeight_Params Parms{};

	Parms.InChild = InChild;
	Parms.InParent = InParent;
	Parms.bInitial = bInitial;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetParentTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (None)
// bool                               bInitial                                                         (None)
// struct FTransform                  ReturnValue                                                      (None)

void URigHierarchy::GetParentTransformByIndex(int32 InElementIndex, bool bInitial, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetParentTransformByIndex");

	Params::URigHierarchy_GetParentTransformByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bInitial = bInitial;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetParentTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// bool                               bInitial                                                         (None)
// struct FTransform                  ReturnValue                                                      (None)

void URigHierarchy::GetParentTransform(const struct FRigElementKey& InKey, bool bInitial, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetParentTransform");

	Params::URigHierarchy_GetParentTransform_Params Parms{};

	Parms.InKey = InKey;
	Parms.bInitial = bInitial;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetParents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// bool                               bRecursive                                                       (None)
// TArray<struct FRigElementKey>      ReturnValue                                                      (None)

void URigHierarchy::GetParents(const struct FRigElementKey& InKey, bool bRecursive, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetParents");

	Params::URigHierarchy_GetParents_Params Parms{};

	Parms.InKey = InKey;
	Parms.bRecursive = bRecursive;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetNumberOfParents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// int32                              ReturnValue                                                      (None)

void URigHierarchy::GetNumberOfParents(const struct FRigElementKey& InKey, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetNumberOfParents");

	Params::URigHierarchy_GetNumberOfParents_Params Parms{};

	Parms.InKey = InKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetNullKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (None)
// TArray<struct FRigElementKey>      ReturnValue                                                      (None)

void URigHierarchy::GetNullKeys(bool bTraverse, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetNullKeys");

	Params::URigHierarchy_GetNullKeys_Params Parms{};

	Parms.bTraverse = bTraverse;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetNameMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// class FName                        DefaultValue                                                     (None)
// class FName                        ReturnValue                                                      (None)

void URigHierarchy::GetNameMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, class FName DefaultValue, class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetNameMetadata");

	Params::URigHierarchy_GetNameMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetNameArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// TArray<class FName>                ReturnValue                                                      (None)

void URigHierarchy::GetNameArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetNameArrayMetadata");

	Params::URigHierarchy_GetNameArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetMetadataType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// enum class ERigMetadataType        ReturnValue                                                      (None)

void URigHierarchy::GetMetadataType(const struct FRigElementKey& InItem, class FName InMetadataName, enum class ERigMetadataType ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetMetadataType");

	Params::URigHierarchy_GetMetadataType_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetMetadataNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// TArray<class FName>                ReturnValue                                                      (None)

void URigHierarchy::GetMetadataNames(const struct FRigElementKey& InItem, const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetMetadataNames");

	Params::URigHierarchy_GetMetadataNames_Params Parms{};

	Parms.InItem = InItem;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetLocalTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (None)
// bool                               bInitial                                                         (None)
// struct FTransform                  ReturnValue                                                      (None)

void URigHierarchy::GetLocalTransformByIndex(int32 InElementIndex, bool bInitial, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetLocalTransformByIndex");

	Params::URigHierarchy_GetLocalTransformByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bInitial = bInitial;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetLocalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// bool                               bInitial                                                         (None)
// struct FTransform                  ReturnValue                                                      (None)

void URigHierarchy::GetLocalTransform(const struct FRigElementKey& InKey, bool bInitial, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetLocalTransform");

	Params::URigHierarchy_GetLocalTransform_Params Parms{};

	Parms.InKey = InKey;
	Parms.bInitial = bInitial;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetLocalIndex_ForBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// int32                              ReturnValue                                                      (None)

void URigHierarchy::GetLocalIndex_ForBlueprint(const struct FRigElementKey& InKey, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetLocalIndex_ForBlueprint");

	Params::URigHierarchy_GetLocalIndex_ForBlueprint_Params Parms{};

	Parms.InKey = InKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetLocalControlShapeTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (None)
// bool                               bInitial                                                         (None)
// struct FTransform                  ReturnValue                                                      (None)

void URigHierarchy::GetLocalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetLocalControlShapeTransformByIndex");

	Params::URigHierarchy_GetLocalControlShapeTransformByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bInitial = bInitial;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetLocalControlShapeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// bool                               bInitial                                                         (None)
// struct FTransform                  ReturnValue                                                      (None)

void URigHierarchy::GetLocalControlShapeTransform(const struct FRigElementKey& InKey, bool bInitial, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetLocalControlShapeTransform");

	Params::URigHierarchy_GetLocalControlShapeTransform_Params Parms{};

	Parms.InKey = InKey;
	Parms.bInitial = bInitial;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetLinearColorMetadata
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// struct FLinearColor                DefaultValue                                                     (None)
// struct FLinearColor                ReturnValue                                                      (None)

void URigHierarchy::GetLinearColorMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const struct FLinearColor& DefaultValue, const struct FLinearColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetLinearColorMetadata");

	Params::URigHierarchy_GetLinearColorMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetLinearColorArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// TArray<struct FLinearColor>        ReturnValue                                                      (None)

void URigHierarchy::GetLinearColorArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<struct FLinearColor>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetLinearColorArrayMetadata");

	Params::URigHierarchy_GetLinearColorArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int32>                      InElementIndices                                                 (None)
// TArray<struct FRigElementKey>      ReturnValue                                                      (None)

void URigHierarchy::GetKeys(const TArray<int32>& InElementIndices, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetKeys");

	Params::URigHierarchy_GetKeys_Params Parms{};

	Parms.InElementIndices = InElementIndices;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (None)
// struct FRigElementKey              ReturnValue                                                      (None)

void URigHierarchy::GetKey(int32 InElementIndex, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetKey");

	Params::URigHierarchy_GetKey_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetIntFromControlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (None)
// int32                              ReturnValue                                                      (None)

void URigHierarchy::GetIntFromControlValue(const struct FRigControlValue& InValue, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetIntFromControlValue");

	Params::URigHierarchy_GetIntFromControlValue_Params Parms{};

	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetInt32Metadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// int32                              DefaultValue                                                     (None)
// int32                              ReturnValue                                                      (None)

void URigHierarchy::GetInt32Metadata(const struct FRigElementKey& InItem, class FName InMetadataName, int32 DefaultValue, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetInt32Metadata");

	Params::URigHierarchy_GetInt32Metadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetInt32ArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// TArray<int32>                      ReturnValue                                                      (None)

void URigHierarchy::GetInt32ArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<int32>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetInt32ArrayMetadata");

	Params::URigHierarchy_GetInt32ArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetIndex_ForBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// int32                              ReturnValue                                                      (None)

void URigHierarchy::GetIndex_ForBlueprint(const struct FRigElementKey& InKey, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetIndex_ForBlueprint");

	Params::URigHierarchy_GetIndex_ForBlueprint_Params Parms{};

	Parms.InKey = InKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetGlobalTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (None)
// bool                               bInitial                                                         (None)
// struct FTransform                  ReturnValue                                                      (None)

void URigHierarchy::GetGlobalTransformByIndex(int32 InElementIndex, bool bInitial, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalTransformByIndex");

	Params::URigHierarchy_GetGlobalTransformByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bInitial = bInitial;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetGlobalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// bool                               bInitial                                                         (None)
// struct FTransform                  ReturnValue                                                      (None)

void URigHierarchy::GetGlobalTransform(const struct FRigElementKey& InKey, bool bInitial, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalTransform");

	Params::URigHierarchy_GetGlobalTransform_Params Parms{};

	Parms.InKey = InKey;
	Parms.bInitial = bInitial;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (None)
// bool                               bInitial                                                         (None)
// struct FTransform                  ReturnValue                                                      (None)

void URigHierarchy::GetGlobalControlShapeTransformByIndex(int32 InElementIndex, bool bInitial, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalControlShapeTransformByIndex");

	Params::URigHierarchy_GetGlobalControlShapeTransformByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bInitial = bInitial;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetGlobalControlShapeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// bool                               bInitial                                                         (None)
// struct FTransform                  ReturnValue                                                      (None)

void URigHierarchy::GetGlobalControlShapeTransform(const struct FRigElementKey& InKey, bool bInitial, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalControlShapeTransform");

	Params::URigHierarchy_GetGlobalControlShapeTransform_Params Parms{};

	Parms.InKey = InKey;
	Parms.bInitial = bInitial;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (None)
// bool                               bInitial                                                         (None)
// struct FTransform                  ReturnValue                                                      (None)

void URigHierarchy::GetGlobalControlOffsetTransformByIndex(int32 InElementIndex, bool bInitial, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalControlOffsetTransformByIndex");

	Params::URigHierarchy_GetGlobalControlOffsetTransformByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bInitial = bInitial;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetGlobalControlOffsetTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// bool                               bInitial                                                         (None)
// struct FTransform                  ReturnValue                                                      (None)

void URigHierarchy::GetGlobalControlOffsetTransform(const struct FRigElementKey& InKey, bool bInitial, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetGlobalControlOffsetTransform");

	Params::URigHierarchy_GetGlobalControlOffsetTransform_Params Parms{};

	Parms.InKey = InKey;
	Parms.bInitial = bInitial;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetFloatMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// float                              DefaultValue                                                     (None)
// float                              ReturnValue                                                      (None)

void URigHierarchy::GetFloatMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, float DefaultValue, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetFloatMetadata");

	Params::URigHierarchy_GetFloatMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetFloatFromControlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (None)
// float                              ReturnValue                                                      (None)

void URigHierarchy::GetFloatFromControlValue(const struct FRigControlValue& InValue, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetFloatFromControlValue");

	Params::URigHierarchy_GetFloatFromControlValue_Params Parms{};

	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetFloatArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// TArray<float>                      ReturnValue                                                      (None)

void URigHierarchy::GetFloatArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<float>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetFloatArrayMetadata");

	Params::URigHierarchy_GetFloatArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetFirstParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// struct FRigElementKey              ReturnValue                                                      (None)

void URigHierarchy::GetFirstParent(const struct FRigElementKey& InKey, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetFirstParent");

	Params::URigHierarchy_GetFirstParent_Params Parms{};

	Parms.InKey = InKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetEulerTransformFromControlValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FRigControlValue            InValue                                                          (None)
// struct FEulerTransform             ReturnValue                                                      (None)

void URigHierarchy::GetEulerTransformFromControlValue(const struct FRigControlValue& InValue, const struct FEulerTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetEulerTransformFromControlValue");

	Params::URigHierarchy_GetEulerTransformFromControlValue_Params Parms{};

	Parms.InValue = InValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetDefaultParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// struct FRigElementKey              ReturnValue                                                      (None)

void URigHierarchy::GetDefaultParent(const struct FRigElementKey& InKey, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetDefaultParent");

	Params::URigHierarchy_GetDefaultParent_Params Parms{};

	Parms.InKey = InKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetCurveValueByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (None)
// float                              ReturnValue                                                      (None)

void URigHierarchy::GetCurveValueByIndex(int32 InElementIndex, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetCurveValueByIndex");

	Params::URigHierarchy_GetCurveValueByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetCurveValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// float                              ReturnValue                                                      (None)

void URigHierarchy::GetCurveValue(const struct FRigElementKey& InKey, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetCurveValue");

	Params::URigHierarchy_GetCurveValue_Params Parms{};

	Parms.InKey = InKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetCurveKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRigElementKey>      ReturnValue                                                      (None)

void URigHierarchy::GetCurveKeys(const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetCurveKeys");

	Params::URigHierarchy_GetCurveKeys_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetControlValueByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (None)
// enum class ERigControlValueType    InValueType                                                      (None)
// struct FRigControlValue            ReturnValue                                                      (None)

void URigHierarchy::GetControlValueByIndex(int32 InElementIndex, enum class ERigControlValueType InValueType, const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetControlValueByIndex");

	Params::URigHierarchy_GetControlValueByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.InValueType = InValueType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetControlValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// enum class ERigControlValueType    InValueType                                                      (None)
// struct FRigControlValue            ReturnValue                                                      (None)

void URigHierarchy::GetControlValue(const struct FRigElementKey& InKey, enum class ERigControlValueType InValueType, const struct FRigControlValue& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetControlValue");

	Params::URigHierarchy_GetControlValue_Params Parms{};

	Parms.InKey = InKey;
	Parms.InValueType = InValueType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetControlPreferredRotatorByIndex
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              InElementIndex                                                   (None)
// bool                               bInitial                                                         (None)
// struct FRotator                    ReturnValue                                                      (None)

void URigHierarchy::GetControlPreferredRotatorByIndex(int32 InElementIndex, bool bInitial, const struct FRotator& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetControlPreferredRotatorByIndex");

	Params::URigHierarchy_GetControlPreferredRotatorByIndex_Params Parms{};

	Parms.InElementIndex = InElementIndex;
	Parms.bInitial = bInitial;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetControlPreferredRotator
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// bool                               bInitial                                                         (None)
// struct FRotator                    ReturnValue                                                      (None)

void URigHierarchy::GetControlPreferredRotator(const struct FRigElementKey& InKey, bool bInitial, const struct FRotator& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetControlPreferredRotator");

	Params::URigHierarchy_GetControlPreferredRotator_Params Parms{};

	Parms.InKey = InKey;
	Parms.bInitial = bInitial;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCreateIfNeeded                                                  (None)
// class URigHierarchyController*     ReturnValue                                                      (None)

void URigHierarchy::GetController(bool bCreateIfNeeded, class URigHierarchyController* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetController");

	Params::URigHierarchy_GetController_Params Parms{};

	Parms.bCreateIfNeeded = bCreateIfNeeded;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetControlKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (None)
// TArray<struct FRigElementKey>      ReturnValue                                                      (None)

void URigHierarchy::GetControlKeys(bool bTraverse, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetControlKeys");

	Params::URigHierarchy_GetControlKeys_Params Parms{};

	Parms.bTraverse = bTraverse;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetChildren
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// bool                               bRecursive                                                       (None)
// TArray<struct FRigElementKey>      ReturnValue                                                      (None)

void URigHierarchy::GetChildren(const struct FRigElementKey& InKey, bool bRecursive, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetChildren");

	Params::URigHierarchy_GetChildren_Params Parms{};

	Parms.InKey = InKey;
	Parms.bRecursive = bRecursive;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetBoolMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// bool                               DefaultValue                                                     (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::GetBoolMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, bool DefaultValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetBoolMetadata");

	Params::URigHierarchy_GetBoolMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.DefaultValue = DefaultValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetBoolArrayMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InItem                                                           (None)
// class FName                        InMetadataName                                                   (None)
// TArray<bool>                       ReturnValue                                                      (None)

void URigHierarchy::GetBoolArrayMetadata(const struct FRigElementKey& InItem, class FName InMetadataName, const TArray<bool>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetBoolArrayMetadata");

	Params::URigHierarchy_GetBoolArrayMetadata_Params Parms{};

	Parms.InItem = InItem;
	Parms.InMetadataName = InMetadataName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetBoneKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (None)
// TArray<struct FRigElementKey>      ReturnValue                                                      (None)

void URigHierarchy::GetBoneKeys(bool bTraverse, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetBoneKeys");

	Params::URigHierarchy_GetBoneKeys_Params Parms{};

	Parms.bTraverse = bTraverse;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.GetAllKeys_ForBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bTraverse                                                        (None)
// TArray<struct FRigElementKey>      ReturnValue                                                      (None)

void URigHierarchy::GetAllKeys_ForBlueprint(bool bTraverse, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "GetAllKeys_ForBlueprint");

	Params::URigHierarchy_GetAllKeys_ForBlueprint_Params Parms{};

	Parms.bTraverse = bTraverse;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.FindNull_ForBlueprintOnly
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// struct FRigNullElement             ReturnValue                                                      (None)

void URigHierarchy::FindNull_ForBlueprintOnly(const struct FRigElementKey& InKey, const struct FRigNullElement& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "FindNull_ForBlueprintOnly");

	Params::URigHierarchy_FindNull_ForBlueprintOnly_Params Parms{};

	Parms.InKey = InKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.FindControl_ForBlueprintOnly
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// struct FRigControlElement          ReturnValue                                                      (None)

void URigHierarchy::FindControl_ForBlueprintOnly(const struct FRigElementKey& InKey, const struct FRigControlElement& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "FindControl_ForBlueprintOnly");

	Params::URigHierarchy_FindControl_ForBlueprintOnly_Params Parms{};

	Parms.InKey = InKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.FindBone_ForBlueprintOnly
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// struct FRigBoneElement             ReturnValue                                                      (None)

void URigHierarchy::FindBone_ForBlueprintOnly(const struct FRigElementKey& InKey, const struct FRigBoneElement& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "FindBone_ForBlueprintOnly");

	Params::URigHierarchy_FindBone_ForBlueprintOnly_Params Parms{};

	Parms.InKey = InKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.CopyPose
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URigHierarchy*               InHierarchy                                                      (None)
// bool                               bCurrent                                                         (None)
// bool                               bInitial                                                         (None)
// bool                               bWeights                                                         (None)
// bool                               bMatchPoseInGlobalIfNeeded                                       (None)

void URigHierarchy::CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "CopyPose");

	Params::URigHierarchy_CopyPose_Params Parms{};

	Parms.InHierarchy = InHierarchy;
	Parms.bCurrent = bCurrent;
	Parms.bInitial = bInitial;
	Parms.bWeights = bWeights;
	Parms.bMatchPoseInGlobalIfNeeded = bMatchPoseInGlobalIfNeeded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.CopyHierarchy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URigHierarchy*               InHierarchy                                                      (None)

void URigHierarchy::CopyHierarchy(class URigHierarchy* InHierarchy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "CopyHierarchy");

	Params::URigHierarchy_CopyHierarchy_Params Parms{};

	Parms.InHierarchy = InHierarchy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchy.Contains_ForBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchy::Contains_ForBlueprint(const struct FRigElementKey& InKey, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchy", "Contains_ForBlueprint");

	Params::URigHierarchy_Contains_ForBlueprint_Params Parms{};

	Parms.InKey = InKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ControlRig.TransformableControlHandle
// (None)

class UClass* UTransformableControlHandle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransformableControlHandle");

	return Clss;
}


// TransformableControlHandle ControlRig.Default__TransformableControlHandle
// (Public, ClassDefaultObject, ArchetypeObject)

class UTransformableControlHandle* UTransformableControlHandle::GetDefaultObj()
{
	static class UTransformableControlHandle* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransformableControlHandle*>(UTransformableControlHandle::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRig
// (None)

class UClass* UControlRig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRig");

	return Clss;
}


// ControlRig ControlRig.Default__ControlRig
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRig* UControlRig::GetDefaultObj()
{
	static class UControlRig* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRig*>(UControlRig::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlRig.ControlRig.SetInteractionRigClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InInteractionRigClass                                            (None)

void UControlRig::SetInteractionRigClass(class UClass* InInteractionRigClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "SetInteractionRigClass");

	Params::UControlRig_SetInteractionRigClass_Params Parms{};

	Parms.InInteractionRigClass = InInteractionRigClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRig.SetInteractionRig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*                 InInteractionRig                                                 (None)

void UControlRig::SetInteractionRig(class UControlRig* InInteractionRig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "SetInteractionRig");

	Params::UControlRig_SetInteractionRig_Params Parms{};

	Parms.InInteractionRig = InInteractionRig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRig.SelectControl
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InControlName                                                    (None)
// bool                               bSelect                                                          (None)

void UControlRig::SelectControl(class FName InControlName, bool bSelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "SelectControl");

	Params::UControlRig_SelectControl_Params Parms{};

	Parms.InControlName = InControlName;
	Parms.bSelect = bSelect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRig.RequestConstruction
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UControlRig::RequestConstruction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "RequestConstruction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// SparseDelegateFunction ControlRig.ControlRig.OnControlSelectedBP__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class UControlRig*                 Rig                                                              (ZeroConstructor)
// struct FRigControlElement          Control                                                          (None)
// bool                               bSelected                                                        (None)

void UControlRig::OnControlSelectedBP__DelegateSignature(class UControlRig* Rig, const struct FRigControlElement& Control, bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "OnControlSelectedBP__DelegateSignature");

	Params::UControlRig_OnControlSelectedBP__DelegateSignature_Params Parms{};

	Parms.Rig = Rig;
	Parms.Control = Control;
	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlRig.ControlRig.IsControlSelected
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InControlName                                                    (None)
// bool                               ReturnValue                                                      (None)

void UControlRig::IsControlSelected(class FName InControlName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "IsControlSelected");

	Params::UControlRig_IsControlSelected_Params Parms{};

	Parms.InControlName = InControlName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRig.GetInteractionRigClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ReturnValue                                                      (None)

void UControlRig::GetInteractionRigClass(class UClass* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "GetInteractionRigClass");

	Params::UControlRig_GetInteractionRigClass_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRig.GetInteractionRig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UControlRig*                 ReturnValue                                                      (None)

void UControlRig::GetInteractionRig(class UControlRig* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "GetInteractionRig");

	Params::UControlRig_GetInteractionRig_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRig.GetHostingActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (None)

void UControlRig::GetHostingActor(class AActor* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "GetHostingActor");

	Params::UControlRig_GetHostingActor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRig.GetHierarchy
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class URigHierarchy*               ReturnValue                                                      (None)

void UControlRig::GetHierarchy(class URigHierarchy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "GetHierarchy");

	Params::UControlRig_GetHierarchy_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRig.FindControlRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Outer                                                            (ZeroConstructor)
// class UClass*                      OptionalClass                                                    (ZeroConstructor)
// TArray<class UControlRig*>         ReturnValue                                                      (None)

void UControlRig::FindControlRigs(class UObject* Outer, class UClass* OptionalClass, const TArray<class UControlRig*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "FindControlRigs");

	Params::UControlRig_FindControlRigs_Params Parms{};

	Parms.Outer = Outer;
	Parms.OptionalClass = OptionalClass;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRig.CurrentControlSelection
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (None)

void UControlRig::CurrentControlSelection(const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "CurrentControlSelection");

	Params::UControlRig_CurrentControlSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRig.CreateTransformableControlHandle
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     Outer                                                            (ZeroConstructor)
// class FName                        ControlName                                                      (None)
// class UTransformableControlHandle* ReturnValue                                                      (None)

void UControlRig::CreateTransformableControlHandle(class UObject* Outer, class FName ControlName, class UTransformableControlHandle* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "CreateTransformableControlHandle");

	Params::UControlRig_CreateTransformableControlHandle_Params Parms{};

	Parms.Outer = Outer;
	Parms.ControlName = ControlName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRig.ClearControlSelection
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UControlRig::ClearControlSelection(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRig", "ClearControlSelection");

	Params::UControlRig_ClearControlSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ControlRig.ControlRigAnimInstance
// (None)

class UClass* UControlRigAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigAnimInstance");

	return Clss;
}


// ControlRigAnimInstance ControlRig.Default__ControlRigAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigAnimInstance* UControlRigAnimInstance::GetDefaultObj()
{
	static class UControlRigAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigAnimInstance*>(UControlRigAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigBlueprintGeneratedClass
// (Field, Struct, Class)

class UClass* UControlRigBlueprintGeneratedClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigBlueprintGeneratedClass");

	return Clss;
}


// ControlRigBlueprintGeneratedClass ControlRig.Default__ControlRigBlueprintGeneratedClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigBlueprintGeneratedClass* UControlRigBlueprintGeneratedClass::GetDefaultObj()
{
	static class UControlRigBlueprintGeneratedClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigBlueprintGeneratedClass*>(UControlRigBlueprintGeneratedClass::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UControlRigComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigComponent");

	return Clss;
}


// ControlRigComponent ControlRig.Default__ControlRigComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigComponent* UControlRigComponent::GetDefaultObj()
{
	static class UControlRigComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigComponent*>(UControlRigComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlRig.ControlRigComponent.Update
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaTime                                                        (None)

void UControlRigComponent::Update(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "Update");

	Params::UControlRigComponent_Update_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.SetObjectBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InObjectToBind                                                   (None)

void UControlRigComponent::SetObjectBinding(class UObject* InObjectToBind)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetObjectBinding");

	Params::UControlRigComponent_SetObjectBinding_Params Parms{};

	Parms.InObjectToBind = InObjectToBind;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.SetMappedElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FControlRigComponentMappedElement>NewMappedElements                                                (None)

void UControlRigComponent::SetMappedElements(const TArray<struct FControlRigComponentMappedElement>& NewMappedElements)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetMappedElements");

	Params::UControlRigComponent_SetMappedElements_Params Parms{};

	Parms.NewMappedElements = NewMappedElements;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.SetInitialSpaceTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        SpaceName                                                        (None)
// struct FTransform                  InitialTransform                                                 (None)
// enum class EControlRigComponentSpaceSpace                                                            (None)

void UControlRigComponent::SetInitialSpaceTransform(class FName SpaceName, const struct FTransform& InitialTransform, enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetInitialSpaceTransform");

	Params::UControlRigComponent_SetInitialSpaceTransform_Params Parms{};

	Parms.SpaceName = SpaceName;
	Parms.InitialTransform = InitialTransform;
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.SetInitialBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        BoneName                                                         (None)
// struct FTransform                  InitialTransform                                                 (None)
// enum class EControlRigComponentSpaceSpace                                                            (None)
// bool                               bPropagateToChildren                                             (None)

void UControlRigComponent::SetInitialBoneTransform(class FName BoneName, const struct FTransform& InitialTransform, enum class EControlRigComponentSpace Space, bool bPropagateToChildren)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetInitialBoneTransform");

	Params::UControlRigComponent_SetInitialBoneTransform_Params Parms{};

	Parms.BoneName = BoneName;
	Parms.InitialTransform = InitialTransform;
	Parms.Space = Space;
	Parms.bPropagateToChildren = bPropagateToChildren;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.SetControlVector2D
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (None)
// struct FVector2D                   Value                                                            (None)

void UControlRigComponent::SetControlVector2D(class FName ControlName, const struct FVector2D& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetControlVector2D");

	Params::UControlRigComponent_SetControlVector2D_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.SetControlTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (None)
// struct FTransform                  Value                                                            (None)
// enum class EControlRigComponentSpaceSpace                                                            (None)

void UControlRigComponent::SetControlTransform(class FName ControlName, const struct FTransform& Value, enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetControlTransform");

	Params::UControlRigComponent_SetControlTransform_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.Value = Value;
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.SetControlScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (None)
// struct FVector                     Value                                                            (None)
// enum class EControlRigComponentSpaceSpace                                                            (None)

void UControlRigComponent::SetControlScale(class FName ControlName, const struct FVector& Value, enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetControlScale");

	Params::UControlRigComponent_SetControlScale_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.Value = Value;
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.SetControlRotator
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (None)
// struct FRotator                    Value                                                            (None)
// enum class EControlRigComponentSpaceSpace                                                            (None)

void UControlRigComponent::SetControlRotator(class FName ControlName, const struct FRotator& Value, enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetControlRotator");

	Params::UControlRigComponent_SetControlRotator_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.Value = Value;
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.SetControlRigClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InControlRigClass                                                (None)

void UControlRigComponent::SetControlRigClass(class UClass* InControlRigClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetControlRigClass");

	Params::UControlRigComponent_SetControlRigClass_Params Parms{};

	Parms.InControlRigClass = InControlRigClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.SetControlPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (None)
// struct FVector                     Value                                                            (None)
// enum class EControlRigComponentSpaceSpace                                                            (None)

void UControlRigComponent::SetControlPosition(class FName ControlName, const struct FVector& Value, enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetControlPosition");

	Params::UControlRigComponent_SetControlPosition_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.Value = Value;
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.SetControlOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (None)
// struct FTransform                  OffsetTransform                                                  (None)
// enum class EControlRigComponentSpaceSpace                                                            (None)

void UControlRigComponent::SetControlOffset(class FName ControlName, const struct FTransform& OffsetTransform, enum class EControlRigComponentSpace Space)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetControlOffset");

	Params::UControlRigComponent_SetControlOffset_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.OffsetTransform = OffsetTransform;
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.SetControlInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (None)
// int32                              Value                                                            (None)

void UControlRigComponent::SetControlInt(class FName ControlName, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetControlInt");

	Params::UControlRigComponent_SetControlInt_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.SetControlFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (None)
// float                              Value                                                            (None)

void UControlRigComponent::SetControlFloat(class FName ControlName, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetControlFloat");

	Params::UControlRigComponent_SetControlFloat_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.SetControlBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (None)
// bool                               Value                                                            (None)

void UControlRigComponent::SetControlBool(class FName ControlName, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetControlBool");

	Params::UControlRigComponent_SetControlBool_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.SetBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        BoneName                                                         (None)
// struct FTransform                  Transform                                                        (None)
// enum class EControlRigComponentSpaceSpace                                                            (None)
// float                              Weight                                                           (None)
// bool                               bPropagateToChildren                                             (None)

void UControlRigComponent::SetBoneTransform(class FName BoneName, const struct FTransform& Transform, enum class EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetBoneTransform");

	Params::UControlRigComponent_SetBoneTransform_Params Parms{};

	Parms.BoneName = BoneName;
	Parms.Transform = Transform;
	Parms.Space = Space;
	Parms.Weight = Weight;
	Parms.bPropagateToChildren = bPropagateToChildren;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMesh*               InSkeletalMesh                                                   (None)

void UControlRigComponent::SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "SetBoneInitialTransformsFromSkeletalMesh");

	Params::UControlRigComponent_SetBoneInitialTransformsFromSkeletalMesh_Params Parms{};

	Parms.InSkeletalMesh = InSkeletalMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.OnPreInitialize
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (None)

void UControlRigComponent::OnPreInitialize(class UControlRigComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "OnPreInitialize");

	Params::UControlRigComponent_OnPreInitialize_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.OnPreForwardsSolve
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (None)

void UControlRigComponent::OnPreForwardsSolve(class UControlRigComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "OnPreForwardsSolve");

	Params::UControlRigComponent_OnPreForwardsSolve_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.OnPreConstruction
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (None)

void UControlRigComponent::OnPreConstruction(class UControlRigComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "OnPreConstruction");

	Params::UControlRigComponent_OnPreConstruction_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.OnPostInitialize
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (None)

void UControlRigComponent::OnPostInitialize(class UControlRigComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "OnPostInitialize");

	Params::UControlRigComponent_OnPostInitialize_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.OnPostForwardsSolve
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (None)

void UControlRigComponent::OnPostForwardsSolve(class UControlRigComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "OnPostForwardsSolve");

	Params::UControlRigComponent_OnPostForwardsSolve_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.OnPostConstruction
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UControlRigComponent*        Component                                                        (None)

void UControlRigComponent::OnPostConstruction(class UControlRigComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "OnPostConstruction");

	Params::UControlRigComponent_OnPostConstruction_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UControlRigComponent::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "Initialize");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.GetSpaceTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SpaceName                                                        (None)
// enum class EControlRigComponentSpaceSpace                                                            (None)
// struct FTransform                  ReturnValue                                                      (None)

void UControlRigComponent::GetSpaceTransform(class FName SpaceName, enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetSpaceTransform");

	Params::UControlRigComponent_GetSpaceTransform_Params Parms{};

	Parms.SpaceName = SpaceName;
	Parms.Space = Space;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.GetInitialSpaceTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SpaceName                                                        (None)
// enum class EControlRigComponentSpaceSpace                                                            (None)
// struct FTransform                  ReturnValue                                                      (None)

void UControlRigComponent::GetInitialSpaceTransform(class FName SpaceName, enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetInitialSpaceTransform");

	Params::UControlRigComponent_GetInitialSpaceTransform_Params Parms{};

	Parms.SpaceName = SpaceName;
	Parms.Space = Space;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.GetInitialBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        BoneName                                                         (None)
// enum class EControlRigComponentSpaceSpace                                                            (None)
// struct FTransform                  ReturnValue                                                      (None)

void UControlRigComponent::GetInitialBoneTransform(class FName BoneName, enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetInitialBoneTransform");

	Params::UControlRigComponent_GetInitialBoneTransform_Params Parms{};

	Parms.BoneName = BoneName;
	Parms.Space = Space;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.GetElementNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ERigElementType         ElementType                                                      (None)
// TArray<class FName>                ReturnValue                                                      (None)

void UControlRigComponent::GetElementNames(enum class ERigElementType ElementType, const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetElementNames");

	Params::UControlRigComponent_GetElementNames_Params Parms{};

	Parms.ElementType = ElementType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.GetControlVector2D
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (None)
// struct FVector2D                   ReturnValue                                                      (None)

void UControlRigComponent::GetControlVector2D(class FName ControlName, const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlVector2D");

	Params::UControlRigComponent_GetControlVector2D_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.GetControlTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (None)
// enum class EControlRigComponentSpaceSpace                                                            (None)
// struct FTransform                  ReturnValue                                                      (None)

void UControlRigComponent::GetControlTransform(class FName ControlName, enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlTransform");

	Params::UControlRigComponent_GetControlTransform_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.Space = Space;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.GetControlScale
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (None)
// enum class EControlRigComponentSpaceSpace                                                            (None)
// struct FVector                     ReturnValue                                                      (None)

void UControlRigComponent::GetControlScale(class FName ControlName, enum class EControlRigComponentSpace Space, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlScale");

	Params::UControlRigComponent_GetControlScale_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.Space = Space;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.GetControlRotator
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (None)
// enum class EControlRigComponentSpaceSpace                                                            (None)
// struct FRotator                    ReturnValue                                                      (None)

void UControlRigComponent::GetControlRotator(class FName ControlName, enum class EControlRigComponentSpace Space, const struct FRotator& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlRotator");

	Params::UControlRigComponent_GetControlRotator_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.Space = Space;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.GetControlRig
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UControlRig*                 ReturnValue                                                      (None)

void UControlRigComponent::GetControlRig(class UControlRig* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlRig");

	Params::UControlRigComponent_GetControlRig_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.GetControlPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (None)
// enum class EControlRigComponentSpaceSpace                                                            (None)
// struct FVector                     ReturnValue                                                      (None)

void UControlRigComponent::GetControlPosition(class FName ControlName, enum class EControlRigComponentSpace Space, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlPosition");

	Params::UControlRigComponent_GetControlPosition_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.Space = Space;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.GetControlOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        ControlName                                                      (None)
// enum class EControlRigComponentSpaceSpace                                                            (None)
// struct FTransform                  ReturnValue                                                      (None)

void UControlRigComponent::GetControlOffset(class FName ControlName, enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlOffset");

	Params::UControlRigComponent_GetControlOffset_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.Space = Space;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.GetControlInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (None)
// int32                              ReturnValue                                                      (None)

void UControlRigComponent::GetControlInt(class FName ControlName, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlInt");

	Params::UControlRigComponent_GetControlInt_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.GetControlFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (None)
// float                              ReturnValue                                                      (None)

void UControlRigComponent::GetControlFloat(class FName ControlName, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlFloat");

	Params::UControlRigComponent_GetControlFloat_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.GetControlBool
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ControlName                                                      (None)
// bool                               ReturnValue                                                      (None)

void UControlRigComponent::GetControlBool(class FName ControlName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetControlBool");

	Params::UControlRigComponent_GetControlBool_Params Parms{};

	Parms.ControlName = ControlName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.GetBoneTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        BoneName                                                         (None)
// enum class EControlRigComponentSpaceSpace                                                            (None)
// struct FTransform                  ReturnValue                                                      (None)

void UControlRigComponent::GetBoneTransform(class FName BoneName, enum class EControlRigComponentSpace Space, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetBoneTransform");

	Params::UControlRigComponent_GetBoneTransform_Params Parms{};

	Parms.BoneName = BoneName;
	Parms.Space = Space;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.GetAbsoluteTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void UControlRigComponent::GetAbsoluteTime(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "GetAbsoluteTime");

	Params::UControlRigComponent_GetAbsoluteTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.DoesElementExist
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        Name                                                             (None)
// enum class ERigElementType         ElementType                                                      (None)
// bool                               ReturnValue                                                      (None)

void UControlRigComponent::DoesElementExist(class FName Name, enum class ERigElementType ElementType, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "DoesElementExist");

	Params::UControlRigComponent_DoesElementExist_Params Parms{};

	Parms.Name = Name;
	Parms.ElementType = ElementType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.ClearMappedElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UControlRigComponent::ClearMappedElements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "ClearMappedElements");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.CanExecute
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UControlRigComponent::CanExecute(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "CanExecute");

	Params::UControlRigComponent_CanExecute_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (None)
// TArray<struct FControlRigComponentMappedBone>Bones                                                            (None)
// TArray<struct FControlRigComponentMappedCurve>Curves                                                           (None)

void UControlRigComponent::AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, const TArray<struct FControlRigComponentMappedBone>& Bones, const TArray<struct FControlRigComponentMappedCurve>& Curves)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "AddMappedSkeletalMesh");

	Params::UControlRigComponent_AddMappedSkeletalMesh_Params Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.Bones = Bones;
	Parms.Curves = Curves;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.AddMappedElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FControlRigComponentMappedElement>NewMappedElements                                                (None)

void UControlRigComponent::AddMappedElements(const TArray<struct FControlRigComponentMappedElement>& NewMappedElements)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "AddMappedElements");

	Params::UControlRigComponent_AddMappedElements_Params Parms{};

	Parms.NewMappedElements = NewMappedElements;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.AddMappedComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FControlRigComponentMappedComponent>Components                                                       (None)

void UControlRigComponent::AddMappedComponents(const TArray<struct FControlRigComponentMappedComponent>& Components)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "AddMappedComponents");

	Params::UControlRigComponent_AddMappedComponents_Params Parms{};

	Parms.Components = Components;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (None)

void UControlRigComponent::AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigComponent", "AddMappedCompleteSkeletalMesh");

	Params::UControlRigComponent_AddMappedCompleteSkeletalMesh_Params Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ControlRig.ControlRigControlActor
// (Actor)

class UClass* AControlRigControlActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigControlActor");

	return Clss;
}


// ControlRigControlActor ControlRig.Default__ControlRigControlActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AControlRigControlActor* AControlRigControlActor::GetDefaultObj()
{
	static class AControlRigControlActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AControlRigControlActor*>(AControlRigControlActor::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlRig.ControlRigControlActor.ResetControlActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AControlRigControlActor::ResetControlActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigControlActor", "ResetControlActor");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigControlActor.Refresh
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AControlRigControlActor::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigControlActor", "Refresh");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigControlActor.Clear
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AControlRigControlActor::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigControlActor", "Clear");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ControlRig.ControlRigShapeActor
// (Actor)

class UClass* AControlRigShapeActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigShapeActor");

	return Clss;
}


// ControlRigShapeActor ControlRig.Default__ControlRigShapeActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AControlRigShapeActor* AControlRigShapeActor::GetDefaultObj()
{
	static class AControlRigShapeActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AControlRigShapeActor*>(AControlRigShapeActor::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlRig.ControlRigShapeActor.SetSelected
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInSelected                                                      (None)

void AControlRigShapeActor::SetSelected(bool bInSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "SetSelected");

	Params::AControlRigShapeActor_SetSelected_Params Parms{};

	Parms.bInSelected = bInSelected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigShapeActor.SetSelectable
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInSelectable                                                    (None)

void AControlRigShapeActor::SetSelectable(bool bInSelectable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "SetSelectable");

	Params::AControlRigShapeActor_SetSelectable_Params Parms{};

	Parms.bInSelectable = bInSelectable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigShapeActor.SetHovered
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInHovered                                                       (None)

void AControlRigShapeActor::SetHovered(bool bInHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "SetHovered");

	Params::AControlRigShapeActor_SetHovered_Params Parms{};

	Parms.bInHovered = bInHovered;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigShapeActor.SetGlobalTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  InTransform                                                      (None)

void AControlRigShapeActor::SetGlobalTransform(const struct FTransform& InTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "SetGlobalTransform");

	Params::AControlRigShapeActor_SetGlobalTransform_Params Parms{};

	Parms.InTransform = InTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigShapeActor.SetEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInEnabled                                                       (None)

void AControlRigShapeActor::SetEnabled(bool bInEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "SetEnabled");

	Params::AControlRigShapeActor_SetEnabled_Params Parms{};

	Parms.bInEnabled = bInEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigShapeActor.OnTransformChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform                  NewTransform                                                     (None)

void AControlRigShapeActor::OnTransformChanged(const struct FTransform& NewTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "OnTransformChanged");

	Params::AControlRigShapeActor_OnTransformChanged_Params Parms{};

	Parms.NewTransform = NewTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlRig.ControlRigShapeActor.OnSelectionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (None)

void AControlRigShapeActor::OnSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "OnSelectionChanged");

	Params::AControlRigShapeActor_OnSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlRig.ControlRigShapeActor.OnManipulatingChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsManipulating                                                  (None)

void AControlRigShapeActor::OnManipulatingChanged(bool bIsManipulating)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "OnManipulatingChanged");

	Params::AControlRigShapeActor_OnManipulatingChanged_Params Parms{};

	Parms.bIsManipulating = bIsManipulating;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlRig.ControlRigShapeActor.OnHoveredChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (None)

void AControlRigShapeActor::OnHoveredChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "OnHoveredChanged");

	Params::AControlRigShapeActor_OnHoveredChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlRig.ControlRigShapeActor.OnEnabledChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsEnabled                                                       (None)

void AControlRigShapeActor::OnEnabledChanged(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "OnEnabledChanged");

	Params::AControlRigShapeActor_OnEnabledChanged_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ControlRig.ControlRigShapeActor.IsSelectedInEditor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void AControlRigShapeActor::IsSelectedInEditor(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "IsSelectedInEditor");

	Params::AControlRigShapeActor_IsSelectedInEditor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigShapeActor.IsHovered
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void AControlRigShapeActor::IsHovered(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "IsHovered");

	Params::AControlRigShapeActor_IsHovered_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigShapeActor.IsEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void AControlRigShapeActor::IsEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "IsEnabled");

	Params::AControlRigShapeActor_IsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigShapeActor.GetGlobalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (None)

void AControlRigShapeActor::GetGlobalTransform(const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigShapeActor", "GetGlobalTransform");

	Params::AControlRigShapeActor_GetGlobalTransform_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ControlRig.ControlRigShapeLibrary
// (None)

class UClass* UControlRigShapeLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigShapeLibrary");

	return Clss;
}


// ControlRigShapeLibrary ControlRig.Default__ControlRigShapeLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigShapeLibrary* UControlRigShapeLibrary::GetDefaultObj()
{
	static class UControlRigShapeLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigShapeLibrary*>(UControlRigShapeLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigTestData
// (None)

class UClass* UControlRigTestData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigTestData");

	return Clss;
}


// ControlRigTestData ControlRig.Default__ControlRigTestData
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigTestData* UControlRigTestData::GetDefaultObj()
{
	static class UControlRigTestData* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigTestData*>(UControlRigTestData::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlRig.ControlRigTestData.SetupReplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*                 InControlRig                                                     (None)
// bool                               bGroundTruth                                                     (None)
// bool                               ReturnValue                                                      (None)

void UControlRigTestData::SetupReplay(class UControlRig* InControlRig, bool bGroundTruth, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "SetupReplay");

	Params::UControlRigTestData_SetupReplay_Params Parms{};

	Parms.InControlRig = InControlRig;
	Parms.bGroundTruth = bGroundTruth;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigTestData.ReleaseReplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UControlRigTestData::ReleaseReplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "ReleaseReplay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigTestData.Record
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*                 InControlRig                                                     (None)
// double                             InRecordingDuration                                              (None)
// bool                               ReturnValue                                                      (None)

void UControlRigTestData::Record(class UControlRig* InControlRig, double InRecordingDuration, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "Record");

	Params::UControlRigTestData_Record_Params Parms{};

	Parms.InControlRig = InControlRig;
	Parms.InRecordingDuration = InRecordingDuration;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigTestData.IsReplaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UControlRigTestData::IsReplaying(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "IsReplaying");

	Params::UControlRigTestData_IsReplaying_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigTestData.IsRecording
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UControlRigTestData::IsRecording(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "IsRecording");

	Params::UControlRigTestData_IsRecording_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigTestData.GetTimeRange
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bInput                                                           (None)
// struct FVector2D                   ReturnValue                                                      (None)

void UControlRigTestData::GetTimeRange(bool bInput, const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "GetTimeRange");

	Params::UControlRigTestData_GetTimeRange_Params Parms{};

	Parms.bInput = bInput;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigTestData.GetPlaybackMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EControlRigTestDataPlaybackModeReturnValue                                                      (None)

void UControlRigTestData::GetPlaybackMode(enum class EControlRigTestDataPlaybackMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "GetPlaybackMode");

	Params::UControlRigTestData_GetPlaybackMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigTestData.GetFrameIndexForTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// double                             InSeconds                                                        (None)
// bool                               bInput                                                           (None)
// int32                              ReturnValue                                                      (None)

void UControlRigTestData::GetFrameIndexForTime(double InSeconds, bool bInput, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "GetFrameIndexForTime");

	Params::UControlRigTestData_GetFrameIndexForTime_Params Parms{};

	Parms.InSeconds = InSeconds;
	Parms.bInput = bInput;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigTestData.CreateNewAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InDesiredPackagePath                                             (None)
// class FString                      InBlueprintPathName                                              (None)
// class UControlRigTestData*         ReturnValue                                                      (None)

void UControlRigTestData::CreateNewAsset(const class FString& InDesiredPackagePath, const class FString& InBlueprintPathName, class UControlRigTestData* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTestData", "CreateNewAsset");

	Params::UControlRigTestData_CreateNewAsset_Params Parms{};

	Parms.InDesiredPackagePath = InDesiredPackagePath;
	Parms.InBlueprintPathName = InBlueprintPathName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ControlRig.ControlRigValidator
// (None)

class UClass* UControlRigValidator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigValidator");

	return Clss;
}


// ControlRigValidator ControlRig.Default__ControlRigValidator
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigValidator* UControlRigValidator::GetDefaultObj()
{
	static class UControlRigValidator* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigValidator*>(UControlRigValidator::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigValidationPass
// (None)

class UClass* UControlRigValidationPass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigValidationPass");

	return Clss;
}


// ControlRigValidationPass ControlRig.Default__ControlRigValidationPass
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigValidationPass* UControlRigValidationPass::GetDefaultObj()
{
	static class UControlRigValidationPass* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigValidationPass*>(UControlRigValidationPass::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.AdditiveControlRig
// (None)

class UClass* UAdditiveControlRig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AdditiveControlRig");

	return Clss;
}


// AdditiveControlRig ControlRig.Default__AdditiveControlRig
// (Public, ClassDefaultObject, ArchetypeObject)

class UAdditiveControlRig* UAdditiveControlRig::GetDefaultObj()
{
	static class UAdditiveControlRig* Default = nullptr;

	if (!Default)
		Default = static_cast<UAdditiveControlRig*>(UAdditiveControlRig::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.FKControlRig
// (None)

class UClass* UFKControlRig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FKControlRig");

	return Clss;
}


// FKControlRig ControlRig.Default__FKControlRig
// (Public, ClassDefaultObject, ArchetypeObject)

class UFKControlRig* UFKControlRig::GetDefaultObj()
{
	static class UFKControlRig* Default = nullptr;

	if (!Default)
		Default = static_cast<UFKControlRig*>(UFKControlRig::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.RigHierarchyController
// (None)

class UClass* URigHierarchyController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigHierarchyController");

	return Clss;
}


// RigHierarchyController ControlRig.Default__RigHierarchyController
// (Public, ClassDefaultObject, ArchetypeObject)

class URigHierarchyController* URigHierarchyController::GetDefaultObj()
{
	static class URigHierarchyController* Default = nullptr;

	if (!Default)
		Default = static_cast<URigHierarchyController*>(URigHierarchyController::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlRig.RigHierarchyController.SetSelection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FRigElementKey>      InKeys                                                           (None)
// bool                               bPrintPythonCommand                                              (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchyController::SetSelection(const TArray<struct FRigElementKey>& InKeys, bool bPrintPythonCommand, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "SetSelection");

	Params::URigHierarchyController_SetSelection_Params Parms{};

	Parms.InKeys = InKeys;
	Parms.bPrintPythonCommand = bPrintPythonCommand;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.SetParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (None)
// struct FRigElementKey              InParent                                                         (None)
// bool                               bMaintainGlobalTransform                                         (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommand                                              (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchyController::SetParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "SetParent");

	Params::URigHierarchyController_SetParent_Params Parms{};

	Parms.InChild = InChild;
	Parms.InParent = InParent;
	Parms.bMaintainGlobalTransform = bMaintainGlobalTransform;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.SetHierarchy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URigHierarchy*               InHierarchy                                                      (None)

void URigHierarchyController::SetHierarchy(class URigHierarchy* InHierarchy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "SetHierarchy");

	Params::URigHierarchyController_SetHierarchy_Params Parms{};

	Parms.InHierarchy = InHierarchy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.SetDisplayName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InControl                                                        (None)
// class FName                        InDisplayName                                                    (None)
// bool                               bRenameElement                                                   (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommand                                              (None)
// class FName                        ReturnValue                                                      (None)

void URigHierarchyController::SetDisplayName(const struct FRigElementKey& InControl, class FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand, class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "SetDisplayName");

	Params::URigHierarchyController_SetDisplayName_Params Parms{};

	Parms.InControl = InControl;
	Parms.InDisplayName = InDisplayName;
	Parms.bRenameElement = bRenameElement;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.SetControlSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// struct FRigControlSettings         InSettings                                                       (None)
// bool                               bSetupUndo                                                       (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchyController::SetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "SetControlSettings");

	Params::URigHierarchyController_SetControlSettings_Params Parms{};

	Parms.InKey = InKey;
	Parms.InSettings = InSettings;
	Parms.bSetupUndo = bSetupUndo;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.SelectElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// bool                               bSelect                                                          (None)
// bool                               bClearSelection                                                  (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchyController::SelectElement(const struct FRigElementKey& InKey, bool bSelect, bool bClearSelection, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "SelectElement");

	Params::URigHierarchyController_SelectElement_Params Parms{};

	Parms.InKey = InKey;
	Parms.bSelect = bSelect;
	Parms.bClearSelection = bClearSelection;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.ReorderElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InElement                                                        (None)
// int32                              InIndex                                                          (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommand                                              (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchyController::ReorderElement(const struct FRigElementKey& InElement, int32 InIndex, bool bSetupUndo, bool bPrintPythonCommand, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "ReorderElement");

	Params::URigHierarchyController_ReorderElement_Params Parms{};

	Parms.InElement = InElement;
	Parms.InIndex = InIndex;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.RenameElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InElement                                                        (None)
// class FName                        InName                                                           (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommand                                              (None)
// bool                               bClearSelection                                                  (None)
// struct FRigElementKey              ReturnValue                                                      (None)

void URigHierarchyController::RenameElement(const struct FRigElementKey& InElement, class FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "RenameElement");

	Params::URigHierarchyController_RenameElement_Params Parms{};

	Parms.InElement = InElement;
	Parms.InName = InName;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;
	Parms.bClearSelection = bClearSelection;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.RemoveParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (None)
// struct FRigElementKey              InParent                                                         (None)
// bool                               bMaintainGlobalTransform                                         (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommand                                              (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchyController::RemoveParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "RemoveParent");

	Params::URigHierarchyController_RemoveParent_Params Parms{};

	Parms.InChild = InChild;
	Parms.InParent = InParent;
	Parms.bMaintainGlobalTransform = bMaintainGlobalTransform;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.RemoveElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InElement                                                        (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommand                                              (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchyController::RemoveElement(const struct FRigElementKey& InElement, bool bSetupUndo, bool bPrintPythonCommand, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "RemoveElement");

	Params::URigHierarchyController_RemoveElement_Params Parms{};

	Parms.InElement = InElement;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.RemoveAllParents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (None)
// bool                               bMaintainGlobalTransform                                         (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommand                                              (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchyController::RemoveAllParents(const struct FRigElementKey& InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "RemoveAllParents");

	Params::URigHierarchyController_RemoveAllParents_Params Parms{};

	Parms.InChild = InChild;
	Parms.bMaintainGlobalTransform = bMaintainGlobalTransform;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.MirrorElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FRigElementKey>      InKeys                                                           (None)
// struct FRigVMMirrorSettings        InSettings                                                       (None)
// bool                               bSelectNewElements                                               (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommands                                             (None)
// TArray<struct FRigElementKey>      ReturnValue                                                      (None)

void URigHierarchyController::MirrorElements(const TArray<struct FRigElementKey>& InKeys, const struct FRigVMMirrorSettings& InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "MirrorElements");

	Params::URigHierarchyController_MirrorElements_Params Parms{};

	Parms.InKeys = InKeys;
	Parms.InSettings = InSettings;
	Parms.bSelectNewElements = bSelectNewElements;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.ImportFromText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InContent                                                        (None)
// bool                               bReplaceExistingElements                                         (None)
// bool                               bSelectNewElements                                               (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommands                                             (None)
// TArray<struct FRigElementKey>      ReturnValue                                                      (None)

void URigHierarchyController::ImportFromText(const class FString& InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "ImportFromText");

	Params::URigHierarchyController_ImportFromText_Params Parms{};

	Parms.InContent = InContent;
	Parms.bReplaceExistingElements = bReplaceExistingElements;
	Parms.bSelectNewElements = bSelectNewElements;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.ImportCurves
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeleton*                   InSkeleton                                                       (None)
// class FName                        InNameSpace                                                      (None)
// bool                               bSelectCurves                                                    (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommand                                              (None)
// TArray<struct FRigElementKey>      ReturnValue                                                      (None)

void URigHierarchyController::ImportCurves(class USkeleton* InSkeleton, class FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "ImportCurves");

	Params::URigHierarchyController_ImportCurves_Params Parms{};

	Parms.InSkeleton = InSkeleton;
	Parms.InNameSpace = InNameSpace;
	Parms.bSelectCurves = bSelectCurves;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.ImportBones
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeleton*                   InSkeleton                                                       (None)
// class FName                        InNameSpace                                                      (None)
// bool                               bReplaceExistingBones                                            (None)
// bool                               bRemoveObsoleteBones                                             (None)
// bool                               bSelectBones                                                     (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommand                                              (None)
// TArray<struct FRigElementKey>      ReturnValue                                                      (None)

void URigHierarchyController::ImportBones(class USkeleton* InSkeleton, class FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "ImportBones");

	Params::URigHierarchyController_ImportBones_Params Parms{};

	Parms.InSkeleton = InSkeleton;
	Parms.InNameSpace = InNameSpace;
	Parms.bReplaceExistingBones = bReplaceExistingBones;
	Parms.bRemoveObsoleteBones = bRemoveObsoleteBones;
	Parms.bSelectBones = bSelectBones;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.GetHierarchy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class URigHierarchy*               ReturnValue                                                      (None)

void URigHierarchyController::GetHierarchy(class URigHierarchy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "GetHierarchy");

	Params::URigHierarchyController_GetHierarchy_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.GetControlSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// struct FRigControlSettings         ReturnValue                                                      (None)

void URigHierarchyController::GetControlSettings(const struct FRigElementKey& InKey, const struct FRigControlSettings& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "GetControlSettings");

	Params::URigHierarchyController_GetControlSettings_Params Parms{};

	Parms.InKey = InKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.ExportToText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRigElementKey>      InKeys                                                           (None)
// class FString                      ReturnValue                                                      (None)

void URigHierarchyController::ExportToText(const TArray<struct FRigElementKey>& InKeys, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "ExportToText");

	Params::URigHierarchyController_ExportToText_Params Parms{};

	Parms.InKeys = InKeys;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.ExportSelectionToText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (None)

void URigHierarchyController::ExportSelectionToText(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "ExportSelectionToText");

	Params::URigHierarchyController_ExportSelectionToText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.DuplicateElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FRigElementKey>      InKeys                                                           (None)
// bool                               bSelectNewElements                                               (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommands                                             (None)
// TArray<struct FRigElementKey>      ReturnValue                                                      (None)

void URigHierarchyController::DuplicateElements(const TArray<struct FRigElementKey>& InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands, const TArray<struct FRigElementKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "DuplicateElements");

	Params::URigHierarchyController_DuplicateElements_Params Parms{};

	Parms.InKeys = InKeys;
	Parms.bSelectNewElements = bSelectNewElements;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommands = bPrintPythonCommands;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.DeselectElement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InKey                                                            (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchyController::DeselectElement(const struct FRigElementKey& InKey, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "DeselectElement");

	Params::URigHierarchyController_DeselectElement_Params Parms{};

	Parms.InKey = InKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (None)

void URigHierarchyController::ClearSelection(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "ClearSelection");

	Params::URigHierarchyController_ClearSelection_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.AddRigidBody
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (None)
// struct FRigElementKey              InParent                                                         (None)
// struct FRigRigidBodySettings       InSettings                                                       (None)
// struct FTransform                  InLocalTransform                                                 (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommand                                              (None)
// struct FRigElementKey              ReturnValue                                                      (None)

void URigHierarchyController::AddRigidBody(class FName InName, const struct FRigElementKey& InParent, const struct FRigRigidBodySettings& InSettings, const struct FTransform& InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "AddRigidBody");

	Params::URigHierarchyController_AddRigidBody_Params Parms{};

	Parms.InName = InName;
	Parms.InParent = InParent;
	Parms.InSettings = InSettings;
	Parms.InLocalTransform = InLocalTransform;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.AddParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRigElementKey              InChild                                                          (None)
// struct FRigElementKey              InParent                                                         (None)
// float                              InWeight                                                         (None)
// bool                               bMaintainGlobalTransform                                         (None)
// bool                               bSetupUndo                                                       (None)
// bool                               ReturnValue                                                      (None)

void URigHierarchyController::AddParent(const struct FRigElementKey& InChild, const struct FRigElementKey& InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "AddParent");

	Params::URigHierarchyController_AddParent_Params Parms{};

	Parms.InChild = InChild;
	Parms.InParent = InParent;
	Parms.InWeight = InWeight;
	Parms.bMaintainGlobalTransform = bMaintainGlobalTransform;
	Parms.bSetupUndo = bSetupUndo;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.AddNull
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (None)
// struct FRigElementKey              InParent                                                         (None)
// struct FTransform                  InTransform                                                      (None)
// bool                               bTransformInGlobal                                               (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommand                                              (None)
// struct FRigElementKey              ReturnValue                                                      (None)

void URigHierarchyController::AddNull(class FName InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "AddNull");

	Params::URigHierarchyController_AddNull_Params Parms{};

	Parms.InName = InName;
	Parms.InParent = InParent;
	Parms.InTransform = InTransform;
	Parms.bTransformInGlobal = bTransformInGlobal;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.AddCurve
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (None)
// float                              InValue                                                          (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommand                                              (None)
// struct FRigElementKey              ReturnValue                                                      (None)

void URigHierarchyController::AddCurve(class FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "AddCurve");

	Params::URigHierarchyController_AddCurve_Params Parms{};

	Parms.InName = InName;
	Parms.InValue = InValue;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.AddControl_ForBlueprint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (None)
// struct FRigElementKey              InParent                                                         (None)
// struct FRigControlSettings         InSettings                                                       (None)
// struct FRigControlValue            InValue                                                          (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommand                                              (None)
// struct FRigElementKey              ReturnValue                                                      (None)

void URigHierarchyController::AddControl_ForBlueprint(class FName InName, const struct FRigElementKey& InParent, const struct FRigControlSettings& InSettings, const struct FRigControlValue& InValue, bool bSetupUndo, bool bPrintPythonCommand, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "AddControl_ForBlueprint");

	Params::URigHierarchyController_AddControl_ForBlueprint_Params Parms{};

	Parms.InName = InName;
	Parms.InParent = InParent;
	Parms.InSettings = InSettings;
	Parms.InValue = InValue;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.AddBone
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (None)
// struct FRigElementKey              InParent                                                         (None)
// struct FTransform                  InTransform                                                      (None)
// bool                               bTransformInGlobal                                               (None)
// enum class ERigBoneType            InBoneType                                                       (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommand                                              (None)
// struct FRigElementKey              ReturnValue                                                      (None)

void URigHierarchyController::AddBone(class FName InName, const struct FRigElementKey& InParent, const struct FTransform& InTransform, bool bTransformInGlobal, enum class ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "AddBone");

	Params::URigHierarchyController_AddBone_Params Parms{};

	Parms.InName = InName;
	Parms.InParent = InParent;
	Parms.InTransform = InTransform;
	Parms.bTransformInGlobal = bTransformInGlobal;
	Parms.InBoneType = InBoneType;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.RigHierarchyController.AddAnimationChannel_ForBlueprint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (None)
// struct FRigElementKey              InParentControl                                                  (None)
// struct FRigControlSettings         InSettings                                                       (None)
// bool                               bSetupUndo                                                       (None)
// bool                               bPrintPythonCommand                                              (None)
// struct FRigElementKey              ReturnValue                                                      (None)

void URigHierarchyController::AddAnimationChannel_ForBlueprint(class FName InName, const struct FRigElementKey& InParentControl, const struct FRigControlSettings& InSettings, bool bSetupUndo, bool bPrintPythonCommand, const struct FRigElementKey& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigHierarchyController", "AddAnimationChannel_ForBlueprint");

	Params::URigHierarchyController_AddAnimationChannel_ForBlueprint_Params Parms{};

	Parms.InName = InName;
	Parms.InParentControl = InParentControl;
	Parms.InSettings = InSettings;
	Parms.bSetupUndo = bSetupUndo;
	Parms.bPrintPythonCommand = bPrintPythonCommand;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ControlRig.ControlRigLayerInstance
// (None)

class UClass* UControlRigLayerInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigLayerInstance");

	return Clss;
}


// ControlRigLayerInstance ControlRig.Default__ControlRigLayerInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigLayerInstance* UControlRigLayerInstance::GetDefaultObj()
{
	static class UControlRigLayerInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigLayerInstance*>(UControlRigLayerInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigObjectHolder
// (None)

class UClass* UControlRigObjectHolder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigObjectHolder");

	return Clss;
}


// ControlRigObjectHolder ControlRig.Default__ControlRigObjectHolder
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigObjectHolder* UControlRigObjectHolder::GetDefaultObj()
{
	static class UControlRigObjectHolder* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigObjectHolder*>(UControlRigObjectHolder::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigSequence
// (None)

class UClass* UControlRigSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigSequence");

	return Clss;
}


// ControlRigSequence ControlRig.Default__ControlRigSequence
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigSequence* UControlRigSequence::GetDefaultObj()
{
	static class UControlRigSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigSequence*>(UControlRigSequence::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.MovieSceneControlRigParameterSection
// (None)

class UClass* UMovieSceneControlRigParameterSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneControlRigParameterSection");

	return Clss;
}


// MovieSceneControlRigParameterSection ControlRig.Default__MovieSceneControlRigParameterSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneControlRigParameterSection* UMovieSceneControlRigParameterSection::GetDefaultObj()
{
	static class UMovieSceneControlRigParameterSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneControlRigParameterSection*>(UMovieSceneControlRigParameterSection::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.MovieSceneControlRigParameterTrack
// (None)

class UClass* UMovieSceneControlRigParameterTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneControlRigParameterTrack");

	return Clss;
}


// MovieSceneControlRigParameterTrack ControlRig.Default__MovieSceneControlRigParameterTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneControlRigParameterTrack* UMovieSceneControlRigParameterTrack::GetDefaultObj()
{
	static class UMovieSceneControlRigParameterTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneControlRigParameterTrack*>(UMovieSceneControlRigParameterTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigSettings
// (None)

class UClass* UControlRigSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigSettings");

	return Clss;
}


// ControlRigSettings ControlRig.Default__ControlRigSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigSettings* UControlRigSettings::GetDefaultObj()
{
	static class UControlRigSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigSettings*>(UControlRigSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigEditorSettings
// (None)

class UClass* UControlRigEditorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigEditorSettings");

	return Clss;
}


// ControlRigEditorSettings ControlRig.Default__ControlRigEditorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigEditorSettings* UControlRigEditorSettings::GetDefaultObj()
{
	static class UControlRigEditorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigEditorSettings*>(UControlRigEditorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigPoseAsset
// (None)

class UClass* UControlRigPoseAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigPoseAsset");

	return Clss;
}


// ControlRigPoseAsset ControlRig.Default__ControlRigPoseAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigPoseAsset* UControlRigPoseAsset::GetDefaultObj()
{
	static class UControlRigPoseAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigPoseAsset*>(UControlRigPoseAsset::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlRig.ControlRigPoseAsset.SelectControls
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*                 InControlRig                                                     (None)
// bool                               bDoMirror                                                        (None)

void UControlRigPoseAsset::SelectControls(class UControlRig* InControlRig, bool bDoMirror)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigPoseAsset", "SelectControls");

	Params::UControlRigPoseAsset_SelectControls_Params Parms{};

	Parms.InControlRig = InControlRig;
	Parms.bDoMirror = bDoMirror;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigPoseAsset.SavePose
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*                 InControlRig                                                     (None)
// bool                               bUseAll                                                          (None)

void UControlRigPoseAsset::SavePose(class UControlRig* InControlRig, bool bUseAll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigPoseAsset", "SavePose");

	Params::UControlRigPoseAsset_SavePose_Params Parms{};

	Parms.InControlRig = InControlRig;
	Parms.bUseAll = bUseAll;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigPoseAsset.ReplaceControlName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        CurrentName                                                      (None)
// class FName                        NewName                                                          (None)

void UControlRigPoseAsset::ReplaceControlName(class FName CurrentName, class FName NewName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigPoseAsset", "ReplaceControlName");

	Params::UControlRigPoseAsset_ReplaceControlName_Params Parms{};

	Parms.CurrentName = CurrentName;
	Parms.NewName = NewName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigPoseAsset.PastePose
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UControlRig*                 InControlRig                                                     (None)
// bool                               bDoKey                                                           (None)
// bool                               bDoMirror                                                        (None)

void UControlRigPoseAsset::PastePose(class UControlRig* InControlRig, bool bDoKey, bool bDoMirror)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigPoseAsset", "PastePose");

	Params::UControlRigPoseAsset_PastePose_Params Parms{};

	Parms.InControlRig = InControlRig;
	Parms.bDoKey = bDoKey;
	Parms.bDoMirror = bDoMirror;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigPoseAsset.GetCurrentPose
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UControlRig*                 InControlRig                                                     (None)
// struct FControlRigControlPose      OutPose                                                          (None)

void UControlRigPoseAsset::GetCurrentPose(class UControlRig* InControlRig, const struct FControlRigControlPose& OutPose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigPoseAsset", "GetCurrentPose");

	Params::UControlRigPoseAsset_GetCurrentPose_Params Parms{};

	Parms.InControlRig = InControlRig;
	Parms.OutPose = OutPose;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigPoseAsset.GetControlNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (None)

void UControlRigPoseAsset::GetControlNames(const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigPoseAsset", "GetControlNames");

	Params::UControlRigPoseAsset_GetControlNames_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ControlRig.ControlRigPoseAsset.DoesMirrorMatch
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UControlRig*                 ControlRig                                                       (None)
// class FName                        ControlName                                                      (None)
// bool                               ReturnValue                                                      (None)

void UControlRigPoseAsset::DoesMirrorMatch(class UControlRig* ControlRig, class FName ControlName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigPoseAsset", "DoesMirrorMatch");

	Params::UControlRigPoseAsset_DoesMirrorMatch_Params Parms{};

	Parms.ControlRig = ControlRig;
	Parms.ControlName = ControlName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ControlRig.ControlRigPoseMirrorSettings
// (None)

class UClass* UControlRigPoseMirrorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigPoseMirrorSettings");

	return Clss;
}


// ControlRigPoseMirrorSettings ControlRig.Default__ControlRigPoseMirrorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigPoseMirrorSettings* UControlRigPoseMirrorSettings::GetDefaultObj()
{
	static class UControlRigPoseMirrorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigPoseMirrorSettings*>(UControlRigPoseMirrorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigPoseProjectSettings
// (None)

class UClass* UControlRigPoseProjectSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigPoseProjectSettings");

	return Clss;
}


// ControlRigPoseProjectSettings ControlRig.Default__ControlRigPoseProjectSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigPoseProjectSettings* UControlRigPoseProjectSettings::GetDefaultObj()
{
	static class UControlRigPoseProjectSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigPoseProjectSettings*>(UControlRigPoseProjectSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigSnapSettings
// (None)

class UClass* UControlRigSnapSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigSnapSettings");

	return Clss;
}


// ControlRigSnapSettings ControlRig.Default__ControlRigSnapSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigSnapSettings* UControlRigSnapSettings::GetDefaultObj()
{
	static class UControlRigSnapSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigSnapSettings*>(UControlRigSnapSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class ControlRig.ControlRigWorkflowOptions
// (None)

class UClass* UControlRigWorkflowOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigWorkflowOptions");

	return Clss;
}


// ControlRigWorkflowOptions ControlRig.Default__ControlRigWorkflowOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigWorkflowOptions* UControlRigWorkflowOptions::GetDefaultObj()
{
	static class UControlRigWorkflowOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigWorkflowOptions*>(UControlRigWorkflowOptions::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlRig.ControlRigWorkflowOptions.EnsureAtLeastOneRigElementSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UControlRigWorkflowOptions::EnsureAtLeastOneRigElementSelected(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigWorkflowOptions", "EnsureAtLeastOneRigElementSelected");

	Params::UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ControlRig.ControlRigTransformWorkflowOptions
// (None)

class UClass* UControlRigTransformWorkflowOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigTransformWorkflowOptions");

	return Clss;
}


// ControlRigTransformWorkflowOptions ControlRig.Default__ControlRigTransformWorkflowOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigTransformWorkflowOptions* UControlRigTransformWorkflowOptions::GetDefaultObj()
{
	static class UControlRigTransformWorkflowOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigTransformWorkflowOptions*>(UControlRigTransformWorkflowOptions::StaticClass()->DefaultObject);

	return Default;
}


// Function ControlRig.ControlRigTransformWorkflowOptions.ProvideWorkflows
// (Final, Native, Public)
// Parameters:
// class UObject*                     InSubject                                                        (ZeroConstructor)
// TArray<struct FRigVMUserWorkflow>  ReturnValue                                                      (None)

void UControlRigTransformWorkflowOptions::ProvideWorkflows(class UObject* InSubject, const TArray<struct FRigVMUserWorkflow>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControlRigTransformWorkflowOptions", "ProvideWorkflows");

	Params::UControlRigTransformWorkflowOptions_ProvideWorkflows_Params Parms{};

	Parms.InSubject = InSubject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ControlRig.ControlRigNumericalValidationPass
// (None)

class UClass* UControlRigNumericalValidationPass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlRigNumericalValidationPass");

	return Clss;
}


// ControlRigNumericalValidationPass ControlRig.Default__ControlRigNumericalValidationPass
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlRigNumericalValidationPass* UControlRigNumericalValidationPass::GetDefaultObj()
{
	static class UControlRigNumericalValidationPass* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlRigNumericalValidationPass*>(UControlRigNumericalValidationPass::StaticClass()->DefaultObject);

	return Default;
}

}


