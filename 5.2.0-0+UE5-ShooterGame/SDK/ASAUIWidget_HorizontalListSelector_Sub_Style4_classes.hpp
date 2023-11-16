#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x200 (0x530 - 0x330)
// WidgetBlueprintGeneratedClass ASAUIWidget_HorizontalListSelector_Sub_Style4.ASAUIWidget_HorizontalListSelector_Sub_Style4_C
class UASAUIWidget_HorizontalListSelector_Sub_Style4_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(SimpleDisplay, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class UASAUIWidget_Button_Style4_C*          Button0;                                           // 0x338(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style4_C*          Button1;                                           // 0x340(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style4_C*          Button10;                                          // 0x348(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style4_C*          Button2;                                           // 0x350(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style4_C*          Button3;                                           // 0x358(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style4_C*          Button4;                                           // 0x360(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style4_C*          Button5;                                           // 0x368(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style4_C*          Button6;                                           // 0x370(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style4_C*          Button7;                                           // 0x378(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style4_C*          Button8;                                           // 0x380(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_Button_Style4_C*          Button9;                                           // 0x388(0x8)(Edit, ZeroConstructor)
	class UHorizontalBox*                        HorizBox;                                          // 0x390(0x8)(Edit, ZeroConstructor)
	class UImage*                                NavLeft;                                           // 0x398(0x8)(Edit, ZeroConstructor)
	class UImage*                                NavRight;                                          // 0x3A0(0x8)(Edit, ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_0;                              // 0x3A8(0x10)(Edit, ZeroConstructor, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        NumButtons;                                        // 0x3B8(0x4)(None)
	int32                                        CurrSelection;                                     // 0x3BC(0x4)(None)
	int32                                        LastSelection;                                     // 0x3C0(0x4)(None)
	uint8                                        Pad_3E8C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelectionChanged_1;                              // 0x3C8(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_2;                              // 0x3D8(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_3;                              // 0x3E8(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_4;                              // 0x3F8(0x10)(Edit, ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_5;                              // 0x408(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_6;                              // 0x418(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_7;                              // 0x428(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_8;                              // 0x438(0x10)(Edit, ZeroConstructor, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_9;                              // 0x448(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSelectionChanged_10;                             // 0x458(0x10)(ZeroConstructor, AutoWeak, AssetRegistrySearchable, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FText>                          ButtonLabels_Left;                                 // 0x468(0x10)(SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTexture*>                      ButtonLabels_Icon;                                 // 0x478(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FVector2D>                     ButtonLabels_Icon_Size;                            // 0x488(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FText>                          ButtonLabels_Right;                                // 0x498(0x10)(AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FSlateFontInfo                        ButtonLabels_Font;                                 // 0x4A8(0x58)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UASAUIWidget_Button_Style4_C*>  buttons;                                           // 0x500(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<double>                               CalculatedWidths;                                  // 0x510(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSelectionIndexChanged;                           // 0x520(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* GetDefaultObj();

	void SetEnabledStateOfButtonIndex(int32 Index, bool Enabled_, bool CallFunc_Array_IsValidIndex_ReturnValue, class UASAUIWidget_Button_Style4_C* CallFunc_Array_Get_Item);
	void GetPreviousAvailableButtonIndex(int32 StartingIndex, int32 FirstButton, int32 FoundNextButton, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_GetLastAvailableButtonIndex_FirstButton, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetLastAvailableButtonIndex_FirstButton_1, class UASAUIWidget_Button_Style4_C* CallFunc_Array_Get_Item, bool CallFunc_GetIsEnabled_ReturnValue);
	void GetNextAvailableButtonIndex(int32 StartingIndex, int32 FirstButton, int32 FoundNextButton, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Get_First_Available_Button_Index_FirstButton, int32 Temp_int_Variable, int32 CallFunc_Get_First_Available_Button_Index_FirstButton_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UASAUIWidget_Button_Style4_C* CallFunc_Array_Get_Item, bool CallFunc_GetIsEnabled_ReturnValue);
	void GetLastAvailableButtonIndex(int32 FirstButton, int32 FoundFirstButton, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UASAUIWidget_Button_Style4_C* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue);
	void Get_First_Available_Button_Index(int32 FirstButton, int32 FoundFirstButton, bool Temp_bool_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UASAUIWidget_Button_Style4_C* CallFunc_Array_Get_Item, bool CallFunc_GetIsEnabled_ReturnValue);
	void Fix_Console_Icons(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABasePlayerController* K2Node_DynamicCast_AsBase_Player_Controller, bool K2Node_DynamicCast_bSuccess, const TArray<class UWidget*>& K2Node_MakeArray_Array, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const TArray<class UWidget*>& K2Node_MakeArray_Array_1, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UImage* K2Node_DynamicCast_AsImage, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SwitchButton(bool Next, class UWidget* Widget, class UASAUIWidget_Button_Style4_C* NewLocalVar, int32 CallFunc_GetPreviousAvailableButtonIndex_FirstButton, class UASAUIWidget_Button_Style4_C* CallFunc_Array_Get_Item, int32 CallFunc_GetNextAvailableButtonIndex_FirstButton, class UASAUIWidget_Button_Style4_C* CallFunc_Array_Get_Item_1);
	void SetButtonsInactive(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UASAUIWidget_Button_Style4_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
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
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_ASAUIWidget_HorizontalListSelector_Sub_Style4(int32 EntryPoint, const TArray<class UPrimalUI*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, class UPrimalUserWidget* CallFunc_Array_Get_Item, class UPrimalUI* K2Node_DynamicCast_AsPrimal_UI, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_Event_IsDesignTime, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_NotEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_3, bool CallFunc_NotEqual_IntInt_ReturnValue_4, bool CallFunc_NotEqual_IntInt_ReturnValue_5, bool CallFunc_NotEqual_IntInt_ReturnValue_6, bool CallFunc_NotEqual_IntInt_ReturnValue_7, bool CallFunc_NotEqual_IntInt_ReturnValue_8, bool CallFunc_NotEqual_IntInt_ReturnValue_9, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_NotEqual_IntInt_ReturnValue_10, int32 CallFunc_Add_IntInt_ReturnValue_4, class UASAUIWidget_Button_Style4_C* CallFunc_Array_Get_Item_1, class UTexture* CallFunc_Array_Get_Item_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_1, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue_1, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, int32 Temp_int_Variable_2, class UWidget* CallFunc_GetChildAt_ReturnValue_2, double CallFunc_Add_DoubleFloat_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_5, const TArray<class UASAUIWidget_Button_Style4_C*>& K2Node_MakeArray_Array, float CallFunc_Add_DoubleFloat_B_ImplicitCast);
	void OnSelectionIndexChanged__DelegateSignature(int32 Index);
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


