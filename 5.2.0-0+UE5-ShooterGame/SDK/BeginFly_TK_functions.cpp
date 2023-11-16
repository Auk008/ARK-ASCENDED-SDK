#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BeginFly_TK.BeginFly_TK_C
// (None)

class UClass* UBeginFly_TK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BeginFly_TK_C");

	return Clss;
}


// BeginFly_TK_C BeginFly_TK.Default__BeginFly_TK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBeginFly_TK_C* UBeginFly_TK_C::GetDefaultObj()
{
	static class UBeginFly_TK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBeginFly_TK_C*>(UBeginFly_TK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BeginFly_TK.BeginFly_TK_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void UBeginFly_TK_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BeginFly_TK_C", "ReceiveExecute");

	Params::UBeginFly_TK_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BeginFly_TK.BeginFly_TK_C.ExecuteUbergraph_BeginFly_TK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class UBehaviorTreeComponent*      CallFunc_GetBehaviorTree_ReturnValue                             (Edit, ZeroConstructor)
// class UBTNode*                     CallFunc_FindService_ReturnValue                                 (Edit, ZeroConstructor)
// class UBTNode*                     CallFunc_FindService_ReturnValue_1                               (Edit, ZeroConstructor)
// class UBTService_BlueprintBase*    K2Node_DynamicCast_AsBTService_Blueprint_Base                    (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UBTService_BlueprintBase*    K2Node_DynamicCast_AsBTService_Blueprint_Base_1                  (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ZeroConstructor)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ZeroConstructor)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (None)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (None)

void UBeginFly_TK_C::ExecuteUbergraph_BeginFly_TK(int32 EntryPoint, class UBehaviorTreeComponent* CallFunc_GetBehaviorTree_ReturnValue, class UBTNode* CallFunc_FindService_ReturnValue, class UBTNode* CallFunc_FindService_ReturnValue_1, class UBTService_BlueprintBase* K2Node_DynamicCast_AsBTService_Blueprint_Base, bool K2Node_DynamicCast_bSuccess, class UBTService_BlueprintBase* K2Node_DynamicCast_AsBTService_Blueprint_Base_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BeginFly_TK_C", "ExecuteUbergraph_BeginFly_TK");

	Params::UBeginFly_TK_C_ExecuteUbergraph_BeginFly_TK_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBehaviorTree_ReturnValue = CallFunc_GetBehaviorTree_ReturnValue;
	Parms.CallFunc_FindService_ReturnValue = CallFunc_FindService_ReturnValue;
	Parms.CallFunc_FindService_ReturnValue_1 = CallFunc_FindService_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBTService_Blueprint_Base = K2Node_DynamicCast_AsBTService_Blueprint_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBTService_Blueprint_Base_1 = K2Node_DynamicCast_AsBTService_Blueprint_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


