#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ASACameraFunctionLibrary.ASACameraFunctionLibrary_C
// (None)

class UClass* UASACameraFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ASACameraFunctionLibrary_C");

	return Clss;
}


// ASACameraFunctionLibrary_C ASACameraFunctionLibrary.Default__ASACameraFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UASACameraFunctionLibrary_C* UASACameraFunctionLibrary_C::GetDefaultObj()
{
	static class UASACameraFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UASACameraFunctionLibrary_C*>(UASACameraFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverridePivotLocation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (ZeroConstructor)
// struct FVector                     CurrentPivotLocation                                             (None)
// struct FVector                     DesiredPivotLocation                                             (None)
// class UObject*                     __WorldContext                                                   (None)

void UASACameraFunctionLibrary_C::FinalOverridePivotLocation(class APrimalCharacter* CameraOwnerCharacter, const struct FVector& CurrentPivotLocation, const struct FVector& DesiredPivotLocation, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "FinalOverridePivotLocation");

	Params::UASACameraFunctionLibrary_C_FinalOverridePivotLocation_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CurrentPivotLocation = CurrentPivotLocation;
	Parms.DesiredPivotLocation = DesiredPivotLocation;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyAnyPitchBasedModifier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (ZeroConstructor)
// class UObject*                     __WorldContext                                                   (ZeroConstructor)
// bool                               bShouldApplyAnyModifier                                          (None)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsTargeting_ReturnValue                                 (None)

void UASACameraFunctionLibrary_C::ShouldApplyAnyPitchBasedModifier(class APrimalCharacter* CameraOwnerCharacter, class UObject* __WorldContext, bool bShouldApplyAnyModifier, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTargeting_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ShouldApplyAnyPitchBasedModifier");

	Params::UASACameraFunctionLibrary_C_ShouldApplyAnyPitchBasedModifier_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.__WorldContext = __WorldContext;
	Parms.bShouldApplyAnyModifier = bShouldApplyAnyModifier;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsTargeting_ReturnValue = CallFunc_IsTargeting_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLengthInterp
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (Edit, ZeroConstructor)
// struct FPrimalCameraParams         CameraParams                                                     (AutoWeak, SimpleDisplay, Protected, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FPrimalCameraInterpParams   ArmLengthInterpParams                                            (None)
// TArray<struct FPrimalCameraPitchBasedModifier>PitchBasedModifiers                                              (None)
// class UObject*                     __WorldContext                                                   (None)
// double                             PitchModifierAlpha                                               (None)
// int32                              FoundEntryIndex                                                  (None)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier(None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item                                          (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier      (None)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp               (None)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha                 (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1    (None)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1             (None)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1               (None)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// double                             CallFunc_SelectFloat_ReturnValue                                 (None)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (None)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (None)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (None)
// double                             CallFunc_Lerp_ReturnValue                                        (None)
// double                             CallFunc_Lerp_ReturnValue_1                                      (None)
// double                             CallFunc_Lerp_ReturnValue_2                                      (None)
// struct FPrimalCameraInterpParams   K2Node_MakeStruct_PrimalCameraInterpParams                       (None)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (None)
// double                             CallFunc_Lerp_A_ImplicitCast_1                                   (None)
// double                             CallFunc_Lerp_A_ImplicitCast_2                                   (None)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (None)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (None)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (None)
// double                             CallFunc_Lerp_B_ImplicitCast_1                                   (None)
// double                             CallFunc_Lerp_B_ImplicitCast_2                                   (None)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (None)
// float                              K2Node_MakeStruct_TargetVelocity_ImplicitCast                    (None)
// float                              K2Node_MakeStruct_SpringStiffness_ImplicitCast                   (None)
// float                              K2Node_MakeStruct_CriticalDamping_ImplicitCast                   (None)

void UASACameraFunctionLibrary_C::ApplyPitchBasedModifierToArmLengthInterp(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, const struct FPrimalCameraInterpParams& ArmLengthInterpParams, const TArray<struct FPrimalCameraPitchBasedModifier>& PitchBasedModifiers, class UObject* __WorldContext, double PitchModifierAlpha, int32 FoundEntryIndex, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FPrimalCameraPitchBasedModifier& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier, bool CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp, double CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FPrimalCameraPitchBasedModifier& CallFunc_Array_Get_Item_1, bool CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1, bool CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1, double CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Subtract_DoubleFloat_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Subtract_DoubleFloat_ReturnValue_1, double CallFunc_Divide_DoubleFloat_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, const struct FPrimalCameraInterpParams& K2Node_MakeStruct_PrimalCameraInterpParams, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast_1, double CallFunc_Lerp_A_ImplicitCast_2, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast_1, double CallFunc_Lerp_B_ImplicitCast_2, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float K2Node_MakeStruct_TargetVelocity_ImplicitCast, float K2Node_MakeStruct_SpringStiffness_ImplicitCast, float K2Node_MakeStruct_CriticalDamping_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ApplyPitchBasedModifierToArmLengthInterp");

	Params::UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToArmLengthInterp_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;
	Parms.ArmLengthInterpParams = ArmLengthInterpParams;
	Parms.PitchBasedModifiers = PitchBasedModifiers;
	Parms.__WorldContext = __WorldContext;
	Parms.PitchModifierAlpha = PitchModifierAlpha;
	Parms.FoundEntryIndex = FoundEntryIndex;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier = CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier = CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier;
	Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp = CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp;
	Parms.CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha = CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1 = CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1;
	Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1 = CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1;
	Parms.CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1 = CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue = CallFunc_Subtract_DoubleFloat_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1 = CallFunc_Subtract_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue = CallFunc_Divide_DoubleFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.K2Node_MakeStruct_PrimalCameraInterpParams = K2Node_MakeStruct_PrimalCameraInterpParams;
	Parms.CallFunc_Lerp_A_ImplicitCast = CallFunc_Lerp_A_ImplicitCast;
	Parms.CallFunc_Lerp_A_ImplicitCast_1 = CallFunc_Lerp_A_ImplicitCast_1;
	Parms.CallFunc_Lerp_A_ImplicitCast_2 = CallFunc_Lerp_A_ImplicitCast_2;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast = CallFunc_Lerp_B_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast_1 = CallFunc_Lerp_B_ImplicitCast_1;
	Parms.CallFunc_Lerp_B_ImplicitCast_2 = CallFunc_Lerp_B_ImplicitCast_2;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;
	Parms.K2Node_MakeStruct_TargetVelocity_ImplicitCast = K2Node_MakeStruct_TargetVelocity_ImplicitCast;
	Parms.K2Node_MakeStruct_SpringStiffness_ImplicitCast = K2Node_MakeStruct_SpringStiffness_ImplicitCast;
	Parms.K2Node_MakeStruct_CriticalDamping_ImplicitCast = K2Node_MakeStruct_CriticalDamping_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.DebugPitchBasedModifier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (ZeroConstructor)
// struct FPrimalCameraPitchBasedModifierPitchBasedModifier                                               (None)
// int32                              EntryIndex                                                       (None)
// double                             ModifierAlpha                                                    (None)
// class UObject*                     __WorldContext                                                   (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void UASACameraFunctionLibrary_C::DebugPitchBasedModifier(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraPitchBasedModifier& PitchBasedModifier, int32 EntryIndex, double ModifierAlpha, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "DebugPitchBasedModifier");

	Params::UASACameraFunctionLibrary_C_DebugPitchBasedModifier_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.PitchBasedModifier = PitchBasedModifier;
	Parms.EntryIndex = EntryIndex;
	Parms.ModifierAlpha = ModifierAlpha;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverridePivotOffset
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (ZeroConstructor)
// struct FPrimalCameraParams         CameraParams                                                     (ContainsInstancedReference, Protected, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// TArray<struct FPrimalCameraPitchBasedModifier>PitchBasedModifiers                                              (None)
// struct FVector                     DesiredPivotOffset                                               (None)
// class UObject*                     __WorldContext                                                   (None)

void UASACameraFunctionLibrary_C::FinalOverridePivotOffset(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, const TArray<struct FPrimalCameraPitchBasedModifier>& PitchBasedModifiers, const struct FVector& DesiredPivotOffset, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "FinalOverridePivotOffset");

	Params::UASACameraFunctionLibrary_C_FinalOverridePivotOffset_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;
	Parms.PitchBasedModifiers = PitchBasedModifiers;
	Parms.DesiredPivotOffset = DesiredPivotOffset;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToPivotOffset
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (Edit, ZeroConstructor)
// struct FPrimalCameraParams         CameraParams                                                     (AssetRegistrySearchable, Protected, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// TArray<struct FPrimalCameraPitchBasedModifier>PitchBasedModifiers                                              (None)
// struct FVector                     DesiredPivotOffset                                               (None)
// class UObject*                     __WorldContext                                                   (None)
// double                             PitchModifierAlpha                                               (None)
// int32                              FoundEntryIndex                                                  (None)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// struct FVector                     CallFunc_GetTPVCameraOffset_ReturnValue                          (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item                                          (None)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier      (None)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp               (None)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha                 (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1    (None)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1             (None)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1               (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (None)
// struct FVector                     CallFunc_SelectVector_ReturnValue_1                              (None)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// double                             CallFunc_SelectFloat_ReturnValue                                 (None)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (None)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (None)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (None)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (None)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (None)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (None)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (None)
// float                              CallFunc_VLerp_Alpha_ImplicitCast                                (None)

void UASACameraFunctionLibrary_C::ApplyPitchBasedModifierToPivotOffset(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, const TArray<struct FPrimalCameraPitchBasedModifier>& PitchBasedModifiers, const struct FVector& DesiredPivotOffset, class UObject* __WorldContext, double PitchModifierAlpha, int32 FoundEntryIndex, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_GetTPVCameraOffset_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FPrimalCameraPitchBasedModifier& CallFunc_Array_Get_Item, const struct FVector& CallFunc_SelectVector_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier, bool CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp, double CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FPrimalCameraPitchBasedModifier& CallFunc_Array_Get_Item_1, bool CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1, bool CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1, double CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_SelectVector_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Subtract_DoubleFloat_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Subtract_DoubleFloat_ReturnValue_1, double CallFunc_Divide_DoubleFloat_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float CallFunc_VLerp_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ApplyPitchBasedModifierToPivotOffset");

	Params::UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToPivotOffset_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;
	Parms.PitchBasedModifiers = PitchBasedModifiers;
	Parms.DesiredPivotOffset = DesiredPivotOffset;
	Parms.__WorldContext = __WorldContext;
	Parms.PitchModifierAlpha = PitchModifierAlpha;
	Parms.FoundEntryIndex = FoundEntryIndex;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetTPVCameraOffset_ReturnValue = CallFunc_GetTPVCameraOffset_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier = CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier;
	Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp = CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp;
	Parms.CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha = CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1 = CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1;
	Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1 = CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1;
	Parms.CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1 = CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_SelectVector_ReturnValue_1 = CallFunc_SelectVector_ReturnValue_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue = CallFunc_Subtract_DoubleFloat_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1 = CallFunc_Subtract_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue = CallFunc_Divide_DoubleFloat_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_VLerp_Alpha_ImplicitCast = CallFunc_VLerp_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLength
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (Edit, ZeroConstructor)
// struct FPrimalCameraParams         CameraParams                                                     (AssetRegistrySearchable, SimpleDisplay, Protected, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// TArray<struct FPrimalCameraPitchBasedModifier>PitchBasedModifiers                                              (None)
// double                             CurrentArmLength                                                 (None)
// double                             DesiredArmLength                                                 (None)
// class UObject*                     __WorldContext                                                   (None)
// double                             PitchModifierAlpha                                               (None)
// int32                              FoundEntryIndex                                                  (None)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier(None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier      (None)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp               (None)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha                 (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1    (None)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1             (None)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1               (None)
// double                             K2Node_VariableGet_DesiredArmLength_ImplicitCast                 (None)
// double                             CallFunc_SelectFloat_ReturnValue                                 (None)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (None)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (None)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (None)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (None)
// double                             CallFunc_Lerp_ReturnValue                                        (None)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (None)
// float                              K2Node_VariableSetRef_Target_ImplicitCast                        (None)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (None)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (None)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (None)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (None)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (None)

void UASACameraFunctionLibrary_C::ApplyPitchBasedModifierToArmLength(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, const TArray<struct FPrimalCameraPitchBasedModifier>& PitchBasedModifiers, double CurrentArmLength, double DesiredArmLength, class UObject* __WorldContext, double PitchModifierAlpha, int32 FoundEntryIndex, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FPrimalCameraPitchBasedModifier& CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier, bool CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp, double CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FPrimalCameraPitchBasedModifier& CallFunc_Array_Get_Item_1, bool CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1, bool CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1, double CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1, double K2Node_VariableGet_DesiredArmLength_ImplicitCast, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Subtract_DoubleFloat_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Subtract_DoubleFloat_ReturnValue_1, double CallFunc_Divide_DoubleFloat_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, float K2Node_VariableSetRef_Target_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast, float CallFunc_Divide_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ApplyPitchBasedModifierToArmLength");

	Params::UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToArmLength_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;
	Parms.PitchBasedModifiers = PitchBasedModifiers;
	Parms.CurrentArmLength = CurrentArmLength;
	Parms.DesiredArmLength = DesiredArmLength;
	Parms.__WorldContext = __WorldContext;
	Parms.PitchModifierAlpha = PitchModifierAlpha;
	Parms.FoundEntryIndex = FoundEntryIndex;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier = CallFunc_ShouldApplyAnyPitchBasedModifier_bShouldApplyAnyModifier;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier = CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier;
	Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp = CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp;
	Parms.CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha = CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1 = CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier_1;
	Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1 = CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp_1;
	Parms.CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1 = CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha_1;
	Parms.K2Node_VariableGet_DesiredArmLength_ImplicitCast = K2Node_VariableGet_DesiredArmLength_ImplicitCast;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue = CallFunc_Subtract_DoubleFloat_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1 = CallFunc_Subtract_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue = CallFunc_Divide_DoubleFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSetRef_Target_ImplicitCast = K2Node_VariableSetRef_Target_ImplicitCast;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast = CallFunc_Lerp_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyPitchBasedModifier
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (ZeroConstructor)
// struct FPrimalCameraPitchBasedModifierPitchBasedModifier                                               (None)
// class UObject*                     __WorldContext                                                   (None)
// bool                               bShouldApplyModifier                                             (None)
// bool                               bShouldLerp                                                      (None)
// double                             LerpAlpha                                                        (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// double                             CallFunc_BreakVector2D_X                                         (None)
// double                             CallFunc_BreakVector2D_Y                                         (None)
// double                             CallFunc_BreakVector2D_X_1                                       (None)
// double                             CallFunc_BreakVector2D_Y_1                                       (None)
// double                             CallFunc_FMax_ReturnValue                                        (None)
// double                             CallFunc_FMax_ReturnValue_1                                      (None)
// double                             CallFunc_FMin_ReturnValue                                        (None)
// double                             CallFunc_FMin_ReturnValue_1                                      (None)
// struct FRotator                    CallFunc_GetPrimalCameraDesiredPivotRotation_ReturnValue         (None)
// float                              CallFunc_BreakRotator_Roll                                       (None)
// float                              CallFunc_BreakRotator_Pitch                                      (None)
// float                              CallFunc_BreakRotator_Yaw                                        (None)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue                          (None)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue_1                        (None)
// double                             CallFunc_InRange_FloatFloat_Value_ImplicitCast                   (None)
// double                             CallFunc_InRange_FloatFloat_Value_ImplicitCast_1                 (None)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (None)

void UASACameraFunctionLibrary_C::ShouldApplyPitchBasedModifier(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraPitchBasedModifier& PitchBasedModifier, class UObject* __WorldContext, bool bShouldApplyModifier, bool bShouldLerp, double LerpAlpha, bool CallFunc_IsValid_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_FMax_ReturnValue, double CallFunc_FMax_ReturnValue_1, double CallFunc_FMin_ReturnValue, double CallFunc_FMin_ReturnValue_1, const struct FRotator& CallFunc_GetPrimalCameraDesiredPivotRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_InRange_FloatFloat_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue_1, double CallFunc_InRange_FloatFloat_Value_ImplicitCast, double CallFunc_InRange_FloatFloat_Value_ImplicitCast_1, double CallFunc_MapRangeClamped_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ShouldApplyPitchBasedModifier");

	Params::UASACameraFunctionLibrary_C_ShouldApplyPitchBasedModifier_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.PitchBasedModifier = PitchBasedModifier;
	Parms.__WorldContext = __WorldContext;
	Parms.bShouldApplyModifier = bShouldApplyModifier;
	Parms.bShouldLerp = bShouldLerp;
	Parms.LerpAlpha = LerpAlpha;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue_1 = CallFunc_FMin_ReturnValue_1;
	Parms.CallFunc_GetPrimalCameraDesiredPivotRotation_ReturnValue = CallFunc_GetPrimalCameraDesiredPivotRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue = CallFunc_InRange_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue_1 = CallFunc_InRange_FloatFloat_ReturnValue_1;
	Parms.CallFunc_InRange_FloatFloat_Value_ImplicitCast = CallFunc_InRange_FloatFloat_Value_ImplicitCast;
	Parms.CallFunc_InRange_FloatFloat_Value_ImplicitCast_1 = CallFunc_InRange_FloatFloat_Value_ImplicitCast_1;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToInterpParams
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (Edit, ZeroConstructor)
// struct FPrimalCameraParams         CameraParams                                                     (AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FPrimalCameraInterpParams   InterpParamsX                                                    (None)
// struct FPrimalCameraInterpParams   InterpParamsY                                                    (None)
// struct FPrimalCameraInterpParams   InterpParamsZ                                                    (None)
// TArray<struct FPrimalCameraPitchBasedModifier>PitchBasedModifiers                                              (None)
// class UObject*                     __WorldContext                                                   (None)
// double                             PitchModifierAlpha                                               (None)
// bool                               bOverrideInterpParams                                            (None)
// struct FPrimalCameraInterpParams   FinalInterpParams                                                (None)
// struct FPrimalCameraInterpParams   InterpParamsToModify                                             (None)
// int32                              FoundEntryIndex                                                  (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier      (None)
// bool                               CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp               (None)
// double                             CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha                 (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (None)
// struct FPrimalCameraPitchBasedModifierCallFunc_Array_Get_Item_2                                        (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (None)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (None)
// double                             CallFunc_SelectFloat_ReturnValue                                 (None)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (None)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (None)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (None)
// double                             CallFunc_Lerp_ReturnValue                                        (None)
// double                             CallFunc_Lerp_ReturnValue_1                                      (None)
// double                             CallFunc_Lerp_ReturnValue_2                                      (None)
// struct FPrimalCameraInterpParams   K2Node_MakeStruct_PrimalCameraInterpParams                       (None)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (None)
// double                             CallFunc_Lerp_A_ImplicitCast_1                                   (None)
// double                             CallFunc_Lerp_A_ImplicitCast_2                                   (None)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (None)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (None)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (None)
// double                             CallFunc_Lerp_B_ImplicitCast_1                                   (None)
// double                             CallFunc_Lerp_B_ImplicitCast_2                                   (None)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (None)
// float                              K2Node_MakeStruct_SpringStiffness_ImplicitCast                   (None)
// float                              K2Node_MakeStruct_TargetVelocity_ImplicitCast                    (None)
// float                              K2Node_MakeStruct_CriticalDamping_ImplicitCast                   (None)

void UASACameraFunctionLibrary_C::ApplyPitchBasedModifierToInterpParams(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, const struct FPrimalCameraInterpParams& InterpParamsX, const struct FPrimalCameraInterpParams& InterpParamsY, const struct FPrimalCameraInterpParams& InterpParamsZ, const TArray<struct FPrimalCameraPitchBasedModifier>& PitchBasedModifiers, class UObject* __WorldContext, double PitchModifierAlpha, bool bOverrideInterpParams, const struct FPrimalCameraInterpParams& FinalInterpParams, const struct FPrimalCameraInterpParams& InterpParamsToModify, int32 FoundEntryIndex, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FPrimalCameraPitchBasedModifier& CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FPrimalCameraPitchBasedModifier& CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier, bool CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp, double CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, const struct FPrimalCameraPitchBasedModifier& CallFunc_Array_Get_Item_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Subtract_DoubleFloat_ReturnValue, double CallFunc_Subtract_DoubleFloat_ReturnValue_1, double CallFunc_Divide_DoubleFloat_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, const struct FPrimalCameraInterpParams& K2Node_MakeStruct_PrimalCameraInterpParams, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast_1, double CallFunc_Lerp_A_ImplicitCast_2, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast_1, double CallFunc_Lerp_B_ImplicitCast_2, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float K2Node_MakeStruct_SpringStiffness_ImplicitCast, float K2Node_MakeStruct_TargetVelocity_ImplicitCast, float K2Node_MakeStruct_CriticalDamping_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ApplyPitchBasedModifierToInterpParams");

	Params::UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToInterpParams_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;
	Parms.InterpParamsX = InterpParamsX;
	Parms.InterpParamsY = InterpParamsY;
	Parms.InterpParamsZ = InterpParamsZ;
	Parms.PitchBasedModifiers = PitchBasedModifiers;
	Parms.__WorldContext = __WorldContext;
	Parms.PitchModifierAlpha = PitchModifierAlpha;
	Parms.bOverrideInterpParams = bOverrideInterpParams;
	Parms.FinalInterpParams = FinalInterpParams;
	Parms.InterpParamsToModify = InterpParamsToModify;
	Parms.FoundEntryIndex = FoundEntryIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier = CallFunc_ShouldApplyPitchBasedModifier_bShouldApplyModifier;
	Parms.CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp = CallFunc_ShouldApplyPitchBasedModifier_bShouldLerp;
	Parms.CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha = CallFunc_ShouldApplyPitchBasedModifier_LerpAlpha;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue = CallFunc_Subtract_DoubleFloat_ReturnValue;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1 = CallFunc_Subtract_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue = CallFunc_Divide_DoubleFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.K2Node_MakeStruct_PrimalCameraInterpParams = K2Node_MakeStruct_PrimalCameraInterpParams;
	Parms.CallFunc_Lerp_A_ImplicitCast = CallFunc_Lerp_A_ImplicitCast;
	Parms.CallFunc_Lerp_A_ImplicitCast_1 = CallFunc_Lerp_A_ImplicitCast_1;
	Parms.CallFunc_Lerp_A_ImplicitCast_2 = CallFunc_Lerp_A_ImplicitCast_2;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast = CallFunc_Lerp_B_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast_1 = CallFunc_Lerp_B_ImplicitCast_1;
	Parms.CallFunc_Lerp_B_ImplicitCast_2 = CallFunc_Lerp_B_ImplicitCast_2;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;
	Parms.K2Node_MakeStruct_SpringStiffness_ImplicitCast = K2Node_MakeStruct_SpringStiffness_ImplicitCast;
	Parms.K2Node_MakeStruct_TargetVelocity_ImplicitCast = K2Node_MakeStruct_TargetVelocity_ImplicitCast;
	Parms.K2Node_MakeStruct_CriticalDamping_ImplicitCast = K2Node_MakeStruct_CriticalDamping_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverrideCameraArmLengthInterpParams
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (ZeroConstructor)
// struct FPrimalCameraParams         CameraParams                                                     (None)
// struct FPrimalCameraInterpParams   OutInterpParams                                                  (None)
// class UObject*                     __WorldContext                                                   (None)

void UASACameraFunctionLibrary_C::FinalOverrideCameraArmLengthInterpParams(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, const struct FPrimalCameraInterpParams& OutInterpParams, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "FinalOverrideCameraArmLengthInterpParams");

	Params::UASACameraFunctionLibrary_C_FinalOverrideCameraArmLengthInterpParams_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;
	Parms.OutInterpParams = OutInterpParams;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverrideCameraArmLength
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CharacterToKeepOnScreen                                          (ZeroConstructor)
// struct FPrimalCameraParams         CameraParams                                                     (None)
// class APrimalCharacter*            CameraOwnerCharacter                                             (ZeroConstructor)
// double                             CurrentCameraArmLength                                           (None)
// double                             DesiredCameraArmLength                                           (None)
// class UObject*                     __WorldContext                                                   (None)
// double                             ScreenAreaToUse                                                  (None)
// bool                               bStopLoop                                                        (None)
// bool                               VelocityIsNearlyZero                                             (None)
// struct FVector                     WorldLocationToProject                                           (None)
// double                             CharacterScreenAreaY                                             (None)
// double                             CharacterScreenAreaX                                             (None)

void UASACameraFunctionLibrary_C::FinalOverrideCameraArmLength(class APrimalCharacter* CharacterToKeepOnScreen, const struct FPrimalCameraParams& CameraParams, class APrimalCharacter* CameraOwnerCharacter, double CurrentCameraArmLength, double DesiredCameraArmLength, class UObject* __WorldContext, double ScreenAreaToUse, bool bStopLoop, bool VelocityIsNearlyZero, const struct FVector& WorldLocationToProject, double CharacterScreenAreaY, double CharacterScreenAreaX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "FinalOverrideCameraArmLength");

	Params::UASACameraFunctionLibrary_C_FinalOverrideCameraArmLength_Params Parms{};

	Parms.CharacterToKeepOnScreen = CharacterToKeepOnScreen;
	Parms.CameraParams = CameraParams;
	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CurrentCameraArmLength = CurrentCameraArmLength;
	Parms.DesiredCameraArmLength = DesiredCameraArmLength;
	Parms.__WorldContext = __WorldContext;
	Parms.ScreenAreaToUse = ScreenAreaToUse;
	Parms.bStopLoop = bStopLoop;
	Parms.VelocityIsNearlyZero = VelocityIsNearlyZero;
	Parms.WorldLocationToProject = WorldLocationToProject;
	Parms.CharacterScreenAreaY = CharacterScreenAreaY;
	Parms.CharacterScreenAreaX = CharacterScreenAreaX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.Final Override Pivot Interp Params
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (ZeroConstructor)
// struct FPrimalCameraParams         CameraParams                                                     (None)
// struct FPrimalCameraPivotZInterpOverridesPivotZInterpOverrides                                            (None)
// struct FPrimalCameraInterpParams   LastPivotInterpParamsX                                           (None)
// struct FPrimalCameraInterpParams   LastPivotInterpParamsY                                           (None)
// struct FPrimalCameraInterpParams   LastPivotInterpParamsZ                                           (None)
// struct FPrimalCameraInterpParams   PivotInterpParamsX                                               (None)
// struct FPrimalCameraInterpParams   PivotInterpParamsY                                               (None)
// struct FPrimalCameraInterpParams   PivotInterpParamsZ                                               (None)
// class UObject*                     __WorldContext                                                   (ZeroConstructor)
// double                             PrintModifierAlpha                                               (None)
// double                             TheScreenArea                                                    (None)
// double                             CharScreenAreaY                                                  (None)
// double                             CharScreenAreaX                                                  (None)
// int32                              EntryIndexForLerping                                             (None)
// bool                               bFoundInterpRange                                                (None)
// double                             LerpAlpha                                                        (None)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (None)
// bool                               CallFunc_IsTimeSince_ReturnValue_1                               (None)
// bool                               CallFunc_IsProneOrSitting_ReturnValue                            (None)
// bool                               CallFunc_IsTimeSince_ReturnValue_2                               (None)
// bool                               CallFunc_IsCrouching_ReturnValue                                 (None)
// bool                               CallFunc_ShouldUseLongFallCameraPivotZValues_ReturnValue         (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (None)
// double                             CallFunc_FInterpTo_ReturnValue                                   (None)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (None)
// double                             CallFunc_FInterpTo_ReturnValue_2                                 (None)
// struct FPrimalCameraInterpParams   K2Node_MakeStruct_PrimalCameraInterpParams                       (None)
// double                             CallFunc_FInterpTo_Current_ImplicitCast                          (None)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (None)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_1                        (None)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_2                        (None)
// double                             CallFunc_FInterpTo_InterpSpeed_ImplicitCast                      (None)
// double                             CallFunc_FInterpTo_InterpSpeed_ImplicitCast_1                    (None)
// double                             CallFunc_FInterpTo_InterpSpeed_ImplicitCast_2                    (None)
// double                             CallFunc_FInterpTo_Target_ImplicitCast                           (None)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (None)
// double                             CallFunc_FInterpTo_Target_ImplicitCast_1                         (None)
// double                             CallFunc_FInterpTo_Target_ImplicitCast_2                         (None)
// float                              K2Node_MakeStruct_TargetVelocity_ImplicitCast                    (None)
// float                              K2Node_MakeStruct_CriticalDamping_ImplicitCast                   (None)
// float                              K2Node_MakeStruct_SpringStiffness_ImplicitCast                   (None)

void UASACameraFunctionLibrary_C::Final_Override_Pivot_Interp_Params(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, const struct FPrimalCameraPivotZInterpOverrides& PivotZInterpOverrides, const struct FPrimalCameraInterpParams& LastPivotInterpParamsX, const struct FPrimalCameraInterpParams& LastPivotInterpParamsY, const struct FPrimalCameraInterpParams& LastPivotInterpParamsZ, const struct FPrimalCameraInterpParams& PivotInterpParamsX, const struct FPrimalCameraInterpParams& PivotInterpParamsY, const struct FPrimalCameraInterpParams& PivotInterpParamsZ, class UObject* __WorldContext, double PrintModifierAlpha, double TheScreenArea, double CharScreenAreaY, double CharScreenAreaX, int32 EntryIndexForLerping, bool bFoundInterpRange, double LerpAlpha, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTimeSince_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsTimeSince_ReturnValue_1, bool CallFunc_IsProneOrSitting_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue_2, bool CallFunc_IsCrouching_ReturnValue, bool CallFunc_ShouldUseLongFallCameraPivotZValues_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_2, const struct FPrimalCameraInterpParams& K2Node_MakeStruct_PrimalCameraInterpParams, double CallFunc_FInterpTo_Current_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast_1, double CallFunc_FInterpTo_Current_ImplicitCast_2, double CallFunc_FInterpTo_InterpSpeed_ImplicitCast, double CallFunc_FInterpTo_InterpSpeed_ImplicitCast_1, double CallFunc_FInterpTo_InterpSpeed_ImplicitCast_2, double CallFunc_FInterpTo_Target_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_FInterpTo_Target_ImplicitCast_1, double CallFunc_FInterpTo_Target_ImplicitCast_2, float K2Node_MakeStruct_TargetVelocity_ImplicitCast, float K2Node_MakeStruct_CriticalDamping_ImplicitCast, float K2Node_MakeStruct_SpringStiffness_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "Final Override Pivot Interp Params");

	Params::UASACameraFunctionLibrary_C_Final_Override_Pivot_Interp_Params_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;
	Parms.PivotZInterpOverrides = PivotZInterpOverrides;
	Parms.LastPivotInterpParamsX = LastPivotInterpParamsX;
	Parms.LastPivotInterpParamsY = LastPivotInterpParamsY;
	Parms.LastPivotInterpParamsZ = LastPivotInterpParamsZ;
	Parms.PivotInterpParamsX = PivotInterpParamsX;
	Parms.PivotInterpParamsY = PivotInterpParamsY;
	Parms.PivotInterpParamsZ = PivotInterpParamsZ;
	Parms.__WorldContext = __WorldContext;
	Parms.PrintModifierAlpha = PrintModifierAlpha;
	Parms.TheScreenArea = TheScreenArea;
	Parms.CharScreenAreaY = CharScreenAreaY;
	Parms.CharScreenAreaX = CharScreenAreaX;
	Parms.EntryIndexForLerping = EntryIndexForLerping;
	Parms.bFoundInterpRange = bFoundInterpRange;
	Parms.LerpAlpha = LerpAlpha;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsTimeSince_ReturnValue_1 = CallFunc_IsTimeSince_ReturnValue_1;
	Parms.CallFunc_IsProneOrSitting_ReturnValue = CallFunc_IsProneOrSitting_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue_2 = CallFunc_IsTimeSince_ReturnValue_2;
	Parms.CallFunc_IsCrouching_ReturnValue = CallFunc_IsCrouching_ReturnValue;
	Parms.CallFunc_ShouldUseLongFallCameraPivotZValues_ReturnValue = CallFunc_ShouldUseLongFallCameraPivotZValues_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue_2 = CallFunc_FInterpTo_ReturnValue_2;
	Parms.K2Node_MakeStruct_PrimalCameraInterpParams = K2Node_MakeStruct_PrimalCameraInterpParams;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast = CallFunc_FInterpTo_Current_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_1 = CallFunc_FInterpTo_Current_ImplicitCast_1;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_2 = CallFunc_FInterpTo_Current_ImplicitCast_2;
	Parms.CallFunc_FInterpTo_InterpSpeed_ImplicitCast = CallFunc_FInterpTo_InterpSpeed_ImplicitCast;
	Parms.CallFunc_FInterpTo_InterpSpeed_ImplicitCast_1 = CallFunc_FInterpTo_InterpSpeed_ImplicitCast_1;
	Parms.CallFunc_FInterpTo_InterpSpeed_ImplicitCast_2 = CallFunc_FInterpTo_InterpSpeed_ImplicitCast_2;
	Parms.CallFunc_FInterpTo_Target_ImplicitCast = CallFunc_FInterpTo_Target_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast = CallFunc_Less_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_FInterpTo_Target_ImplicitCast_1 = CallFunc_FInterpTo_Target_ImplicitCast_1;
	Parms.CallFunc_FInterpTo_Target_ImplicitCast_2 = CallFunc_FInterpTo_Target_ImplicitCast_2;
	Parms.K2Node_MakeStruct_TargetVelocity_ImplicitCast = K2Node_MakeStruct_TargetVelocity_ImplicitCast;
	Parms.K2Node_MakeStruct_CriticalDamping_ImplicitCast = K2Node_MakeStruct_CriticalDamping_ImplicitCast;
	Parms.K2Node_MakeStruct_SpringStiffness_ImplicitCast = K2Node_MakeStruct_SpringStiffness_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyModifiersToInterpParams
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (Edit, ZeroConstructor)
// struct FPrimalCameraParams         CameraParams                                                     (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FPrimalCameraInterpParams   InterpParams                                                     (None)
// TArray<struct FPrimalCameraInterpScreenAreaModifier>InterpParamsModifiers                                            (None)
// class FName                        DebugScreenModifierId                                            (None)
// class UObject*                     __WorldContext                                                   (Edit, ZeroConstructor)
// bool                               bIsCrouchedOrProne                                               (None)
// struct FPrimalCameraInterpScreenAreaModifierScreenModifierForDebug                                           (None)
// double                             PrintModifierAlpha                                               (None)
// double                             TheScreenArea                                                    (None)
// double                             CharScreenAreaY                                                  (None)
// double                             CharScreenAreaX                                                  (None)
// int32                              EntryIndexForLerping                                             (None)
// bool                               bFoundInterpRange                                                (None)
// double                             LerpAlpha                                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_IsCrouching_ReturnValue                                 (None)
// bool                               CallFunc_IsProneOrSitting_ReturnValue                            (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (None)
// bool                               CallFunc_IsTimeSince_ReturnValue_1                               (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// struct FPrimalCameraInterpScreenAreaModifierCallFunc_Array_Get_Item                                          (None)
// double                             CallFunc_BreakVector2D_X                                         (None)
// double                             CallFunc_BreakVector2D_Y                                         (None)
// double                             CallFunc_FMax_ReturnValue                                        (None)
// double                             CallFunc_FMin_ReturnValue                                        (None)
// double                             CallFunc_BreakVector2D_X_1                                       (None)
// double                             CallFunc_BreakVector2D_Y_1                                       (None)
// double                             CallFunc_FMax_ReturnValue_1                                      (None)
// double                             CallFunc_FMin_ReturnValue_1                                      (None)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue                          (None)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue_1                        (None)
// double                             CallFunc_WorldLocationToScreenArea_ScreenAreaX                   (None)
// double                             CallFunc_WorldLocationToScreenArea_ScreenAreaY                   (None)
// double                             CallFunc_WorldLocationToScreenArea_ViewportSizeX                 (None)
// double                             CallFunc_WorldLocationToScreenArea_ViewportSizeY                 (None)
// double                             CallFunc_WorldLocationToScreenArea_ScreenRawPosX                 (None)
// double                             CallFunc_WorldLocationToScreenArea_ScreenRawPosY                 (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// bool                               Temp_bool_Variable                                               (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// struct FPrimalCameraInterpParams   K2Node_Select_Default                                            (None)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (None)
// double                             CallFunc_SelectFloat_ReturnValue                                 (None)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (None)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (None)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (None)
// double                             CallFunc_Lerp_ReturnValue                                        (None)
// double                             CallFunc_Lerp_ReturnValue_1                                      (None)
// double                             CallFunc_Lerp_ReturnValue_2                                      (None)
// struct FPrimalCameraInterpParams   K2Node_MakeStruct_PrimalCameraInterpParams                       (None)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (None)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (None)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (None)
// double                             CallFunc_Lerp_B_ImplicitCast_1                                   (None)
// double                             CallFunc_Lerp_B_ImplicitCast_2                                   (None)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (None)
// double                             CallFunc_Lerp_A_ImplicitCast_1                                   (None)
// double                             CallFunc_Lerp_A_ImplicitCast_2                                   (None)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (None)
// float                              K2Node_MakeStruct_SpringStiffness_ImplicitCast                   (None)
// float                              K2Node_MakeStruct_TargetVelocity_ImplicitCast                    (None)
// float                              K2Node_MakeStruct_CriticalDamping_ImplicitCast                   (None)

void UASACameraFunctionLibrary_C::ApplyModifiersToInterpParams(class APrimalCharacter* CameraOwnerCharacter, const struct FPrimalCameraParams& CameraParams, const struct FPrimalCameraInterpParams& InterpParams, const TArray<struct FPrimalCameraInterpScreenAreaModifier>& InterpParamsModifiers, class FName DebugScreenModifierId, class UObject* __WorldContext, bool bIsCrouchedOrProne, const struct FPrimalCameraInterpScreenAreaModifier& ScreenModifierForDebug, double PrintModifierAlpha, double TheScreenArea, double CharScreenAreaY, double CharScreenAreaX, int32 EntryIndexForLerping, bool bFoundInterpRange, double LerpAlpha, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsCrouching_ReturnValue, bool CallFunc_IsProneOrSitting_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_BooleanAND_ReturnValue, const struct FPrimalCameraInterpScreenAreaModifier& CallFunc_Array_Get_Item, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_FMax_ReturnValue, double CallFunc_FMin_ReturnValue, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_FMax_ReturnValue_1, double CallFunc_FMin_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue_1, double CallFunc_WorldLocationToScreenArea_ScreenAreaX, double CallFunc_WorldLocationToScreenArea_ScreenAreaY, double CallFunc_WorldLocationToScreenArea_ViewportSizeX, double CallFunc_WorldLocationToScreenArea_ViewportSizeY, double CallFunc_WorldLocationToScreenArea_ScreenRawPosX, double CallFunc_WorldLocationToScreenArea_ScreenRawPosY, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FPrimalCameraInterpParams& K2Node_Select_Default, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Subtract_DoubleFloat_ReturnValue, double CallFunc_Subtract_DoubleFloat_ReturnValue_1, double CallFunc_Divide_DoubleFloat_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, const struct FPrimalCameraInterpParams& K2Node_MakeStruct_PrimalCameraInterpParams, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast_1, double CallFunc_Lerp_B_ImplicitCast_2, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast_1, double CallFunc_Lerp_A_ImplicitCast_2, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float K2Node_MakeStruct_SpringStiffness_ImplicitCast, float K2Node_MakeStruct_TargetVelocity_ImplicitCast, float K2Node_MakeStruct_CriticalDamping_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "ApplyModifiersToInterpParams");

	Params::UASACameraFunctionLibrary_C_ApplyModifiersToInterpParams_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.CameraParams = CameraParams;
	Parms.InterpParams = InterpParams;
	Parms.InterpParamsModifiers = InterpParamsModifiers;
	Parms.DebugScreenModifierId = DebugScreenModifierId;
	Parms.__WorldContext = __WorldContext;
	Parms.bIsCrouchedOrProne = bIsCrouchedOrProne;
	Parms.ScreenModifierForDebug = ScreenModifierForDebug;
	Parms.PrintModifierAlpha = PrintModifierAlpha;
	Parms.TheScreenArea = TheScreenArea;
	Parms.CharScreenAreaY = CharScreenAreaY;
	Parms.CharScreenAreaX = CharScreenAreaX;
	Parms.EntryIndexForLerping = EntryIndexForLerping;
	Parms.bFoundInterpRange = bFoundInterpRange;
	Parms.LerpAlpha = LerpAlpha;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsCrouching_ReturnValue = CallFunc_IsCrouching_ReturnValue;
	Parms.CallFunc_IsProneOrSitting_ReturnValue = CallFunc_IsProneOrSitting_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue_1 = CallFunc_IsTimeSince_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.CallFunc_FMin_ReturnValue_1 = CallFunc_FMin_ReturnValue_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue = CallFunc_InRange_FloatFloat_ReturnValue;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue_1 = CallFunc_InRange_FloatFloat_ReturnValue_1;
	Parms.CallFunc_WorldLocationToScreenArea_ScreenAreaX = CallFunc_WorldLocationToScreenArea_ScreenAreaX;
	Parms.CallFunc_WorldLocationToScreenArea_ScreenAreaY = CallFunc_WorldLocationToScreenArea_ScreenAreaY;
	Parms.CallFunc_WorldLocationToScreenArea_ViewportSizeX = CallFunc_WorldLocationToScreenArea_ViewportSizeX;
	Parms.CallFunc_WorldLocationToScreenArea_ViewportSizeY = CallFunc_WorldLocationToScreenArea_ViewportSizeY;
	Parms.CallFunc_WorldLocationToScreenArea_ScreenRawPosX = CallFunc_WorldLocationToScreenArea_ScreenRawPosX;
	Parms.CallFunc_WorldLocationToScreenArea_ScreenRawPosY = CallFunc_WorldLocationToScreenArea_ScreenRawPosY;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue = CallFunc_Subtract_DoubleFloat_ReturnValue;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1 = CallFunc_Subtract_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue = CallFunc_Divide_DoubleFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.K2Node_MakeStruct_PrimalCameraInterpParams = K2Node_MakeStruct_PrimalCameraInterpParams;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast = CallFunc_Lerp_B_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast_1 = CallFunc_Lerp_B_ImplicitCast_1;
	Parms.CallFunc_Lerp_B_ImplicitCast_2 = CallFunc_Lerp_B_ImplicitCast_2;
	Parms.CallFunc_Lerp_A_ImplicitCast = CallFunc_Lerp_A_ImplicitCast;
	Parms.CallFunc_Lerp_A_ImplicitCast_1 = CallFunc_Lerp_A_ImplicitCast_1;
	Parms.CallFunc_Lerp_A_ImplicitCast_2 = CallFunc_Lerp_A_ImplicitCast_2;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;
	Parms.K2Node_MakeStruct_SpringStiffness_ImplicitCast = K2Node_MakeStruct_SpringStiffness_ImplicitCast;
	Parms.K2Node_MakeStruct_TargetVelocity_ImplicitCast = K2Node_MakeStruct_TargetVelocity_ImplicitCast;
	Parms.K2Node_MakeStruct_CriticalDamping_ImplicitCast = K2Node_MakeStruct_CriticalDamping_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.WorldLocationToScreenArea
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrimalCharacter*            CameraOwnerCharacter                                             (ZeroConstructor)
// struct FVector                     WorldLocationToProject                                           (None)
// class UObject*                     __WorldContext                                                   (ZeroConstructor)
// double                             ScreenAreaX                                                      (None)
// double                             ScreenAreaY                                                      (None)
// double                             ViewportSizeX                                                    (None)
// double                             ViewportSizeY                                                    (None)
// double                             ScreenRawPosX                                                    (None)
// double                             ScreenRawPosY                                                    (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor)
// class APlayerController*           CallFunc_CastToPlayerController_ReturnValue                      (None)
// struct FVector2D                   CallFunc_ProjectWorldToScreen_ScreenPosition                     (None)
// bool                               CallFunc_ProjectWorldToScreen_ReturnValue                        (None)
// struct FGeometry                   CallFunc_GetPlayerScreenWidgetGeometry_ReturnValue               (None)
// double                             CallFunc_BreakVector2D_X                                         (None)
// double                             CallFunc_BreakVector2D_Y                                         (None)
// struct FVector2D                   CallFunc_GetAbsoluteSize_ReturnValue                             (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// double                             CallFunc_BreakVector2D_X_1                                       (None)
// double                             CallFunc_BreakVector2D_Y_1                                       (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (None)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (None)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (None)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast_1                     (None)

void UASACameraFunctionLibrary_C::WorldLocationToScreenArea(class APrimalCharacter* CameraOwnerCharacter, const struct FVector& WorldLocationToProject, class UObject* __WorldContext, double ScreenAreaX, double ScreenAreaY, double ViewportSizeX, double ViewportSizeY, double ScreenRawPosX, double ScreenRawPosY, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APlayerController* CallFunc_CastToPlayerController_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldToScreen_ScreenPosition, bool CallFunc_ProjectWorldToScreen_ReturnValue, const struct FGeometry& CallFunc_GetPlayerScreenWidgetGeometry_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetAbsoluteSize_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Divide_DoubleFloat_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleFloat_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Divide_DoubleFloat_B_ImplicitCast, float CallFunc_Divide_DoubleFloat_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ASACameraFunctionLibrary_C", "WorldLocationToScreenArea");

	Params::UASACameraFunctionLibrary_C_WorldLocationToScreenArea_Params Parms{};

	Parms.CameraOwnerCharacter = CameraOwnerCharacter;
	Parms.WorldLocationToProject = WorldLocationToProject;
	Parms.__WorldContext = __WorldContext;
	Parms.ScreenAreaX = ScreenAreaX;
	Parms.ScreenAreaY = ScreenAreaY;
	Parms.ViewportSizeX = ViewportSizeX;
	Parms.ViewportSizeY = ViewportSizeY;
	Parms.ScreenRawPosX = ScreenRawPosX;
	Parms.ScreenRawPosY = ScreenRawPosY;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_CastToPlayerController_ReturnValue = CallFunc_CastToPlayerController_ReturnValue;
	Parms.CallFunc_ProjectWorldToScreen_ScreenPosition = CallFunc_ProjectWorldToScreen_ScreenPosition;
	Parms.CallFunc_ProjectWorldToScreen_ReturnValue = CallFunc_ProjectWorldToScreen_ReturnValue;
	Parms.CallFunc_GetPlayerScreenWidgetGeometry_ReturnValue = CallFunc_GetPlayerScreenWidgetGeometry_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetAbsoluteSize_ReturnValue = CallFunc_GetAbsoluteSize_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue = CallFunc_Divide_DoubleFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue_1 = CallFunc_Divide_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 = CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast = CallFunc_Divide_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleFloat_B_ImplicitCast_1 = CallFunc_Divide_DoubleFloat_B_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


