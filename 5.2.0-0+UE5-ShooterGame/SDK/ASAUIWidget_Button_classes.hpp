#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x660 (0x990 - 0x330)
// WidgetBlueprintGeneratedClass ASAUIWidget_Button.ASAUIWidget_Button_C
class UASAUIWidget_Button_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                Bracket;                                           // 0x338(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button;                                            // 0x340(0x8)(Edit, ZeroConstructor)
	class USizeBox*                              Button_SizeBox;                                    // 0x348(0x8)(Edit, ZeroConstructor)
	class UImage*                                Button_Text_ControllerIcon;                        // 0x350(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            Button_Text_Left;                                  // 0x358(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            Button_Text_Right;                                 // 0x360(0x8)(Edit, ZeroConstructor)
	class UImage*                                SelectedLine;                                      // 0x368(0x8)(Edit, ZeroConstructor)
	class FText                                  ButtonLabel_Left;                                  // 0x370(0x18)(AssetRegistrySearchable, BlueprintCallable, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x388(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTexture2D*                            ButtonLabel_Icon;                                  // 0x398(0x8)(Edit, ZeroConstructor)
	struct FVector2D                             ButtonLabel_Icon_Size;                             // 0x3A0(0x10)(None)
	class FText                                  ButtonLabel_Right;                                 // 0x3B0(0x18)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateFontInfo                        ButtonLabel_Font;                                  // 0x3C8(0x58)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                       HeightOverride;                                    // 0x420(0x8)(None)
	double                                       WidthOverride;                                     // 0x428(0x8)(None)
	struct FButtonStyle                          ButtonStyle;                                       // 0x430(0x3F0)(Edit, ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           BracketBrush;                                      // 0x820(0xD0)(Edit, ZeroConstructor, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                          TextColor_Normal_Inactive;                         // 0x8F0(0x10)(None)
	struct FLinearColor                          TextColor_Normal_Active;                           // 0x900(0x10)(None)
	struct FLinearColor                          TextColor_Hovered;                                 // 0x910(0x10)(None)
	struct FLinearColor                          TextColor_Pressed;                                 // 0x920(0x10)(None)
	struct FLinearColor                          BracketColor_Normal;                               // 0x930(0x10)(None)
	struct FLinearColor                          BracketColor_Hovered;                              // 0x940(0x10)(None)
	struct FLinearColor                          BracketColor_Pressed;                              // 0x950(0x10)(None)
	bool                                         Initialized;                                       // 0x960(0x1)(None)
	bool                                         Active;                                            // 0x961(0x1)(None)
	uint8                                        Pad_284B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ActionKey;                                         // 0x968(0x10)(None)
	class UTexture2D*                            Button_Label_Icon_KBM;                             // 0x978(0x8)(Edit, ZeroConstructor)
	bool                                         PreventButtonOnKBM;                                // 0x980(0x1)(None)
	bool                                         Is_Gamepad_Active;                                 // 0x981(0x1)(None)
	bool                                         UsesSelectedLine;                                  // 0x982(0x1)(None)
	uint8                                        Pad_284C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ButtonIconDefault;                                 // 0x988(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UASAUIWidget_Button_C* GetDefaultObj();

	void SetButtonText(class FText TheText);
	void Fix_PS_Icons(TMap<class FString, class FString> XSX_ui_names, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, TMap<class FString, class FString> K2Node_MakeVariable_MakeVariableOutput, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void UpdateInputIcon(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast);
	void UpdateBracketAndTextColors(bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsPressed_ReturnValue);
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ASAUIWidget_Button_1_BackButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void UpdateButton();
	void BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ASAUIWidget_Button_Style1_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void SetActive(bool NewActive);
	void Construct();
	void OnWidgetGamepadActiveChangedBP(bool bIsGamepadActive);
	void ExecuteUbergraph_ASAUIWidget_Button(int32 EntryPoint, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, bool K2Node_CustomEvent_newActive, bool K2Node_Event_bIsGamepadActive, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABasePlayerController* K2Node_DynamicCast_AsBase_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast);
	void OnButtonClicked__DelegateSignature();
};

}


