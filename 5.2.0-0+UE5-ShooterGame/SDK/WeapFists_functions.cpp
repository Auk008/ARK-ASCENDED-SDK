#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapFists.WeapFists_C
// (Actor)

class UClass* AWeapFists_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapFists_C");

	return Clss;
}


// WeapFists_C WeapFists.Default__WeapFists_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapFists_C* AWeapFists_C::GetDefaultObj()
{
	static class AWeapFists_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapFists_C*>(AWeapFists_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeapFists.WeapFists_C.BPOverrideMeleeSwingSocket
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        FromSocket                                                       (None)
// class FName                        ReturnValue                                                      (None)
// bool                               Temp_bool_Variable                                               (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (None)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (None)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// class FName                        K2Node_Select_Default                                            (None)

void AWeapFists_C::BPOverrideMeleeSwingSocket(class FName FromSocket, class FName ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_Conv_NameToString_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapFists_C", "BPOverrideMeleeSwingSocket");

	Params::AWeapFists_C_BPOverrideMeleeSwingSocket_Params Parms{};

	Parms.FromSocket = FromSocket;
	Parms.ReturnValue = ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


