#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AllowWandering.AllowWandering_C
// (None)

class UClass* UAllowWandering_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AllowWandering_C");

	return Clss;
}


// AllowWandering_C AllowWandering.Default__AllowWandering_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAllowWandering_C* UAllowWandering_C::GetDefaultObj()
{
	static class UAllowWandering_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAllowWandering_C*>(UAllowWandering_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AllowWandering.AllowWandering_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void UAllowWandering_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AllowWandering_C", "ReceiveExecute");

	Params::UAllowWandering_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AllowWandering.AllowWandering_C.ExecuteUbergraph_AllowWandering
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (None)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)

void UAllowWandering_C::ExecuteUbergraph_AllowWandering(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AllowWandering_C", "ExecuteUbergraph_AllowWandering");

	Params::UAllowWandering_C_ExecuteUbergraph_AllowWandering_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


