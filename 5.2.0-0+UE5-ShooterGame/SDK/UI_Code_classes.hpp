#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x470 - 0x330)
// WidgetBlueprintGeneratedClass UI_Code.UI_Code_C
class UUI_Code_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBorder*                               Border0;                                           // 0x338(0x8)(Edit, ZeroConstructor)
	class UBorder*                               Border1;                                           // 0x340(0x8)(Edit, ZeroConstructor)
	class UBorder*                               Border2;                                           // 0x348(0x8)(Edit, ZeroConstructor)
	class UBorder*                               Border3;                                           // 0x350(0x8)(Edit, ZeroConstructor)
	class UBorder*                               Border4;                                           // 0x358(0x8)(Edit, ZeroConstructor)
	class UBorder*                               Border5;                                           // 0x360(0x8)(Edit, ZeroConstructor)
	class UHorizontalBox*                        HorizontalBox_726;                                 // 0x368(0x8)(Edit, ZeroConstructor)
	class UEditableText*                         TEXT_Digit1;                                       // 0x370(0x8)(Edit, ZeroConstructor)
	class UEditableText*                         TEXT_Digit2;                                       // 0x378(0x8)(Edit, ZeroConstructor)
	class UEditableText*                         TEXT_Digit3;                                       // 0x380(0x8)(Edit, ZeroConstructor)
	class UEditableText*                         TEXT_Digit4;                                       // 0x388(0x8)(Edit, ZeroConstructor)
	class UEditableText*                         TEXT_Digit5;                                       // 0x390(0x8)(Edit, ZeroConstructor)
	class UEditableText*                         TEXT_Digit6;                                       // 0x398(0x8)(Edit, ZeroConstructor)
	int32                                        CurrentFocused;                                    // 0x3A0(0x4)(None)
	int32                                        FilledDigits;                                      // 0x3A4(0x4)(None)
	class FString                                Digits;                                            // 0x3A8(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFilled0;                                         // 0x3B8(0x1)(None)
	bool                                         IsFilled1;                                         // 0x3B9(0x1)(None)
	bool                                         IsFilled2;                                         // 0x3BA(0x1)(None)
	bool                                         IsFilled3;                                         // 0x3BB(0x1)(None)
	bool                                         IsFilled4;                                         // 0x3BC(0x1)(None)
	bool                                         IsFilled5;                                         // 0x3BD(0x1)(None)
	uint8                                        Pad_4A39[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnDigitsFilled;                                    // 0x3C0(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDigitsNotFilled;                                 // 0x3D0(0x10)(ZeroConstructor, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TextDigit1;                                        // 0x3E0(0x18)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TextDigit2;                                        // 0x3F8(0x18)(AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TextDigit3;                                        // 0x410(0x18)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TextDigit4;                                        // 0x428(0x18)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TextDigit5;                                        // 0x440(0x18)(AssetRegistrySearchable, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TextDigit6;                                        // 0x458(0x18)(None)

	static class UClass* StaticClass();
	static class UUI_Code_C* GetDefaultObj();

	void OnLeftArrow(int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void OnRightArrow(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void GetDigits(const class FString& Digits, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4);
	void BackSpace(int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess);
	void SetDigitToText(int32 Index, class FText Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, int32 Temp_int_Variable, const class FString& CallFunc_Array_Get_Item, bool K2Node_SwitchInteger_CmpSuccess, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_2, const class FString& CallFunc_Array_Get_Item_3, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, const class FString& CallFunc_Array_Get_Item_4, const class FString& CallFunc_Array_Get_Item_5, class FText CallFunc_Conv_StringToText_ReturnValue_4, class FText CallFunc_Conv_StringToText_ReturnValue_5, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, const class FString& CallFunc_GetDigits_Digits, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void Event_Reset_Code_Incorect();
	void Event_Code_Incorect();
	void BndEvt__Verification_UI_EditableText_172_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(class FText Text);
	void BndEvt__Verification_UI_digit2_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature(class FText Text);
	void BndEvt__Verification_UI_digit3_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature(class FText Text);
	void BndEvt__Verification_UI_digit4_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature(class FText Text);
	void BndEvt__Verification_UI_digit5_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature(class FText Text);
	void BndEvt__Verification_UI_digit6_K2Node_ComponentBoundEvent_8_OnEditableTextChangedEvent__DelegateSignature(class FText Text);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Code(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, int32 Temp_int_Variable_2, class FText K2Node_ComponentBoundEvent_Text_5, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_ComponentBoundEvent_Text_4, bool CallFunc_TextIsEmpty_ReturnValue_1, class FText K2Node_ComponentBoundEvent_Text_3, bool CallFunc_TextIsEmpty_ReturnValue_2, class FText K2Node_ComponentBoundEvent_Text_2, bool CallFunc_TextIsEmpty_ReturnValue_3, class FText K2Node_ComponentBoundEvent_Text_1, bool CallFunc_TextIsEmpty_ReturnValue_4, class FText K2Node_ComponentBoundEvent_Text, bool CallFunc_TextIsEmpty_ReturnValue_5, const class FString& CallFunc_Conv_TextToString_ReturnValue, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, const class FString& CallFunc_Array_Get_Item, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_LastIndex_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 Temp_int_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_2, const class FString& CallFunc_Array_Get_Item_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_2, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_3, const class FString& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_LastIndex_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_Array_LastIndex_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_4, const class FString& CallFunc_Array_Get_Item_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue_4, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_5, const class FString& CallFunc_Array_Get_Item_5, int32 CallFunc_Array_LastIndex_ReturnValue_4, class FText CallFunc_Conv_StringToText_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_4, int32 CallFunc_Array_LastIndex_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_5);
	void OnDigitsNotFilled__DelegateSignature();
	void OnDigitsFilled__DelegateSignature(const class FString& Digits);
};

}


