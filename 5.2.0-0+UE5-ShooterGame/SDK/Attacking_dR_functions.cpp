#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attacking_dR.Attacking_DR_C
// (None)

class UClass* UAttacking_DR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attacking_DR_C");

	return Clss;
}


// Attacking_DR_C Attacking_dR.Default__Attacking_DR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttacking_DR_C* UAttacking_DR_C::GetDefaultObj()
{
	static class UAttacking_DR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttacking_DR_C*>(UAttacking_DR_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Attacking_dR.Attacking_DR_C.ReceiveExecutionStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void UAttacking_DR_C::ReceiveExecutionStart(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attacking_DR_C", "ReceiveExecutionStart");

	Params::UAttacking_DR_C_ReceiveExecutionStart_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attacking_dR.Attacking_DR_C.ReceiveExecutionFinish
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)
// enum class EBTNodeResult           NodeResult                                                       (None)

void UAttacking_DR_C::ReceiveExecutionFinish(class AActor* OwnerActor, enum class EBTNodeResult NodeResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attacking_DR_C", "ReceiveExecutionFinish");

	Params::UAttacking_DR_C_ReceiveExecutionFinish_Params Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.NodeResult = NodeResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attacking_dR.Attacking_DR_C.ReceiveConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void UAttacking_DR_C::ReceiveConditionCheck(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attacking_DR_C", "ReceiveConditionCheck");

	Params::UAttacking_DR_C_ReceiveConditionCheck_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attacking_dR.Attacking_DR_C.ExecuteUbergraph_Attacking_DR
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class AActor*                      K2Node_Event_OwnerActor_2                                        (ZeroConstructor)
// class AActor*                      K2Node_Event_OwnerActor_1                                        (ZeroConstructor)
// enum class EBTNodeResult           K2Node_Event_NodeResult                                          (None)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void UAttacking_DR_C::ExecuteUbergraph_Attacking_DR(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor_2, class AActor* K2Node_Event_OwnerActor_1, enum class EBTNodeResult K2Node_Event_NodeResult, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attacking_DR_C", "ExecuteUbergraph_Attacking_DR");

	Params::UAttacking_DR_C_ExecuteUbergraph_Attacking_DR_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor_2 = K2Node_Event_OwnerActor_2;
	Parms.K2Node_Event_OwnerActor_1 = K2Node_Event_OwnerActor_1;
	Parms.K2Node_Event_NodeResult = K2Node_Event_NodeResult;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


