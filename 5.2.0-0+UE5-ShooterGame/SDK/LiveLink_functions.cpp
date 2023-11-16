#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LiveLink.LiveLinkBasicFrameInterpolationProcessor
// (None)

class UClass* ULiveLinkBasicFrameInterpolationProcessor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkBasicFrameInterpolationProcessor");

	return Clss;
}


// LiveLinkBasicFrameInterpolationProcessor LiveLink.Default__LiveLinkBasicFrameInterpolationProcessor
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkBasicFrameInterpolationProcessor* ULiveLinkBasicFrameInterpolationProcessor::GetDefaultObj()
{
	static class ULiveLinkBasicFrameInterpolationProcessor* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkBasicFrameInterpolationProcessor*>(ULiveLinkBasicFrameInterpolationProcessor::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
// (None)

class UClass* ULiveLinkAnimationFrameInterpolationProcessor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkAnimationFrameInterpolationProcessor");

	return Clss;
}


// LiveLinkAnimationFrameInterpolationProcessor LiveLink.Default__LiveLinkAnimationFrameInterpolationProcessor
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkAnimationFrameInterpolationProcessor* ULiveLinkAnimationFrameInterpolationProcessor::GetDefaultObj()
{
	static class ULiveLinkAnimationFrameInterpolationProcessor* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkAnimationFrameInterpolationProcessor*>(ULiveLinkAnimationFrameInterpolationProcessor::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkAnimationVirtualSubject
// (None)

class UClass* ULiveLinkAnimationVirtualSubject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkAnimationVirtualSubject");

	return Clss;
}


// LiveLinkAnimationVirtualSubject LiveLink.Default__LiveLinkAnimationVirtualSubject
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkAnimationVirtualSubject* ULiveLinkAnimationVirtualSubject::GetDefaultObj()
{
	static class ULiveLinkAnimationVirtualSubject* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkAnimationVirtualSubject*>(ULiveLinkAnimationVirtualSubject::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkBlueprintLibrary
// (None)

class UClass* ULiveLinkBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkBlueprintLibrary");

	return Clss;
}


// LiveLinkBlueprintLibrary LiveLink.Default__LiveLinkBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkBlueprintLibrary* ULiveLinkBlueprintLibrary::GetDefaultObj()
{
	static class ULiveLinkBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkBlueprintLibrary*>(ULiveLinkBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (None)
// TArray<class FName>                TransformNames                                                   (None)

void ULiveLinkBlueprintLibrary::TransformNames(const struct FSubjectFrameHandle& SubjectFrameHandle, const TArray<class FName>& TransformNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "TransformNames");

	Params::ULiveLinkBlueprintLibrary_TransformNames_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;
	Parms.TransformNames = TransformNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.TransformName
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (None)
// class FName                        Name                                                             (None)

void ULiveLinkBlueprintLibrary::TransformName(const struct FLiveLinkTransform& LiveLinkTransform, class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "TransformName");

	Params::ULiveLinkBlueprintLibrary_TransformName_Params Parms{};

	Parms.LiveLinkTransform = LiveLinkTransform;
	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectKey         SubjectKey                                                       (None)
// bool                               bEnabled                                                         (None)

void ULiveLinkBlueprintLibrary::SetLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "SetLiveLinkSubjectEnabled");

	Params::ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Params Parms{};

	Parms.SubjectKey = SubjectKey;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (None)
// bool                               ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::RemoveSource(const struct FLiveLinkSourceHandle& SourceHandle, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "RemoveSource");

	Params::ULiveLinkBlueprintLibrary_RemoveSource_Params Parms{};

	Parms.SourceHandle = SourceHandle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (None)
// struct FTransform                  Transform                                                        (None)

void ULiveLinkBlueprintLibrary::ParentBoneSpaceTransform(const struct FLiveLinkTransform& LiveLinkTransform, const struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "ParentBoneSpaceTransform");

	Params::ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Params Parms{};

	Parms.LiveLinkTransform = LiveLinkTransform;
	Parms.Transform = Transform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (None)
// int32                              ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::NumberOfTransforms(const struct FSubjectFrameHandle& SubjectFrameHandle, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "NumberOfTransforms");

	Params::ULiveLinkBlueprintLibrary_NumberOfTransforms_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectKey         SubjectKey                                                       (None)
// bool                               bForThisFrame                                                    (None)
// bool                               ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::IsSpecificLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bForThisFrame, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "IsSpecificLiveLinkSubjectEnabled");

	Params::ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Params Parms{};

	Parms.SubjectKey = SubjectKey;
	Parms.bForThisFrame = bForThisFrame;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (None)
// bool                               ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::IsSourceStillValid(const struct FLiveLinkSourceHandle& SourceHandle, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "IsSourceStillValid");

	Params::ULiveLinkBlueprintLibrary_IsSourceStillValid_Params Parms{};

	Parms.SourceHandle = SourceHandle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (None)
// bool                               ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::IsLiveLinkSubjectEnabled(const struct FLiveLinkSubjectName& SubjectName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "IsLiveLinkSubjectEnabled");

	Params::ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Params Parms{};

	Parms.SubjectName = SubjectName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.HasParent
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (None)
// bool                               ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::HasParent(const struct FLiveLinkTransform& LiveLinkTransform, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "HasParent");

	Params::ULiveLinkBlueprintLibrary_HasParent_Params Parms{};

	Parms.LiveLinkTransform = LiveLinkTransform;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (None)
// class FName                        TransformName                                                    (None)
// struct FLiveLinkTransform          LiveLinkTransform                                                (None)

void ULiveLinkBlueprintLibrary::GetTransformByName(const struct FSubjectFrameHandle& SubjectFrameHandle, class FName TransformName, const struct FLiveLinkTransform& LiveLinkTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetTransformByName");

	Params::ULiveLinkBlueprintLibrary_GetTransformByName_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;
	Parms.TransformName = TransformName;
	Parms.LiveLinkTransform = LiveLinkTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (None)
// int32                              TransformIndex                                                   (None)
// struct FLiveLinkTransform          LiveLinkTransform                                                (None)

void ULiveLinkBlueprintLibrary::GetTransformByIndex(const struct FSubjectFrameHandle& SubjectFrameHandle, int32 TransformIndex, const struct FLiveLinkTransform& LiveLinkTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetTransformByIndex");

	Params::ULiveLinkBlueprintLibrary_GetTransformByIndex_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;
	Parms.TransformIndex = TransformIndex;
	Parms.LiveLinkTransform = LiveLinkTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectKey         SubjectKey                                                       (None)
// class UClass*                      ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::GetSpecificLiveLinkSubjectRole(const struct FLiveLinkSubjectKey& SubjectKey, class UClass* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSpecificLiveLinkSubjectRole");

	Params::ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Params Parms{};

	Parms.SubjectKey = SubjectKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceTypeFromGuid
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       SourceGuid                                                       (None)
// class FText                        ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::GetSourceTypeFromGuid(const struct FGuid& SourceGuid, class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSourceTypeFromGuid");

	Params::ULiveLinkBlueprintLibrary_GetSourceTypeFromGuid_Params Parms{};

	Parms.SourceGuid = SourceGuid;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (None)
// class FText                        ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::GetSourceType(const struct FLiveLinkSourceHandle& SourceHandle, class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSourceType");

	Params::ULiveLinkBlueprintLibrary_GetSourceType_Params Parms{};

	Parms.SourceHandle = SourceHandle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (None)
// class FText                        ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::GetSourceStatus(const struct FLiveLinkSourceHandle& SourceHandle, class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSourceStatus");

	Params::ULiveLinkBlueprintLibrary_GetSourceStatus_Params Parms{};

	Parms.SourceHandle = SourceHandle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (None)
// class FText                        ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::GetSourceMachineName(const struct FLiveLinkSourceHandle& SourceHandle, class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSourceMachineName");

	Params::ULiveLinkBlueprintLibrary_GetSourceMachineName_Params Parms{};

	Parms.SourceHandle = SourceHandle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (None)
// struct FLiveLinkTransform          LiveLinkTransform                                                (None)

void ULiveLinkBlueprintLibrary::GetRootTransform(const struct FSubjectFrameHandle& SubjectFrameHandle, const struct FLiveLinkTransform& LiveLinkTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetRootTransform");

	Params::ULiveLinkBlueprintLibrary_GetRootTransform_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;
	Parms.LiveLinkTransform = LiveLinkTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkBasicBlueprintData BasicData                                                        (None)
// class FName                        PropertyName                                                     (None)
// float                              Value                                                            (None)
// bool                               ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::GetPropertyValue(const struct FLiveLinkBasicBlueprintData& BasicData, class FName PropertyName, float Value, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetPropertyValue");

	Params::ULiveLinkBlueprintLibrary_GetPropertyValue_Params Parms{};

	Parms.BasicData = BasicData;
	Parms.PropertyName = PropertyName;
	Parms.Value = Value;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetParent
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (None)
// struct FLiveLinkTransform          Parent                                                           (None)

void ULiveLinkBlueprintLibrary::GetParent(const struct FLiveLinkTransform& LiveLinkTransform, const struct FLiveLinkTransform& Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetParent");

	Params::ULiveLinkBlueprintLibrary_GetParent_Params Parms{};

	Parms.LiveLinkTransform = LiveLinkTransform;
	Parms.Parent = Parent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (None)
// struct FSubjectMetadata            MetaData                                                         (None)

void ULiveLinkBlueprintLibrary::GetMetadata(const struct FSubjectFrameHandle& SubjectFrameHandle, const struct FSubjectMetadata& MetaData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetMetadata");

	Params::ULiveLinkBlueprintLibrary_GetMetadata_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;
	Parms.MetaData = MetaData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bIncludeDisabledSubject                                          (None)
// bool                               bIncludeVirtualSubject                                           (None)
// TArray<struct FLiveLinkSubjectKey> ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject, const TArray<struct FLiveLinkSubjectKey>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetLiveLinkSubjects");

	Params::ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Params Parms{};

	Parms.bIncludeDisabledSubject = bIncludeDisabledSubject;
	Parms.bIncludeVirtualSubject = bIncludeVirtualSubject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (None)
// class UClass*                      ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::GetLiveLinkSubjectRole(const struct FLiveLinkSubjectName& SubjectName, class UClass* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetLiveLinkSubjectRole");

	Params::ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Params Parms{};

	Parms.SubjectName = SubjectName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bIncludeVirtualSubject                                           (None)
// TArray<struct FLiveLinkSubjectName>ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject, const TArray<struct FLiveLinkSubjectName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetLiveLinkEnabledSubjectNames");

	Params::ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Params Parms{};

	Parms.bIncludeVirtualSubject = bIncludeVirtualSubject;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (None)
// TMap<class FName, float>           Curves                                                           (None)

void ULiveLinkBlueprintLibrary::GetCurves(const struct FSubjectFrameHandle& SubjectFrameHandle, TMap<class FName, float> Curves)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetCurves");

	Params::ULiveLinkBlueprintLibrary_GetCurves_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;
	Parms.Curves = Curves;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (None)
// TArray<struct FLiveLinkTransform>  Children                                                         (None)

void ULiveLinkBlueprintLibrary::GetChildren(const struct FLiveLinkTransform& LiveLinkTransform, const TArray<struct FLiveLinkTransform>& Children)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetChildren");

	Params::ULiveLinkBlueprintLibrary_GetChildren_Params Parms{};

	Parms.LiveLinkTransform = LiveLinkTransform;
	Parms.Children = Children;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (None)
// struct FLiveLinkBasicBlueprintData BasicBlueprintData                                               (None)

void ULiveLinkBlueprintLibrary::GetBasicData(const struct FSubjectFrameHandle& SubjectFrameHandle, const struct FLiveLinkBasicBlueprintData& BasicBlueprintData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetBasicData");

	Params::ULiveLinkBlueprintLibrary_GetBasicData_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;
	Parms.BasicBlueprintData = BasicBlueprintData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (None)
// struct FLiveLinkSkeletonStaticData AnimationStaticData                                              (None)
// bool                               ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::GetAnimationStaticData(const struct FSubjectFrameHandle& SubjectFrameHandle, const struct FLiveLinkSkeletonStaticData& AnimationStaticData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetAnimationStaticData");

	Params::ULiveLinkBlueprintLibrary_GetAnimationStaticData_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;
	Parms.AnimationStaticData = AnimationStaticData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (None)
// struct FLiveLinkAnimationFrameData AnimationFrameData                                               (None)
// bool                               ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::GetAnimationFrameData(const struct FSubjectFrameHandle& SubjectFrameHandle, const struct FLiveLinkAnimationFrameData& AnimationFrameData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetAnimationFrameData");

	Params::ULiveLinkBlueprintLibrary_GetAnimationFrameData_Params Parms{};

	Parms.SubjectFrameHandle = SubjectFrameHandle;
	Parms.AnimationFrameData = AnimationFrameData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (None)
// class UClass*                      Role                                                             (None)
// struct FLiveLinkBaseBlueprintData  OutBlueprintData                                                 (None)
// bool                               ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, const struct FLiveLinkBaseBlueprintData& OutBlueprintData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrameWithSpecificRole");

	Params::ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Params Parms{};

	Parms.SubjectName = SubjectName;
	Parms.Role = Role;
	Parms.OutBlueprintData = OutBlueprintData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (None)
// class UClass*                      Role                                                             (None)
// float                              WorldTimeOffset                                                  (None)
// struct FLiveLinkBaseBlueprintData  OutBlueprintData                                                 (None)
// bool                               ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, float WorldTimeOffset, const struct FLiveLinkBaseBlueprintData& OutBlueprintData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrameAtWorldTimeOffset");

	Params::ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Params Parms{};

	Parms.SubjectName = SubjectName;
	Parms.Role = Role;
	Parms.WorldTimeOffset = WorldTimeOffset;
	Parms.OutBlueprintData = OutBlueprintData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (None)
// class UClass*                      Role                                                             (None)
// struct FTimecode                   SceneTime                                                        (None)
// struct FLiveLinkBaseBlueprintData  OutBlueprintData                                                 (None)
// bool                               ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, const struct FTimecode& SceneTime, const struct FLiveLinkBaseBlueprintData& OutBlueprintData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrameAtSceneTime");

	Params::ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Params Parms{};

	Parms.SubjectName = SubjectName;
	Parms.Role = Role;
	Parms.SceneTime = SceneTime;
	Parms.OutBlueprintData = OutBlueprintData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectRepresentationSubjectRepresentation                                            (None)
// struct FLiveLinkBaseBlueprintData  OutBlueprintData                                                 (None)
// bool                               ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrame(const struct FLiveLinkSubjectRepresentation& SubjectRepresentation, const struct FLiveLinkBaseBlueprintData& OutBlueprintData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrame");

	Params::ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Params Parms{};

	Parms.SubjectRepresentation = SubjectRepresentation;
	Parms.OutBlueprintData = OutBlueprintData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (None)
// struct FTransform                  Transform                                                        (None)

void ULiveLinkBlueprintLibrary::ComponentSpaceTransform(const struct FLiveLinkTransform& LiveLinkTransform, const struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "ComponentSpaceTransform");

	Params::ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Params Parms{};

	Parms.LiveLinkTransform = LiveLinkTransform;
	Parms.Transform = Transform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (None)
// int32                              ReturnValue                                                      (None)

void ULiveLinkBlueprintLibrary::ChildCount(const struct FLiveLinkTransform& LiveLinkTransform, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintLibrary", "ChildCount");

	Params::ULiveLinkBlueprintLibrary_ChildCount_Params Parms{};

	Parms.LiveLinkTransform = LiveLinkTransform;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LiveLink.LiveLinkComponent
// (None)

class UClass* ULiveLinkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkComponent");

	return Clss;
}


// LiveLinkComponent LiveLink.Default__LiveLinkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkComponent* ULiveLinkComponent::GetDefaultObj()
{
	static class ULiveLinkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkComponent*>(ULiveLinkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SubjectName                                                      (None)
// float                              WorldTime                                                        (None)
// bool                               bSuccess                                                         (None)
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (None)

void ULiveLinkComponent::GetSubjectDataAtWorldTime(class FName SubjectName, float WorldTime, bool bSuccess, const struct FSubjectFrameHandle& SubjectFrameHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkComponent", "GetSubjectDataAtWorldTime");

	Params::ULiveLinkComponent_GetSubjectDataAtWorldTime_Params Parms{};

	Parms.SubjectName = SubjectName;
	Parms.WorldTime = WorldTime;
	Parms.bSuccess = bSuccess;
	Parms.SubjectFrameHandle = SubjectFrameHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SubjectName                                                      (None)
// struct FTimecode                   SceneTime                                                        (None)
// bool                               bSuccess                                                         (None)
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (None)

void ULiveLinkComponent::GetSubjectDataAtSceneTime(class FName SubjectName, const struct FTimecode& SceneTime, bool bSuccess, const struct FSubjectFrameHandle& SubjectFrameHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkComponent", "GetSubjectDataAtSceneTime");

	Params::ULiveLinkComponent_GetSubjectDataAtSceneTime_Params Parms{};

	Parms.SubjectName = SubjectName;
	Parms.SceneTime = SceneTime;
	Parms.bSuccess = bSuccess;
	Parms.SubjectFrameHandle = SubjectFrameHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkComponent.GetSubjectData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SubjectName                                                      (None)
// bool                               bSuccess                                                         (None)
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (None)

void ULiveLinkComponent::GetSubjectData(class FName SubjectName, bool bSuccess, const struct FSubjectFrameHandle& SubjectFrameHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkComponent", "GetSubjectData");

	Params::ULiveLinkComponent_GetSubjectData_Params Parms{};

	Parms.SubjectName = SubjectName;
	Parms.bSuccess = bSuccess;
	Parms.SubjectFrameHandle = SubjectFrameHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FName>                SubjectNames                                                     (None)

void ULiveLinkComponent::GetAvailableSubjectNames(const TArray<class FName>& SubjectNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkComponent", "GetAvailableSubjectNames");

	Params::ULiveLinkComponent_GetAvailableSubjectNames_Params Parms{};

	Parms.SubjectNames = SubjectNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LiveLink.LiveLinkDrivenComponent
// (None)

class UClass* ULiveLinkDrivenComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkDrivenComponent");

	return Clss;
}


// LiveLinkDrivenComponent LiveLink.Default__LiveLinkDrivenComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkDrivenComponent* ULiveLinkDrivenComponent::GetDefaultObj()
{
	static class ULiveLinkDrivenComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkDrivenComponent*>(ULiveLinkDrivenComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkMessageBusFinder
// (None)

class UClass* ULiveLinkMessageBusFinder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkMessageBusFinder");

	return Clss;
}


// LiveLinkMessageBusFinder LiveLink.Default__LiveLinkMessageBusFinder
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkMessageBusFinder* ULiveLinkMessageBusFinder::GetDefaultObj()
{
	static class ULiveLinkMessageBusFinder* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkMessageBusFinder*>(ULiveLinkMessageBusFinder::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// struct FLatentActionInfo           LatentInfo                                                       (None)
// float                              Duration                                                         (None)
// TArray<struct FProviderPollResult> AvailableProviders                                               (None)

void ULiveLinkMessageBusFinder::GetAvailableProviders(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float Duration, const TArray<struct FProviderPollResult>& AvailableProviders)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkMessageBusFinder", "GetAvailableProviders");

	Params::ULiveLinkMessageBusFinder_GetAvailableProviders_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.Duration = Duration;
	Parms.AvailableProviders = AvailableProviders;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULiveLinkMessageBusFinder*   ReturnValue                                                      (None)

void ULiveLinkMessageBusFinder::ConstructMessageBusFinder(class ULiveLinkMessageBusFinder* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkMessageBusFinder", "ConstructMessageBusFinder");

	Params::ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FProviderPollResult         Provider                                                         (None)
// struct FLiveLinkSourceHandle       SourceHandle                                                     (None)

void ULiveLinkMessageBusFinder::ConnectToProvider(const struct FProviderPollResult& Provider, const struct FLiveLinkSourceHandle& SourceHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkMessageBusFinder", "ConnectToProvider");

	Params::ULiveLinkMessageBusFinder_ConnectToProvider_Params Parms{};

	Parms.Provider = Provider;
	Parms.SourceHandle = SourceHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LiveLink.LiveLinkMessageBusSourceFactory
// (None)

class UClass* ULiveLinkMessageBusSourceFactory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkMessageBusSourceFactory");

	return Clss;
}


// LiveLinkMessageBusSourceFactory LiveLink.Default__LiveLinkMessageBusSourceFactory
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkMessageBusSourceFactory* ULiveLinkMessageBusSourceFactory::GetDefaultObj()
{
	static class ULiveLinkMessageBusSourceFactory* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkMessageBusSourceFactory*>(ULiveLinkMessageBusSourceFactory::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkMessageBusSourceSettings
// (None)

class UClass* ULiveLinkMessageBusSourceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkMessageBusSourceSettings");

	return Clss;
}


// LiveLinkMessageBusSourceSettings LiveLink.Default__LiveLinkMessageBusSourceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkMessageBusSourceSettings* ULiveLinkMessageBusSourceSettings::GetDefaultObj()
{
	static class ULiveLinkMessageBusSourceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkMessageBusSourceSettings*>(ULiveLinkMessageBusSourceSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkPreset
// (None)

class UClass* ULiveLinkPreset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkPreset");

	return Clss;
}


// LiveLinkPreset LiveLink.Default__LiveLinkPreset
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkPreset* ULiveLinkPreset::GetDefaultObj()
{
	static class ULiveLinkPreset* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkPreset*>(ULiveLinkPreset::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLink.LiveLinkPreset.BuildFromClient
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULiveLinkPreset::BuildFromClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkPreset", "BuildFromClient");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkPreset.ApplyToClientLatent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// struct FLatentActionInfo           LatentInfo                                                       (None)

void ULiveLinkPreset::ApplyToClientLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkPreset", "ApplyToClientLatent");

	Params::ULiveLinkPreset_ApplyToClientLatent_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkPreset.ApplyToClient
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void ULiveLinkPreset::ApplyToClient(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkPreset", "ApplyToClient");

	Params::ULiveLinkPreset_ApplyToClient_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkPreset.AddToClient
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                               bRecreatePresets                                                 (None)
// bool                               ReturnValue                                                      (None)

void ULiveLinkPreset::AddToClient(bool bRecreatePresets, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkPreset", "AddToClient");

	Params::ULiveLinkPreset_AddToClient_Params Parms{};

	Parms.bRecreatePresets = bRecreatePresets;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LiveLink.LiveLinkUserSettings
// (None)

class UClass* ULiveLinkUserSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkUserSettings");

	return Clss;
}


// LiveLinkUserSettings LiveLink.Default__LiveLinkUserSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkUserSettings* ULiveLinkUserSettings::GetDefaultObj()
{
	static class ULiveLinkUserSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkUserSettings*>(ULiveLinkUserSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkSettings
// (None)

class UClass* ULiveLinkSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkSettings");

	return Clss;
}


// LiveLinkSettings LiveLink.Default__LiveLinkSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkSettings* ULiveLinkSettings::GetDefaultObj()
{
	static class ULiveLinkSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkSettings*>(ULiveLinkSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkTimecodeProvider
// (None)

class UClass* ULiveLinkTimecodeProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkTimecodeProvider");

	return Clss;
}


// LiveLinkTimecodeProvider LiveLink.Default__LiveLinkTimecodeProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkTimecodeProvider* ULiveLinkTimecodeProvider::GetDefaultObj()
{
	static class ULiveLinkTimecodeProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkTimecodeProvider*>(ULiveLinkTimecodeProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkTimeSynchronizationSource
// (None)

class UClass* ULiveLinkTimeSynchronizationSource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkTimeSynchronizationSource");

	return Clss;
}


// LiveLinkTimeSynchronizationSource LiveLink.Default__LiveLinkTimeSynchronizationSource
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkTimeSynchronizationSource* ULiveLinkTimeSynchronizationSource::GetDefaultObj()
{
	static class ULiveLinkTimeSynchronizationSource* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkTimeSynchronizationSource*>(ULiveLinkTimeSynchronizationSource::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkVirtualSubjectSourceSettings
// (None)

class UClass* ULiveLinkVirtualSubjectSourceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkVirtualSubjectSourceSettings");

	return Clss;
}


// LiveLinkVirtualSubjectSourceSettings LiveLink.Default__LiveLinkVirtualSubjectSourceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkVirtualSubjectSourceSettings* ULiveLinkVirtualSubjectSourceSettings::GetDefaultObj()
{
	static class ULiveLinkVirtualSubjectSourceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkVirtualSubjectSourceSettings*>(ULiveLinkVirtualSubjectSourceSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor
// (None)

class UClass* ULiveLinkTransformAxisSwitchPreProcessor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkTransformAxisSwitchPreProcessor");

	return Clss;
}


// LiveLinkTransformAxisSwitchPreProcessor LiveLink.Default__LiveLinkTransformAxisSwitchPreProcessor
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkTransformAxisSwitchPreProcessor* ULiveLinkTransformAxisSwitchPreProcessor::GetDefaultObj()
{
	static class ULiveLinkTransformAxisSwitchPreProcessor* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkTransformAxisSwitchPreProcessor*>(ULiveLinkTransformAxisSwitchPreProcessor::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
// (None)

class UClass* ULiveLinkAnimationAxisSwitchPreProcessor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkAnimationAxisSwitchPreProcessor");

	return Clss;
}


// LiveLinkAnimationAxisSwitchPreProcessor LiveLink.Default__LiveLinkAnimationAxisSwitchPreProcessor
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkAnimationAxisSwitchPreProcessor* ULiveLinkAnimationAxisSwitchPreProcessor::GetDefaultObj()
{
	static class ULiveLinkAnimationAxisSwitchPreProcessor* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkAnimationAxisSwitchPreProcessor*>(ULiveLinkAnimationAxisSwitchPreProcessor::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkAnimationRoleToTransform
// (None)

class UClass* ULiveLinkAnimationRoleToTransform::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkAnimationRoleToTransform");

	return Clss;
}


// LiveLinkAnimationRoleToTransform LiveLink.Default__LiveLinkAnimationRoleToTransform
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkAnimationRoleToTransform* ULiveLinkAnimationRoleToTransform::GetDefaultObj()
{
	static class ULiveLinkAnimationRoleToTransform* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkAnimationRoleToTransform*>(ULiveLinkAnimationRoleToTransform::StaticClass()->DefaultObject);

	return Default;
}


// Class LiveLink.LiveLinkBlueprintVirtualSubject
// (None)

class UClass* ULiveLinkBlueprintVirtualSubject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveLinkBlueprintVirtualSubject");

	return Clss;
}


// LiveLinkBlueprintVirtualSubject LiveLink.Default__LiveLinkBlueprintVirtualSubject
// (Public, ClassDefaultObject, ArchetypeObject)

class ULiveLinkBlueprintVirtualSubject* ULiveLinkBlueprintVirtualSubject::GetDefaultObj()
{
	static class ULiveLinkBlueprintVirtualSubject* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveLinkBlueprintVirtualSubject*>(ULiveLinkBlueprintVirtualSubject::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkBaseStaticData     InStruct                                                         (None)
// bool                               ReturnValue                                                      (None)

void ULiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectStaticData_Internal(const struct FLiveLinkBaseStaticData& InStruct, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintVirtualSubject", "UpdateVirtualSubjectStaticData_Internal");

	Params::ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Params Parms{};

	Parms.InStruct = InStruct;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkBaseFrameData      InStruct                                                         (None)
// bool                               bInShouldStampCurrentTime                                        (None)
// bool                               ReturnValue                                                      (None)

void ULiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectFrameData_Internal(const struct FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintVirtualSubject", "UpdateVirtualSubjectFrameData_Internal");

	Params::ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Params Parms{};

	Parms.InStruct = InStruct;
	Parms.bInShouldStampCurrentTime = bInShouldStampCurrentTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LiveLink.LiveLinkBlueprintVirtualSubject.OnUpdate
// (Event, Public, BlueprintEvent)
// Parameters:

void ULiveLinkBlueprintVirtualSubject::OnUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintVirtualSubject", "OnUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LiveLink.LiveLinkBlueprintVirtualSubject.OnInitialize
// (Event, Public, BlueprintEvent)
// Parameters:

void ULiveLinkBlueprintVirtualSubject::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveLinkBlueprintVirtualSubject", "OnInitialize");



	UObject::ProcessEvent(Func, nullptr);

}

}


