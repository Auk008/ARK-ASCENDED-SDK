#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DyeUI.DyeUI_C
// (None)

class UClass* UDyeUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DyeUI_C");

	return Clss;
}


// DyeUI_C DyeUI.Default__DyeUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDyeUI_C* UDyeUI_C::GetDefaultObj()
{
	static class UDyeUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDyeUI_C*>(UDyeUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DyeUI.DyeUI_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (None)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (None)

void UDyeUI_C::GetVisibility_0(enum class ESlateVisibility ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DyeUI_C", "GetVisibility_0");

	Params::UDyeUI_C_GetVisibility_0_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DyeUI.DyeUI_C.FixConsoleIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             Local_UWidgetIcons                                               (Edit, ZeroConstructor, ContainsInstancedReference, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// TArray<class UImage*>              K2Node_MakeArray_Array                                           (Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class UImage*                      CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (None)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (Edit, ZeroConstructor)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)

void UDyeUI_C::FixConsoleIcons(const TArray<class UWidget*>& Local_UWidgetIcons, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const TArray<class UImage*>& K2Node_MakeArray_Array, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D* CallFunc_GetIconForKeyName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DyeUI_C", "FixConsoleIcons");

	Params::UDyeUI_C_FixConsoleIcons_Params Parms{};

	Parms.Local_UWidgetIcons = Local_UWidgetIcons;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;
	Parms.CallFunc_BPGetGlobalUIData_ReturnValue = CallFunc_BPGetGlobalUIData_ReturnValue;
	Parms.CallFunc_GetIconForKeyName_ReturnValue = CallFunc_GetIconForKeyName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DyeUI.DyeUI_C.AddedToViewport
// (Event, Public, BlueprintEvent)
// Parameters:

void UDyeUI_C::AddedToViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DyeUI_C", "AddedToViewport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DyeUI.DyeUI_C.ExecuteUbergraph_DyeUI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)

void UDyeUI_C::ExecuteUbergraph_DyeUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DyeUI_C", "ExecuteUbergraph_DyeUI");

	Params::UDyeUI_C_ExecuteUbergraph_DyeUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


