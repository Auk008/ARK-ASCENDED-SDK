#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x3C0 - 0x330)
// WidgetBlueprintGeneratedClass UI_PrivacyAndTerms_2.UI_PrivacyAndTerms_2_C
class UUI_PrivacyAndTerms_2_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic)
	class UButton*                               Button_Close;                                      // 0x338(0x8)(ZeroConstructor)
	class UButton*                               Button_Exit;                                       // 0x340(0x8)(ZeroConstructor)
	class UButton*                               Button_PrivacyPolicy;                              // 0x348(0x8)(ZeroConstructor)
	class UButton*                               Button_TermsOfUse;                                 // 0x350(0x8)(ZeroConstructor)
	class UImage*                                IMG_PrivacyPolicyFrame;                            // 0x358(0x8)(ZeroConstructor)
	class UImage*                                IMG_TermsOfUseFrame;                               // 0x360(0x8)(ZeroConstructor)
	class UImage*                                IMG_Underline;                                     // 0x368(0x8)(ZeroConstructor)
	class UImage*                                IMG_Underline2;                                    // 0x370(0x8)(ZeroConstructor)
	class UTextBlock*                            TEXT_PrivacyPolicy;                                // 0x378(0x8)(ZeroConstructor)
	class UTextBlock*                            TEXT_TermsOfUse;                                   // 0x380(0x8)(ZeroConstructor)
	class UMultiLineEditableTextBox*             TEXT_Text;                                         // 0x388(0x8)(ZeroConstructor)
	class FText                                  PrivacyPolicy;                                     // 0x390(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic)
	class FText                                  TermsOfUse;                                        // 0x3A8(0x18)(None)

	static class UClass* StaticClass();
	static class UUI_PrivacyAndTerms_2_C* GetDefaultObj();

	void Event_Terms_Of_Use();
	void BndEvt__PrivacyAndTerms_UI_2_TermsOfUse_B_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PrivacyAndTerms_UI_2_Close_B_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PrivacyAndTerms_UI_2_Btn_Exit_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PrivacyAndTerms_UI_2_TermsOfUse_B_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PrivacyAndTerms_UI_2_TermsOfUse_B_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PrivacyAndTerms_UI_2_PrivacyPolicy_B_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PrivacyAndTerms_UI_2_PrivacyPolicy_B_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PrivacyAndTerms_UI_2_PrivacyPolicy_B_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Event_Privacy_Policy();
	void PreConstruct(bool IsDesignTime);
	void OnSuccess_UpdateTermsOfUse(const struct FTerms& Terms);
	void Event_Update_Terms_Of_Use_Text();
	void Event_Update_Terms_Of_Use_On_Error(const struct FCFCoreError& Error);
	void ExecuteUbergraph_UI_PrivacyAndTerms_2(int32 EntryPoint, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, bool K2Node_Event_IsDesignTime, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FTerms& K2Node_CustomEvent_terms, const struct FCFCoreError& K2Node_CustomEvent_error, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}


