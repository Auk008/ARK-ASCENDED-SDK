#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListButtonVariable_Bool_Widget_ASA.DataListButtonVariable_Bool_Widget_ASA_C
// (None)

class UClass* UDataListButtonVariable_Bool_Widget_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListButtonVariable_Bool_Widget_ASA_C");

	return Clss;
}


// DataListButtonVariable_Bool_Widget_ASA_C DataListButtonVariable_Bool_Widget_ASA.Default__DataListButtonVariable_Bool_Widget_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListButtonVariable_Bool_Widget_ASA_C* UDataListButtonVariable_Bool_Widget_ASA_C::GetDefaultObj()
{
	static class UDataListButtonVariable_Bool_Widget_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListButtonVariable_Bool_Widget_ASA_C*>(UDataListButtonVariable_Bool_Widget_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataListButtonVariable_Bool_Widget_ASA.DataListButtonVariable_Bool_Widget_ASA_C.SetupTextValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ContainsInstancedReference, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        ReturnText                                                       (TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (None)
// class FString                      CallFunc_SelectString_ReturnValue                                (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UDataListButtonVariable_Bool_Widget_ASA_C::SetupTextValue(class FText Text, class FText ReturnText, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Bool_Widget_ASA_C", "SetupTextValue");

	Params::UDataListButtonVariable_Bool_Widget_ASA_C_SetupTextValue_Params Parms{};

	Parms.Text = Text;
	Parms.ReturnText = ReturnText;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Bool_Widget_ASA.DataListButtonVariable_Bool_Widget_ASA_C.ExtraSetupToggledButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Toggle                                                           (None)
// bool                               FromSelectOtherOption                                            (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (SimpleDisplay, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (None)

void UDataListButtonVariable_Bool_Widget_ASA_C::ExtraSetupToggledButton(bool Toggle, bool FromSelectOtherOption, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Bool_Widget_ASA_C", "ExtraSetupToggledButton");

	Params::UDataListButtonVariable_Bool_Widget_ASA_C_ExtraSetupToggledButton_Params Parms{};

	Parms.Toggle = Toggle;
	Parms.FromSelectOtherOption = FromSelectOtherOption;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Bool_Widget_ASA.DataListButtonVariable_Bool_Widget_ASA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDataListButtonVariable_Bool_Widget_ASA_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Bool_Widget_ASA_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListButtonVariable_Bool_Widget_ASA.DataListButtonVariable_Bool_Widget_ASA_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (None)

void UDataListButtonVariable_Bool_Widget_ASA_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Bool_Widget_ASA_C", "PreConstruct");

	Params::UDataListButtonVariable_Bool_Widget_ASA_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonVariable_Bool_Widget_ASA.DataListButtonVariable_Bool_Widget_ASA_C.ExecuteUbergraph_DataListButtonVariable_Bool_Widget_ASA
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               K2Node_Event_IsDesignTime                                        (None)

void UDataListButtonVariable_Bool_Widget_ASA_C::ExecuteUbergraph_DataListButtonVariable_Bool_Widget_ASA(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Bool_Widget_ASA_C", "ExecuteUbergraph_DataListButtonVariable_Bool_Widget_ASA");

	Params::UDataListButtonVariable_Bool_Widget_ASA_C_ExecuteUbergraph_DataListButtonVariable_Bool_Widget_ASA_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


