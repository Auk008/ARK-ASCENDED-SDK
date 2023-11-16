#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShouldFleeFromAttack_SRV.ShouldFleeFromAttack_SRV_C
// (None)

class UClass* UShouldFleeFromAttack_SRV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShouldFleeFromAttack_SRV_C");

	return Clss;
}


// ShouldFleeFromAttack_SRV_C ShouldFleeFromAttack_SRV.Default__ShouldFleeFromAttack_SRV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShouldFleeFromAttack_SRV_C* UShouldFleeFromAttack_SRV_C::GetDefaultObj()
{
	static class UShouldFleeFromAttack_SRV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShouldFleeFromAttack_SRV_C*>(UShouldFleeFromAttack_SRV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShouldFleeFromAttack_SRV.ShouldFleeFromAttack_SRV_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)
// float                              DeltaSeconds                                                     (None)

void UShouldFleeFromAttack_SRV_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShouldFleeFromAttack_SRV_C", "ReceiveTick");

	Params::UShouldFleeFromAttack_SRV_C_ReceiveTick_Params Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShouldFleeFromAttack_SRV.ShouldFleeFromAttack_SRV_C.ExecuteUbergraph_ShouldFleeFromAttack_SRV
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_GetBlackboardValueAsBool_ReturnValue                    (None)
// bool                               CallFunc_GetBlackboardValueAsBool_ReturnValue_1                  (None)
// bool                               CallFunc_GetBlackboardValueAsBool_ReturnValue_2                  (None)
// bool                               CallFunc_GetBlackboardValueAsBool_ReturnValue_3                  (None)
// bool                               CallFunc_GetBlackboardValueAsBool_ReturnValue_4                  (None)
// bool                               CallFunc_GetBlackboardValueAsBool_ReturnValue_5                  (None)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor)
// float                              K2Node_Event_DeltaSeconds                                        (None)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_GetBlackboardValueAsBool_ReturnValue_6                  (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// float                              CallFunc_GetHealthPercentage_ReturnValue                         (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (None)
// bool                               CallFunc_BPIsTamed_ReturnValue                                   (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_ShouldForceFlee_ReturnValue                             (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character_1                     (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// bool                               CallFunc_IsPrimalDino_ReturnValue                                (None)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController_1                  (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (None)
// bool                               CallFunc_IsAWildFollowerKnownServerside_ReturnValue              (None)
// class AActor*                      CallFunc_GetTarget_ReturnValue                                   (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsBaby_ReturnValue                                      (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast                     (None)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast_1                   (None)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (None)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (None)

void UShouldFleeFromAttack_SRV_C::ExecuteUbergraph_ShouldFleeFromAttack_SRV(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetBlackboardValueAsBool_ReturnValue, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_1, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_2, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_3, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_4, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_5, class AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_6, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetHealthPercentage_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BPIsTamed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ShouldForceFlee_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, class AActor* CallFunc_Array_Get_Item, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsPrimalDino_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsAWildFollowerKnownServerside_ReturnValue, class AActor* CallFunc_GetTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsBaby_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShouldFleeFromAttack_SRV_C", "ExecuteUbergraph_ShouldFleeFromAttack_SRV");

	Params::UShouldFleeFromAttack_SRV_C_ExecuteUbergraph_ShouldFleeFromAttack_SRV_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetBlackboardValueAsBool_ReturnValue = CallFunc_GetBlackboardValueAsBool_ReturnValue;
	Parms.CallFunc_GetBlackboardValueAsBool_ReturnValue_1 = CallFunc_GetBlackboardValueAsBool_ReturnValue_1;
	Parms.CallFunc_GetBlackboardValueAsBool_ReturnValue_2 = CallFunc_GetBlackboardValueAsBool_ReturnValue_2;
	Parms.CallFunc_GetBlackboardValueAsBool_ReturnValue_3 = CallFunc_GetBlackboardValueAsBool_ReturnValue_3;
	Parms.CallFunc_GetBlackboardValueAsBool_ReturnValue_4 = CallFunc_GetBlackboardValueAsBool_ReturnValue_4;
	Parms.CallFunc_GetBlackboardValueAsBool_ReturnValue_5 = CallFunc_GetBlackboardValueAsBool_ReturnValue_5;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBlackboardValueAsBool_ReturnValue_6 = CallFunc_GetBlackboardValueAsBool_ReturnValue_6;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetHealthPercentage_ReturnValue = CallFunc_GetHealthPercentage_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BPIsTamed_ReturnValue = CallFunc_BPIsTamed_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_ShouldForceFlee_ReturnValue = CallFunc_ShouldForceFlee_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character_1 = K2Node_DynamicCast_AsPrimal_Dino_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsPrimalDino_ReturnValue = CallFunc_IsPrimalDino_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController_1 = K2Node_DynamicCast_AsPrimal_Dino_AIController_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsAWildFollowerKnownServerside_ReturnValue = CallFunc_IsAWildFollowerKnownServerside_ReturnValue;
	Parms.CallFunc_GetTarget_ReturnValue = CallFunc_GetTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsBaby_ReturnValue = CallFunc_IsBaby_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_B_ImplicitCast = CallFunc_Greater_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_B_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_B_ImplicitCast_1;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


