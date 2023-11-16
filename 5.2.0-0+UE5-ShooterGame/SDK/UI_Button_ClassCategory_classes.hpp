#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x420 - 0x330)
// WidgetBlueprintGeneratedClass UI_Button_ClassCategory.UI_Button_ClassCategory_C
class UUI_Button_ClassCategory_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class UButton*                               Button_Class;                                      // 0x338(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Background;                                    // 0x340(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Underline;                                     // 0x348(0x8)(Edit, ZeroConstructor)
	class UTextBlock*                            TEXT_CategoryName;                                 // 0x350(0x8)(Edit, ZeroConstructor)
	struct FCategory                             ClassCategoryInfo;                                 // 0x358(0x78)(AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class UUI_ClassCategorySelect_C*             ClassCategorySelect_Ref;                           // 0x3D0(0x8)(ZeroConstructor)
	class FText                                  InitNumOfModesInClass;                             // 0x3D8(0x18)(ContainsInstancedReference, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  CurrentNumOfModesInClass;                          // 0x3F0(0x18)(None)
	int32                                        InitCount;                                         // 0x408(0x4)(None)
	int32                                        CurrentCount;                                      // 0x40C(0x4)(None)
	struct FLinearColor                          UnderlineColor;                                    // 0x410(0x10)(None)

	static class UClass* StaticClass();
	static class UUI_Button_ClassCategory_C* GetDefaultObj();

	void UpdateAllThemeSettings(bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void ResetNumOfModsInClass();
	void SetCurrentNumOfModesInClass(int32 New_Num, class FText CallFunc_Conv_IntToText_ReturnValue);
	void SetCurrentCount(int32 CurrentCount);
	void ResetModsCounts();
	void SetUnderlineColor(bool ToShow);
	void BndEvt__CategoryButton_Class1_B_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CategoryButton_Class1_B_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__CategoryButton_Class1_B_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__CategoryButton_Class1_B_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CategoryButton_Class1_B_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void Event_Set_Class_Name(bool ClassCategoriesLocal_);
	void On_Search_Pagination_Info_Failed(const struct FCFCoreError& Error);
	void On_Search_Pagination_Info(const TArray<struct FCFCoreMod>& Mods, const struct FCFCoreApiResponsePagination& Pagination);
	void Update_Pagination();
	void Construct();
	void ExecuteUbergraph_UI_Button_ClassCategory(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_ClassCategoriesLocal_, bool CallFunc_IsHovered_ReturnValue, const struct FCFCoreError& K2Node_CustomEvent_error, bool CallFunc_NotEqual_Int64Int64_ReturnValue, const TArray<struct FCFCoreMod>& K2Node_CustomEvent_mods, const struct FCFCoreApiResponsePagination& K2Node_CustomEvent_pagination, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, const struct FCFCoreSearchModsFilter& CallFunc_MakeSearchModsFilter_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_IsValid_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_TextIsEmpty_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, class FText CallFunc_Format_ReturnValue_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, class UUI_ParentPage_C* CallFunc_GetCurrentActivePage_CurrentPage_1, enum class ENUM_SideTabs CallFunc_GetCurrentActivePage_CurrentActiveTab_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue);
};

}


