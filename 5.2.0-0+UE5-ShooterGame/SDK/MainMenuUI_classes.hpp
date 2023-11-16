#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4E8 (0xEB8 - 0x9D0)
// WidgetBlueprintGeneratedClass MainMenuUI.MainMenuUI_C
class UMainMenuUI_C : public UUI_MainMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9D0(0x8)(AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      FadeOutOverrideBackground;                         // 0x9D8(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      FadeInOverrideBackground;                          // 0x9E0(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      FadeIn;                                            // 0x9E8(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      FadeOut;                                           // 0x9F0(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      Close;                                             // 0x9F8(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      Open;                                              // 0xA00(0x8)(Edit, ZeroConstructor)
	class UBorder*                               BackgroundMedia;                                   // 0xA08(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CreditsButton;                                     // 0xA10(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   ExitButton;                                        // 0xA18(0x8)(Edit, ZeroConstructor)
	class UImage*                                ExitGlow;                                          // 0xA20(0x8)(Edit, ZeroConstructor)
	class UImage*                                FadingBackgroundImage;                             // 0xA28(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   HelpButton;                                        // 0xA30(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   HostButton;                                        // 0xA38(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_107;                                         // 0xA40(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_151;                                         // 0xA48(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_4093;                                        // 0xA50(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_4112;                                        // 0xA58(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_4120;                                        // 0xA60(0x8)(Edit, ZeroConstructor)
	class UImage*                                Image_4128;                                        // 0xA68(0x8)(Edit, ZeroConstructor)
	class UCanvasPanel*                          LeftSideMenuButtons;                               // 0xA70(0x8)(Edit, ZeroConstructor)
	class UImage*                                LinuxBackgroundImage;                              // 0xA78(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   ListSessionsButton;                                // 0xA80(0x8)(Edit, ZeroConstructor)
	class UImage*                                ListSessionsButtonBackground;                      // 0xA88(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   OptionsButton;                                     // 0xA90(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   PatchNotesButton;                                  // 0xA98(0x8)(Edit, ZeroConstructor)
	class UButton*                               UpsellButton;                                      // 0xAA0(0x8)(Edit, ZeroConstructor)
	class UButton*                               WebButton;                                         // 0xAA8(0x8)(Edit, ZeroConstructor)
	class UClass*                                SponsoredModsUIClass;                              // 0xAB0(0x8)(Edit, ZeroConstructor)
	class UMediaPlayer*                          MoviePlayer;                                       // 0xAB8(0x8)(Edit, ZeroConstructor)
	struct FButtonStyle                          AlternateCTAStyle;                                 // 0xAC0(0x3F0)(Edit, ZeroConstructor)
	class UBinkMediaPlayer*                      BGMediaPlayer;                                     // 0xEB0(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UMainMenuUI_C* GetDefaultObj();

	void OverrideBGImage(class UTexture2D* BGOverrideTexture, bool InstantChange, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AShooterGame_Menu* K2Node_DynamicCast_AsShooter_Game_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UTexture2D* CallFunc_GetMainMenuBackgroundTexture_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void UpdateLeftTextPosition(bool IsCTAVisible, bool Temp_bool_Variable, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, const struct FMargin& K2Node_Select_Default, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	void BndEvt__ScorchedEarthStoreButton_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__CreditsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WebButton_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_MainMenuUI(int32 EntryPoint, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AShooterGame_Menu* K2Node_DynamicCast_AsShooter_Game_Menu, bool K2Node_DynamicCast_bSuccess, class UTexture2D* CallFunc_GetMainMenuBackgroundTexture_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetUpsellIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, int32 CallFunc_GetUpsellIndex_ReturnValue_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, bool K2Node_SwitchInteger_CmpSuccess, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_2, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_2, int32 CallFunc_GetUpsellIndex_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess_1, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_OpenUrl_ReturnValue, bool CallFunc_OpenUrl_ReturnValue_1, class UCreditsUI_C* CallFunc_Create_ReturnValue, bool CallFunc_Play_ReturnValue);
};

}


