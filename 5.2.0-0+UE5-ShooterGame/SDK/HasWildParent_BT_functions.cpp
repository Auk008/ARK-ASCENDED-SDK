#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HasWildParent_BT.HasWildParent_BT_C
// (None)

class UClass* UHasWildParent_BT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HasWildParent_BT_C");

	return Clss;
}


// HasWildParent_BT_C HasWildParent_BT.Default__HasWildParent_BT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHasWildParent_BT_C* UHasWildParent_BT_C::GetDefaultObj()
{
	static class UHasWildParent_BT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHasWildParent_BT_C*>(UHasWildParent_BT_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HasWildParent_BT.HasWildParent_BT_C.ReceiveConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void UHasWildParent_BT_C::ReceiveConditionCheck(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HasWildParent_BT_C", "ReceiveConditionCheck");

	Params::UHasWildParent_BT_C_ReceiveConditionCheck_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HasWildParent_BT.HasWildParent_BT_C.ExecuteUbergraph_HasWildParent_BT
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class APrimalDinoCharacter*        CallFunc_GetFirstValidWildFollowingParentRef_ReturnValue         (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UHasWildParent_BT_C::ExecuteUbergraph_HasWildParent_BT(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_1, class APrimalDinoCharacter* CallFunc_GetFirstValidWildFollowingParentRef_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HasWildParent_BT_C", "ExecuteUbergraph_HasWildParent_BT");

	Params::UHasWildParent_BT_C_ExecuteUbergraph_HasWildParent_BT_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetFirstValidWildFollowingParentRef_ReturnValue = CallFunc_GetFirstValidWildFollowingParentRef_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


