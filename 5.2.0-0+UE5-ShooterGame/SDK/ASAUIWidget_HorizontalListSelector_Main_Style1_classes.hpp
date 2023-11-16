#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x200 (0x530 - 0x330)
// WidgetBlueprintGeneratedClass ASAUIWidget_HorizontalListSelector_Main_Style1.ASAUIWidget_HorizontalListSelector_Main_Style1_C
class UASAUIWidget_HorizontalListSelector_Main_Style1_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ContainsInstancedReference, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class UASAUIWidget_Button_Style2A_C*         Button0;                                           // 0x338(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style2A_C*         Button1;                                           // 0x340(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style2A_C*         Button10;                                          // 0x348(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style2A_C*         Button2;                                           // 0x350(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style2A_C*         Button3;                                           // 0x358(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style2A_C*         Button4;                                           // 0x360(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style2A_C*         Button5;                                           // 0x368(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style2A_C*         Button6;                                           // 0x370(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style2A_C*         Button7;                                           // 0x378(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style2A_C*         Button8;                                           // 0x380(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style2A_C*         Button9;                                           // 0x388(0x8)(Edit, ZeroConstructor)
	class UImage*                                Header_NavLeft;                                    // 0x390(0x8)(Edit, ZeroConstructor)
	class UImage*                                Header_NavRight;                                   // 0x398(0x8)(Edit, ZeroConstructor)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x3A0(0x8)(Edit, ZeroConstructor)
	class USizeBox*                              SizeBox;                                           // 0x3A8(0x8)(Edit, ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_0;                              // 0x3B0(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	int32                                        NumButtons;                                        // 0x3C0(0x4)(None)
	int32                                        CurrSelection;                                     // 0x3C4(0x4)(None)
	int32                                        LastSelection;                                     // 0x3C8(0x4)(None)
	uint8                                        Pad_4C16[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelectionChanged_1;                              // 0x3D0(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_2;                              // 0x3E0(0x10)(Edit, ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_3;                              // 0x3F0(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_4;                              // 0x400(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_5;                              // 0x410(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_6;                              // 0x420(0x10)(Edit, ZeroConstructor, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_7;                              // 0x430(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_8;                              // 0x440(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_9;                              // 0x450(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_10;                             // 0x460(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FText>                          ButtonLabels_Left;                                 // 0x470(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UTexture2D*>                    ButtonLabels_Icon;                                 // 0x480(0x10)(Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVector2D>                     ButtonLabels_Icon_Size;                            // 0x490(0x10)(AutoWeak, AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FText>                          ButtonLabels_Right;                                // 0x4A0(0x10)(Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FSlateFontInfo                        ButtonLabels_Font;                                 // 0x4B0(0x58)(Edit, ZeroConstructor, ContainsInstancedReference, Protected, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UASAUIWidget_Button_Style2A_C*> buttons;                                           // 0x508(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	double                                       ButtonWidth;                                       // 0x518(0x8)(None)
	FMulticastInlineDelegateProperty_            OnSelectionChangedIndex;                           // 0x520(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UASAUIWidget_HorizontalListSelector_Main_Style1_C* GetDefaultObj();

	void SetToIndex(int32 NewIndex, bool Valid, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_BooleanAND_ReturnValue, class UASAUIWidget_Button_Style2A_C* K2Node_Select_Default, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void SetEnabledStateOfButtonIndex(int32 Index, bool Enabled_, bool CallFunc_Array_IsValidIndex_ReturnValue, class UASAUIWidget_Button_Style2A_C* CallFunc_Array_Get_Item);
	void GetPreviousAvailableButtonIndex(int32 StartingIndex, int32 FirstButton, int32 FoundNextButton, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_GetLastAvailableButtonIndex_FirstButton, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetLastAvailableButtonIndex_FirstButton_1, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UASAUIWidget_Button_Style2A_C* CallFunc_Array_Get_Item, bool CallFunc_GetIsEnabled_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void GetNextAvailableButtonIndex(int32 StartingIndex, int32 FirstButton, int32 FoundNextButton, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Get_First_Available_Button_Index_FirstButton, int32 Temp_int_Variable, int32 CallFunc_Get_First_Available_Button_Index_FirstButton_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UASAUIWidget_Button_Style2A_C* CallFunc_Array_Get_Item, bool CallFunc_GetIsEnabled_ReturnValue);
	void GetLastAvailableButtonIndex(int32 FirstButton, int32 FoundFirstButton, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UASAUIWidget_Button_Style2A_C* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue);
	void Get_First_Available_Button_Index(int32 FirstButton, int32 FoundFirstButton, bool Temp_bool_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UASAUIWidget_Button_Style2A_C* CallFunc_Array_Get_Item, bool CallFunc_GetIsEnabled_ReturnValue);
	void FixConsoleIcons(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABasePlayerController* K2Node_DynamicCast_AsBase_Player_Controller, bool K2Node_DynamicCast_bSuccess, const TArray<class UWidget*>& K2Node_MakeArray_Array, class UWidget* CallFunc_Array_Get_Item, class UWidget* CallFunc_Array_Get_Item_1, class UImage* K2Node_DynamicCast_AsImage, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SwitchButton(bool Next, class UWidget* Widget, class UASAUIWidget_Button_Style2A_C* NewLocalVar, bool CallFunc_GetIsEnabled_ReturnValue, int32 CallFunc_GetPreviousAvailableButtonIndex_FirstButton, class UASAUIWidget_Button_Style2A_C* CallFunc_Array_Get_Item, int32 CallFunc_GetNextAvailableButtonIndex_FirstButton, class UASAUIWidget_Button_Style2A_C* CallFunc_Array_Get_Item_1);
	void Set_All_Buttons_Inactive(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UASAUIWidget_Button_Style2A_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void BndEvt__ASAUI_ListSessions_OfficialProxyButton_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUI_ListSessions_UnofficialProxyButton_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUI_ListSessions_FavoritesProxyButton_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button3_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button4_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button5_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button6_K2Node_ComponentBoundEvent_6_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button7_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button8_K2Node_ComponentBoundEvent_8_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button9_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature();
	void BndEvt__ASAUIWidget_HorizontalListSelector_Button10_K2Node_ComponentBoundEvent_10_OnButtonClicked__DelegateSignature();
	void UpdateWidget();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetToSpecificIndex(int32 Index);
	void ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Main_Style1(int32 EntryPoint, const TArray<class UPrimalUI*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, class UPrimalUserWidget* CallFunc_Array_Get_Item, class UPrimalUI* K2Node_DynamicCast_AsPrimal_UI, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_Event_IsDesignTime, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue_3, int32 Temp_int_Variable_1, bool CallFunc_NotEqual_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_NotEqual_IntInt_ReturnValue_5, bool CallFunc_NotEqual_IntInt_ReturnValue_6, bool CallFunc_NotEqual_IntInt_ReturnValue_7, bool CallFunc_NotEqual_IntInt_ReturnValue_8, bool CallFunc_NotEqual_IntInt_ReturnValue_9, bool CallFunc_NotEqual_IntInt_ReturnValue_10, const TArray<class UASAUIWidget_Button_Style2A_C*>& K2Node_MakeArray_Array, class UASAUIWidget_Button_Style2A_C* CallFunc_Array_Get_Item_1, int32 Temp_int_Variable_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_4, class UTexture2D* CallFunc_Array_Get_Item_2, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_2, double CallFunc_Multiply_DoubleFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, double CallFunc_Conv_IntToDouble_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 K2Node_ComponentBoundEvent_Index, bool CallFunc_SetToIndex_Valid, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast);
	void OnSelectionChangedIndex__DelegateSignature(int32 Index);
	void OnSelectionChanged_10__DelegateSignature();
	void OnSelectionChanged_9__DelegateSignature();
	void OnSelectionChanged_8__DelegateSignature();
	void OnSelectionChanged_7__DelegateSignature();
	void OnSelectionChanged_6__DelegateSignature();
	void OnSelectionChanged_5__DelegateSignature();
	void OnSelectionChanged_4__DelegateSignature();
	void OnSelectionChanged_3__DelegateSignature();
	void OnSelectionChanged_2__DelegateSignature();
	void OnSelectionChanged_1__DelegateSignature();
	void OnSelectionChanged_0__DelegateSignature();
};

}


