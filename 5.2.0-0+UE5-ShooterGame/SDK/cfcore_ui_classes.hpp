#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x58 - 0x30)
// Class cfcore_ui.BindButtonSystem
class UBindButtonSystem : public UEngineSubsystem
{
public:
	FMulticastInlineDelegateProperty_            ControllerButtonInViewState;                       // 0x30(0x10)(None)
	uint8                                        Pad_1F60[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBindButtonSystem* GetDefaultObj();

	void StartBind();
	void SetViewState(enum class EViewState NewState);
	void EndBind();
	void ControllerAction(const struct FKey& Key);
};

// 0x1A8 (0x4F0 - 0x348)
// Class cfcore_ui.CFCoreButtonImage
class UCFCoreButtonImage : public UImage
{
public:
	bool                                         UseDefaultBrushOnPC;                               // 0x348(0x1)(None)
	uint8                                        Pad_1F62[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           PlayStationButtonImage;                            // 0x350(0xD0)(ZeroConstructor)
	struct FSlateBrush                           XboxButtonImage;                                   // 0x420(0xD0)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UCFCoreButtonImage* GetDefaultObj();

};

// 0xC0 (0xF8 - 0x38)
// Class cfcore_ui.CFCoreGamepadCursorSettings
class UCFCoreGamepadCursorSettings : public UDeveloperSettings
{
public:
	struct FRuntimeFloatCurve                    AnalogCursorAccelerationCurve;                     // 0x38(0x88)(None)
	float                                        MaxAnalogCursorSpeed;                              // 0xC0(0x4)(None)
	float                                        MaxAnalogCursorSpeedWhenHovered;                   // 0xC4(0x4)(None)
	float                                        AnalogCursorDragCoefficient;                       // 0xC8(0x4)(None)
	float                                        AnalogCursorDragCoefficientWhenHovered;            // 0xCC(0x4)(None)
	float                                        MinAnalogCursorSpeed;                              // 0xD0(0x4)(None)
	float                                        AnalogCursorDeadZone;                              // 0xD4(0x4)(None)
	float                                        AnalogCursorAccelerationMultiplier;                // 0xD8(0x4)(None)
	float                                        AnalogCursorSize;                                  // 0xDC(0x4)(None)
	bool                                         bUseEngineAnalogCursor;                            // 0xE0(0x1)(None)
	bool                                         bAnalogCursorNoAcceleration;                       // 0xE1(0x1)(None)
	uint8                                        Pad_1F64[0x16];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCFCoreGamepadCursorSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class cfcore_ui.CFCoreMathHelperFunctionLibrary
class UCFCoreMathHelperFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCFCoreMathHelperFunctionLibrary* GetDefaultObj();

	void Int64_SubOne(int64 Value, int64 ReturnValue);
	void Int64_AddOne(int64 Value, int64 ReturnValue);
	void Int32_SubOne(int32 Value, int32 ReturnValue);
	void Int32_AddOne(int32 Value, int32 ReturnValue);
};

// 0x70 (0x980 - 0x910)
// Class cfcore_ui.CFCoreRichText
class UCFCoreRichText : public URichTextBlock
{
public:
	TMap<class FString, class UTexture2DDynamic*> ImageMap;                                          // 0x910(0x50)(ZeroConstructor)
	uint8                                        Pad_1F69[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCFCoreRichText* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class cfcore_ui.CFCoreRichTextBlockImageDecorator
class UCFCoreRichTextBlockImageDecorator : public URichTextBlockImageDecorator
{
public:
	class UCFCoreRichText*                       CoreRichText;                                      // 0x30(0x8)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x38(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x48(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UCFCoreRichTextBlockImageDecorator* GetDefaultObj();

	void SetImageToMap(class UTexture2DDynamic* Image, const class FString& ImageUrl);
};

// 0x0 (0x28 - 0x28)
// Class cfcore_ui.CFCoreThemeSettings
class UCFCoreThemeSettings : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCFCoreThemeSettings* GetDefaultObj();

	void CommitThemeData(class UDataTable* ThemeDataTable, const class FString& ThemeName, const struct FCFCoreThemeRowData& Data);
};

// 0x0 (0x28 - 0x28)
// Class cfcore_ui.CFCoreUIBaseModel
class ICFCoreUIBaseModel : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICFCoreUIBaseModel* GetDefaultObj();

	void OnEventReceived_LibraryProgress(enum class EGameModsEvent Evt, const struct FLibraryProgress& Progress, const TArray<struct FInstallProgressMod>& OutModsList, bool ReturnValue);
	void OnEventReceived_Installed(enum class EGameModsEvent Evt, const TArray<struct FInstalledMod>& InModsList, const TArray<struct FInstallProgressMod>& OutModsList, bool ReturnValue);
	void OnEventReceived(enum class EGameModsEvent Evt, const TArray<struct FCFCoreMod>& InModsList, const TArray<struct FInstallProgressMod>& OutModsList, bool ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class cfcore_ui.CFCoreUIBaseView
class ICFCoreUIBaseView : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICFCoreUIBaseView* GetDefaultObj();

	void OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, const struct FCFCoreApiResponsePagination& Pagination, bool ReturnValue);
};

// 0x58 (0x80 - 0x28)
// Class cfcore_ui.CFCoreUIModel
class UCFCoreUIModel : public UObject
{
public:
	uint8                                        Pad_1F7D[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCFCoreUIModel* GetDefaultObj();

};

// 0x148 (0x178 - 0x30)
// Class cfcore_ui.CFCoreUISubsystem
class UCFCoreUISubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_1FA6[0x118];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       Models;                                            // 0x148(0x10)(None)
	uint8                                        Pad_1FA7[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCFCoreUISubsystem* GetDefaultObj();

	void UpdateMod(const struct FCFCoreMod& Mod);
	void UnsubscribeViewFromEvents(class UObject* View, const TArray<enum class EGameModsEvent>& Evts);
	void UnsubscribeViewFromEvent(class UObject* View, enum class EGameModsEvent Evt, bool ReturnValue);
	void UnregisterModelClass(class UClass* ModelClass, bool ReturnValue);
	void UninstallMod(const struct FCFCoreMod& Mod);
	void SubscribeViewToEvents(class UObject* View, const TArray<enum class EGameModsEvent>& Evts, bool InitializeView, bool ReturnValue);
	void SubscribeViewToEvent(class UObject* View, enum class EGameModsEvent Evt, bool InitializeView, bool ReturnValue);
	void SetMod(const struct FCFCoreMod& Mod, const struct FInstalledMod& InInstalledMod, const struct FInstalledMod& OutInstalledMod);
	void SearchMods(const struct FCFCoreSearchModsFilter& Filter, const struct FCFCoreApiRequestPagination& Pagination);
	void ReleaseUIController();
	void RegisterModelClass(class UClass* ModelClass, bool ReturnValue);
	void RegisterErrorDelegate(FDelegateProperty_ ErrorDelegate);
	void OnUninstall(const struct FInstalledMod& InstalledMod);
	void OnSearchModsError(const struct FCFCoreError& Error);
	void OnSearchMods(const TArray<struct FCFCoreMod>& Mods, const struct FCFCoreApiResponsePagination& Pagination);
	void OnMyModsError(const struct FCFCoreError& Error);
	void OnMyMods(const TArray<struct FCFCoreMod>& Mods);
	void OnModUninstallError(const struct FCFCoreError& Error);
	void OnModInstallError(const struct FCFCoreError& Error, const struct FCFCoreMod& InstallingMod);
	void OnInstallProgress(const struct FLibraryProgress& Progress);
	void OnGetModsByIds(const TArray<struct FCFCoreMod>& Mods);
	void OnGetInstalledModsError(const struct FCFCoreError& Error);
	void OnGetInstalledMods(const TArray<struct FInstalledMod>& InstalledMods);
	void OnFinishedUpdating(const struct FInstalledMod& UpdatedMod);
	void OnFinishedInstalling(const struct FInstalledMod& InstalledMod);
	void OnCancelModInstallationSuccess();
	void OnCancelModInstallation(const struct FCFCoreError& Error);
	void MakeFInstallProgressModFromID(int64 ID, const struct FInstallProgressMod& ReturnValue);
	void MakeFInstallProgressMod(const struct FCFCoreMod& Mod, const struct FInstallProgressMod& ReturnValue);
	void IsAnyModInstalling(bool ReturnValue);
	void InstallMod(const struct FCFCoreMod& Mod);
	void InitializeUIController();
	void InitializeModView(class UObject* View, const struct FCFCoreMod& Mod, bool ReturnValue);
	void GetMyMods();
	void GetModById(const struct FInstallProgressMod& OutMod, int64 ID, bool ReturnValue);
	void GetInstalledMods();
	void CancelModInstallation(const struct FCFCoreMod& Mod);
	void ApiGetModsById(const TArray<int64>& ModIds);
};

// 0x0 (0x28 - 0x28)
// Class cfcore_ui.CFCoreVirtualCursorFunctionLibrary
class UCFCoreVirtualCursorFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCFCoreVirtualCursorFunctionLibrary* GetDefaultObj();

	void IsCursorOverInteractableWidget(bool ReturnValue);
	void EnableVirtualCursor(class APlayerController* PC);
	void DisableVirtualCursor(class APlayerController* PC);
};

}


