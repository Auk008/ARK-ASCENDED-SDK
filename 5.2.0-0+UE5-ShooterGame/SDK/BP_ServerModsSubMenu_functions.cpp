#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_ServerModsSubMenu.BP_ServerModsSubMenu_C
// (None)

class UClass* UBP_ServerModsSubMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ServerModsSubMenu_C");

	return Clss;
}


// BP_ServerModsSubMenu_C BP_ServerModsSubMenu.Default__BP_ServerModsSubMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ServerModsSubMenu_C* UBP_ServerModsSubMenu_C::GetDefaultObj()
{
	static class UBP_ServerModsSubMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ServerModsSubMenu_C*>(UBP_ServerModsSubMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.ModListToCombinedString
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int64>                      Array                                                            (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPrivate)
// class FString                      ReturnValue                                                      (AutoWeak, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// TArray<class FString>              AllStrings                                                       (AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int64                              CallFunc_Array_Get_Item                                          (None)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPrivate)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (SimpleDisplay, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class FString                      CallFunc_JoinStringArray_ReturnValue                             (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)

void UBP_ServerModsSubMenu_C::ModListToCombinedString(const TArray<int64>& Array, const class FString& ReturnValue, const TArray<class FString>& AllStrings, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int64 CallFunc_Array_Get_Item, class FText CallFunc_Conv_Int64ToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsSubMenu_C", "ModListToCombinedString");

	Params::UBP_ServerModsSubMenu_C_ModListToCombinedString_Params Parms{};

	Parms.Array = Array;
	Parms.ReturnValue = ReturnValue;
	Parms.AllStrings = AllStrings;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_JoinStringArray_ReturnValue = CallFunc_JoinStringArray_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.BndEvt__BP_ServerModsSubMenu_BUTTON_FAV_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ServerModsSubMenu_C::BndEvt__BP_ServerModsSubMenu_BUTTON_FAV_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsSubMenu_C", "BndEvt__BP_ServerModsSubMenu_BUTTON_FAV_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.BndEvt__BP_ServerModsSubMenu_BUTTON_REPORT_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ServerModsSubMenu_C::BndEvt__BP_ServerModsSubMenu_BUTTON_REPORT_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsSubMenu_C", "BndEvt__BP_ServerModsSubMenu_BUTTON_REPORT_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Temp_user_token                                                  (None)

void UBP_ServerModsSubMenu_C::CustomEvent_3(const class FString& Temp_user_token)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsSubMenu_C", "CustomEvent_3");

	Params::UBP_ServerModsSubMenu_C_CustomEvent_3_Params Parms{};

	Parms.Temp_user_token = Temp_user_token;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.CustomEvent_4
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (None)

void UBP_ServerModsSubMenu_C::CustomEvent_4(const struct FCFCoreError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsSubMenu_C", "CustomEvent_4");

	Params::UBP_ServerModsSubMenu_C_CustomEvent_4_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.ReportServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsSubMenu_C::ReportServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsSubMenu_C", "ReportServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.ExecuteUbergraph_BP_ServerModsSubMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (SimpleDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ContainsInstancedReference, AssetRegistrySearchable, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      K2Node_CustomEvent_temp_user_token                               (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (None)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CallFunc_ModListToCombinedString_ReturnValue                     (ContainsInstancedReference, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (None)
// bool                               CallFunc_CanLaunchURL_ReturnValue                                (None)

void UBP_ServerModsSubMenu_C::ExecuteUbergraph_BP_ServerModsSubMenu(int32 EntryPoint, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& K2Node_CustomEvent_temp_user_token, const struct FCFCoreError& K2Node_CustomEvent_error, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Conv_Int64ToText_ReturnValue, const class FString& CallFunc_ModListToCombinedString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, bool CallFunc_CanLaunchURL_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsSubMenu_C", "ExecuteUbergraph_BP_ServerModsSubMenu");

	Params::UBP_ServerModsSubMenu_C_ExecuteUbergraph_BP_ServerModsSubMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.K2Node_CustomEvent_temp_user_token = K2Node_CustomEvent_temp_user_token;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.CallFunc_ModListToCombinedString_ReturnValue = CallFunc_ModListToCombinedString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_CanLaunchURL_ReturnValue = CallFunc_CanLaunchURL_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.FavoriteEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsSubMenu_C::FavoriteEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsSubMenu_C", "FavoriteEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.ReportEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsSubMenu_C::ReportEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsSubMenu_C", "ReportEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


