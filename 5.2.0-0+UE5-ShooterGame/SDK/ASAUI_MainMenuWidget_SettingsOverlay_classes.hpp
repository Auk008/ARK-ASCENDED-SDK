#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x7D8 - 0x758)
// WidgetBlueprintGeneratedClass ASAUI_MainMenuWidget_SettingsOverlay.ASAUI_MainMenuWidget_SettingsOverlay_C
class UASAUI_MainMenuWidget_SettingsOverlay_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      Open;                                              // 0x760(0x8)(ZeroConstructor)
	class UWidgetAnimation*                      Close;                                             // 0x768(0x8)(ZeroConstructor)
	class UCustomButtonWidget*                   BackButton;                                        // 0x770(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CreditsButton;                                     // 0x778(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   QuitButton;                                        // 0x780(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   SettingsButton;                                    // 0x788(0x8)(Edit, ZeroConstructor)
	class UPrimalUserWidget*                     ParentWidget;                                      // 0x790(0x8)(Edit, ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnBackSelected;                                    // 0x798(0x10)(Edit, ZeroConstructor, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnSettingsClicked;                                 // 0x7A8(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnCreditsClicked;                                  // 0x7B8(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnQuitGameClicked;                                 // 0x7C8(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UASAUI_MainMenuWidget_SettingsOverlay_C* GetDefaultObj();

	void OnKeyDownEvent(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyboardEvent, const struct FEventReply& ReturnValue, const struct FKey& LocalKey, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_OnKeyDownEvent_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_BackButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_QuitButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_CreditsButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ASAUI_MainMenuWidget_SettingsOverlay_SettingsButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BPVirtualCursorinit();
	void ExecuteUbergraph_ASAUI_MainMenuWidget_SettingsOverlay(int32 EntryPoint, bool CallFunc_IsConsoleBuild_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
	void OnQuitGameClicked__DelegateSignature();
	void OnCreditsClicked__DelegateSignature();
	void OnSettingsClicked__DelegateSignature();
	void OnBackSelected__DelegateSignature();
};

}


