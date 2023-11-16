#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UseTamedNoTargetBehavior.UseTamedNoTargetBehavior_C
// (None)

class UClass* UUseTamedNoTargetBehavior_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UseTamedNoTargetBehavior_C");

	return Clss;
}


// UseTamedNoTargetBehavior_C UseTamedNoTargetBehavior.Default__UseTamedNoTargetBehavior_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUseTamedNoTargetBehavior_C* UUseTamedNoTargetBehavior_C::GetDefaultObj()
{
	static class UUseTamedNoTargetBehavior_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUseTamedNoTargetBehavior_C*>(UUseTamedNoTargetBehavior_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UseTamedNoTargetBehavior.UseTamedNoTargetBehavior_C.ReceiveConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void UUseTamedNoTargetBehavior_C::ReceiveConditionCheck(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UseTamedNoTargetBehavior_C", "ReceiveConditionCheck");

	Params::UUseTamedNoTargetBehavior_C_ReceiveConditionCheck_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UseTamedNoTargetBehavior.UseTamedNoTargetBehavior_C.ExecuteUbergraph_UseTamedNoTargetBehavior
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)

void UUseTamedNoTargetBehavior_C::ExecuteUbergraph_UseTamedNoTargetBehavior(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UseTamedNoTargetBehavior_C", "ExecuteUbergraph_UseTamedNoTargetBehavior");

	Params::UUseTamedNoTargetBehavior_C_ExecuteUbergraph_UseTamedNoTargetBehavior_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


