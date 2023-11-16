#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x478 - 0x3C0)
// WidgetBlueprintGeneratedClass DataListButtonVariable_Widget_ASA.DataListButtonVariable_Widget_ASA_C
class UDataListButtonVariable_Widget_ASA_C : public UDataListValueGeneric
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA;                         // 0x3C8(0x8)(Edit, ZeroConstructor)
	class UButton*                               MainButtonGeneric;                                 // 0x3D0(0x8)(Edit, ZeroConstructor)
	class UVerticalBox*                          SafeZone;                                          // 0x3D8(0x8)(Edit, ZeroConstructor)
	class FText                                  VariableText;                                      // 0x3E0(0x18)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            ReturnValue;                                       // 0x3F8(0x10)(ZeroConstructor, AutoWeak, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UClass*>                        WidgetOptionsToAdd;                                // 0x408(0x10)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FText>                          OptionsMinValues;                                  // 0x418(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FText>                          OptionsMaxValues;                                  // 0x428(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FText>                          OptionsExtraData;                                  // 0x438(0x10)(ContainsInstancedReference, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        OptionSelectedIndex;                               // 0x448(0x4)(None)
	bool                                         Support_Multiple_Options;                          // 0x44C(0x1)(None)
	uint8                                        Pad_22C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MultiplyValueToText;                               // 0x450(0x8)(None)
	bool                                         Test;                                              // 0x458(0x1)(None)
	uint8                                        Pad_22C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Maximum_Fractional_Digits;                         // 0x45C(0x4)(None)
	bool                                         CanEditTextVariable;                               // 0x460(0x1)(None)
	bool                                         ForceMinMaxEditChange;                             // 0x461(0x1)(None)
	bool                                         bTextUseGrouping;                                  // 0x462(0x1)(None)
	uint8                                        Pad_22C9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPrimalUserWidget*>             OptionsWidgets;                                    // 0x468(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UDataListButtonVariable_Widget_ASA_C* GetDefaultObj();

	void IsExpanded(bool ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void CloseSlider();
	void HasSlider(class USlider* ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class USlider_ASA_Widget_C* K2Node_DynamicCast_AsSlider_ASA_Widget, bool K2Node_DynamicCast_bSuccess);
	void HasExpandedSlider(class USlider* ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class USlider_ASA_Widget_C* K2Node_DynamicCast_AsSlider_ASA_Widget, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void HideValueLabel(bool HideValue);
	void GetIsSelectedBP(bool ReturnValue);
	void GetAllValueWidgets(const TArray<class UWidget*>& ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue);
	void SetupTextValueOverride(class FText Text, class FText ReturnText, const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetupNewValueWidget(const class FString& InString, int32 InputPin, bool PreventParentCall, class UUI_PCOptionsMenu* CallFunc_GetLivePCOptionsMenu_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Variable, class FText CallFunc_SetupTextValue_ReturnText, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_SetupTextValueOverride_ReturnText, float CallFunc_GetFloatValue_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void ExtraSetupToggledButton(bool Toggle, bool FromSelectOtherOption);
	void SetupTextValue(class FText Text, class FText ReturnText, const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast);
	void ExtraSetupWidget(class UPrimalUserWidget* UserWidget, int32 Index);
	void SetupOptionWidgets(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPrimalUserWidget* CallFunc_Array_Get_Item, bool CallFunc_HasAnyChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const TArray<class UPrimalUserWidget*>& CallFunc_GetWidgetsToAdd_UserWidgets);
	void GetWidgetsToAdd(const TArray<class UPrimalUserWidget*>& UserWidgets, const TArray<class UPrimalUserWidget*>& LocalWIdget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPrimalUserWidget* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPrimalUserWidget* K2Node_DynamicCast_AsPrimal_User_Widget, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue);
	void Setup_Values_Index(int32 Index, bool PreventCallParent, int32 CallFunc_Conv_BoolToInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UPrimalUserWidget* K2Node_DynamicCast_AsPrimal_User_Widget, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, double CallFunc_Conv_StringToDouble_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, double CallFunc_Conv_StringToDouble_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, float K2Node_MakeStruct_FloatParam3_ImplicitCast, float K2Node_MakeStruct_FloatParam2_ImplicitCast, float K2Node_MakeStruct_FloatParam1_ImplicitCast);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__DataListButtonVariable_Widget_ASA_DataListButton_Widget_ASA_K2Node_ComponentBoundEvent_2_ToggledState__DelegateSignature(bool Set, bool FromSelectOtherOption);
	void BPExecutedCommandForPrimalUI(class FName CommandName, const struct FBPNetExecParams& ExecParams);
	void BndEvt__DataListButtonVariable_Widget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetParameterValue(const class FString& Value, bool bPreventCallParent);
	void OnOverridedParameterValue(const class FString& Value, bool bPreventCallParent);
	void SetIsSelectedBP(bool Selected);
	void UpdateColorPicker(const struct FVector2D& ColorPickerSliderValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_DataListButtonVariable_Widget_ASA(int32 EntryPoint, bool K2Node_ComponentBoundEvent_Set, bool K2Node_ComponentBoundEvent_FromSelectOtherOption, int32 CallFunc_Array_Length_ReturnValue, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, double CallFunc_Conv_StringToDouble_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, class UPrimalUserWidget* K2Node_DynamicCast_AsPrimal_User_Widget, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_SwitchName_CmpSuccess, int32 CallFunc_GetChildIndex_ReturnValue, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, const class FString& K2Node_Event_Value_1, bool K2Node_Event_bPreventCallParent_1, const class FString& K2Node_Event_Value, bool K2Node_Event_bPreventCallParent, class FText CallFunc_SetupTextValueOverride_ReturnText, const TArray<class UDataListButtonVariable_Widget_ASA_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 CallFunc_Array_Length_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool K2Node_Event_Selected, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, double CallFunc_Conv_StringToDouble_ReturnValue_1, double CallFunc_Conv_StringToDouble_ReturnValue_2, double CallFunc_Divide_DoubleFloat_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, int32 Temp_int_Array_Index_Variable, double CallFunc_Conv_StringToDouble_ReturnValue_3, class UPrimalUserWidget* CallFunc_Array_Get_Item, double CallFunc_FClamp_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector2D& K2Node_Event_ColorPickerSliderValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UOverallFatMusclePicker_C* K2Node_DynamicCast_AsOverall_Fat_Muscle_Picker, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_GetOuterObject_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue_1, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams_1, class UPrimalUserWidget* K2Node_DynamicCast_AsPrimal_User_Widget_1, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Array_Index_Variable_1, class UDataListButtonVariable_Widget_ASA_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast, float CallFunc_Divide_DoubleFloat_B_ImplicitCast);
	void ReturnValue__DelegateSignature(class FText ReturnValue, int32 Index);
};

}


