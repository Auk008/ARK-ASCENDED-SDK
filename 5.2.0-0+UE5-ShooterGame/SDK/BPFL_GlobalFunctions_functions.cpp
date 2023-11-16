#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_GlobalFunctions.BPFL_GlobalFunctions_C
// (None)

class UClass* UBPFL_GlobalFunctions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_GlobalFunctions_C");

	return Clss;
}


// BPFL_GlobalFunctions_C BPFL_GlobalFunctions.Default__BPFL_GlobalFunctions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_GlobalFunctions_C* UBPFL_GlobalFunctions_C::GetDefaultObj()
{
	static class UBPFL_GlobalFunctions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_GlobalFunctions_C*>(UBPFL_GlobalFunctions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.Is There Enough Space to Install Mod
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int64                              DiskSpace                                                        (None)
// struct FInstallProgressMod         ModToInstall                                                     (Edit, ZeroConstructor, SimpleDisplay, AdvancedDisplay, TextExportTransient, NativeAccessSpecifierPublic)
// class UObject*                     __WorldContext                                                   (None)
// bool                               EnoughSpace                                                      (None)
// struct FCFCoreFileSize             CallFunc_GetModSize_SizeStruct                                   (None)
// class FText                        CallFunc_GetModSize_SizeInText                                   (None)
// int64                              CallFunc_GetModSize_bytes                                        (None)
// bool                               CallFunc_GreaterEqual_Int64Int64_ReturnValue                     (None)

void UBPFL_GlobalFunctions_C::Is_There_Enough_Space_to_Install_Mod(int64 DiskSpace, const struct FInstallProgressMod& ModToInstall, class UObject* __WorldContext, bool EnoughSpace, const struct FCFCoreFileSize& CallFunc_GetModSize_SizeStruct, class FText CallFunc_GetModSize_SizeInText, int64 CallFunc_GetModSize_bytes, bool CallFunc_GreaterEqual_Int64Int64_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "Is There Enough Space to Install Mod");

	Params::UBPFL_GlobalFunctions_C_Is_There_Enough_Space_to_Install_Mod_Params Parms{};

	Parms.DiskSpace = DiskSpace;
	Parms.ModToInstall = ModToInstall;
	Parms.__WorldContext = __WorldContext;
	Parms.EnoughSpace = EnoughSpace;
	Parms.CallFunc_GetModSize_SizeStruct = CallFunc_GetModSize_SizeStruct;
	Parms.CallFunc_GetModSize_SizeInText = CallFunc_GetModSize_SizeInText;
	Parms.CallFunc_GetModSize_bytes = CallFunc_GetModSize_bytes;
	Parms.CallFunc_GreaterEqual_Int64Int64_ReturnValue = CallFunc_GreaterEqual_Int64Int64_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetProcessedBarProgress
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (None)
// enum class ELibraryProgressState   InstallProgressState                                             (None)
// class UObject*                     __WorldContext                                                   (None)
// double                             ReturnValue                                                      (None)
// bool                               MaintainPreviousValue                                            (None)
// double                             Temp_real_Variable                                               (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// double                             Temp_real_Variable_1                                             (None)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (None)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (None)
// double                             Temp_real_Variable_2                                             (None)
// double                             Temp_real_Variable_3                                             (None)
// double                             Temp_real_Variable_4                                             (None)
// double                             Temp_real_Variable_5                                             (None)
// double                             Temp_real_Variable_6                                             (None)
// double                             Temp_real_Variable_7                                             (None)
// double                             Temp_real_Variable_8                                             (None)
// double                             Temp_real_Variable_9                                             (None)
// double                             Temp_real_Variable_10                                            (None)
// enum class ELibraryProgressState   Temp_byte_Variable                                               (None)
// double                             K2Node_Select_Default                                            (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (None)

void UBPFL_GlobalFunctions_C::GetProcessedBarProgress(int32 Amount, enum class ELibraryProgressState InstallProgressState, class UObject* __WorldContext, double ReturnValue, bool MaintainPreviousValue, double Temp_real_Variable, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Conv_IntToDouble_ReturnValue, double Temp_real_Variable_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_7, double Temp_real_Variable_8, double Temp_real_Variable_9, double Temp_real_Variable_10, enum class ELibraryProgressState Temp_byte_Variable, double K2Node_Select_Default, double CallFunc_Divide_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetProcessedBarProgress");

	Params::UBPFL_GlobalFunctions_C_GetProcessedBarProgress_Params Parms{};

	Parms.Amount = Amount;
	Parms.InstallProgressState = InstallProgressState;
	Parms.__WorldContext = __WorldContext;
	Parms.ReturnValue = ReturnValue;
	Parms.MaintainPreviousValue = MaintainPreviousValue;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.Temp_real_Variable_7 = Temp_real_Variable_7;
	Parms.Temp_real_Variable_8 = Temp_real_Variable_8;
	Parms.Temp_real_Variable_9 = Temp_real_Variable_9;
	Parms.Temp_real_Variable_10 = Temp_real_Variable_10;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CreateModPageFromID
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              Mod_ID                                                           (None)
// int32                              DrawUIOnZOrder                                                   (None)
// class UObject*                     __WorldContext                                                   (Edit, ZeroConstructor)
// class UUI_ModPage_C*               ReturnValue                                                      (Edit, ZeroConstructor)
// class UUI_ModPage_C*               CallFunc_Create_ReturnValue                                      (None)

void UBPFL_GlobalFunctions_C::CreateModPageFromID(int64 Mod_ID, int32 DrawUIOnZOrder, class UObject* __WorldContext, class UUI_ModPage_C* ReturnValue, class UUI_ModPage_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "CreateModPageFromID");

	Params::UBPFL_GlobalFunctions_C_CreateModPageFromID_Params Parms{};

	Parms.Mod_ID = Mod_ID;
	Parms.DrawUIOnZOrder = DrawUIOnZOrder;
	Parms.__WorldContext = __WorldContext;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.FormatDownloadNumber
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int64                              Value                                                            (None)
// class UObject*                     __WorldContext                                                   (None)
// class FText                        FinalAmount                                                      (ContainsInstancedReference, SimpleDisplay, NativeAccessSpecifierPublic)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (ContainsInstancedReference, AssetRegistrySearchable, NativeAccessSpecifierPublic)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue                           (None)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_1                          (ContainsInstancedReference, NativeAccessSpecifierPublic)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_1                         (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (AssetRegistrySearchable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_2                          (ContainsInstancedReference, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_2                         (None)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_3                         (None)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_3                          (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_4                          (SimpleDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (AssetRegistrySearchable, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ContainsInstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
// class FString                      CallFunc_GetSubstring_ReturnValue_1                              (Protected, BlueprintCallable, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NativeAccessSpecifierPublic)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (SimpleDisplay, AdvancedDisplay, BlueprintCallable, NativeAccessSpecifierPublic)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (None)
// bool                               CallFunc_Less_Int64Int64_ReturnValue                             (None)
// bool                               CallFunc_Less_Int64Int64_ReturnValue_1                           (None)

void UBPFL_GlobalFunctions_C::FormatDownloadNumber(int64 Value, class UObject* __WorldContext, class FText FinalAmount, class FText CallFunc_Conv_Int64ToText_ReturnValue, int64 CallFunc_Divide_Int64Int64_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue_1, int64 CallFunc_Divide_Int64Int64_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, int64 CallFunc_Divide_Int64Int64_ReturnValue_2, int64 CallFunc_Divide_Int64Int64_ReturnValue_3, class FText CallFunc_Conv_Int64ToText_ReturnValue_3, class FText CallFunc_Conv_Int64ToText_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_GetSubstring_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, class FText CallFunc_Conv_StringToText_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_Less_Int64Int64_ReturnValue, bool CallFunc_Less_Int64Int64_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "FormatDownloadNumber");

	Params::UBPFL_GlobalFunctions_C_FormatDownloadNumber_Params Parms{};

	Parms.Value = Value;
	Parms.__WorldContext = __WorldContext;
	Parms.FinalAmount = FinalAmount;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.CallFunc_Divide_Int64Int64_ReturnValue = CallFunc_Divide_Int64Int64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue_1 = CallFunc_Conv_Int64ToText_ReturnValue_1;
	Parms.CallFunc_Divide_Int64Int64_ReturnValue_1 = CallFunc_Divide_Int64Int64_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue_2 = CallFunc_Conv_Int64ToText_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Divide_Int64Int64_ReturnValue_2 = CallFunc_Divide_Int64Int64_ReturnValue_2;
	Parms.CallFunc_Divide_Int64Int64_ReturnValue_3 = CallFunc_Divide_Int64Int64_ReturnValue_3;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue_3 = CallFunc_Conv_Int64ToText_ReturnValue_3;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue_4 = CallFunc_Conv_Int64ToText_ReturnValue_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_GetSubstring_ReturnValue_1 = CallFunc_GetSubstring_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_Less_Int64Int64_ReturnValue = CallFunc_Less_Int64Int64_ReturnValue;
	Parms.CallFunc_Less_Int64Int64_ReturnValue_1 = CallFunc_Less_Int64Int64_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetModVersion
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
// class UObject*                     __WorldContext                                                   (None)
// class FText                        FinalAmount                                                      (None)

void UBPFL_GlobalFunctions_C::GetModVersion(const struct FInstallProgressMod& ModInfo, class UObject* __WorldContext, class FText FinalAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetModVersion");

	Params::UBPFL_GlobalFunctions_C_GetModVersion_Params Parms{};

	Parms.ModInfo = ModInfo;
	Parms.__WorldContext = __WorldContext;
	Parms.FinalAmount = FinalAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetDownloadCount
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (Edit, ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
// class UObject*                     __WorldContext                                                   (None)
// class FText                        FinalAmount                                                      (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
// class FText                        CallFunc_FormatDownloadNumber_FinalAmount                        (None)

void UBPFL_GlobalFunctions_C::GetDownloadCount(const struct FInstallProgressMod& ModInfo, class UObject* __WorldContext, class FText FinalAmount, class FText CallFunc_FormatDownloadNumber_FinalAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetDownloadCount");

	Params::UBPFL_GlobalFunctions_C_GetDownloadCount_Params Parms{};

	Parms.ModInfo = ModInfo;
	Parms.__WorldContext = __WorldContext;
	Parms.FinalAmount = FinalAmount;
	Parms.CallFunc_FormatDownloadNumber_FinalAmount = CallFunc_FormatDownloadNumber_FinalAmount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetModName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
// class UObject*                     __WorldContext                                                   (None)
// class FString                      Name                                                             (None)

void UBPFL_GlobalFunctions_C::GetModName(const struct FInstallProgressMod& ModInfo, class UObject* __WorldContext, const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetModName");

	Params::UBPFL_GlobalFunctions_C_GetModName_Params Parms{};

	Parms.ModInfo = ModInfo;
	Parms.__WorldContext = __WorldContext;
	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetModSize
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (Edit, ZeroConstructor, Protected, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
// class UObject*                     __WorldContext                                                   (None)
// struct FCFCoreFileSize             SizeStruct                                                       (None)
// class FText                        SizeInText                                                       (SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
// int64                              Bytes                                                            (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// struct FFile                       CallFunc_Array_Get_Item                                          (AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class FString                      CallFunc_FormatFileSize_ReturnValue                              (ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FCFCoreFileSize             CallFunc_BreakFileSize_ReturnValue                               (None)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void UBPFL_GlobalFunctions_C::GetModSize(const struct FInstallProgressMod& ModInfo, class UObject* __WorldContext, const struct FCFCoreFileSize& SizeStruct, class FText SizeInText, int64 Bytes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FFile& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_FormatFileSize_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FCFCoreFileSize& CallFunc_BreakFileSize_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetModSize");

	Params::UBPFL_GlobalFunctions_C_GetModSize_Params Parms{};

	Parms.ModInfo = ModInfo;
	Parms.__WorldContext = __WorldContext;
	Parms.SizeStruct = SizeStruct;
	Parms.SizeInText = SizeInText;
	Parms.Bytes = Bytes;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_FormatFileSize_ReturnValue = CallFunc_FormatFileSize_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_BreakFileSize_ReturnValue = CallFunc_BreakFileSize_ReturnValue;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetAuthorName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstallProgressMod         ModInfo                                                          (Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, NativeAccessSpecifierPublic)
// class UObject*                     __WorldContext                                                   (None)
// class FString                      CombinedAuthorsNames                                             (SimpleDisplay, BlueprintCallable, NativeAccessSpecifierPublic)
// class FString                      Local_TotalAuthors                                               (ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// struct FModAuthor                  CallFunc_Array_Get_Item                                          (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// class FString                      CallFunc_StringLimit_NewString                                   (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (None)

void UBPFL_GlobalFunctions_C::GetAuthorName(const struct FInstallProgressMod& ModInfo, class UObject* __WorldContext, const class FString& CombinedAuthorsNames, const class FString& Local_TotalAuthors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FModAuthor& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_StringLimit_NewString, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "GetAuthorName");

	Params::UBPFL_GlobalFunctions_C_GetAuthorName_Params Parms{};

	Parms.ModInfo = ModInfo;
	Parms.__WorldContext = __WorldContext;
	Parms.CombinedAuthorsNames = CombinedAuthorsNames;
	Parms.Local_TotalAuthors = Local_TotalAuthors;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_StringLimit_NewString = CallFunc_StringLimit_NewString;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CreateButtonStyleFromSingleColor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Color                                                            (None)
// class UObject*                     __WorldContext                                                   (Edit, ZeroConstructor)
// struct FButtonStyle                ButtonStyle                                                      (Edit, ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, NativeAccessSpecifierPublic)
// struct FLinearColor                CallFunc_Add_LinearColorLinearColor_ReturnValue                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierPublic)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (AdvancedDisplay, Protected, NativeAccessSpecifierPublic)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, NativeAccessSpecifierPublic)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (Edit, ZeroConstructor, SimpleDisplay, Protected, NativeAccessSpecifierPublic)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (None)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue_1                 (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (ContainsInstancedReference, AssetRegistrySearchable, Protected, NativeAccessSpecifierPublic)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (AssetRegistrySearchable, Protected, NativeAccessSpecifierPublic)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierPublic)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_3                                   (Edit, ZeroConstructor, Protected, NativeAccessSpecifierPublic)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (None)

void UBPFL_GlobalFunctions_C::CreateButtonStyleFromSingleColor(const struct FLinearColor& Color, class UObject* __WorldContext, const struct FButtonStyle& ButtonStyle, const struct FLinearColor& CallFunc_Add_LinearColorLinearColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "CreateButtonStyleFromSingleColor");

	Params::UBPFL_GlobalFunctions_C_CreateButtonStyleFromSingleColor_Params Parms{};

	Parms.Color = Color;
	Parms.__WorldContext = __WorldContext;
	Parms.ButtonStyle = ButtonStyle;
	Parms.CallFunc_Add_LinearColorLinearColor_ReturnValue = CallFunc_Add_LinearColorLinearColor_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue_1 = CallFunc_Multiply_LinearColorFloat_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.K2Node_MakeStruct_SlateBrush_3 = K2Node_MakeStruct_SlateBrush_3;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.HEXtoByte
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      First_value                                                      (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
// class FString                      Second_value                                                     (ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// class UObject*                     __WorldContext                                                   (None)
// uint8                              InputPin1                                                        (None)
// TArray<class FString>              HexDigits                                                        (AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// TArray<class FString>              K2Node_MakeArray_Array                                           (None)
// int32                              CallFunc_Array_Find_ReturnValue                                  (None)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (None)
// int32                              CallFunc_And_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_And_IntInt_ReturnValue_1                                (None)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (None)

void UBPFL_GlobalFunctions_C::HEXtoByte(const class FString& First_value, const class FString& Second_value, class UObject* __WorldContext, uint8 InputPin1, const TArray<class FString>& HexDigits, const TArray<class FString>& K2Node_MakeArray_Array, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, int32 CallFunc_And_IntInt_ReturnValue, int32 CallFunc_And_IntInt_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "HEXtoByte");

	Params::UBPFL_GlobalFunctions_C_HEXtoByte_Params Parms{};

	Parms.First_value = First_value;
	Parms.Second_value = Second_value;
	Parms.__WorldContext = __WorldContext;
	Parms.InputPin1 = InputPin1;
	Parms.HexDigits = HexDigits;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_And_IntInt_ReturnValue = CallFunc_And_IntInt_ReturnValue;
	Parms.CallFunc_And_IntInt_ReturnValue_1 = CallFunc_And_IntInt_ReturnValue_1;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.HEXtoSRGB
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      String                                                           (ContainsInstancedReference, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// class UObject*                     __WorldContext                                                   (None)
// struct FColor                      Color                                                            (None)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Array_Get_Item                                          (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Array_Get_Item_1                                        (SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Array_Get_Item_2                                        (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Array_Get_Item_3                                        (ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierPublic)
// uint8                              CallFunc_HEXtoByte_InputPin1                                     (None)
// class FString                      CallFunc_Array_Get_Item_4                                        (AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Array_Get_Item_5                                        (AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, NativeAccessSpecifierPublic)
// uint8                              CallFunc_HEXtoByte_InputPin1_1                                   (None)
// class FString                      CallFunc_Array_Get_Item_6                                        (ContainsInstancedReference, SimpleDisplay, Protected, TextExportTransient, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Array_Get_Item_7                                        (None)
// uint8                              CallFunc_HEXtoByte_InputPin1_2                                   (None)
// uint8                              CallFunc_HEXtoByte_InputPin1_3                                   (None)
// struct FColor                      K2Node_MakeStruct_Color                                          (None)

void UBPFL_GlobalFunctions_C::HEXtoSRGB(const class FString& String, class UObject* __WorldContext, const struct FColor& Color, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Array_Get_Item_2, const class FString& CallFunc_Array_Get_Item_3, uint8 CallFunc_HEXtoByte_InputPin1, const class FString& CallFunc_Array_Get_Item_4, const class FString& CallFunc_Array_Get_Item_5, uint8 CallFunc_HEXtoByte_InputPin1_1, const class FString& CallFunc_Array_Get_Item_6, const class FString& CallFunc_Array_Get_Item_7, uint8 CallFunc_HEXtoByte_InputPin1_2, uint8 CallFunc_HEXtoByte_InputPin1_3, const struct FColor& K2Node_MakeStruct_Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "HEXtoSRGB");

	Params::UBPFL_GlobalFunctions_C_HEXtoSRGB_Params Parms{};

	Parms.String = String;
	Parms.__WorldContext = __WorldContext;
	Parms.Color = Color;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_HEXtoByte_InputPin1 = CallFunc_HEXtoByte_InputPin1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_HEXtoByte_InputPin1_1 = CallFunc_HEXtoByte_InputPin1_1;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_HEXtoByte_InputPin1_2 = CallFunc_HEXtoByte_InputPin1_2;
	Parms.CallFunc_HEXtoByte_InputPin1_3 = CallFunc_HEXtoByte_InputPin1_3;
	Parms.K2Node_MakeStruct_Color = K2Node_MakeStruct_Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.SRGBtoHEX
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColor                      Color                                                            (None)
// class UObject*                     __WorldContext                                                   (None)
// class FString                      ReturnValue                                                      (AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// TArray<class FString>              String                                                           (AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// TArray<uint8>                      K2Node_MakeArray_Array                                           (SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NativeAccessSpecifierPublic)
// uint8                              CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class FString                      CallFunc_ByteToHex_ReturnValue                                   (AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NativeAccessSpecifierPublic)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// class FString                      CallFunc_JoinStringArray_ReturnValue                             (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)

void UBPFL_GlobalFunctions_C::SRGBtoHEX(const struct FColor& Color, class UObject* __WorldContext, const class FString& ReturnValue, const TArray<class FString>& String, int32 Temp_int_Array_Index_Variable, const TArray<uint8>& K2Node_MakeArray_Array, uint8 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_ByteToHex_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_JoinStringArray_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "SRGBtoHEX");

	Params::UBPFL_GlobalFunctions_C_SRGBtoHEX_Params Parms{};

	Parms.Color = Color;
	Parms.__WorldContext = __WorldContext;
	Parms.ReturnValue = ReturnValue;
	Parms.String = String;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_ByteToHex_ReturnValue = CallFunc_ByteToHex_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_JoinStringArray_ReturnValue = CallFunc_JoinStringArray_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.ByteToHex
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              InputPin                                                         (None)
// class UObject*                     __WorldContext                                                   (None)
// class FString                      ReturnValue                                                      (AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// TArray<class FString>              HexDigits                                                        (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (None)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (None)
// int32                              CallFunc_And_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_And_IntInt_ReturnValue_1                                (None)
// class FString                      CallFunc_Array_Get_Item                                          (AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (None)

void UBPFL_GlobalFunctions_C::ByteToHex(uint8 InputPin, class UObject* __WorldContext, const class FString& ReturnValue, const TArray<class FString>& HexDigits, const TArray<class FString>& K2Node_MakeArray_Array, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_And_IntInt_ReturnValue, int32 CallFunc_And_IntInt_ReturnValue_1, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "ByteToHex");

	Params::UBPFL_GlobalFunctions_C_ByteToHex_Params Parms{};

	Parms.InputPin = InputPin;
	Parms.__WorldContext = __WorldContext;
	Parms.ReturnValue = ReturnValue;
	Parms.HexDigits = HexDigits;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_And_IntInt_ReturnValue = CallFunc_And_IntInt_ReturnValue;
	Parms.CallFunc_And_IntInt_ReturnValue_1 = CallFunc_And_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.SetFocusedWidget
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (Edit, ZeroConstructor)
// class UObject*                     __WorldContext                                                   (ZeroConstructor)
// TArray<class UUI_StoreMenu_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (Edit, ZeroConstructor)
// class UUI_StoreMenu_C*             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UBPFL_GlobalFunctions_C::SetFocusedWidget(class UWidget* Widget, class UObject* __WorldContext, const TArray<class UUI_StoreMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUI_StoreMenu_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "SetFocusedWidget");

	Params::UBPFL_GlobalFunctions_C_SetFocusedWidget_Params Parms{};

	Parms.Widget = Widget;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.TextLimit
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  Text                                                             (Edit, ZeroConstructor)
// int32                              Limit                                                            (None)
// class FString                      String                                                           (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPublic)
// class UObject*                     __WorldContext                                                   (None)
// class FString                      CallFunc_StringLimit_NewString                                   (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPublic)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPublic)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (None)

void UBPFL_GlobalFunctions_C::TextLimit(class UTextBlock* Text, int32 Limit, const class FString& String, class UObject* __WorldContext, const class FString& CallFunc_StringLimit_NewString, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "TextLimit");

	Params::UBPFL_GlobalFunctions_C_TextLimit_Params Parms{};

	Parms.Text = Text;
	Parms.Limit = Limit;
	Parms.String = String;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_StringLimit_NewString = CallFunc_StringLimit_NewString;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CheckPlayerInputDevices
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (ZeroConstructor)
// enum class ENUM_InputDevices       UsingGamepad_                                                    (None)
// bool                               Temp_bool_Variable                                               (None)
// TArray<class UUI_StoreMenu_C*>     CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ZeroConstructor)
// enum class ENUM_InputDevices       Temp_byte_Variable                                               (None)
// class UUI_StoreMenu_C*             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// enum class ENUM_InputDevices       Temp_byte_Variable_1                                             (None)
// enum class ENUM_InputDevices       K2Node_Select_Default                                            (None)

void UBPFL_GlobalFunctions_C::CheckPlayerInputDevices(class UObject* __WorldContext, enum class ENUM_InputDevices UsingGamepad_, bool Temp_bool_Variable, const TArray<class UUI_StoreMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, enum class ENUM_InputDevices Temp_byte_Variable, class UUI_StoreMenu_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, enum class ENUM_InputDevices Temp_byte_Variable_1, enum class ENUM_InputDevices K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "CheckPlayerInputDevices");

	Params::UBPFL_GlobalFunctions_C_CheckPlayerInputDevices_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.UsingGamepad_ = UsingGamepad_;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.StringLimit
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      String                                                           (SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NativeAccessSpecifierPublic)
// int32                              Limit                                                            (None)
// class UObject*                     __WorldContext                                                   (None)
// class FString                      NewString                                                        (ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NativeAccessSpecifierPublic)
// class FString                      LocalString                                                      (SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (None)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NativeAccessSpecifierPublic)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// class FString                      CallFunc_Array_Get_Item                                          (ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPublic)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (None)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPublic)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (None)

void UBPFL_GlobalFunctions_C::StringLimit(const class FString& String, int32 Limit, class UObject* __WorldContext, const class FString& NewString, const class FString& LocalString, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "StringLimit");

	Params::UBPFL_GlobalFunctions_C_StringLimit_Params Parms{};

	Parms.String = String;
	Parms.Limit = Limit;
	Parms.__WorldContext = __WorldContext;
	Parms.NewString = NewString;
	Parms.LocalString = LocalString;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.ErrorMessage
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (Edit, ZeroConstructor)
// class FString                      ErrorMessage                                                     (None)
// class UObject*                     __WorldContext                                                   (None)

void UBPFL_GlobalFunctions_C::ErrorMessage(class UObject* Object, const class FString& ErrorMessage, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GlobalFunctions_C", "ErrorMessage");

	Params::UBPFL_GlobalFunctions_C_ErrorMessage_Params Parms{};

	Parms.Object = Object;
	Parms.ErrorMessage = ErrorMessage;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}

}


