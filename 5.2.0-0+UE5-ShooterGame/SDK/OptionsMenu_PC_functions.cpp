#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass OptionsMenu_PC.OptionsMenu_C
// (None)

class UClass* UOptionsMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptionsMenu_C");

	return Clss;
}


// OptionsMenu_C OptionsMenu_PC.Default__OptionsMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOptionsMenu_C* UOptionsMenu_C::GetDefaultObj()
{
	static class UOptionsMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptionsMenu_C*>(UOptionsMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OptionsMenu_PC.OptionsMenu_C.Get_ChangesText_1_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (None)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)

void UOptionsMenu_C::Get_ChangesText_1_Visibility(enum class ESlateVisibility ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_ChangesText_1_Visibility");

	Params::UOptionsMenu_C_Get_ChangesText_1_Visibility_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetSelectedIndex_ReturnValue = CallFunc_GetSelectedIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_ChangesText_1_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UOptionsMenu_C::Get_ChangesText_1_bIsEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_ChangesText_1_bIsEnabled");

	Params::UOptionsMenu_C_Get_ChangesText_1_bIsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_ResetOptions_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (None)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (None)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_1                      (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (None)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (None)

void UOptionsMenu_C::Get_ResetOptions_Visibility(enum class ESlateVisibility ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_ResetOptions_Visibility");

	Params::UOptionsMenu_C_Get_ResetOptions_Visibility_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_1 = CallFunc_GetActiveWidgetIndex_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_ResetGraphics_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (None)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (None)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (None)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)

void UOptionsMenu_C::Get_ResetGraphics_Visibility(enum class ESlateVisibility ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_ResetGraphics_Visibility");

	Params::UOptionsMenu_C_Get_ResetGraphics_Visibility_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_ResetAudio_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (None)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (None)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)

void UOptionsMenu_C::Get_ResetAudio_Visibility(enum class ESlateVisibility ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_ResetAudio_Visibility");

	Params::UOptionsMenu_C_Get_ResetAudio_Visibility_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_ResetKeybinding_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (None)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (None)

void UOptionsMenu_C::Get_ResetKeybinding_Visibility(enum class ESlateVisibility ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_ResetKeybinding_Visibility");

	Params::UOptionsMenu_C_Get_ResetKeybinding_Visibility_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_RtxTooltipRoot_Visibility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (None)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)

void UOptionsMenu_C::Get_RtxTooltipRoot_Visibility(enum class ESlateVisibility ReturnValue, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_RtxTooltipRoot_Visibility");

	Params::UOptionsMenu_C_Get_RtxTooltipRoot_Visibility_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.UpdateDLSSFeatures_Status
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNoErrors                                                        (None)
// class FText                        ReflexText                                                       (SimpleDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FText                        SuperResolutionText                                              (ContainsInstancedReference, AssetRegistrySearchable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FText                        FrameGenerationText                                              (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class EUStreamlineFeatureSupportCallFunc_QueryReflexSupport_ReturnValue                          (None)
// enum class EUDLSSSupport           CallFunc_QueryDLSSSupport_ReturnValue                            (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (None)
// enum class EUStreamlineFeatureSupportCallFunc_QueryDLSSGSupport_ReturnValue                           (None)
// class FString                      CallFunc_GetNewlineCharacter_ReturnValue                         (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (AutoWeak, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// enum class EUStreamlineFeatureSupportCallFunc_QueryReflexSupport_ReturnValue_1                        (None)
// enum class EUDLSSSupport           CallFunc_QueryDLSSSupport_ReturnValue_1                          (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (None)
// enum class EUStreamlineFeatureSupportCallFunc_QueryDLSSGSupport_ReturnValue_1                         (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (None)

void UOptionsMenu_C::UpdateDLSSFeatures_Status(bool bNoErrors, class FText ReflexText, class FText SuperResolutionText, class FText FrameGenerationText, enum class EUStreamlineFeatureSupport CallFunc_QueryReflexSupport_ReturnValue, enum class EUDLSSSupport CallFunc_QueryDLSSSupport_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class EUStreamlineFeatureSupport CallFunc_QueryDLSSGSupport_ReturnValue, const class FString& CallFunc_GetNewlineCharacter_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_BooleanAND_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class EUStreamlineFeatureSupport CallFunc_QueryReflexSupport_ReturnValue_1, enum class EUDLSSSupport CallFunc_QueryDLSSSupport_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EUStreamlineFeatureSupport CallFunc_QueryDLSSGSupport_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "UpdateDLSSFeatures_Status");

	Params::UOptionsMenu_C_UpdateDLSSFeatures_Status_Params Parms{};

	Parms.bNoErrors = bNoErrors;
	Parms.ReflexText = ReflexText;
	Parms.SuperResolutionText = SuperResolutionText;
	Parms.FrameGenerationText = FrameGenerationText;
	Parms.CallFunc_QueryReflexSupport_ReturnValue = CallFunc_QueryReflexSupport_ReturnValue;
	Parms.CallFunc_QueryDLSSSupport_ReturnValue = CallFunc_QueryDLSSSupport_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_QueryDLSSGSupport_ReturnValue = CallFunc_QueryDLSSGSupport_ReturnValue;
	Parms.CallFunc_GetNewlineCharacter_ReturnValue = CallFunc_GetNewlineCharacter_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_QueryReflexSupport_ReturnValue_1 = CallFunc_QueryReflexSupport_ReturnValue_1;
	Parms.CallFunc_QueryDLSSSupport_ReturnValue_1 = CallFunc_QueryDLSSSupport_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_QueryDLSSGSupport_ReturnValue_1 = CallFunc_QueryDLSSGSupport_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_AntiAlias_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_GetBoolValue_ReturnValue                                (None)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (None)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)

void UOptionsMenu_C::Get_AntiAlias_bIsEnabled(bool ReturnValue, bool CallFunc_GetBoolValue_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_AntiAlias_bIsEnabled");

	Params::UOptionsMenu_C_Get_AntiAlias_bIsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetBoolValue_ReturnValue = CallFunc_GetBoolValue_ReturnValue;
	Parms.CallFunc_GetSelectedIndex_ReturnValue = CallFunc_GetSelectedIndex_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_ResolutionScaleSlider_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_GetBoolValue_ReturnValue                                (None)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (None)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)

void UOptionsMenu_C::Get_ResolutionScaleSlider_bIsEnabled(bool ReturnValue, bool CallFunc_GetBoolValue_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_ResolutionScaleSlider_bIsEnabled");

	Params::UOptionsMenu_C_Get_ResolutionScaleSlider_bIsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetBoolValue_ReturnValue = CallFunc_GetBoolValue_ReturnValue;
	Parms.CallFunc_GetSelectedIndex_ReturnValue = CallFunc_GetSelectedIndex_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_SuperResolution_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_IsDLSSSupported_ReturnValue                             (None)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (None)
// bool                               CallFunc_GetBoolValue_ReturnValue                                (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)

void UOptionsMenu_C::Get_SuperResolution_bIsEnabled(bool ReturnValue, bool CallFunc_IsDLSSSupported_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_GetBoolValue_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_SuperResolution_bIsEnabled");

	Params::UOptionsMenu_C_Get_SuperResolution_bIsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_IsDLSSSupported_ReturnValue = CallFunc_IsDLSSSupported_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_GetBoolValue_ReturnValue = CallFunc_GetBoolValue_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_UseNvidiaReflexLowLatency_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_IsStreamlineFeatureSupported_ReturnValue                (None)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (None)
// bool                               CallFunc_GetBoolValue_ReturnValue                                (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)

void UOptionsMenu_C::Get_UseNvidiaReflexLowLatency_bIsEnabled(bool ReturnValue, bool CallFunc_IsStreamlineFeatureSupported_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_GetBoolValue_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_UseNvidiaReflexLowLatency_bIsEnabled");

	Params::UOptionsMenu_C_Get_UseNvidiaReflexLowLatency_bIsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_IsStreamlineFeatureSupported_ReturnValue = CallFunc_IsStreamlineFeatureSupported_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_GetBoolValue_ReturnValue = CallFunc_GetBoolValue_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_UseFrameGeneration_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_GetBoolValue_ReturnValue                                (None)
// bool                               CallFunc_GetBoolValue_ReturnValue_1                              (None)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (None)
// bool                               CallFunc_IsStreamlineFeatureSupported_ReturnValue                (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (None)

void UOptionsMenu_C::Get_UseFrameGeneration_bIsEnabled(bool ReturnValue, bool CallFunc_GetBoolValue_ReturnValue, bool CallFunc_GetBoolValue_ReturnValue_1, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_IsStreamlineFeatureSupported_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_UseFrameGeneration_bIsEnabled");

	Params::UOptionsMenu_C_Get_UseFrameGeneration_bIsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetBoolValue_ReturnValue = CallFunc_GetBoolValue_ReturnValue;
	Parms.CallFunc_GetBoolValue_ReturnValue_1 = CallFunc_GetBoolValue_ReturnValue_1;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_IsStreamlineFeatureSupported_ReturnValue = CallFunc_IsStreamlineFeatureSupported_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_UseNvidiaDlss_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (None)
// bool                               CallFunc_GetDLSSSupported_ReturnValue                            (None)

void UOptionsMenu_C::Get_UseNvidiaDlss_bIsEnabled(bool ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, bool CallFunc_GetDLSSSupported_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_UseNvidiaDlss_bIsEnabled");

	Params::UOptionsMenu_C_Get_UseNvidiaDlss_bIsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.CallFunc_GetDLSSSupported_ReturnValue = CallFunc_GetDLSSSupported_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.CanShowNvidiaPanel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_IsNvidiaGraphicCard_ReturnValue                         (None)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)

void UOptionsMenu_C::CanShowNvidiaPanel(bool ReturnValue, bool CallFunc_IsNvidiaGraphicCard_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "CanShowNvidiaPanel");

	Params::UOptionsMenu_C_CanShowNvidiaPanel_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_IsNvidiaGraphicCard_ReturnValue = CallFunc_IsNvidiaGraphicCard_ReturnValue;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_DisableTPVCameraInterpolationCheckbox_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (None)
// int32                              CallFunc_GetSelectedIndex_ReturnValue_1                          (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)

void UOptionsMenu_C::Get_DisableTPVCameraInterpolationCheckbox_bIsEnabled(bool ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_DisableTPVCameraInterpolationCheckbox_bIsEnabled");

	Params::UOptionsMenu_C_Get_DisableTPVCameraInterpolationCheckbox_bIsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetSelectedIndex_ReturnValue = CallFunc_GetSelectedIndex_ReturnValue;
	Parms.CallFunc_GetSelectedIndex_ReturnValue_1 = CallFunc_GetSelectedIndex_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.UpdateChangedValueButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHasChangedAnyValue                                              (None)

void UOptionsMenu_C::UpdateChangedValueButton(bool bHasChangedAnyValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "UpdateChangedValueButton");

	Params::UOptionsMenu_C_UpdateChangedValueButton_Params Parms{};

	Parms.bHasChangedAnyValue = bHasChangedAnyValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.OnKeyDownEvent
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FKeyEvent                   InKeyboardEvent                                                  (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// struct FEventReply                 ReturnValue                                                      (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// class UASAUIWidget_HorizontalListSelector_Sub_Style4_C*LocalSubMenu                                                     (Edit, ZeroConstructor)
// struct FKey                        LocalKey                                                         (SimpleDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// struct FEventReply                 CallFunc_OnKeyDownEvent_ReturnValue                              (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)
// class UWidget*                     CallFunc_SwitchButton_Widget                                     (Edit, ZeroConstructor)
// class UWidget*                     CallFunc_SwitchButton_Widget_1                                   (Edit, ZeroConstructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (None)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_4                         (None)
// class UWidget*                     CallFunc_SwitchButton_Widget_2                                   (Edit, ZeroConstructor)
// class UWidget*                     CallFunc_SwitchButton_Widget_3                                   (None)

void UOptionsMenu_C::OnKeyDownEvent(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyboardEvent, const struct FEventReply& ReturnValue, class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* LocalSubMenu, const struct FKey& LocalKey, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_OnKeyDownEvent_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class UWidget* CallFunc_SwitchButton_Widget, class UWidget* CallFunc_SwitchButton_Widget_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, class UWidget* CallFunc_SwitchButton_Widget_2, class UWidget* CallFunc_SwitchButton_Widget_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "OnKeyDownEvent");

	Params::UOptionsMenu_C_OnKeyDownEvent_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyboardEvent = InKeyboardEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.LocalSubMenu = LocalSubMenu;
	Parms.LocalKey = LocalKey;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_OnKeyDownEvent_ReturnValue = CallFunc_OnKeyDownEvent_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_SwitchButton_Widget = CallFunc_SwitchButton_Widget;
	Parms.CallFunc_SwitchButton_Widget_1 = CallFunc_SwitchButton_Widget_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_4 = CallFunc_EqualEqual_KeyKey_ReturnValue_4;
	Parms.CallFunc_SwitchButton_Widget_2 = CallFunc_SwitchButton_Widget_2;
	Parms.CallFunc_SwitchButton_Widget_3 = CallFunc_SwitchButton_Widget_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.NotIsNewCameraEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_IsNewCameraEnabled_ReturnValue                          (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)

void UOptionsMenu_C::NotIsNewCameraEnabled(bool ReturnValue, bool CallFunc_IsNewCameraEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "NotIsNewCameraEnabled");

	Params::UOptionsMenu_C_NotIsNewCameraEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_IsNewCameraEnabled_ReturnValue = CallFunc_IsNewCameraEnabled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.UpdateGamepadControlsTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalGlobalUIData*         UIDataLocal                                                      (Edit, ZeroConstructor)
// class UTexture2D*                  LocalBGImage                                                     (Edit, ZeroConstructor)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (None)
// class UPrimalGameData*             CallFunc_BPGetGameData_ReturnValue                               (Edit, ZeroConstructor)
// class UObject*                     CallFunc_PureClassDefaultObject_ReturnValue                      (Edit, ZeroConstructor)
// class UPrimalGlobalUIData*         K2Node_DynamicCast_AsPrimal_Global_UIData                        (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class FString                      CallFunc_GetPlatformName_ReturnValue_1                           (None)
// bool                               K2Node_SwitchString_CmpSuccess                                   (None)

void UOptionsMenu_C::UpdateGamepadControlsTab(class UPrimalGlobalUIData* UIDataLocal, class UTexture2D* LocalBGImage, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue, class UObject* CallFunc_PureClassDefaultObject_ReturnValue, class UPrimalGlobalUIData* K2Node_DynamicCast_AsPrimal_Global_UIData, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPlatformName_ReturnValue_1, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "UpdateGamepadControlsTab");

	Params::UOptionsMenu_C_UpdateGamepadControlsTab_Params Parms{};

	Parms.UIDataLocal = UIDataLocal;
	Parms.LocalBGImage = LocalBGImage;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_BPGetGameData_ReturnValue = CallFunc_BPGetGameData_ReturnValue;
	Parms.CallFunc_PureClassDefaultObject_ReturnValue = CallFunc_PureClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Global_UIData = K2Node_DynamicCast_AsPrimal_Global_UIData;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlatformName_ReturnValue_1 = CallFunc_GetPlatformName_ReturnValue_1;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_ForceTPVCameraOffsetCheckbox_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_IsNewCameraEnabled_ReturnValue                          (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)

void UOptionsMenu_C::Get_ForceTPVCameraOffsetCheckbox_bIsEnabled(bool ReturnValue, bool CallFunc_IsNewCameraEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_ForceTPVCameraOffsetCheckbox_bIsEnabled");

	Params::UOptionsMenu_C_Get_ForceTPVCameraOffsetCheckbox_bIsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_IsNewCameraEnabled_ReturnValue = CallFunc_IsNewCameraEnabled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.IsNewCameraEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (None)

void UOptionsMenu_C::IsNewCameraEnabled(bool ReturnValue, int32 CallFunc_GetSelectedIndex_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "IsNewCameraEnabled");

	Params::UOptionsMenu_C_IsNewCameraEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetSelectedIndex_ReturnValue = CallFunc_GetSelectedIndex_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_ResetCameraLateralOffset_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_ResetCameraLateralOffset_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_ResetCameraLateralOffset_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_BackButton_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_BackButton_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_BackButton_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_8_OnSelectionChanged_0__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_8_OnSelectionChanged_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_8_OnSelectionChanged_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_10_OnSelectionChanged_1__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_10_OnSelectionChanged_1__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_10_OnSelectionChanged_1__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_11_OnSelectionChanged_2__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_11_OnSelectionChanged_2__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_11_OnSelectionChanged_2__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_12_OnSelectionChanged_3__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_12_OnSelectionChanged_3__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_12_OnSelectionChanged_3__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_16_OnSelectionChanged_0__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_16_OnSelectionChanged_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_16_OnSelectionChanged_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_17_OnSelectionChanged_1__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_17_OnSelectionChanged_1__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_17_OnSelectionChanged_1__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_18_OnSelectionChanged_2__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_18_OnSelectionChanged_2__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_18_OnSelectionChanged_2__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_19_OnSelectionChanged_3__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_19_OnSelectionChanged_3__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_19_OnSelectionChanged_3__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_MotionBlurCheckbox_K2Node_ComponentBoundEvent_20_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (None)
// int32                              Index                                                            (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_MotionBlurCheckbox_K2Node_ComponentBoundEvent_20_ReturnValue__DelegateSignature(class FText ReturnValue, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_MotionBlurCheckbox_K2Node_ComponentBoundEvent_20_ReturnValue__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_MotionBlurCheckbox_K2Node_ComponentBoundEvent_20_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_FilmGrainCheckbox_K2Node_ComponentBoundEvent_23_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (None)
// int32                              Index                                                            (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_FilmGrainCheckbox_K2Node_ComponentBoundEvent_23_ReturnValue__DelegateSignature(class FText ReturnValue, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_FilmGrainCheckbox_K2Node_ComponentBoundEvent_23_ReturnValue__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_FilmGrainCheckbox_K2Node_ComponentBoundEvent_23_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_UseDFAOCheckbox_K2Node_ComponentBoundEvent_25_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (None)
// int32                              Index                                                            (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_UseDFAOCheckbox_K2Node_ComponentBoundEvent_25_ReturnValue__DelegateSignature(class FText ReturnValue, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_UseDFAOCheckbox_K2Node_ComponentBoundEvent_25_ReturnValue__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_UseDFAOCheckbox_K2Node_ComponentBoundEvent_25_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_SSAOCheckbox_K2Node_ComponentBoundEvent_27_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (None)
// int32                              Index                                                            (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_SSAOCheckbox_K2Node_ComponentBoundEvent_27_ReturnValue__DelegateSignature(class FText ReturnValue, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_SSAOCheckbox_K2Node_ComponentBoundEvent_27_ReturnValue__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_SSAOCheckbox_K2Node_ComponentBoundEvent_27_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_TrueSkyQualitySlider_K2Node_ComponentBoundEvent_29_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (None)
// int32                              Index                                                            (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_TrueSkyQualitySlider_K2Node_ComponentBoundEvent_29_ReturnValue__DelegateSignature(class FText ReturnValue, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_TrueSkyQualitySlider_K2Node_ComponentBoundEvent_29_ReturnValue__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_TrueSkyQualitySlider_K2Node_ComponentBoundEvent_29_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_GroundClutterDensitySlider_K2Node_ComponentBoundEvent_32_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (None)
// int32                              Index                                                            (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_GroundClutterDensitySlider_K2Node_ComponentBoundEvent_32_ReturnValue__DelegateSignature(class FText ReturnValue, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_GroundClutterDensitySlider_K2Node_ComponentBoundEvent_32_ReturnValue__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_GroundClutterDensitySlider_K2Node_ComponentBoundEvent_32_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_1_OnClosingEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_1_OnClosingEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_1_OnClosingEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_TerrainShadowComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_TerrainShadowComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_TerrainShadowComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_TerrainShadowComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CrosshairColorSlider_K2Node_ComponentBoundEvent_3_ChangedColor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_CrosshairColorSlider_K2Node_ComponentBoundEvent_3_ChangedColor__DelegateSignature(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_CrosshairColorSlider_K2Node_ComponentBoundEvent_3_ChangedColor__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_CrosshairColorSlider_K2Node_ComponentBoundEvent_3_ChangedColor__DelegateSignature_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CrosshairSizeSlider_K2Node_ComponentBoundEvent_4_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (None)
// int32                              Index                                                            (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_CrosshairSizeSlider_K2Node_ComponentBoundEvent_4_ReturnValue__DelegateSignature(class FText ReturnValue, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_CrosshairSizeSlider_K2Node_ComponentBoundEvent_4_ReturnValue__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_CrosshairSizeSlider_K2Node_ComponentBoundEvent_4_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CrosshairOpacitySlider_K2Node_ComponentBoundEvent_5_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (None)
// int32                              Index                                                            (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_CrosshairOpacitySlider_K2Node_ComponentBoundEvent_5_ReturnValue__DelegateSignature(class FText ReturnValue, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_CrosshairOpacitySlider_K2Node_ComponentBoundEvent_5_ReturnValue__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_CrosshairOpacitySlider_K2Node_ComponentBoundEvent_5_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_HDRandOcio_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_HDRandOcio_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_HDRandOcio_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.ClosedEvent_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::ClosedEvent_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "ClosedEvent_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CrosshairColorSlider_2_K2Node_ComponentBoundEvent_21_ChangedColor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_CrosshairColorSlider_2_K2Node_ComponentBoundEvent_21_ChangedColor__DelegateSignature(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_CrosshairColorSlider_2_K2Node_ComponentBoundEvent_21_ChangedColor__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_CrosshairColorSlider_2_K2Node_ComponentBoundEvent_21_ChangedColor__DelegateSignature_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CrosshairColorSlider_1_K2Node_ComponentBoundEvent_26_ChangedColor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_CrosshairColorSlider_1_K2Node_ComponentBoundEvent_26_ChangedColor__DelegateSignature(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_CrosshairColorSlider_1_K2Node_ComponentBoundEvent_26_ChangedColor__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_CrosshairColorSlider_1_K2Node_ComponentBoundEvent_26_ChangedColor__DelegateSignature_Params Parms{};

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.OptionsMenuValueChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::OptionsMenuValueChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "OptionsMenuValueChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_ResolutionsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_ResolutionsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_ResolutionsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_ResolutionsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_WidthTextBox_K2Node_ComponentBoundEvent_31_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (None)
// enum class ETextCommit             CommitMethod                                                     (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_WidthTextBox_K2Node_ComponentBoundEvent_31_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_WidthTextBox_K2Node_ComponentBoundEvent_31_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_WidthTextBox_K2Node_ComponentBoundEvent_31_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_HeightTextBox_K2Node_ComponentBoundEvent_33_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (None)
// enum class ETextCommit             CommitMethod                                                     (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_HeightTextBox_K2Node_ComponentBoundEvent_33_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_HeightTextBox_K2Node_ComponentBoundEvent_33_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_HeightTextBox_K2Node_ComponentBoundEvent_33_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_WindowModeComboBox_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_WindowModeComboBox_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_WindowModeComboBox_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_WindowModeComboBox_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_WorldTileBufferComboBox_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_WorldTileBufferComboBox_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_WorldTileBufferComboBox_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_WorldTileBufferComboBox_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_GammaSlider_K2Node_ComponentBoundEvent_36_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (None)
// int32                              Index                                                            (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_GammaSlider_K2Node_ComponentBoundEvent_36_ReturnValue__DelegateSignature(class FText ReturnValue, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_GammaSlider_K2Node_ComponentBoundEvent_36_ReturnValue__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_GammaSlider_K2Node_ComponentBoundEvent_36_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_FPSCapCheckbox_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_FPSCapCheckbox_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_FPSCapCheckbox_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_FPSCapCheckbox_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_FPSCapTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (None)
// enum class ETextCommit             CommitMethod                                                     (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_FPSCapTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_FPSCapTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_FPSCapTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_43_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_43_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_43_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_43_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_ClientNetSpeedComboBox_K2Node_ComponentBoundEvent_44_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_ClientNetSpeedComboBox_K2Node_ComponentBoundEvent_44_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_ClientNetSpeedComboBox_K2Node_ComponentBoundEvent_44_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_ClientNetSpeedComboBox_K2Node_ComponentBoundEvent_44_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_TextChatFilterComboBox_K2Node_ComponentBoundEvent_45_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_TextChatFilterComboBox_K2Node_ComponentBoundEvent_45_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_TextChatFilterComboBox_K2Node_ComponentBoundEvent_45_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_TextChatFilterComboBox_K2Node_ComponentBoundEvent_45_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_UseGamepadAimAssist_K2Node_ComponentBoundEvent_46_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_UseGamepadAimAssist_K2Node_ComponentBoundEvent_46_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_UseGamepadAimAssist_K2Node_ComponentBoundEvent_46_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_UseGamepadAimAssist_K2Node_ComponentBoundEvent_46_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_VoiceChatFilterComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_VoiceChatFilterComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_VoiceChatFilterComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_VoiceChatFilterComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_UseAutoDetectSettingsCheckbox_K2Node_ComponentBoundEvent_48_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_UseAutoDetectSettingsCheckbox_K2Node_ComponentBoundEvent_48_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_UseAutoDetectSettingsCheckbox_K2Node_ComponentBoundEvent_48_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_UseAutoDetectSettingsCheckbox_K2Node_ComponentBoundEvent_48_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UOptionsMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Tick");

	Params::UOptionsMenu_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.ResetOptionsMenuValueChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::ResetOptionsMenuValueChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "ResetOptionsMenuValueChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_AutoDetectSettings_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_AutoDetectSettings_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_AutoDetectSettings_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CameraModeComboBox_1_K2Node_ComponentBoundEvent_39_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_CameraModeComboBox_1_K2Node_ComponentBoundEvent_39_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_CameraModeComboBox_1_K2Node_ComponentBoundEvent_39_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_CameraModeComboBox_1_K2Node_ComponentBoundEvent_39_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_40_OnSelectionChanged_4__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_40_OnSelectionChanged_4__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_40_OnSelectionChanged_4__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_SuperResolutionNvidiaCombo_K2Node_ComponentBoundEvent_41_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_SuperResolutionNvidiaCombo_K2Node_ComponentBoundEvent_41_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_SuperResolutionNvidiaCombo_K2Node_ComponentBoundEvent_41_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_SuperResolutionNvidiaCombo_K2Node_ComponentBoundEvent_41_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_RayReconstructionCombo_K2Node_ComponentBoundEvent_42_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_RayReconstructionCombo_K2Node_ComponentBoundEvent_42_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_RayReconstructionCombo_K2Node_ComponentBoundEvent_42_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_RayReconstructionCombo_K2Node_ComponentBoundEvent_42_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_GlobalIlluminationQuality_K2Node_ComponentBoundEvent_50_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_GlobalIlluminationQuality_K2Node_ComponentBoundEvent_50_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_GlobalIlluminationQuality_K2Node_ComponentBoundEvent_50_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_GlobalIlluminationQuality_K2Node_ComponentBoundEvent_50_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_EffectsQuality_K2Node_ComponentBoundEvent_51_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_EffectsQuality_K2Node_ComponentBoundEvent_51_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_EffectsQuality_K2Node_ComponentBoundEvent_51_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_EffectsQuality_K2Node_ComponentBoundEvent_51_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_FoliageQuality_K2Node_ComponentBoundEvent_52_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_FoliageQuality_K2Node_ComponentBoundEvent_52_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_FoliageQuality_K2Node_ComponentBoundEvent_52_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_FoliageQuality_K2Node_ComponentBoundEvent_52_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_AdvancedGraphics_K2Node_ComponentBoundEvent_53_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (None)
// enum class ESelectInfo             SelectionType                                                    (None)

void UOptionsMenu_C::BndEvt__OptionsMenu_AdvancedGraphics_K2Node_ComponentBoundEvent_53_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_AdvancedGraphics_K2Node_ComponentBoundEvent_53_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_AdvancedGraphics_K2Node_ComponentBoundEvent_53_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.ExecuteUbergraph_OptionsMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_21                       (SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_21                      (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_20                       (SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_20                      (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_19                       (AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_19                      (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_18                       (AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_18                      (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_17                       (AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_17                      (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_16                       (AssetRegistrySearchable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_16                      (None)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (None)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_8                         (TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// int32                              K2Node_ComponentBoundEvent_Index_8                               (None)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_7                         (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// int32                              K2Node_ComponentBoundEvent_Index_7                               (None)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_6                         (SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// int32                              K2Node_ComponentBoundEvent_Index_6                               (None)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_5                         (AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// int32                              K2Node_ComponentBoundEvent_Index_5                               (None)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_4                         (AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// int32                              K2Node_ComponentBoundEvent_Index_4                               (None)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_3                         (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// int32                              K2Node_ComponentBoundEvent_Index_3                               (None)
// bool                               CallFunc_UseConsoleVideoOptions_ReturnValue                      (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_15                       (AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_15                      (None)
// struct FLinearColor                K2Node_ComponentBoundEvent_Color_2                               (None)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_2                         (Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// int32                              K2Node_ComponentBoundEvent_Index_2                               (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (None)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (None)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_1                         (AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_1                       (None)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (None)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (None)
// int32                              Temp_int_Array_Index_Variable_1                                  (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// class UPrimalUI*                   CallFunc_Create_ReturnValue                                      (Edit, ZeroConstructor)
// class UVisualSettings_MainMenuUI_ASA_C*K2Node_DynamicCast_AsVisual_Settings_Main_Menu_UI_ASA            (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// TArray<class UPrimalUI*>           CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient)
// TArray<class UPrimalUI*>           CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (Edit, ZeroConstructor, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// class UPrimalUI*                   CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (None)
// class FString                      CallFunc_GetPlatformName_ReturnValue_1                           (Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (None)
// class AShooterPlayerController*    CallFunc_GetPC_ReturnValue                                       (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class AShooterPlayerController*    CallFunc_GetPC_ReturnValue_1                                     (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// struct FLinearColor                K2Node_ComponentBoundEvent_Color_1                               (None)
// struct FLinearColor                K2Node_ComponentBoundEvent_Color                                 (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_14                       (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_14                      (None)
// class FText                        K2Node_ComponentBoundEvent_Text_2                                (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_2                        (None)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_1                        (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_13                       (AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_13                      (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_12                       (AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_12                      (None)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue                           (ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// int32                              K2Node_ComponentBoundEvent_Index                                 (None)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (None)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_11                       (ContainsInstancedReference, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_11                      (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_10                       (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_10                      (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_9                        (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_9                       (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_8                        (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_8                       (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_7                        (ContainsInstancedReference, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_7                       (None)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (None)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient)
// TArray<class UDataListButtonVariable_Widget_ASA_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_2                     (Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// class UDataListButtonVariable_Widget_ASA_C*CallFunc_Array_Get_Item_1                                        (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (None)
// class FString                      CallFunc_GetPlatformName_ReturnValue_2                           (SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_2                       (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_6                        (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_6                       (None)
// int32                              Temp_int_Array_Index_Variable_2                                  (None)
// class UPrimalUI*                   CallFunc_Array_Get_Item_2                                        (Edit, ZeroConstructor)
// bool                               CallFunc_CanShowNvidiaPanel_ReturnValue                          (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_5                        (ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_5                       (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_4                        (ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_4                       (None)
// class FString                      CallFunc_GetPlatformName_ReturnValue_3                           (BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ZeroConstructor)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_3                        (SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_3                       (None)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_2                        (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_2                       (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_1                        (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_1                       (None)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem                          (ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType                         (None)
// class UShooterGameUserSettings*    CallFunc_GetUserSettings_ReturnValue                             (None)
// int32                              CallFunc_GetDLSSModeIndex_ReturnValue                            (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (None)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (None)

void UOptionsMenu_C::ExecuteUbergraph_OptionsMenu(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, const class FString& K2Node_ComponentBoundEvent_SelectedItem_21, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_21, const class FString& K2Node_ComponentBoundEvent_SelectedItem_20, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_20, const class FString& K2Node_ComponentBoundEvent_SelectedItem_19, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_19, const class FString& K2Node_ComponentBoundEvent_SelectedItem_18, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_18, const class FString& K2Node_ComponentBoundEvent_SelectedItem_17, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_17, const class FString& K2Node_ComponentBoundEvent_SelectedItem_16, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_16, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class FText K2Node_ComponentBoundEvent_ReturnValue_8, int32 K2Node_ComponentBoundEvent_Index_8, class FText K2Node_ComponentBoundEvent_ReturnValue_7, int32 K2Node_ComponentBoundEvent_Index_7, class FText K2Node_ComponentBoundEvent_ReturnValue_6, int32 K2Node_ComponentBoundEvent_Index_6, class FText K2Node_ComponentBoundEvent_ReturnValue_5, int32 K2Node_ComponentBoundEvent_Index_5, class FText K2Node_ComponentBoundEvent_ReturnValue_4, int32 K2Node_ComponentBoundEvent_Index_4, class FText K2Node_ComponentBoundEvent_ReturnValue_3, int32 K2Node_ComponentBoundEvent_Index_3, bool CallFunc_UseConsoleVideoOptions_ReturnValue, const class FString& K2Node_ComponentBoundEvent_SelectedItem_15, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_15, const struct FLinearColor& K2Node_ComponentBoundEvent_Color_2, class FText K2Node_ComponentBoundEvent_ReturnValue_2, int32 K2Node_ComponentBoundEvent_Index_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, double CallFunc_Add_DoubleFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_Multiply_DoubleFloat_ReturnValue, class FText K2Node_ComponentBoundEvent_ReturnValue_1, int32 K2Node_ComponentBoundEvent_Index_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, double CallFunc_Conv_StringToDouble_ReturnValue_1, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_BooleanOR_ReturnValue, class UPrimalUI* CallFunc_Create_ReturnValue, class UVisualSettings_MainMenuUI_ASA_C* K2Node_DynamicCast_AsVisual_Settings_Main_Menu_UI_ASA, bool K2Node_DynamicCast_bSuccess, const TArray<class UPrimalUI*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, const TArray<class UPrimalUI*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UPrimalUI* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_GetPlatformName_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, class AShooterPlayerController* CallFunc_GetPC_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AShooterPlayerController* CallFunc_GetPC_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FLinearColor& K2Node_ComponentBoundEvent_Color_1, const struct FLinearColor& K2Node_ComponentBoundEvent_Color, const class FString& K2Node_ComponentBoundEvent_SelectedItem_14, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_14, class FText K2Node_ComponentBoundEvent_Text_2, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_2, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_1, const class FString& K2Node_ComponentBoundEvent_SelectedItem_13, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_13, const class FString& K2Node_ComponentBoundEvent_SelectedItem_12, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_12, class FText K2Node_ComponentBoundEvent_ReturnValue, int32 K2Node_ComponentBoundEvent_Index, bool K2Node_ComponentBoundEvent_bIsChecked_1, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const class FString& K2Node_ComponentBoundEvent_SelectedItem_11, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_11, const class FString& K2Node_ComponentBoundEvent_SelectedItem_10, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_10, const class FString& K2Node_ComponentBoundEvent_SelectedItem_9, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_9, const class FString& K2Node_ComponentBoundEvent_SelectedItem_8, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_8, const class FString& K2Node_ComponentBoundEvent_SelectedItem_7, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_7, bool K2Node_ComponentBoundEvent_bIsChecked, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, const TArray<class UDataListButtonVariable_Widget_ASA_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_2, class UDataListButtonVariable_Widget_ASA_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, const class FString& CallFunc_GetPlatformName_ReturnValue_2, bool CallFunc_EqualEqual_StriStri_ReturnValue_2, const class FString& K2Node_ComponentBoundEvent_SelectedItem_6, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_6, int32 Temp_int_Array_Index_Variable_2, class UPrimalUI* CallFunc_Array_Get_Item_2, bool CallFunc_CanShowNvidiaPanel_ReturnValue, const class FString& K2Node_ComponentBoundEvent_SelectedItem_5, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_5, const class FString& K2Node_ComponentBoundEvent_SelectedItem_4, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_4, const class FString& CallFunc_GetPlatformName_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const class FString& K2Node_ComponentBoundEvent_SelectedItem_3, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_3, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, const class FString& K2Node_ComponentBoundEvent_SelectedItem_2, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_2, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& K2Node_ComponentBoundEvent_SelectedItem_1, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_1, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, class UShooterGameUserSettings* CallFunc_GetUserSettings_ReturnValue, int32 CallFunc_GetDLSSModeIndex_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "ExecuteUbergraph_OptionsMenu");

	Params::UOptionsMenu_C_ExecuteUbergraph_OptionsMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_21 = K2Node_ComponentBoundEvent_SelectedItem_21;
	Parms.K2Node_ComponentBoundEvent_SelectionType_21 = K2Node_ComponentBoundEvent_SelectionType_21;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_20 = K2Node_ComponentBoundEvent_SelectedItem_20;
	Parms.K2Node_ComponentBoundEvent_SelectionType_20 = K2Node_ComponentBoundEvent_SelectionType_20;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_19 = K2Node_ComponentBoundEvent_SelectedItem_19;
	Parms.K2Node_ComponentBoundEvent_SelectionType_19 = K2Node_ComponentBoundEvent_SelectionType_19;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_18 = K2Node_ComponentBoundEvent_SelectedItem_18;
	Parms.K2Node_ComponentBoundEvent_SelectionType_18 = K2Node_ComponentBoundEvent_SelectionType_18;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_17 = K2Node_ComponentBoundEvent_SelectedItem_17;
	Parms.K2Node_ComponentBoundEvent_SelectionType_17 = K2Node_ComponentBoundEvent_SelectionType_17;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_16 = K2Node_ComponentBoundEvent_SelectedItem_16;
	Parms.K2Node_ComponentBoundEvent_SelectionType_16 = K2Node_ComponentBoundEvent_SelectionType_16;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_ReturnValue_8 = K2Node_ComponentBoundEvent_ReturnValue_8;
	Parms.K2Node_ComponentBoundEvent_Index_8 = K2Node_ComponentBoundEvent_Index_8;
	Parms.K2Node_ComponentBoundEvent_ReturnValue_7 = K2Node_ComponentBoundEvent_ReturnValue_7;
	Parms.K2Node_ComponentBoundEvent_Index_7 = K2Node_ComponentBoundEvent_Index_7;
	Parms.K2Node_ComponentBoundEvent_ReturnValue_6 = K2Node_ComponentBoundEvent_ReturnValue_6;
	Parms.K2Node_ComponentBoundEvent_Index_6 = K2Node_ComponentBoundEvent_Index_6;
	Parms.K2Node_ComponentBoundEvent_ReturnValue_5 = K2Node_ComponentBoundEvent_ReturnValue_5;
	Parms.K2Node_ComponentBoundEvent_Index_5 = K2Node_ComponentBoundEvent_Index_5;
	Parms.K2Node_ComponentBoundEvent_ReturnValue_4 = K2Node_ComponentBoundEvent_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_Index_4 = K2Node_ComponentBoundEvent_Index_4;
	Parms.K2Node_ComponentBoundEvent_ReturnValue_3 = K2Node_ComponentBoundEvent_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_Index_3 = K2Node_ComponentBoundEvent_Index_3;
	Parms.CallFunc_UseConsoleVideoOptions_ReturnValue = CallFunc_UseConsoleVideoOptions_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_15 = K2Node_ComponentBoundEvent_SelectedItem_15;
	Parms.K2Node_ComponentBoundEvent_SelectionType_15 = K2Node_ComponentBoundEvent_SelectionType_15;
	Parms.K2Node_ComponentBoundEvent_Color_2 = K2Node_ComponentBoundEvent_Color_2;
	Parms.K2Node_ComponentBoundEvent_ReturnValue_2 = K2Node_ComponentBoundEvent_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_Index_2 = K2Node_ComponentBoundEvent_Index_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue = CallFunc_Conv_StringToDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleFloat_ReturnValue = CallFunc_Add_DoubleFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ReturnValue_1 = K2Node_ComponentBoundEvent_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue_1 = CallFunc_Conv_StringToDouble_ReturnValue_1;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_1 = CallFunc_EqualEqual_StriStri_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsVisual_Settings_Main_Menu_UI_ASA = K2Node_DynamicCast_AsVisual_Settings_Main_Menu_UI_ASA;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetPlatformName_ReturnValue_1 = CallFunc_GetPlatformName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetPC_ReturnValue = CallFunc_GetPC_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPC_ReturnValue_1 = CallFunc_GetPC_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Color_1 = K2Node_ComponentBoundEvent_Color_1;
	Parms.K2Node_ComponentBoundEvent_Color = K2Node_ComponentBoundEvent_Color;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_14 = K2Node_ComponentBoundEvent_SelectedItem_14;
	Parms.K2Node_ComponentBoundEvent_SelectionType_14 = K2Node_ComponentBoundEvent_SelectionType_14;
	Parms.K2Node_ComponentBoundEvent_Text_2 = K2Node_ComponentBoundEvent_Text_2;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_2 = K2Node_ComponentBoundEvent_CommitMethod_2;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_1 = K2Node_ComponentBoundEvent_CommitMethod_1;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_13 = K2Node_ComponentBoundEvent_SelectedItem_13;
	Parms.K2Node_ComponentBoundEvent_SelectionType_13 = K2Node_ComponentBoundEvent_SelectionType_13;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_12 = K2Node_ComponentBoundEvent_SelectedItem_12;
	Parms.K2Node_ComponentBoundEvent_SelectionType_12 = K2Node_ComponentBoundEvent_SelectionType_12;
	Parms.K2Node_ComponentBoundEvent_ReturnValue = K2Node_ComponentBoundEvent_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_ComponentBoundEvent_bIsChecked_1 = K2Node_ComponentBoundEvent_bIsChecked_1;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_11 = K2Node_ComponentBoundEvent_SelectedItem_11;
	Parms.K2Node_ComponentBoundEvent_SelectionType_11 = K2Node_ComponentBoundEvent_SelectionType_11;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_10 = K2Node_ComponentBoundEvent_SelectedItem_10;
	Parms.K2Node_ComponentBoundEvent_SelectionType_10 = K2Node_ComponentBoundEvent_SelectionType_10;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_9 = K2Node_ComponentBoundEvent_SelectedItem_9;
	Parms.K2Node_ComponentBoundEvent_SelectionType_9 = K2Node_ComponentBoundEvent_SelectionType_9;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_8 = K2Node_ComponentBoundEvent_SelectedItem_8;
	Parms.K2Node_ComponentBoundEvent_SelectionType_8 = K2Node_ComponentBoundEvent_SelectionType_8;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_7 = K2Node_ComponentBoundEvent_SelectedItem_7;
	Parms.K2Node_ComponentBoundEvent_SelectionType_7 = K2Node_ComponentBoundEvent_SelectionType_7;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_2 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetPlatformName_ReturnValue_2 = CallFunc_GetPlatformName_ReturnValue_2;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_2 = CallFunc_EqualEqual_StriStri_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_6 = K2Node_ComponentBoundEvent_SelectedItem_6;
	Parms.K2Node_ComponentBoundEvent_SelectionType_6 = K2Node_ComponentBoundEvent_SelectionType_6;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_CanShowNvidiaPanel_ReturnValue = CallFunc_CanShowNvidiaPanel_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_5 = K2Node_ComponentBoundEvent_SelectedItem_5;
	Parms.K2Node_ComponentBoundEvent_SelectionType_5 = K2Node_ComponentBoundEvent_SelectionType_5;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_4 = K2Node_ComponentBoundEvent_SelectedItem_4;
	Parms.K2Node_ComponentBoundEvent_SelectionType_4 = K2Node_ComponentBoundEvent_SelectionType_4;
	Parms.CallFunc_GetPlatformName_ReturnValue_3 = CallFunc_GetPlatformName_ReturnValue_3;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_3 = K2Node_ComponentBoundEvent_SelectedItem_3;
	Parms.K2Node_ComponentBoundEvent_SelectionType_3 = K2Node_ComponentBoundEvent_SelectionType_3;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_2 = K2Node_ComponentBoundEvent_SelectedItem_2;
	Parms.K2Node_ComponentBoundEvent_SelectionType_2 = K2Node_ComponentBoundEvent_SelectionType_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_1 = K2Node_ComponentBoundEvent_SelectedItem_1;
	Parms.K2Node_ComponentBoundEvent_SelectionType_1 = K2Node_ComponentBoundEvent_SelectionType_1;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = K2Node_ComponentBoundEvent_SelectedItem;
	Parms.K2Node_ComponentBoundEvent_SelectionType = K2Node_ComponentBoundEvent_SelectionType;
	Parms.CallFunc_GetUserSettings_ReturnValue = CallFunc_GetUserSettings_ReturnValue;
	Parms.CallFunc_GetDLSSModeIndex_ReturnValue = CallFunc_GetDLSSModeIndex_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


