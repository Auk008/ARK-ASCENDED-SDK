#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CreditsUI.CreditsUI_C
// (None)

class UClass* UCreditsUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreditsUI_C");

	return Clss;
}


// CreditsUI_C CreditsUI.Default__CreditsUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCreditsUI_C* UCreditsUI_C::GetDefaultObj()
{
	static class UCreditsUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreditsUI_C*>(UCreditsUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CreditsUI.CreditsUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCreditsUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreditsUI.CreditsUI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UCreditsUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsUI_C", "Tick");

	Params::UCreditsUI_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreditsUI.CreditsUI_C.CloseButtonEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreditsUI_C::CloseButtonEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsUI_C", "CloseButtonEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreditsUI.CreditsUI_C.RemovedFromViewport
// (Event, Public, BlueprintEvent)
// Parameters:

void UCreditsUI_C::RemovedFromViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsUI_C", "RemovedFromViewport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreditsUI.CreditsUI_C.ExecuteUbergraph_CreditsUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (None)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (Edit, ZeroConstructor)
// class UPrimalGlobalsBlueprint_C*   K2Node_DynamicCast_AsPrimal_Globals_Blueprint                    (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, ZeroConstructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (None)
// double                             CallFunc_FInterpTo_ReturnValue                                   (None)
// int32                              Temp_int_Variable                                                (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (None)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast                        (None)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (None)

void UCreditsUI_C::ExecuteUbergraph_CreditsUI(int32 EntryPoint, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class UPrimalGlobalsBlueprint_C* K2Node_DynamicCast_AsPrimal_Globals_Blueprint, bool K2Node_DynamicCast_bSuccess, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FInterpTo_ReturnValue, int32 Temp_int_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsUI_C", "ExecuteUbergraph_CreditsUI");

	Params::UCreditsUI_C_ExecuteUbergraph_CreditsUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Globals_Blueprint = K2Node_DynamicCast_AsPrimal_Globals_Blueprint;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_FInterpTo_DeltaTime_ImplicitCast = CallFunc_FInterpTo_DeltaTime_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


