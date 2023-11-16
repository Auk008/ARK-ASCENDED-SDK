#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapLance.WeapLance_C
// (Actor)

class UClass* AWeapLance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapLance_C");

	return Clss;
}


// WeapLance_C WeapLance.Default__WeapLance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapLance_C* AWeapLance_C::GetDefaultObj()
{
	static class AWeapLance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapLance_C*>(AWeapLance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeapLance.WeapLance_C.DoTrace
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Start                                                            (None)
// struct FVector                     End                                                              (None)
// TArray<class AActor*>              Temp_object_Variable                                             (ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// TArray<class AActor*>              Temp_object_Variable_1                                           (ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TArray<struct FHitResult>          CallFunc_SphereTraceMulti_OutHits                                (Edit, ZeroConstructor)
// bool                               CallFunc_SphereTraceMulti_ReturnValue                            (None)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (None)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (None)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (None)
// float                              CallFunc_BreakHitResult_Time                                     (None)
// float                              CallFunc_BreakHitResult_Distance                                 (None)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (None)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (None)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (None)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (None)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, ZeroConstructor)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (None)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (None)
// int32                              CallFunc_BreakHitResult_HitItem                                  (None)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (None)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (None)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (None)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (None)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (None)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)
// bool                               CallFunc_Array_Contains_ReturnValue                              (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void AWeapLance_C::DoTrace(const struct FVector& Start, const struct FVector& End, const TArray<class AActor*>& Temp_object_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const TArray<class AActor*>& Temp_object_Variable_1, const TArray<struct FHitResult>& CallFunc_SphereTraceMulti_OutHits, bool CallFunc_SphereTraceMulti_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "DoTrace");

	Params::AWeapLance_C_DoTrace_Params Parms{};

	Parms.Start = Start;
	Parms.End = End;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_SphereTraceMulti_OutHits = CallFunc_SphereTraceMulti_OutHits;
	Parms.CallFunc_SphereTraceMulti_ReturnValue = CallFunc_SphereTraceMulti_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeapLance.WeapLance_C.DamageActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Victim                                                           (Edit, ZeroConstructor)
// struct FHitResult                  HitInfo                                                          (Edit, ZeroConstructor)
// bool                               bIsDino                                                          (None)
// bool                               Temp_bool_Variable                                               (None)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (None)
// double                             Temp_real_Variable                                               (None)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (None)
// bool                               CallFunc_IsBroken_ReturnValue                                    (None)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (None)
// double                             K2Node_Select_Default                                            (None)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (None)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (None)
// class AController*                 CallFunc_GetController_ReturnValue                               (None)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (None)
// float                              CallFunc_GetWeaponDamageMultiplier_ReturnValue                   (None)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (None)
// float                              CallFunc_ApplyPointDamage_ReturnValue                            (None)
// float                              CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast          (None)
// float                              CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast                 (None)
// double                             K2Node_Select_Option_0_ImplicitCast                              (None)
// float                              CallFunc_ApplyPointDamage_Impulse_ImplicitCast                   (None)
// double                             CallFunc_Multiply_IntFloat_B_ImplicitCast                        (None)
// float                              CallFunc_ApplyPointDamage_BaseDamage_ImplicitCast                (None)

void AWeapLance_C::DamageActor(class AActor* Victim, const struct FHitResult& HitInfo, bool bIsDino, bool Temp_bool_Variable, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double Temp_real_Variable, double CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, bool CallFunc_IsBroken_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, double K2Node_Select_Default, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AController* CallFunc_GetController_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_GetWeaponDamageMultiplier_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_ApplyPointDamage_ReturnValue, float CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast, float CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast, double K2Node_Select_Option_0_ImplicitCast, float CallFunc_ApplyPointDamage_Impulse_ImplicitCast, double CallFunc_Multiply_IntFloat_B_ImplicitCast, float CallFunc_ApplyPointDamage_BaseDamage_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "DamageActor");

	Params::AWeapLance_C_DamageActor_Params Parms{};

	Parms.Victim = Victim;
	Parms.HitInfo = HitInfo;
	Parms.bIsDino = bIsDino;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.CallFunc_IsBroken_ReturnValue = CallFunc_IsBroken_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_GetWeaponDamageMultiplier_ReturnValue = CallFunc_GetWeaponDamageMultiplier_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_ApplyPointDamage_ReturnValue = CallFunc_ApplyPointDamage_ReturnValue;
	Parms.CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast = CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast;
	Parms.CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast = CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast;
	Parms.K2Node_Select_Option_0_ImplicitCast = K2Node_Select_Option_0_ImplicitCast;
	Parms.CallFunc_ApplyPointDamage_Impulse_ImplicitCast = CallFunc_ApplyPointDamage_Impulse_ImplicitCast;
	Parms.CallFunc_Multiply_IntFloat_B_ImplicitCast = CallFunc_Multiply_IntFloat_B_ImplicitCast;
	Parms.CallFunc_ApplyPointDamage_BaseDamage_ImplicitCast = CallFunc_ApplyPointDamage_BaseDamage_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeapLance.WeapLance_C.DoTraceAttacks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (ZeroConstructor)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (None)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (None)
// struct FVector                     CallFunc_Array_Get_Item                                          (None)
// struct FVector                     CallFunc_Array_Get_Item_1                                        (None)
// struct FVector                     CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (None)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (None)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_2                         (None)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue_1                               (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (None)

void AWeapLance_C::DoTraceAttacks(class UWorld* CallFunc_K2_GetWorld_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, class UWorld* CallFunc_K2_GetWorld_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "DoTraceAttacks");

	Params::AWeapLance_C_DoTraceAttacks_Params Parms{};

	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue_2 = CallFunc_GetSocketLocation_ReturnValue_2;
	Parms.CallFunc_K2_GetWorld_ReturnValue_1 = CallFunc_K2_GetWorld_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeapLance.WeapLance_C.BPForceTPVTargetingAnimation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (None)

void AWeapLance_C::BPForceTPVTargetingAnimation(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "BPForceTPVTargetingAnimation");

	Params::AWeapLance_C_BPForceTPVTargetingAnimation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeapLance.WeapLance_C.ReceiveTick
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (None)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (None)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (ZeroConstructor)
// bool                               CallFunc_IsFirstPerson_ReturnValue                               (None)
// bool                               CallFunc_IsLocallyControlledByPlayer_ReturnValue                 (None)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (ZeroConstructor)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue_1                                 (None)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_2                 (ZeroConstructor)
// bool                               Temp_bool_Variable                                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// double                             K2Node_Select_Default                                            (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (None)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor)
// float                              CallFunc_BPGetCurrentStatusValue_ReturnValue                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// float                              CallFunc_ModifyCurrentStatusValue_ReturnValue                    (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (None)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (None)
// bool                               CallFunc_IsRunning_ReturnValue                                   (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (None)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (None)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (None)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (None)
// float                              CallFunc_ModifyCurrentStatusValue_Amount_ImplicitCast            (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (None)

void AWeapLance_C::ReceiveTick(float DeltaSeconds, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_IsFirstPerson_ReturnValue, bool CallFunc_IsLocallyControlledByPlayer_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FRotator& CallFunc_RInterpTo_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_2, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, double K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue, class AController* CallFunc_GetController_ReturnValue, float CallFunc_BPGetCurrentStatusValue_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_ModifyCurrentStatusValue_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsRunning_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_ModifyCurrentStatusValue_Amount_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "ReceiveTick");

	Params::AWeapLance_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_RInterpTo_ReturnValue = CallFunc_RInterpTo_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_IsFirstPerson_ReturnValue = CallFunc_IsFirstPerson_ReturnValue;
	Parms.CallFunc_IsLocallyControlledByPlayer_ReturnValue = CallFunc_IsLocallyControlledByPlayer_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
	Parms.CallFunc_RInterpTo_ReturnValue_1 = CallFunc_RInterpTo_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_2 = CallFunc_K2_SetRelativeRotation_SweepHitResult_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_BPGetCurrentStatusValue_ReturnValue = CallFunc_BPGetCurrentStatusValue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_ModifyCurrentStatusValue_ReturnValue = CallFunc_ModifyCurrentStatusValue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsRunning_ReturnValue = CallFunc_IsRunning_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_ModifyCurrentStatusValue_Amount_ImplicitCast = CallFunc_ModifyCurrentStatusValue_Amount_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WeapLance.WeapLance_C.BPHandleMeleeAttack
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeapLance_C::BPHandleMeleeAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "BPHandleMeleeAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeapLance.WeapLance_C.BPStopMeleeAttack
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeapLance_C::BPStopMeleeAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "BPStopMeleeAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeapLance.WeapLance_C.DoPlayStartAttackingSound
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeapLance_C::DoPlayStartAttackingSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "DoPlayStartAttackingSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeapLance.WeapLance_C.DoPlayStopAttackingSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeapLance_C::DoPlayStopAttackingSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "DoPlayStopAttackingSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeapLance.WeapLance_C.DidDismountHit
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeapLance_C::DidDismountHit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "DidDismountHit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeapLance.WeapLance_C.ExecuteUbergraph_WeapLance
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (None)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (None)
// bool                               CallFunc_IsLocallyOwned_ReturnValue                              (None)
// struct FWeaponAnim                 K2Node_MakeStruct_WeaponAnim                                     (None)
// float                              CallFunc_PlayWeaponAnimation_ReturnValue                         (None)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (None)
// float                              CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast          (None)

void AWeapLance_C::ExecuteUbergraph_WeapLance(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsServer_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsLocallyOwned_ReturnValue, const struct FWeaponAnim& K2Node_MakeStruct_WeaponAnim, float CallFunc_PlayWeaponAnimation_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, float CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapLance_C", "ExecuteUbergraph_WeapLance");

	Params::AWeapLance_C_ExecuteUbergraph_WeapLance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsLocallyOwned_ReturnValue = CallFunc_IsLocallyOwned_ReturnValue;
	Parms.K2Node_MakeStruct_WeaponAnim = K2Node_MakeStruct_WeaponAnim;
	Parms.CallFunc_PlayWeaponAnimation_ReturnValue = CallFunc_PlayWeaponAnimation_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast = CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


