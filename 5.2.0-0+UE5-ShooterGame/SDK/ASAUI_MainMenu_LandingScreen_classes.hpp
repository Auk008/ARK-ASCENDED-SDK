#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x388 - 0x330)
// WidgetBlueprintGeneratedClass ASAUI_MainMenu_LandingScreen.ASAUI_MainMenu_LandingScreen_C
class UASAUI_MainMenu_LandingScreen_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ContainsInstancedReference, AdvancedDisplay, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      ShowMenu;                                          // 0x338(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style1A_C*         GoToLastPlayedButton;                              // 0x340(0x8)(Edit, ZeroConstructor)
	class UCanvasPanel*                          MainUI_Panel;                                      // 0x348(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style1B_C*         PressAToStartButton;                               // 0x350(0x8)(Edit, ZeroConstructor)
	class UClass*                                WidgetToLoadOn_PressAToPlay;                       // 0x358(0x8)(Edit, ZeroConstructor)
	class UPrimalUserWidget*                     NextWidget;                                        // 0x360(0x8)(Edit, ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnStartButtonClicked;                              // 0x368(0x10)(Edit, ZeroConstructor, AdvancedDisplay, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnGoToLastPlayedButtonClicked;                     // 0x378(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UASAUI_MainMenu_LandingScreen_C* GetDefaultObj();

	void BndEvt__ASAUI_MainMenu_LandingScreen_PressAToStartButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUI_MainMenu_LandingScreen_GoToLastPlayedButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature();
	void Construct();
	void RefreshAnim();
	void ExecuteUbergraph_ASAUI_MainMenu_LandingScreen(int32 EntryPoint, class UShooterGameViewportClient* CallFunc_GetViewportClient_ReturnValue, class UPrimalUI* CallFunc_GetUISceneFromClass_ReturnValue, class UUI_MainMenu* K2Node_DynamicCast_AsUI_Main_Menu, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnGoToLastPlayedButtonClicked__DelegateSignature();
	void OnStartButtonClicked__DelegateSignature();
};

}


