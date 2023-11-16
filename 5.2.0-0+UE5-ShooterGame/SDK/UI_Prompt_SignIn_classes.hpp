#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x448 - 0x330)
// WidgetBlueprintGeneratedClass UI_Prompt_SignIn.UI_Prompt_SignIn_C
class UUI_Prompt_SignIn_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                               Border_InvalidFrame;                               // 0x338(0x8)(Edit, ZeroConstructor)
	class UButton*                               button_back;                                       // 0x340(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_Continue;                                   // 0x348(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_Exit;                                       // 0x350(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_PrivecyPolicy;                              // 0x358(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_ResendCode;                                 // 0x360(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_Select;                                     // 0x368(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_TermsOfUse;                                 // 0x370(0x8)(Edit, ZeroConstructor)
	class UVerticalBox*                          ControllerControlsVerticalBox;                     // 0x378(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Back;                                          // 0x380(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_ContinueControllerControl;                     // 0x388(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Email;                                         // 0x390(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_PrivacyPolicy;                                 // 0x398(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Resend;                                        // 0x3A0(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Select;                                        // 0x3A8(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_TermsOfUse;                                    // 0x3B0(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Back;                                         // 0x3B8(0x8)(Edit, ZeroConstructor)
	class UEditableText*                         TEXT_EmailEditable;                                // 0x3C0(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_InvalidEmail;                                 // 0x3C8(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_PrivacyPolicy;                                // 0x3D0(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_PrivacyTermsOfUse;                            // 0x3D8(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Select;                                       // 0x3E0(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_TermsOfUse;                                   // 0x3E8(0x8)(Edit, ZeroConstructor)
	bool                                         IsEmailAccepted;                                   // 0x3F0(0x1)(None)
	uint8                                        Pad_4B0E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Verification_C*                    VerificationUI;                                    // 0x3F8(0x8)(Edit, ZeroConstructor)
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x400(0x8)(Edit, ZeroConstructor)
	class UWidget*                               CurrentPage;                                       // 0x408(0x8)(Edit, ZeroConstructor)
	class FText                                  Text;                                              // 0x410(0x18)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  EnteredEmail;                                      // 0x428(0x18)(None)
	class UUI_PrivacyAndTerms_2_C*               UI_PrivacyAndTerms;                                // 0x440(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UUI_Prompt_SignIn_C* GetDefaultObj();

	void OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void Event_CloseD();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SignIn_UI_Btn_Continue_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SignIn_UI_Btn_Exit_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SignIn_UI_EditableTxt_Email_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(class FText Text);
	void Event_Bind_On_Input_Device_Changed(class UUI_StoreMenu_C* StoreMenuRef);
	void Event_On_Input_Device_Changed(enum class ENUM_InputDevices Device);
	void BndEvt__SignIn_UI_Btn_PrivecyPolicy_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Event_Close();
	void Event_Failed_To_Send_Security_Code(const struct FCFCoreError& Error);
	void Event_On_Security_Code_Sent();
	void Event_Send_Security_Code();
	void BndEvt__SignIn_UI_Btn_TermsOfUse_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_UI_Prompt_SignIn(int32 EntryPoint, class UUI_Verification_C* CallFunc_Create_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, enum class ENUM_InputDevices Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUI_PrivacyAndTerms_2_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_6, bool K2Node_Event_IsDesignTime, class FText CallFunc_GetEmptyText_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, class UUI_StoreMenu_C* K2Node_CustomEvent_StoreMenuRef, bool CallFunc_NotEqual_TextText_ReturnValue, enum class ENUM_InputDevices K2Node_CustomEvent_Device, enum class ESlateVisibility K2Node_Select_Default, enum class ENUM_InputDevices CallFunc_CheckPlayerInputDevices_UsingGamepad_, const struct FSlateColor& K2Node_MakeStruct_SlateColor_7, bool CallFunc_IsValid_ReturnValue_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_8, const struct FSlateColor& K2Node_MakeStruct_SlateColor_9, const struct FCFCoreError& K2Node_CustomEvent_error, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
};

}


