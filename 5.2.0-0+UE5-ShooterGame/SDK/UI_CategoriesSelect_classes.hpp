#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xD78 - 0xD38)
// WidgetBlueprintGeneratedClass UI_CategoriesSelect.UI_CategoriesSelect_C
class UUI_CategoriesSelect_C : public UUI_CustomComboBox_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD38(0x8)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnGenerated;                                       // 0xD40(0x10)(Edit, ZeroConstructor, AutoWeak, SimpleDisplay, Protected, PersistentInstance, NativeAccessSpecifierPrivate)
	int64                                        CurrentClassCategoryID;                            // 0xD50(0x8)(None)
	TArray<class FString>                        Temp;                                              // 0xD58(0x10)(AssetRegistrySearchable, AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int64                                        SelectedCategoryID;                                // 0xD68(0x8)(None)
	class UUI_ParentPage_C*                      UI_ParentPage;                                     // 0xD70(0x8)(Edit, ZeroConstructor)

	static class UClass* StaticClass();
	static class UUI_CategoriesSelect_C* GetDefaultObj();

	void CreateAllCategoriesCategory(const class FString& CallFunc_MakeLiteralString_ReturnValue, const struct FSTRUCT_CustomComboBoxOption& K2Node_MakeStruct_STRUCT_CustomComboBoxOption, const struct FSTRUCT_CustomComboBoxOption& K2Node_MakeStruct_STRUCT_CustomComboBoxOption_1);
	void OnCategoriesInfoFound(const TArray<struct FCategory>& Categories);
	void OnCategoriesInfoFound_Error(const struct FCFCoreError& Error);
	void UpdateOptions(int64 Current_Class_Category_ID);
	void PreConstruct(bool IsDesignTime);
	void OnOptionSelectedInterface(const class FString& Option, int64 ID, class UUI_CustomComboBoxOption_C* OptionWidget);
	void ExecuteUbergraph_UI_CategoriesSelect(int32 EntryPoint, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, const TArray<struct FCategory>& K2Node_CustomEvent_categories, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, const struct FCFCoreError& K2Node_CustomEvent_error, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FCategory& CallFunc_Array_Get_Item, const struct FSTRUCT_SubOptions& K2Node_MakeStruct_STRUCT_SubOptions, int64 K2Node_Event_Current_Class_Category_ID, int32 CallFunc_Conv_Int64ToInt_ReturnValue, const struct FCFCoreGetCategoriesFilter& CallFunc_MakeGetCategoriesFilter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const struct FSTRUCT_CustomComboBoxOption& CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab, bool K2Node_Event_IsDesignTime, const class FString& K2Node_Event_Option, int64 K2Node_Event_ID, class UUI_CustomComboBoxOption_C* K2Node_Event_OptionWidget, int32 Temp_int_Array_Index_Variable_1, const struct FCategory& CallFunc_Array_Get_Item_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, const struct FSTRUCT_CustomComboBoxOption& K2Node_MakeStruct_STRUCT_CustomComboBoxOption, bool CallFunc_EqualEqual_Int64Int64_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnGenerated__DelegateSignature();
};

}


