#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C
// (None)

class UClass* UBP_VFX_Spawn_on_AnimNotify_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VFX_Spawn_on_AnimNotify_C");

	return Clss;
}


// BP_VFX_Spawn_on_AnimNotify_C BP_VFX_Spawn_on_AnimNotify.Default__BP_VFX_Spawn_on_AnimNotify_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VFX_Spawn_on_AnimNotify_C* UBP_VFX_Spawn_on_AnimNotify_C::GetDefaultObj()
{
	static class UBP_VFX_Spawn_on_AnimNotify_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VFX_Spawn_on_AnimNotify_C*>(UBP_VFX_Spawn_on_AnimNotify_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Spawn_Sound
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*             Actor                                                            (Edit, ZeroConstructor)
// struct FVector                     Location                                                         (None)
// double                             Speed                                                            (None)
// double                             Size                                                             (None)
// struct FAudio_Ground_Collection    StepSounds                                                       (Edit, ZeroConstructor)
// bool                               IsPlayer                                                         (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ZeroConstructor)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_2                        (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_3                        (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_4                        (None)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (Edit, ZeroConstructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (Edit, ZeroConstructor)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_5                        (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (None)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_2                        (Edit, ZeroConstructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (None)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (None)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_3                        (Edit, ZeroConstructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_4                        (Edit, ZeroConstructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_5                        (None)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast        (None)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1      (None)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2      (None)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3      (None)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4      (None)
// float                              CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5      (None)

void UBP_VFX_Spawn_on_AnimNotify_C::Spawn_Sound(class USceneComponent* Actor, const struct FVector& Location, double Speed, double Size, const struct FAudio_Ground_Collection& StepSounds, bool IsPlayer, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Divide_DoubleFloat_ReturnValue, double CallFunc_Divide_DoubleFloat_ReturnValue_1, double CallFunc_Divide_DoubleFloat_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleFloat_ReturnValue_3, double CallFunc_Divide_DoubleFloat_ReturnValue_4, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, double CallFunc_Divide_DoubleFloat_ReturnValue_5, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_4, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_5, float CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast, float CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1, float CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2, float CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3, float CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4, float CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_on_AnimNotify_C", "Spawn_Sound");

	Params::UBP_VFX_Spawn_on_AnimNotify_C_Spawn_Sound_Params Parms{};

	Parms.Actor = Actor;
	Parms.Location = Location;
	Parms.Speed = Speed;
	Parms.Size = Size;
	Parms.StepSounds = StepSounds;
	Parms.IsPlayer = IsPlayer;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue = CallFunc_Divide_DoubleFloat_ReturnValue;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue_1 = CallFunc_Divide_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue_2 = CallFunc_Divide_DoubleFloat_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue_3 = CallFunc_Divide_DoubleFloat_ReturnValue_3;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue_4 = CallFunc_Divide_DoubleFloat_ReturnValue_4;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue_5 = CallFunc_Divide_DoubleFloat_ReturnValue_5;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_2 = CallFunc_SpawnSoundAttached_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_3 = CallFunc_Greater_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_3 = CallFunc_SpawnSoundAttached_ReturnValue_3;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_4 = CallFunc_SpawnSoundAttached_ReturnValue_4;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_5 = CallFunc_SpawnSoundAttached_ReturnValue_5;
	Parms.CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast = CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast;
	Parms.CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1 = CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1;
	Parms.CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2 = CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2;
	Parms.CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3 = CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3;
	Parms.CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4 = CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4;
	Parms.CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5 = CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Spawn_Anim_Notify
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:

void UBP_VFX_Spawn_on_AnimNotify_C::Spawn_Anim_Notify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_on_AnimNotify_C", "Spawn_Anim_Notify");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Received_NotifyBegin
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (Edit, ZeroConstructor)
// class UAnimSequenceBase*           Animation                                                        (Edit, ZeroConstructor)
// float                              TotalDuration                                                    (None)
// struct FAnimNotifyEventReference   EventReference                                                   (Edit, ZeroConstructor, BlueprintCallable, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               ReturnValue                                                      (None)
// class FString                      AnimName                                                         (AssetRegistrySearchable, SimpleDisplay, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               ShowFootprints                                                   (None)
// bool                               IsPlayer                                                         (None)
// class UNiagaraSystem*              Niagara_System_To_Play                                           (Edit, ZeroConstructor)
// class UNiagaraSystem*              Niagara_System_Player                                            (Edit, ZeroConstructor)
// double                             Baby_Scale                                                       (None)
// double                             Dino_Size_Mult                                                   (None)
// double                             Dino_Amount_Mult                                                 (None)
// double                             Dino_Vel_Mult                                                    (None)
// struct FAudio_Ground_Collection    StepSounds                                                       (Edit, ZeroConstructor)
// double                             Total_Amount_Mult                                                (None)
// double                             Foot_Velocity_Mult                                               (None)
// class UCurveFloat*                 Curve_foot_vel                                                   (Edit, ZeroConstructor)
// class UCurveFloat*                 Curve_foot_size                                                  (Edit, ZeroConstructor)
// double                             Foot_Size_Mult                                                   (None)
// double                             Thatch                                                           (None)
// double                             Sand                                                             (None)
// double                             Pebbles                                                          (None)
// double                             Leaves                                                           (None)
// double                             Grass                                                            (None)
// double                             Friction                                                         (None)
// double                             Dust                                                             (None)
// double                             Bounce                                                           (None)
// class USkeletalMeshComponent*      SK_Mesh_Comp                                                     (Edit, ZeroConstructor)
// struct FColor                      Color                                                            (None)
// class UNiagaraComponent*           Niagara_Component                                                (ZeroConstructor)
// class FString                      NewLocalVar                                                      (AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TArray<class AActor*>              Temp_object_Variable                                             (Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (None)
// float                              CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue   (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ZeroConstructor)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// float                              CallFunc_TimeSince_ReturnValue                                   (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// bool                               CallFunc_IsShooterCharacter_ReturnValue                          (None)
// float                              CallFunc_TimeSince_ReturnValue_1                                 (None)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// double                             CallFunc_SelectFloat_ReturnValue                                 (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (Edit, ZeroConstructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (None)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (None)
// struct FVector                     CallFunc_Cross_VectorVector_ReturnValue                          (None)
// double                             CallFunc_BreakVector_X                                           (None)
// double                             CallFunc_BreakVector_Y                                           (None)
// double                             CallFunc_BreakVector_Z                                           (None)
// double                             CallFunc_Lerp_ReturnValue                                        (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (None)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (None)
// struct FStruct_Ground_Attributes   CallFunc_GetDataTableRowFromName_OutRow                          (Edit, ZeroConstructor)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_3                      (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_4                      (None)
// class USkeletalMesh*               CallFunc_GetSkeletalMeshAsset_ReturnValue                        (Edit, ZeroConstructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (Edit, ZeroConstructor)
// struct FBoxSphereBounds            CallFunc_GetImportedBounds_ReturnValue                           (None)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test_1                          (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (None)
// struct FVector                     CallFunc_BreakBoxSphereBounds_Origin                             (None)
// struct FVector                     CallFunc_BreakBoxSphereBounds_BoxExtent                          (None)
// float                              CallFunc_BreakBoxSphereBounds_SphereRadius                       (None)
// class ADino_Character_BP_C*        K2Node_DynamicCast_AsDino_Character_BP                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (None)
// float                              CallFunc_GetFloatValue_ReturnValue                               (None)
// struct FDinoContentData            CallFunc_GetDinoContentData_DinoContentData                      (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_5                      (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_6                      (None)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_7                      (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_8                      (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_9                      (None)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (None)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (Edit, ZeroConstructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (None)
// struct FVector                     CallFunc_GetVelocity_ReturnValue_1                               (None)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_2                          (None)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (None)
// bool                               CallFunc_IsConsoleBuild_ReturnValue                              (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (None)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (None)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, ZeroConstructor)
// bool                               CallFunc_Contains_ReturnValue                                    (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (None)
// struct FMatrix                     CallFunc_Conv_TransformToMatrix_ReturnValue                      (None)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (None)
// struct FVector4                    CallFunc_Matrix_TransformVector_ReturnValue                      (None)
// class FName                        CallFunc_GetSocketBoneName_ReturnValue                           (None)
// struct FVector                     CallFunc_Conv_Vector4ToVector_ReturnValue                        (None)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (None)
// struct FVector                     CallFunc_BreakTransform_Location                                 (None)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (None)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (None)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (Edit, ZeroConstructor)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (None)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (None)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (None)
// float                              CallFunc_BreakHitResult_Time                                     (None)
// float                              CallFunc_BreakHitResult_Distance                                 (None)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (None)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (None)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (None)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (None)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, ZeroConstructor)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (Edit, ZeroConstructor)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (Edit, ZeroConstructor)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (None)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (None)
// int32                              CallFunc_BreakHitResult_HitItem                                  (None)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (None)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (None)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (None)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (None)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (None)
// struct FRotator                    CallFunc_MakeRotFromYX_ReturnValue                               (None)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (None)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (None)
// struct FStruct_Ground_Attributes   CallFunc_GetDataTableRowFromName_OutRow_1                        (Edit, ZeroConstructor)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (None)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (None)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (None)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (None)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (None)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (None)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1                   (None)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_2                   (None)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_3                   (None)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_4                   (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_1                 (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_2                 (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_3                 (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_4                 (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_5                 (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_6                 (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_7                 (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_8                 (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_9                 (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_10                (None)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (None)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (None)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (None)

void UBP_VFX_Spawn_on_AnimNotify_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const struct FAnimNotifyEventReference& EventReference, bool ReturnValue, const class FString& AnimName, bool ShowFootprints, bool IsPlayer, class UNiagaraSystem* Niagara_System_To_Play, class UNiagaraSystem* Niagara_System_Player, double Baby_Scale, double Dino_Size_Mult, double Dino_Amount_Mult, double Dino_Vel_Mult, const struct FAudio_Ground_Collection& StepSounds, double Total_Amount_Mult, double Foot_Velocity_Mult, class UCurveFloat* Curve_foot_vel, class UCurveFloat* Curve_foot_size, double Foot_Size_Mult, double Thatch, double Sand, double Pebbles, double Leaves, double Grass, double Friction, double Dust, double Bounce, class USkeletalMeshComponent* SK_Mesh_Comp, const struct FColor& Color, class UNiagaraComponent* Niagara_Component, const class FString& NewLocalVar, const TArray<class AActor*>& Temp_object_Variable, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_TimeSince_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsShooterCharacter_ReturnValue, float CallFunc_TimeSince_ReturnValue_1, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Lerp_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, const struct FStruct_Ground_Attributes& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_2, double CallFunc_Multiply_DoubleFloat_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_4, class USkeletalMesh* CallFunc_GetSkeletalMeshAsset_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, const struct FBoxSphereBounds& CallFunc_GetImportedBounds_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test_1, bool K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_BreakBoxSphereBounds_Origin, const struct FVector& CallFunc_BreakBoxSphereBounds_BoxExtent, float CallFunc_BreakBoxSphereBounds_SphereRadius, class ADino_Character_BP_C* K2Node_DynamicCast_AsDino_Character_BP, bool K2Node_DynamicCast_bSuccess_4, float CallFunc_GetFloatValue_ReturnValue, const struct FDinoContentData& CallFunc_GetDinoContentData_DinoContentData, double CallFunc_Multiply_DoubleFloat_ReturnValue_5, double CallFunc_Multiply_DoubleFloat_ReturnValue_6, float CallFunc_GetFloatValue_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_7, double CallFunc_Multiply_DoubleFloat_ReturnValue_8, double CallFunc_Multiply_DoubleFloat_ReturnValue_9, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue_2, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_IsConsoleBuild_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FMatrix& CallFunc_Conv_TransformToMatrix_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FVector4& CallFunc_Matrix_TransformVector_ReturnValue, class FName CallFunc_GetSocketBoneName_ReturnValue, const struct FVector& CallFunc_Conv_Vector4ToVector_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const struct FRotator& CallFunc_MakeRotFromYX_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FStruct_Ground_Attributes& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast_2, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast_3, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast_4, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast_2, float CallFunc_SetVariableFloat_InValue_ImplicitCast_3, float CallFunc_SetVariableFloat_InValue_ImplicitCast_4, float CallFunc_SetVariableFloat_InValue_ImplicitCast_5, float CallFunc_SetVariableFloat_InValue_ImplicitCast_6, float CallFunc_SetVariableFloat_InValue_ImplicitCast_7, float CallFunc_SetVariableFloat_InValue_ImplicitCast_8, float CallFunc_SetVariableFloat_InValue_ImplicitCast_9, float CallFunc_SetVariableFloat_InValue_ImplicitCast_10, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_on_AnimNotify_C", "Received_NotifyBegin");

	Params::UBP_VFX_Spawn_on_AnimNotify_C_Received_NotifyBegin_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;
	Parms.EventReference = EventReference;
	Parms.ReturnValue = ReturnValue;
	Parms.AnimName = AnimName;
	Parms.ShowFootprints = ShowFootprints;
	Parms.IsPlayer = IsPlayer;
	Parms.Niagara_System_To_Play = Niagara_System_To_Play;
	Parms.Niagara_System_Player = Niagara_System_Player;
	Parms.Baby_Scale = Baby_Scale;
	Parms.Dino_Size_Mult = Dino_Size_Mult;
	Parms.Dino_Amount_Mult = Dino_Amount_Mult;
	Parms.Dino_Vel_Mult = Dino_Vel_Mult;
	Parms.StepSounds = StepSounds;
	Parms.Total_Amount_Mult = Total_Amount_Mult;
	Parms.Foot_Velocity_Mult = Foot_Velocity_Mult;
	Parms.Curve_foot_vel = Curve_foot_vel;
	Parms.Curve_foot_size = Curve_foot_size;
	Parms.Foot_Size_Mult = Foot_Size_Mult;
	Parms.Thatch = Thatch;
	Parms.Sand = Sand;
	Parms.Pebbles = Pebbles;
	Parms.Leaves = Leaves;
	Parms.Grass = Grass;
	Parms.Friction = Friction;
	Parms.Dust = Dust;
	Parms.Bounce = Bounce;
	Parms.SK_Mesh_Comp = SK_Mesh_Comp;
	Parms.Color = Color;
	Parms.Niagara_Component = Niagara_Component;
	Parms.NewLocalVar = NewLocalVar;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue = CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TimeSince_ReturnValue = CallFunc_TimeSince_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsShooterCharacter_ReturnValue = CallFunc_IsShooterCharacter_ReturnValue;
	Parms.CallFunc_TimeSince_ReturnValue_1 = CallFunc_TimeSince_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Test = K2Node_DynamicCast_AsPlayer_Pawn_Test;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_Cross_VectorVector_ReturnValue = CallFunc_Cross_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_2 = CallFunc_Multiply_DoubleFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_3 = CallFunc_Multiply_DoubleFloat_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_4 = CallFunc_Multiply_DoubleFloat_ReturnValue_4;
	Parms.CallFunc_GetSkeletalMeshAsset_ReturnValue = CallFunc_GetSkeletalMeshAsset_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetImportedBounds_ReturnValue = CallFunc_GetImportedBounds_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Test_1 = K2Node_DynamicCast_AsPlayer_Pawn_Test_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_BreakBoxSphereBounds_Origin = CallFunc_BreakBoxSphereBounds_Origin;
	Parms.CallFunc_BreakBoxSphereBounds_BoxExtent = CallFunc_BreakBoxSphereBounds_BoxExtent;
	Parms.CallFunc_BreakBoxSphereBounds_SphereRadius = CallFunc_BreakBoxSphereBounds_SphereRadius;
	Parms.K2Node_DynamicCast_AsDino_Character_BP = K2Node_DynamicCast_AsDino_Character_BP;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetDinoContentData_DinoContentData = CallFunc_GetDinoContentData_DinoContentData;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_5 = CallFunc_Multiply_DoubleFloat_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_6 = CallFunc_Multiply_DoubleFloat_ReturnValue_6;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_7 = CallFunc_Multiply_DoubleFloat_ReturnValue_7;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_8 = CallFunc_Multiply_DoubleFloat_ReturnValue_8;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_9 = CallFunc_Multiply_DoubleFloat_ReturnValue_9;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.CallFunc_GetForwardVector_ReturnValue_1 = CallFunc_GetForwardVector_ReturnValue_1;
	Parms.CallFunc_GetVelocity_ReturnValue_1 = CallFunc_GetVelocity_ReturnValue_1;
	Parms.CallFunc_GetForwardVector_ReturnValue_2 = CallFunc_GetForwardVector_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_IsConsoleBuild_ReturnValue = CallFunc_IsConsoleBuild_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Conv_TransformToMatrix_ReturnValue = CallFunc_Conv_TransformToMatrix_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Matrix_TransformVector_ReturnValue = CallFunc_Matrix_TransformVector_ReturnValue;
	Parms.CallFunc_GetSocketBoneName_ReturnValue = CallFunc_GetSocketBoneName_ReturnValue;
	Parms.CallFunc_Conv_Vector4ToVector_ReturnValue = CallFunc_Conv_Vector4ToVector_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
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
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_MakeRotFromYX_ReturnValue = CallFunc_MakeRotFromYX_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Lerp_A_ImplicitCast = CallFunc_Lerp_A_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast = CallFunc_Multiply_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1 = CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast_2 = CallFunc_Multiply_DoubleFloat_B_ImplicitCast_2;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast_3 = CallFunc_Multiply_DoubleFloat_B_ImplicitCast_3;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast_4 = CallFunc_Multiply_DoubleFloat_B_ImplicitCast_4;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast = CallFunc_SetVariableFloat_InValue_ImplicitCast;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_1 = CallFunc_SetVariableFloat_InValue_ImplicitCast_1;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_2 = CallFunc_SetVariableFloat_InValue_ImplicitCast_2;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_3 = CallFunc_SetVariableFloat_InValue_ImplicitCast_3;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_4 = CallFunc_SetVariableFloat_InValue_ImplicitCast_4;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_5 = CallFunc_SetVariableFloat_InValue_ImplicitCast_5;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_6 = CallFunc_SetVariableFloat_InValue_ImplicitCast_6;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_7 = CallFunc_SetVariableFloat_InValue_ImplicitCast_7;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_8 = CallFunc_SetVariableFloat_InValue_ImplicitCast_8;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_9 = CallFunc_SetVariableFloat_InValue_ImplicitCast_9;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_10 = CallFunc_SetVariableFloat_InValue_ImplicitCast_10;
	Parms.CallFunc_MakeVector_X_ImplicitCast = CallFunc_MakeVector_X_ImplicitCast;
	Parms.CallFunc_MakeVector_Y_ImplicitCast = CallFunc_MakeVector_Y_ImplicitCast;
	Parms.CallFunc_MakeVector_Z_ImplicitCast = CallFunc_MakeVector_Z_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Received_NotifyEnd
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (Edit, ZeroConstructor)
// class UAnimSequenceBase*           Animation                                                        (Edit, ZeroConstructor)
// struct FAnimNotifyEventReference   EventReference                                                   (None)
// bool                               ReturnValue                                                      (None)

void UBP_VFX_Spawn_on_AnimNotify_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_on_AnimNotify_C", "Received_NotifyEnd");

	Params::UBP_VFX_Spawn_on_AnimNotify_C_Received_NotifyEnd_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (None)

void UBP_VFX_Spawn_on_AnimNotify_C::GetNotifyName(const class FString& ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_on_AnimNotify_C", "GetNotifyName");

	Params::UBP_VFX_Spawn_on_AnimNotify_C_GetNotifyName_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.Received_NotifyTick
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (Edit, ZeroConstructor)
// class UAnimSequenceBase*           Animation                                                        (Edit, ZeroConstructor)
// float                              FrameDeltaTime                                                   (None)
// struct FAnimNotifyEventReference   EventReference                                                   (None)
// bool                               ReturnValue                                                      (None)
// double                             Line_End_Distance                                                (None)

void UBP_VFX_Spawn_on_AnimNotify_C::Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, const struct FAnimNotifyEventReference& EventReference, bool ReturnValue, double Line_End_Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_on_AnimNotify_C", "Received_NotifyTick");

	Params::UBP_VFX_Spawn_on_AnimNotify_C_Received_NotifyTick_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.FrameDeltaTime = FrameDeltaTime;
	Parms.EventReference = EventReference;
	Parms.ReturnValue = ReturnValue;
	Parms.Line_End_Distance = Line_End_Distance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VFX_Spawn_on_AnimNotify.BP_VFX_Spawn_on_AnimNotify_C.NewEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_VFX_Spawn_on_AnimNotify_C::NewEventDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_on_AnimNotify_C", "NewEventDispatcher__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


