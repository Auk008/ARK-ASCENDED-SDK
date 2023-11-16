#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NotWithinDistance.NotWithinDistance_C
// (None)

class UClass* UNotWithinDistance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NotWithinDistance_C");

	return Clss;
}


// NotWithinDistance_C NotWithinDistance.Default__NotWithinDistance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNotWithinDistance_C* UNotWithinDistance_C::GetDefaultObj()
{
	static class UNotWithinDistance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNotWithinDistance_C*>(UNotWithinDistance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NotWithinDistance.NotWithinDistance_C.ReceiveConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void UNotWithinDistance_C::ReceiveConditionCheck(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotWithinDistance_C", "ReceiveConditionCheck");

	Params::UNotWithinDistance_C_ReceiveConditionCheck_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotWithinDistance.NotWithinDistance_C.ExecuteUbergraph_NotWithinDistance
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor)
// float                              CallFunc_GetBlackboardValueAsFloat_ReturnValue                   (None)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class AActor*                      CallFunc_GetTamedFollowTarget_ReturnValue                        (None)
// float                              CallFunc_GetAIFollowStoppingDistanceOffset_ReturnValue           (None)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (None)
// bool                               CallFunc_CanFly_ReturnValue                                      (None)
// float                              CallFunc_GetAIFollowStoppingDistanceMultiplier_ReturnValue       (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (None)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (None)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (None)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (None)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (None)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (None)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (None)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (None)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (None)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (None)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (None)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (None)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (None)
// float                              CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast            (None)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2                  (None)

void UNotWithinDistance_C::ExecuteUbergraph_NotWithinDistance(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, float CallFunc_GetBlackboardValueAsFloat_ReturnValue, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetTamedFollowTarget_ReturnValue, float CallFunc_GetAIFollowStoppingDistanceOffset_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_CanFly_ReturnValue, float CallFunc_GetAIFollowStoppingDistanceMultiplier_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_3, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotWithinDistance_C", "ExecuteUbergraph_NotWithinDistance");

	Params::UNotWithinDistance_C_ExecuteUbergraph_NotWithinDistance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.CallFunc_GetBlackboardValueAsFloat_ReturnValue = CallFunc_GetBlackboardValueAsFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetTamedFollowTarget_ReturnValue = CallFunc_GetTamedFollowTarget_ReturnValue;
	Parms.CallFunc_GetAIFollowStoppingDistanceOffset_ReturnValue = CallFunc_GetAIFollowStoppingDistanceOffset_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_CanFly_ReturnValue = CallFunc_CanFly_ReturnValue;
	Parms.CallFunc_GetAIFollowStoppingDistanceMultiplier_ReturnValue = CallFunc_GetAIFollowStoppingDistanceMultiplier_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_3 = CallFunc_Add_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast = CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


