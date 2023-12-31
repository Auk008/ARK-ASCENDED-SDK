#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class WildcardTools.WildcardHelpers
// (None)

class UClass* UWildcardHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WildcardHelpers");

	return Clss;
}


// WildcardHelpers WildcardTools.Default__WildcardHelpers
// (Public, ClassDefaultObject, ArchetypeObject)

class UWildcardHelpers* UWildcardHelpers::GetDefaultObj()
{
	static class UWildcardHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<UWildcardHelpers*>(UWildcardHelpers::StaticClass()->DefaultObject);

	return Default;
}


// Function WildcardTools.WildcardHelpers.CreateJIRABug
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Args                                                             (None)

void UWildcardHelpers::CreateJIRABug(const class FString& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WildcardHelpers", "CreateJIRABug");

	Params::UWildcardHelpers_CreateJIRABug_Params Parms{};

	Parms.Args = Args;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


