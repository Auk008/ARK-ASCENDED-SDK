#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA08 (0xD38 - 0x330)
// WidgetBlueprintGeneratedClass UI_CustomComboBox.UI_CustomComboBox_C
class UUI_CustomComboBox_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(AutoWeak, ContainsInstancedReference, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          BaseVerticalBox;                                   // 0x338(0x8)(Edit, ZeroConstructor)
	class UBorder*                               Border_1;                                          // 0x340(0x8)(Edit, ZeroConstructor)
	class UBorder*                               Border_2;                                          // 0x348(0x8)(Edit, ZeroConstructor)
	class UBorder*                               Border_3;                                          // 0x350(0x8)(Edit, ZeroConstructor)
	class UBorder*                               Border_484;                                        // 0x358(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_SelectedOption;                             // 0x360(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_DropIcon;                                      // 0x368(0x8)(Edit, ZeroConstructor)
	class UOverlay*                              Options;                                           // 0x370(0x8)(Edit, ZeroConstructor)
	class UScrollBox*                            Options_ScrollBox;                                 // 0x378(0x8)(Edit, ZeroConstructor)
	class USpacer*                               Spacer_Text;                                       // 0x380(0x8)(Edit, ZeroConstructor)
	class UBorder*                               SpacersBorder;                                     // 0x388(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_OptionSelect;                                 // 0x390(0x8)(Edit, ZeroConstructor)
	class UVerticalBox*                          Verticalbox_Options;                               // 0x398(0x8)(Edit, ZeroConstructor)
	struct FVector2D                             ScrollBoxSize;                                     // 0x3A0(0x10)(None)
	TArray<struct FSTRUCT_CustomComboBoxOption>  DefaultOptions;                                    // 0x3B0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                DefaultOption;                                     // 0x3C0(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnOptionSelected;                                  // 0x3D0(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                SelectedOption;                                    // 0x3E0(0x10)(ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector2D                             BaseSize;                                          // 0x3F0(0x10)(None)
	bool                                         OptionSpacing_;                                    // 0x400(0x1)(None)
	uint8                                        Pad_41FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          OptionSpacersColor;                                // 0x404(0x10)(None)
	uint8                                        Pad_41FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TextSpacingSize;                                   // 0x418(0x8)(None)
	class UUI_CustomComboBoxSpacer_C*            LastSpacer;                                        // 0x420(0x8)(Edit, ZeroConstructor)
	class UTexture2D*                            DropmenuArrow;                                     // 0x428(0x8)(Edit, ZeroConstructor)
	class UTexture2D*                            OpendDropmenuArrow;                                // 0x430(0x8)(ZeroConstructor)
	bool                                         FirstHasImage_;                                    // 0x438(0x1)(None)
	uint8                                        Pad_41FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                OptionClass;                                       // 0x440(0x8)(Edit, ZeroConstructor)
	bool                                         HasImage_;                                         // 0x448(0x1)(None)
	uint8                                        Pad_4205[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ImageSize;                                         // 0x450(0x10)(None)
	class UTexture2D*                            Image;                                             // 0x460(0x8)(Edit, ZeroConstructor)
	struct FLinearColor                          ImageBackgroundTint;                               // 0x468(0x10)(None)
	struct FVector2D                             Image_Background_Size;                             // 0x478(0x10)(None)
	FMulticastInlineDelegateProperty_            PostPreConstruct;                                  // 0x488(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        DefaultSubOptionsDEP;                              // 0x498(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsClearOnUpdate;                                   // 0x4A8(0x1)(None)
	uint8                                        Pad_4208[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               Owner;                                             // 0x4B0(0x8)(ZeroConstructor)
	TArray<class UUI_CustomComboBoxOption_C*>    UI_OptionsWidgetArray;                             // 0x4B8(0x10)(Edit, ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4209[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          OptionOpenStyle;                                   // 0x4D0(0x3F0)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FButtonStyle                          OptionCloseStyle;                                  // 0x8C0(0x3F0)(Edit, ZeroConstructor, AutoWeak, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FSTRUCT_SubOptions>            DefaultSubOptions;                                 // 0xCB0(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUI_CustomComboBoxOption_C*            UI_LastOption;                                     // 0xCC0(0x8)(ZeroConstructor)
	TArray<class UUI_CustomComboBoxOption_C*>    UI_HoverdOptions;                                  // 0xCC8(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_CustomComboBoxOption_C*            UI_SelectedOptionWidget;                           // 0xCD8(0x8)(Edit, ZeroConstructor)
	class UUI_StoreMenu_C*                       StoreMenu;                                         // 0xCE0(0x8)(Edit, ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnOpenOptions;                                     // 0xCE8(0x10)(Edit, ZeroConstructor, SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnCloseOption;                                     // 0xCF8(0x10)(ZeroConstructor)
	struct FLinearColor                          BaseBorder;                                        // 0xD08(0x10)(None)
	struct FLinearColor                          HoveredBorder;                                     // 0xD18(0x10)(None)
	struct FLinearColor                          PressedBorder;                                     // 0xD28(0x10)(None)

	static class UClass* StaticClass();
	static class UUI_CustomComboBox_C* GetDefaultObj();

	void Nav_to_Options(enum class EUINavigation Navigation, class UWidget* ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option, bool K2Node_DynamicCast_bSuccess);
	void Nav_Back_Tomain_Button(enum class EUINavigation Navigation, class UWidget* ReturnValue);
	void SetUpNavigation(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_IsHovered_ReturnValue);
	void GetOptionAtIndex(int32 Index, const class FString& Text, class UUI_CustomComboBoxOption_C* AsCustomComboBoxOption, bool IsValid, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUI_CustomComboBoxOption_C* K2Node_DynamicCast_AsUI_Custom_Combo_Box_Option, bool K2Node_DynamicCast_bSuccess);
	void Setup();
	void PreConstruct(bool IsDesignTime);
	void Event_Add_Option(const struct FSTRUCT_CustomComboBoxOption& CategoryInfo);
	void BndEvt__CustomComboBox_SelectedOption_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Event_Open_Options();
	void Event_Close_Options();
	void Event_Clear_Options();
	void Event_Generate_Default_Options();
	void Event_Set_Selected_Option(const class FString& Option, bool CallOnOptionSelected_, class UUI_CustomComboBoxOption_C* OptionWidget);
	void OnOptionSelectedInterface(const class FString& Option, int64 ID, class UUI_CustomComboBoxOption_C* OptionWidget);
	void BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_CustomComboBox_Button_SelectedOption_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void CloseOtherWay();
	void ExecuteUbergraph_UI_CustomComboBox(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_4, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool K2Node_Event_IsDesignTime, const struct FSTRUCT_CustomComboBoxOption& K2Node_CustomEvent_CategoryInfo, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, const class FString& K2Node_CustomEvent_Option, bool K2Node_CustomEvent_CallOnOptionSelected_, class UUI_CustomComboBoxOption_C* K2Node_CustomEvent_OptionWidget, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& K2Node_Event_Option, int64 K2Node_Event_ID, class UUI_CustomComboBoxOption_C* K2Node_Event_OptionWidget, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_7, class UUI_CustomComboBoxOption_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, const class FString& CallFunc_GetOptionAtIndex_Text, class UUI_CustomComboBoxOption_C* CallFunc_GetOptionAtIndex_AsCustomComboBoxOption, bool CallFunc_GetOptionAtIndex_IsValid, bool CallFunc_IsValid_ReturnValue_8, bool K2Node_Select_Default, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, class UUI_CustomComboBoxOption_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UUI_CustomComboBoxOption_C* CallFunc_Array_Get_Item_1, class UUI_CustomComboBoxOption_C* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, const struct FSTRUCT_CustomComboBoxOption& CallFunc_Array_Get_Item_3, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, class UUI_CustomComboBoxSpacer_C* CallFunc_Create_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_13, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2);
	void OnCloseOption__DelegateSignature();
	void OnOpenOptions__DelegateSignature(class UUI_CustomComboBox_C* NewParam);
	void PostPreConstruct__DelegateSignature();
	void OnOptionSelected__DelegateSignature(const class FString& Option);
};

}


