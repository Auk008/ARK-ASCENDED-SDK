#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE9 (0x419 - 0x330)
// WidgetBlueprintGeneratedClass DataListButton_Widget_ASA.DataListButton_Widget_ASA_C
class UDataListButton_Widget_ASA_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                BorderBrackets;                                    // 0x338(0x8)(Edit, ZeroConstructor)
	class UBorder*                               BorderColor;                                       // 0x340(0x8)(Edit, ZeroConstructor)
	class UBorder*                               BorderOfColor;                                     // 0x348(0x8)(Edit, ZeroConstructor)
	class UEditableTextBox*                      DinoExpirationLabel;                               // 0x350(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            DinoStatusLabel;                                   // 0x358(0x8)(Edit, ZeroConstructor)
	class UVerticalBox*                          MainVerticalBox;                                   // 0x360(0x8)(Edit, ZeroConstructor)
	class UBorder*                               TextEntryBorder;                                   // 0x368(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   TheButton;                                         // 0x370(0x8)(Edit, ZeroConstructor)
	struct FLinearColor                          SelectedColorBG;                                   // 0x378(0x10)(None)
	struct FLinearColor                          UnSelectedColorBG;                                 // 0x388(0x10)(None)
	struct FLinearColor                          UnSelectedPairColorBG;                             // 0x398(0x10)(None)
	class FText                                  VariableText;                                      // 0x3A8(0x18)(BlueprintCallable, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TestValue;                                         // 0x3C0(0x1)(None)
	uint8                                        Pad_3E42[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ToggledState;                                      // 0x3C8(0x10)(ZeroConstructor)
	bool                                         SupportMultipleOptions;                            // 0x3D8(0x1)(None)
	uint8                                        Pad_3E43[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          BrushColor;                                        // 0x3DC(0x10)(None)
	bool                                         CanEditTextVariable;                               // 0x3EC(0x1)(None)
	uint8                                        Pad_3E44[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorTextSelected;                                 // 0x3F0(0x10)(None)
	struct FLinearColor                          ColorTextUnselected;                               // 0x400(0x10)(None)
	bool                                         UseOverrideValueText;                              // 0x410(0x1)(None)
	bool                                         HideValue;                                         // 0x411(0x1)(None)
	bool                                         IsChildOfPanel;                                    // 0x412(0x1)(None)
	uint8                                        Pad_3E45[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Maximum_Fractional_Digits;                         // 0x414(0x4)(None)
	bool                                         IsAlternativeColor;                                // 0x418(0x1)(None)

	static class UClass* StaticClass();
	static class UDataListButton_Widget_ASA_C* GetDefaultObj();

	void GetIsAlternativeColor(bool ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue_1, class UPanelWidget* CallFunc_GetParent_ReturnValue_2, class UPanelWidget* CallFunc_GetParent_ReturnValue_3, class UPanelWidget* CallFunc_GetParent_ReturnValue_4, int32 CallFunc_GetVisibleChildIndex_Index, class UObject* CallFunc_GetOuterObject_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue_1, class UPrimalUserWidget* K2Node_DynamicCast_AsPrimal_User_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetVisibleChildIndex_Index_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void GetVisibleChildIndex(class UPanelWidget* Parent, class UWidget* Widget, int32 Index, int32 ChildrenIndex, int32 CallFunc_GetChildrenCount_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void UpdateColorBrush(const struct FLinearColor& InBrushColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	void SetupToggledState(bool Condition, bool FromSelectOtherOption, bool CallFunc_GetIsAlternativeColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
	void BndEvt__DataListButtonVariable_Widget_ASA_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetTextButton(class FText NewText, bool CanEditTextVariable, bool UseOverrideValueText);
	void SetValueText(class FText ValueText);
	void BndEvt__DataListButton_Widget_ASA_DinoExpirationLabel_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_DataListButton_Widget_ASA(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, class FText K2Node_CustomEvent_NewText, bool K2Node_CustomEvent_CanEditTextVariable, bool K2Node_CustomEvent_UseOverrideValueText, class FText K2Node_CustomEvent_ValueText, const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue_1, class UPrimalUserWidget* K2Node_DynamicCast_AsPrimal_User_Widget, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool CallFunc_GetToggledState_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, class FText CallFunc_Conv_DoubleToText_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_HasKeyboardFocus_ReturnValue);
	void ToggledState__DelegateSignature(bool Set, bool FromSelectOtherOption);
};

}


