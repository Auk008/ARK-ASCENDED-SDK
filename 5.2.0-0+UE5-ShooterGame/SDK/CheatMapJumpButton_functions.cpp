#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CheatMapJumpButton.CheatMapJumpButton_C
// (None)

class UClass* UCheatMapJumpButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatMapJumpButton_C");

	return Clss;
}


// CheatMapJumpButton_C CheatMapJumpButton.Default__CheatMapJumpButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatMapJumpButton_C* UCheatMapJumpButton_C::GetDefaultObj()
{
	static class UCheatMapJumpButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatMapJumpButton_C*>(UCheatMapJumpButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheatMapJumpButton.CheatMapJumpButton_C.SetMapJumpInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCheatMapJumpInfo           Info                                                             (None)
// double                             K2Node_VariableSet_Yaw_ImplicitCast                              (None)

void UCheatMapJumpButton_C::SetMapJumpInfo(const struct FCheatMapJumpInfo& Info, double K2Node_VariableSet_Yaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMapJumpButton_C", "SetMapJumpInfo");

	Params::UCheatMapJumpButton_C_SetMapJumpInfo_Params Parms{};

	Parms.Info = Info;
	Parms.K2Node_VariableSet_Yaw_ImplicitCast = K2Node_VariableSet_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheatMapJumpButton.CheatMapJumpButton_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCheatMapJumpButton_C::BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMapJumpButton_C", "BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMapJumpButton.CheatMapJumpButton_C.ExecuteUbergraph_CheatMapJumpButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (None)
// double                             CallFunc_BreakVector_X                                           (None)
// double                             CallFunc_BreakVector_Y                                           (None)
// double                             CallFunc_BreakVector_Z                                           (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_2                       (ContainsInstancedReference, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ContainsInstancedReference, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ContainsInstancedReference, AssetRegistrySearchable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (None)

void UCheatMapJumpButton_C::ExecuteUbergraph_CheatMapJumpButton(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMapJumpButton_C", "ExecuteUbergraph_CheatMapJumpButton");

	Params::UCheatMapJumpButton_C_ExecuteUbergraph_CheatMapJumpButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_2 = CallFunc_Conv_DoubleToString_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


