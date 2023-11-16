#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class cfcore.CFCoreBPLibrary
// (None)

class UClass* UCFCoreBPLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CFCoreBPLibrary");

	return Clss;
}


// CFCoreBPLibrary cfcore.Default__CFCoreBPLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UCFCoreBPLibrary* UCFCoreBPLibrary::GetDefaultObj()
{
	static class UCFCoreBPLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UCFCoreBPLibrary*>(UCFCoreBPLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function cfcore.CFCoreBPLibrary.MakeUpdateModRequest
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Class_id                                                         (None)
// class FString                      Name                                                             (None)
// class FString                      Summary                                                          (None)
// enum class ECFCoreMakrupType       Description_type                                                 (None)
// class FString                      Description                                                      (None)
// int64                              Primary_category_id                                              (None)
// TArray<int64>                      Game_category_ids                                                (None)
// bool                               Is_experimental                                                  (None)
// struct FUpdateModRequest           ReturnValue                                                      (None)

void UCFCoreBPLibrary::MakeUpdateModRequest(int64 Class_id, const class FString& Name, const class FString& Summary, enum class ECFCoreMakrupType Description_type, const class FString& Description, int64 Primary_category_id, const TArray<int64>& Game_category_ids, bool Is_experimental, const struct FUpdateModRequest& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeUpdateModRequest");

	Params::UCFCoreBPLibrary_MakeUpdateModRequest_Params Parms{};

	Parms.Class_id = Class_id;
	Parms.Name = Name;
	Parms.Summary = Summary;
	Parms.Description_type = Description_type;
	Parms.Description = Description;
	Parms.Primary_category_id = Primary_category_id;
	Parms.Game_category_ids = Game_category_ids;
	Parms.Is_experimental = Is_experimental;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreBPLibrary.MakeSettingsFromProjectConfig
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FCFCoreSettings             ReturnValue                                                      (None)

void UCFCoreBPLibrary::MakeSettingsFromProjectConfig(const struct FCFCoreSettings& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeSettingsFromProjectConfig");

	Params::UCFCoreBPLibrary_MakeSettingsFromProjectConfig_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreBPLibrary.MakeSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Default_language                                                 (None)
// int64                              Game_id                                                          (None)
// class FString                      Api_key                                                          (None)
// class FString                      Mods_directory                                                   (None)
// class FString                      User_data_directory                                              (None)
// int32                              Max_concurrent_installations                                     (None)
// struct FCFCoreSettings             ReturnValue                                                      (None)

void UCFCoreBPLibrary::MakeSettings(const class FString& Default_language, int64 Game_id, const class FString& Api_key, const class FString& Mods_directory, const class FString& User_data_directory, int32 Max_concurrent_installations, const struct FCFCoreSettings& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeSettings");

	Params::UCFCoreBPLibrary_MakeSettings_Params Parms{};

	Parms.Default_language = Default_language;
	Parms.Game_id = Game_id;
	Parms.Api_key = Api_key;
	Parms.Mods_directory = Mods_directory;
	Parms.User_data_directory = User_data_directory;
	Parms.Max_concurrent_installations = Max_concurrent_installations;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreBPLibrary.MakeSearchModsFilter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Class_id                                                         (None)
// int32                              Category_id                                                      (None)
// class FString                      Game_version                                                     (None)
// class FString                      Search_filter                                                    (None)
// enum class ECFCoreModsSearchSortFieldSort_field                                                       (None)
// enum class ECFCoreSortOrder        Sort_order                                                       (None)
// enum class ECFCoreModLoaderType    Mod_loader_type                                                  (None)
// int32                              Game_version_type_id                                             (None)
// struct FCFCoreSearchModsFilter     ReturnValue                                                      (None)

void UCFCoreBPLibrary::MakeSearchModsFilter(int32 Class_id, int32 Category_id, const class FString& Game_version, const class FString& Search_filter, enum class ECFCoreModsSearchSortField Sort_field, enum class ECFCoreSortOrder Sort_order, enum class ECFCoreModLoaderType Mod_loader_type, int32 Game_version_type_id, const struct FCFCoreSearchModsFilter& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeSearchModsFilter");

	Params::UCFCoreBPLibrary_MakeSearchModsFilter_Params Parms{};

	Parms.Class_id = Class_id;
	Parms.Category_id = Category_id;
	Parms.Game_version = Game_version;
	Parms.Search_filter = Search_filter;
	Parms.Sort_field = Sort_field;
	Parms.Sort_order = Sort_order;
	Parms.Mod_loader_type = Mod_loader_type;
	Parms.Game_version_type_id = Game_version_type_id;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreBPLibrary.MakeGetCategoriesFilter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Class_id                                                         (None)
// struct FCFCoreGetCategoriesFilter  ReturnValue                                                      (None)

void UCFCoreBPLibrary::MakeGetCategoriesFilter(int32 Class_id, const struct FCFCoreGetCategoriesFilter& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeGetCategoriesFilter");

	Params::UCFCoreBPLibrary_MakeGetCategoriesFilter_Params Parms{};

	Parms.Class_id = Class_id;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreBPLibrary.MakeExternalAuthAdditionalInfo
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime                   EulaAcceptTime                                                   (None)
// struct FExternalAuthAdditionalInfo ReturnValue                                                      (None)

void UCFCoreBPLibrary::MakeExternalAuthAdditionalInfo(const struct FDateTime& EulaAcceptTime, const struct FExternalAuthAdditionalInfo& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeExternalAuthAdditionalInfo");

	Params::UCFCoreBPLibrary_MakeExternalAuthAdditionalInfo_Params Parms{};

	Parms.EulaAcceptTime = EulaAcceptTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreBPLibrary.MakeCreateModRequest
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Class_id                                                         (None)
// class FString                      Name                                                             (None)
// class FString                      Summary                                                          (None)
// enum class ECFCoreMakrupType       Description_type                                                 (None)
// class FString                      Description                                                      (None)
// int64                              Primary_category_id                                              (None)
// TArray<int64>                      Game_category_ids                                                (None)
// bool                               Is_experimental                                                  (None)
// struct FCreateModRequest           ReturnValue                                                      (None)

void UCFCoreBPLibrary::MakeCreateModRequest(int64 Class_id, const class FString& Name, const class FString& Summary, enum class ECFCoreMakrupType Description_type, const class FString& Description, int64 Primary_category_id, const TArray<int64>& Game_category_ids, bool Is_experimental, const struct FCreateModRequest& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeCreateModRequest");

	Params::UCFCoreBPLibrary_MakeCreateModRequest_Params Parms{};

	Parms.Class_id = Class_id;
	Parms.Name = Name;
	Parms.Summary = Summary;
	Parms.Description_type = Description_type;
	Parms.Description = Description;
	Parms.Primary_category_id = Primary_category_id;
	Parms.Game_category_ids = Game_category_ids;
	Parms.Is_experimental = Is_experimental;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreBPLibrary.MakeCreateModFileRequest
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ECFCoreChangelogMarkupTypeChangelog_type                                                   (None)
// class FString                      Changelog                                                        (None)
// class FString                      Filename                                                         (None)
// class FString                      DisplayName                                                      (None)
// TArray<int64>                      GameVersionIds                                                   (None)
// enum class ECFCoreFileReleaseType  ReleaseType                                                      (None)
// struct FCreateModFileRequest       ReturnValue                                                      (None)

void UCFCoreBPLibrary::MakeCreateModFileRequest(enum class ECFCoreChangelogMarkupType Changelog_type, const class FString& Changelog, const class FString& Filename, const class FString& DisplayName, const TArray<int64>& GameVersionIds, enum class ECFCoreFileReleaseType ReleaseType, const struct FCreateModFileRequest& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeCreateModFileRequest");

	Params::UCFCoreBPLibrary_MakeCreateModFileRequest_Params Parms{};

	Parms.Changelog_type = Changelog_type;
	Parms.Changelog = Changelog;
	Parms.Filename = Filename;
	Parms.DisplayName = DisplayName;
	Parms.GameVersionIds = GameVersionIds;
	Parms.ReleaseType = ReleaseType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreBPLibrary.MakeAssureServerModsUpdatedParams
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int64>                      ModIds                                                           (None)
// TArray<int64>                      DevModIds                                                        (None)
// struct FAssureServerModsUpdatedParamsReturnValue                                                      (None)

void UCFCoreBPLibrary::MakeAssureServerModsUpdatedParams(const TArray<int64>& ModIds, const TArray<int64>& DevModIds, const struct FAssureServerModsUpdatedParams& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeAssureServerModsUpdatedParams");

	Params::UCFCoreBPLibrary_MakeAssureServerModsUpdatedParams_Params Parms{};

	Parms.ModIds = ModIds;
	Parms.DevModIds = DevModIds;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreBPLibrary.MakeApiRequestPagination
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Index                                                            (None)
// int32                              Page_size                                                        (None)
// struct FCFCoreApiRequestPagination ReturnValue                                                      (None)

void UCFCoreBPLibrary::MakeApiRequestPagination(int32 Index, int32 Page_size, const struct FCFCoreApiRequestPagination& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "MakeApiRequestPagination");

	Params::UCFCoreBPLibrary_MakeApiRequestPagination_Params Parms{};

	Parms.Index = Index;
	Parms.Page_size = Page_size;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreBPLibrary.FormatFileSize
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Bytes                                                            (None)
// class FString                      ReturnValue                                                      (None)

void UCFCoreBPLibrary::FormatFileSize(int64 Bytes, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "FormatFileSize");

	Params::UCFCoreBPLibrary_FormatFileSize_Params Parms{};

	Parms.Bytes = Bytes;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreBPLibrary.BreakFileSize
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Bytes                                                            (None)
// struct FCFCoreFileSize             ReturnValue                                                      (None)

void UCFCoreBPLibrary::BreakFileSize(int64 Bytes, const struct FCFCoreFileSize& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreBPLibrary", "BreakFileSize");

	Params::UCFCoreBPLibrary_BreakFileSize_Params Parms{};

	Parms.Bytes = Bytes;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class cfcore.CFCoreEditorSettings
// (None)

class UClass* UCFCoreEditorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CFCoreEditorSettings");

	return Clss;
}


// CFCoreEditorSettings cfcore.Default__CFCoreEditorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UCFCoreEditorSettings* UCFCoreEditorSettings::GetDefaultObj()
{
	static class UCFCoreEditorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UCFCoreEditorSettings*>(UCFCoreEditorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class cfcore.CFCoreSubsystem
// (None)

class UClass* UCFCoreSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CFCoreSubsystem");

	return Clss;
}


// CFCoreSubsystem cfcore.Default__CFCoreSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UCFCoreSubsystem* UCFCoreSubsystem::GetDefaultObj()
{
	static class UCFCoreSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UCFCoreSubsystem*>(UCFCoreSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function cfcore.CFCoreSubsystem.UpdateMod
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              Mod_id                                                           (None)
// struct FUpdateModRequest           Update_mod_request                                               (None)
// class FString                      Avatar_image_filename                                            (None)
// FDelegateProperty_                 On_success                                                       (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::UpdateMod(int64 Mod_id, const struct FUpdateModRequest& Update_mod_request, const class FString& Avatar_image_filename, FDelegateProperty_ On_success, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "UpdateMod");

	Params::UCFCoreSubsystem_UpdateMod_Params Parms{};

	Parms.Mod_id = Mod_id;
	Parms.Update_mod_request = Update_mod_request;
	Parms.Avatar_image_filename = Avatar_image_filename;
	Parms.On_success = On_success;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.Unitialize
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnUninitialized                                                  (ZeroConstructor)
// FDelegateProperty_                 OnError                                                          (None)

void UCFCoreSubsystem::Unitialize(FDelegateProperty_ OnUninitialized, FDelegateProperty_ OnError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "Unitialize");

	Params::UCFCoreSubsystem_Unitialize_Params Parms{};

	Parms.OnUninitialized = OnUninitialized;
	Parms.OnError = OnError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.UninstallMod
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int64                              Mod_id                                                           (None)
// FDelegateProperty_                 On_uninstalled                                                   (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::UninstallMod(int64 Mod_id, FDelegateProperty_ On_uninstalled, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "UninstallMod");

	Params::UCFCoreSubsystem_UninstallMod_Params Parms{};

	Parms.Mod_id = Mod_id;
	Parms.On_uninstalled = On_uninstalled;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.SynchronizeWithServer
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_success                                                       (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::SynchronizeWithServer(FDelegateProperty_ On_success, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "SynchronizeWithServer");

	Params::UCFCoreSubsystem_SynchronizeWithServer_Params Parms{};

	Parms.On_success = On_success;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.SendSecurityCode
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Email                                                            (None)
// FDelegateProperty_                 On_success                                                       (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::SendSecurityCode(const class FString& Email, FDelegateProperty_ On_success, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "SendSecurityCode");

	Params::UCFCoreSubsystem_SendSecurityCode_Params Parms{};

	Parms.Email = Email;
	Parms.On_success = On_success;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.Logout
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_success                                                       (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::Logout(FDelegateProperty_ On_success, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "Logout");

	Params::UCFCoreSubsystem_Logout_Params Parms{};

	Parms.On_success = On_success;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.IsAuthenticated
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_is_auth                                                       (None)

void UCFCoreSubsystem::IsAuthenticated(FDelegateProperty_ On_is_auth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "IsAuthenticated");

	Params::UCFCoreSubsystem_IsAuthenticated_Params Parms{};

	Parms.On_is_auth = On_is_auth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.InstallMod
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreMod                  Mod                                                              (None)
// FDelegateProperty_                 On_progress                                                      (ZeroConstructor)
// FDelegateProperty_                 On_installed                                                     (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::InstallMod(const struct FCFCoreMod& Mod, FDelegateProperty_ On_progress, FDelegateProperty_ On_installed, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "InstallMod");

	Params::UCFCoreSubsystem_InstallMod_Params Parms{};

	Parms.Mod = Mod;
	Parms.On_progress = On_progress;
	Parms.On_installed = On_installed;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.Initialize
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreSettings             Settings                                                         (None)
// FDelegateProperty_                 OnInitialized                                                    (ZeroConstructor)
// FDelegateProperty_                 OnError                                                          (None)

void UCFCoreSubsystem::Initialize(const struct FCFCoreSettings& Settings, FDelegateProperty_ OnInitialized, FDelegateProperty_ OnError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "Initialize");

	Params::UCFCoreSubsystem_Initialize_Params Parms{};

	Parms.Settings = Settings;
	Parms.OnInitialized = OnInitialized;
	Parms.OnError = OnError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.GetModsDirInfo
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnModsDirInfo                                                    (ZeroConstructor)
// FDelegateProperty_                 OnError                                                          (None)

void UCFCoreSubsystem::GetModsDirInfo(FDelegateProperty_ OnModsDirInfo, FDelegateProperty_ OnError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "GetModsDirInfo");

	Params::UCFCoreSubsystem_GetModsDirInfo_Params Parms{};

	Parms.OnModsDirInfo = OnModsDirInfo;
	Parms.OnError = OnError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.GetInstalledMods
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_installed_mods                                                (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::GetInstalledMods(FDelegateProperty_ On_installed_mods, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "GetInstalledMods");

	Params::UCFCoreSubsystem_GetInstalledMods_Params Parms{};

	Parms.On_installed_mods = On_installed_mods;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.GetAuthTerms
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_success                                                       (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::GetAuthTerms(FDelegateProperty_ On_success, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "GetAuthTerms");

	Params::UCFCoreSubsystem_GetAuthTerms_Params Parms{};

	Parms.On_success = On_success;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.GenerateAuthTokenByExternalProvider
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ECFCoreExternalAuthProviderProvider                                                         (None)
// class FString                      External_token                                                   (None)
// struct FExternalAuthAdditionalInfo Additional_info                                                  (None)
// FDelegateProperty_                 On_success                                                       (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::GenerateAuthTokenByExternalProvider(enum class ECFCoreExternalAuthProvider Provider, const class FString& External_token, const struct FExternalAuthAdditionalInfo& Additional_info, FDelegateProperty_ On_success, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "GenerateAuthTokenByExternalProvider");

	Params::UCFCoreSubsystem_GenerateAuthTokenByExternalProvider_Params Parms{};

	Parms.Provider = Provider;
	Parms.External_token = External_token;
	Parms.Additional_info = Additional_info;
	Parms.On_success = On_success;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.GenerateAuthToken
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Email                                                            (None)
// int32                              Security_code                                                    (None)
// FDelegateProperty_                 On_success                                                       (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::GenerateAuthToken(const class FString& Email, int32 Security_code, FDelegateProperty_ On_success, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "GenerateAuthToken");

	Params::UCFCoreSubsystem_GenerateAuthToken_Params Parms{};

	Parms.Email = Email;
	Parms.Security_code = Security_code;
	Parms.On_success = On_success;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.CreateModFile
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (None)
// struct FCreateModFileRequest       CreateModFileRequest                                             (None)
// class FString                      LocalFilenameToUpload                                            (None)
// FDelegateProperty_                 OnCreateModFileRequestId                                         (ZeroConstructor)
// FDelegateProperty_                 OnProgress                                                       (ZeroConstructor)
// FDelegateProperty_                 OnSuccess                                                        (ZeroConstructor)
// FDelegateProperty_                 OnError                                                          (None)

void UCFCoreSubsystem::CreateModFile(int64 ModId, const struct FCreateModFileRequest& CreateModFileRequest, const class FString& LocalFilenameToUpload, FDelegateProperty_ OnCreateModFileRequestId, FDelegateProperty_ OnProgress, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "CreateModFile");

	Params::UCFCoreSubsystem_CreateModFile_Params Parms{};

	Parms.ModId = ModId;
	Parms.CreateModFileRequest = CreateModFileRequest;
	Parms.LocalFilenameToUpload = LocalFilenameToUpload;
	Parms.OnCreateModFileRequestId = OnCreateModFileRequestId;
	Parms.OnProgress = OnProgress;
	Parms.OnSuccess = OnSuccess;
	Parms.OnError = OnError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.CreateMod
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCreateModRequest           Create_mod_request                                               (None)
// class FString                      Avatar_image_filename                                            (None)
// FDelegateProperty_                 On_success                                                       (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::CreateMod(const struct FCreateModRequest& Create_mod_request, const class FString& Avatar_image_filename, FDelegateProperty_ On_success, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "CreateMod");

	Params::UCFCoreSubsystem_CreateMod_Params Parms{};

	Parms.Create_mod_request = Create_mod_request;
	Parms.Avatar_image_filename = Avatar_image_filename;
	Parms.On_success = On_success;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.CreateCookedModFile
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (None)
// int64                              SourceFileId                                                     (None)
// struct FCreateCookedModFileRequest CreateCookedModFileRequest                                       (None)
// class FString                      LocalFilenameToUpload                                            (None)
// FDelegateProperty_                 OnCreateModFileRequestId                                         (ZeroConstructor)
// FDelegateProperty_                 OnProgress                                                       (ZeroConstructor)
// FDelegateProperty_                 OnSuccess                                                        (ZeroConstructor)
// FDelegateProperty_                 OnError                                                          (None)

void UCFCoreSubsystem::CreateCookedModFile(int64 ModId, int64 SourceFileId, const struct FCreateCookedModFileRequest& CreateCookedModFileRequest, const class FString& LocalFilenameToUpload, FDelegateProperty_ OnCreateModFileRequestId, FDelegateProperty_ OnProgress, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "CreateCookedModFile");

	Params::UCFCoreSubsystem_CreateCookedModFile_Params Parms{};

	Parms.ModId = ModId;
	Parms.SourceFileId = SourceFileId;
	Parms.CreateCookedModFileRequest = CreateCookedModFileRequest;
	Parms.LocalFilenameToUpload = LocalFilenameToUpload;
	Parms.OnCreateModFileRequestId = OnCreateModFileRequestId;
	Parms.OnProgress = OnProgress;
	Parms.OnSuccess = OnSuccess;
	Parms.OnError = OnError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.CancelInstallation
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int64                              Mod_id                                                           (None)
// FDelegateProperty_                 On_success                                                       (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::CancelInstallation(int64 Mod_id, FDelegateProperty_ On_success, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "CancelInstallation");

	Params::UCFCoreSubsystem_CancelInstallation_Params Parms{};

	Parms.Mod_id = Mod_id;
	Parms.On_success = On_success;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.AssureServerModsUpdated
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAssureServerModsUpdatedParamsParams                                                           (None)
// FDelegateProperty_                 OnProgress                                                       (ZeroConstructor)
// FDelegateProperty_                 OnUpdated                                                        (ZeroConstructor)
// FDelegateProperty_                 OnError                                                          (None)

void UCFCoreSubsystem::AssureServerModsUpdated(const struct FAssureServerModsUpdatedParams& Params, FDelegateProperty_ OnProgress, FDelegateProperty_ OnUpdated, FDelegateProperty_ OnError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "AssureServerModsUpdated");

	Params::UCFCoreSubsystem_AssureServerModsUpdated_Params Parms{};

	Parms.Params = Params;
	Parms.OnProgress = OnProgress;
	Parms.OnUpdated = OnUpdated;
	Parms.OnError = OnError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.AssureClientModsUpdated
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int64>                      ServerFileIds                                                    (None)
// FDelegateProperty_                 OnProgress                                                       (ZeroConstructor)
// FDelegateProperty_                 OnUpdated                                                        (ZeroConstructor)
// FDelegateProperty_                 OnError                                                          (None)

void UCFCoreSubsystem::AssureClientModsUpdated(const TArray<int64>& ServerFileIds, FDelegateProperty_ OnProgress, FDelegateProperty_ OnUpdated, FDelegateProperty_ OnError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "AssureClientModsUpdated");

	Params::UCFCoreSubsystem_AssureClientModsUpdated_Params Parms{};

	Parms.ServerFileIds = ServerFileIds;
	Parms.OnProgress = OnProgress;
	Parms.OnUpdated = OnUpdated;
	Parms.OnError = OnError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.ApiUpdateThumbsUp
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (None)
// enum class ECFCoreThumbsUpDirectionDirection                                                        (None)
// FDelegateProperty_                 On_success                                                       (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::ApiUpdateThumbsUp(int64 ModId, enum class ECFCoreThumbsUpDirection Direction, FDelegateProperty_ On_success, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiUpdateThumbsUp");

	Params::UCFCoreSubsystem_ApiUpdateThumbsUp_Params Parms{};

	Parms.ModId = ModId;
	Parms.Direction = Direction;
	Parms.On_success = On_success;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.ApiUnblockMods
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FUnblockModsRequest         Request                                                          (None)
// FDelegateProperty_                 OnResult                                                         (ZeroConstructor)
// FDelegateProperty_                 OnError                                                          (None)

void UCFCoreSubsystem::ApiUnblockMods(const struct FUnblockModsRequest& Request, FDelegateProperty_ OnResult, FDelegateProperty_ OnError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiUnblockMods");

	Params::UCFCoreSubsystem_ApiUnblockMods_Params Parms{};

	Parms.Request = Request;
	Parms.OnResult = OnResult;
	Parms.OnError = OnError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.ApiSearchMods
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreSearchModsFilter     Filter                                                           (None)
// struct FCFCoreApiRequestPagination Pagination                                                       (None)
// FDelegateProperty_                 On_results                                                       (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::ApiSearchMods(const struct FCFCoreSearchModsFilter& Filter, const struct FCFCoreApiRequestPagination& Pagination, FDelegateProperty_ On_results, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiSearchMods");

	Params::UCFCoreSubsystem_ApiSearchMods_Params Parms{};

	Parms.Filter = Filter;
	Parms.Pagination = Pagination;
	Parms.On_results = On_results;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.ApiReportMod
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (None)
// int64                              ReasonId                                                         (None)
// class FString                      Report                                                           (None)
// FDelegateProperty_                 On_reasons                                                       (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::ApiReportMod(int64 ModId, int64 ReasonId, const class FString& Report, FDelegateProperty_ On_reasons, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiReportMod");

	Params::UCFCoreSubsystem_ApiReportMod_Params Parms{};

	Parms.ModId = ModId;
	Parms.ReasonId = ReasonId;
	Parms.Report = Report;
	Parms.On_reasons = On_reasons;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.ApiGetVersionTypes
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_results                                                       (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::ApiGetVersionTypes(FDelegateProperty_ On_results, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetVersionTypes");

	Params::UCFCoreSubsystem_ApiGetVersionTypes_Params Parms{};

	Parms.On_results = On_results;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.ApiGetVersions
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_results                                                       (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::ApiGetVersions(FDelegateProperty_ On_results, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetVersions");

	Params::UCFCoreSubsystem_ApiGetVersions_Params Parms{};

	Parms.On_results = On_results;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.ApiGetReportingReasons
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_results                                                       (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::ApiGetReportingReasons(FDelegateProperty_ On_results, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetReportingReasons");

	Params::UCFCoreSubsystem_ApiGetReportingReasons_Params Parms{};

	Parms.On_results = On_results;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.ApiGetMyThumbsUp
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_results                                                       (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::ApiGetMyThumbsUp(FDelegateProperty_ On_results, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetMyThumbsUp");

	Params::UCFCoreSubsystem_ApiGetMyThumbsUp_Params Parms{};

	Parms.On_results = On_results;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.ApiGetMyMods
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_results                                                       (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::ApiGetMyMods(FDelegateProperty_ On_results, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetMyMods");

	Params::UCFCoreSubsystem_ApiGetMyMods_Params Parms{};

	Parms.On_results = On_results;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.ApiGetMods
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int64>                      ModIds                                                           (None)
// FDelegateProperty_                 On_results                                                       (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::ApiGetMods(const TArray<int64>& ModIds, FDelegateProperty_ On_results, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetMods");

	Params::UCFCoreSubsystem_ApiGetMods_Params Parms{};

	Parms.ModIds = ModIds;
	Parms.On_results = On_results;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.ApiGetModDescription
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (None)
// FDelegateProperty_                 On_mod_desc                                                      (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::ApiGetModDescription(int64 ModId, FDelegateProperty_ On_mod_desc, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetModDescription");

	Params::UCFCoreSubsystem_ApiGetModDescription_Params Parms{};

	Parms.ModId = ModId;
	Parms.On_mod_desc = On_mod_desc;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.ApiGetMod
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              ModId                                                            (None)
// FDelegateProperty_                 On_mod                                                           (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::ApiGetMod(int64 ModId, FDelegateProperty_ On_mod, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetMod");

	Params::UCFCoreSubsystem_ApiGetMod_Params Parms{};

	Parms.ModId = ModId;
	Parms.On_mod = On_mod;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.ApiGetMe
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_results                                                       (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::ApiGetMe(FDelegateProperty_ On_results, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetMe");

	Params::UCFCoreSubsystem_ApiGetMe_Params Parms{};

	Parms.On_results = On_results;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.ApiGetGame
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_game                                                          (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::ApiGetGame(FDelegateProperty_ On_game, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetGame");

	Params::UCFCoreSubsystem_ApiGetGame_Params Parms{};

	Parms.On_game = On_game;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.ApiGetFiles
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int64>                      FileIds                                                          (None)
// FDelegateProperty_                 OnResults                                                        (ZeroConstructor)
// FDelegateProperty_                 OnError                                                          (None)

void UCFCoreSubsystem::ApiGetFiles(const TArray<int64>& FileIds, FDelegateProperty_ OnResults, FDelegateProperty_ OnError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetFiles");

	Params::UCFCoreSubsystem_ApiGetFiles_Params Parms{};

	Parms.FileIds = FileIds;
	Parms.OnResults = OnResults;
	Parms.OnError = OnError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.ApiGetCategories
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCFCoreGetCategoriesFilter  Filter                                                           (None)
// FDelegateProperty_                 On_results                                                       (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::ApiGetCategories(const struct FCFCoreGetCategoriesFilter& Filter, FDelegateProperty_ On_results, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetCategories");

	Params::UCFCoreSubsystem_ApiGetCategories_Params Parms{};

	Parms.Filter = Filter;
	Parms.On_results = On_results;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.ApiGetBlockedModsDetails
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_result                                                        (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::ApiGetBlockedModsDetails(FDelegateProperty_ On_result, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetBlockedModsDetails");

	Params::UCFCoreSubsystem_ApiGetBlockedModsDetails_Params Parms{};

	Parms.On_result = On_result;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.ApiGetActiveCookingVersion
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnVersion                                                        (ZeroConstructor)
// FDelegateProperty_                 OnError                                                          (None)

void UCFCoreSubsystem::ApiGetActiveCookingVersion(FDelegateProperty_ OnVersion, FDelegateProperty_ OnError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGetActiveCookingVersion");

	Params::UCFCoreSubsystem_ApiGetActiveCookingVersion_Params Parms{};

	Parms.OnVersion = OnVersion;
	Parms.OnError = OnError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function cfcore.CFCoreSubsystem.ApiGenerateTempToken
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 On_result                                                        (ZeroConstructor)
// FDelegateProperty_                 On_error                                                         (None)

void UCFCoreSubsystem::ApiGenerateTempToken(FDelegateProperty_ On_result, FDelegateProperty_ On_error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CFCoreSubsystem", "ApiGenerateTempToken");

	Params::UCFCoreSubsystem_ApiGenerateTempToken_Params Parms{};

	Parms.On_result = On_result;
	Parms.On_error = On_error;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


