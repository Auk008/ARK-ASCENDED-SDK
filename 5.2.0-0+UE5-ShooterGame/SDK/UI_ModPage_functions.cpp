#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ModPage.UI_ModPage_C
// (None)

class UClass* UUI_ModPage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ModPage_C");

	return Clss;
}


// UI_ModPage_C UI_ModPage.Default__UI_ModPage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ModPage_C* UUI_ModPage_C::GetDefaultObj()
{
	static class UUI_ModPage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ModPage_C*>(UUI_ModPage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ModPage.UI_ModPage_C.OnEventBroadcasted
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (None)
// TArray<struct FInstallProgressMod> ModsList                                                         (ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// struct FCFCoreApiResponsePaginationPagination                                                       (None)
// bool                               ReturnValue                                                      (None)
// struct FInstallProgressMod         NewInformation                                                   (ZeroConstructor, ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// struct FInstallProgressMod         TempMod                                                          (ZeroConstructor, SimpleDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (None)

void UUI_ModPage_C::OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, const struct FCFCoreApiResponsePagination& Pagination, bool ReturnValue, const struct FInstallProgressMod& NewInformation, const struct FInstallProgressMod& TempMod, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FInstallProgressMod& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnEventBroadcasted");

	Params::UUI_ModPage_C_OnEventBroadcasted_Params Parms{};

	Parms.Evt = Evt;
	Parms.ModsList = ModsList;
	Parms.Pagination = Pagination;
	Parms.ReturnValue = ReturnValue;
	Parms.NewInformation = NewInformation;
	Parms.TempMod = TempMod;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.GetClose_B
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (None)

void UUI_ModPage_C::GetClose_B(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "GetClose_B");

	Params::UUI_ModPage_C_GetClose_B_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.SequenceEvent__ENTRYPOINTUI_ModPage_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_Mod                                                          (None)

void UUI_ModPage_C::SequenceEvent__ENTRYPOINTUI_ModPage_0(class UImage* IMG_Mod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SequenceEvent__ENTRYPOINTUI_ModPage_0");

	Params::UUI_ModPage_C_SequenceEvent__ENTRYPOINTUI_ModPage_0_Params Parms{};

	Parms.IMG_Mod = IMG_Mod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.SequenceEvent__ENTRYPOINTUI_ModPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_Mod                                                          (None)

void UUI_ModPage_C::SequenceEvent__ENTRYPOINTUI_ModPage(class UImage* IMG_Mod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SequenceEvent__ENTRYPOINTUI_ModPage");

	Params::UUI_ModPage_C_SequenceEvent__ENTRYPOINTUI_ModPage_Params Parms{};

	Parms.IMG_Mod = IMG_Mod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.BPHighlightWidgetOnStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UUI_ModPage_C::BPHighlightWidgetOnStart(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BPHighlightWidgetOnStart");

	Params::UUI_ModPage_C_BPHighlightWidgetOnStart_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.BPEscapeClosed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UUI_ModPage_C::BPEscapeClosed(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BPEscapeClosed");

	Params::UUI_ModPage_C_BPEscapeClosed_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.UpdateStatusStage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInstalledModStatus     Selection                                                        (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)

void UUI_ModPage_C::UpdateStatusStage(enum class EInstalledModStatus Selection, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateStatusStage");

	Params::UUI_ModPage_C_UpdateStatusStage_Params Parms{};

	Parms.Selection = Selection;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.SetModVersion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              NameLikeChar                                                     (AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      ModsFileName                                                     (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              Temp_int_Array_Index_Variable_1                                  (None)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// int32                              Temp_int_Array_Index_Variable_2                                  (None)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (ContainsInstancedReference, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Array_Get_Item                                          (AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_IsNumeric_ReturnValue                                   (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FText                        Temp_text_Variable                                               (AutoWeak, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// bool                               Temp_bool_Variable                                               (None)
// TArray<class FString>              K2Node_MakeArray_Array                                           (AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference, SimpleDisplay, Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FText                        K2Node_Select_Default                                            (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// int32                              CallFunc_ReplaceInline_ReturnValue                               (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// int32                              CallFunc_Len_ReturnValue                                         (None)
// int32                              CallFunc_FindSubstring_ReturnValue                               (None)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// struct FFile                       CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (None)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (None)

void UUI_ModPage_C::SetModVersion(const TArray<class FString>& NameLikeChar, const class FString& ModsFileName, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsNumeric_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText Temp_text_Variable, bool Temp_bool_Variable, const TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_Array_Get_Item_1, class FText K2Node_Select_Default, int32 CallFunc_ReplaceInline_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, const struct FFile& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_Int64Int64_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SetModVersion");

	Params::UUI_ModPage_C_SetModVersion_Params Parms{};

	Parms.NameLikeChar = NameLikeChar;
	Parms.ModsFileName = ModsFileName;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsNumeric_ReturnValue = CallFunc_IsNumeric_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_ReplaceInline_ReturnValue = CallFunc_ReplaceInline_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_FindSubstring_ReturnValue = CallFunc_FindSubstring_ReturnValue;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.InitAllVars
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetModVersion_FinalAmount                               (ContainsInstancedReference, SimpleDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_GetAuthorName_CombinedAuthorsNames                      (SimpleDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_GetDownloadCount_FinalAmount                            (AssetRegistrySearchable, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_GetModName_Name                                         (BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// struct FCFCoreFileSize             CallFunc_GetModSize_SizeStruct                                   (None)
// class FText                        CallFunc_GetModSize_SizeInText                                   (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// int64                              CallFunc_GetModSize_bytes                                        (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UTexture2DDynamic*           CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (Edit, ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (Edit, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (None)

void UUI_ModPage_C::InitAllVars(class FText CallFunc_GetModVersion_FinalAmount, const class FString& CallFunc_GetAuthorName_CombinedAuthorsNames, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetDownloadCount_FinalAmount, const class FString& CallFunc_GetModName_Name, const struct FCFCoreFileSize& CallFunc_GetModSize_SizeStruct, class FText CallFunc_GetModSize_SizeInText, int64 CallFunc_GetModSize_bytes, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UTexture2DDynamic* CallFunc_Array_Get_Item, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "InitAllVars");

	Params::UUI_ModPage_C_InitAllVars_Params Parms{};

	Parms.CallFunc_GetModVersion_FinalAmount = CallFunc_GetModVersion_FinalAmount;
	Parms.CallFunc_GetAuthorName_CombinedAuthorsNames = CallFunc_GetAuthorName_CombinedAuthorsNames;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetDownloadCount_FinalAmount = CallFunc_GetDownloadCount_FinalAmount;
	Parms.CallFunc_GetModName_Name = CallFunc_GetModName_Name;
	Parms.CallFunc_GetModSize_SizeStruct = CallFunc_GetModSize_SizeStruct;
	Parms.CallFunc_GetModSize_SizeInText = CallFunc_GetModSize_SizeInText;
	Parms.CallFunc_GetModSize_bytes = CallFunc_GetModSize_bytes;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.UpdateScreenshotButtonsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CanGoToPreviousImage_ReturnValue                        (None)
// bool                               CallFunc_CanGoToNextImage_ReturnValue                            (None)

void UUI_ModPage_C::UpdateScreenshotButtonsEnabled(bool CallFunc_CanGoToPreviousImage_ReturnValue, bool CallFunc_CanGoToNextImage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateScreenshotButtonsEnabled");

	Params::UUI_ModPage_C_UpdateScreenshotButtonsEnabled_Params Parms{};

	Parms.CallFunc_CanGoToPreviousImage_ReturnValue = CallFunc_CanGoToPreviousImage_ReturnValue;
	Parms.CallFunc_CanGoToNextImage_ReturnValue = CallFunc_CanGoToNextImage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.CanGoToPreviousImage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)

void UUI_ModPage_C::CanGoToPreviousImage(bool ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CanGoToPreviousImage");

	Params::UUI_ModPage_C_CanGoToPreviousImage_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.CanGoToNextImage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void UUI_ModPage_C::CanGoToNextImage(bool ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CanGoToNextImage");

	Params::UUI_ModPage_C_CanGoToNextImage_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.SetUnavailableState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Avaiable                                                         (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               Temp_bool_Variable                                               (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// enum class ESlateVisibility        Temp_byte_Variable                                               (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (None)
// bool                               Temp_bool_Variable_1                                             (None)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (None)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (None)

void UUI_ModPage_C::SetUnavailableState(bool Avaiable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_IsValid_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SetUnavailableState");

	Params::UUI_ModPage_C_SetUnavailableState_Params Parms{};

	Parms.Avaiable = Avaiable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.InitializeForServerMods
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::InitializeForServerMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "InitializeForServerMods");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.LaunchCommentsURL
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (None)
// bool                               CallFunc_CanLaunchURL_ReturnValue                                (None)
// bool                               CallFunc_CanLaunchURL_ReturnValue_1                              (None)

void UUI_ModPage_C::LaunchCommentsURL(const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_CanLaunchURL_ReturnValue, bool CallFunc_CanLaunchURL_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "LaunchCommentsURL");

	Params::UUI_ModPage_C_LaunchCommentsURL_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_CanLaunchURL_ReturnValue = CallFunc_CanLaunchURL_ReturnValue;
	Parms.CallFunc_CanLaunchURL_ReturnValue_1 = CallFunc_CanLaunchURL_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.BackFromZoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BackFromZoom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BackFromZoom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.ActionSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (None)
// enum class EViewState              State                                                            (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsVisible_ReturnValue                                   (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (None)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (None)

void UUI_ModPage_C::ActionSwitch(const struct FKey& Key, enum class EViewState State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsVisible_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "ActionSwitch");

	Params::UUI_ModPage_C_ActionSwitch_Params Parms{};

	Parms.Key = Key;
	Parms.State = State;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.PlayAnimationThumbnail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AlreadyLoaded                                                    (None)
// bool                               Temp_bool_Variable                                               (None)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (None)

void UUI_ModPage_C::PlayAnimationThumbnail(bool AlreadyLoaded, bool Temp_bool_Variable, class UWidgetAnimation* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "PlayAnimationThumbnail");

	Params::UUI_ModPage_C_PlayAnimationThumbnail_Params Parms{};

	Parms.AlreadyLoaded = AlreadyLoaded;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.FindThumbnail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)

void UUI_ModPage_C::FindThumbnail(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "FindThumbnail");

	Params::UUI_ModPage_C_FindThumbnail_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.SetThumbnailImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_ModPage_C::SetThumbnailImage(class UTexture2DDynamic* Texture, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SetThumbnailImage");

	Params::UUI_ModPage_C_SetThumbnailImage_Params Parms{};

	Parms.Texture = Texture;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.PlayStartinAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_ModPage_C::PlayStartinAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "PlayStartinAnimation");

	Params::UUI_ModPage_C_PlayStartinAnimation_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.UpdateUnistallButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (None)
// enum class ESlateVisibility        Temp_byte_Variable                                               (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (None)

void UUI_ModPage_C::UpdateUnistallButtonState(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateUnistallButtonState");

	Params::UUI_ModPage_C_UpdateUnistallButtonState_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.AssignLastUpdatedInformation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              CallFunc_GetDay_ReturnValue                                      (None)
// int32                              CallFunc_GetYear_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (SimpleDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (AssetRegistrySearchable, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// int32                              CallFunc_GetMonth_ReturnValue                                    (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ContainsInstancedReference, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UUI_ModPage_C::AssignLastUpdatedInformation(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetDay_ReturnValue, int32 CallFunc_GetYear_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, int32 CallFunc_GetMonth_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "AssignLastUpdatedInformation");

	Params::UUI_ModPage_C_AssignLastUpdatedInformation_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDay_ReturnValue = CallFunc_GetDay_ReturnValue;
	Parms.CallFunc_GetYear_ReturnValue = CallFunc_GetYear_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_GetMonth_ReturnValue = CallFunc_GetMonth_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.Init All Widget Refs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)

void UUI_ModPage_C::Init_All_Widget_Refs(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Init All Widget Refs");

	Params::UUI_ModPage_C_Init_All_Widget_Refs_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.UpdateAllThemeSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::UpdateAllThemeSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateAllThemeSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.CloseBNavigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (None)
// class UWidget*                     ReturnValue                                                      (None)

void UUI_ModPage_C::CloseBNavigation(enum class EUINavigation Navigation, class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CloseBNavigation");

	Params::UUI_ModPage_C_CloseBNavigation_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.InstallBCustomNavigation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (None)
// class UWidget*                     ReturnValue                                                      (ZeroConstructor)
// TArray<class UUI_StoreMenu_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ZeroConstructor)
// class UUI_StoreMenu_C*             CallFunc_Array_Get_Item                                          (None)

void UUI_ModPage_C::InstallBCustomNavigation(enum class EUINavigation Navigation, class UWidget* ReturnValue, const TArray<class UUI_StoreMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_StoreMenu_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "InstallBCustomNavigation");

	Params::UUI_ModPage_C_InstallBCustomNavigation_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.SetSubCategories
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (None)
// class UUI_Category_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor)
// struct FCategory                   CallFunc_Array_Get_Item                                          (BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (None)

void UUI_ModPage_C::SetSubCategories(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UUI_Category_C* CallFunc_Create_ReturnValue, const struct FCategory& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SetSubCategories");

	Params::UUI_ModPage_C_SetSubCategories_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.CheckIfHideReadMoreButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (AssetRegistrySearchable, SimpleDisplay, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (None)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (None)

void UUI_ModPage_C::CheckIfHideReadMoreButton(const class FString& Text, int32 CallFunc_Multiply_IntInt_ReturnValue, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CheckIfHideReadMoreButton");

	Params::UUI_ModPage_C_CheckIfHideReadMoreButton_Params Parms{};

	Parms.Text = Text;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.ShortenModeDownloads
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int64                              Downloads                                                        (None)
// class FText                        ShortenDownloads                                                 (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FText                        _currentSuffix                                                   (ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// double                             _currentDownloads                                                (None)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (None)
// int32                              CallFunc_FTrunc_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (None)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (AutoWeak, ContainsInstancedReference, Protected, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUI_ModPage_C::ShortenModeDownloads(int64 Downloads, class FText ShortenDownloads, class FText _currentSuffix, double _currentDownloads, int32 CallFunc_Conv_Int64ToInt_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, double CallFunc_Multiply_IntFloat_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "ShortenModeDownloads");

	Params::UUI_ModPage_C_ShortenModeDownloads_Params Parms{};

	Parms.Downloads = Downloads;
	Parms.ShortenDownloads = ShortenDownloads;
	Parms._currentSuffix = _currentSuffix;
	Parms._currentDownloads = _currentDownloads;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.UpdateScreenshotImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ImageIndex                                                       (None)
// bool                               Temp_bool_Variable                                               (None)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor)
// class UTexture2DDynamic*           CallFunc_Array_Get_Item                                          (ZeroConstructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (ZeroConstructor, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (None)

void UUI_ModPage_C::UpdateScreenshotImage(int32 ImageIndex, bool Temp_bool_Variable, class UObject* Temp_object_Variable, class UTexture2DDynamic* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateScreenshotImage");

	Params::UUI_ModPage_C_UpdateScreenshotImage_Params Parms{};

	Parms.ImageIndex = ImageIndex;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.AssignDateAddedInformation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              CallFunc_GetDay_ReturnValue                                      (None)
// int32                              CallFunc_GetYear_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (AssetRegistrySearchable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ContainsInstancedReference, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// int32                              CallFunc_GetMonth_ReturnValue                                    (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UUI_ModPage_C::AssignDateAddedInformation(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetDay_ReturnValue, int32 CallFunc_GetYear_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, int32 CallFunc_GetMonth_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "AssignDateAddedInformation");

	Params::UUI_ModPage_C_AssignDateAddedInformation_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDay_ReturnValue = CallFunc_GetDay_ReturnValue;
	Parms.CallFunc_GetYear_ReturnValue = CallFunc_GetYear_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_GetMonth_ReturnValue = CallFunc_GetMonth_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.InitModPageDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (None)
// bool                               CallFunc_InitializeModView_ReturnValue                           (None)

void UUI_ModPage_C::InitModPageDefault(class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_InitializeModView_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "InitModPageDefault");

	Params::UUI_ModPage_C_InitModPageDefault_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_InitializeModView_ReturnValue = CallFunc_InitializeModView_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// struct FPointerEvent               MouseEvent                                                       (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// struct FEventReply                 ReturnValue                                                      (None)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UUI_ModPage_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent, const struct FEventReply& ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnMouseButtonDown");

	Params::UUI_ModPage_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue = CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.OnFail_13897D64427114E2F64F66A69ECC1173
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)

void UUI_ModPage_C::OnFail_13897D64427114E2F64F66A69ECC1173(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnFail_13897D64427114E2F64F66A69ECC1173");

	Params::UUI_ModPage_C_OnFail_13897D64427114E2F64F66A69ECC1173_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.OnSuccess_13897D64427114E2F64F66A69ECC1173
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)

void UUI_ModPage_C::OnSuccess_13897D64427114E2F64F66A69ECC1173(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnSuccess_13897D64427114E2F64F66A69ECC1173");

	Params::UUI_ModPage_C_OnSuccess_13897D64427114E2F64F66A69ECC1173_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.OnFail_C0E5239F4CDF977407A263886857339A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)

void UUI_ModPage_C::OnFail_C0E5239F4CDF977407A263886857339A(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnFail_C0E5239F4CDF977407A263886857339A");

	Params::UUI_ModPage_C_OnFail_C0E5239F4CDF977407A263886857339A_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.OnSuccess_C0E5239F4CDF977407A263886857339A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)

void UUI_ModPage_C::OnSuccess_C0E5239F4CDF977407A263886857339A(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnSuccess_C0E5239F4CDF977407A263886857339A");

	Params::UUI_ModPage_C_OnSuccess_C0E5239F4CDF977407A263886857339A_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.OnFail_FC28BA524F43B59D65346B94C5AD9301
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)

void UUI_ModPage_C::OnFail_FC28BA524F43B59D65346B94C5AD9301(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnFail_FC28BA524F43B59D65346B94C5AD9301");

	Params::UUI_ModPage_C_OnFail_FC28BA524F43B59D65346B94C5AD9301_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.OnSuccess_FC28BA524F43B59D65346B94C5AD9301
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (None)

void UUI_ModPage_C::OnSuccess_FC28BA524F43B59D65346B94C5AD9301(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnSuccess_FC28BA524F43B59D65346B94C5AD9301");

	Params::UUI_ModPage_C_OnSuccess_FC28BA524F43B59D65346B94C5AD9301_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.OnSearch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Search_Input                                                     (None)

void UUI_ModPage_C::OnSearch(class FText Search_Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnSearch");

	Params::UUI_ModPage_C_OnSearch_Params Parms{};

	Parms.Search_Input = Search_Input;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.UpdateSearch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SearchInput                                                      (None)

void UUI_ModPage_C::UpdateSearch(class FText SearchInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateSearch");

	Params::UUI_ModPage_C_UpdateSearch_Params Parms{};

	Parms.SearchInput = SearchInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.Animation_UpdateThumbnail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_Mod                                                          (None)

void UUI_ModPage_C::Animation_UpdateThumbnail(class UImage* IMG_Mod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Animation_UpdateThumbnail");

	Params::UUI_ModPage_C_Animation_UpdateThumbnail_Params Parms{};

	Parms.IMG_Mod = IMG_Mod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__ModPage_NextImage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__ModPage_NextImage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__ModPage_NextImage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__ModPage_PrevImage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__ModPage_PrevImage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__ModPage_PrevImage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__ModPage_InstallButton_K2Node_ComponentBoundEvent_3_OnClickInstall_B__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__ModPage_InstallButton_K2Node_ComponentBoundEvent_3_OnClickInstall_B__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__ModPage_InstallButton_K2Node_ComponentBoundEvent_3_OnClickInstall_B__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__ModPage_Button_208_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__ModPage_Button_208_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__ModPage_Button_208_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__ModPage_Button_208_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__ModPage_Button_208_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__ModPage_Button_208_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__ModPage_ImageZoom_B_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__ModPage_ImageZoom_B_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__ModPage_ImageZoom_B_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__ModPage_GameImages_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__ModPage_GameImages_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__ModPage_GameImages_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.Event Next Image
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::Event_Next_Image()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Event Next Image");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.Event Previous Image
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::Event_Previous_Image()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Event Previous Image");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.Event Go Back
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::Event_Go_Back()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Event Go Back");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.UpdateInstallSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::UpdateInstallSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UpdateInstallSlot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__UI_ModPage_Button_Uninstall_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__UI_ModPage_Button_Uninstall_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__UI_ModPage_Button_Uninstall_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__UI_ModPage_UI_Button_Ark_Blue_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__UI_ModPage_UI_Button_Ark_Blue_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__UI_ModPage_UI_Button_Ark_Blue_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.DownloadThumbnailManually
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::DownloadThumbnailManually()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "DownloadThumbnailManually");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.ButtonCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (None)
// enum class EViewState              State                                                            (None)

void UUI_ModPage_C::ButtonCall(const struct FKey& Key, enum class EViewState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "ButtonCall");

	Params::UUI_ModPage_C_ButtonCall_Params Parms{};

	Parms.Key = Key;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.BindControllerAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BindControllerAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BindControllerAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.Install Button
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::Install_Button()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Install Button");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.UninstallButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::UninstallButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "UninstallButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__UI_ModPage_Button_Comments_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__UI_ModPage_Button_Comments_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__UI_ModPage_Button_Comments_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.OpenComments
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::OpenComments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OpenComments");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.DestroyUICommentsPrompt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::DestroyUICommentsPrompt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "DestroyUICommentsPrompt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.OnCategoryResults
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCategory>           Categories                                                       (None)

void UUI_ModPage_C::OnCategoryResults(const TArray<struct FCategory>& Categories)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnCategoryResults");

	Params::UUI_ModPage_C_OnCategoryResults_Params Parms{};

	Parms.Categories = Categories;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.OnCategoryError
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (None)

void UUI_ModPage_C::OnCategoryError(const struct FCFCoreError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnCategoryError");

	Params::UUI_ModPage_C_OnCategoryError_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.LoadAllScreenshots
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::LoadAllScreenshots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "LoadAllScreenshots");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.Update Button
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::Update_Button()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Update Button");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__GameSlot_InstallButton_K2Node_ComponentBoundEvent_2_OnClickUpdate_B__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__GameSlot_InstallButton_K2Node_ComponentBoundEvent_2_OnClickUpdate_B__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__GameSlot_InstallButton_K2Node_ComponentBoundEvent_2_OnClickUpdate_B__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.Download Screenshots
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::Download_Screenshots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Download Screenshots");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__ModPage_Report_B_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__ModPage_Report_B_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__ModPage_Report_B_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.PullDescription
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::PullDescription()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "PullDescription");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.OnDescriptionError
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (None)

void UUI_ModPage_C::OnDescriptionError(const struct FCFCoreError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnDescriptionError");

	Params::UUI_ModPage_C_OnDescriptionError_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Description                                                      (None)

void UUI_ModPage_C::CustomEvent_0(const class FString& Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CustomEvent_0");

	Params::UUI_ModPage_C_CustomEvent_0_Params Parms{};

	Parms.Description = Description;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Temp_user_token                                                  (None)

void UUI_ModPage_C::CustomEvent_3(const class FString& Temp_user_token)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CustomEvent_3");

	Params::UUI_ModPage_C_CustomEvent_3_Params Parms{};

	Parms.Temp_user_token = Temp_user_token;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.CustomEvent_4
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (None)

void UUI_ModPage_C::CustomEvent_4(const struct FCFCoreError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CustomEvent_4");

	Params::UUI_ModPage_C_CustomEvent_4_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.Event On Uninstall Aprroved
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::Event_On_Uninstall_Aprroved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Event On Uninstall Aprroved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.CheckDiskSpaceToInstall
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::CheckDiskSpaceToInstall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CheckDiskSpaceToInstall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.CustomEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModsDirInfo                ModsDirInfo                                                      (None)

void UUI_ModPage_C::CustomEvent(const struct FModsDirInfo& ModsDirInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CustomEvent");

	Params::UUI_ModPage_C_CustomEvent_Params Parms{};

	Parms.ModsDirInfo = ModsDirInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.CustomEvent_1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (None)

void UUI_ModPage_C::CustomEvent_1(const struct FCFCoreError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "CustomEvent_1");

	Params::UUI_ModPage_C_CustomEvent_1_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.PlayNotEnoughAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::PlayNotEnoughAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "PlayNotEnoughAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.BndEvt__UI_ModPage_Button_ModInstalled_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModPage_C::BndEvt__UI_ModPage_Button_ModInstalled_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "BndEvt__UI_ModPage_Button_ModInstalled_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModPage.UI_ModPage_C.InitModByID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ModId                                                            (None)

void UUI_ModPage_C::InitModByID(int64 ModId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "InitModByID");

	Params::UUI_ModPage_C_InitModByID_Params Parms{};

	Parms.ModId = ModId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.SuccessIGuess
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreMod                  Mod                                                              (None)

void UUI_ModPage_C::SuccessIGuess(const struct FCFCoreMod& Mod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "SuccessIGuess");

	Params::UUI_ModPage_C_SuccessIGuess_Params Parms{};

	Parms.Mod = Mod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.How could we possibly ever fail
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (None)

void UUI_ModPage_C::How_could_we_possibly_ever_fail(const struct FCFCoreError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "How could we possibly ever fail");

	Params::UUI_ModPage_C_How_could_we_possibly_ever_fail_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UUI_ModPage_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "Tick");

	Params::UUI_ModPage_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.ExecuteUbergraph_UI_ModPage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class UUI_Prompt_Uninstall_C*      CallFunc_Create_ReturnValue                                      (Edit, ZeroConstructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (AssetRegistrySearchable, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (Edit, ZeroConstructor)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (Edit, ZeroConstructor)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               Temp_bool_Variable                                               (None)
// class FString                      Temp_string_Variable                                             (ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (Edit, ZeroConstructor)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_2                                     (Edit, ZeroConstructor)
// int32                              Temp_int_Variable                                                (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (Edit, ZeroConstructor)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_3                                     (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (Edit, ZeroConstructor)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_1                        (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (Edit, ZeroConstructor)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_2                        (Edit, ZeroConstructor)
// int32                              Temp_int_Variable_1                                              (None)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (None)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue_3                        (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (Edit, ZeroConstructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class FText                        K2Node_Event_Search_Input                                        (SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class FText                        K2Node_Event_SearchInput                                         (AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class UImage*                      K2Node_CustomEvent_IMG_Mod                                       (Edit, ZeroConstructor)
// struct FModAsset                   CallFunc_Array_Get_Item                                          (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (Edit, ZeroConstructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (Edit, ZeroConstructor)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_4                        (Edit, ZeroConstructor)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (Edit, ZeroConstructor)
// class UTexture2DDynamic*           Temp_object_Variable                                             (Edit, ZeroConstructor)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (Edit, ZeroConstructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (Edit, ZeroConstructor)
// struct FKey                        K2Node_CustomEvent_Key                                           (AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// enum class EViewState              K2Node_CustomEvent_State                                         (None)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_4                                     (Edit, ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (Edit, ZeroConstructor)
// bool                               CallFunc_SubscribeViewToEvents_ReturnValue                       (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue_1                             (Edit, ZeroConstructor)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (None)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (None)
// TArray<struct FCategory>           K2Node_CustomEvent_categories                                    (AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (None)
// struct FCategory                   CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue_2                             (Edit, ZeroConstructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (None)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// struct FCFCoreError                K2Node_CustomEvent_error_4                                       (SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ZeroConstructor)
// bool                               CallFunc_CanGoToNextImage_ReturnValue                            (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (Edit, ZeroConstructor)
// bool                               CallFunc_CanGoToPreviousImage_ReturnValue                        (None)
// class UUI_Prompt_GoToComments_C*   CallFunc_Create_ReturnValue_1                                    (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (None)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (Edit, ZeroConstructor)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue_5                        (Edit, ZeroConstructor)
// class UTexture2DDynamic*           CallFunc_Array_Get_Item_2                                        (Edit, ZeroConstructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (Edit, ZeroConstructor, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_5                                     (Edit, ZeroConstructor)
// class UTexture2DDynamic*           Temp_object_Variable_1                                           (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (None)
// struct FCFCoreError                K2Node_CustomEvent_error_3                                       (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (Edit, ZeroConstructor)
// class FString                      K2Node_CustomEvent_description                                   (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class FString                      K2Node_Select_Default                                            (SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (Edit, ZeroConstructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// class FString                      K2Node_CustomEvent_temp_user_token                               (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ContainsInstancedReference, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// struct FCFCoreError                K2Node_CustomEvent_error_2                                       (SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (AssetRegistrySearchable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (Edit, ZeroConstructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ContainsInstancedReference, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (Edit, ZeroConstructor)
// bool                               CallFunc_CanLaunchURL_ReturnValue                                (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_StringLimit_NewString                                   (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_StringLimit_NewString_1                                 (AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// struct FModsDirInfo                K2Node_CustomEvent_ModsDirInfo                                   (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// struct FCFCoreError                K2Node_CustomEvent_error_1                                       (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (Edit, ZeroConstructor)
// class UUI_ZoomImage_C*             CallFunc_Create_ReturnValue_2                                    (Edit, ZeroConstructor)
// int64                              K2Node_CustomEvent_modId                                         (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (Edit, ZeroConstructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (Edit, ZeroConstructor)
// int32                              Temp_int_Variable_2                                              (None)
// struct FCFCoreMod                  K2Node_CustomEvent_mod                                           (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (None)
// class UTexture2DDynamic*           Temp_object_Variable_2                                           (None)
// bool                               CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace        (None)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)

void UUI_ModPage_C::ExecuteUbergraph_UI_ModPage(int32 EntryPoint, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UUI_Prompt_Uninstall_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, const class FString& Temp_string_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UTexture2DDynamic* K2Node_CustomEvent_Texture_2, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UTexture2DDynamic* K2Node_CustomEvent_Texture_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_2, int32 Temp_int_Variable_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, int32 CallFunc_Add_IntInt_ReturnValue, class FText K2Node_Event_Search_Input, class FText K2Node_Event_SearchInput, class UImage* K2Node_CustomEvent_IMG_Mod, const struct FModAsset& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_4, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class UTexture2DDynamic* Temp_object_Variable, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, class UTexture2DDynamic* K2Node_CustomEvent_Texture_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, bool CallFunc_SubscribeViewToEvents_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue_1, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, const TArray<struct FCategory>& K2Node_CustomEvent_categories, bool CallFunc_IsValid_ReturnValue_9, const struct FCategory& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, int32 CallFunc_Conv_Int64ToInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FCFCoreError& K2Node_CustomEvent_error_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_CanGoToNextImage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, bool CallFunc_CanGoToPreviousImage_ReturnValue, class UUI_Prompt_GoToComments_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue_5, class UTexture2DDynamic* CallFunc_Array_Get_Item_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UTexture2DDynamic* K2Node_CustomEvent_Texture_5, class UTexture2DDynamic* Temp_object_Variable_1, bool CallFunc_IsValid_ReturnValue_13, const struct FCFCoreError& K2Node_CustomEvent_error_3, class UTexture2DDynamic* K2Node_CustomEvent_Texture, const class FString& K2Node_CustomEvent_description, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& K2Node_CustomEvent_temp_user_token, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const struct FCFCoreError& K2Node_CustomEvent_error_2, class FText CallFunc_Conv_Int64ToText_ReturnValue, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, bool CallFunc_CanLaunchURL_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, bool CallFunc_IsValid_ReturnValue_14, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_StringLimit_NewString, const class FString& CallFunc_StringLimit_NewString_1, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_4, const struct FModsDirInfo& K2Node_CustomEvent_ModsDirInfo, const struct FCFCoreError& K2Node_CustomEvent_error_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class UUI_ZoomImage_C* CallFunc_Create_ReturnValue_2, int64 K2Node_CustomEvent_modId, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32 Temp_int_Variable_2, const struct FCFCoreMod& K2Node_CustomEvent_mod, const struct FCFCoreError& K2Node_CustomEvent_error, class UTexture2DDynamic* Temp_object_Variable_2, bool CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace, int32 CallFunc_Array_Add_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "ExecuteUbergraph_UI_ModPage");

	Params::UUI_ModPage_C_ExecuteUbergraph_UI_ModPage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_Texture_2 = K2Node_CustomEvent_Texture_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_Texture_3 = K2Node_CustomEvent_Texture_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_2 = CallFunc_GetEngineSubsystem_ReturnValue_2;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_3 = CallFunc_GetEngineSubsystem_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_Search_Input = K2Node_Event_Search_Input;
	Parms.K2Node_Event_SearchInput = K2Node_Event_SearchInput;
	Parms.K2Node_CustomEvent_IMG_Mod = K2Node_CustomEvent_IMG_Mod;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_DownloadImage_ReturnValue = CallFunc_DownloadImage_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_4 = CallFunc_GetEngineSubsystem_ReturnValue_4;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_Key = K2Node_CustomEvent_Key;
	Parms.K2Node_CustomEvent_State = K2Node_CustomEvent_State;
	Parms.K2Node_CustomEvent_Texture_4 = K2Node_CustomEvent_Texture_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_SubscribeViewToEvents_ReturnValue = CallFunc_SubscribeViewToEvents_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_DownloadImage_ReturnValue_1 = CallFunc_DownloadImage_ReturnValue_1;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_CustomEvent_categories = K2Node_CustomEvent_categories;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_DownloadImage_ReturnValue_2 = CallFunc_DownloadImage_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_error_4 = K2Node_CustomEvent_error_4;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_CanGoToNextImage_ReturnValue = CallFunc_CanGoToNextImage_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_CanGoToPreviousImage_ReturnValue = CallFunc_CanGoToPreviousImage_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_5 = CallFunc_GetEngineSubsystem_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_CustomEvent_Texture_5 = K2Node_CustomEvent_Texture_5;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.K2Node_CustomEvent_error_3 = K2Node_CustomEvent_error_3;
	Parms.K2Node_CustomEvent_Texture = K2Node_CustomEvent_Texture;
	Parms.K2Node_CustomEvent_description = K2Node_CustomEvent_description;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_CustomEvent_temp_user_token = K2Node_CustomEvent_temp_user_token;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.K2Node_CustomEvent_error_2 = K2Node_CustomEvent_error_2;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.K2Node_CustomEvent_Texture_1 = K2Node_CustomEvent_Texture_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.CallFunc_CanLaunchURL_ReturnValue = CallFunc_CanLaunchURL_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_StringLimit_NewString = CallFunc_StringLimit_NewString;
	Parms.CallFunc_StringLimit_NewString_1 = CallFunc_StringLimit_NewString_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;
	Parms.K2Node_CustomEvent_ModsDirInfo = K2Node_CustomEvent_ModsDirInfo;
	Parms.K2Node_CustomEvent_error_1 = K2Node_CustomEvent_error_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.K2Node_CustomEvent_modId = K2Node_CustomEvent_modId;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.K2Node_CustomEvent_mod = K2Node_CustomEvent_mod;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace = CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModPage.UI_ModPage_C.OnReturnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModPage_C::OnReturnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModPage_C", "OnReturnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


