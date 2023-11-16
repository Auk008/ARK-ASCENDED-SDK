#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RandomWait_TK.RandomWait_TK_C
// (None)

class UClass* URandomWait_TK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RandomWait_TK_C");

	return Clss;
}


// RandomWait_TK_C RandomWait_TK.Default__RandomWait_TK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URandomWait_TK_C* URandomWait_TK_C::GetDefaultObj()
{
	static class URandomWait_TK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URandomWait_TK_C*>(URandomWait_TK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RandomWait_TK.RandomWait_TK_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void URandomWait_TK_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandomWait_TK_C", "ReceiveExecute");

	Params::URandomWait_TK_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RandomWait_TK.RandomWait_TK_C.ExecuteUbergraph_RandomWait_TK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor)
// class ADino_AIController_BP_C*     K2Node_DynamicCast_AsDino_AIController_BP                        (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// double                             CallFunc_RandomFloat_ReturnValue                                 (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (None)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (None)

void URandomWait_TK_C::ExecuteUbergraph_RandomWait_TK(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class ADino_AIController_BP_C* K2Node_DynamicCast_AsDino_AIController_BP, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_RandomFloat_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_Delay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandomWait_TK_C", "ExecuteUbergraph_RandomWait_TK");

	Params::URandomWait_TK_C_ExecuteUbergraph_RandomWait_TK_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsDino_AIController_BP = K2Node_DynamicCast_AsDino_AIController_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


