#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GetRandomFleePoint_TK.GetRandomFleePoint_TK_C
// (None)

class UClass* UGetRandomFleePoint_TK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetRandomFleePoint_TK_C");

	return Clss;
}


// GetRandomFleePoint_TK_C GetRandomFleePoint_TK.Default__GetRandomFleePoint_TK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGetRandomFleePoint_TK_C* UGetRandomFleePoint_TK_C::GetDefaultObj()
{
	static class UGetRandomFleePoint_TK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetRandomFleePoint_TK_C*>(UGetRandomFleePoint_TK_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GetRandomFleePoint_TK.GetRandomFleePoint_TK_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (None)

void UGetRandomFleePoint_TK_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetRandomFleePoint_TK_C", "ReceiveExecute");

	Params::UGetRandomFleePoint_TK_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GetRandomFleePoint_TK.GetRandomFleePoint_TK_C.ExecuteUbergraph_GetRandomFleePoint_TK
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// double                             CallFunc_RandomFloat_ReturnValue                                 (None)
// class AActor*                      K2Node_Event_OwnerActor                                          (Edit, ZeroConstructor)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (None)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (None)
// class AActor*                      CallFunc_GetTarget_ReturnValue                                   (Edit, ZeroConstructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (None)
// double                             CallFunc_BreakVector_X                                           (None)
// double                             CallFunc_BreakVector_Y                                           (None)
// double                             CallFunc_BreakVector_Z                                           (None)
// double                             CallFunc_BreakVector_X_1                                         (None)
// double                             CallFunc_BreakVector_Y_1                                         (None)
// double                             CallFunc_BreakVector_Z_1                                         (None)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (None)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (None)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (None)
// double                             CallFunc_BreakVector_X_2                                         (None)
// double                             CallFunc_BreakVector_Y_2                                         (None)
// double                             CallFunc_BreakVector_Z_2                                         (None)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (None)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (None)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (None)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (None)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (None)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (None)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue_1                      (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (None)
// struct FVector                     CallFunc_GetRandomWanderDestination_ReturnValue                  (None)
// struct FVector                     CallFunc_GetRandomWanderDestination_ReturnValue_1                (None)
// double                             CallFunc_VSize_ReturnValue                                       (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (None)
// double                             CallFunc_VSize_ReturnValue_1                                     (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (None)

void UGetRandomFleePoint_TK_C::ExecuteUbergraph_GetRandomFleePoint_TK(int32 EntryPoint, double CallFunc_RandomFloat_ReturnValue, class AActor* K2Node_Event_OwnerActor, double CallFunc_Multiply_DoubleDouble_ReturnValue, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess, double CallFunc_Add_DoubleDouble_ReturnValue, class AActor* CallFunc_GetTarget_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_GetRandomWanderDestination_ReturnValue, const struct FVector& CallFunc_GetRandomWanderDestination_ReturnValue_1, double CallFunc_VSize_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_VSize_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetRandomFleePoint_TK_C", "ExecuteUbergraph_GetRandomFleePoint_TK");

	Params::UGetRandomFleePoint_TK_C_ExecuteUbergraph_GetRandomFleePoint_TK_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetTarget_ReturnValue = CallFunc_GetTarget_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Normal_ReturnValue_1 = CallFunc_Normal_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue_1 = CallFunc_Conv_VectorToRotator_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_GetRandomWanderDestination_ReturnValue = CallFunc_GetRandomWanderDestination_ReturnValue;
	Parms.CallFunc_GetRandomWanderDestination_ReturnValue_1 = CallFunc_GetRandomWanderDestination_ReturnValue_1;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue_1 = CallFunc_VSize_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


