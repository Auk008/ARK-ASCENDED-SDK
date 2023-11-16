#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SetBBBool_TK.SetBBBool_TK_C
// (None)

class UClass* USetBBBool_TK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SetBBBool_TK_C");

	return Clss;
}


// SetBBBool_TK_C SetBBBool_TK.Default__SetBBBool_TK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USetBBBool_TK_C* USetBBBool_TK_C::GetDefaultObj()
{
	static class USetBBBool_TK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USetBBBool_TK_C*>(USetBBBool_TK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SetBBBool_TK.SetBBBool_TK_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void USetBBBool_TK_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SetBBBool_TK_C", "ReceiveExecute");

	Params::USetBBBool_TK_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SetBBBool_TK.SetBBBool_TK_C.ExecuteUbergraph_SetBBBool_TK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class AActor*                      K2Node_Event_OwnerActor                                          (None)

void USetBBBool_TK_C::ExecuteUbergraph_SetBBBool_TK(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SetBBBool_TK_C", "ExecuteUbergraph_SetBBBool_TK");

	Params::USetBBBool_TK_C_ExecuteUbergraph_SetBBBool_TK_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


