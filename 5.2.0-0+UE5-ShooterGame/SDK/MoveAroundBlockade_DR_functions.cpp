#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MoveAroundBlockade_DR.MoveAroundBlockade_DR_C
// (None)

class UClass* UMoveAroundBlockade_DR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoveAroundBlockade_DR_C");

	return Clss;
}


// MoveAroundBlockade_DR_C MoveAroundBlockade_DR.Default__MoveAroundBlockade_DR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMoveAroundBlockade_DR_C* UMoveAroundBlockade_DR_C::GetDefaultObj()
{
	static class UMoveAroundBlockade_DR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMoveAroundBlockade_DR_C*>(UMoveAroundBlockade_DR_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MoveAroundBlockade_DR.MoveAroundBlockade_DR_C.ReceiveExecutionFinish
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)
// enum class EBTNodeResult           NodeResult                                                       (None)

void UMoveAroundBlockade_DR_C::ReceiveExecutionFinish(class AActor* OwnerActor, enum class EBTNodeResult NodeResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoveAroundBlockade_DR_C", "ReceiveExecutionFinish");

	Params::UMoveAroundBlockade_DR_C_ReceiveExecutionFinish_Params Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.NodeResult = NodeResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MoveAroundBlockade_DR.MoveAroundBlockade_DR_C.ReceiveConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void UMoveAroundBlockade_DR_C::ReceiveConditionCheck(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoveAroundBlockade_DR_C", "ReceiveConditionCheck");

	Params::UMoveAroundBlockade_DR_C_ReceiveConditionCheck_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MoveAroundBlockade_DR.MoveAroundBlockade_DR_C.ReceiveExecutionStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void UMoveAroundBlockade_DR_C::ReceiveExecutionStart(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoveAroundBlockade_DR_C", "ReceiveExecutionStart");

	Params::UMoveAroundBlockade_DR_C_ReceiveExecutionStart_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MoveAroundBlockade_DR.MoveAroundBlockade_DR_C.ExecuteUbergraph_MoveAroundBlockade_DR
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class AActor*                      K2Node_Event_OwnerActor_2                                        (ZeroConstructor)
// enum class EBTNodeResult           K2Node_Event_NodeResult                                          (None)
// class AActor*                      K2Node_Event_OwnerActor_1                                        (ZeroConstructor)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController_1                  (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (None)
// double                             CallFunc_DoubleToFloat_ReturnValue                               (None)
// double                             CallFunc_VSize_ReturnValue                                       (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (None)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (None)
// double                             CallFunc_VSize_ReturnValue_1                                     (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController_2                  (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (None)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (None)
// double                             CallFunc_DoubleToFloat_ReturnValue_1                             (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character_1                          (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (None)
// class UPrimalCharacterMovement*    CallFunc_CharacterMovementToPCM_ReturnValue                      (ZeroConstructor)
// class UPrimalCharacterMovement*    CallFunc_CharacterMovementToPCM_ReturnValue_1                    (None)

void UMoveAroundBlockade_DR_C::ExecuteUbergraph_MoveAroundBlockade_DR(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor_2, enum class EBTNodeResult K2Node_Event_NodeResult, class AActor* K2Node_Event_OwnerActor_1, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_1, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_DoubleToFloat_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess_2, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_2, bool K2Node_DynamicCast_bSuccess_3, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_DoubleToFloat_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, bool K2Node_DynamicCast_bSuccess_4, class UPrimalCharacterMovement* CallFunc_CharacterMovementToPCM_ReturnValue, class UPrimalCharacterMovement* CallFunc_CharacterMovementToPCM_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MoveAroundBlockade_DR_C", "ExecuteUbergraph_MoveAroundBlockade_DR");

	Params::UMoveAroundBlockade_DR_C_ExecuteUbergraph_MoveAroundBlockade_DR_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor_2 = K2Node_Event_OwnerActor_2;
	Parms.K2Node_Event_NodeResult = K2Node_Event_NodeResult;
	Parms.K2Node_Event_OwnerActor_1 = K2Node_Event_OwnerActor_1;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController_1 = K2Node_DynamicCast_AsPrimal_Dino_AIController_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_DoubleToFloat_ReturnValue = CallFunc_DoubleToFloat_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue_1 = CallFunc_VSize_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController_2 = K2Node_DynamicCast_AsPrimal_Dino_AIController_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_DoubleToFloat_ReturnValue_1 = CallFunc_DoubleToFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsPrimal_Character_1 = K2Node_DynamicCast_AsPrimal_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_CharacterMovementToPCM_ReturnValue = CallFunc_CharacterMovementToPCM_ReturnValue;
	Parms.CallFunc_CharacterMovementToPCM_ReturnValue_1 = CallFunc_CharacterMovementToPCM_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


