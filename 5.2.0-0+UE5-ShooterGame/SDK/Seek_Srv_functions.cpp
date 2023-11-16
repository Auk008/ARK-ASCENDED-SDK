#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Seek_Srv.Seek_Srv_C
// (None)

class UClass* USeek_Srv_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Seek_Srv_C");

	return Clss;
}


// Seek_Srv_C Seek_Srv.Default__Seek_Srv_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USeek_Srv_C* USeek_Srv_C::GetDefaultObj()
{
	static class USeek_Srv_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USeek_Srv_C*>(USeek_Srv_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Seek_Srv.Seek_Srv_C.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void USeek_Srv_C::ReceiveActivation(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Seek_Srv_C", "ReceiveActivation");

	Params::USeek_Srv_C_ReceiveActivation_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Seek_Srv.Seek_Srv_C.ExecuteUbergraph_Seek_Srv
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void USeek_Srv_C::ExecuteUbergraph_Seek_Srv(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Seek_Srv_C", "ExecuteUbergraph_Seek_Srv");

	Params::USeek_Srv_C_ExecuteUbergraph_Seek_Srv_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


