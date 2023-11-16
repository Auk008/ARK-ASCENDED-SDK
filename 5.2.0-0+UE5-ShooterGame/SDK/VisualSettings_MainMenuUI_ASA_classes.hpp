#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB4 (0x874 - 0x7C0)
// WidgetBlueprintGeneratedClass VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C
class UVisualSettings_MainMenuUI_ASA_C : public UVisualSettingsUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C0(0x8)(BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      Close;                                             // 0x7C8(0x8)(Edit, ZeroConstructor)
	class UWidgetAnimation*                      Open;                                              // 0x7D0(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   ApplyButton;                                       // 0x7D8(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   CancelButton;                                      // 0x7E0(0x8)(Edit, ZeroConstructor)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA;                         // 0x7E8(0x8)(Edit, ZeroConstructor)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA_1;                       // 0x7F0(0x8)(Edit, ZeroConstructor)
	class UDataListButton_Widget_ASA_C*          DataListButton_Widget_ASA_88;                      // 0x7F8(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Bool_Widget_ASA_C* EnableHDRCheckBox;                                 // 0x800(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  GammaCorrectionSlider;                             // 0x808(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  HDRMaximumLuminence;                               // 0x810(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  HDRMidLuminence;                                   // 0x818(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  HDRMinimumLuminence;                               // 0x820(0x8)(Edit, ZeroConstructor)
	class UDataListButtonVariable_Widget_ASA_C*  HDRValueSlider;                                    // 0x828(0x8)(Edit, ZeroConstructor)
	class UComboBoxString*                       OcioColorPresetComboBox;                           // 0x830(0x8)(Edit, ZeroConstructor)
	class UComboBoxString*                       OcioColorViewComboBox;                             // 0x838(0x8)(Edit, ZeroConstructor)
	class UComboBoxString*                       OcioDisplayViewComboBox;                           // 0x840(0x8)(Edit, ZeroConstructor)
	class UCustomButtonWidget*                   RestoreButton;                                     // 0x848(0x8)(Edit, ZeroConstructor)
	float                                        MinNitsHDR;                                        // 0x850(0x4)(None)
	float                                        MaxNitsHDR;                                        // 0x854(0x4)(None)
	FMulticastInlineDelegateProperty_            ClosedEvent;                                       // 0x858(0x10)(ZeroConstructor)
	float                                        DefaultMinHDR;                                     // 0x868(0x4)(None)
	float                                        DefaultMidHDR;                                     // 0x86C(0x4)(None)
	float                                        DefaultMaxHDR;                                     // 0x870(0x4)(None)

	static class UClass* StaticClass();
	static class UVisualSettings_MainMenuUI_ASA_C* GetDefaultObj();

	void SetupGettHdrValue(float Value, double MinValue, double MaxValue, double RealValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_Alpha_ImplicitCast);
	void SetupSetHdrValue(class UDataListValueGeneric* Self2, float Value, double MinValue, double MaxValue, double CallFunc_Subtract_DoubleFloat_ReturnValue, double CallFunc_Subtract_DoubleFloat_ReturnValue_1, double CallFunc_Divide_DoubleFloat_ReturnValue, double CallFunc_Subtract_DoubleFloat_A_ImplicitCast, float CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float CallFunc_SetFloatValue_Value_ImplicitCast);
	void Get_HDRMidLuminence_bIsEnabled(bool ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_GetBoolValue_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateHDR(float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Lerp_ReturnValue, bool CallFunc_GetBoolValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast);
	void BndEvt__VisualSettings_MainMenuUI_ASA_CustomPreset_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature(class FText ReturnValue, int32 Index);
	void BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature(class FText ReturnValue, int32 Index);
	void AddedToViewport();
	void RemovedFromViewport();
	void BndEvt__VisualSettings_MainMenuUI_ASA_RestoreButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__VisualSettings_MainMenuUI_ASA_ApplyButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature(class FText ReturnValue, int32 Index);
	void BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature(class FText ReturnValue, int32 Index);
	void BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature(class FText ReturnValue, int32 Index);
	void RefreshHDRValues();
	void ExecuteUbergraph_VisualSettings_MainMenuUI_ASA(int32 EntryPoint, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class FText K2Node_ComponentBoundEvent_ReturnValue_3, int32 K2Node_ComponentBoundEvent_Index_3, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_1, class FText K2Node_ComponentBoundEvent_ReturnValue_4, int32 K2Node_ComponentBoundEvent_Index_4, int32 CallFunc_GetCurrentHDRDisplayNits_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleFloat_ReturnValue, class UWorld* CallFunc_GetGameWorld_ReturnValue, class AShooterPlayerController* CallFunc_GetPC_ReturnValue, bool CallFunc_TriggerLevelCustomEvents_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWorld* CallFunc_GetGameWorld_ReturnValue_1, bool CallFunc_TriggerLevelCustomEvents_ReturnValue_1, class AShooterPlayerController* CallFunc_GetPC_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_2, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_3, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_4, float CallFunc_GetFloatValue_ReturnValue_2, class FText K2Node_ComponentBoundEvent_ReturnValue_2, int32 K2Node_ComponentBoundEvent_Index_2, class FText K2Node_ComponentBoundEvent_ReturnValue_1, int32 K2Node_ComponentBoundEvent_Index_1, class FText K2Node_ComponentBoundEvent_ReturnValue, int32 K2Node_ComponentBoundEvent_Index, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_5, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_6, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_7, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_8, double CallFunc_SetupGettHdrValue_RealValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_9, double CallFunc_SetupGettHdrValue_RealValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_10, double CallFunc_SetupGettHdrValue_RealValue_2, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_11, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_12, float CallFunc_GetFloatValue_ReturnValue_3, float CallFunc_GetFloatValue_ReturnValue_4, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_13, float CallFunc_GetFloatValue_ReturnValue_5, double CallFunc_SetupGettHdrValue_RealValue_3, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_14, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_15, double CallFunc_SetupGettHdrValue_RealValue_4, double CallFunc_SetupGettHdrValue_RealValue_5, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast, float CallFunc_SetFloatValue_Value_ImplicitCast, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_1, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_1, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_2, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_2, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_1, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_1, float K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_2, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_2, float K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_3, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_3, float K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_3, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_3, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_4, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_4, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_5, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_5, float K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast_1, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_4, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_4, float K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast_1, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_5, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_5, float K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast_1);
	void ClosedEvent__DelegateSignature();
};

}


