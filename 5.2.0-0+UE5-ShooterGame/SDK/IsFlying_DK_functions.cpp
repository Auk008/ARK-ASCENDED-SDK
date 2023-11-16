#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IsFlying_DK.IsFlying_DK_C
// (None)

class UClass* UIsFlying_DK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IsFlying_DK_C");

	return Clss;
}


// IsFlying_DK_C IsFlying_DK.Default__IsFlying_DK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIsFlying_DK_C* UIsFlying_DK_C::GetDefaultObj()
{
	static class UIsFlying_DK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIsFlying_DK_C*>(UIsFlying_DK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IsFlying_DK.IsFlying_DK_C.ReceiveConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void UIsFlying_DK_C::ReceiveConditionCheck(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsFlying_DK_C", "ReceiveConditionCheck");

	Params::UIsFlying_DK_C_ReceiveConditionCheck_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IsFlying_DK.IsFlying_DK_C.ReceiveExecutionStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void UIsFlying_DK_C::ReceiveExecutionStart(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsFlying_DK_C", "ReceiveExecutionStart");

	Params::UIsFlying_DK_C_ReceiveExecutionStart_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IsFlying_DK.IsFlying_DK_C.ReceiveExecutionFinish
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)
// enum class EBTNodeResult           NodeResult                                                       (None)

void UIsFlying_DK_C::ReceiveExecutionFinish(class AActor* OwnerActor, enum class EBTNodeResult NodeResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsFlying_DK_C", "ReceiveExecutionFinish");

	Params::UIsFlying_DK_C_ReceiveExecutionFinish_Params Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.NodeResult = NodeResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IsFlying_DK.IsFlying_DK_C.ExecuteUbergraph_IsFlying_DK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class AActor*                      K2Node_Event_OwnerActor_1                                        (Edit, ZeroConstructor)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ZeroConstructor)
// enum class EBTNodeResult           K2Node_Event_NodeResult                                          (None)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController_1                  (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue                         (Edit, ZeroConstructor)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue_1                       (Edit, ZeroConstructor)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue_2                       (Edit, ZeroConstructor)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue_3                       (Edit, ZeroConstructor)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue_4                       (Edit, ZeroConstructor)
// class UPrimalPathFollowingComponent*CallFunc_PFCFromAIController_ReturnValue_5                       (Edit, ZeroConstructor)
// class AActor*                      K2Node_Event_OwnerActor_2                                        (Edit, ZeroConstructor)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController_2                  (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ZeroConstructor)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (None)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (None)
// bool                               CallFunc_HasBuffPreventingFlight_ReturnValue                     (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)

void UIsFlying_DK_C::ExecuteUbergraph_IsFlying_DK(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor_1, class AActor* K2Node_Event_OwnerActor, enum class EBTNodeResult K2Node_Event_NodeResult, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_1, bool K2Node_DynamicCast_bSuccess_1, class UPrimalPathFollowingComponent* CallFunc_PFCFromAIController_ReturnValue, class UPrimalPathFollowingComponent* CallFunc_PFCFromAIController_ReturnValue_1, class UPrimalPathFollowingComponent* CallFunc_PFCFromAIController_ReturnValue_2, class UPrimalPathFollowingComponent* CallFunc_PFCFromAIController_ReturnValue_3, class UPrimalPathFollowingComponent* CallFunc_PFCFromAIController_ReturnValue_4, class UPrimalPathFollowingComponent* CallFunc_PFCFromAIController_ReturnValue_5, class AActor* K2Node_Event_OwnerActor_2, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_2, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_HasBuffPreventingFlight_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsFlying_DK_C", "ExecuteUbergraph_IsFlying_DK");

	Params::UIsFlying_DK_C_ExecuteUbergraph_IsFlying_DK_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor_1 = K2Node_Event_OwnerActor_1;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_Event_NodeResult = K2Node_Event_NodeResult;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController_1 = K2Node_DynamicCast_AsPrimal_Dino_AIController_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PFCFromAIController_ReturnValue = CallFunc_PFCFromAIController_ReturnValue;
	Parms.CallFunc_PFCFromAIController_ReturnValue_1 = CallFunc_PFCFromAIController_ReturnValue_1;
	Parms.CallFunc_PFCFromAIController_ReturnValue_2 = CallFunc_PFCFromAIController_ReturnValue_2;
	Parms.CallFunc_PFCFromAIController_ReturnValue_3 = CallFunc_PFCFromAIController_ReturnValue_3;
	Parms.CallFunc_PFCFromAIController_ReturnValue_4 = CallFunc_PFCFromAIController_ReturnValue_4;
	Parms.CallFunc_PFCFromAIController_ReturnValue_5 = CallFunc_PFCFromAIController_ReturnValue_5;
	Parms.K2Node_Event_OwnerActor_2 = K2Node_Event_OwnerActor_2;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController_2 = K2Node_DynamicCast_AsPrimal_Dino_AIController_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_HasBuffPreventingFlight_ReturnValue = CallFunc_HasBuffPreventingFlight_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


