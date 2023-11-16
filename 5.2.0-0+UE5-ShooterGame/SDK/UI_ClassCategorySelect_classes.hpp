#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x418 - 0x330)
// WidgetBlueprintGeneratedClass UI_ClassCategorySelect.UI_ClassCategorySelect_C
class UUI_ClassCategorySelect_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(AdvancedDisplay, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                        HorizontalBox_Main;                                // 0x338(0x8)(Edit, ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_ED;                             // 0x340(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, NativeAccessSpecifierPrivate)
	TArray<struct FCategory>                     ClassCategories;                                   // 0x350(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, NativeAccessSpecifierPrivate)
	class UUI_ParentPage_C*                      UI_ParentPageWIdget;                               // 0x360(0x8)(Edit, ZeroConstructor)
	TArray<class UUI_Button_ClassCategory_C*>    ClassCategoriesButtons;                            // 0x368(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FCategory                             CurrentClassCategory;                              // 0x378(0x78)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnClassesInit;                                     // 0x3F0(0x10)(Edit, ZeroConstructor)
	class UUI_Button_ClassCategory_C*            UI_CurrentClassButton;                             // 0x400(0x8)(Edit, ZeroConstructor)
	bool                                         Mods;                                              // 0x408(0x1)(None)
	uint8                                        Pad_4AE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_StoreMenu_C*                       UI_StoreMenu;                                      // 0x410(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UUI_ClassCategorySelect_C* GetDefaultObj();

	void DoesModBelongToCategory(const struct FInstalledMod& Mod_List, const struct FCategory& Category, bool IsPresent, int32 CurrentNum, int32 CallFunc_Conv_Int64ToInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void FilterToModsOfClass(const TArray<struct FInstallProgressMod>& Mod_List, const struct FCategory& Category, const TArray<struct FInstallProgressMod>& ListOfMods, const TArray<struct FInstallProgressMod>& TempListToReturn, int32 CurrentNum, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void SetCategoryUnderlineColor(class UUI_Button_ClassCategory_C* SelectedCategoryWidgetRef, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UUI_Button_ClassCategory_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void Check_Num_Of_Mods_In_Each_Class(const struct FCategory& Category, int32 NumberInInt, class FText NumberInTXT, int32 CurrentNum, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void OnClassCategoriesInfoFound(const TArray<struct FCategory>& Categories);
	void OnClassCategoriesInfoFound_Error(const struct FCFCoreError& Error);
	void SortClassCategories();
	void PreConstruct(bool IsDesignTime);
	void UpdateNumOfModsInCategories(bool ClassCategoriesLocal_);
	void ClearNumOfModsInCategories(bool ClassCategoriesLocal_);
	void ConstructClass();
	void ExecuteUbergraph_UI_ClassCategorySelect(int32 EntryPoint, class FText Temp_text_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const struct FCFCoreGetCategoriesFilter& CallFunc_MakeGetCategoriesFilter_ReturnValue, const TArray<struct FCategory>& K2Node_CustomEvent_categories, int32 CallFunc_Array_Length_ReturnValue, const struct FCFCoreError& K2Node_CustomEvent_error, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Array_Index_Variable_3, const struct FCategory& CallFunc_Array_Get_Item, const struct FCategory& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_ClassCategoriesLocal__1, class UUI_Button_ClassCategory_C* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInInt, class FText CallFunc_Check_Num_Of_Mods_In_Each_Class_NumberInTXT, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, class UUI_Button_ClassCategory_C* CallFunc_Create_ReturnValue, bool K2Node_CustomEvent_ClassCategoriesLocal_, int32 CallFunc_Array_Add_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText Temp_text_Variable_1, class UUI_Button_ClassCategory_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable_3, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void OnClassesInit__DelegateSignature();
	void OnSelectionChanged_ED__DelegateSignature();
};

}


