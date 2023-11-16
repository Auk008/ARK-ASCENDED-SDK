#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class cfcore.CFCoreBPLibrary
class UCFCoreBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCFCoreBPLibrary* GetDefaultObj();

	void MakeUpdateModRequest(int64 Class_id, const class FString& Name, const class FString& Summary, enum class ECFCoreMakrupType Description_type, const class FString& Description, int64 Primary_category_id, const TArray<int64>& Game_category_ids, bool Is_experimental, const struct FUpdateModRequest& ReturnValue);
	void MakeSettingsFromProjectConfig(const struct FCFCoreSettings& ReturnValue);
	void MakeSettings(const class FString& Default_language, int64 Game_id, const class FString& Api_key, const class FString& Mods_directory, const class FString& User_data_directory, int32 Max_concurrent_installations, const struct FCFCoreSettings& ReturnValue);
	void MakeSearchModsFilter(int32 Class_id, int32 Category_id, const class FString& Game_version, const class FString& Search_filter, enum class ECFCoreModsSearchSortField Sort_field, enum class ECFCoreSortOrder Sort_order, enum class ECFCoreModLoaderType Mod_loader_type, int32 Game_version_type_id, const struct FCFCoreSearchModsFilter& ReturnValue);
	void MakeGetCategoriesFilter(int32 Class_id, const struct FCFCoreGetCategoriesFilter& ReturnValue);
	void MakeExternalAuthAdditionalInfo(const struct FDateTime& EulaAcceptTime, const struct FExternalAuthAdditionalInfo& ReturnValue);
	void MakeCreateModRequest(int64 Class_id, const class FString& Name, const class FString& Summary, enum class ECFCoreMakrupType Description_type, const class FString& Description, int64 Primary_category_id, const TArray<int64>& Game_category_ids, bool Is_experimental, const struct FCreateModRequest& ReturnValue);
	void MakeCreateModFileRequest(enum class ECFCoreChangelogMarkupType Changelog_type, const class FString& Changelog, const class FString& Filename, const class FString& DisplayName, const TArray<int64>& GameVersionIds, enum class ECFCoreFileReleaseType ReleaseType, const struct FCreateModFileRequest& ReturnValue);
	void MakeAssureServerModsUpdatedParams(const TArray<int64>& ModIds, const TArray<int64>& DevModIds, const struct FAssureServerModsUpdatedParams& ReturnValue);
	void MakeApiRequestPagination(int32 Index, int32 Page_size, const struct FCFCoreApiRequestPagination& ReturnValue);
	void FormatFileSize(int64 Bytes, const class FString& ReturnValue);
	void BreakFileSize(int64 Bytes, const struct FCFCoreFileSize& ReturnValue);
};

// 0x68 (0x90 - 0x28)
// Class cfcore.CFCoreEditorSettings
class UCFCoreEditorSettings : public UObject
{
public:
	class FString                                DefaultLanguage;                                   // 0x28(0x10)(None)
	int64                                        GameId;                                            // 0x38(0x8)(None)
	class FString                                ApiKey;                                            // 0x40(0x10)(None)
	int32                                        MaxConcurrentInstallations;                        // 0x50(0x4)(None)
	uint8                                        Pad_3E0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ModsDirectory;                                     // 0x58(0x10)(None)
	enum class EModsDirectoryMode                ModsDirectoryMode;                                 // 0x68(0x1)(None)
	uint8                                        Pad_3E1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UserDataDirectory;                                 // 0x70(0x10)(None)
	bool                                         IsServer;                                          // 0x80(0x1)(None)
	bool                                         IsServerPcOnly;                                    // 0x81(0x1)(None)
	uint8                                        Pad_3E2[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreSettingsThrottling             Throttling;                                        // 0x88(0x8)(None)

	static class UClass* StaticClass();
	static class UCFCoreEditorSettings* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class cfcore.CFCoreSubsystem
class UCFCoreSubsystem : public UEngineSubsystem
{
public:

	static class UClass* StaticClass();
	static class UCFCoreSubsystem* GetDefaultObj();

	void UpdateMod(int64 Mod_id, const struct FUpdateModRequest& Update_mod_request, const class FString& Avatar_image_filename, FDelegateProperty_ On_success, FDelegateProperty_ On_error);
	void Unitialize(FDelegateProperty_ OnUninitialized, FDelegateProperty_ OnError);
	void UninstallMod(int64 Mod_id, FDelegateProperty_ On_uninstalled, FDelegateProperty_ On_error);
	void SynchronizeWithServer(FDelegateProperty_ On_success, FDelegateProperty_ On_error);
	void SendSecurityCode(const class FString& Email, FDelegateProperty_ On_success, FDelegateProperty_ On_error);
	void Logout(FDelegateProperty_ On_success, FDelegateProperty_ On_error);
	void IsAuthenticated(FDelegateProperty_ On_is_auth);
	void InstallMod(const struct FCFCoreMod& Mod, FDelegateProperty_ On_progress, FDelegateProperty_ On_installed, FDelegateProperty_ On_error);
	void Initialize(const struct FCFCoreSettings& Settings, FDelegateProperty_ OnInitialized, FDelegateProperty_ OnError);
	void GetModsDirInfo(FDelegateProperty_ OnModsDirInfo, FDelegateProperty_ OnError);
	void GetInstalledMods(FDelegateProperty_ On_installed_mods, FDelegateProperty_ On_error);
	void GetAuthTerms(FDelegateProperty_ On_success, FDelegateProperty_ On_error);
	void GenerateAuthTokenByExternalProvider(enum class ECFCoreExternalAuthProvider Provider, const class FString& External_token, const struct FExternalAuthAdditionalInfo& Additional_info, FDelegateProperty_ On_success, FDelegateProperty_ On_error);
	void GenerateAuthToken(const class FString& Email, int32 Security_code, FDelegateProperty_ On_success, FDelegateProperty_ On_error);
	void CreateModFile(int64 ModId, const struct FCreateModFileRequest& CreateModFileRequest, const class FString& LocalFilenameToUpload, FDelegateProperty_ OnCreateModFileRequestId, FDelegateProperty_ OnProgress, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnError);
	void CreateMod(const struct FCreateModRequest& Create_mod_request, const class FString& Avatar_image_filename, FDelegateProperty_ On_success, FDelegateProperty_ On_error);
	void CreateCookedModFile(int64 ModId, int64 SourceFileId, const struct FCreateCookedModFileRequest& CreateCookedModFileRequest, const class FString& LocalFilenameToUpload, FDelegateProperty_ OnCreateModFileRequestId, FDelegateProperty_ OnProgress, FDelegateProperty_ OnSuccess, FDelegateProperty_ OnError);
	void CancelInstallation(int64 Mod_id, FDelegateProperty_ On_success, FDelegateProperty_ On_error);
	void AssureServerModsUpdated(const struct FAssureServerModsUpdatedParams& Params, FDelegateProperty_ OnProgress, FDelegateProperty_ OnUpdated, FDelegateProperty_ OnError);
	void AssureClientModsUpdated(const TArray<int64>& ServerFileIds, FDelegateProperty_ OnProgress, FDelegateProperty_ OnUpdated, FDelegateProperty_ OnError);
	void ApiUpdateThumbsUp(int64 ModId, enum class ECFCoreThumbsUpDirection Direction, FDelegateProperty_ On_success, FDelegateProperty_ On_error);
	void ApiUnblockMods(const struct FUnblockModsRequest& Request, FDelegateProperty_ OnResult, FDelegateProperty_ OnError);
	void ApiSearchMods(const struct FCFCoreSearchModsFilter& Filter, const struct FCFCoreApiRequestPagination& Pagination, FDelegateProperty_ On_results, FDelegateProperty_ On_error);
	void ApiReportMod(int64 ModId, int64 ReasonId, const class FString& Report, FDelegateProperty_ On_reasons, FDelegateProperty_ On_error);
	void ApiGetVersionTypes(FDelegateProperty_ On_results, FDelegateProperty_ On_error);
	void ApiGetVersions(FDelegateProperty_ On_results, FDelegateProperty_ On_error);
	void ApiGetReportingReasons(FDelegateProperty_ On_results, FDelegateProperty_ On_error);
	void ApiGetMyThumbsUp(FDelegateProperty_ On_results, FDelegateProperty_ On_error);
	void ApiGetMyMods(FDelegateProperty_ On_results, FDelegateProperty_ On_error);
	void ApiGetMods(const TArray<int64>& ModIds, FDelegateProperty_ On_results, FDelegateProperty_ On_error);
	void ApiGetModDescription(int64 ModId, FDelegateProperty_ On_mod_desc, FDelegateProperty_ On_error);
	void ApiGetMod(int64 ModId, FDelegateProperty_ On_mod, FDelegateProperty_ On_error);
	void ApiGetMe(FDelegateProperty_ On_results, FDelegateProperty_ On_error);
	void ApiGetGame(FDelegateProperty_ On_game, FDelegateProperty_ On_error);
	void ApiGetFiles(const TArray<int64>& FileIds, FDelegateProperty_ OnResults, FDelegateProperty_ OnError);
	void ApiGetCategories(const struct FCFCoreGetCategoriesFilter& Filter, FDelegateProperty_ On_results, FDelegateProperty_ On_error);
	void ApiGetBlockedModsDetails(FDelegateProperty_ On_result, FDelegateProperty_ On_error);
	void ApiGetActiveCookingVersion(FDelegateProperty_ OnVersion, FDelegateProperty_ OnError);
	void ApiGenerateTempToken(FDelegateProperty_ On_result, FDelegateProperty_ On_error);
};

}


