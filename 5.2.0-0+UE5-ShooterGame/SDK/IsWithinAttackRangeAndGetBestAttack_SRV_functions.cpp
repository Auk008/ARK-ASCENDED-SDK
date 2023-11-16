#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C
// (None)

class UClass* UIsWithinAttackRangeAndGetBestAttack_SRV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IsWithinAttackRangeAndGetBestAttack_SRV_C");

	return Clss;
}


// IsWithinAttackRangeAndGetBestAttack_SRV_C IsWithinAttackRangeAndGetBestAttack_SRV.Default__IsWithinAttackRangeAndGetBestAttack_SRV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIsWithinAttackRangeAndGetBestAttack_SRV_C* UIsWithinAttackRangeAndGetBestAttack_SRV_C::GetDefaultObj()
{
	static class UIsWithinAttackRangeAndGetBestAttack_SRV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIsWithinAttackRangeAndGetBestAttack_SRV_C*>(UIsWithinAttackRangeAndGetBestAttack_SRV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.UpdateBlackboardKeys
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalDinoAIController*     OwnerController                                                  (ZeroConstructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (None)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (None)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (None)
// float                              CallFunc_GetAttackRotationRangeDegrees_ReturnValue               (None)
// float                              CallFunc_GetAttackInterval_ReturnValue                           (None)

void UIsWithinAttackRangeAndGetBestAttack_SRV_C::UpdateBlackboardKeys(class APrimalDinoAIController* OwnerController, class FName CallFunc_MakeLiteralName_ReturnValue, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_MakeLiteralName_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, float CallFunc_GetAttackRotationRangeDegrees_ReturnValue, float CallFunc_GetAttackInterval_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsWithinAttackRangeAndGetBestAttack_SRV_C", "UpdateBlackboardKeys");

	Params::UIsWithinAttackRangeAndGetBestAttack_SRV_C_UpdateBlackboardKeys_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetAttackRotationRangeDegrees_ReturnValue = CallFunc_GetAttackRotationRangeDegrees_ReturnValue;
	Parms.CallFunc_GetAttackInterval_ReturnValue = CallFunc_GetAttackInterval_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)
// float                              DeltaSeconds                                                     (None)

void UIsWithinAttackRangeAndGetBestAttack_SRV_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsWithinAttackRangeAndGetBestAttack_SRV_C", "ReceiveTick");

	Params::UIsWithinAttackRangeAndGetBestAttack_SRV_C_ReceiveTick_Params Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C.ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor)
// float                              K2Node_Event_DeltaSeconds                                        (None)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// float                              CallFunc_GetAttackInterval_ReturnValue                           (None)
// bool                               CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged(None)
// bool                               CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue   (None)
// uint8                              CallFunc_GetCurrentAttackIndex_ReturnValue                       (None)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (None)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (None)

void UIsWithinAttackRangeAndGetBestAttack_SRV_C::ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetAttackInterval_ReturnValue, bool CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged, bool CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue, uint8 CallFunc_GetCurrentAttackIndex_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IsWithinAttackRangeAndGetBestAttack_SRV_C", "ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV");

	Params::UIsWithinAttackRangeAndGetBestAttack_SRV_C_ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAttackInterval_ReturnValue = CallFunc_GetAttackInterval_ReturnValue;
	Parms.CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged = CallFunc_IsWithinAttackRangeAndCalculateBestAttack_bAttackChanged;
	Parms.CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue = CallFunc_IsWithinAttackRangeAndCalculateBestAttack_ReturnValue;
	Parms.CallFunc_GetCurrentAttackIndex_ReturnValue = CallFunc_GetCurrentAttackIndex_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


