#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x7E8 - 0x758)
// WidgetBlueprintGeneratedClass TermsAndConditions.TermsAndConditions_C
class UTermsAndConditions_C : public UPrimalUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x758(0x8)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      FadeIn;                                            // 0x760(0x8)(ZeroConstructor)
	class UButton*                               Button_OpenTerm;                                   // 0x768(0x8)(ZeroConstructor)
	class UCustomButtonWidget*                   ButtonAccept;                                      // 0x770(0x8)(ZeroConstructor)
	class UCustomButtonWidget*                   ButtonDeny;                                        // 0x778(0x8)(ZeroConstructor)
	class UImage*                                IMG_Background;                                    // 0x780(0x8)(ZeroConstructor)
	class UImage*                                IMG_Option;                                        // 0x788(0x8)(ZeroConstructor)
	class UImage*                                IMG_Terms_BackGround;                              // 0x790(0x8)(ZeroConstructor)
	class UImage*                                IMGButtonA;                                        // 0x798(0x8)(ZeroConstructor)
	class UImage*                                ImgButtonB;                                        // 0x7A0(0x8)(ZeroConstructor)
	class UImage*                                OpenTermImage;                                     // 0x7A8(0x8)(ZeroConstructor)
	class UTextBlock*                            TEXT_MainPC;                                       // 0x7B0(0x8)(ZeroConstructor)
	class UTextBlock*                            TEXT_MainPS5;                                      // 0x7B8(0x8)(ZeroConstructor)
	class UTextBlock*                            TEXT_MainXSX;                                      // 0x7C0(0x8)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnAgree;                                           // 0x7C8(0x10)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnCancel;                                          // 0x7D8(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UTermsAndConditions_C* GetDefaultObj();

	void BPGamepadReleased(const struct FKey& TheKey, bool ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1);
	void BPHighlightWidgetOnStart(bool ReturnValue);
	void PlayFadeAnimation(enum class EUMGSequencePlayMode PlayMode, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Construct();
	void BndEvt__TermsAndConditions_Button_OpenTerm_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__TermsAndConditions_ButtonDeny_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TermsAndConditions_ButtonAccept_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_TermsAndConditions(int32 EntryPoint, const class FString& CallFunc_GetPlatformName_ReturnValue, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_1, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue_1, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue_1, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi_2, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue_2, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class UShooterGameViewportClient* CallFunc_GetViewportClient_ReturnValue, class UPrimalUI* CallFunc_GetUISceneFromClass_ReturnValue, class UPrimalUI* CallFunc_GetUISceneFromClass_ReturnValue_1, class UUI_MainMenu* K2Node_DynamicCast_AsUI_Main_Menu, bool K2Node_DynamicCast_bSuccess, class UUI_ListSessions* K2Node_DynamicCast_AsUI_List_Sessions, bool K2Node_DynamicCast_bSuccess_1);
	void OnCancel__DelegateSignature();
	void OnAgree__DelegateSignature();
};

}


