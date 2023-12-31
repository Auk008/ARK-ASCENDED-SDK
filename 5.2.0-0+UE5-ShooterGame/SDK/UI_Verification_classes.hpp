#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x428 - 0x330)
// WidgetBlueprintGeneratedClass UI_Verification.UI_Verification_C
class UUI_Verification_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, NativeAccessSpecifierPrivate)
	class UBorder*                               Border_SendNewCode;                                // 0x338(0x8)(Edit, ZeroConstructor)
	class UButton*                               button_back;                                       // 0x340(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_DifferentAccount;                           // 0x348(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_Exit;                                       // 0x350(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_ResendCode;                                 // 0x358(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_Select;                                     // 0x360(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_SendNewcode;                                // 0x368(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_Verify;                                     // 0x370(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Back;                                          // 0x378(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_DifferentAccount;                              // 0x380(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Resend;                                        // 0x388(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_ResendCode;                                    // 0x390(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Select;                                        // 0x398(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_VerifyControllerControl;                       // 0x3A0(0x8)(Edit, ZeroConstructor)
	class UUI_Code_C*                            IO_Code;                                           // 0x3A8(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Back;                                         // 0x3B0(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_DifferentAccount;                             // 0x3B8(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Email;                                        // 0x3C0(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Resend;                                       // 0x3C8(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_Select;                                       // 0x3D0(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_SendNewCode;                                  // 0x3D8(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_WrongCode;                                    // 0x3E0(0x8)(Edit, ZeroConstructor)
	class UVerticalBox*                          VerticalBox_ControllerControls;                    // 0x3E8(0x8)(Edit, ZeroConstructor)
	FMulticastInlineDelegateProperty_            Close_D;                                           // 0x3F0(0x10)(Edit, ZeroConstructor, AdvancedDisplay, BlueprintCallable, TextExportTransient, NativeAccessSpecifierPrivate)
	class FString                                CurrentCode;                                       // 0x400(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, NativeAccessSpecifierPrivate)
	class FString                                FilledDigits;                                      // 0x410(0x10)(None)
	class UUI_Prompt_SignIn_C*                   UI_SignIn;                                         // 0x420(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UUI_Verification_C* GetDefaultObj();

	void OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue);
	void BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Btn_Verify_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_4_OnDigitsNotFilled__DelegateSignature();
	void BndEvt__Verification_UI_Code_UI_K2Node_ComponentBoundEvent_3_OnDigitsFilled__DelegateSignature(const class FString& Digits);
	void BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Select_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Resend_Code_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Verification_UI_Btn_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Verification_UI_Btn_DifferentAccount_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Event_Bind_On_Input_Device_Changed(class UUI_StoreMenu_C* StoreMenuRef);
	void Event_On_Input_Device_Changed(enum class ENUM_InputDevices Device);
	void PreConstruct(bool IsDesignTime);
	void Event_On_Valid_Auth_Code_Generated();
	void Event_On_Failed_To_Generate_Auth_Code(const struct FCFCoreError& Error);
	void Construct();
	void BndEvt__Verification_UI_Btn_SendNewcode_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_Verification(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, enum class ENUM_InputDevices Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& K2Node_ComponentBoundEvent_Digits, class UUI_StoreMenu_C* K2Node_CustomEvent_StoreMenuRef, enum class ENUM_InputDevices K2Node_CustomEvent_Device, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_IsDesignTime, enum class ENUM_InputDevices CallFunc_CheckPlayerInputDevices_UsingGamepad_, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, const struct FCFCoreError& K2Node_CustomEvent_error, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetDigits_Digits, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_6, const struct FSlateColor& K2Node_MakeStruct_SlateColor_7, const struct FSlateColor& K2Node_MakeStruct_SlateColor_8, const struct FSlateColor& K2Node_MakeStruct_SlateColor_9);
	void Close_D__DelegateSignature();
};

}


