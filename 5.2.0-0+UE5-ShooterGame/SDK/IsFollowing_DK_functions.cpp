#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IsFollowing_DK.IsFollowing_DK_C
// (None)

class UClass* UIsFollowing_DK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IsFollowing_DK_C");

	return Clss;
}


// IsFollowing_DK_C IsFollowing_DK.Default__IsFollowing_DK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIsFollowing_DK_C* UIsFollowing_DK_C::GetDefaultObj()
{
	static class UIsFollowing_DK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIsFollowing_DK_C*>(UIsFollowing_DK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IsFollowing_DK.IsFollowing_DK_C.ReceiveConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void UIsFollowing_DK_C::ReceiveConditionCheck(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsFollowing_DK_C", "ReceiveConditionCheck");

	Params::UIsFollowing_DK_C_ReceiveConditionCheck_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IsFollowing_DK.IsFollowing_DK_C.ExecuteUbergraph_IsFollowing_DK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ZeroConstructor)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (Edit, ZeroConstructor)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class AActor*                      CallFunc_GetTamedFollowTarget_ReturnValue                        (Edit, ZeroConstructor)
// class AActor*                      CallFunc_GetTamedLandTarget_ReturnValue                          (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (None)

void UIsFollowing_DK_C::ExecuteUbergraph_IsFollowing_DK(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetTamedFollowTarget_ReturnValue, class AActor* CallFunc_GetTamedLandTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsFollowing_DK_C", "ExecuteUbergraph_IsFollowing_DK");

	Params::UIsFollowing_DK_C_ExecuteUbergraph_IsFollowing_DK_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetTamedFollowTarget_ReturnValue = CallFunc_GetTamedFollowTarget_ReturnValue;
	Parms.CallFunc_GetTamedLandTarget_ReturnValue = CallFunc_GetTamedLandTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


