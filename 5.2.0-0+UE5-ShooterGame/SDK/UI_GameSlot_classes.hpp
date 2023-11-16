#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAD8 (0xE08 - 0x330)
// WidgetBlueprintGeneratedClass UI_GameSlot.UI_GameSlot_C
class UUI_GameSlot_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(SimpleDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      OnBeginPlay;                                       // 0x338(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      Hover;                                             // 0x340(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      FadeIn;                                            // 0x348(0x8)(Edit, ZeroConstructor)
	class UBorder*                               Boarded_Left;                                      // 0x350(0x8)(Edit, ZeroConstructor)
	class UBorder*                               Boarder_Right;                                     // 0x358(0x8)(Edit, ZeroConstructor)
	class UBorder*                               Boarder_Top;                                       // 0x360(0x8)(Edit, ZeroConstructor)
	class UBorder*                               Border_Down;                                       // 0x368(0x8)(Edit, ZeroConstructor)
	class UBorder*                               BORDER_LowerPart;                                  // 0x370(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_GoToModPage;                                // 0x378(0x8)(Edit, ZeroConstructor)
	class UUI_Button_UpvoteRate_C*               Button_UpvoteRate;                                 // 0x380(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_137;                                         // 0x388(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_AddonsIcon;                                    // 0x390(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_AddonsIcon_1;                                  // 0x398(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_AddonsIcon_2;                                  // 0x3A0(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Disable;                                       // 0x3A8(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_GameImage;                                     // 0x3B0(0x8)(Edit, ZeroConstructor)
	class UWidgetSwitcher*                       Switcher_ModState;                                 // 0x3B8(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_AuthorName;                                   // 0x3C0(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_BrowseMods;                                   // 0x3C8(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_BrowseMods_1;                                 // 0x3D0(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_BrowseMods_2;                                 // 0x3D8(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_BrowseMods_3;                                 // 0x3E0(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_BrowseMods_4;                                 // 0x3E8(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_ModName;                                      // 0x3F0(0x8)(Edit, ZeroConstructor)
	class UUI_Downloads_C*                       UI_Downloads;                                      // 0x3F8(0x8)(Edit, ZeroConstructor)
	class UUI_DownloadSize_C*                    UI_DownloadSize_149;                               // 0x400(0x8)(Edit, ZeroConstructor)
	class UUI_InstallationStatus_C*              UI_InstallingStatus;                               // 0x408(0x8)(Edit, ZeroConstructor)
	FMulticastInlineDelegateProperty_            Like;                                              // 0x410(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, BlueprintCallable, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class UUI_Prompt_Uninstall_C*                UninstallWB;                                       // 0x420(0x8)(Edit, ZeroConstructor)
	enum class ELibraryProgressState             InstallStatus;                                     // 0x428(0x1)(None)
	uint8                                        Pad_4B10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnModInstalledComplete;                            // 0x430(0x10)(Edit, ZeroConstructor, BlueprintCallable, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnModInstall;                                      // 0x440(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnModUninstalledComplete;                          // 0x450(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUI_StoreMenu_C*                       StoreMenuRef;                                      // 0x460(0x8)(Edit, ZeroConstructor)
	TArray<int32>                                GameVersion;                                       // 0x468(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	bool                                         IsEnableState;                                     // 0x478(0x1)(None)
	uint8                                        Pad_4B11[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnDisableClicked;                                  // 0x480(0x10)(Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x490(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FInstallProgressMod                   Array_Element;                                     // 0x4A0(0x488)(Edit, ZeroConstructor, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FInstallProgressMod                   ModInfo;                                           // 0x928(0x488)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	enum class ENUM_Install                      Mod_Info_Is_Installed;                             // 0xDB0(0x1)(None)
	bool                                         ImageFinishedLoading;                              // 0xDB1(0x1)(None)
	uint8                                        Pad_4B12[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ImageUrl;                                          // 0xDB8(0x10)(AssetRegistrySearchable, Protected, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class UUI_ParentPage_C*                      ParentPage;                                        // 0xDC8(0x8)(Edit, ZeroConstructor)
	bool                                         IsServerModsState;                                 // 0xDD0(0x1)(None)
	uint8                                        Pad_4B13[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnModUnInstall;                                    // 0xDD8(0x10)(ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FModsDirInfo                          Mods_Dir_Info;                                     // 0xDE8(0x20)(None)

	static class UClass* StaticClass();
	static class UUI_GameSlot_C* GetDefaultObj();

	void OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, const struct FCFCoreApiResponsePagination& Pagination, bool ReturnValue, const struct FInstallProgressMod& NewInformation, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FInstallProgressMod& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue);
	void SequenceEvent__ENTRYPOINTUI_GameSlot(class UImage* IMG_GameImage);
	void VisualFeedbacks(enum class EGameModsEvent Selection, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void PlayStartingAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetDownloadCount(class FText FinalAmount, class FText CallFunc_FormatDownloadNumber_FinalAmount);
	void UpdateModCard(bool CallFunc_IsValid_ReturnValue, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void GetModSize(class FText Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFile& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void GetAuthors(const class FString& CombinedAuthorsNames, const class FString& Local_TotalAuthors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_StringLimit_NewString, const struct FModAuthor& CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsEmpty_ReturnValue);
	void GetModName(const class FString& Name);
	void ClearAllModsInAllPages(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUI_ParentPage_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateDownloadCount(class FText CallFunc_FormatDownloadNumber_FinalAmount);
	void ChangeSlotEnableState(bool Enable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateModSize(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FFile& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Update_LikeStatus(bool CallFunc_IsValid_ReturnValue);
	void UpdateThemeSettings();
	void UpdateImage(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateAuthors(const class FString& Local_Authors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_StringLimit_NewString, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FModAuthor& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue);
	void UpdateModName();
	void Try_Set_Game_Version(bool IsNumericallySet, const class FString& Temp, const TArray<int32>& Result, bool CallFunc_Not_PreBool_ReturnValue, const struct FFileIndex& CallFunc_Array_Get_Item, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void FormatDownloadNumber(int64 Downloads, class FText FinalAmount, bool CallFunc_Less_Int64Int64_ReturnValue, int64 CallFunc_Divide_Int64Int64_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue, int64 CallFunc_Divide_Int64Int64_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, int64 CallFunc_Divide_Int64Int64_ReturnValue_2, int64 CallFunc_Divide_Int64Int64_ReturnValue_3, class FText CallFunc_Conv_Int64ToText_ReturnValue_2, class FText CallFunc_Conv_Int64ToText_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_GetSubstring_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, class FText CallFunc_Conv_StringToText_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class FText CallFunc_Conv_Int64ToText_ReturnValue_4, bool CallFunc_Less_Int64Int64_ReturnValue_1);
	void GenerateModNameToolTipWidget(class UWidget* ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUI_ToolTipWidget_C* CallFunc_Create_ReturnValue);
	void GenerateAuthorNameToolTipWidget(class UWidget* ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_ToolTipWidget_C* CallFunc_Create_ReturnValue);
	void Init_Mod_Info(const struct FInstallProgressMod& NewModInfo);
	void OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FEventReply& K2Node_MakeStruct_EventReply, class UUI_RightClickMenu_C* CallFunc_CreateRightClickMenu_MenuRef, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1);
	void OnFail_43AE79A54293550780DEB087EC94A5BA(class UTexture2DDynamic* Texture);
	void OnSuccess_43AE79A54293550780DEB087EC94A5BA(class UTexture2DDynamic* Texture);
	void OnFail_9D95364741CA1B5428249F8ACB4C6143(class UTexture2DDynamic* Texture);
	void OnSuccess_9D95364741CA1B5428249F8ACB4C6143(class UTexture2DDynamic* Texture);
	void RequestDownloadImage(const class FString& URL_String);
	void Uninstall();
	void CheckDiskSpaceToInstall();
	void CustomEvent(const struct FModsDirInfo& ModsDirInfo);
	void CustomEvent_1(const struct FCFCoreError& Error);
	void Animation_UpdateModImage(class UImage* IMG_GameImage);
	void BndEvt__GameSlot_Button_53_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Event_View_Mod_Page();
	void Event_On_Sub_Menu_Report();
	void Event_On_Uninstall_Pressed();
	void Event_On_Uninstall_Aprroved();
	void UpdateMod();
	void InstallMod();
	void Construct();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void UpdateInstallSlot();
	void BndEvt__UI_GameSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_GameSlot_Button_GoToModPage_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Destruct();
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void CancelInstallation();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
	void JustDownloadAndPlaceImage();
	void ExecuteUbergraph_UI_GameSlot(int32 EntryPoint, bool Temp_bool_Variable, class UObject* Temp_object_Variable, class UUI_Prompt_Report_C* CallFunc_Create_ReturnValue, class UUI_Prompt_Uninstall_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UTexture2DDynamic* K2Node_CustomEvent_Texture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UTexture2DDynamic* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UObject* Temp_object_Variable_2, class UUI_ModPage_C* CallFunc_Create_ReturnValue_2, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, const class FString& K2Node_CustomEvent_URL_String, class UTexture2DDynamic* Temp_object_Variable_3, bool CallFunc_IsValid_ReturnValue_6, const struct FModsDirInfo& K2Node_CustomEvent_ModsDirInfo, const struct FCFCoreError& K2Node_CustomEvent_error, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace, class UImage* K2Node_CustomEvent_IMG_GameImage, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UTexture2DDynamic* K2Node_CustomEvent_Texture_2, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UObject* K2Node_Event_ListItemObject, class UTexture2DDynamic* K2Node_CustomEvent_Texture_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue_9, bool K2Node_Event_bIsSelected, bool K2Node_Event_bIsExpanded, class UUI_ModPage_C* CallFunc_CreateModPageMenu_ModPageRef, bool CallFunc_SubscribeViewToEvents_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_StringLimit_NewString, const class FString& CallFunc_StringLimit_NewString_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_10, class UObject* K2Node_Select_Default_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_InitializeModView_ReturnValue);
	void OnModUnInstall__DelegateSignature();
	void OnDisableClicked__DelegateSignature();
	void OnModUninstalledComplete__DelegateSignature();
	void OnModInstall__DelegateSignature();
	void OnModInstalledComplete__DelegateSignature();
	void Like__DelegateSignature();
};

}


