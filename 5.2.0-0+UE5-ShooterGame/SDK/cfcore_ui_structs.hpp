#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EViewState : uint8
{
	Store                          = 0,
	ModPage                        = 1,
	ScreenShot                     = 2,
	Dropdown                       = 3,
	ServerMods                     = 4,
	Popup                          = 5,
	EViewState_MAX                 = 6,
};

enum class EGameModsEvent : uint8
{
	EGameModsEvent_ViewRegister    = 0,
	EGameModsEvent_FinishInstalling = 1,
	EGameModsEvent_Uninstalling    = 2,
	EGameModsEvent_InstallingProgress = 3,
	EGameModsEvent_InitInstalling  = 4,
	EGameModsEvent_InitUninstalling = 5,
	EGameModsEvent_AlreadyInstalled = 6,
	EGameModsEvent_FinishUpdating  = 7,
	EGameModsEvent_SearchMods      = 8,
	EGameModsEvent_MyMods          = 9,
	EGameModsEvent_CancelInstalling = 10,
	EGameModsEvent_MAX             = 11,
};

enum class EInstallStatus : uint8
{
	EInstallStatus_Default         = 0,
	EInstallStatus_Installing      = 1,
	EInstallStatus_Installed       = 2,
	EInstallStatus_InstalledButNeedsUpdate = 3,
	EInstallStatus_Updating        = 4,
	EInstallStatus_Uninstalling    = 5,
	EInstallStatus_InstalledButNeedsUpdateMyMods = 6,
	EInstallStatus_MAX             = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x100 - 0x8)
// ScriptStruct cfcore_ui.CFCoreThemeRowData
struct FCFCoreThemeRowData : public FTableRowBase
{
public:
	bool                                         RoundedMode;                                       // 0x8(0x1)(None)
	uint8                                        Pad_1FB4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          MainFont;                                          // 0xC(0x10)(None)
	struct FLinearColor                          SecondaryFont;                                     // 0x1C(0x10)(None)
	struct FLinearColor                          BackgroundColor;                                   // 0x2C(0x10)(None)
	struct FLinearColor                          ClassUnderline;                                    // 0x3C(0x10)(None)
	struct FLinearColor                          Button_SignIn;                                     // 0x4C(0x10)(None)
	struct FLinearColor                          SideBar;                                           // 0x5C(0x10)(None)
	struct FLinearColor                          Button_SideMenu;                                   // 0x6C(0x10)(None)
	struct FLinearColor                          Search_SideMenu;                                   // 0x7C(0x10)(None)
	struct FLinearColor                          ModWindow;                                         // 0x8C(0x10)(None)
	struct FLinearColor                          Button_Install;                                    // 0x9C(0x10)(None)
	struct FLinearColor                          Button_Uninstall;                                  // 0xAC(0x10)(None)
	struct FLinearColor                          Button_Update;                                     // 0xBC(0x10)(None)
	struct FLinearColor                          ExamineBackground;                                 // 0xCC(0x10)(None)
	struct FLinearColor                          InfoBackground;                                    // 0xDC(0x10)(None)
	struct FLinearColor                          NotificationBackground;                            // 0xEC(0x10)(None)
	uint8                                        Pad_1FBC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct cfcore_ui.ModIdentification
struct FModIdentification
{
public:
	int64                                        ID;                                                // 0x0(0x8)(None)
	int64                                        MainFileId;                                        // 0x8(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct cfcore_ui.ScreenshotInfo
struct FScreenshotInfo
{
public:
	TArray<class UTexture2DDynamic*>             Screenshots;                                       // 0x0(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        Descriptions;                                      // 0x10(0x10)(None)
};

// 0x488 (0x488 - 0x0)
// ScriptStruct cfcore_ui.InstallProgressMod
struct FInstallProgressMod
{
public:
	struct FInstalledMod                         Mod;                                               // 0x0(0x3B0)(AssetRegistrySearchable, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLibraryProgress                      Progress;                                          // 0x3B0(0x40)(SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	enum class EInstallStatus                    InstallStatus;                                     // 0x3F0(0x1)(None)
	uint8                                        Pad_1FC0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2DDynamic*                     DynamicImage;                                      // 0x3F8(0x8)(ZeroConstructor)
	TMap<class UTexture2D*, class FText>         ShowcaseImages;                                    // 0x400(0x50)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScreenshotInfo                       Screenshots_Info;                                  // 0x450(0x20)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCategory>                     Categories;                                        // 0x470(0x10)(None)
	class UWidget*                               ModSlotRef;                                        // 0x480(0x8)(None)
};

}


