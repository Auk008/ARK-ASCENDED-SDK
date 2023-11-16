#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_Shield.PrimalItemArmor_Shield_C
// (None)

class UClass* UPrimalItemArmor_Shield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_Shield_C");

	return Clss;
}


// PrimalItemArmor_Shield_C PrimalItemArmor_Shield.Default__PrimalItemArmor_Shield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_Shield_C* UPrimalItemArmor_Shield_C::GetDefaultObj()
{
	static class UPrimalItemArmor_Shield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_Shield_C*>(UPrimalItemArmor_Shield_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemArmor_Shield.PrimalItemArmor_Shield_C.BPClientHandleItemNetExecCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CommandName                                                      (None)
// struct FBPNetExecParams            ExecParams                                                       (Edit, ZeroConstructor)
// class AShooterPlayerController*    ForPC                                                            (None)
// bool                               K2Node_SwitchName_CmpSuccess                                     (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// float                              CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// float                              CallFunc_Array_Get_Item_1                                        (None)
// float                              CallFunc_Array_Get_Item_2                                        (None)
// float                              CallFunc_Array_Get_Item_3                                        (None)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (None)
// float                              CallFunc_Array_Get_Item_4                                        (None)
// float                              CallFunc_Array_Get_Item_5                                        (None)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (None)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (None)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (None)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (None)
// double                             CallFunc_MakeVector_Z_ImplicitCast_1                             (None)
// double                             CallFunc_MakeVector_Y_ImplicitCast_1                             (None)
// double                             CallFunc_MakeVector_X_ImplicitCast_1                             (None)

void UPrimalItemArmor_Shield_C::BPClientHandleItemNetExecCommand(class FName CommandName, const struct FBPNetExecParams& ExecParams, class AShooterPlayerController* ForPC, bool K2Node_SwitchName_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Array_Get_Item_1, float CallFunc_Array_Get_Item_2, float CallFunc_Array_Get_Item_3, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Array_Get_Item_4, float CallFunc_Array_Get_Item_5, const struct FVector& CallFunc_MakeVector_ReturnValue_1, double CallFunc_MakeVector_Z_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast_1, double CallFunc_MakeVector_Y_ImplicitCast_1, double CallFunc_MakeVector_X_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Shield_C", "BPClientHandleItemNetExecCommand");

	Params::UPrimalItemArmor_Shield_C_BPClientHandleItemNetExecCommand_Params Parms{};

	Parms.CommandName = CommandName;
	Parms.ExecParams = ExecParams;
	Parms.ForPC = ForPC;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_MakeVector_Z_ImplicitCast = CallFunc_MakeVector_Z_ImplicitCast;
	Parms.CallFunc_MakeVector_Y_ImplicitCast = CallFunc_MakeVector_Y_ImplicitCast;
	Parms.CallFunc_MakeVector_X_ImplicitCast = CallFunc_MakeVector_X_ImplicitCast;
	Parms.CallFunc_MakeVector_Z_ImplicitCast_1 = CallFunc_MakeVector_Z_ImplicitCast_1;
	Parms.CallFunc_MakeVector_Y_ImplicitCast_1 = CallFunc_MakeVector_Y_ImplicitCast_1;
	Parms.CallFunc_MakeVector_X_ImplicitCast_1 = CallFunc_MakeVector_X_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_Shield.PrimalItemArmor_Shield_C.PlayHitShieldEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LocalOnly                                                        (None)
// struct FVector                     HitLoc                                                           (None)
// struct FVector                     FromLoc                                                          (None)
// bool                               Temp_bool_Variable                                               (None)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (None)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (None)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// double                             CallFunc_BreakVector_X                                           (None)
// double                             CallFunc_BreakVector_Y                                           (None)
// double                             CallFunc_BreakVector_Z                                           (None)
// double                             CallFunc_BreakVector_X_1                                         (None)
// double                             CallFunc_BreakVector_Y_1                                         (None)
// double                             CallFunc_BreakVector_Z_1                                         (None)
// TArray<float>                      K2Node_MakeArray_Array                                           (ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ZeroConstructor)
// int32                              Temp_int_Variable                                                (None)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (Edit, ZeroConstructor)
// class UStaticMeshComponent*        K2Node_DynamicCast_AsStatic_Mesh_Component                       (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// struct FVector                     CallFunc_GetClosestPointOnCollision_OutPointOnBody               (None)
// float                              CallFunc_GetClosestPointOnCollision_ReturnValue                  (None)
// bool                               CallFunc_IsVisible_ReturnValue                                   (None)
// int32                              CallFunc_GetAttachedComponentsNum_ReturnValue                    (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (Edit, ZeroConstructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (None)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)
// float                              K2Node_MakeArray__3__ImplicitCast                                (None)
// float                              K2Node_MakeArray__4__ImplicitCast                                (None)
// float                              K2Node_MakeArray__5__ImplicitCast                                (None)
// float                              K2Node_MakeArray__0__ImplicitCast                                (None)
// float                              K2Node_MakeArray__1__ImplicitCast                                (None)
// float                              K2Node_MakeArray__2__ImplicitCast                                (None)

void UPrimalItemArmor_Shield_C::PlayHitShieldEffect(bool LocalOnly, const struct FVector& HitLoc, const struct FVector& FromLoc, bool Temp_bool_Variable, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const TArray<float>& K2Node_MakeArray_Array, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, int32 Temp_int_Variable, class UActorComponent* CallFunc_GetAttachedComponent_ReturnValue, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_GetClosestPointOnCollision_OutPointOnBody, float CallFunc_GetClosestPointOnCollision_ReturnValue, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_GetAttachedComponentsNum_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float K2Node_MakeArray__3__ImplicitCast, float K2Node_MakeArray__4__ImplicitCast, float K2Node_MakeArray__5__ImplicitCast, float K2Node_MakeArray__0__ImplicitCast, float K2Node_MakeArray__1__ImplicitCast, float K2Node_MakeArray__2__ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Shield_C", "PlayHitShieldEffect");

	Params::UPrimalItemArmor_Shield_C_PlayHitShieldEffect_Params Parms{};

	Parms.LocalOnly = LocalOnly;
	Parms.HitLoc = HitLoc;
	Parms.FromLoc = FromLoc;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetAttachedComponent_ReturnValue = CallFunc_GetAttachedComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Mesh_Component = K2Node_DynamicCast_AsStatic_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetClosestPointOnCollision_OutPointOnBody = CallFunc_GetClosestPointOnCollision_OutPointOnBody;
	Parms.CallFunc_GetClosestPointOnCollision_ReturnValue = CallFunc_GetClosestPointOnCollision_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetAttachedComponentsNum_ReturnValue = CallFunc_GetAttachedComponentsNum_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_MakeArray__3__ImplicitCast = K2Node_MakeArray__3__ImplicitCast;
	Parms.K2Node_MakeArray__4__ImplicitCast = K2Node_MakeArray__4__ImplicitCast;
	Parms.K2Node_MakeArray__5__ImplicitCast = K2Node_MakeArray__5__ImplicitCast;
	Parms.K2Node_MakeArray__0__ImplicitCast = K2Node_MakeArray__0__ImplicitCast;
	Parms.K2Node_MakeArray__1__ImplicitCast = K2Node_MakeArray__1__ImplicitCast;
	Parms.K2Node_MakeArray__2__ImplicitCast = K2Node_MakeArray__2__ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_Shield.PrimalItemArmor_Shield_C.HandleShieldDamageBlocking
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           ForShooterCharacter                                              (Edit, ZeroConstructor)
// float                              DamageIn                                                         (None)
// struct FDamageEvent                DamageEvent                                                      (Edit, ZeroConstructor)
// class AController*                 EventInstigator                                                  (Edit, ZeroConstructor)
// class AActor*                      DamageCauser                                                     (None)
// struct FVector                     HitPoint                                                         (None)
// float                              ReturnValue                                                      (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (None)

void UPrimalItemArmor_Shield_C::HandleShieldDamageBlocking(class AShooterCharacter* ForShooterCharacter, float DamageIn, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, const struct FVector& HitPoint, float ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Shield_C", "HandleShieldDamageBlocking");

	Params::UPrimalItemArmor_Shield_C_HandleShieldDamageBlocking_Params Parms{};

	Parms.ForShooterCharacter = ForShooterCharacter;
	Parms.DamageIn = DamageIn;
	Parms.DamageEvent = DamageEvent;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;
	Parms.HitPoint = HitPoint;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


