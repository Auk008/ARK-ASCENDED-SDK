#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Deco_IsDoingLandToMe.Deco_IsDoingLandToMe_C
// (None)

class UClass* UDeco_IsDoingLandToMe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Deco_IsDoingLandToMe_C");

	return Clss;
}


// Deco_IsDoingLandToMe_C Deco_IsDoingLandToMe.Default__Deco_IsDoingLandToMe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDeco_IsDoingLandToMe_C* UDeco_IsDoingLandToMe_C::GetDefaultObj()
{
	static class UDeco_IsDoingLandToMe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeco_IsDoingLandToMe_C*>(UDeco_IsDoingLandToMe_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Deco_IsDoingLandToMe.Deco_IsDoingLandToMe_C.ReceiveConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void UDeco_IsDoingLandToMe_C::ReceiveConditionCheck(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Deco_IsDoingLandToMe_C", "ReceiveConditionCheck");

	Params::UDeco_IsDoingLandToMe_C_ReceiveConditionCheck_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Deco_IsDoingLandToMe.Deco_IsDoingLandToMe_C.ExecuteUbergraph_Deco_IsDoingLandToMe
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ZeroConstructor)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ZeroConstructor)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class AActor*                      CallFunc_GetTamedLandTarget_ReturnValue                          (None)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UDeco_IsDoingLandToMe_C::ExecuteUbergraph_Deco_IsDoingLandToMe(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetTamedLandTarget_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Deco_IsDoingLandToMe_C", "ExecuteUbergraph_Deco_IsDoingLandToMe");

	Params::UDeco_IsDoingLandToMe_C_ExecuteUbergraph_Deco_IsDoingLandToMe_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetTamedLandTarget_ReturnValue = CallFunc_GetTamedLandTarget_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


