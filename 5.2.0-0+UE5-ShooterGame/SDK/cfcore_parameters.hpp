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

// 0xC0 (0xC0 - 0x0)
// Function cfcore.CFCoreBPLibrary.MakeUpdateModRequest
struct UCFCoreBPLibrary_MakeUpdateModRequest_Params
{
public:
	int64                                        Class_id;                                          // 0x0(0x8)(None)
	class FString                                Name;                                              // 0x8(0x10)(None)
	class FString                                Summary;                                           // 0x18(0x10)(None)
	enum class ECFCoreMakrupType                 Description_type;                                  // 0x28(0x1)(None)
	uint8                                        Pad_3CA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Description;                                       // 0x30(0x10)(None)
	int64                                        Primary_category_id;                               // 0x40(0x8)(None)
	TArray<int64>                                Game_category_ids;                                 // 0x48(0x10)(None)
	bool                                         Is_experimental;                                   // 0x58(0x1)(None)
	uint8                                        Pad_3CB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUpdateModRequest                     ReturnValue;                                       // 0x60(0x60)(None)
};

// 0x68 (0x68 - 0x0)
// Function cfcore.CFCoreBPLibrary.MakeSettingsFromProjectConfig
struct UCFCoreBPLibrary_MakeSettingsFromProjectConfig_Params
{
public:
	struct FCFCoreSettings                       ReturnValue;                                       // 0x0(0x68)(None)
};

// 0xB8 (0xB8 - 0x0)
// Function cfcore.CFCoreBPLibrary.MakeSettings
struct UCFCoreBPLibrary_MakeSettings_Params
{
public:
	class FString                                Default_language;                                  // 0x0(0x10)(None)
	int64                                        Game_id;                                           // 0x10(0x8)(None)
	class FString                                Api_key;                                           // 0x18(0x10)(None)
	class FString                                Mods_directory;                                    // 0x28(0x10)(None)
	class FString                                User_data_directory;                               // 0x38(0x10)(None)
	int32                                        Max_concurrent_installations;                      // 0x48(0x4)(None)
	uint8                                        Pad_3CD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreSettings                       ReturnValue;                                       // 0x50(0x68)(None)
};

// 0x60 (0x60 - 0x0)
// Function cfcore.CFCoreBPLibrary.MakeSearchModsFilter
struct UCFCoreBPLibrary_MakeSearchModsFilter_Params
{
public:
	int32                                        Class_id;                                          // 0x0(0x4)(None)
	int32                                        Category_id;                                       // 0x4(0x4)(None)
	class FString                                Game_version;                                      // 0x8(0x10)(None)
	class FString                                Search_filter;                                     // 0x18(0x10)(None)
	enum class ECFCoreModsSearchSortField        Sort_field;                                        // 0x28(0x1)(None)
	enum class ECFCoreSortOrder                  Sort_order;                                        // 0x29(0x1)(None)
	enum class ECFCoreModLoaderType              Mod_loader_type;                                   // 0x2A(0x1)(None)
	uint8                                        Pad_3CE[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Game_version_type_id;                              // 0x2C(0x4)(None)
	struct FCFCoreSearchModsFilter               ReturnValue;                                       // 0x30(0x30)(None)
};

// 0x8 (0x8 - 0x0)
// Function cfcore.CFCoreBPLibrary.MakeGetCategoriesFilter
struct UCFCoreBPLibrary_MakeGetCategoriesFilter_Params
{
public:
	int32                                        Class_id;                                          // 0x0(0x4)(None)
	struct FCFCoreGetCategoriesFilter            ReturnValue;                                       // 0x4(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreBPLibrary.MakeExternalAuthAdditionalInfo
struct UCFCoreBPLibrary_MakeExternalAuthAdditionalInfo_Params
{
public:
	struct FDateTime                             EulaAcceptTime;                                    // 0x0(0x8)(None)
	struct FExternalAuthAdditionalInfo           ReturnValue;                                       // 0x8(0x18)(None)
};

// 0xC0 (0xC0 - 0x0)
// Function cfcore.CFCoreBPLibrary.MakeCreateModRequest
struct UCFCoreBPLibrary_MakeCreateModRequest_Params
{
public:
	int64                                        Class_id;                                          // 0x0(0x8)(None)
	class FString                                Name;                                              // 0x8(0x10)(None)
	class FString                                Summary;                                           // 0x18(0x10)(None)
	enum class ECFCoreMakrupType                 Description_type;                                  // 0x28(0x1)(None)
	uint8                                        Pad_3D5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Description;                                       // 0x30(0x10)(None)
	int64                                        Primary_category_id;                               // 0x40(0x8)(None)
	TArray<int64>                                Game_category_ids;                                 // 0x48(0x10)(None)
	bool                                         Is_experimental;                                   // 0x58(0x1)(None)
	uint8                                        Pad_3D6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCreateModRequest                     ReturnValue;                                       // 0x60(0x60)(None)
};

// 0xA8 (0xA8 - 0x0)
// Function cfcore.CFCoreBPLibrary.MakeCreateModFileRequest
struct UCFCoreBPLibrary_MakeCreateModFileRequest_Params
{
public:
	enum class ECFCoreChangelogMarkupType        Changelog_type;                                    // 0x0(0x1)(None)
	uint8                                        Pad_3D8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Changelog;                                         // 0x8(0x10)(None)
	class FString                                Filename;                                          // 0x18(0x10)(None)
	class FString                                DisplayName;                                       // 0x28(0x10)(None)
	TArray<int64>                                GameVersionIds;                                    // 0x38(0x10)(None)
	enum class ECFCoreFileReleaseType            ReleaseType;                                       // 0x48(0x1)(None)
	uint8                                        Pad_3DA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCreateModFileRequest                 ReturnValue;                                       // 0x50(0x58)(None)
};

// 0x40 (0x40 - 0x0)
// Function cfcore.CFCoreBPLibrary.MakeAssureServerModsUpdatedParams
struct UCFCoreBPLibrary_MakeAssureServerModsUpdatedParams_Params
{
public:
	TArray<int64>                                ModIds;                                            // 0x0(0x10)(None)
	TArray<int64>                                DevModIds;                                         // 0x10(0x10)(None)
	struct FAssureServerModsUpdatedParams        ReturnValue;                                       // 0x20(0x20)(None)
};

// 0x10 (0x10 - 0x0)
// Function cfcore.CFCoreBPLibrary.MakeApiRequestPagination
struct UCFCoreBPLibrary_MakeApiRequestPagination_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(None)
	int32                                        Page_size;                                         // 0x4(0x4)(None)
	struct FCFCoreApiRequestPagination           ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function cfcore.CFCoreBPLibrary.FormatFileSize
struct UCFCoreBPLibrary_FormatFileSize_Params
{
public:
	int64                                        Bytes;                                             // 0x0(0x8)(None)
	class FString                                ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function cfcore.CFCoreBPLibrary.BreakFileSize
struct UCFCoreBPLibrary_BreakFileSize_Params
{
public:
	int64                                        Bytes;                                             // 0x0(0x8)(None)
	struct FCFCoreFileSize                       ReturnValue;                                       // 0x8(0xC)(None)
	uint8                                        Pad_3DB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function cfcore.CFCoreSubsystem.UpdateMod
struct UCFCoreSubsystem_UpdateMod_Params
{
public:
	int64                                        Mod_id;                                            // 0x0(0x8)(None)
	struct FUpdateModRequest                     Update_mod_request;                                // 0x8(0x60)(None)
	class FString                                Avatar_image_filename;                             // 0x68(0x10)(None)
	FDelegateProperty_                           On_success;                                        // 0x78(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x88(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.Unitialize
struct UCFCoreSubsystem_Unitialize_Params
{
public:
	FDelegateProperty_                           OnUninitialized;                                   // 0x0(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnError;                                           // 0x10(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function cfcore.CFCoreSubsystem.UninstallMod
struct UCFCoreSubsystem_UninstallMod_Params
{
public:
	int64                                        Mod_id;                                            // 0x0(0x8)(None)
	FDelegateProperty_                           On_uninstalled;                                    // 0x8(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x18(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.SynchronizeWithServer
struct UCFCoreSubsystem_SynchronizeWithServer_Params
{
public:
	FDelegateProperty_                           On_success;                                        // 0x0(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function cfcore.CFCoreSubsystem.SendSecurityCode
struct UCFCoreSubsystem_SendSecurityCode_Params
{
public:
	class FString                                Email;                                             // 0x0(0x10)(None)
	FDelegateProperty_                           On_success;                                        // 0x10(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x20(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.Logout
struct UCFCoreSubsystem_Logout_Params
{
public:
	FDelegateProperty_                           On_success;                                        // 0x0(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function cfcore.CFCoreSubsystem.IsAuthenticated
struct UCFCoreSubsystem_IsAuthenticated_Params
{
public:
	FDelegateProperty_                           On_is_auth;                                        // 0x0(0x10)(None)
};

// 0x1C0 (0x1C0 - 0x0)
// Function cfcore.CFCoreSubsystem.InstallMod
struct UCFCoreSubsystem_InstallMod_Params
{
public:
	struct FCFCoreMod                            Mod;                                               // 0x0(0x190)(None)
	FDelegateProperty_                           On_progress;                                       // 0x190(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_installed;                                      // 0x1A0(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x1B0(0x10)(None)
};

// 0x88 (0x88 - 0x0)
// Function cfcore.CFCoreSubsystem.Initialize
struct UCFCoreSubsystem_Initialize_Params
{
public:
	struct FCFCoreSettings                       Settings;                                          // 0x0(0x68)(None)
	FDelegateProperty_                           OnInitialized;                                     // 0x68(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnError;                                           // 0x78(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.GetModsDirInfo
struct UCFCoreSubsystem_GetModsDirInfo_Params
{
public:
	FDelegateProperty_                           OnModsDirInfo;                                     // 0x0(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnError;                                           // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.GetInstalledMods
struct UCFCoreSubsystem_GetInstalledMods_Params
{
public:
	FDelegateProperty_                           On_installed_mods;                                 // 0x0(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.GetAuthTerms
struct UCFCoreSubsystem_GetAuthTerms_Params
{
public:
	FDelegateProperty_                           On_success;                                        // 0x0(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(None)
};

// 0x50 (0x50 - 0x0)
// Function cfcore.CFCoreSubsystem.GenerateAuthTokenByExternalProvider
struct UCFCoreSubsystem_GenerateAuthTokenByExternalProvider_Params
{
public:
	enum class ECFCoreExternalAuthProvider       Provider;                                          // 0x0(0x1)(None)
	uint8                                        Pad_3F8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                External_token;                                    // 0x8(0x10)(None)
	struct FExternalAuthAdditionalInfo           Additional_info;                                   // 0x18(0x18)(None)
	FDelegateProperty_                           On_success;                                        // 0x30(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x40(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// Function cfcore.CFCoreSubsystem.GenerateAuthToken
struct UCFCoreSubsystem_GenerateAuthToken_Params
{
public:
	class FString                                Email;                                             // 0x0(0x10)(None)
	int32                                        Security_code;                                     // 0x10(0x4)(None)
	FDelegateProperty_                           On_success;                                        // 0x14(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x24(0x10)(None)
	uint8                                        Pad_3F9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function cfcore.CFCoreSubsystem.CreateModFile
struct UCFCoreSubsystem_CreateModFile_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(None)
	struct FCreateModFileRequest                 CreateModFileRequest;                              // 0x8(0x58)(None)
	class FString                                LocalFilenameToUpload;                             // 0x60(0x10)(None)
	FDelegateProperty_                           OnCreateModFileRequestId;                          // 0x70(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnProgress;                                        // 0x80(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnSuccess;                                         // 0x90(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnError;                                           // 0xA0(0x10)(None)
};

// 0x90 (0x90 - 0x0)
// Function cfcore.CFCoreSubsystem.CreateMod
struct UCFCoreSubsystem_CreateMod_Params
{
public:
	struct FCreateModRequest                     Create_mod_request;                                // 0x0(0x60)(None)
	class FString                                Avatar_image_filename;                             // 0x60(0x10)(None)
	FDelegateProperty_                           On_success;                                        // 0x70(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x80(0x10)(None)
};

// 0x68 (0x68 - 0x0)
// Function cfcore.CFCoreSubsystem.CreateCookedModFile
struct UCFCoreSubsystem_CreateCookedModFile_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(None)
	int64                                        SourceFileId;                                      // 0x8(0x8)(None)
	struct FCreateCookedModFileRequest           CreateCookedModFileRequest;                        // 0x10(0x1)(None)
	uint8                                        Pad_401[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LocalFilenameToUpload;                             // 0x18(0x10)(None)
	FDelegateProperty_                           OnCreateModFileRequestId;                          // 0x28(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnProgress;                                        // 0x38(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnSuccess;                                         // 0x48(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnError;                                           // 0x58(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function cfcore.CFCoreSubsystem.CancelInstallation
struct UCFCoreSubsystem_CancelInstallation_Params
{
public:
	int64                                        Mod_id;                                            // 0x0(0x8)(None)
	FDelegateProperty_                           On_success;                                        // 0x8(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x18(0x10)(None)
};

// 0x50 (0x50 - 0x0)
// Function cfcore.CFCoreSubsystem.AssureServerModsUpdated
struct UCFCoreSubsystem_AssureServerModsUpdated_Params
{
public:
	struct FAssureServerModsUpdatedParams        Params;                                            // 0x0(0x20)(None)
	FDelegateProperty_                           OnProgress;                                        // 0x20(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnUpdated;                                         // 0x30(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnError;                                           // 0x40(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// Function cfcore.CFCoreSubsystem.AssureClientModsUpdated
struct UCFCoreSubsystem_AssureClientModsUpdated_Params
{
public:
	TArray<int64>                                ServerFileIds;                                     // 0x0(0x10)(None)
	FDelegateProperty_                           OnProgress;                                        // 0x10(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnUpdated;                                         // 0x20(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnError;                                           // 0x30(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiUpdateThumbsUp
struct UCFCoreSubsystem_ApiUpdateThumbsUp_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(None)
	enum class ECFCoreThumbsUpDirection          Direction;                                         // 0x8(0x1)(None)
	uint8                                        Pad_407[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           On_success;                                        // 0xC(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x1C(0x10)(None)
	uint8                                        Pad_408[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiUnblockMods
struct UCFCoreSubsystem_ApiUnblockMods_Params
{
public:
	struct FUnblockModsRequest                   Request;                                           // 0x0(0x40)(None)
	FDelegateProperty_                           OnResult;                                          // 0x40(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnError;                                           // 0x50(0x10)(None)
};

// 0x58 (0x58 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiSearchMods
struct UCFCoreSubsystem_ApiSearchMods_Params
{
public:
	struct FCFCoreSearchModsFilter               Filter;                                            // 0x0(0x30)(None)
	struct FCFCoreApiRequestPagination           Pagination;                                        // 0x30(0x8)(None)
	FDelegateProperty_                           On_results;                                        // 0x38(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x48(0x10)(None)
};

// 0x40 (0x40 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiReportMod
struct UCFCoreSubsystem_ApiReportMod_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(None)
	int64                                        ReasonId;                                          // 0x8(0x8)(None)
	class FString                                Report;                                            // 0x10(0x10)(None)
	FDelegateProperty_                           On_reasons;                                        // 0x20(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x30(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetVersionTypes
struct UCFCoreSubsystem_ApiGetVersionTypes_Params
{
public:
	FDelegateProperty_                           On_results;                                        // 0x0(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetVersions
struct UCFCoreSubsystem_ApiGetVersions_Params
{
public:
	FDelegateProperty_                           On_results;                                        // 0x0(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetReportingReasons
struct UCFCoreSubsystem_ApiGetReportingReasons_Params
{
public:
	FDelegateProperty_                           On_results;                                        // 0x0(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetMyThumbsUp
struct UCFCoreSubsystem_ApiGetMyThumbsUp_Params
{
public:
	FDelegateProperty_                           On_results;                                        // 0x0(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetMyMods
struct UCFCoreSubsystem_ApiGetMyMods_Params
{
public:
	FDelegateProperty_                           On_results;                                        // 0x0(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetMods
struct UCFCoreSubsystem_ApiGetMods_Params
{
public:
	TArray<int64>                                ModIds;                                            // 0x0(0x10)(None)
	FDelegateProperty_                           On_results;                                        // 0x10(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x20(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetModDescription
struct UCFCoreSubsystem_ApiGetModDescription_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(None)
	FDelegateProperty_                           On_mod_desc;                                       // 0x8(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x18(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetMod
struct UCFCoreSubsystem_ApiGetMod_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(None)
	FDelegateProperty_                           On_mod;                                            // 0x8(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x18(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetMe
struct UCFCoreSubsystem_ApiGetMe_Params
{
public:
	FDelegateProperty_                           On_results;                                        // 0x0(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetGame
struct UCFCoreSubsystem_ApiGetGame_Params
{
public:
	FDelegateProperty_                           On_game;                                           // 0x0(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetFiles
struct UCFCoreSubsystem_ApiGetFiles_Params
{
public:
	TArray<int64>                                FileIds;                                           // 0x0(0x10)(None)
	FDelegateProperty_                           OnResults;                                         // 0x10(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnError;                                           // 0x20(0x10)(None)
};

// 0x24 (0x24 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetCategories
struct UCFCoreSubsystem_ApiGetCategories_Params
{
public:
	struct FCFCoreGetCategoriesFilter            Filter;                                            // 0x0(0x4)(None)
	FDelegateProperty_                           On_results;                                        // 0x4(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x14(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetBlockedModsDetails
struct UCFCoreSubsystem_ApiGetBlockedModsDetails_Params
{
public:
	FDelegateProperty_                           On_result;                                         // 0x0(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGetActiveCookingVersion
struct UCFCoreSubsystem_ApiGetActiveCookingVersion_Params
{
public:
	FDelegateProperty_                           OnVersion;                                         // 0x0(0x10)(ZeroConstructor)
	FDelegateProperty_                           OnError;                                           // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function cfcore.CFCoreSubsystem.ApiGenerateTempToken
struct UCFCoreSubsystem_ApiGenerateTempToken_Params
{
public:
	FDelegateProperty_                           On_result;                                         // 0x0(0x10)(ZeroConstructor)
	FDelegateProperty_                           On_error;                                          // 0x10(0x10)(None)
};

}
}


