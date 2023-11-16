#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Attack_SRV.Attack_SRV_C
// (None)

class UClass* UAttack_SRV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Attack_SRV_C");

	return Clss;
}


// Attack_SRV_C Attack_SRV.Default__Attack_SRV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttack_SRV_C* UAttack_SRV_C::GetDefaultObj()
{
	static class UAttack_SRV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttack_SRV_C*>(UAttack_SRV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Attack_SRV.Attack_SRV_C.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void UAttack_SRV_C::ReceiveActivation(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attack_SRV_C", "ReceiveActivation");

	Params::UAttack_SRV_C_ReceiveActivation_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attack_SRV.Attack_SRV_C.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void UAttack_SRV_C::ReceiveDeactivation(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attack_SRV_C", "ReceiveDeactivation");

	Params::UAttack_SRV_C_ReceiveDeactivation_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Attack_SRV.Attack_SRV_C.ExecuteUbergraph_Attack_SRV
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor)
// class AActor*                      K2Node_Event_OwnerActor_1                                        (None)

void UAttack_SRV_C::ExecuteUbergraph_Attack_SRV(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AActor* K2Node_Event_OwnerActor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Attack_SRV_C", "ExecuteUbergraph_Attack_SRV");

	Params::UAttack_SRV_C_ExecuteUbergraph_Attack_SRV_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_Event_OwnerActor_1 = K2Node_Event_OwnerActor_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


