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

// 0x1 (0x1 - 0x0)
// Function cfcore_ui.BindButtonSystem.SetViewState
struct UBindButtonSystem_SetViewState_Params
{
public:
	enum class EViewState                        NewState;                                          // 0x0(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function cfcore_ui.BindButtonSystem.ControllerAction
struct UBindButtonSystem_ControllerAction_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int64_SubOne
struct UCFCoreMathHelperFunctionLibrary_Int64_SubOne_Params
{
public:
	int64                                        Value;                                             // 0x0(0x8)(None)
	int64                                        ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int64_AddOne
struct UCFCoreMathHelperFunctionLibrary_Int64_AddOne_Params
{
public:
	int64                                        Value;                                             // 0x0(0x8)(None)
	int64                                        ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int32_SubOne
struct UCFCoreMathHelperFunctionLibrary_Int32_SubOne_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(None)
	int32                                        ReturnValue;                                       // 0x4(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int32_AddOne
struct UCFCoreMathHelperFunctionLibrary_Int32_AddOne_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(None)
	int32                                        ReturnValue;                                       // 0x4(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// Function cfcore_ui.CFCoreRichTextBlockImageDecorator.SetImageToMap
struct UCFCoreRichTextBlockImageDecorator_SetImageToMap_Params
{
public:
	class UTexture2DDynamic*                     Image;                                             // 0x0(0x8)(None)
	class FString                                ImageUrl;                                          // 0x8(0x10)(None)
};

// 0x118 (0x118 - 0x0)
// Function cfcore_ui.CFCoreThemeSettings.CommitThemeData
struct UCFCoreThemeSettings_CommitThemeData_Params
{
public:
	class UDataTable*                            ThemeDataTable;                                    // 0x0(0x8)(None)
	class FString                                ThemeName;                                         // 0x8(0x10)(None)
	struct FCFCoreThemeRowData                   Data;                                              // 0x18(0x100)(None)
};

// 0x60 (0x60 - 0x0)
// Function cfcore_ui.CFCoreUIBaseModel.OnEventReceived_LibraryProgress
struct ICFCoreUIBaseModel_OnEventReceived_LibraryProgress_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(None)
	uint8                                        Pad_1F70[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLibraryProgress                      Progress;                                          // 0x8(0x40)(None)
	TArray<struct FInstallProgressMod>           OutModsList;                                       // 0x48(0x10)(None)
	bool                                         ReturnValue;                                       // 0x58(0x1)(None)
	uint8                                        Pad_1F71[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function cfcore_ui.CFCoreUIBaseModel.OnEventReceived_Installed
struct ICFCoreUIBaseModel_OnEventReceived_Installed_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(None)
	uint8                                        Pad_1F72[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInstalledMod>                 InModsList;                                        // 0x8(0x10)(None)
	TArray<struct FInstallProgressMod>           OutModsList;                                       // 0x18(0x10)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	uint8                                        Pad_1F73[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function cfcore_ui.CFCoreUIBaseModel.OnEventReceived
struct ICFCoreUIBaseModel_OnEventReceived_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(None)
	uint8                                        Pad_1F75[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCFCoreMod>                    InModsList;                                        // 0x8(0x10)(None)
	TArray<struct FInstallProgressMod>           OutModsList;                                       // 0x18(0x10)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	uint8                                        Pad_1F76[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function cfcore_ui.CFCoreUIBaseView.OnEventBroadcasted
struct ICFCoreUIBaseView_OnEventBroadcasted_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(None)
	uint8                                        Pad_1F7A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInstallProgressMod>           ModsList;                                          // 0x8(0x10)(None)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x18(0x10)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	uint8                                        Pad_1F7B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x190 (0x190 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.UpdateMod
struct UCFCoreUISubsystem_UpdateMod_Params
{
public:
	struct FCFCoreMod                            Mod;                                               // 0x0(0x190)(None)
};

// 0x18 (0x18 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.UnsubscribeViewFromEvents
struct UCFCoreUISubsystem_UnsubscribeViewFromEvents_Params
{
public:
	class UObject*                               View;                                              // 0x0(0x8)(None)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.UnsubscribeViewFromEvent
struct UCFCoreUISubsystem_UnsubscribeViewFromEvent_Params
{
public:
	class UObject*                               View;                                              // 0x0(0x8)(None)
	enum class EGameModsEvent                    Evt;                                               // 0x8(0x1)(None)
	bool                                         ReturnValue;                                       // 0x9(0x1)(None)
	uint8                                        Pad_1F82[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.UnregisterModelClass
struct UCFCoreUISubsystem_UnregisterModelClass_Params
{
public:
	class UClass*                                ModelClass;                                        // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_1F83[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x190 (0x190 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.UninstallMod
struct UCFCoreUISubsystem_UninstallMod_Params
{
public:
	struct FCFCoreMod                            Mod;                                               // 0x0(0x190)(None)
};

// 0x20 (0x20 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.SubscribeViewToEvents
struct UCFCoreUISubsystem_SubscribeViewToEvents_Params
{
public:
	class UObject*                               View;                                              // 0x0(0x8)(None)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x8(0x10)(None)
	bool                                         InitializeView;                                    // 0x18(0x1)(None)
	bool                                         ReturnValue;                                       // 0x19(0x1)(None)
	uint8                                        Pad_1F86[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.SubscribeViewToEvent
struct UCFCoreUISubsystem_SubscribeViewToEvent_Params
{
public:
	class UObject*                               View;                                              // 0x0(0x8)(None)
	enum class EGameModsEvent                    Evt;                                               // 0x8(0x1)(None)
	bool                                         InitializeView;                                    // 0x9(0x1)(None)
	bool                                         ReturnValue;                                       // 0xA(0x1)(None)
	uint8                                        Pad_1F87[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8F0 (0x8F0 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.SetMod
struct UCFCoreUISubsystem_SetMod_Params
{
public:
	struct FCFCoreMod                            Mod;                                               // 0x0(0x190)(None)
	struct FInstalledMod                         InInstalledMod;                                    // 0x190(0x3B0)(None)
	struct FInstalledMod                         OutInstalledMod;                                   // 0x540(0x3B0)(None)
};

// 0x38 (0x38 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.SearchMods
struct UCFCoreUISubsystem_SearchMods_Params
{
public:
	struct FCFCoreSearchModsFilter               Filter;                                            // 0x0(0x30)(None)
	struct FCFCoreApiRequestPagination           Pagination;                                        // 0x30(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.RegisterModelClass
struct UCFCoreUISubsystem_RegisterModelClass_Params
{
public:
	class UClass*                                ModelClass;                                        // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_1F8C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.RegisterErrorDelegate
struct UCFCoreUISubsystem_RegisterErrorDelegate_Params
{
public:
	FDelegateProperty_                           ErrorDelegate;                                     // 0x0(0x10)(None)
};

// 0x3B0 (0x3B0 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnUninstall
struct UCFCoreUISubsystem_OnUninstall_Params
{
public:
	struct FInstalledMod                         InstalledMod;                                      // 0x0(0x3B0)(None)
};

// 0x38 (0x38 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnSearchModsError
struct UCFCoreUISubsystem_OnSearchModsError_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x20 (0x20 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnSearchMods
struct UCFCoreUISubsystem_OnSearchMods_Params
{
public:
	TArray<struct FCFCoreMod>                    Mods;                                              // 0x0(0x10)(None)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x10(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnMyModsError
struct UCFCoreUISubsystem_OnMyModsError_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnMyMods
struct UCFCoreUISubsystem_OnMyMods_Params
{
public:
	TArray<struct FCFCoreMod>                    Mods;                                              // 0x0(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnModUninstallError
struct UCFCoreUISubsystem_OnModUninstallError_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x1C8 (0x1C8 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnModInstallError
struct UCFCoreUISubsystem_OnModInstallError_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
	struct FCFCoreMod                            InstallingMod;                                     // 0x38(0x190)(None)
};

// 0x40 (0x40 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnInstallProgress
struct UCFCoreUISubsystem_OnInstallProgress_Params
{
public:
	struct FLibraryProgress                      Progress;                                          // 0x0(0x40)(None)
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnGetModsByIds
struct UCFCoreUISubsystem_OnGetModsByIds_Params
{
public:
	TArray<struct FCFCoreMod>                    Mods;                                              // 0x0(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnGetInstalledModsError
struct UCFCoreUISubsystem_OnGetInstalledModsError_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnGetInstalledMods
struct UCFCoreUISubsystem_OnGetInstalledMods_Params
{
public:
	TArray<struct FInstalledMod>                 InstalledMods;                                     // 0x0(0x10)(None)
};

// 0x3B0 (0x3B0 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnFinishedUpdating
struct UCFCoreUISubsystem_OnFinishedUpdating_Params
{
public:
	struct FInstalledMod                         UpdatedMod;                                        // 0x0(0x3B0)(None)
};

// 0x3B0 (0x3B0 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnFinishedInstalling
struct UCFCoreUISubsystem_OnFinishedInstalling_Params
{
public:
	struct FInstalledMod                         InstalledMod;                                      // 0x0(0x3B0)(None)
};

// 0x38 (0x38 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.OnCancelModInstallation
struct UCFCoreUISubsystem_OnCancelModInstallation_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x490 (0x490 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.MakeFInstallProgressModFromID
struct UCFCoreUISubsystem_MakeFInstallProgressModFromID_Params
{
public:
	int64                                        ID;                                                // 0x0(0x8)(None)
	struct FInstallProgressMod                   ReturnValue;                                       // 0x8(0x488)(None)
};

// 0x618 (0x618 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.MakeFInstallProgressMod
struct UCFCoreUISubsystem_MakeFInstallProgressMod_Params
{
public:
	struct FCFCoreMod                            Mod;                                               // 0x0(0x190)(None)
	struct FInstallProgressMod                   ReturnValue;                                       // 0x190(0x488)(None)
};

// 0x1 (0x1 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.IsAnyModInstalling
struct UCFCoreUISubsystem_IsAnyModInstalling_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x190 (0x190 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.InstallMod
struct UCFCoreUISubsystem_InstallMod_Params
{
public:
	struct FCFCoreMod                            Mod;                                               // 0x0(0x190)(None)
};

// 0x1A0 (0x1A0 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.InitializeModView
struct UCFCoreUISubsystem_InitializeModView_Params
{
public:
	class UObject*                               View;                                              // 0x0(0x8)(None)
	struct FCFCoreMod                            Mod;                                               // 0x8(0x190)(None)
	bool                                         ReturnValue;                                       // 0x198(0x1)(None)
	uint8                                        Pad_1F9D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x498 (0x498 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.GetModById
struct UCFCoreUISubsystem_GetModById_Params
{
public:
	struct FInstallProgressMod                   OutMod;                                            // 0x0(0x488)(None)
	int64                                        ID;                                                // 0x488(0x8)(None)
	bool                                         ReturnValue;                                       // 0x490(0x1)(None)
	uint8                                        Pad_1FA2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x190 (0x190 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.CancelModInstallation
struct UCFCoreUISubsystem_CancelModInstallation_Params
{
public:
	struct FCFCoreMod                            Mod;                                               // 0x0(0x190)(None)
};

// 0x10 (0x10 - 0x0)
// Function cfcore_ui.CFCoreUISubsystem.ApiGetModsById
struct UCFCoreUISubsystem_ApiGetModsById_Params
{
public:
	TArray<int64>                                ModIds;                                            // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function cfcore_ui.CFCoreVirtualCursorFunctionLibrary.IsCursorOverInteractableWidget
struct UCFCoreVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function cfcore_ui.CFCoreVirtualCursorFunctionLibrary.EnableVirtualCursor
struct UCFCoreVirtualCursorFunctionLibrary_EnableVirtualCursor_Params
{
public:
	class APlayerController*                     PC;                                                // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function cfcore_ui.CFCoreVirtualCursorFunctionLibrary.DisableVirtualCursor
struct UCFCoreVirtualCursorFunctionLibrary_DisableVirtualCursor_Params
{
public:
	class APlayerController*                     PC;                                                // 0x0(0x8)(None)
};

}
}


