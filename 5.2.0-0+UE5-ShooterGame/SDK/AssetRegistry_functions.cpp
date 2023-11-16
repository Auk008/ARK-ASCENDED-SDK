#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AssetRegistry.AssetRegistryHelpers
// (None)

class UClass* UAssetRegistryHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssetRegistryHelpers");

	return Clss;
}


// AssetRegistryHelpers AssetRegistry.Default__AssetRegistryHelpers
// (Public, ClassDefaultObject, ArchetypeObject)

class UAssetRegistryHelpers* UAssetRegistryHelpers::GetDefaultObj()
{
	static class UAssetRegistryHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssetRegistryHelpers*>(UAssetRegistryHelpers::StaticClass()->DefaultObject);

	return Default;
}


// Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (None)
// struct FSoftObjectPath             ReturnValue                                                      (None)

void UAssetRegistryHelpers::ToSoftObjectPath(const struct FAssetData& InAssetData, const struct FSoftObjectPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "ToSoftObjectPath");

	Params::UAssetRegistryHelpers_ToSoftObjectPath_Params Parms{};

	Parms.InAssetData = InAssetData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARFilter                   InFilter                                                         (None)
// TArray<struct FTagAndValue>        InTagsAndValues                                                  (None)
// struct FARFilter                   ReturnValue                                                      (None)

void UAssetRegistryHelpers::SetFilterTagsAndValues(const struct FARFilter& InFilter, const TArray<struct FTagAndValue>& InTagsAndValues, const struct FARFilter& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "SetFilterTagsAndValues");

	Params::UAssetRegistryHelpers_SetFilterTagsAndValues_Params Parms{};

	Parms.InFilter = InFilter;
	Parms.InTagsAndValues = InTagsAndValues;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.IsValid
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (None)
// bool                               ReturnValue                                                      (None)

void UAssetRegistryHelpers::IsValid(const struct FAssetData& InAssetData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "IsValid");

	Params::UAssetRegistryHelpers_IsValid_Params Parms{};

	Parms.InAssetData = InAssetData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.IsUAsset
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (None)
// bool                               ReturnValue                                                      (None)

void UAssetRegistryHelpers::IsUAsset(const struct FAssetData& InAssetData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "IsUAsset");

	Params::UAssetRegistryHelpers_IsUAsset_Params Parms{};

	Parms.InAssetData = InAssetData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.IsRedirector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (None)
// bool                               ReturnValue                                                      (None)

void UAssetRegistryHelpers::IsRedirector(const struct FAssetData& InAssetData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "IsRedirector");

	Params::UAssetRegistryHelpers_IsRedirector_Params Parms{};

	Parms.InAssetData = InAssetData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (None)
// bool                               ReturnValue                                                      (None)

void UAssetRegistryHelpers::IsAssetLoaded(const struct FAssetData& InAssetData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "IsAssetLoaded");

	Params::UAssetRegistryHelpers_IsAssetLoaded_Params Parms{};

	Parms.InAssetData = InAssetData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.GetTagValue
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (None)
// class FName                        InTagName                                                        (None)
// class FString                      OutTagValue                                                      (None)
// bool                               ReturnValue                                                      (None)

void UAssetRegistryHelpers::GetTagValue(const struct FAssetData& InAssetData, class FName InTagName, const class FString& OutTagValue, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "GetTagValue");

	Params::UAssetRegistryHelpers_GetTagValue_Params Parms{};

	Parms.InAssetData = InAssetData;
	Parms.InTagName = InTagName;
	Parms.OutTagValue = OutTagValue;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.GetFullName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (None)
// class FString                      ReturnValue                                                      (None)

void UAssetRegistryHelpers::GetFullName(const struct FAssetData& InAssetData, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "GetFullName");

	Params::UAssetRegistryHelpers_GetFullName_Params Parms{};

	Parms.InAssetData = InAssetData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (None)
// class FString                      ReturnValue                                                      (None)

void UAssetRegistryHelpers::GetExportTextName(const struct FAssetData& InAssetData, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "GetExportTextName");

	Params::UAssetRegistryHelpers_GetExportTextName_Params Parms{};

	Parms.InAssetData = InAssetData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.GetClass
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (None)
// class UClass*                      ReturnValue                                                      (None)

void UAssetRegistryHelpers::GetClass(const struct FAssetData& InAssetData, class UClass* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "GetClass");

	Params::UAssetRegistryHelpers_GetClass_Params Parms{};

	Parms.InAssetData = InAssetData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.GetBlueprintAssets
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FARFilter                   InFilter                                                         (None)
// TArray<struct FAssetData>          OutAssetData                                                     (None)

void UAssetRegistryHelpers::GetBlueprintAssets(const struct FARFilter& InFilter, const TArray<struct FAssetData>& OutAssetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "GetBlueprintAssets");

	Params::UAssetRegistryHelpers_GetBlueprintAssets_Params Parms{};

	Parms.InFilter = InFilter;
	Parms.OutAssetData = OutAssetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IAssetRegistry>ReturnValue                                                      (None)

void UAssetRegistryHelpers::GetAssetRegistry(TScriptInterface<class IAssetRegistry> ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "GetAssetRegistry");

	Params::UAssetRegistryHelpers_GetAssetRegistry_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.GetAsset
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  InAssetData                                                      (None)
// class UObject*                     ReturnValue                                                      (None)

void UAssetRegistryHelpers::GetAsset(const struct FAssetData& InAssetData, class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "GetAsset");

	Params::UAssetRegistryHelpers_GetAsset_Params Parms{};

	Parms.InAssetData = InAssetData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.FindAssetNativeClass
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  AssetData                                                        (None)
// class UClass*                      ReturnValue                                                      (None)

void UAssetRegistryHelpers::FindAssetNativeClass(const struct FAssetData& AssetData, class UClass* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "FindAssetNativeClass");

	Params::UAssetRegistryHelpers_FindAssetNativeClass_Params Parms{};

	Parms.AssetData = AssetData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     InAsset                                                          (None)
// bool                               bAllowBlueprintClass                                             (None)
// struct FAssetData                  ReturnValue                                                      (None)

void UAssetRegistryHelpers::CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass, const struct FAssetData& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistryHelpers", "CreateAssetData");

	Params::UAssetRegistryHelpers_CreateAssetData_Params Parms{};

	Parms.InAsset = InAsset;
	Parms.bAllowBlueprintClass = bAllowBlueprintClass;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AssetRegistry.AssetRegistry
// (None)

class UClass* IAssetRegistry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssetRegistry");

	return Clss;
}


// AssetRegistry AssetRegistry.Default__AssetRegistry
// (Public, ClassDefaultObject, ArchetypeObject)

class IAssetRegistry* IAssetRegistry::GetDefaultObj()
{
	static class IAssetRegistry* Default = nullptr;

	if (!Default)
		Default = static_cast<IAssetRegistry*>(IAssetRegistry::StaticClass()->DefaultObject);

	return Default;
}


// Function AssetRegistry.AssetRegistry.WaitForPackage
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PackageName                                                      (None)

void IAssetRegistry::WaitForPackage(const class FString& PackageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "WaitForPackage");

	Params::IAssetRegistry_WaitForPackage_Params Parms{};

	Parms.PackageName = PackageName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.WaitForCompletion
// (Native, Public, BlueprintCallable)
// Parameters:

void IAssetRegistry::WaitForCompletion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "WaitForCompletion");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// TArray<struct FAssetData>          AssetDataList                                                    (None)
// struct FARFilter                   Filter                                                           (None)

void IAssetRegistry::UseFilterToExcludeAssets(const TArray<struct FAssetData>& AssetDataList, const struct FARFilter& Filter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "UseFilterToExcludeAssets");

	Params::IAssetRegistry_UseFilterToExcludeAssets_Params Parms{};

	Parms.AssetDataList = AssetDataList;
	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.SearchAllAssets
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSynchronousSearch                                               (None)

void IAssetRegistry::SearchAllAssets(bool bSynchronousSearch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "SearchAllAssets");

	Params::IAssetRegistry_SearchAllAssets_Params Parms{};

	Parms.bSynchronousSearch = bSynchronousSearch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InPaths                                                          (None)
// bool                               bForceRescan                                                     (None)
// bool                               bIgnoreDenyListScanFilters                                       (None)

void IAssetRegistry::ScanPathsSynchronous(const TArray<class FString>& InPaths, bool bForceRescan, bool bIgnoreDenyListScanFilters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "ScanPathsSynchronous");

	Params::IAssetRegistry_ScanPathsSynchronous_Params Parms{};

	Parms.InPaths = InPaths;
	Parms.bForceRescan = bForceRescan;
	Parms.bIgnoreDenyListScanFilters = bIgnoreDenyListScanFilters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InFilePaths                                                      (None)

void IAssetRegistry::ScanModifiedAssetFiles(const TArray<class FString>& InFilePaths)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "ScanModifiedAssetFiles");

	Params::IAssetRegistry_ScanModifiedAssetFiles_Params Parms{};

	Parms.InFilePaths = InFilePaths;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InFilePaths                                                      (None)
// bool                               bForceRescan                                                     (None)

void IAssetRegistry::ScanFilesSynchronous(const TArray<class FString>& InFilePaths, bool bForceRescan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "ScanFilesSynchronous");

	Params::IAssetRegistry_ScanFilesSynchronous_Params Parms{};

	Parms.InFilePaths = InFilePaths;
	Parms.bForceRescan = bForceRescan;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// TArray<struct FAssetData>          AssetDataList                                                    (None)
// struct FARFilter                   Filter                                                           (None)

void IAssetRegistry::RunAssetsThroughFilter(const TArray<struct FAssetData>& AssetDataList, const struct FARFilter& Filter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "RunAssetsThroughFilter");

	Params::IAssetRegistry_RunAssetsThroughFilter_Params Parms{};

	Parms.AssetDataList = AssetDataList;
	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PathToPrioritize                                                 (None)

void IAssetRegistry::PrioritizeSearchPath(const class FString& PathToPrioritize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "PrioritizeSearchPath");

	Params::IAssetRegistry_PrioritizeSearchPath_Params Parms{};

	Parms.PathToPrioritize = PathToPrioritize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.K2_GetReferencers
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                        PackageName                                                      (None)
// struct FAssetRegistryDependencyOptionsReferenceOptions                                                 (None)
// TArray<class FName>                OutReferencers                                                   (None)
// bool                               ReturnValue                                                      (None)

void IAssetRegistry::K2_GetReferencers(class FName PackageName, const struct FAssetRegistryDependencyOptions& ReferenceOptions, const TArray<class FName>& OutReferencers, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "K2_GetReferencers");

	Params::IAssetRegistry_K2_GetReferencers_Params Parms{};

	Parms.PackageName = PackageName;
	Parms.ReferenceOptions = ReferenceOptions;
	Parms.OutReferencers = OutReferencers;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.K2_GetDependencies
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                        PackageName                                                      (None)
// struct FAssetRegistryDependencyOptionsDependencyOptions                                                (None)
// TArray<class FName>                OutDependencies                                                  (None)
// bool                               ReturnValue                                                      (None)

void IAssetRegistry::K2_GetDependencies(class FName PackageName, const struct FAssetRegistryDependencyOptions& DependencyOptions, const TArray<class FName>& OutDependencies, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "K2_GetDependencies");

	Params::IAssetRegistry_K2_GetDependencies_Params Parms{};

	Parms.PackageName = PackageName;
	Parms.DependencyOptions = DependencyOptions;
	Parms.OutDependencies = OutDependencies;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.K2_GetAssetByObjectPath
// (RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FSoftObjectPath             ObjectPath                                                       (None)
// bool                               bIncludeOnlyOnDiskAssets                                         (None)
// struct FAssetData                  ReturnValue                                                      (None)

void IAssetRegistry::K2_GetAssetByObjectPath(const struct FSoftObjectPath& ObjectPath, bool bIncludeOnlyOnDiskAssets, const struct FAssetData& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "K2_GetAssetByObjectPath");

	Params::IAssetRegistry_K2_GetAssetByObjectPath_Params Parms{};

	Parms.ObjectPath = ObjectPath;
	Parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.IsSearchAsync
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void IAssetRegistry::IsSearchAsync(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "IsSearchAsync");

	Params::IAssetRegistry_IsSearchAsync_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.IsSearchAllAssets
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void IAssetRegistry::IsSearchAllAssets(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "IsSearchAllAssets");

	Params::IAssetRegistry_IsSearchAllAssets_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.IsLoadingAssets
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void IAssetRegistry::IsLoadingAssets(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "IsLoadingAssets");

	Params::IAssetRegistry_IsLoadingAssets_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.HasAssets
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class FName                        PackagePath                                                      (None)
// bool                               bRecursive                                                       (None)
// bool                               ReturnValue                                                      (None)

void IAssetRegistry::HasAssets(class FName PackagePath, bool bRecursive, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "HasAssets");

	Params::IAssetRegistry_HasAssets_Params Parms{};

	Parms.PackagePath = PackagePath;
	Parms.bRecursive = bRecursive;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.GetSubPaths
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FString                      InBasePath                                                       (None)
// TArray<class FString>              OutPathList                                                      (None)
// bool                               bInRecurse                                                       (None)

void IAssetRegistry::GetSubPaths(const class FString& InBasePath, const TArray<class FString>& OutPathList, bool bInRecurse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetSubPaths");

	Params::IAssetRegistry_GetSubPaths_Params Parms{};

	Parms.InBasePath = InBasePath;
	Parms.OutPathList = OutPathList;
	Parms.bInRecurse = bInRecurse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.GetDerivedClassNames
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FTopLevelAssetPath>  ClassNames                                                       (None)
// TSet<struct FTopLevelAssetPath>    ExcludedClassNames                                               (None)
// TSet<struct FTopLevelAssetPath>    OutDerivedClassNames                                             (None)

void IAssetRegistry::GetDerivedClassNames(const TArray<struct FTopLevelAssetPath>& ClassNames, TSet<struct FTopLevelAssetPath> ExcludedClassNames, TSet<struct FTopLevelAssetPath> OutDerivedClassNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetDerivedClassNames");

	Params::IAssetRegistry_GetDerivedClassNames_Params Parms{};

	Parms.ClassNames = ClassNames;
	Parms.ExcludedClassNames = ExcludedClassNames;
	Parms.OutDerivedClassNames = OutDerivedClassNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.GetAssetsByPaths
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<class FName>                PackagePaths                                                     (None)
// TArray<struct FAssetData>          OutAssetData                                                     (None)
// bool                               bRecursive                                                       (None)
// bool                               bIncludeOnlyOnDiskAssets                                         (None)
// bool                               ReturnValue                                                      (None)

void IAssetRegistry::GetAssetsByPaths(const TArray<class FName>& PackagePaths, const TArray<struct FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAssetsByPaths");

	Params::IAssetRegistry_GetAssetsByPaths_Params Parms{};

	Parms.PackagePaths = PackagePaths;
	Parms.OutAssetData = OutAssetData;
	Parms.bRecursive = bRecursive;
	Parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.GetAssetsByPath
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                        PackagePath                                                      (None)
// TArray<struct FAssetData>          OutAssetData                                                     (None)
// bool                               bRecursive                                                       (None)
// bool                               bIncludeOnlyOnDiskAssets                                         (None)
// bool                               ReturnValue                                                      (None)

void IAssetRegistry::GetAssetsByPath(class FName PackagePath, const TArray<struct FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAssetsByPath");

	Params::IAssetRegistry_GetAssetsByPath_Params Parms{};

	Parms.PackagePath = PackagePath;
	Parms.OutAssetData = OutAssetData;
	Parms.bRecursive = bRecursive;
	Parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                        PackageName                                                      (None)
// TArray<struct FAssetData>          OutAssetData                                                     (None)
// bool                               bIncludeOnlyOnDiskAssets                                         (None)
// bool                               bSkipARFilteredAssets                                            (None)
// bool                               ReturnValue                                                      (None)

void IAssetRegistry::GetAssetsByPackageName(class FName PackageName, const TArray<struct FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAssetsByPackageName");

	Params::IAssetRegistry_GetAssetsByPackageName_Params Parms{};

	Parms.PackageName = PackageName;
	Parms.OutAssetData = OutAssetData;
	Parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;
	Parms.bSkipARFilteredAssets = bSkipARFilteredAssets;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.GetAssetsByClass
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FTopLevelAssetPath          ClassPathName                                                    (None)
// TArray<struct FAssetData>          OutAssetData                                                     (None)
// bool                               bSearchSubClasses                                                (None)
// bool                               ReturnValue                                                      (None)

void IAssetRegistry::GetAssetsByClass(const struct FTopLevelAssetPath& ClassPathName, const TArray<struct FAssetData>& OutAssetData, bool bSearchSubClasses, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAssetsByClass");

	Params::IAssetRegistry_GetAssetsByClass_Params Parms{};

	Parms.ClassPathName = ClassPathName;
	Parms.OutAssetData = OutAssetData;
	Parms.bSearchSubClasses = bSearchSubClasses;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.GetAssets
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FARFilter                   Filter                                                           (None)
// TArray<struct FAssetData>          OutAssetData                                                     (None)
// bool                               bSkipARFilteredAssets                                            (None)
// bool                               ReturnValue                                                      (None)

void IAssetRegistry::GetAssets(const struct FARFilter& Filter, const TArray<struct FAssetData>& OutAssetData, bool bSkipARFilteredAssets, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAssets");

	Params::IAssetRegistry_GetAssets_Params Parms{};

	Parms.Filter = Filter;
	Parms.OutAssetData = OutAssetData;
	Parms.bSkipARFilteredAssets = bSkipARFilteredAssets;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
// (Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// class FName                        ObjectPath                                                       (None)
// bool                               bIncludeOnlyOnDiskAssets                                         (None)
// struct FAssetData                  ReturnValue                                                      (None)

void IAssetRegistry::GetAssetByObjectPath(class FName ObjectPath, bool bIncludeOnlyOnDiskAssets, const struct FAssetData& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAssetByObjectPath");

	Params::IAssetRegistry_GetAssetByObjectPath_Params Parms{};

	Parms.ObjectPath = ObjectPath;
	Parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.GetAncestorClassNames
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FTopLevelAssetPath          ClassPathName                                                    (None)
// TArray<struct FTopLevelAssetPath>  OutAncestorClassNames                                            (None)
// bool                               ReturnValue                                                      (None)

void IAssetRegistry::GetAncestorClassNames(const struct FTopLevelAssetPath& ClassPathName, const TArray<struct FTopLevelAssetPath>& OutAncestorClassNames, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAncestorClassNames");

	Params::IAssetRegistry_GetAncestorClassNames_Params Parms{};

	Parms.ClassPathName = ClassPathName;
	Parms.OutAncestorClassNames = OutAncestorClassNames;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.GetAllCachedPaths
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<class FString>              OutPathList                                                      (None)

void IAssetRegistry::GetAllCachedPaths(const TArray<class FString>& OutPathList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAllCachedPaths");

	Params::IAssetRegistry_GetAllCachedPaths_Params Parms{};

	Parms.OutPathList = OutPathList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AssetRegistry.AssetRegistry.GetAllAssets
// (Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FAssetData>          OutAssetData                                                     (None)
// bool                               bIncludeOnlyOnDiskAssets                                         (None)
// bool                               ReturnValue                                                      (None)

void IAssetRegistry::GetAllAssets(const TArray<struct FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetRegistry", "GetAllAssets");

	Params::IAssetRegistry_GetAllAssets_Params Parms{};

	Parms.OutAssetData = OutAssetData;
	Parms.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AssetRegistry.AssetRegistryImpl
// (None)

class UClass* UAssetRegistryImpl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssetRegistryImpl");

	return Clss;
}


// AssetRegistryImpl AssetRegistry.Default__AssetRegistryImpl
// (Public, ClassDefaultObject, ArchetypeObject)

class UAssetRegistryImpl* UAssetRegistryImpl::GetDefaultObj()
{
	static class UAssetRegistryImpl* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssetRegistryImpl*>(UAssetRegistryImpl::StaticClass()->DefaultObject);

	return Default;
}

}


