#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB64 (0x12CC - 0x768)
// WidgetBlueprintGeneratedClass UI_StoreMenu.UI_StoreMenu_C
class UUI_StoreMenu_C : public UUIMainModShop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x768(0x8)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      Notify;                                            // 0x770(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      FadeIn;                                            // 0x778(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_41;                                         // 0x780(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_ModInstalled;                               // 0x788(0x8)(Edit, ZeroConstructor)
	class UHorizontalBox*                        HorizontalBox_Tabs;                                // 0x790(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_47;                                          // 0x798(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Background;                                    // 0x7A0(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_SearchBack;                                    // 0x7A8(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Thumbnail;                                     // 0x7B0(0x8)(Edit, ZeroConstructor)
	class USizeBox*                              SizeBox_SearchBar;                                 // 0x7B8(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Message;                                      // 0x7C0(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Name;                                         // 0x7C8(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_PageTitle;                                    // 0x7D0(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_ResultsText;                                  // 0x7D8(0x8)(Edit, ZeroConstructor)
	class UButton*                               TEXT_SearchBack;                                   // 0x7E0(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_SearchText;                                   // 0x7E8(0x8)(Edit, ZeroConstructor)
	class UEditableTextBox*                      TEXTBOX_Search;                                    // 0x7F0(0x8)(Edit, ZeroConstructor)
	class UUI_BrowseMods_C*                      UI_BrowseMods;                                     // 0x7F8(0x8)(Edit, ZeroConstructor)
	class UUI_Button_Sidebar_C*                  UI_Button_BrowseMods;                              // 0x800(0x8)(Edit, ZeroConstructor)
	class UUI_Button_Sidebar_C*                  UI_Button_InstalledMods;                           // 0x808(0x8)(Edit, ZeroConstructor)
	class UUI_Button_Sidebar_C*                  UI_Button_MyMods;                                  // 0x810(0x8)(Edit, ZeroConstructor)
	class UUI_InstalledMods_C*                   UI_InstalledMods;                                  // 0x818(0x8)(Edit, ZeroConstructor)
	class UUI_ModSuccessfullyInsalled_C*         UI_ModSuccessfullyInsalledWidget;                  // 0x820(0x8)(Edit, ZeroConstructor)
	class UUI_ModSuccessfullyInsalled_C*         UI_ModUpdateFailedWidget;                          // 0x828(0x8)(Edit, ZeroConstructor)
	class UUI_MyMods_C*                          UI_MyMods;                                         // 0x830(0x8)(Edit, ZeroConstructor)
	class UUI_ReportToast_C*                     UI_ReportToastFailed;                              // 0x838(0x8)(Edit, ZeroConstructor)
	class UUI_ReportToast_C*                     UI_ReportToastSubmitted;                           // 0x840(0x8)(Edit, ZeroConstructor)
	class UUI_Button_SignIn_C*                   UI_SignIn;                                         // 0x848(0x8)(Edit, ZeroConstructor)
	class UWidgetSwitcher*                       WidgetSwitcher_PageSwitcher;                       // 0x850(0x8)(Edit, ZeroConstructor)
	class UWidgetSwitcher*                       WidgetSwitcher_Title;                              // 0x858(0x8)(Edit, ZeroConstructor)
	bool                                         IsSignedIn;                                        // 0x860(0x1)(None)
	uint8                                        Pad_4AAB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnModPressed;                                      // 0x868(0x10)(Edit, ZeroConstructor, SimpleDisplay, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4AAC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          SelectedStyle;                                     // 0x880(0x3F0)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FButtonStyle                          NotSelectedStyle;                                  // 0xC70(0x3F0)(Edit, ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnCFCoreInitialized;                               // 0x1060(0x10)(Edit, ZeroConstructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         IsPlayerUsingGamepad;                              // 0x1070(0x1)(None)
	uint8                                        Pad_4AAD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnInputDeviceChanged;                              // 0x1078(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UUI_ParentPage_C*                      CurrentActivePage;                                 // 0x1088(0x8)(Edit, ZeroConstructor)
	class UWidget*                               FocusdWidget;                                      // 0x1090(0x8)(Edit, ZeroConstructor)
	struct FCFCoreSettings                       CFCoreSettings;                                    // 0x1098(0x68)(SimpleDisplay, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                Username;                                          // 0x1100(0x10)(ContainsInstancedReference, AssetRegistrySearchable, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                Email;                                             // 0x1110(0x10)(ContainsInstancedReference, AssetRegistrySearchable, PersistentInstance, NativeAccessSpecifierPrivate)
	TArray<class UUI_Button_Sidebar_C*>          Sidebuttons;                                       // 0x1120(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ENUM_SideTabs                     CurrentActiveTab;                                  // 0x1130(0x1)(None)
	bool                                         EnableThemeCustomizer;                             // 0x1131(0x1)(None)
	uint8                                        Pad_4AAF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreThemeRowData                   CurrentTheme;                                      // 0x1138(0x100)(BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            UpdateAllThemeSettings;                            // 0x1238(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, PersistentInstance, NativeAccessSpecifierPrivate)
	class UDataTable*                            Data_Table;                                        // 0x1248(0x8)(Edit, ZeroConstructor)
	class UUI_ThemeCustomizer_C*                 UI_ThemeCustomizer;                                // 0x1250(0x8)(Edit, ZeroConstructor)
	class UUI_RightClickMenu_C*                  RightClickMenu;                                    // 0x1258(0x8)(Edit, ZeroConstructor)
	class UUI_ModPage_C*                         ModPage;                                           // 0x1260(0x8)(Edit, ZeroConstructor)
	class UTermsAndConditions_C*                 TermsPopUp;                                        // 0x1268(0x8)(Edit, ZeroConstructor)
	TArray<struct FInstallProgressMod>           AllInstalledMods;                                  // 0x1270(0x10)(Edit, ZeroConstructor, AutoWeak, PersistentInstance, NativeAccessSpecifierPrivate)
	bool                                         BypassSearchExit;                                  // 0x1280(0x1)(None)
	uint8                                        Pad_4AB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_ParentPage_C*>              ListOfPages;                                       // 0x1288(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, PersistentInstance, NativeAccessSpecifierPrivate)
	int32                                        CurrentBrowserIndex;                               // 0x1298(0x4)(None)
	uint8                                        Pad_4AB4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x12A0(0x10)(None)
	class UBP_ServerModsWidget_C*                ServerModsWidget;                                  // 0x12B0(0x8)(Edit, ZeroConstructor)
	bool                                         AllowCategorieRefreshes;                           // 0x12B8(0x1)(None)
	uint8                                        Pad_4AB5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               GenericError;                                      // 0x12C0(0x8)(ZeroConstructor)
	int32                                        NumTabs;                                           // 0x12C8(0x4)(None)

	static class UClass* StaticClass();
	static class UUI_StoreMenu_C* GetDefaultObj();

	void OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, const struct FCFCoreApiResponsePagination& Pagination, bool ReturnValue);
	void NotificationHandled(const struct FInstallProgressMod& Mod, enum class EGameModsEvent Selection, const struct FInstallProgressMod& ModToHandle, bool K2Node_SwitchEnum_CmpSuccess);
	void PlayNotificationInstalled(const struct FInstallProgressMod& Mod_Info, bool CallFunc_IsValid_ReturnValue);
	void BPEscapeClosed(bool ReturnValue);
	void UI_StoreMenu_AutoGenFunc();
	void UI_StoreMenu_AutoGenFunc4(int64 ServerID);
	void UI_StoreMenu_AutoGenFunc3(int64 ServerID);
	void RequestInstalledModsFromAPI(bool CallFunc_IsValid_ReturnValue);
	void Back_from_Server_Mods(bool CallFunc_IsValid_ReturnValue);
	void SwitchControllerAction(const struct FKey& Key, enum class EViewState State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, bool CallFunc_EqualEqual_KeyKey_ReturnValue_6, bool CallFunc_EqualEqual_KeyKey_ReturnValue_7, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsVisible_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1, bool K2Node_SwitchInteger_CmpSuccess_2, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUI_ParentPage_C* K2Node_DynamicCast_AsUI_Parent_Page, bool K2Node_DynamicCast_bSuccess, class UUI_ParentPage_C* K2Node_DynamicCast_AsUI_Parent_Page_1, bool K2Node_DynamicCast_bSuccess_1);
	void SetInitStoreFocus(class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UUI_ParentPage_C* K2Node_DynamicCast_AsUI_Parent_Page, bool K2Node_DynamicCast_bSuccess);
	void PlayStartFadeInAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void EnabledTabSwitching(bool bInIsEnabled);
	void UpdateMyModsVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetCurrentActivePage(enum class ENUM_SideTabs CurrentActiveTab, enum class ENUM_SideTabs Temp_byte_Variable, enum class ENUM_SideTabs Temp_byte_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UUI_Button_Sidebar_C* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, class UUI_ParentPage_C* K2Node_Select_Default_1);
	void GetCurrentActivePage(class UUI_ParentPage_C* CurrentPage, enum class ENUM_SideTabs CurrentActiveTab, enum class ENUM_SideTabs Temp_byte_Variable, class UUI_ParentPage_C* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
	void UpdateSearchFilter(int32 Temp_int_Variable, int32 Temp_int_Variable_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Format_ReturnValue, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab, bool Temp_bool_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, int32 K2Node_Select_Default);
	void CreateModPageMenu(class UUI_GameSlot_C* UI_GameSlot, const struct FInstallProgressMod& ModInfo, class UUI_ModPage_C* ModPageRef, class UUI_ModPage_C* CallFunc_Create_ReturnValue);
	void DestroyModPageMenu(bool CallFunc_IsValid_ReturnValue);
	void CreateRightClickMenu(class UUI_GameSlot_C* UI_GameSlot, bool ShouldViewBeVisible, bool SepareteReportWithLine, double WidgetWidth, class UUI_RightClickMenu_C* MenuRef, class UUI_RightClickMenu_C* CallFunc_Create_ReturnValue);
	void DestroyRightClickMenu(bool CallFunc_IsValid_ReturnValue);
	void UpdateAllStoreMenuWidgets(class UMaterialInterface* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable, const struct FButtonStyle& CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle, const struct FButtonStyle& CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3);
	void InitTheme(bool CallFunc_DoesDataTableRowExist_ReturnValue, const struct FCFCoreThemeRowData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void ShouldCustomizeTheme(class UUI_ThemeCustomizer_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void InitAllTabs(int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UUI_Button_Sidebar_C* CallFunc_Array_Get_Item, class UUI_ParentPage_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const TArray<class UUI_ParentPage_C*>& K2Node_MakeArray_Array, const TArray<class UUI_Button_Sidebar_C*>& K2Node_MakeArray_Array_1);
	void RemoveExtraWidgets();
	void OnSearchedTextCommitted(const TArray<class UWidget*>& WidgetArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetText_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBPI_PageWidgets_C> K2Node_DynamicCast_AsBPI_Page_Widgets, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void CloseBNavigation(enum class EUINavigation Navigation, class UWidget* ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, TScriptInterface<class IBPI_PageWidgets_C> K2Node_DynamicCast_AsBPI_Page_Widgets, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetClose_B_Widget);
	void OpenCurrentActivePage(bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateCloseButtonSearchVisiblity(class FText SearchInput, bool CallFunc_TextIsEmpty_ReturnValue);
	void SelectPage(class UUI_Button_Sidebar_C* Target, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUI_Button_Sidebar_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnFail_AD6B0AC34DF32EEC1394D8AE5820D7D2(class UTexture2DDynamic* Texture);
	void OnSuccess_AD6B0AC34DF32EEC1394D8AE5820D7D2(class UTexture2DDynamic* Texture);
	void Construct();
	void Event_On_CFCore_Init();
	void Event_On_CFCore_Init_Error(const struct FCFCoreError& Error);
	void Event_Init_CF_Core();
	void BndEvt__StoreMenu_SignIn_K2Node_ComponentBoundEvent_3_OnSignInClicked__DelegateSignature();
	void Event_Open_Browse_Mods_Page();
	void Event_Open_Installed_Mods_Page();
	void Event_Close_Menu();
	void Event_Open_My_Mods_Page();
	void BndEvt__StoreMenu_Searched_txt_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod);
	void Event_Result(bool Is_authenticated);
	void Event_On_Get_User_Info_Failed(const struct FCFCoreError& Error);
	void Event_On_Get_User_Info(const struct FMe& Me);
	void Event_Get_Authentication_And_Me();
	void Event_Click_On_Sign_In();
	void Event_On_Sync_Installed_Mods_Error(const struct FCFCoreError& Error);
	void BndEvt__StoreMenu_TxtBox_Search_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(class FText Text);
	void Event_On_Sync_Installed_Mods_Success();
	void DELETE_FocusableOnKeyDown_1(const struct FKeyEvent& KeyEvent);
	void RequestThemeUpdate();
	void OnInitialized();
	void BndEvt__UI_StoreMenu_TEXT_SearchBack_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_StoreMenu_UI_Button_BrowseMods_K2Node_ComponentBoundEvent_1_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_StoreMenu_UI_Button_InstalledMods_K2Node_ComponentBoundEvent_2_Dispatcher_OnClick__DelegateSignature();
	void BndEvt__UI_StoreMenu_Button_41_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_StoreMenu_UI_Button_MyMods_K2Node_ComponentBoundEvent_6_Dispatcher_OnClick__DelegateSignature();
	void SetNewTextInSearch(class FText InText);
	void ButtonCall(const struct FKey& Key, enum class EViewState State);
	void BindControllerAction();
	void PlayNotEnoughAnimation();
	void GamepadChangeTab(bool Forward);
	void Destruct();
	void OnUserAuthenticated();
	void ExecuteUbergraph_UI_StoreMenu(int32 EntryPoint, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTexture2DDynamic* K2Node_CustomEvent_Texture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTexture2DDynamic* Temp_object_Variable, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const struct FCFCoreError& K2Node_CustomEvent_error_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_Prompt_SignIn_C* CallFunc_Create_ReturnValue, const TArray<class UPrimalUI*>& CallFunc_GetAllWidgetsWithInterface_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, int32 Temp_int_Array_Index_Variable, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UPrimalUserWidget* CallFunc_Array_Get_Item, class FText CallFunc_Format_ReturnValue, bool K2Node_CustomEvent_is_authenticated, const struct FCFCoreError& K2Node_CustomEvent_error_1, const struct FMe& K2Node_CustomEvent_me, const struct FCFCoreSettings& CallFunc_MakeSettingsFromProjectConfig_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Variable, const struct FCFCoreError& K2Node_CustomEvent_error, int32 CallFunc_Add_IntInt_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, const struct FKeyEvent& K2Node_Event_KeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage_1, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab_1, class FText K2Node_CustomEvent_InText, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage_2, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab_2, bool K2Node_SwitchEnum_CmpSuccess, class UUI_ParentPage_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_forward, bool CallFunc_IsVisible_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_2, uint8 CallFunc_Add_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_Percent_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_3, uint8 CallFunc_Subtract_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, bool CallFunc_SubscribeViewToEvents_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10);
	void UpdateAllThemeSettings__DelegateSignature();
	void OnInputDeviceChanged__DelegateSignature(enum class ENUM_InputDevices Device);
	void OnCFCoreInitialized__DelegateSignature();
	void OnModPressed__DelegateSignature();
};

}


