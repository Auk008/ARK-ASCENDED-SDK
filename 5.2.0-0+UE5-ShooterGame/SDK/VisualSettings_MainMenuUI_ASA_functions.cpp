#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C
// (None)

class UClass* UVisualSettings_MainMenuUI_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VisualSettings_MainMenuUI_ASA_C");

	return Clss;
}


// VisualSettings_MainMenuUI_ASA_C VisualSettings_MainMenuUI_ASA.Default__VisualSettings_MainMenuUI_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVisualSettings_MainMenuUI_ASA_C* UVisualSettings_MainMenuUI_ASA_C::GetDefaultObj()
{
	static class UVisualSettings_MainMenuUI_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVisualSettings_MainMenuUI_ASA_C*>(UVisualSettings_MainMenuUI_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.SetupGettHdrValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (None)
// double                             MinValue                                                         (None)
// double                             MaxValue                                                         (None)
// double                             RealValue                                                        (None)
// double                             CallFunc_Lerp_ReturnValue                                        (None)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (None)

void UVisualSettings_MainMenuUI_ASA_C::SetupGettHdrValue(float Value, double MinValue, double MaxValue, double RealValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "SetupGettHdrValue");

	Params::UVisualSettings_MainMenuUI_ASA_C_SetupGettHdrValue_Params Parms{};

	Parms.Value = Value;
	Parms.MinValue = MinValue;
	Parms.MaxValue = MaxValue;
	Parms.RealValue = RealValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.SetupSetHdrValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataListValueGeneric*       Self2                                                            (None)
// float                              Value                                                            (None)
// double                             MinValue                                                         (None)
// double                             MaxValue                                                         (None)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (None)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (None)
// double                             CallFunc_Subtract_DoubleFloat_A_ImplicitCast                     (None)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (None)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1                   (None)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (None)
// float                              CallFunc_SetFloatValue_Value_ImplicitCast                        (None)

void UVisualSettings_MainMenuUI_ASA_C::SetupSetHdrValue(class UDataListValueGeneric* Self2, float Value, double MinValue, double MaxValue, double CallFunc_Subtract_DoubleFloat_ReturnValue, double CallFunc_Subtract_DoubleFloat_ReturnValue_1, double CallFunc_Divide_DoubleFloat_ReturnValue, double CallFunc_Subtract_DoubleFloat_A_ImplicitCast, float CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float CallFunc_SetFloatValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "SetupSetHdrValue");

	Params::UVisualSettings_MainMenuUI_ASA_C_SetupSetHdrValue_Params Parms{};

	Parms.Self2 = Self2;
	Parms.Value = Value;
	Parms.MinValue = MinValue;
	Parms.MaxValue = MaxValue;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue = CallFunc_Subtract_DoubleFloat_ReturnValue;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1 = CallFunc_Subtract_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue = CallFunc_Divide_DoubleFloat_ReturnValue;
	Parms.CallFunc_Subtract_DoubleFloat_A_ImplicitCast = CallFunc_Subtract_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast = CallFunc_Subtract_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1 = CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_SetFloatValue_Value_ImplicitCast = CallFunc_SetFloatValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.Get_HDRMidLuminence_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (None)
// bool                               CallFunc_GetBoolValue_ReturnValue                                (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)

void UVisualSettings_MainMenuUI_ASA_C::Get_HDRMidLuminence_bIsEnabled(bool ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_GetBoolValue_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "Get_HDRMidLuminence_bIsEnabled");

	Params::UVisualSettings_MainMenuUI_ASA_C_Get_HDRMidLuminence_bIsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_GetBoolValue_ReturnValue = CallFunc_GetBoolValue_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.UpdateHDR
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetFloatValue_ReturnValue                               (None)
// double                             CallFunc_Lerp_ReturnValue                                        (None)
// bool                               CallFunc_GetBoolValue_ReturnValue                                (None)
// int32                              CallFunc_FTrunc_ReturnValue                                      (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (None)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (None)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (None)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (None)

void UVisualSettings_MainMenuUI_ASA_C::UpdateHDR(float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Lerp_ReturnValue, bool CallFunc_GetBoolValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "UpdateHDR");

	Params::UVisualSettings_MainMenuUI_ASA_C_UpdateHDR_Params Parms{};

	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetBoolValue_ReturnValue = CallFunc_GetBoolValue_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.CallFunc_Lerp_A_ImplicitCast = CallFunc_Lerp_A_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast = CallFunc_Lerp_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_CustomPreset_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_CustomPreset_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_CustomPreset_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (None)
// int32                              Index                                                            (None)

void UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature(class FText ReturnValue, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature");

	Params::UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (None)
// int32                              Index                                                            (None)

void UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature(class FText ReturnValue, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature");

	Params::UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.AddedToViewport
// (Event, Public, BlueprintEvent)
// Parameters:

void UVisualSettings_MainMenuUI_ASA_C::AddedToViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "AddedToViewport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.RemovedFromViewport
// (Event, Public, BlueprintEvent)
// Parameters:

void UVisualSettings_MainMenuUI_ASA_C::RemovedFromViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "RemovedFromViewport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_RestoreButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_RestoreButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_RestoreButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_ApplyButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_ApplyButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_ApplyButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (None)
// int32                              Index                                                            (None)

void UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature(class FText ReturnValue, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature");

	Params::UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (None)
// int32                              Index                                                            (None)

void UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature(class FText ReturnValue, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature");

	Params::UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (None)
// int32                              Index                                                            (None)

void UVisualSettings_MainMenuUI_ASA_C::BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature(class FText ReturnValue, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature");

	Params::UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.RefreshHDRValues
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UVisualSettings_MainMenuUI_ASA_C::RefreshHDRValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "RefreshHDRValues");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.ExecuteUbergraph_VisualSettings_MainMenuUI_ASA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, ZeroConstructor)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_3                         (ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// int32                              K2Node_ComponentBoundEvent_Index_3                               (None)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_1                (Edit, ZeroConstructor)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_4                         (AssetRegistrySearchable, SimpleDisplay, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// int32                              K2Node_ComponentBoundEvent_Index_4                               (None)
// int32                              CallFunc_GetCurrentHDRDisplayNits_ReturnValue                    (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (None)
// class UWorld*                      CallFunc_GetGameWorld_ReturnValue                                (Edit, ZeroConstructor)
// class AShooterPlayerController*    CallFunc_GetPC_ReturnValue                                       (Edit, ZeroConstructor)
// bool                               CallFunc_TriggerLevelCustomEvents_ReturnValue                    (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UWorld*                      CallFunc_GetGameWorld_ReturnValue_1                              (Edit, ZeroConstructor)
// bool                               CallFunc_TriggerLevelCustomEvents_ReturnValue_1                  (None)
// class AShooterPlayerController*    CallFunc_GetPC_ReturnValue_1                                     (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_2                (Edit, ZeroConstructor)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_3                (Edit, ZeroConstructor)
// float                              CallFunc_GetFloatValue_ReturnValue                               (None)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (None)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_4                (Edit, ZeroConstructor)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (None)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_2                         (AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// int32                              K2Node_ComponentBoundEvent_Index_2                               (None)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_1                         (SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (None)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue                           (None)
// int32                              K2Node_ComponentBoundEvent_Index                                 (None)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_5                (Edit, ZeroConstructor)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_6                (Edit, ZeroConstructor)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_7                (Edit, ZeroConstructor)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_8                (Edit, ZeroConstructor)
// double                             CallFunc_SetupGettHdrValue_RealValue                             (None)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_9                (Edit, ZeroConstructor)
// double                             CallFunc_SetupGettHdrValue_RealValue_1                           (None)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_10               (Edit, ZeroConstructor)
// double                             CallFunc_SetupGettHdrValue_RealValue_2                           (None)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_11               (Edit, ZeroConstructor)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_12               (Edit, ZeroConstructor)
// float                              CallFunc_GetFloatValue_ReturnValue_3                             (None)
// float                              CallFunc_GetFloatValue_ReturnValue_4                             (None)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_13               (Edit, ZeroConstructor)
// float                              CallFunc_GetFloatValue_ReturnValue_5                             (None)
// double                             CallFunc_SetupGettHdrValue_RealValue_3                           (None)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_14               (Edit, ZeroConstructor)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_15               (None)
// double                             CallFunc_SetupGettHdrValue_RealValue_4                           (None)
// double                             CallFunc_SetupGettHdrValue_RealValue_5                           (None)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast                 (None)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast                 (None)
// float                              CallFunc_SetFloatValue_Value_ImplicitCast                        (None)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast                  (None)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast                  (None)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_1                (None)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_1                (None)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_2                (None)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_2                (None)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_1               (None)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_1               (None)
// float                              K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast           (None)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_2               (None)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_2               (None)
// float                              K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast           (None)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_3               (None)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_3               (None)
// float                              K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast           (None)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_3                (None)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_3                (None)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_4                (None)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_4                (None)
// double                             CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_5                (None)
// double                             CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_5                (None)
// float                              K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast_1         (None)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_4               (None)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_4               (None)
// float                              K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast_1         (None)
// double                             CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_5               (None)
// double                             CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_5               (None)
// float                              K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast_1         (None)

void UVisualSettings_MainMenuUI_ASA_C::ExecuteUbergraph_VisualSettings_MainMenuUI_ASA(int32 EntryPoint, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class FText K2Node_ComponentBoundEvent_ReturnValue_3, int32 K2Node_ComponentBoundEvent_Index_3, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_1, class FText K2Node_ComponentBoundEvent_ReturnValue_4, int32 K2Node_ComponentBoundEvent_Index_4, int32 CallFunc_GetCurrentHDRDisplayNits_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleFloat_ReturnValue, class UWorld* CallFunc_GetGameWorld_ReturnValue, class AShooterPlayerController* CallFunc_GetPC_ReturnValue, bool CallFunc_TriggerLevelCustomEvents_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWorld* CallFunc_GetGameWorld_ReturnValue_1, bool CallFunc_TriggerLevelCustomEvents_ReturnValue_1, class AShooterPlayerController* CallFunc_GetPC_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_2, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_3, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_4, float CallFunc_GetFloatValue_ReturnValue_2, class FText K2Node_ComponentBoundEvent_ReturnValue_2, int32 K2Node_ComponentBoundEvent_Index_2, class FText K2Node_ComponentBoundEvent_ReturnValue_1, int32 K2Node_ComponentBoundEvent_Index_1, class FText K2Node_ComponentBoundEvent_ReturnValue, int32 K2Node_ComponentBoundEvent_Index, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_5, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_6, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_7, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_8, double CallFunc_SetupGettHdrValue_RealValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_9, double CallFunc_SetupGettHdrValue_RealValue_1, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_10, double CallFunc_SetupGettHdrValue_RealValue_2, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_11, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_12, float CallFunc_GetFloatValue_ReturnValue_3, float CallFunc_GetFloatValue_ReturnValue_4, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_13, float CallFunc_GetFloatValue_ReturnValue_5, double CallFunc_SetupGettHdrValue_RealValue_3, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_14, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_15, double CallFunc_SetupGettHdrValue_RealValue_4, double CallFunc_SetupGettHdrValue_RealValue_5, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast, float CallFunc_SetFloatValue_Value_ImplicitCast, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_1, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_1, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_2, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_2, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_1, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_1, float K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_2, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_2, float K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_3, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_3, float K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_3, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_3, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_4, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_4, double CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_5, double CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_5, float K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast_1, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_4, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_4, float K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast_1, double CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_5, double CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_5, float K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "ExecuteUbergraph_VisualSettings_MainMenuUI_ASA");

	Params::UVisualSettings_MainMenuUI_ASA_C_ExecuteUbergraph_VisualSettings_MainMenuUI_ASA_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ReturnValue_3 = K2Node_ComponentBoundEvent_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_Index_3 = K2Node_ComponentBoundEvent_Index_3;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_1 = CallFunc_GetShooterGameUserSettings_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_ReturnValue_4 = K2Node_ComponentBoundEvent_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_Index_4 = K2Node_ComponentBoundEvent_Index_4;
	Parms.CallFunc_GetCurrentHDRDisplayNits_ReturnValue = CallFunc_GetCurrentHDRDisplayNits_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue = CallFunc_Divide_DoubleFloat_ReturnValue;
	Parms.CallFunc_GetGameWorld_ReturnValue = CallFunc_GetGameWorld_ReturnValue;
	Parms.CallFunc_GetPC_ReturnValue = CallFunc_GetPC_ReturnValue;
	Parms.CallFunc_TriggerLevelCustomEvents_ReturnValue = CallFunc_TriggerLevelCustomEvents_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameWorld_ReturnValue_1 = CallFunc_GetGameWorld_ReturnValue_1;
	Parms.CallFunc_TriggerLevelCustomEvents_ReturnValue_1 = CallFunc_TriggerLevelCustomEvents_ReturnValue_1;
	Parms.CallFunc_GetPC_ReturnValue_1 = CallFunc_GetPC_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_2 = CallFunc_GetShooterGameUserSettings_ReturnValue_2;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_3 = CallFunc_GetShooterGameUserSettings_ReturnValue_3;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_4 = CallFunc_GetShooterGameUserSettings_ReturnValue_4;
	Parms.CallFunc_GetFloatValue_ReturnValue_2 = CallFunc_GetFloatValue_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_ReturnValue_2 = K2Node_ComponentBoundEvent_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_Index_2 = K2Node_ComponentBoundEvent_Index_2;
	Parms.K2Node_ComponentBoundEvent_ReturnValue_1 = K2Node_ComponentBoundEvent_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.K2Node_ComponentBoundEvent_ReturnValue = K2Node_ComponentBoundEvent_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_5 = CallFunc_GetShooterGameUserSettings_ReturnValue_5;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_6 = CallFunc_GetShooterGameUserSettings_ReturnValue_6;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_7 = CallFunc_GetShooterGameUserSettings_ReturnValue_7;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_8 = CallFunc_GetShooterGameUserSettings_ReturnValue_8;
	Parms.CallFunc_SetupGettHdrValue_RealValue = CallFunc_SetupGettHdrValue_RealValue;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_9 = CallFunc_GetShooterGameUserSettings_ReturnValue_9;
	Parms.CallFunc_SetupGettHdrValue_RealValue_1 = CallFunc_SetupGettHdrValue_RealValue_1;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_10 = CallFunc_GetShooterGameUserSettings_ReturnValue_10;
	Parms.CallFunc_SetupGettHdrValue_RealValue_2 = CallFunc_SetupGettHdrValue_RealValue_2;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_11 = CallFunc_GetShooterGameUserSettings_ReturnValue_11;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_12 = CallFunc_GetShooterGameUserSettings_ReturnValue_12;
	Parms.CallFunc_GetFloatValue_ReturnValue_3 = CallFunc_GetFloatValue_ReturnValue_3;
	Parms.CallFunc_GetFloatValue_ReturnValue_4 = CallFunc_GetFloatValue_ReturnValue_4;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_13 = CallFunc_GetShooterGameUserSettings_ReturnValue_13;
	Parms.CallFunc_GetFloatValue_ReturnValue_5 = CallFunc_GetFloatValue_ReturnValue_5;
	Parms.CallFunc_SetupGettHdrValue_RealValue_3 = CallFunc_SetupGettHdrValue_RealValue_3;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_14 = CallFunc_GetShooterGameUserSettings_ReturnValue_14;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_15 = CallFunc_GetShooterGameUserSettings_ReturnValue_15;
	Parms.CallFunc_SetupGettHdrValue_RealValue_4 = CallFunc_SetupGettHdrValue_RealValue_4;
	Parms.CallFunc_SetupGettHdrValue_RealValue_5 = CallFunc_SetupGettHdrValue_RealValue_5;
	Parms.CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast = CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast;
	Parms.CallFunc_SetupGettHdrValue_MinValue_ImplicitCast = CallFunc_SetupGettHdrValue_MinValue_ImplicitCast;
	Parms.CallFunc_SetFloatValue_Value_ImplicitCast = CallFunc_SetFloatValue_Value_ImplicitCast;
	Parms.CallFunc_SetupSetHdrValue_MinValue_ImplicitCast = CallFunc_SetupSetHdrValue_MinValue_ImplicitCast;
	Parms.CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast = CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast;
	Parms.CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_1 = CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_1;
	Parms.CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_1 = CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_1;
	Parms.CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_2 = CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_2;
	Parms.CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_2 = CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_2;
	Parms.CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_1 = CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_1;
	Parms.CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_1 = CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_1;
	Parms.K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast = K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast;
	Parms.CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_2 = CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_2;
	Parms.CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_2 = CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_2;
	Parms.K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast = K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast;
	Parms.CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_3 = CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_3;
	Parms.CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_3 = CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_3;
	Parms.K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast = K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast;
	Parms.CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_3 = CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_3;
	Parms.CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_3 = CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_3;
	Parms.CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_4 = CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_4;
	Parms.CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_4 = CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_4;
	Parms.CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_5 = CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_5;
	Parms.CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_5 = CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_5;
	Parms.K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast_1 = K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast_1;
	Parms.CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_4 = CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_4;
	Parms.CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_4 = CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_4;
	Parms.K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast_1 = K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast_1;
	Parms.CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_5 = CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_5;
	Parms.CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_5 = CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_5;
	Parms.K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast_1 = K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.ClosedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVisualSettings_MainMenuUI_ASA_C::ClosedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisualSettings_MainMenuUI_ASA_C", "ClosedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


