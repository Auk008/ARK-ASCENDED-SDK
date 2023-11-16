#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Deco_IsTargetSubmerged.Deco_IsTargetSubmerged_C
// (None)

class UClass* UDeco_IsTargetSubmerged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Deco_IsTargetSubmerged_C");

	return Clss;
}


// Deco_IsTargetSubmerged_C Deco_IsTargetSubmerged.Default__Deco_IsTargetSubmerged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDeco_IsTargetSubmerged_C* UDeco_IsTargetSubmerged_C::GetDefaultObj()
{
	static class UDeco_IsTargetSubmerged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDeco_IsTargetSubmerged_C*>(UDeco_IsTargetSubmerged_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Deco_IsTargetSubmerged.Deco_IsTargetSubmerged_C.ReceiveConditionCheck
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (ZeroConstructor)
// class AActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue                   (ZeroConstructor)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsSubmerged_ReturnValue                                 (None)

void UDeco_IsTargetSubmerged_C::ReceiveConditionCheck(class AActor* OwnerActor, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSubmerged_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Deco_IsTargetSubmerged_C", "ReceiveConditionCheck");

	Params::UDeco_IsTargetSubmerged_C_ReceiveConditionCheck_Params Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue = CallFunc_GetBlackboardValueAsActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsSubmerged_ReturnValue = CallFunc_IsSubmerged_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


