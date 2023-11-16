#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AssetTags.AssetTagsSubsystem
// (None)

class UClass* UAssetTagsSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssetTagsSubsystem");

	return Clss;
}


// AssetTagsSubsystem AssetTags.Default__AssetTagsSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAssetTagsSubsystem* UAssetTagsSubsystem::GetDefaultObj()
{
	static class UAssetTagsSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssetTagsSubsystem*>(UAssetTagsSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function AssetTags.AssetTagsSubsystem.K2_GetCollectionsContainingAsset
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftObjectPath             AssetPath                                                        (None)
// TArray<class FName>                ReturnValue                                                      (None)

void UAssetTagsSubsystem::K2_GetCollectionsContainingAsset(const struct FSoftObjectPath& AssetPath, const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "K2_GetCollectionsContainingAsset");

	Params::UAssetTagsSubsystem_K2_GetCollectionsContainingAsset_Params Parms{};

	Parms.AssetPath = AssetPath;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     AssetPtr                                                         (None)
// TArray<class FName>                ReturnValue                                                      (None)

void UAssetTagsSubsystem::GetCollectionsContainingAssetPtr(class UObject* AssetPtr, const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetCollectionsContainingAssetPtr");

	Params::UAssetTagsSubsystem_GetCollectionsContainingAssetPtr_Params Parms{};

	Parms.AssetPtr = AssetPtr;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAssetData                  AssetData                                                        (None)
// TArray<class FName>                ReturnValue                                                      (None)

void UAssetTagsSubsystem::GetCollectionsContainingAssetData(const struct FAssetData& AssetData, const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetCollectionsContainingAssetData");

	Params::UAssetTagsSubsystem_GetCollectionsContainingAssetData_Params Parms{};

	Parms.AssetData = AssetData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AssetPathName                                                    (None)
// TArray<class FName>                ReturnValue                                                      (None)

void UAssetTagsSubsystem::GetCollectionsContainingAsset(class FName AssetPathName, const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetCollectionsContainingAsset");

	Params::UAssetTagsSubsystem_GetCollectionsContainingAsset_Params Parms{};

	Parms.AssetPathName = AssetPathName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetTags.AssetTagsSubsystem.GetCollections
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (None)

void UAssetTagsSubsystem::GetCollections(const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetCollections");

	Params::UAssetTagsSubsystem_GetCollections_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (None)
// TArray<struct FAssetData>          ReturnValue                                                      (None)

void UAssetTagsSubsystem::GetAssetsInCollection(class FName Name, const TArray<struct FAssetData>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "GetAssetsInCollection");

	Params::UAssetTagsSubsystem_GetAssetsInCollection_Params Parms{};

	Parms.Name = Name;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetTags.AssetTagsSubsystem.CollectionExists
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (None)
// bool                               ReturnValue                                                      (None)

void UAssetTagsSubsystem::CollectionExists(class FName Name, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetTagsSubsystem", "CollectionExists");

	Params::UAssetTagsSubsystem_CollectionExists_Params Parms{};

	Parms.Name = Name;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


