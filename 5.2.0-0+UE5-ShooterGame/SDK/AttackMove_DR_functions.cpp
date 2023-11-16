#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AttackMove_DR.AttackMove_DR_C
// (None)

class UClass* UAttackMove_DR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttackMove_DR_C");

	return Clss;
}


// AttackMove_DR_C AttackMove_DR.Default__AttackMove_DR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttackMove_DR_C* UAttackMove_DR_C::GetDefaultObj()
{
	static class UAttackMove_DR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttackMove_DR_C*>(UAttackMove_DR_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AttackMove_DR.AttackMove_DR_C.ReceiveConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void UAttackMove_DR_C::ReceiveConditionCheck(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttackMove_DR_C", "ReceiveConditionCheck");

	Params::UAttackMove_DR_C_ReceiveConditionCheck_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AttackMove_DR.AttackMove_DR_C.ExecuteUbergraph_AttackMove_DR
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               CallFunc_IsCurrentAttackStopsMovement_ReturnValue                (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)

void UAttackMove_DR_C::ExecuteUbergraph_AttackMove_DR(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsCurrentAttackStopsMovement_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AttackMove_DR_C", "ExecuteUbergraph_AttackMove_DR");

	Params::UAttackMove_DR_C_ExecuteUbergraph_AttackMove_DR_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsCurrentAttackStopsMovement_ReturnValue = CallFunc_IsCurrentAttackStopsMovement_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


