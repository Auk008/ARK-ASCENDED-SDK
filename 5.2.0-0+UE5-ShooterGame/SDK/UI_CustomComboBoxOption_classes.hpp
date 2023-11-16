#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x988 (0xCB8 - 0x330)
// WidgetBlueprintGeneratedClass UI_CustomComboBoxOption.UI_CustomComboBoxOption_C
class UUI_CustomComboBoxOption_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class UButton*                               Button_Option;                                     // 0x338(0x8)(ZeroConstructor)
	class UBorder*                               ImageBorder;                                       // 0x340(0x8)(ZeroConstructor)
	class UImage*                                IMG_Border;                                        // 0x348(0x8)(ZeroConstructor)
	class UImage*                                IMG_ChevronRight;                                  // 0x350(0x8)(ZeroConstructor)
	class UBorder*                               SizeBorder;                                        // 0x358(0x8)(ZeroConstructor)
	class USpacer*                               Spacer_1;                                          // 0x360(0x8)(ZeroConstructor)
	class USpacer*                               Spacer_2;                                          // 0x368(0x8)(ZeroConstructor)
	class USpacer*                               Spacer_Text;                                       // 0x370(0x8)(ZeroConstructor)
	class UTextBlock*                            TEXT_Option;                                       // 0x378(0x8)(ZeroConstructor)
	class UUI_CustomComboBox_C*                  UI_CustomComboBoxWidget;                           // 0x380(0x8)(ZeroConstructor)
	struct FSTRUCT_CustomComboBoxOption          CategoryInfo;                                      // 0x388(0x38)(AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                Text;                                              // 0x3C0(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUI_CustomComboBox_C*                  Owner;                                             // 0x3D0(0x8)(ZeroConstructor)
	struct FVector2D                             Size;                                              // 0x3D8(0x10)(None)
	double                                       TextSpacing;                                       // 0x3E8(0x8)(None)
	struct FVector2D                             ImageSize;                                         // 0x3F0(0x10)(None)
	bool                                         HasImage;                                          // 0x400(0x1)(None)
	uint8                                        Pad_2AC7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Image;                                             // 0x408(0x8)(ZeroConstructor)
	struct FLinearColor                          ImageBackgroundTint;                               // 0x410(0x10)(None)
	struct FVector2D                             ImageBackgroundSize;                               // 0x420(0x10)(None)
	TArray<class FString>                        SubOptionsDEP;                                     // 0x430(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        FontSize;                                          // 0x440(0x4)(None)
	uint8                                        Pad_2AC9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_SubMinusCategories_Scroll_C*       SubCategoriesScroll;                               // 0x448(0x8)(ZeroConstructor)
	struct FButtonStyle                          ButtonSelectedStyle;                               // 0x450(0x3F0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FButtonStyle                          ButtonUnselectedStyle;                             // 0x840(0x3F0)(ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FSTRUCT_SubOptions                    Settings_Sub_Options;                              // 0xC30(0x28)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FSTRUCT_SubOptions>            SubOptions;                                        // 0xC58(0x10)(AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FSlateColor                           HoveredText;                                       // 0xC68(0x14)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FSlateColor                           BaseText;                                          // 0xC7C(0x14)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FSlateColor                           FocusedText;                                       // 0xC90(0x14)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FSlateColor                           ActiveText;                                        // 0xCA4(0x14)(None)

	static class UClass* StaticClass();
	static class UUI_CustomComboBoxOption_C* GetDefaultObj();

	void OnOptionSelected(const class FString& Option, int64 ID, TScriptInterface<class IBPI_CustomComboBoxInterface_C> K2Node_DynamicCast_AsBPI_Custom_Combo_Box_Interface, bool K2Node_DynamicCast_bSuccess);
	void UpdateHoveredOption(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUI_CustomComboBoxOption_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void OnNavRight(enum class EUINavigation Navigation, class UWidget* ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_SubMinusCategory_C* K2Node_DynamicCast_AsUI_Sub__Category, bool K2Node_DynamicCast_bSuccess);
	void RemoveSpacingIfNotHaveArrow(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void RemoveSpacingIfNotHaveImage();
	void CheckIfSubCategorySelected(const class FString& SelectedOption, bool IsSelected, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FSTRUCT_SubOptions& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void OnUpdate(double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_HasAnyUserFocus_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast);
	void ContinueUpdating(bool CallFunc_K2_TimerExists_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void StopUpdating();
	void OnFail_2F79E7094E3FA19CAF12DEBE91370E8A(class UTexture2DDynamic* Texture);
	void OnSuccess_2F79E7094E3FA19CAF12DEBE91370E8A(class UTexture2DDynamic* Texture);
	void BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Event_On_Sub_Option_Clicked(const class FString& SubCategory, int64 SubCategoryID);
	void Event_Check_If_Still_Hovered();
	void BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Event_Check_If_Selected();
	void Construct();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void Event_Update_Navigation(bool IsLast);
	void Event_Close();
	void Event_Remove_Scroll();
	void BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_CustomComboBoxOption(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, enum class EUINavigationRule Temp_byte_Variable, enum class EUINavigationRule Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable_2, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTexture2DDynamic* K2Node_CustomEvent_Texture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTexture2DDynamic* Temp_object_Variable, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, enum class ESlateVisibility Temp_byte_Variable_2, const class FString& K2Node_CustomEvent_SubCategory, int64 K2Node_CustomEvent_SubCategoryID, class FText CallFunc_Conv_StringToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_CheckIfSubCategorySelected_IsSelected, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, float CallFunc_GetViewportScale_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, int32 CallFunc_Array_Length_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool K2Node_CustomEvent_IsLast, class UUI_SubMinusCategories_Scroll_C* CallFunc_Create_ReturnValue, enum class EUINavigationRule K2Node_Select_Default, bool CallFunc_Array_IsValidIndex_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Array_RemoveItem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_Variable_3, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, enum class ESlateVisibility Temp_byte_Variable_3, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_GetText_ReturnValue_1, bool CallFunc_EqualEqual_TextText_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, const struct FSlateColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_Select_Default_3, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


