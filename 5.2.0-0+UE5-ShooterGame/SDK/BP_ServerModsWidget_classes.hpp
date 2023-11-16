#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x299 (0x9F1 - 0x758)
// WidgetBlueprintGeneratedClass BP_ServerModsWidget.BP_ServerModsWidget_C
class UBP_ServerModsWidget_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      Notif;                                             // 0x760(0x8)(Edit, ZeroConstructor)
	class UUI_Button_Ark_Blue_C*                 BACK_BUTTON;                                       // 0x768(0x8)(Edit, ZeroConstructor)
	class UButton*                               BUTTON_BACK_FROM_SUBMENU;                          // 0x770(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_Menu;                                       // 0x778(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_ModInstalled;                               // 0x780(0x8)(Edit, ZeroConstructor)
	class UHorizontalBox*                        HBOX_NOT_ENOUGH;                                   // 0x788(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image;                                             // 0x790(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_1;                                           // 0x798(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_2;                                           // 0x7A0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_3;                                           // 0x7A8(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_145;                                         // 0x7B0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_866;                                         // 0x7B8(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_NOT_ENOUGH;                                  // 0x7C0(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_BG;                                            // 0x7C8(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_BG_1;                                          // 0x7D0(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_BG_2;                                          // 0x7D8(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_BG_3;                                          // 0x7E0(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_LINE;                                          // 0x7E8(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_LINE_1;                                        // 0x7F0(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_LINE_2;                                        // 0x7F8(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_LINE_3;                                        // 0x800(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_LINE_4;                                        // 0x808(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Thumbnail;                                     // 0x810(0x8)(Edit, ZeroConstructor)
	class UUI_Button_Ark_Blue_C*                 JOIN_BUTTON;                                       // 0x818(0x8)(Edit, ZeroConstructor)
	class UScrollBox*                            Mods_Holder;                                       // 0x820(0x8)(Edit, ZeroConstructor)
	class UBP_ServerModsSubMenu_C*               ServerModsSubMenu;                                 // 0x828(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_FREESPACE;                                    // 0x830(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Message;                                      // 0x838(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Name;                                         // 0x840(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_NEED_DOWNLOAD;                                // 0x848(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_SERVER_NAME;                                  // 0x850(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_SIZE;                                         // 0x858(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_TOTAL;                                        // 0x860(0x8)(Edit, ZeroConstructor)
	class UWrapBox*                              WrapBox_88;                                        // 0x868(0x8)(Edit, ZeroConstructor)
	int32                                        ModsCount;                                         // 0x870(0x4)(None)
	int32                                        NeedDownloadCount;                                 // 0x874(0x4)(None)
	double                                       DownlaodSize;                                      // 0x878(0x8)(None)
	TArray<struct FCFCoreMod>                    Mods;                                              // 0x880(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         IsSubMenuShow;                                     // 0x890(0x1)(None)
	uint8                                        Pad_4951[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            RepotrEvent;                                       // 0x898(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            FavoriteEvent;                                     // 0x8A8(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            JoinEvent;                                         // 0x8B8(0x10)(Edit, ZeroConstructor, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BackEvent;                                         // 0x8C8(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  Server_Name;                                       // 0x8D8(0x18)(ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int64                                        Server_ID;                                         // 0x8F0(0x8)(None)
	FMulticastInlineDelegateProperty_            StartDownloads;                                    // 0x8F8(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        DownloadCount;                                     // 0x908(0x4)(None)
	uint8                                        Pad_4955[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int64, class UUI_GameSlot_C*>           GameSlorList;                                      // 0x910(0x50)(Edit, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<enum class EGameModsEvent>            Evts;                                              // 0x960(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBP_ServerModsLoading_C*               Loading;                                           // 0x970(0x8)(ZeroConstructor)
	TArray<struct FInstallProgressMod>           ModsOurStruct;                                     // 0x978(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCFCoreMod>                    ModsToDownload;                                    // 0x988(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            Error;                                             // 0x998(0x10)(ZeroConstructor, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<int64>                                ModsIds;                                           // 0x9A8(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FModsDirInfo                          Mods_Dir_Info;                                     // 0x9B8(0x20)(None)
	int64                                        DownlaodSizeInt64;                                 // 0x9D8(0x8)(None)
	int64                                        ModToDownloadSize;                                 // 0x9E0(0x8)(None)
	int64                                        Free_Disk_Size_In_Bytes;                           // 0x9E8(0x8)(None)
	bool                                         IsAlreadyInstalled;                                // 0x9F0(0x1)(None)

	static class UClass* StaticClass();
	static class UBP_ServerModsWidget_C* GetDefaultObj();

	void OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, const struct FCFCoreApiResponsePagination& Pagination, bool ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue);
	void CheckIfAllInstalled(bool CallFunc_EqualEqual_Int64Int64_ReturnValue);
	void CheckIfEnoughSpaceOnDisk();
	void OnRespone_0(const TArray<struct FInstallProgressMod>& Mods, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UUI_GameSlot_C* CallFunc_Create_ReturnValue, const struct FFile& CallFunc_Array_Get_Item_1, int64 CallFunc_Add_Int64Int64_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Array_IsValidIndex_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue);
	void UpdateInfo(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue);
	void Get_Server_Mods_Delegate(FDelegateProperty_ JoinEvent, FDelegateProperty_ BackEvent, FDelegateProperty_ ReportEvent, FDelegateProperty_ FavoriteEvent, FDelegateProperty_ ErrorEvent);
	void EndDownloadCheck(class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void UpdateTexts(bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_FormatFileSize_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1);
	void UpdateInstalledMods(const TArray<struct FInstalledMod>& Installed_mods, const TArray<int32>& IDs, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, const struct FInstalledMod& CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, const struct FCFCoreMod& CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FFile& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, int64 CallFunc_Add_Int64Int64_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue);
	void OnError(const struct FCFCoreError& Error);
	void CreateModsList(class FText ServerName, int64 ServerID, const TArray<int64>& ModsIds, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Construct();
	void BndEvt__BP_ServerModsWidget_BUTTON_MENU_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BP_ServerModsWidget_BUTTON_BACK_FROM_SUBMENU_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BP_ServerModsWidget_BACK_BUTTON_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature();
	void ControllerAction(const struct FKey& Key, enum class EViewState State);
	void BndEvt__BP_ServerModsWidget_ServerModsSubMenu_K2Node_ComponentBoundEvent_4_ReportEvent__DelegateSignature();
	void BndEvt__BP_ServerModsWidget_ServerModsSubMenu_K2Node_ComponentBoundEvent_5_FavoriteEvent__DelegateSignature();
	void Destruct();
	void LoadingBackEvent();
	void CompletedEvent();
	void ErrorEvent();
	void StartDowloadingMod();
	void PullModsDirectoryInfo();
	void CustomEvent(const struct FModsDirInfo& ModsDirInfo);
	void CustomEvent_1(const struct FCFCoreError& Error);
	void NotifyAnimation();
	void BndEvt__BP_ServerModsWidget_Button_ModInstalled_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BP_ServerModsWidget_JOIN_BUTTON_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_BP_ServerModsWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_FormatFileSize_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, class UBP_ServerModsLoading_C* CallFunc_Create_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_SubscribeViewToEvents_ReturnValue, bool Temp_bool_Variable, const struct FModsDirInfo& K2Node_CustomEvent_ModsDirInfo, const struct FCFCoreError& K2Node_CustomEvent_error, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
	void Error__DelegateSignature();
	void StartDownloads__DelegateSignature(int64 ServerID);
	void BackEvent__DelegateSignature();
	void JoinEvent__DelegateSignature(int64 ServerID);
	void FavoriteEvent__DelegateSignature(int64 ServerID);
	void RepotrEvent__DelegateSignature(int64 ServerID);
};

}


