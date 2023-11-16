#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Slider_ASA_Widget.Slider_ASA_Widget_C
// (None)

class UClass* USlider_ASA_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Slider_ASA_Widget_C");

	return Clss;
}


// Slider_ASA_Widget_C Slider_ASA_Widget.Default__Slider_ASA_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlider_ASA_Widget_C* USlider_ASA_Widget_C::GetDefaultObj()
{
	static class USlider_ASA_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlider_ASA_Widget_C*>(USlider_ASA_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Slider_ASA_Widget.Slider_ASA_Widget_C.GetOverrideHighligteableWidgetBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (None)

void USlider_ASA_Widget_C::GetOverrideHighligteableWidgetBP(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider_ASA_Widget_C", "GetOverrideHighligteableWidgetBP");

	Params::USlider_ASA_Widget_C_GetOverrideHighligteableWidgetBP_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Slider_ASA_Widget.Slider_ASA_Widget_C.SetupSetPercent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InputPin                                                         (None)
// bool                               PreventRecallParent                                              (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ZeroConstructor)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (Edit, ZeroConstructor)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (Edit, ZeroConstructor)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (None)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (None)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast               (None)
// double                             CallFunc_Subtract_DoubleFloat_A_ImplicitCast                     (None)
// double                             CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1                   (None)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (None)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (None)

void USlider_ASA_Widget_C::SetupSetPercent(float InputPin, bool PreventRecallParent, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, class UObject* CallFunc_GetOuterObject_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue_1, double CallFunc_Subtract_DoubleFloat_ReturnValue, class UPrimalUserWidget* K2Node_DynamicCast_AsPrimal_User_Widget, bool K2Node_DynamicCast_bSuccess, double CallFunc_Subtract_DoubleFloat_ReturnValue_1, double CallFunc_Divide_DoubleFloat_ReturnValue, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_Subtract_DoubleFloat_A_ImplicitCast, double CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider_ASA_Widget_C", "SetupSetPercent");

	Params::USlider_ASA_Widget_C_SetupSetPercent_Params Parms{};

	Parms.InputPin = InputPin;
	Parms.PreventRecallParent = PreventRecallParent;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;
	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.CallFunc_GetOuterObject_ReturnValue_1 = CallFunc_GetOuterObject_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue = CallFunc_Subtract_DoubleFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_User_Widget = K2Node_DynamicCast_AsPrimal_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1 = CallFunc_Subtract_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue = CallFunc_Divide_DoubleFloat_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleFloat_A_ImplicitCast = CallFunc_Subtract_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1 = CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Slider_ASA_Widget.Slider_ASA_Widget_C.SetupValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Float                                                            (None)
// bool                               PreventRecallParent                                              (None)

void USlider_ASA_Widget_C::SetupValue(double Float, bool PreventRecallParent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider_ASA_Widget_C", "SetupValue");

	Params::USlider_ASA_Widget_C_SetupValue_Params Parms{};

	Parms.Float = Float;
	Parms.PreventRecallParent = PreventRecallParent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Slider_ASA_Widget.Slider_ASA_Widget_C.BPExecutedCommandForPrimalUI
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        CommandName                                                      (None)
// struct FBPNetExecParams            ExecParams                                                       (None)

void USlider_ASA_Widget_C::BPExecutedCommandForPrimalUI(class FName CommandName, const struct FBPNetExecParams& ExecParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider_ASA_Widget_C", "BPExecutedCommandForPrimalUI");

	Params::USlider_ASA_Widget_C_BPExecutedCommandForPrimalUI_Params Parms{};

	Parms.CommandName = CommandName;
	Parms.ExecParams = ExecParams;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Slider_ASA_Widget.Slider_ASA_Widget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void USlider_ASA_Widget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider_ASA_Widget_C", "Tick");

	Params::USlider_ASA_Widget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Slider_ASA_Widget.Slider_ASA_Widget_C.ExecuteUbergraph_Slider_ASA_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)
// bool                               CallFunc_IsVisible_ReturnValue                                   (None)
// float                              CallFunc_GetValue_ReturnValue                                    (None)
// class FName                        K2Node_Event_CommandName                                         (None)
// struct FBPNetExecParams            K2Node_Event_ExecParams                                          (None)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (None)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (None)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (None)
// float                              CallFunc_GetValue_ReturnValue_1                                  (None)
// double                             K2Node_CustomEvent_Float                                         (None)
// bool                               K2Node_CustomEvent_PreventRecallParent                           (None)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (None)
// double                             CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast                  (None)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (None)

void USlider_ASA_Widget_C::ExecuteUbergraph_Slider_ASA_Widget(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsVisible_ReturnValue, float CallFunc_GetValue_ReturnValue, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, float CallFunc_GetValue_ReturnValue_1, double K2Node_CustomEvent_Float, bool K2Node_CustomEvent_PreventRecallParent, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider_ASA_Widget_C", "ExecuteUbergraph_Slider_ASA_Widget");

	Params::USlider_ASA_Widget_C_ExecuteUbergraph_Slider_ASA_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.K2Node_Event_CommandName = K2Node_Event_CommandName;
	Parms.K2Node_Event_ExecParams = K2Node_Event_ExecParams;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_StringToDouble_ReturnValue = CallFunc_Conv_StringToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue_1 = CallFunc_GetValue_ReturnValue_1;
	Parms.K2Node_CustomEvent_Float = K2Node_CustomEvent_Float;
	Parms.K2Node_CustomEvent_PreventRecallParent = K2Node_CustomEvent_PreventRecallParent;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


