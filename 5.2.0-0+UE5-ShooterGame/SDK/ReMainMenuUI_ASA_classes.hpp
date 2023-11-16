#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x560 (0xF30 - 0x9D0)
// WidgetBlueprintGeneratedClass ReMainMenuUI_ASA.ReMainMenuUI_ASA_C
class UReMainMenuUI_ASA_C : public UUI_MainMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9D0(0x8)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      FadePanel;                                         // 0x9D8(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      FadeIntro;                                         // 0x9E0(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      FadeOutOverrideBackground;                         // 0x9E8(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      FadeInOverrideBackground;                          // 0x9F0(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      FadeIn;                                            // 0x9F8(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      FadeOut;                                           // 0xA00(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      Close;                                             // 0xA08(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      Open;                                              // 0xA10(0x8)(Edit, ZeroConstructor)
	class UASAUI_MainMenu_GameModeSelect_C*      ASAUI_MainMenu_GameModeSelect;                     // 0xA18(0x8)(Edit, ZeroConstructor)
	class UASAUI_MainMenu_LandingScreen_C*       ASAUI_MainMenu_LandingScreen;                      // 0xA20(0x8)(Edit, ZeroConstructor)
	class UBorder*                               BackgroundMediaIntro;                              // 0xA28(0x8)(Edit, ZeroConstructor)
	class UBorder*                               BackgroundMediaLoop;                               // 0xA30(0x8)(Edit, ZeroConstructor)
	class UBorder*                               BackgroundMediaLoop_1;                             // 0xA38(0x8)(Edit, ZeroConstructor)
	class UWidgetSwitcher*                       BGSwitcher;                                        // 0xA40(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CreditsButton;                                     // 0xA48(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   ExitButton;                                        // 0xA50(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   HostButton;                                        // 0xA58(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_18;                                          // 0xA60(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_19;                                          // 0xA68(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_28;                                          // 0xA70(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_107;                                         // 0xA78(0x8)(Edit, ZeroConstructor)
	class UCanvasPanel*                          LeftSideMenuButtons;                               // 0xA80(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   ListSessionsButton;                                // 0xA88(0x8)(Edit, ZeroConstructor)
	class UWidgetSwitcher*                       MainMenuWidgetSwitcher;                            // 0xA90(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   ModsButton;                                        // 0xA98(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   OptionsButton;                                     // 0xAA0(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   PatchNotesButton;                                  // 0xAA8(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style1A_C*         SettingsButton;                                    // 0xAB0(0x8)(Edit, ZeroConstructor)
	class UButton*                               WebLink;                                           // 0xAB8(0x8)(Edit, ZeroConstructor)
	class UClass*                                SponsoredModsUIClass;                              // 0xAC0(0x8)(Edit, ZeroConstructor)
	class UMediaPlayer*                          MoviePlayer;                                       // 0xAC8(0x8)(Edit, ZeroConstructor)
	struct FButtonStyle                          AlternateCTAStyle;                                 // 0xAD0(0x3F0)(Edit, ZeroConstructor, ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UBinkMediaPlayer*                      IntroBGMediaPlayer;                                // 0xEC0(0x8)(Edit, ZeroConstructor)
	TSoftObjectPtr<class UASAUI_MainMenuWidget_SettingsOverlay_C> SettingsOverlay;                                   // 0xEC8(0x30)(Edit, ZeroConstructor)
	class UClass*                                VisualSettingsTemplate;                            // 0xEF8(0x8)(Edit, ZeroConstructor)
	class UBinkMediaPlayer*                      IntroBGMediaPlayerLoop;                            // 0xF00(0x8)(Edit, ZeroConstructor)
	bool                                         bIntroPlayed;                                      // 0xF08(0x1)(None)
	uint8                                        Pad_4BD4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IntroTimeToShowPanel;                              // 0xF0C(0x4)(None)
	float                                        IntoTimeToShowLoop;                                // 0xF10(0x4)(None)
	uint8                                        Pad_4BD5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          IntroTimeToShowPanelTimerHandle;                   // 0xF18(0x8)(None)
	struct FTimerHandle                          IntroTimeToShowLoopTimerHandle;                    // 0xF20(0x8)(None)
	class UBinkMediaPlayer*                      IntroBGMediaPlayerLoop_NoLogo;                     // 0xF28(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UReMainMenuUI_ASA_C* GetDefaultObj();

	void SettingsOverlayIsOpen(bool ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UASAUI_MainMenuWidget_SettingsOverlay_C* K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue);
	void HighlightTheStartButton(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnKeyDownEvent(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyboardEvent, const struct FEventReply& ReturnValue, const struct FKey& LocalKey, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_OnKeyDownEvent_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess);
	void UpdateLeftTextPosition(bool IsCTAVisible, bool Temp_bool_Variable, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, const struct FMargin& K2Node_Select_Default, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	void BndEvt__ReMainMenuUI_ASA_SettingsButton_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature();
	void OnCreditsClicked_Event();
	void OnQuitGameClicked_Event();
	void OnSettingsClicked_Event();
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_6_OnModsClicked__DelegateSignature();
	void Construct();
	void BndEvt__MainMenuUI_WebLink_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void EscapeMainMenuPressed();
	void StartMainMenuPressed();
	void HighlightStartButton();
	void OnBackClicked_Event();
	void StopAllCardAnims();
	void BndEvt__CreditsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_4_OnCreateGameClicked__DelegateSignature();
	void ClosedEvent_Event();
	void OnGamepadActiveChangedBP(bool bIsGamepadActive);
	void OnGamepadSelectionChanged(class UWidget* Widget);
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_3_OnMultiplayerClicked__DelegateSignature();
	void OnMediaReachedEnd_Event();
	void JumpIntro();
	void OnMediaReachedEnd_Event_0();
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_GameModeSelect_K2Node_ComponentBoundEvent_2_OnBackSelected__DelegateSignature();
	void StopIntroCinematic();
	void OnCFCoreUIControllerInit();
	void SetMainJoinedButtonVisibility(enum class ESlateVisibility NewVisibilty);
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_LandingScreen_K2Node_ComponentBoundEvent_7_OnGoToLastPlayedButtonClicked__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__ReMainMenuUI_ASA_ASAUI_MainMenu_LandingScreen_K2Node_ComponentBoundEvent_1_OnStartButtonClicked__DelegateSignature();
	void ExecuteUbergraph_ReMainMenuUI_ASA(int32 EntryPoint, class UASAUI_MainMenuWidget_SettingsOverlay_C* CallFunc_Create_ReturnValue, TSoftObjectPtr<class UASAUI_MainMenuWidget_SettingsOverlay_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_RegisterModelClass_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UASAUI_MainMenuWidget_SettingsOverlay_C* K2Node_DynamicCast_AsASAUI_Main_Menu_Widget_Settings_Overlay, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UCreditsUI_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_Event_bIsGamepadActive, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UWidget* K2Node_Event_widget, class UCustomButtonWidget* K2Node_DynamicCast_AsCustom_Button_Widget, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Play_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Rewind_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UShooterGameInstance* K2Node_DynamicCast_AsShooter_Game_Instance, bool K2Node_DynamicCast_bSuccess_2, enum class ESlateVisibility K2Node_Event_newVisibilty, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Play_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5);
};

}


