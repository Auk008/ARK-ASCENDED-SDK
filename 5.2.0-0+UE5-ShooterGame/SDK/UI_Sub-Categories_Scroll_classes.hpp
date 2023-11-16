#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x851 (0xB81 - 0x330)
// WidgetBlueprintGeneratedClass UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C
class UUI_SubMinusCategories_Scroll_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                               Category_Button;                                   // 0x338(0x8)(Edit, ZeroConstructor)
	class UScrollBox*                            ScrollBar_Categories;                              // 0x340(0x8)(Edit, ZeroConstructor)
	class UUI_CustomComboBox_C*                  CustomComboBoxWidget_Ref;                          // 0x348(0x8)(Edit, ZeroConstructor)
	class UUI_CustomComboBoxOption_C*            CustomComboBoxOptionWidget_Ref;                    // 0x350(0x8)(Edit, ZeroConstructor)
	TArray<class FString>                        SubCategoriesDEP;                                  // 0x358(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         IsCategoryHovered;                                 // 0x368(0x1)(None)
	bool                                         IsHoveredWidget;                                   // 0x369(0x1)(None)
	uint8                                        Pad_38AA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSubcategorySelect;                               // 0x370(0x10)(Edit, ZeroConstructor, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            PreRemoval;                                        // 0x380(0x10)(ZeroConstructor, ContainsInstancedReference, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FButtonStyle                          ButtonUnselectedStyle;                             // 0x390(0x3F0)(ZeroConstructor, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FButtonStyle                          ButtonSelectedStyle;                               // 0x780(0x3F0)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FSTRUCT_SubOptions>            SubOptions;                                        // 0xB70(0x10)(None)
	bool                                         IsScrollHovered;                                   // 0xB80(0x1)(None)

	static class UClass* StaticClass();
	static class UUI_SubMinusCategories_Scroll_C* GetDefaultObj();

	void OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void Event_Create_Scroll();
	void Event_On_Subcategory_Select_Event(const class FString& SubCategory, int64 SubCategoryID);
	void BndEvt__SubMinusCategories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void OnInitialized();
	void Event_Is_Still_Hovered();
	void BndEvt__SubMinusCategories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Event_Check_If_Selected(class UUI_SubMinusCategory_C* SubCategoryWidget_Ref, const class FString& Text);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_UI_SubMinusCategories_Scroll(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, class UUI_SubMinusCategory_C* CallFunc_Create_ReturnValue, const class FString& K2Node_CustomEvent_SubCategory, int64 K2Node_CustomEvent_SubCategoryID, int32 Temp_int_Array_Index_Variable, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUI_SubMinusCategory_C* K2Node_CustomEvent_SubCategoryWidget_Ref, const class FString& K2Node_CustomEvent_Text, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FSTRUCT_SubOptions& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_BooleanOR_ReturnValue);
	void PreRemoval__DelegateSignature();
	void OnSubcategorySelect__DelegateSignature(const class FString& SubCategory, int64 SubCategoryID);
};

}


