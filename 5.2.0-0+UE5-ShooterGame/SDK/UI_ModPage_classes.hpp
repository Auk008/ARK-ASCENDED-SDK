#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x778 (0xED0 - 0x758)
// WidgetBlueprintGeneratedClass UI_ModPage.UI_ModPage_C
class UUI_ModPage_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      NotifyAnim;                                        // 0x760(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      HoverInDownloadedThumbnail;                        // 0x768(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      OnScreenshotLoaded;                                // 0x770(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      HoverInPreloadedThumbnail;                         // 0x778(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      OnBeginPlay;                                       // 0x780(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_Close;                                      // 0x788(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_Comments;                                   // 0x790(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_GameImages;                                 // 0x798(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_ModInstalled;                               // 0x7A0(0x8)(Edit, ZeroConstructor)
	class UButton*                               BUTTON_REPORT;                                     // 0x7A8(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_Uninstall;                                  // 0x7B0(0x8)(Edit, ZeroConstructor)
	class UVerticalBox*                          CategoriesVer;                                     // 0x7B8(0x8)(Edit, ZeroConstructor)
	class UCFCoreRichText*                       CFCoreRichText_97;                                 // 0x7C0(0x8)(Edit, ZeroConstructor)
	class UHorizontalBox*                        HorizontalBox_167;                                 // 0x7C8(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_47;                                          // 0x7D0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_96;                                          // 0x7D8(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_AddonsIcon;                                    // 0x7E0(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_AddonsIcon_1;                                  // 0x7E8(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Background;                                    // 0x7F0(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_DownloadIcon;                                  // 0x7F8(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Files;                                         // 0x800(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_GameImagesBackground;                          // 0x808(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_HB1;                                           // 0x810(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_HB2;                                           // 0x818(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_HB3;                                           // 0x820(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_HB3_1;                                         // 0x828(0x8)(Edit, ZeroConstructor)
	class UButton*                               IMG_ImageZoom;                                     // 0x830(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_ModThumbnail;                                  // 0x838(0x8)(Edit, ZeroConstructor)
	class UButton*                               IMG_NextImage;                                     // 0x840(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_PD_Back;                                       // 0x848(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_PD_Back_1;                                     // 0x850(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_PD_Back_2;                                     // 0x858(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_PD_Back_3;                                     // 0x860(0x8)(Edit, ZeroConstructor)
	class UButton*                               IMG_PrevImage;                                     // 0x868(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Rating_Back;                                   // 0x870(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Rating_Back_1;                                 // 0x878(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Spacer;                                        // 0x880(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Thumbnail;                                     // 0x888(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Time;                                          // 0x890(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Time_1;                                        // 0x898(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Version;                                       // 0x8A0(0x8)(Edit, ZeroConstructor)
	class UOverlay*                              Overlay_Window_Rating;                             // 0x8A8(0x8)(Edit, ZeroConstructor)
	class UOverlay*                              Overlay_Window_Unavailable;                        // 0x8B0(0x8)(Edit, ZeroConstructor)
	class USizeBox*                              SizeBox_Description;                               // 0x8B8(0x8)(Edit, ZeroConstructor)
	class USpacer*                               Spacer_6;                                          // 0x8C0(0x8)(Edit, ZeroConstructor)
	class USpacer*                               Spacer_99;                                         // 0x8C8(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_BrowseMods;                                   // 0x8D0(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_BrowseMods_1;                                 // 0x8D8(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_By;                                           // 0x8E0(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Class;                                        // 0x8E8(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Date;                                         // 0x8F0(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_DateCreated;                                  // 0x8F8(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_DateUpdated;                                  // 0x900(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_FileSize;                                     // 0x908(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_FileSizeAmount;                               // 0x910(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_HB;                                           // 0x918(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Installs;                                     // 0x920(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Message;                                      // 0x928(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_ModAuthor;                                    // 0x930(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_ModTitle;                                     // 0x938(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_ModVersion;                                   // 0x940(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_ModVersionNumber;                             // 0x948(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Name;                                         // 0x950(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Rating_Percent;                               // 0x958(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Report;                                       // 0x960(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Report_1;                                     // 0x968(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_RT;                                           // 0x970(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_RT_1;                                         // 0x978(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_UpdatedDate;                                  // 0x980(0x8)(Edit, ZeroConstructor)
	class UUI_Button_Ark_Blue_C*                 UI_Button_Ark_Back;                                // 0x988(0x8)(Edit, ZeroConstructor)
	class UUI_LikeDislikeButton_C*               UI_DislikeButton;                                  // 0x990(0x8)(Edit, ZeroConstructor)
	class UUI_Button_Install_C*                  UI_InstallButton;                                  // 0x998(0x8)(Edit, ZeroConstructor)
	class UUI_LikeDislikeButton_C*               UI_LikeButton;                                     // 0x9A0(0x8)(Edit, ZeroConstructor)
	class UVerticalBox*                          VerticalBox_208;                                   // 0x9A8(0x8)(Edit, ZeroConstructor)
	class UWidgetSwitcher*                       WidgetSwitcher_Status;                             // 0x9B0(0x8)(Edit, ZeroConstructor)
	class UUI_ZoomImage_C*                       UI_ZoomImageUI;                                    // 0x9B8(0x8)(Edit, ZeroConstructor)
	class UUI_GameSlot_C*                        UI_GameSlotRef;                                    // 0x9C0(0x8)(Edit, ZeroConstructor)
	struct FInstallProgressMod                   ModDetails;                                        // 0x9C8(0x488)(Edit, ZeroConstructor, AutoWeak, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentImageIndex;                                 // 0xE50(0x4)(None)
	bool                                         IsDownloading;                                     // 0xE54(0x1)(None)
	uint8                                        Pad_354D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ScreenshotsIterator;                               // 0xE58(0x4)(None)
	uint8                                        Pad_354E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0xE60(0x8)(Edit, ZeroConstructor)
	class UUI_RightClickMenu_C*                  UI_DropdownMenuR;                                  // 0xE68(0x8)(Edit, ZeroConstructor)
	class UUI_Prompt_GoToComments_C*             UI_GoToCommentsPrompt;                             // 0xE70(0x8)(Edit, ZeroConstructor)
	enum class EGameModsEvent                    Evt;                                               // 0xE78(0x1)(None)
	uint8                                        Pad_354F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EGameModsEvent>            Evts;                                              // 0xE80(0x10)(SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	bool                                         CreatedInServerModPage;                            // 0xE90(0x1)(None)
	bool                                         Available;                                         // 0xE91(0x1)(None)
	uint8                                        Pad_3550[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Prompt_Uninstall_C*                UninstallWB;                                       // 0xE98(0x8)(Edit, ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnReturnClicked;                                   // 0xEA0(0x10)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	struct FModsDirInfo                          Mods_Dir_Info;                                     // 0xEB0(0x20)(None)

	static class UClass* StaticClass();
	static class UUI_ModPage_C* GetDefaultObj();

	void OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, const struct FCFCoreApiResponsePagination& Pagination, bool ReturnValue, const struct FInstallProgressMod& NewInformation, const struct FInstallProgressMod& TempMod, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FInstallProgressMod& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue);
	void GetClose_B(class UWidget* Widget);
	void SequenceEvent__ENTRYPOINTUI_ModPage_0(class UImage* IMG_Mod);
	void SequenceEvent__ENTRYPOINTUI_ModPage(class UImage* IMG_Mod);
	void BPHighlightWidgetOnStart(bool ReturnValue);
	void BPEscapeClosed(bool ReturnValue);
	void UpdateStatusStage(enum class EInstalledModStatus Selection, bool K2Node_SwitchEnum_CmpSuccess);
	void SetModVersion(const TArray<class FString>& NameLikeChar, const class FString& ModsFileName, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsNumeric_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText Temp_text_Variable, bool Temp_bool_Variable, const TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_Array_Get_Item_1, class FText K2Node_Select_Default, int32 CallFunc_ReplaceInline_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, const struct FFile& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_Int64Int64_ReturnValue);
	void InitAllVars(class FText CallFunc_GetModVersion_FinalAmount, const class FString& CallFunc_GetAuthorName_CombinedAuthorsNames, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetDownloadCount_FinalAmount, const class FString& CallFunc_GetModName_Name, const struct FCFCoreFileSize& CallFunc_GetModSize_SizeStruct, class FText CallFunc_GetModSize_SizeInText, int64 CallFunc_GetModSize_bytes, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UTexture2DDynamic* CallFunc_Array_Get_Item, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2);
	void UpdateScreenshotButtonsEnabled(bool CallFunc_CanGoToPreviousImage_ReturnValue, bool CallFunc_CanGoToNextImage_ReturnValue);
	void CanGoToPreviousImage(bool ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void CanGoToNextImage(bool ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetUnavailableState(bool Avaiable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_IsValid_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_1);
	void InitializeForServerMods();
	void LaunchCommentsURL(const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_CanLaunchURL_ReturnValue, bool CallFunc_CanLaunchURL_ReturnValue_1);
	void BackFromZoom();
	void ActionSwitch(const struct FKey& Key, enum class EViewState State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsVisible_ReturnValue_1);
	void PlayAnimationThumbnail(bool AlreadyLoaded, bool Temp_bool_Variable, class UWidgetAnimation* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void FindThumbnail(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SetThumbnailImage(class UTexture2DDynamic* Texture, bool CallFunc_IsValid_ReturnValue);
	void PlayStartinAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateUnistallButtonState(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void AssignLastUpdatedInformation(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetDay_ReturnValue, int32 CallFunc_GetYear_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, int32 CallFunc_GetMonth_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Init_All_Widget_Refs(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void UpdateAllThemeSettings();
	void CloseBNavigation(enum class EUINavigation Navigation, class UWidget* ReturnValue);
	void InstallBCustomNavigation(enum class EUINavigation Navigation, class UWidget* ReturnValue, const TArray<class UUI_StoreMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_StoreMenu_C* CallFunc_Array_Get_Item);
	void SetSubCategories(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UUI_Category_C* CallFunc_Create_ReturnValue, const struct FCategory& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void CheckIfHideReadMoreButton(const class FString& Text, int32 CallFunc_Multiply_IntInt_ReturnValue, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void ShortenModeDownloads(int64 Downloads, class FText ShortenDownloads, class FText _currentSuffix, double _currentDownloads, int32 CallFunc_Conv_Int64ToInt_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, double CallFunc_Multiply_IntFloat_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateScreenshotImage(int32 ImageIndex, bool Temp_bool_Variable, class UObject* Temp_object_Variable, class UTexture2DDynamic* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2);
	void AssignDateAddedInformation(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetDay_ReturnValue, int32 CallFunc_GetYear_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, int32 CallFunc_GetMonth_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue);
	void InitModPageDefault(class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_InitializeModView_ReturnValue);
	void OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnFail_13897D64427114E2F64F66A69ECC1173(class UTexture2DDynamic* Texture);
	void OnSuccess_13897D64427114E2F64F66A69ECC1173(class UTexture2DDynamic* Texture);
	void OnFail_C0E5239F4CDF977407A263886857339A(class UTexture2DDynamic* Texture);
	void OnSuccess_C0E5239F4CDF977407A263886857339A(class UTexture2DDynamic* Texture);
	void OnFail_FC28BA524F43B59D65346B94C5AD9301(class UTexture2DDynamic* Texture);
	void OnSuccess_FC28BA524F43B59D65346B94C5AD9301(class UTexture2DDynamic* Texture);
	void OnSearch(class FText Search_Input);
	void UpdateSearch(class FText SearchInput);
	void Animation_UpdateThumbnail(class UImage* IMG_Mod);
	void BndEvt__ModPage_NextImage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ModPage_PrevImage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ModPage_InstallButton_K2Node_ComponentBoundEvent_3_OnClickInstall_B__DelegateSignature();
	void BndEvt__ModPage_Button_208_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ModPage_Button_208_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ModPage_ImageZoom_B_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ModPage_GameImages_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
	void Event_Next_Image();
	void Event_Previous_Image();
	void Construct();
	void Event_Go_Back();
	void UpdateInstallSlot();
	void BndEvt__UI_ModPage_Button_Uninstall_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_ModPage_UI_Button_Ark_Blue_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature();
	void DownloadThumbnailManually();
	void ButtonCall(const struct FKey& Key, enum class EViewState State);
	void BindControllerAction();
	void Install_Button();
	void UninstallButton();
	void BndEvt__UI_ModPage_Button_Comments_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void OpenComments();
	void DestroyUICommentsPrompt();
	void Destruct();
	void OnCategoryResults(const TArray<struct FCategory>& Categories);
	void OnCategoryError(const struct FCFCoreError& Error);
	void LoadAllScreenshots();
	void Update_Button();
	void BndEvt__GameSlot_InstallButton_K2Node_ComponentBoundEvent_2_OnClickUpdate_B__DelegateSignature();
	void Download_Screenshots();
	void BndEvt__ModPage_Report_B_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void PullDescription();
	void OnDescriptionError(const struct FCFCoreError& Error);
	void CustomEvent_0(const class FString& Description);
	void CustomEvent_3(const class FString& Temp_user_token);
	void CustomEvent_4(const struct FCFCoreError& Error);
	void Event_On_Uninstall_Aprroved();
	void CheckDiskSpaceToInstall();
	void CustomEvent(const struct FModsDirInfo& ModsDirInfo);
	void CustomEvent_1(const struct FCFCoreError& Error);
	void PlayNotEnoughAnimation();
	void BndEvt__UI_ModPage_Button_ModInstalled_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void InitModByID(int64 ModId);
	void SuccessIGuess(const struct FCFCoreMod& Mod);
	void How_could_we_possibly_ever_fail(const struct FCFCoreError& Error);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_ModPage(int32 EntryPoint, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UUI_Prompt_Uninstall_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, const class FString& Temp_string_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UTexture2DDynamic* K2Node_CustomEvent_Texture_2, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UTexture2DDynamic* K2Node_CustomEvent_Texture_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_2, int32 Temp_int_Variable_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, int32 CallFunc_Add_IntInt_ReturnValue, class FText K2Node_Event_Search_Input, class FText K2Node_Event_SearchInput, class UImage* K2Node_CustomEvent_IMG_Mod, const struct FModAsset& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_4, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class UTexture2DDynamic* Temp_object_Variable, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, class UTexture2DDynamic* K2Node_CustomEvent_Texture_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, bool CallFunc_SubscribeViewToEvents_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue_1, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, const TArray<struct FCategory>& K2Node_CustomEvent_categories, bool CallFunc_IsValid_ReturnValue_9, const struct FCategory& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, int32 CallFunc_Conv_Int64ToInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FCFCoreError& K2Node_CustomEvent_error_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_CanGoToNextImage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, bool CallFunc_CanGoToPreviousImage_ReturnValue, class UUI_Prompt_GoToComments_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue_5, class UTexture2DDynamic* CallFunc_Array_Get_Item_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UTexture2DDynamic* K2Node_CustomEvent_Texture_5, class UTexture2DDynamic* Temp_object_Variable_1, bool CallFunc_IsValid_ReturnValue_13, const struct FCFCoreError& K2Node_CustomEvent_error_3, class UTexture2DDynamic* K2Node_CustomEvent_Texture, const class FString& K2Node_CustomEvent_description, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& K2Node_CustomEvent_temp_user_token, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const struct FCFCoreError& K2Node_CustomEvent_error_2, class FText CallFunc_Conv_Int64ToText_ReturnValue, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, bool CallFunc_CanLaunchURL_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, bool CallFunc_IsValid_ReturnValue_14, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_StringLimit_NewString, const class FString& CallFunc_StringLimit_NewString_1, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_4, const struct FModsDirInfo& K2Node_CustomEvent_ModsDirInfo, const struct FCFCoreError& K2Node_CustomEvent_error_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class UUI_ZoomImage_C* CallFunc_Create_ReturnValue_2, int64 K2Node_CustomEvent_modId, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32 Temp_int_Variable_2, const struct FCFCoreMod& K2Node_CustomEvent_mod, const struct FCFCoreError& K2Node_CustomEvent_error, class UTexture2DDynamic* Temp_object_Variable_2, bool CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace, int32 CallFunc_Array_Add_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
	void OnReturnClicked__DelegateSignature();
};

}


