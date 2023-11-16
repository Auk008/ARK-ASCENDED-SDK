#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CheckIsVectorNonZero.CheckIsVectorNonZero_C
// (None)

class UClass* UCheckIsVectorNonZero_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheckIsVectorNonZero_C");

	return Clss;
}


// CheckIsVectorNonZero_C CheckIsVectorNonZero.Default__CheckIsVectorNonZero_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheckIsVectorNonZero_C* UCheckIsVectorNonZero_C::GetDefaultObj()
{
	static class UCheckIsVectorNonZero_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheckIsVectorNonZero_C*>(UCheckIsVectorNonZero_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheckIsVectorNonZero.CheckIsVectorNonZero_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void UCheckIsVectorNonZero_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckIsVectorNonZero_C", "ReceiveExecute");

	Params::UCheckIsVectorNonZero_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CheckIsVectorNonZero.CheckIsVectorNonZero_C.ExecuteUbergraph_CheckIsVectorNonZero
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// struct FVector                     CallFunc_GetBlackboardValueAsVector_ReturnValue                  (None)
// class AActor*                      K2Node_Event_OwnerActor                                          (None)
// double                             CallFunc_VSize_ReturnValue                                       (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)

void UCheckIsVectorNonZero_C::ExecuteUbergraph_CheckIsVectorNonZero(int32 EntryPoint, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, class AActor* K2Node_Event_OwnerActor, double CallFunc_VSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckIsVectorNonZero_C", "ExecuteUbergraph_CheckIsVectorNonZero");

	Params::UCheckIsVectorNonZero_C_ExecuteUbergraph_CheckIsVectorNonZero_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBlackboardValueAsVector_ReturnValue = CallFunc_GetBlackboardValueAsVector_ReturnValue;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


