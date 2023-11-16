#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Dino_AIController_BP.Dino_AIController_BP_C
// (Actor)

class UClass* ADino_AIController_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dino_AIController_BP_C");

	return Clss;
}


// Dino_AIController_BP_C Dino_AIController_BP.Default__Dino_AIController_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADino_AIController_BP_C* ADino_AIController_BP_C::GetDefaultObj()
{
	static class ADino_AIController_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADino_AIController_BP_C*>(ADino_AIController_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Dino_AIController_BP.Dino_AIController_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADino_AIController_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_AIController_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_AIController_BP.Dino_AIController_BP_C.ExecuteUbergraph_Dino_AIController_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (None)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (None)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (None)
// float                              CallFunc_GetAttackInterval_ReturnValue                           (None)
// float                              CallFunc_GetAttackRotationRangeDegrees_ReturnValue               (None)
// bool                               CallFunc_HasAuthority_ReturnValue                                (None)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (None)
// bool                               CallFunc_RunBehaviorTree_ReturnValue                             (None)

void ADino_AIController_BP_C::ExecuteUbergraph_Dino_AIController_BP(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_MakeLiteralName_ReturnValue_2, float CallFunc_GetAttackInterval_ReturnValue, float CallFunc_GetAttackRotationRangeDegrees_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_RunBehaviorTree_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_AIController_BP_C", "ExecuteUbergraph_Dino_AIController_BP");

	Params::ADino_AIController_BP_C_ExecuteUbergraph_Dino_AIController_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.CallFunc_GetAttackInterval_ReturnValue = CallFunc_GetAttackInterval_ReturnValue;
	Parms.CallFunc_GetAttackRotationRangeDegrees_ReturnValue = CallFunc_GetAttackRotationRangeDegrees_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_RunBehaviorTree_ReturnValue = CallFunc_RunBehaviorTree_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


