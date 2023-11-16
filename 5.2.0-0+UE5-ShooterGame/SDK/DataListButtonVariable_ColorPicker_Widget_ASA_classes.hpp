#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x4A8 - 0x478)
// WidgetBlueprintGeneratedClass DataListButtonVariable_ColorPicker_Widget_ASA.DataListButtonVariable_ColorPicker_Widget_ASA_C
class UDataListButtonVariable_ColorPicker_Widget_ASA_C : public UDataListButtonVariable_Widget_ASA_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            ChangedColor;                                      // 0x480(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         bHideColor;                                        // 0x490(0x1)(None)
	uint8                                        Pad_472A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            SelectedOption;                                    // 0x498(0x10)(Edit, ZeroConstructor, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDataListButtonVariable_ColorPicker_Widget_ASA_C* GetDefaultObj();

	void ExtraSetupToggledButton(bool Toggle, bool FromSelectOtherOption, class UWidget* CallFunc_GetChildAt_ReturnValue, class UColorPicker_ASA_Widget_C* K2Node_DynamicCast_AsColor_Picker_ASA_Widget, bool K2Node_DynamicCast_bSuccess);
	void SetupTextValue(class FText Text, class FText ReturnText);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BPExecutedCommandForPrimalUI(class FName CommandName, const struct FBPNetExecParams& ExecParams);
	void UpdateColorPicker(const struct FVector2D& ColorPickerSliderValue);
	void ExecuteUbergraph_DataListButtonVariable_ColorPicker_Widget_ASA(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool K2Node_SwitchName_CmpSuccess, const struct FVector2D& K2Node_Event_ColorPickerSliderValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UColorPicker_ASA_Widget_C* K2Node_DynamicCast_AsColor_Picker_ASA_Widget, bool K2Node_DynamicCast_bSuccess, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const TArray<class UUI_PCOptionsMenu*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_PCOptionsMenu* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast);
	void SelectedOption__DelegateSignature(bool Toggle);
	void ChangedColor__DelegateSignature(const struct FLinearColor& Color);
};

}


