#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalCharAnimFunctions.PrimalCharAnimFunctions_C
// (None)

class UClass* UPrimalCharAnimFunctions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalCharAnimFunctions_C");

	return Clss;
}


// PrimalCharAnimFunctions_C PrimalCharAnimFunctions.Default__PrimalCharAnimFunctions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalCharAnimFunctions_C* UPrimalCharAnimFunctions_C::GetDefaultObj()
{
	static class UPrimalCharAnimFunctions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalCharAnimFunctions_C*>(UPrimalCharAnimFunctions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalCharAnimFunctions.PrimalCharAnimFunctions_C.UpdateGroundConformingVariables
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            PrimalCharacter                                                  (Edit, ZeroConstructor)
// bool                               Has_Hit_The_Ground_Once                                          (None)
// class UObject*                     __WorldContext                                                   (Edit, ZeroConstructor)
// bool                               IsBeingDragged                                                   (None)
// bool                               IsSwimming                                                       (None)
// bool                               IsFalling                                                        (None)
// bool                               Should_Mark_Has_Hit_Ground_once                                  (None)
// bool                               Interpolate                                                      (None)
// bool                               bInterpolate                                                     (None)
// bool                               Ret_Should_Mark_Has_Hit_Ground_once                              (None)
// bool                               bFallingMovement                                                 (None)
// bool                               bSwimmingMovement                                                (None)
// bool                               Is_Being_Dragged                                                 (None)
// bool                               Is_Being_Dragged_And_Underwater                                  (None)
// float                              CallFunc_GetImmersionDepth_ReturnValue                           (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (Edit, ZeroConstructor)
// class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component                (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (None)
// double                             CallFunc_GetTimeSeconds_ReturnValue                              (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (None)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (None)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (None)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (None)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast                     (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (None)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (None)

void UPrimalCharAnimFunctions_C::UpdateGroundConformingVariables(class APrimalCharacter* PrimalCharacter, bool Has_Hit_The_Ground_Once, class UObject* __WorldContext, bool IsBeingDragged, bool IsSwimming, bool IsFalling, bool Should_Mark_Has_Hit_Ground_once, bool Interpolate, bool bInterpolate, bool Ret_Should_Mark_Has_Hit_Ground_once, bool bFallingMovement, bool bSwimmingMovement, bool Is_Being_Dragged, bool Is_Being_Dragged_And_Underwater, float CallFunc_GetImmersionDepth_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, double CallFunc_GetTimeSeconds_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Subtract_DoubleFloat_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float CallFunc_Subtract_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalCharAnimFunctions_C", "UpdateGroundConformingVariables");

	Params::UPrimalCharAnimFunctions_C_UpdateGroundConformingVariables_Params Parms{};

	Parms.PrimalCharacter = PrimalCharacter;
	Parms.Has_Hit_The_Ground_Once = Has_Hit_The_Ground_Once;
	Parms.__WorldContext = __WorldContext;
	Parms.IsBeingDragged = IsBeingDragged;
	Parms.IsSwimming = IsSwimming;
	Parms.IsFalling = IsFalling;
	Parms.Should_Mark_Has_Hit_Ground_once = Should_Mark_Has_Hit_Ground_once;
	Parms.Interpolate = Interpolate;
	Parms.bInterpolate = bInterpolate;
	Parms.Ret_Should_Mark_Has_Hit_Ground_once = Ret_Should_Mark_Has_Hit_Ground_once;
	Parms.bFallingMovement = bFallingMovement;
	Parms.bSwimmingMovement = bSwimmingMovement;
	Parms.Is_Being_Dragged = Is_Being_Dragged;
	Parms.Is_Being_Dragged_And_Underwater = Is_Being_Dragged_And_Underwater;
	Parms.CallFunc_GetImmersionDepth_ReturnValue = CallFunc_GetImmersionDepth_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Movement_Component = K2Node_DynamicCast_AsCharacter_Movement_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue = CallFunc_Subtract_DoubleFloat_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_B_ImplicitCast = CallFunc_Greater_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast = CallFunc_Subtract_DoubleFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


