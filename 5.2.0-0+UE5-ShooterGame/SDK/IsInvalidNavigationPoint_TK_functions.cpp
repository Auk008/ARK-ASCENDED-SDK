#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IsInvalidNavigationPoint_TK.IsInvalidNavigationPoint_TK_C
// (None)

class UClass* UIsInvalidNavigationPoint_TK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IsInvalidNavigationPoint_TK_C");

	return Clss;
}


// IsInvalidNavigationPoint_TK_C IsInvalidNavigationPoint_TK.Default__IsInvalidNavigationPoint_TK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIsInvalidNavigationPoint_TK_C* UIsInvalidNavigationPoint_TK_C::GetDefaultObj()
{
	static class UIsInvalidNavigationPoint_TK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIsInvalidNavigationPoint_TK_C*>(UIsInvalidNavigationPoint_TK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IsInvalidNavigationPoint_TK.IsInvalidNavigationPoint_TK_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void UIsInvalidNavigationPoint_TK_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsInvalidNavigationPoint_TK_C", "ReceiveExecute");

	Params::UIsInvalidNavigationPoint_TK_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IsInvalidNavigationPoint_TK.IsInvalidNavigationPoint_TK_C.ExecuteUbergraph_IsInvalidNavigationPoint_TK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// struct FVector                     CallFunc_GetBlackboardValueAsVector_ReturnValue                  (None)
// class AActor*                      K2Node_Event_OwnerActor                                          (None)
// double                             CallFunc_VSize_ReturnValue                                       (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (None)

void UIsInvalidNavigationPoint_TK_C::ExecuteUbergraph_IsInvalidNavigationPoint_TK(int32 EntryPoint, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, class AActor* K2Node_Event_OwnerActor, double CallFunc_VSize_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsInvalidNavigationPoint_TK_C", "ExecuteUbergraph_IsInvalidNavigationPoint_TK");

	Params::UIsInvalidNavigationPoint_TK_C_ExecuteUbergraph_IsInvalidNavigationPoint_TK_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBlackboardValueAsVector_ReturnValue = CallFunc_GetBlackboardValueAsVector_ReturnValue;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


