#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x420 - 0x330)
// WidgetBlueprintGeneratedClass UI_Prompt_Report.UI_Prompt_Report_C
class UUI_Prompt_Report_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                               Button_Cancel;                                     // 0x338(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_Exit;                                       // 0x340(0x8)(Edit, ZeroConstructor)
	class UButton*                               Button_Submit;                                     // 0x348(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_Background;                                    // 0x350(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_VerifyControllerControl;                       // 0x358(0x8)(Edit, ZeroConstructor)
	class UImage*                                IMG_X;                                             // 0x360(0x8)(Edit, ZeroConstructor)
	class UMultiLineEditableTextBox*             TEXT_DescriptionAdv;                               // 0x368(0x8)(Edit, ZeroConstructor)
	class UUI_CustomComboBox_C*                  UI_SortBySelect;                                   // 0x370(0x8)(Edit, ZeroConstructor)
	bool                                         HasDescription;                                    // 0x378(0x1)(None)
	uint8                                        Pad_4B0C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LastReasonChoose;                                  // 0x380(0x10)(AutoWeak, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentCharactersInLine;                           // 0x390(0x4)(None)
	int32                                        MaxCharactersInLine;                               // 0x394(0x4)(None)
	int32                                        MaxLines;                                          // 0x398(0x4)(None)
	uint8                                        Pad_4B0D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                _numOfCharactersInLines;                           // 0x3A0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CurrentText;                                       // 0x3B0(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsReachingTextLimit;                               // 0x3C8(0x1)(None)
	uint8                                        Pad_4B0F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_GameSlot_C*                        GameSlotRef;                                       // 0x3D0(0x8)(ZeroConstructor)
	TArray<struct FReportingReason>              Reasons;                                           // 0x3D8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FReportingReason                      ReportReason;                                      // 0x3E8(0x38)(None)

	static class UClass* StaticClass();
	static class UUI_Prompt_Report_C* GetDefaultObj();

	void CheckIfDropLine(class FText Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Len_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Less_IntInt_ReturnValue_2, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Len_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Get_Item, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3);
	void AddReasonOptions(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSTRUCT_CustomComboBoxOption& K2Node_MakeStruct_STRUCT_CustomComboBoxOption, const struct FReportingReason& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FSTRUCT_CustomComboBoxOption& K2Node_MakeStruct_STRUCT_CustomComboBoxOption_1);
	void OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void BndEvt__Report_UI_Cancel_B_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__ReadMore_UI_Button_Exit_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ReadMore_UI_Button_Exit_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ReadMore_UI_Button_Exit_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Report_UI_Button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Report_UI_Cancel_B_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Report_UI_Cancel_B_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Report_UI_Cancel_B_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Report_UI_Cancel_B_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Report_UI_MultiLineTextBox_Description_K2Node_ComponentBoundEvent_14_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(class FText Text);
	void BndEvt__Report_UI_Submit_B_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Report_UI_SortBySelect_K2Node_ComponentBoundEvent_1_OnOptionSelected__DelegateSignature(const class FString& Option);
	void Event_On_Successfully_Reported();
	void Event_On_Failed_Reporting(const struct FCFCoreError& Error);
	void Event_On_Failed_Get_Report_Reasons(const struct FCFCoreError& Error);
	void Event_On_Get_Reporting_Reasons(const TArray<struct FReportingReason>& Reasons);
	void ExecuteUbergraph_UI_Prompt_Report(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_NotEqual_StriStri_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& K2Node_ComponentBoundEvent_Option, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FCFCoreError& K2Node_CustomEvent_error_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, const struct FCFCoreError& K2Node_CustomEvent_error, const TArray<struct FReportingReason>& K2Node_CustomEvent_reasons, const struct FReportingReason& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool CallFunc_NotEqual_StriStri_ReturnValue_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue);
};

}


