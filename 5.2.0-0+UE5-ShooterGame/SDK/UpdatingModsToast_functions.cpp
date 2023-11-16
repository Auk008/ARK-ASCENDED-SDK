#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UpdatingModsToast.UpdatingModsToast_C
// (None)

class UClass* UUpdatingModsToast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpdatingModsToast_C");

	return Clss;
}


// UpdatingModsToast_C UpdatingModsToast.Default__UpdatingModsToast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUpdatingModsToast_C* UUpdatingModsToast_C::GetDefaultObj()
{
	static class UUpdatingModsToast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpdatingModsToast_C*>(UUpdatingModsToast_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UpdatingModsToast.UpdatingModsToast_C.UpdateProgressBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_2                          (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (None)
// double                             CallFunc_SelectFloat_ReturnValue                                 (None)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (None)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (None)

void UUpdatingModsToast_C::UpdateProgressBar(double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleFloat_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_2, double CallFunc_Divide_DoubleFloat_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "UpdateProgressBar");

	Params::UUpdatingModsToast_C_UpdateProgressBar_Params Parms{};

	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue = CallFunc_Divide_DoubleFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_2 = CallFunc_Conv_IntToDouble_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue_1 = CallFunc_Divide_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpdatingModsToast.UpdatingModsToast_C.UpdateMainText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (ContainsInstancedReference, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (None)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        K2Node_Select_Default                                            (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUpdatingModsToast_C::UpdateMainText(bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_Select_Default, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "UpdateMainText");

	Params::UUpdatingModsToast_C_UpdateMainText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpdatingModsToast.UpdatingModsToast_C.InitCounter
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              NewCounterMax                                                    (None)
// bool                               bInWillSetCounter                                                (None)

void UUpdatingModsToast_C::InitCounter(int32 NewCounterMax, bool bInWillSetCounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "InitCounter");

	Params::UUpdatingModsToast_C_InitCounter_Params Parms{};

	Parms.NewCounterMax = NewCounterMax;
	Parms.bInWillSetCounter = bInWillSetCounter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpdatingModsToast.UpdatingModsToast_C.incrementCounter
// (Event, Public, BlueprintEvent)
// Parameters:

void UUpdatingModsToast_C::IncrementCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "incrementCounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpdatingModsToast.UpdatingModsToast_C.OverrideTextValueWithString
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      NewText                                                          (None)
// bool                               HideProgressBar                                                  (None)

void UUpdatingModsToast_C::OverrideTextValueWithString(const class FString& NewText, bool HideProgressBar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "OverrideTextValueWithString");

	Params::UUpdatingModsToast_C_OverrideTextValueWithString_Params Parms{};

	Parms.NewText = NewText;
	Parms.HideProgressBar = HideProgressBar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpdatingModsToast.UpdatingModsToast_C.OverrideTextValue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        NewText                                                          (None)
// bool                               HideProgressBar                                                  (None)

void UUpdatingModsToast_C::OverrideTextValue(class FText NewText, bool HideProgressBar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "OverrideTextValue");

	Params::UUpdatingModsToast_C_OverrideTextValue_Params Parms{};

	Parms.NewText = NewText;
	Parms.HideProgressBar = HideProgressBar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpdatingModsToast.UpdatingModsToast_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUpdatingModsToast_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpdatingModsToast.UpdatingModsToast_C.SetCounter
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              NewCounter                                                       (None)

void UUpdatingModsToast_C::SetCounter(int32 NewCounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "SetCounter");

	Params::UUpdatingModsToast_C_SetCounter_Params Parms{};

	Parms.NewCounter = NewCounter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpdatingModsToast.UpdatingModsToast_C.ExecuteUbergraph_UpdatingModsToast
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               Temp_bool_Variable                                               (None)
// enum class ESlateVisibility        Temp_byte_Variable                                               (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (None)
// int32                              K2Node_Event_NewCounterMax                                       (None)
// bool                               K2Node_Event_bInWillSetCounter                                   (None)
// class FString                      K2Node_Event_NewText_1                                           (SimpleDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               K2Node_Event_HideProgressBar_1                                   (None)
// class FText                        K2Node_Event_NewText                                             (ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               K2Node_Event_HideProgressBar                                     (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (None)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (None)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (None)
// bool                               Temp_bool_Variable_1                                             (None)
// int32                              K2Node_Event_NewCounter                                          (None)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (None)

void UUpdatingModsToast_C::ExecuteUbergraph_UpdatingModsToast(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 K2Node_Event_NewCounterMax, bool K2Node_Event_bInWillSetCounter, const class FString& K2Node_Event_NewText_1, bool K2Node_Event_HideProgressBar_1, class FText K2Node_Event_NewText, bool K2Node_Event_HideProgressBar, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, int32 K2Node_Event_NewCounter, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdatingModsToast_C", "ExecuteUbergraph_UpdatingModsToast");

	Params::UUpdatingModsToast_C_ExecuteUbergraph_UpdatingModsToast_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_NewCounterMax = K2Node_Event_NewCounterMax;
	Parms.K2Node_Event_bInWillSetCounter = K2Node_Event_bInWillSetCounter;
	Parms.K2Node_Event_NewText_1 = K2Node_Event_NewText_1;
	Parms.K2Node_Event_HideProgressBar_1 = K2Node_Event_HideProgressBar_1;
	Parms.K2Node_Event_NewText = K2Node_Event_NewText;
	Parms.K2Node_Event_HideProgressBar = K2Node_Event_HideProgressBar;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Event_NewCounter = K2Node_Event_NewCounter;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


