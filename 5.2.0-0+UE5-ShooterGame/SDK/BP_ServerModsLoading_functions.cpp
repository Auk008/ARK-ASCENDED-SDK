#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_ServerModsLoading.BP_ServerModsLoading_C
// (None)

class UClass* UBP_ServerModsLoading_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ServerModsLoading_C");

	return Clss;
}


// BP_ServerModsLoading_C BP_ServerModsLoading.Default__BP_ServerModsLoading_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ServerModsLoading_C* UBP_ServerModsLoading_C::GetDefaultObj()
{
	static class UBP_ServerModsLoading_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ServerModsLoading_C*>(UBP_ServerModsLoading_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.Update Downloading Proggress Text_New
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ModId                                                            (None)
// int64                              FileId                                                           (None)
// enum class ELibraryProgressState   PregressState                                                    (None)
// int32                              Progress                                                         (None)
// int64                              TransferredBytes                                                 (None)
// enum class ELibraryProgressState   Temp_byte_Variable                                               (None)
// struct FCFCoreFileSize             CallFunc_BreakFileSize_ReturnValue                               (None)
// struct FCFCoreFileSize             CallFunc_BreakFileSize_ReturnValue_1                             (None)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// int32                              CallFunc_Len_ReturnValue                                         (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FString                      CallFunc_SelectString_ReturnValue                                (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (AssetRegistrySearchable, AdvancedDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (AssetRegistrySearchable, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FText                        CallFunc_Format_ReturnValue                                      (AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (ContainsInstancedReference, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (Protected, BlueprintCallable, ExposeOnSpawn, PersistentInstance, UObjectWrapper)
// class FText                        CallFunc_Format_ReturnValue_1                                    (AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, ExposeOnSpawn, PersistentInstance, UObjectWrapper)
// class FText                        K2Node_Select_Default                                            (None)

void UBP_ServerModsLoading_C::Update_Downloading_Proggress_Text_New(int64 ModId, int64 FileId, enum class ELibraryProgressState PregressState, int32 Progress, int64 TransferredBytes, enum class ELibraryProgressState Temp_byte_Variable, const struct FCFCoreFileSize& CallFunc_BreakFileSize_ReturnValue, const struct FCFCoreFileSize& CallFunc_BreakFileSize_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "Update Downloading Proggress Text_New");

	Params::UBP_ServerModsLoading_C_Update_Downloading_Proggress_Text_New_Params Parms{};

	Parms.ModId = ModId;
	Parms.FileId = FileId;
	Parms.PregressState = PregressState;
	Parms.Progress = Progress;
	Parms.TransferredBytes = TransferredBytes;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_BreakFileSize_ReturnValue = CallFunc_BreakFileSize_ReturnValue;
	Parms.CallFunc_BreakFileSize_ReturnValue_1 = CallFunc_BreakFileSize_ReturnValue_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.UpdateTexts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, NativeAccessSpecifierPublic)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBP_ServerModsLoading_C::UpdateTexts(int32 CallFunc_Array_Length_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "UpdateTexts");

	Params::UBP_ServerModsLoading_C_UpdateTexts_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.CalculateTatalModsSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Array_Index_Variable_1                                  (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (None)
// struct FCFCoreMod                  CallFunc_Array_Get_Item                                          (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// struct FFile                       CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// int64                              CallFunc_Add_Int64Int64_ReturnValue                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (None)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)

void UBP_ServerModsLoading_C::CalculateTatalModsSize(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, const struct FCFCoreMod& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFile& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int64 CallFunc_Add_Int64Int64_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "CalculateTatalModsSize");

	Params::UBP_ServerModsLoading_C_CalculateTatalModsSize_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_Int64Int64_ReturnValue = CallFunc_Add_Int64Int64_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.UpdateProgressBar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              CallFunc_Divide_Int64Int64_ReturnValue                           (None)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_1                         (None)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue_1                           (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (None)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (None)
// int32                              CallFunc_Round_ReturnValue                                       (None)
// int32                              CallFunc_Clamp_ReturnValue                                       (None)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (Protected, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ContainsInstancedReference, Protected, BlueprintCallable, TextExportTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (None)

void UBP_ServerModsLoading_C::UpdateProgressBar(int64 CallFunc_Divide_Int64Int64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, int64 CallFunc_Divide_Int64Int64_ReturnValue_1, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "UpdateProgressBar");

	Params::UBP_ServerModsLoading_C_UpdateProgressBar_Params Parms{};

	Parms.CallFunc_Divide_Int64Int64_ReturnValue = CallFunc_Divide_Int64Int64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Divide_Int64Int64_ReturnValue_1 = CallFunc_Divide_Int64Int64_ReturnValue_1;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue_1 = CallFunc_Conv_Int64ToInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.GetDelegate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 BackDelegate                                                     (ZeroConstructor)
// FDelegateProperty_                 CompletedDelegate                                                (ZeroConstructor)
// FDelegateProperty_                 ErrorDelegate                                                    (None)

void UBP_ServerModsLoading_C::GetDelegate(FDelegateProperty_ BackDelegate, FDelegateProperty_ CompletedDelegate, FDelegateProperty_ ErrorDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "GetDelegate");

	Params::UBP_ServerModsLoading_C_GetDelegate_Params Parms{};

	Parms.BackDelegate = BackDelegate;
	Parms.CompletedDelegate = CompletedDelegate;
	Parms.ErrorDelegate = ErrorDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.CheckIfAllDownloaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (None)

void UBP_ServerModsLoading_C::CheckIfAllDownloaded(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "CheckIfAllDownloaded");

	Params::UBP_ServerModsLoading_C_CheckIfAllDownloaded_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ParsingModsFile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreMod                  Mod                                                              (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// struct FFile                       CallFunc_Array_Get_Item                                          (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)

void UBP_ServerModsLoading_C::ParsingModsFile(const struct FCFCoreMod& Mod, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FFile& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ParsingModsFile");

	Params::UBP_ServerModsLoading_C_ParsingModsFile_Params Parms{};

	Parms.Mod = Mod;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ParsingMods
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// struct FCFCoreMod                  CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void UBP_ServerModsLoading_C::ParsingMods(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCFCoreMod& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ParsingMods");

	Params::UBP_ServerModsLoading_C_ParsingMods_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.Update Downloading Proggress Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ModId                                                            (None)
// int64                              FileId                                                           (None)
// enum class ELibraryProgressState   PregressState                                                    (None)
// int32                              Progress                                                         (None)
// int64                              TransferredBytes                                                 (None)
// enum class ELibraryProgressState   Temp_byte_Variable                                               (None)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (None)
// int32                              CallFunc_Len_ReturnValue                                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// class FString                      CallFunc_SelectString_ReturnValue                                (ContainsInstancedReference, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        CallFunc_Format_ReturnValue                                      (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFile                       CallFunc_Map_Find_Value                                          (ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CallFunc_Map_Find_ReturnValue                                    (None)
// struct FCFCoreMod                  CallFunc_Map_Find_Value_1                                        (AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (None)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue_1                           (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        CallFunc_Format_ReturnValue_1                                    (ContainsInstancedReference, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FText                        K2Node_Select_Default                                            (None)

void UBP_ServerModsLoading_C::Update_Downloading_Proggress_Text(int64 ModId, int64 FileId, enum class ELibraryProgressState PregressState, int32 Progress, int64 TransferredBytes, enum class ELibraryProgressState Temp_byte_Variable, int32 CallFunc_Conv_Int64ToInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_Len_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, const struct FFile& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FCFCoreMod& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_MakeLiteralText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "Update Downloading Proggress Text");

	Params::UBP_ServerModsLoading_C_Update_Downloading_Proggress_Text_Params Parms{};

	Parms.ModId = ModId;
	Parms.FileId = FileId;
	Parms.PregressState = PregressState;
	Parms.Progress = Progress;
	Parms.TransferredBytes = TransferredBytes;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue_1 = CallFunc_Conv_Int64ToInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.SetDounloadingCountText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (None)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (AutoWeak, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ContainsInstancedReference, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBP_ServerModsLoading_C::SetDounloadingCountText(int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "SetDounloadingCountText");

	Params::UBP_ServerModsLoading_C_SetDounloadingCountText_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ModInstallingError
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)

void UBP_ServerModsLoading_C::ModInstallingError(const struct FCFCoreError& Error, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ModInstallingError");

	Params::UBP_ServerModsLoading_C_ModInstallingError_Params Parms{};

	Parms.Error = Error;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ModInstallingSuccess
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInstalledMod               InstalledMod                                                     (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)

void UBP_ServerModsLoading_C::ModInstallingSuccess(const struct FInstalledMod& InstalledMod, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ModInstallingSuccess");

	Params::UBP_ServerModsLoading_C_ModInstallingSuccess_Params Parms{};

	Parms.InstalledMod = InstalledMod;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ModInstallingProgress
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLibraryProgress            Progress                                                         (ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// TArray<int64>                      CallFunc_Map_Values_Values                                       (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int64                              CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int64                              CallFunc_Add_Int64Int64_ReturnValue                              (None)

void UBP_ServerModsLoading_C::ModInstallingProgress(const struct FLibraryProgress& Progress, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<int64>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, int64 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int64 CallFunc_Add_Int64Int64_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ModInstallingProgress");

	Params::UBP_ServerModsLoading_C_ModInstallingProgress_Params Parms{};

	Parms.Progress = Progress;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_Int64Int64_ReturnValue = CallFunc_Add_Int64Int64_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.Downloading
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// struct FCFCoreMod                  CallFunc_Array_Get_Item                                          (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// struct FCFCoreMod                  CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void UBP_ServerModsLoading_C::Downloading(int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCFCoreMod& CallFunc_Array_Get_Item, const struct FCFCoreMod& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "Downloading");

	Params::UBP_ServerModsLoading_C_Downloading_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.StartDownload
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ServerName                                                       (AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// TArray<struct FCFCoreMod>          ModsToDownload                                                   (None)

void UBP_ServerModsLoading_C::StartDownload(class FText ServerName, const TArray<struct FCFCoreMod>& ModsToDownload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "StartDownload");

	Params::UBP_ServerModsLoading_C_StartDownload_Params Parms{};

	Parms.ServerName = ServerName;
	Parms.ModsToDownload = ModsToDownload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_ServerModsLoading_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.BndEvt__BP_ServerModsLoading_UI_Button_Ark_Back_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ServerModsLoading_C::BndEvt__BP_ServerModsLoading_UI_Button_Ark_Back_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "BndEvt__BP_ServerModsLoading_UI_Button_Ark_Back_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.OnSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsLoading_C::OnSuccess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "OnSuccess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.OnError
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (None)

void UBP_ServerModsLoading_C::OnError(const struct FCFCoreError& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "OnError");

	Params::UBP_ServerModsLoading_C_OnError_Params Parms{};

	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ControllerAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (None)
// enum class EViewState              State                                                            (None)

void UBP_ServerModsLoading_C::ControllerAction(const struct FKey& Key, enum class EViewState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ControllerAction");

	Params::UBP_ServerModsLoading_C_ControllerAction_Params Parms{};

	Parms.Key = Key;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (None)
// float                              InDeltaTime                                                      (None)

void UBP_ServerModsLoading_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "Tick");

	Params::UBP_ServerModsLoading_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.DelayComplitedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsLoading_C::DelayComplitedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "DelayComplitedEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ExecuteUbergraph_BP_ServerModsLoading
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
// struct FCFCoreMod                  CallFunc_Array_Get_Item                                          (SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor)
// struct FKey                        K2Node_CustomEvent_Key                                           (None)
// enum class EViewState              K2Node_CustomEvent_State                                         (None)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_1                        (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (None)
// float                              K2Node_Event_InDeltaTime                                         (None)

void UBP_ServerModsLoading_C::ExecuteUbergraph_BP_ServerModsLoading(int32 EntryPoint, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FCFCoreError& K2Node_CustomEvent_error, const struct FCFCoreMod& CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ExecuteUbergraph_BP_ServerModsLoading");

	Params::UBP_ServerModsLoading_C_ExecuteUbergraph_BP_ServerModsLoading_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_error = K2Node_CustomEvent_error;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Key = K2Node_CustomEvent_Key;
	Parms.K2Node_CustomEvent_State = K2Node_CustomEvent_State;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ErrorEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsLoading_C::ErrorEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ErrorEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ComplitedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsLoading_C::ComplitedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "ComplitedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsLoading.BP_ServerModsLoading_C.BackEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsLoading_C::BackEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsLoading_C", "BackEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


