#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameplayTags.BlueprintGameplayTagLibrary
// (None)

class UClass* UBlueprintGameplayTagLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlueprintGameplayTagLibrary");

	return Clss;
}


// BlueprintGameplayTagLibrary GameplayTags.Default__BlueprintGameplayTagLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlueprintGameplayTagLibrary* UBlueprintGameplayTagLibrary::GetDefaultObj()
{
	static class UBlueprintGameplayTagLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlueprintGameplayTagLibrary*>(UBlueprintGameplayTagLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (None)
// struct FGameplayTag                Tag                                                              (None)
// bool                               ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::RemoveGameplayTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "RemoveGameplayTag");

	Params::UBlueprintGameplayTagLibrary_RemoveGameplayTag_Params Parms{};

	Parms.TagContainer = TagContainer;
	Parms.Tag = Tag;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                A                                                                (None)
// class FString                      B                                                                (None)
// bool                               ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::NotEqual_TagTag(const struct FGameplayTag& A, const class FString& B, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "NotEqual_TagTag");

	Params::UBlueprintGameplayTagLibrary_NotEqual_TagTag_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       A                                                                (None)
// class FString                      B                                                                (None)
// bool                               ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const class FString& B, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "NotEqual_TagContainerTagContainer");

	Params::UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       A                                                                (None)
// struct FGameplayTagContainer       B                                                                (None)
// bool                               ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "NotEqual_GameplayTagContainer");

	Params::UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                A                                                                (None)
// struct FGameplayTag                B                                                                (None)
// bool                               ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "NotEqual_GameplayTag");

	Params::UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                TagOne                                                           (None)
// struct FGameplayTag                TagTwo                                                           (None)
// bool                               bExactMatch                                                      (None)
// bool                               ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MatchesTag");

	Params::UBlueprintGameplayTagLibrary_MatchesTag_Params Parms{};

	Parms.TagOne = TagOne;
	Parms.TagTwo = TagTwo;
	Parms.bExactMatch = bExactMatch;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                TagOne                                                           (None)
// struct FGameplayTagContainer       OtherContainer                                                   (None)
// bool                               bExactMatch                                                      (None)
// bool                               ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::MatchesAnyTags(const struct FGameplayTag& TagOne, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MatchesAnyTags");

	Params::UBlueprintGameplayTagLibrary_MatchesAnyTags_Params Parms{};

	Parms.TagOne = TagOne;
	Parms.OtherContainer = OtherContainer;
	Parms.bExactMatch = bExactMatch;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       Value                                                            (None)
// struct FGameplayTagContainer       ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& Value, const struct FGameplayTagContainer& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MakeLiteralGameplayTagContainer");

	Params::UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Params Parms{};

	Parms.Value = Value;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                Value                                                            (None)
// struct FGameplayTag                ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::MakeLiteralGameplayTag(const struct FGameplayTag& Value, const struct FGameplayTag& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MakeLiteralGameplayTag");

	Params::UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params Parms{};

	Parms.Value = Value;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagQuery           TagQuery                                                         (None)
// struct FGameplayTagQuery           ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery, const struct FGameplayTagQuery& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MakeGameplayTagQuery");

	Params::UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params Parms{};

	Parms.TagQuery = TagQuery;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                SingleTag                                                        (None)
// struct FGameplayTagContainer       ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag, const struct FGameplayTagContainer& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MakeGameplayTagContainerFromTag");

	Params::UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Params Parms{};

	Parms.SingleTag = SingleTag;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FGameplayTag>        GameplayTags                                                     (None)
// struct FGameplayTagContainer       ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromArray(const TArray<struct FGameplayTag>& GameplayTags, const struct FGameplayTagContainer& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "MakeGameplayTagContainerFromArray");

	Params::UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Params Parms{};

	Parms.GameplayTags = GameplayTags;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagQuery           TagQuery                                                         (None)
// bool                               ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::IsTagQueryEmpty(const struct FGameplayTagQuery& TagQuery, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "IsTagQueryEmpty");

	Params::UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Params Parms{};

	Parms.TagQuery = TagQuery;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (None)
// bool                               ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::IsGameplayTagValid(const struct FGameplayTag& GameplayTag, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "IsGameplayTagValid");

	Params::UBlueprintGameplayTagLibrary_IsGameplayTagValid_Params Parms{};

	Parms.GameplayTag = GameplayTag;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (None)
// struct FGameplayTag                Tag                                                              (None)
// bool                               bExactMatch                                                      (None)
// bool                               ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::HasTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool bExactMatch, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "HasTag");

	Params::UBlueprintGameplayTagLibrary_HasTag_Params Parms{};

	Parms.TagContainer = TagContainer;
	Parms.Tag = Tag;
	Parms.bExactMatch = bExactMatch;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (None)
// struct FGameplayTagContainer       OtherContainer                                                   (None)
// bool                               bExactMatch                                                      (None)
// bool                               ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::HasAnyTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "HasAnyTags");

	Params::UBlueprintGameplayTagLibrary_HasAnyTags_Params Parms{};

	Parms.TagContainer = TagContainer;
	Parms.OtherContainer = OtherContainer;
	Parms.bExactMatch = bExactMatch;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (None)
// struct FGameplayTagContainer       OtherContainer                                                   (None)
// bool                               bExactMatch                                                      (None)
// bool                               ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::HasAllTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "HasAllTags");

	Params::UBlueprintGameplayTagLibrary_HasAllTags_Params Parms{};

	Parms.TagContainer = TagContainer;
	Parms.OtherContainer = OtherContainer;
	Parms.bExactMatch = bExactMatch;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IGameplayTagAssetInterface>TagContainerInterface                                            (None)
// struct FGameplayTagContainer       OtherContainer                                                   (None)
// bool                               ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::HasAllMatchingGameplayTags(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, const struct FGameplayTagContainer& OtherContainer, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "HasAllMatchingGameplayTags");

	Params::UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params Parms{};

	Parms.TagContainerInterface = TagContainerInterface;
	Parms.OtherContainer = OtherContainer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (None)
// class FName                        ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::GetTagName(const struct FGameplayTag& GameplayTag, class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "GetTagName");

	Params::UBlueprintGameplayTagLibrary_GetTagName_Params Parms{};

	Parms.GameplayTag = GameplayTag;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (None)
// int32                              ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "GetNumGameplayTagsInContainer");

	Params::UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params Parms{};

	Parms.TagContainer = TagContainer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (None)
// class FString                      ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "GetDebugStringFromGameplayTagContainer");

	Params::UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Params Parms{};

	Parms.TagContainer = TagContainer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (None)
// class FString                      ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "GetDebugStringFromGameplayTag");

	Params::UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Params Parms{};

	Parms.GameplayTag = GameplayTag;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class UClass*                      ActorClass                                                       (ZeroConstructor)
// struct FGameplayTagQuery           GameplayTagQuery                                                 (None)
// TArray<class AActor*>              OutActors                                                        (None)

void UBlueprintGameplayTagLibrary::GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* ActorClass, const struct FGameplayTagQuery& GameplayTagQuery, const TArray<class AActor*>& OutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "GetAllActorsOfClassMatchingTagQuery");

	Params::UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActorClass = ActorClass;
	Parms.GameplayTagQuery = GameplayTagQuery;
	Parms.OutActors = OutActors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       A                                                                (None)
// struct FGameplayTagContainer       B                                                                (None)
// bool                               ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "EqualEqual_GameplayTagContainer");

	Params::UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag                A                                                                (None)
// struct FGameplayTag                B                                                                (None)
// bool                               ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "EqualEqual_GameplayTag");

	Params::UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IGameplayTagAssetInterface>TagContainerInterface                                            (None)
// struct FGameplayTag                Tag                                                              (None)
// bool                               ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::DoesTagAssetInterfaceHaveTag(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, const struct FGameplayTag& Tag, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "DoesTagAssetInterfaceHaveTag");

	Params::UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params Parms{};

	Parms.TagContainerInterface = TagContainerInterface;
	Parms.Tag = Tag;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (None)
// struct FGameplayTagQuery           TagQuery                                                         (None)
// bool                               ReturnValue                                                      (None)

void UBlueprintGameplayTagLibrary::DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "DoesContainerMatchTagQuery");

	Params::UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params Parms{};

	Parms.TagContainer = TagContainer;
	Parms.TagQuery = TagQuery;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       GameplayTagContainer                                             (None)
// TArray<struct FGameplayTag>        GameplayTags                                                     (None)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, const TArray<struct FGameplayTag>& GameplayTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "BreakGameplayTagContainer");

	Params::UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Params Parms{};

	Parms.GameplayTagContainer = GameplayTagContainer;
	Parms.GameplayTags = GameplayTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       InOutTagContainer                                                (None)
// struct FGameplayTagContainer       InTagContainer                                                   (None)

void UBlueprintGameplayTagLibrary::AppendGameplayTagContainers(const struct FGameplayTagContainer& InOutTagContainer, const struct FGameplayTagContainer& InTagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "AppendGameplayTagContainers");

	Params::UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params Parms{};

	Parms.InOutTagContainer = InOutTagContainer;
	Parms.InTagContainer = InTagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (None)
// struct FGameplayTag                Tag                                                              (None)

void UBlueprintGameplayTagLibrary::AddGameplayTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlueprintGameplayTagLibrary", "AddGameplayTag");

	Params::UBlueprintGameplayTagLibrary_AddGameplayTag_Params Parms{};

	Parms.TagContainer = TagContainer;
	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayTags.GameplayTagAssetInterface
// (None)

class UClass* IGameplayTagAssetInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTagAssetInterface");

	return Clss;
}


// GameplayTagAssetInterface GameplayTags.Default__GameplayTagAssetInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IGameplayTagAssetInterface* IGameplayTagAssetInterface::GetDefaultObj()
{
	static class IGameplayTagAssetInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IGameplayTagAssetInterface*>(IGameplayTagAssetInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                TagToCheck                                                       (None)
// bool                               ReturnValue                                                      (None)

void IGameplayTagAssetInterface::HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTagAssetInterface", "HasMatchingGameplayTag");

	Params::IGameplayTagAssetInterface_HasMatchingGameplayTag_Params Parms{};

	Parms.TagToCheck = TagToCheck;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (None)
// bool                               ReturnValue                                                      (None)

void IGameplayTagAssetInterface::HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTagAssetInterface", "HasAnyMatchingGameplayTags");

	Params::IGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params Parms{};

	Parms.TagContainer = TagContainer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (None)
// bool                               ReturnValue                                                      (None)

void IGameplayTagAssetInterface::HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTagAssetInterface", "HasAllMatchingGameplayTags");

	Params::IGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params Parms{};

	Parms.TagContainer = TagContainer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       TagContainer                                                     (None)

void IGameplayTagAssetInterface::GetOwnedGameplayTags(const struct FGameplayTagContainer& TagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTagAssetInterface", "GetOwnedGameplayTags");

	Params::IGameplayTagAssetInterface_GetOwnedGameplayTags_Params Parms{};

	Parms.TagContainer = TagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GameplayTags.EditableGameplayTagQuery
// (None)

class UClass* UEditableGameplayTagQuery::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQuery");

	return Clss;
}


// EditableGameplayTagQuery GameplayTags.Default__EditableGameplayTagQuery
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQuery* UEditableGameplayTagQuery::GetDefaultObj()
{
	static class UEditableGameplayTagQuery* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQuery*>(UEditableGameplayTagQuery::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.EditableGameplayTagQueryExpression
// (None)

class UClass* UEditableGameplayTagQueryExpression::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression");

	return Clss;
}


// EditableGameplayTagQueryExpression GameplayTags.Default__EditableGameplayTagQueryExpression
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQueryExpression* UEditableGameplayTagQueryExpression::GetDefaultObj()
{
	static class UEditableGameplayTagQueryExpression* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQueryExpression*>(UEditableGameplayTagQueryExpression::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// (None)

class UClass* UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_AnyTagsMatch");

	return Clss;
}


// EditableGameplayTagQueryExpression_AnyTagsMatch GameplayTags.Default__EditableGameplayTagQueryExpression_AnyTagsMatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQueryExpression_AnyTagsMatch* UEditableGameplayTagQueryExpression_AnyTagsMatch::GetDefaultObj()
{
	static class UEditableGameplayTagQueryExpression_AnyTagsMatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQueryExpression_AnyTagsMatch*>(UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// (None)

class UClass* UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_AllTagsMatch");

	return Clss;
}


// EditableGameplayTagQueryExpression_AllTagsMatch GameplayTags.Default__EditableGameplayTagQueryExpression_AllTagsMatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQueryExpression_AllTagsMatch* UEditableGameplayTagQueryExpression_AllTagsMatch::GetDefaultObj()
{
	static class UEditableGameplayTagQueryExpression_AllTagsMatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQueryExpression_AllTagsMatch*>(UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// (None)

class UClass* UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_NoTagsMatch");

	return Clss;
}


// EditableGameplayTagQueryExpression_NoTagsMatch GameplayTags.Default__EditableGameplayTagQueryExpression_NoTagsMatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQueryExpression_NoTagsMatch* UEditableGameplayTagQueryExpression_NoTagsMatch::GetDefaultObj()
{
	static class UEditableGameplayTagQueryExpression_NoTagsMatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQueryExpression_NoTagsMatch*>(UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// (None)

class UClass* UEditableGameplayTagQueryExpression_AnyExprMatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_AnyExprMatch");

	return Clss;
}


// EditableGameplayTagQueryExpression_AnyExprMatch GameplayTags.Default__EditableGameplayTagQueryExpression_AnyExprMatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQueryExpression_AnyExprMatch* UEditableGameplayTagQueryExpression_AnyExprMatch::GetDefaultObj()
{
	static class UEditableGameplayTagQueryExpression_AnyExprMatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQueryExpression_AnyExprMatch*>(UEditableGameplayTagQueryExpression_AnyExprMatch::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// (None)

class UClass* UEditableGameplayTagQueryExpression_AllExprMatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_AllExprMatch");

	return Clss;
}


// EditableGameplayTagQueryExpression_AllExprMatch GameplayTags.Default__EditableGameplayTagQueryExpression_AllExprMatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQueryExpression_AllExprMatch* UEditableGameplayTagQueryExpression_AllExprMatch::GetDefaultObj()
{
	static class UEditableGameplayTagQueryExpression_AllExprMatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQueryExpression_AllExprMatch*>(UEditableGameplayTagQueryExpression_AllExprMatch::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// (None)

class UClass* UEditableGameplayTagQueryExpression_NoExprMatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableGameplayTagQueryExpression_NoExprMatch");

	return Clss;
}


// EditableGameplayTagQueryExpression_NoExprMatch GameplayTags.Default__EditableGameplayTagQueryExpression_NoExprMatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableGameplayTagQueryExpression_NoExprMatch* UEditableGameplayTagQueryExpression_NoExprMatch::GetDefaultObj()
{
	static class UEditableGameplayTagQueryExpression_NoExprMatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableGameplayTagQueryExpression_NoExprMatch*>(UEditableGameplayTagQueryExpression_NoExprMatch::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.GameplayTagsManager
// (None)

class UClass* UGameplayTagsManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTagsManager");

	return Clss;
}


// GameplayTagsManager GameplayTags.Default__GameplayTagsManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayTagsManager* UGameplayTagsManager::GetDefaultObj()
{
	static class UGameplayTagsManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTagsManager*>(UGameplayTagsManager::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.GameplayTagsList
// (None)

class UClass* UGameplayTagsList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTagsList");

	return Clss;
}


// GameplayTagsList GameplayTags.Default__GameplayTagsList
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayTagsList* UGameplayTagsList::GetDefaultObj()
{
	static class UGameplayTagsList* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTagsList*>(UGameplayTagsList::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.RestrictedGameplayTagsList
// (None)

class UClass* URestrictedGameplayTagsList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RestrictedGameplayTagsList");

	return Clss;
}


// RestrictedGameplayTagsList GameplayTags.Default__RestrictedGameplayTagsList
// (Public, ClassDefaultObject, ArchetypeObject)

class URestrictedGameplayTagsList* URestrictedGameplayTagsList::GetDefaultObj()
{
	static class URestrictedGameplayTagsList* Default = nullptr;

	if (!Default)
		Default = static_cast<URestrictedGameplayTagsList*>(URestrictedGameplayTagsList::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.GameplayTagsSettings
// (None)

class UClass* UGameplayTagsSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTagsSettings");

	return Clss;
}


// GameplayTagsSettings GameplayTags.Default__GameplayTagsSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayTagsSettings* UGameplayTagsSettings::GetDefaultObj()
{
	static class UGameplayTagsSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTagsSettings*>(UGameplayTagsSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTags.GameplayTagsDeveloperSettings
// (None)

class UClass* UGameplayTagsDeveloperSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTagsDeveloperSettings");

	return Clss;
}


// GameplayTagsDeveloperSettings GameplayTags.Default__GameplayTagsDeveloperSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayTagsDeveloperSettings* UGameplayTagsDeveloperSettings::GetDefaultObj()
{
	static class UGameplayTagsDeveloperSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTagsDeveloperSettings*>(UGameplayTagsDeveloperSettings::StaticClass()->DefaultObject);

	return Default;
}

}


