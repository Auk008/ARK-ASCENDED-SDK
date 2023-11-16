#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EndLanding_TK.EndLanding_TK_C
// (None)

class UClass* UEndLanding_TK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EndLanding_TK_C");

	return Clss;
}


// EndLanding_TK_C EndLanding_TK.Default__EndLanding_TK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEndLanding_TK_C* UEndLanding_TK_C::GetDefaultObj()
{
	static class UEndLanding_TK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEndLanding_TK_C*>(UEndLanding_TK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EndLanding_TK.EndLanding_TK_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void UEndLanding_TK_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EndLanding_TK_C", "ReceiveExecute");

	Params::UEndLanding_TK_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EndLanding_TK.EndLanding_TK_C.ExecuteUbergraph_EndLanding_TK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class UBehaviorTreeComponent*      CallFunc_GetBehaviorTree_ReturnValue                             (ZeroConstructor)
// class UBTNode*                     CallFunc_FindService_ReturnValue                                 (ZeroConstructor)
// class UBTNode*                     CallFunc_FindService_ReturnValue_1                               (ZeroConstructor)
// class UBTService_BlueprintBase*    K2Node_DynamicCast_AsBTService_Blueprint_Base                    (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UBTService_BlueprintBase*    K2Node_DynamicCast_AsBTService_Blueprint_Base_1                  (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor)
// class ADino_AIController_BP_C*     K2Node_DynamicCast_AsDino_AIController_BP                        (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// bool                               CallFunc_CanLand_ReturnValue                                     (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (None)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (None)

void UEndLanding_TK_C::ExecuteUbergraph_EndLanding_TK(int32 EntryPoint, class UBehaviorTreeComponent* CallFunc_GetBehaviorTree_ReturnValue, class UBTNode* CallFunc_FindService_ReturnValue, class UBTNode* CallFunc_FindService_ReturnValue_1, class UBTService_BlueprintBase* K2Node_DynamicCast_AsBTService_Blueprint_Base, bool K2Node_DynamicCast_bSuccess, class UBTService_BlueprintBase* K2Node_DynamicCast_AsBTService_Blueprint_Base_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* K2Node_Event_OwnerActor, class ADino_AIController_BP_C* K2Node_DynamicCast_AsDino_AIController_BP, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_CanLand_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EndLanding_TK_C", "ExecuteUbergraph_EndLanding_TK");

	Params::UEndLanding_TK_C_ExecuteUbergraph_EndLanding_TK_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBehaviorTree_ReturnValue = CallFunc_GetBehaviorTree_ReturnValue;
	Parms.CallFunc_FindService_ReturnValue = CallFunc_FindService_ReturnValue;
	Parms.CallFunc_FindService_ReturnValue_1 = CallFunc_FindService_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBTService_Blueprint_Base = K2Node_DynamicCast_AsBTService_Blueprint_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBTService_Blueprint_Base_1 = K2Node_DynamicCast_AsBTService_Blueprint_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsDino_AIController_BP = K2Node_DynamicCast_AsDino_AIController_BP;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_CanLand_ReturnValue = CallFunc_CanLand_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


