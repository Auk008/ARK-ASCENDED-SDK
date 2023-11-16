#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_OverrideVelocity.Buff_OverrideVelocity_C
// (Actor)

class UClass* ABuff_OverrideVelocity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_OverrideVelocity_C");

	return Clss;
}


// Buff_OverrideVelocity_C Buff_OverrideVelocity.Default__Buff_OverrideVelocity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_OverrideVelocity_C* ABuff_OverrideVelocity_C::GetDefaultObj()
{
	static class ABuff_OverrideVelocity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_OverrideVelocity_C*>(ABuff_OverrideVelocity_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_OverrideVelocity.Buff_OverrideVelocity_C.BPDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (Edit, ZeroConstructor)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void ABuff_OverrideVelocity_C::BPDeactivated(class AActor* ForInstigator, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_OverrideVelocity_C", "BPDeactivated");

	Params::ABuff_OverrideVelocity_C_BPDeactivated_Params Parms{};

	Parms.ForInstigator = ForInstigator;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_OverrideVelocity.Buff_OverrideVelocity_C.BPOverrideCharacterNewFallVelocity
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     InitialVelocity                                                  (None)
// struct FVector                     Gravity                                                          (None)
// float                              DeltaTime                                                        (None)
// struct FVector                     ReturnValue                                                      (None)
// struct FVector                     Result                                                           (None)
// bool                               CallFunc_NotEqual_VectorVector_ReturnValue                       (None)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (None)
// struct FVector                     CallFunc_NewFallVelocity_ReturnValue                             (None)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (None)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (None)
// struct FVector                     CallFunc_BPPointPlaneProject_ReturnValue                         (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (None)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (None)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// double                             CallFunc_Multiply_VectorFloat_B_ImplicitCast                     (None)

void ABuff_OverrideVelocity_C::BPOverrideCharacterNewFallVelocity(const struct FVector& InitialVelocity, const struct FVector& Gravity, float DeltaTime, const struct FVector& ReturnValue, const struct FVector& Result, bool CallFunc_NotEqual_VectorVector_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_NewFallVelocity_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_BPPointPlaneProject_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, double CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_VectorFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_OverrideVelocity_C", "BPOverrideCharacterNewFallVelocity");

	Params::ABuff_OverrideVelocity_C_BPOverrideCharacterNewFallVelocity_Params Parms{};

	Parms.InitialVelocity = InitialVelocity;
	Parms.Gravity = Gravity;
	Parms.DeltaTime = DeltaTime;
	Parms.ReturnValue = ReturnValue;
	Parms.Result = Result;
	Parms.CallFunc_NotEqual_VectorVector_ReturnValue = CallFunc_NotEqual_VectorVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_NewFallVelocity_ReturnValue = CallFunc_NewFallVelocity_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_BPPointPlaneProject_ReturnValue = CallFunc_BPPointPlaneProject_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_B_ImplicitCast = CallFunc_Multiply_VectorFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


