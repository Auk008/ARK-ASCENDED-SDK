#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A8 (0x1188 - 0xFE0)
// WidgetBlueprintGeneratedClass ReListSessions_ASA.ReListSessions_ASA_C
class UReListSessions_ASA_C : public UUI_ListSessions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xFE0(0x8)(None)
	class UWidgetAnimation*                      Close;                                             // 0xFE8(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      Open;                                              // 0xFF0(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            ACCEPT;                                            // 0xFF8(0x8)(Edit, ZeroConstructor)
	class UImage*                                AcceptImage;                                       // 0x1000(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   AcceptPassword;                                    // 0x1008(0x8)(Edit, ZeroConstructor)
	class UImage*                                AscendingDescendingIcon;                           // 0x1010(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   AutoFavoriteButton;                                // 0x1018(0x8)(Edit, ZeroConstructor)
	class UCheckBox*                             AutoFavoriteCheckBox;                              // 0x1020(0x8)(Edit, ZeroConstructor)
	class UBorder*                               BackgroundBorder;                                  // 0x1028(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_6;                                          // 0x1030(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_7;                                          // 0x1038(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            Cancel;                                            // 0x1040(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CancelButton;                                      // 0x1048(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CancelPassword;                                    // 0x1050(0x8)(Edit, ZeroConstructor)
	class UButton*                               DayOrder;                                          // 0x1058(0x8)(Edit, ZeroConstructor)
	class UImage*                                DenyImage;                                         // 0x1060(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   FavoritesButton;                                   // 0x1068(0x8)(Edit, ZeroConstructor)
	class UEditableTextBox*                      FindSessionName;                                   // 0x1070(0x8)(Edit, ZeroConstructor)
	class UComboBoxString*                       GameModeComboBox;                                  // 0x1078(0x8)(Edit, ZeroConstructor)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_FaceLeft;                      // 0x1080(0x8)(Edit, ZeroConstructor)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_FaceTop;                       // 0x1088(0x8)(Edit, ZeroConstructor)
	class UGamepadButtonLegend_C*                GamepadButtonLegend_Start;                         // 0x1090(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_HorizontalListSelector_Main_Style1_C* Header_HorizSelector;                              // 0x1098(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   HideFullButton;                                    // 0x10A0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_1;                                           // 0x10A8(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_18;                                          // 0x10B0(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_19;                                          // 0x10B8(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   JoinLastPlayedServer;                              // 0x10C0(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   JoinSessionButton;                                 // 0x10C8(0x8)(Edit, ZeroConstructor)
	class UComboBoxString*                       MapComboBox;                                       // 0x10D0(0x8)(Edit, ZeroConstructor)
	class UCanvasPanel*                          PasswordEntryPanel;                                // 0x10D8(0x8)(Edit, ZeroConstructor)
	class UEditableTextBox*                      PasswordField;                                     // 0x10E0(0x8)(Edit, ZeroConstructor)
	class UButton*                               PingOrder;                                         // 0x10E8(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            PlatformSpecificServerTextBox;                     // 0x10F0(0x8)(Edit, ZeroConstructor)
	class UButton*                               PlayerOrder;                                       // 0x10F8(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   RefreshSessionsButton;                             // 0x1100(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   RentYourOwnServerButton;                           // 0x1108(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   S;                                                 // 0x1110(0x8)(Edit, ZeroConstructor)
	class UComboBoxString*                       ServerTypeComboBox;                                // 0x1118(0x8)(Edit, ZeroConstructor)
	class UButton*                               SessionOrderName;                                  // 0x1120(0x8)(Edit, ZeroConstructor)
	class USizeBox*                              SessionSizeBox;                                    // 0x1128(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style1A_C*         SettingsButton;                                    // 0x1130(0x8)(Edit, ZeroConstructor)
	class UCheckBox*                             ShowNotFullServers;                                // 0x1138(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   ShowPlatformSpecificServersButton;                 // 0x1140(0x8)(Edit, ZeroConstructor)
	class UCheckBox*                             ShowPlatformSpecificServersCheckBox;               // 0x1148(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   ShowPrivateServersButton;                          // 0x1150(0x8)(Edit, ZeroConstructor)
	class UCheckBox*                             ShowProtectedServersCheckBox;                      // 0x1158(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   ShowUserProfileButton;                             // 0x1160(0x8)(Edit, ZeroConstructor)
	class UComboBoxString*                       SortComboBox;                                      // 0x1168(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   SortOrderToggleButton;                             // 0x1170(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   WantYourOwnArkServer;                              // 0x1178(0x8)(Edit, ZeroConstructor)
	class UPrimalUserWidget*                     ServerModsWidgetObject;                            // 0x1180(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UReListSessions_ASA_C* GetDefaultObj();

	void HandleAscendDescendSwitch(class UComboBoxString* ComboBox, int32 ForIndex, int32 CallFunc_GetSelectedIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void UpdateHorizontalTabEnabledStates(bool CallFunc_IsChecked_ReturnValue, class UWidget* CallFunc_SwitchButton_Widget, int32 CallFunc_GetSelectedIndex_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetupPlatformSpecificTextBox(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, const class FString& CallFunc_GetPlatformName_ReturnValue, bool K2Node_SwitchString_CmpSuccess);
	void OnKeyDownEvent(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyboardEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, const struct FEventReply& CallFunc_OnKeyDown_ReturnValue, class UComboBoxString* CallFunc_GetOpenComboBox_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_SwitchButton_Widget, class UWidget* CallFunc_SwitchButton_Widget_1, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& LocalKey, const struct FKey& CallFunc_GetKey_ReturnValue, class UWidget* CallFunc_SwitchButton_Widget, const struct FEventReply& CallFunc_OnKeyDown_ReturnValue, class UWidget* CallFunc_SwitchButton_Widget_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void GetSizeboxForExtraHandheldScaling(class USizeBox* ReturnValue);
	void GetWidgetToScaleForHandheld(class UWidget* ReturnValue);
	void BndEvt__ShowProtectedServersCheckBox_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged_0__DelegateSignature();
	void BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_1_OnSelectionChanged_1__DelegateSignature();
	void BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_2_OnSelectionChanged_2__DelegateSignature();
	void BndEvt__ReListSessions_ASA_Header_HorizSelector_K2Node_ComponentBoundEvent_3_OnSelectionChanged_3__DelegateSignature();
	void BndEvt__ReListSessions_ASA_SessionOrderName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReListSessions_ASA_PlayerOrder_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReListSessions_ASA_DayOrder_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReListSessions_ASA_PingOrder_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReListSessions_ASA_ShowPrivateServersButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReListSessions_ASA_HideFullButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReListSessions_ASA_AutoFavoriteButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReListSessions_ASA_SettingsButton_K2Node_ComponentBoundEvent_11_OnButtonClicked__DelegateSignature();
	void OnServerListingClickedModPopup(bool bNeedInit, const TArray<int64>& ModIds, const class FString& ServerName, int64 ServerID);
	void ModUIJoinEvent(int64 ServerID);
	void ModUIBackEvent();
	void ModUIReportEvent(int64 ServerID);
	void ModUIFavoriteEvent(int64 ServerID);
	void ModUIError();
	void SetCurrentServerSearchType(int32 ServerType);
	void Construct();
	void BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReListSessions_ASA_ShowPlatformSpecificServersCheckBox_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BPSetupLayout();
	void ForceUpdateServerTypeSelection();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__ReListSessions_ASA_WantYourOwnArkServer_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_ReListSessions_ASA(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_ComponentBoundEvent_bIsChecked_1, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_Not_PreBool_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_Event_bNeedInit, const TArray<int64>& K2Node_Event_ModIds, const class FString& K2Node_Event_ServerName, int64 K2Node_Event_ServerId, class FText CallFunc_Conv_StringToText_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int64 K2Node_CustomEvent_ServerId_2, bool CallFunc_RegisterModelClass_ReturnValue, int64 K2Node_CustomEvent_ServerId_1, int64 K2Node_CustomEvent_ServerId, int32 K2Node_Event_ServerType, bool CallFunc_IsChecked_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_3, class UBP_ServerModsWidget_C* CallFunc_Create_ReturnValue, bool K2Node_ComponentBoundEvent_bIsChecked, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_GetSelectedIndex_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue_1);
};

}


