#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IsBaby_BT.IsBaby_BT_C
// (None)

class UClass* UIsBaby_BT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IsBaby_BT_C");

	return Clss;
}


// IsBaby_BT_C IsBaby_BT.Default__IsBaby_BT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIsBaby_BT_C* UIsBaby_BT_C::GetDefaultObj()
{
	static class UIsBaby_BT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIsBaby_BT_C*>(UIsBaby_BT_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IsBaby_BT.IsBaby_BT_C.ReceiveConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void UIsBaby_BT_C::ReceiveConditionCheck(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsBaby_BT_C", "ReceiveConditionCheck");

	Params::UIsBaby_BT_C_ReceiveConditionCheck_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IsBaby_BT.IsBaby_BT_C.ExecuteUbergraph_IsBaby_BT
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ZeroConstructor)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ZeroConstructor)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)

void UIsBaby_BT_C::ExecuteUbergraph_IsBaby_BT(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsBaby_BT_C", "ExecuteUbergraph_IsBaby_BT");

	Params::UIsBaby_BT_C_ExecuteUbergraph_IsBaby_BT_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


