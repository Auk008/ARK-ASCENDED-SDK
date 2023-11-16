#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C
// (None)

class UClass* UBP_PrimalWindSourceComponent_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PrimalWindSourceComponent_Base_C");

	return Clss;
}


// BP_PrimalWindSourceComponent_Base_C BP_PrimalWindSourceComponent_Base.Default__BP_PrimalWindSourceComponent_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PrimalWindSourceComponent_Base_C* UBP_PrimalWindSourceComponent_Base_C::GetDefaultObj()
{
	static class UBP_PrimalWindSourceComponent_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PrimalWindSourceComponent_Base_C*>(UBP_PrimalWindSourceComponent_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.Get Bubble System Tag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ReturnValue                                                      (None)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (None)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (None)

void UBP_PrimalWindSourceComponent_Base_C::Get_Bubble_System_Tag(class FName ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "Get Bubble System Tag");

	Params::UBP_PrimalWindSourceComponent_Base_C_Get_Bubble_System_Tag_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.deactivate bubble system
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        BubbleSystemTag                                                  (None)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class FName                        CallFunc_Get_Bubble_System_Tag_ReturnValue                       (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ZeroConstructor)
// TArray<class UActorComponent*>     CallFunc_GetComponentsByCustomTag_ReturnValue                    (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UActorComponent*             CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// class UNiagaraComponent*           K2Node_DynamicCast_AsNiagara_Particle_System_Component           (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)

void UBP_PrimalWindSourceComponent_Base_C::Deactivate_bubble_system(class FName BubbleSystemTag, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_Get_Bubble_System_Tag_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const TArray<class UActorComponent*>& CallFunc_GetComponentsByCustomTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "deactivate bubble system");

	Params::UBP_PrimalWindSourceComponent_Base_C_Deactivate_bubble_system_Params Parms{};

	Parms.BubbleSystemTag = BubbleSystemTag;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Get_Bubble_System_Tag_ReturnValue = CallFunc_Get_Bubble_System_Tag_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentsByCustomTag_ReturnValue = CallFunc_GetComponentsByCustomTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsNiagara_Particle_System_Component = K2Node_DynamicCast_AsNiagara_Particle_System_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.Creating Bubbles Code
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Current_location                                                 (None)
// struct FVector                     Delta                                                            (None)
// class FName                        BubbleSystemTag                                                  (None)
// class UNiagaraComponent*           Local_bubble_system_ref                                          (Edit, ZeroConstructor)
// bool                               Has_Existing_Bubble_System                                       (None)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, ZeroConstructor)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue_1                (Edit, ZeroConstructor)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (None)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (None)
// double                             CallFunc_SafeDivide_ReturnValue                                  (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// class FName                        CallFunc_Get_Bubble_System_Tag_ReturnValue                       (None)
// double                             CallFunc_VSize_ReturnValue                                       (None)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (None)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (None)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (None)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (None)
// TArray<class AActor*>              Temp_object_Variable                                             (Edit, ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// struct FVector                     CallFunc_GetCurrentWindSourceLocation_ReturnValue                (None)
// struct FVector                     CallFunc_GetCurrentExtraCapsuleWindSourceLocation_ReturnValue    (None)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// TArray<class UActorComponent*>     CallFunc_GetComponentsByCustomTag_ReturnValue                    (Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
// class UActorComponent*             CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UNiagaraComponent*           K2Node_DynamicCast_AsNiagara_Particle_System_Component           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_IsActive_ReturnValue                                    (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (None)
// TArray<struct FHitResult>          CallFunc_SphereTraceMulti_OutHits                                (None)
// bool                               CallFunc_SphereTraceMulti_ReturnValue                            (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_1                 (None)

void UBP_PrimalWindSourceComponent_Base_C::Creating_Bubbles_Code(const struct FVector& Current_location, const struct FVector& Delta, class FName BubbleSystemTag, class UNiagaraComponent* Local_bubble_system_ref, bool Has_Existing_Bubble_System, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, class FName CallFunc_Get_Bubble_System_Tag_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_GetCurrentWindSourceLocation_ReturnValue, const struct FVector& CallFunc_GetCurrentExtraCapsuleWindSourceLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, const TArray<class UActorComponent*>& CallFunc_GetComponentsByCustomTag_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const TArray<struct FHitResult>& CallFunc_SphereTraceMulti_OutHits, bool CallFunc_SphereTraceMulti_ReturnValue, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "Creating Bubbles Code");

	Params::UBP_PrimalWindSourceComponent_Base_C_Creating_Bubbles_Code_Params Parms{};

	Parms.Current_location = Current_location;
	Parms.Delta = Delta;
	Parms.BubbleSystemTag = BubbleSystemTag;
	Parms.Local_bubble_system_ref = Local_bubble_system_ref;
	Parms.Has_Existing_Bubble_System = Has_Existing_Bubble_System;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue_1 = CallFunc_GetShooterGameUserSettings_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = CallFunc_Conv_DoubleToVector_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Get_Bubble_System_Tag_ReturnValue = CallFunc_Get_Bubble_System_Tag_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetCurrentWindSourceLocation_ReturnValue = CallFunc_GetCurrentWindSourceLocation_ReturnValue;
	Parms.CallFunc_GetCurrentExtraCapsuleWindSourceLocation_ReturnValue = CallFunc_GetCurrentExtraCapsuleWindSourceLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentsByCustomTag_ReturnValue = CallFunc_GetComponentsByCustomTag_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsNiagara_Particle_System_Component = K2Node_DynamicCast_AsNiagara_Particle_System_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_SphereTraceMulti_OutHits = CallFunc_SphereTraceMulti_OutHits;
	Parms.CallFunc_SphereTraceMulti_ReturnValue = CallFunc_SphereTraceMulti_ReturnValue;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast = CallFunc_SetVariableFloat_InValue_ImplicitCast;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_1 = CallFunc_SetVariableFloat_InValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.PlayFluidImpactEffectSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PenetrationScalar                                                (None)
// struct FVector                     ImpactLocation                                                   (None)
// bool                               Exited                                                           (None)
// struct FVector                     OwnerVelocity                                                    (None)
// class USoundBase*                  Temp_object_Variable                                             (Edit, ZeroConstructor)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (None)
// double                             CallFunc_FMin_ReturnValue                                        (None)
// double                             CallFunc_FMin_ReturnValue_1                                      (None)
// int32                              CallFunc_Round_ReturnValue                                       (None)
// int32                              CallFunc_Round_ReturnValue_1                                     (None)
// class USoundBase*                  Temp_object_Variable_1                                           (Edit, ZeroConstructor)
// class USoundBase*                  Temp_object_Variable_2                                           (Edit, ZeroConstructor)
// class USoundBase*                  Temp_object_Variable_3                                           (Edit, ZeroConstructor)
// class USoundBase*                  Temp_object_Variable_4                                           (Edit, ZeroConstructor)
// int32                              Temp_int_Variable                                                (None)
// class USoundBase*                  Temp_object_Variable_5                                           (Edit, ZeroConstructor)
// class USoundBase*                  Temp_object_Variable_6                                           (Edit, ZeroConstructor)
// class USoundBase*                  Temp_object_Variable_7                                           (Edit, ZeroConstructor)
// class USoundBase*                  Temp_object_Variable_8                                           (Edit, ZeroConstructor)
// class USoundBase*                  Temp_object_Variable_9                                           (Edit, ZeroConstructor)
// class USoundBase*                  K2Node_Select_Default                                            (Edit, ZeroConstructor)
// class USoundBase*                  Temp_object_Variable_10                                          (Edit, ZeroConstructor)
// int32                              Temp_int_Variable_1                                              (None)
// class USoundBase*                  K2Node_Select_Default_1                                          (None)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (None)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1                   (None)

void UBP_PrimalWindSourceComponent_Base_C::PlayFluidImpactEffectSound(float PenetrationScalar, const struct FVector& ImpactLocation, bool Exited, const struct FVector& OwnerVelocity, class USoundBase* Temp_object_Variable, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double CallFunc_FMin_ReturnValue, double CallFunc_FMin_ReturnValue_1, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, int32 Temp_int_Variable, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase* K2Node_Select_Default, class USoundBase* Temp_object_Variable_10, int32 Temp_int_Variable_1, class USoundBase* K2Node_Select_Default_1, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "PlayFluidImpactEffectSound");

	Params::UBP_PrimalWindSourceComponent_Base_C_PlayFluidImpactEffectSound_Params Parms{};

	Parms.PenetrationScalar = PenetrationScalar;
	Parms.ImpactLocation = ImpactLocation;
	Parms.Exited = Exited;
	Parms.OwnerVelocity = OwnerVelocity;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue_1 = CallFunc_FMin_ReturnValue_1;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast = CallFunc_Multiply_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1 = CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.PlayFluidImpactEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PenetrationScalar                                                (None)
// struct FVector                     ImpactLocation                                                   (None)
// bool                               Exited                                                           (None)
// struct FVector                     OwnerVelocity                                                    (None)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (Edit, ZeroConstructor)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (None)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (None)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ZeroConstructor)
// struct FVector                     CallFunc_GetCurrentWindSourceLocation_ReturnValue                (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_BPFastTrace_ReturnValue                                 (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (None)
// struct FHitResult                  CallFunc_VTraceSingleBP_OutHit                                   (None)
// bool                               CallFunc_VTraceSingleBP_ReturnValue                              (None)
// struct FVector                     CallFunc_SetVariableVec3_InValue_ImplicitCast                    (None)
// struct FVector                     CallFunc_Multiply_VectorVector_A_ImplicitCast                    (None)

void UBP_PrimalWindSourceComponent_Base_C::PlayFluidImpactEffect(float PenetrationScalar, const struct FVector& ImpactLocation, bool Exited, const struct FVector& OwnerVelocity, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetCurrentWindSourceLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BPFastTrace_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_VTraceSingleBP_OutHit, bool CallFunc_VTraceSingleBP_ReturnValue, const struct FVector& CallFunc_SetVariableVec3_InValue_ImplicitCast, const struct FVector& CallFunc_Multiply_VectorVector_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "PlayFluidImpactEffect");

	Params::UBP_PrimalWindSourceComponent_Base_C_PlayFluidImpactEffect_Params Parms{};

	Parms.PenetrationScalar = PenetrationScalar;
	Parms.ImpactLocation = ImpactLocation;
	Parms.Exited = Exited;
	Parms.OwnerVelocity = OwnerVelocity;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetCurrentWindSourceLocation_ReturnValue = CallFunc_GetCurrentWindSourceLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BPFastTrace_ReturnValue = CallFunc_BPFastTrace_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_VTraceSingleBP_OutHit = CallFunc_VTraceSingleBP_OutHit;
	Parms.CallFunc_VTraceSingleBP_ReturnValue = CallFunc_VTraceSingleBP_ReturnValue;
	Parms.CallFunc_SetVariableVec3_InValue_ImplicitCast = CallFunc_SetVariableVec3_InValue_ImplicitCast;
	Parms.CallFunc_Multiply_VectorVector_A_ImplicitCast = CallFunc_Multiply_VectorVector_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.calc_velocity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetCurrentWindSourceLocation_ReturnValue                (None)
// double                             CallFunc_BreakVector_X                                           (None)
// double                             CallFunc_BreakVector_Y                                           (None)
// double                             CallFunc_BreakVector_Z                                           (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (None)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (None)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (None)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_2                     (None)
// struct FVector3f                   K2Node_VariableSet_CurrentVelocity_ImplicitCast                  (None)
// struct FVector                     K2Node_VariableSet_actor_velocity_prev_ImplicitCast              (None)
// struct FVector                     CallFunc_Subtract_VectorVector_A_ImplicitCast                    (None)

void UBP_PrimalWindSourceComponent_Base_C::Calc_velocity(const struct FVector& CallFunc_GetCurrentWindSourceLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, const struct FVector3f& K2Node_VariableSet_CurrentVelocity_ImplicitCast, const struct FVector& K2Node_VariableSet_actor_velocity_prev_ImplicitCast, const struct FVector& CallFunc_Subtract_VectorVector_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "calc_velocity");

	Params::UBP_PrimalWindSourceComponent_Base_C_Calc_velocity_Params Parms{};

	Parms.CallFunc_GetCurrentWindSourceLocation_ReturnValue = CallFunc_GetCurrentWindSourceLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_2 = CallFunc_Subtract_VectorVector_ReturnValue_2;
	Parms.K2Node_VariableSet_CurrentVelocity_ImplicitCast = K2Node_VariableSet_CurrentVelocity_ImplicitCast;
	Parms.K2Node_VariableSet_actor_velocity_prev_ImplicitCast = K2Node_VariableSet_actor_velocity_prev_ImplicitCast;
	Parms.CallFunc_Subtract_VectorVector_A_ImplicitCast = CallFunc_Subtract_VectorVector_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.event_loop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PrimalWindSourceComponent_Base_C::Event_loop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "event_loop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPImpactedFluidSurface
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactLocation                                                   (None)
// float                              PenetrationScalar                                                (None)

void UBP_PrimalWindSourceComponent_Base_C::BPImpactedFluidSurface(const struct FVector& ImpactLocation, float PenetrationScalar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "BPImpactedFluidSurface");

	Params::UBP_PrimalWindSourceComponent_Base_C_BPImpactedFluidSurface_Params Parms{};

	Parms.ImpactLocation = ImpactLocation;
	Parms.PenetrationScalar = PenetrationScalar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPExitedFluidSurface
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactLocation                                                   (None)
// float                              PenetrationScalar                                                (None)

void UBP_PrimalWindSourceComponent_Base_C::BPExitedFluidSurface(const struct FVector& ImpactLocation, float PenetrationScalar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "BPExitedFluidSurface");

	Params::UBP_PrimalWindSourceComponent_Base_C_BPExitedFluidSurface_Params Parms{};

	Parms.ImpactLocation = ImpactLocation;
	Parms.PenetrationScalar = PenetrationScalar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPImpactingFluidSurfaceTick
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactLocation                                                   (None)
// float                              PenetrationScalar                                                (None)

void UBP_PrimalWindSourceComponent_Base_C::BPImpactingFluidSurfaceTick(const struct FVector& ImpactLocation, float PenetrationScalar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "BPImpactingFluidSurfaceTick");

	Params::UBP_PrimalWindSourceComponent_Base_C_BPImpactingFluidSurfaceTick_Params Parms{};

	Parms.ImpactLocation = ImpactLocation;
	Parms.PenetrationScalar = PenetrationScalar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPHandleCreatingBubbles
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_PrimalWindSourceComponent_Base_C::BPHandleCreatingBubbles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "BPHandleCreatingBubbles");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.BPDeactivateBubbleComponent
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_PrimalWindSourceComponent_Base_C::BPDeactivateBubbleComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "BPDeactivateBubbleComponent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C.ExecuteUbergraph_BP_PrimalWindSourceComponent_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)
// struct FVector                     K2Node_Event_impactLocation_2                                    (None)
// float                              K2Node_Event_penetrationScalar_2                                 (None)
// struct FVector                     K2Node_Event_impactLocation_1                                    (None)
// float                              K2Node_Event_penetrationScalar_1                                 (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// double                             CallFunc_Fraction_ReturnValue                                    (None)
// int32                              CallFunc_FTrunc_ReturnValue                                      (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (None)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (None)
// double                             CallFunc_Percent_FloatFloat_ReturnValue                          (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (None)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// struct FVector                     K2Node_Event_impactLocation                                      (None)
// float                              K2Node_Event_penetrationScalar                                   (None)

void UBP_PrimalWindSourceComponent_Base_C::ExecuteUbergraph_BP_PrimalWindSourceComponent_Base(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& K2Node_Event_impactLocation_2, float K2Node_Event_penetrationScalar_2, const struct FVector& K2Node_Event_impactLocation_1, float K2Node_Event_penetrationScalar_1, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Fraction_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, double CallFunc_Percent_FloatFloat_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FVector& K2Node_Event_impactLocation, float K2Node_Event_penetrationScalar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PrimalWindSourceComponent_Base_C", "ExecuteUbergraph_BP_PrimalWindSourceComponent_Base");

	Params::UBP_PrimalWindSourceComponent_Base_C_ExecuteUbergraph_BP_PrimalWindSourceComponent_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_impactLocation_2 = K2Node_Event_impactLocation_2;
	Parms.K2Node_Event_penetrationScalar_2 = K2Node_Event_penetrationScalar_2;
	Parms.K2Node_Event_impactLocation_1 = K2Node_Event_impactLocation_1;
	Parms.K2Node_Event_penetrationScalar_1 = K2Node_Event_penetrationScalar_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Fraction_ReturnValue = CallFunc_Fraction_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.K2Node_Event_impactLocation = K2Node_Event_impactLocation;
	Parms.K2Node_Event_penetrationScalar = K2Node_Event_penetrationScalar;

	UObject::ProcessEvent(Func, &Parms);

}

}


