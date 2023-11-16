#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C
// (None)

class UClass* UBP_VFX_Spawn_Footprint_AnimNotify_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VFX_Spawn_Footprint_AnimNotify_C");

	return Clss;
}


// BP_VFX_Spawn_Footprint_AnimNotify_C BP_VFX_Spawn_Footprint_AnimNotify.Default__BP_VFX_Spawn_Footprint_AnimNotify_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_VFX_Spawn_Footprint_AnimNotify_C* UBP_VFX_Spawn_Footprint_AnimNotify_C::GetDefaultObj()
{
	static class UBP_VFX_Spawn_Footprint_AnimNotify_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_VFX_Spawn_Footprint_AnimNotify_C*>(UBP_VFX_Spawn_Footprint_AnimNotify_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.LR_FB Offset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                     Front_Offset                                                     (None)
// struct FVector                     Back_Offset                                                      (None)
// struct FVector                     Offset                                                           (None)
// double                             CallFunc_BreakVector_X                                           (None)
// double                             CallFunc_BreakVector_Y                                           (None)
// double                             CallFunc_BreakVector_Z                                           (None)
// class FString                      CallFunc_Split_LeftS                                             (AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Split_RightS                                            (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
// bool                               CallFunc_Split_ReturnValue                                       (None)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (None)
// class FString                      CallFunc_Right_ReturnValue                                       (SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (None)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (None)
// class FString                      CallFunc_Left_ReturnValue                                        (None)
// double                             CallFunc_BreakVector_X_1                                         (None)
// double                             CallFunc_BreakVector_Y_1                                         (None)
// double                             CallFunc_BreakVector_Z_1                                         (None)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (None)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (None)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (None)

void UBP_VFX_Spawn_Footprint_AnimNotify_C::LR_FB_Offset(const struct FVector& Front_Offset, const struct FVector& Back_Offset, const struct FVector& Offset, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const class FString& CallFunc_Right_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, const class FString& CallFunc_Left_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "LR_FB Offset");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_LR_FB_Offset_Params Parms{};

	Parms.Front_Offset = Front_Offset;
	Parms.Back_Offset = Back_Offset;
	Parms.Offset = Offset;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Right_ReturnValue = CallFunc_Right_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_Left_ReturnValue = CallFunc_Left_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_1 = CallFunc_EqualEqual_StriStri_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               Condition                                                        (None)
// bool                               Condition2                                                       (None)

void UBP_VFX_Spawn_Footprint_AnimNotify_C::NewFunction_0(bool Condition, bool Condition2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "NewFunction_0");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_NewFunction_0_Params Parms{};

	Parms.Condition = Condition;
	Parms.Condition2 = Condition2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Do Trace
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      SK_Mesh_Comp                                                     (Edit, ZeroConstructor)
// class AActor*                      InputPin                                                         (Edit, ZeroConstructor)
// double                             BabyScale                                                        (None)
// bool                               IsPlayer                                                         (None)
// double                             FootPrintSize                                                    (None)
// bool                               Hit_Bool                                                         (None)
// struct FHitResult                  OutHit                                                           (Edit, ZeroConstructor)
// class UMaterialInterface*          FootPrintMaterialBack                                            (Edit, ZeroConstructor)
// class UMaterialInterface*          FootPrintMaterialFront                                           (Edit, ZeroConstructor)
// class UMaterialInterface*          MI_Back                                                          (Edit, ZeroConstructor)
// class UMaterialInterface*          MI_Front                                                         (Edit, ZeroConstructor)
// struct FVector                     Back_Offset                                                      (None)
// struct FVector                     Front_Offset                                                     (None)
// double                             Size                                                             (None)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (None)
// class ADino_Character_BP_C*        K2Node_DynamicCast_AsDino_Character_BP                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// class UDinoSettings_Base_C*        K2Node_DynamicCast_AsDino_Settings_Base                          (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (None)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (None)
// TArray<class AActor*>              Temp_object_Variable                                             (Edit, ZeroConstructor)
// struct FVector                     CallFunc_LR_FB_Offset_Offset                                     (None)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (None)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (None)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_1                       (None)
// struct FMatrix                     CallFunc_Conv_TransformToMatrix_ReturnValue                      (None)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (None)
// struct FVector4                    CallFunc_Matrix_TransformVector_ReturnValue                      (None)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_2                     (None)
// struct FVector                     CallFunc_Conv_Vector4ToVector_ReturnValue                        (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (None)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (None)
// class FName                        CallFunc_GetSocketBoneName_ReturnValue                           (None)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (None)
// struct FVector                     CallFunc_BreakTransform_Location                                 (None)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (None)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_4                          (None)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (None)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (None)

void UBP_VFX_Spawn_Footprint_AnimNotify_C::Do_Trace(class USkeletalMeshComponent* SK_Mesh_Comp, class AActor* InputPin, double BabyScale, bool IsPlayer, double FootPrintSize, bool Hit_Bool, const struct FHitResult& OutHit, class UMaterialInterface* FootPrintMaterialBack, class UMaterialInterface* FootPrintMaterialFront, class UMaterialInterface* MI_Back, class UMaterialInterface* MI_Front, const struct FVector& Back_Offset, const struct FVector& Front_Offset, double Size, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, class ADino_Character_BP_C* K2Node_DynamicCast_AsDino_Character_BP, bool K2Node_DynamicCast_bSuccess, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_GetEquippedItemOfType_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UDinoSettings_Base_C* K2Node_DynamicCast_AsDino_Settings_Base, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_LR_FB_Offset_Offset, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FMatrix& CallFunc_Conv_TransformToMatrix_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector4& CallFunc_Matrix_TransformVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Conv_Vector4ToVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_GetSocketBoneName_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_4, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "Do Trace");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_Do_Trace_Params Parms{};

	Parms.SK_Mesh_Comp = SK_Mesh_Comp;
	Parms.InputPin = InputPin;
	Parms.BabyScale = BabyScale;
	Parms.IsPlayer = IsPlayer;
	Parms.FootPrintSize = FootPrintSize;
	Parms.Hit_Bool = Hit_Bool;
	Parms.OutHit = OutHit;
	Parms.FootPrintMaterialBack = FootPrintMaterialBack;
	Parms.FootPrintMaterialFront = FootPrintMaterialFront;
	Parms.MI_Back = MI_Back;
	Parms.MI_Front = MI_Front;
	Parms.Back_Offset = Back_Offset;
	Parms.Front_Offset = Front_Offset;
	Parms.Size = Size;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = CallFunc_Conv_DoubleToVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsDino_Character_BP = K2Node_DynamicCast_AsDino_Character_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetEquippedItemOfType_ReturnValue = CallFunc_GetEquippedItemOfType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsDino_Settings_Base = K2Node_DynamicCast_AsDino_Settings_Base;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_LR_FB_Offset_Offset = CallFunc_LR_FB_Offset_Offset;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue_1 = CallFunc_Conv_DoubleToVector_ReturnValue_1;
	Parms.CallFunc_Conv_TransformToMatrix_ReturnValue = CallFunc_Conv_TransformToMatrix_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;
	Parms.CallFunc_Matrix_TransformVector_ReturnValue = CallFunc_Matrix_TransformVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_2 = CallFunc_Multiply_VectorVector_ReturnValue_2;
	Parms.CallFunc_Conv_Vector4ToVector_ReturnValue = CallFunc_Conv_Vector4ToVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetSocketBoneName_ReturnValue = CallFunc_GetSocketBoneName_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_Add_VectorVector_ReturnValue_4 = CallFunc_Add_VectorVector_ReturnValue_4;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Spawn_Sound
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*             Actor                                                            (Edit, ZeroConstructor)
// struct FVector                     Location                                                         (None)
// double                             Size                                                             (None)
// struct FAudio_Ground_Collection    StepSounds                                                       (Edit, ZeroConstructor)
// bool                               IsPlayer                                                         (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ZeroConstructor)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (None)
// double                             CallFunc_FClamp_ReturnValue                                      (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_1                        (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_2                        (None)
// double                             CallFunc_FClamp_ReturnValue_1                                    (None)
// double                             CallFunc_FClamp_ReturnValue_2                                    (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_3                        (None)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_4                        (None)
// double                             CallFunc_FClamp_ReturnValue_3                                    (None)
// double                             CallFunc_FClamp_ReturnValue_4                                    (None)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (Edit, ZeroConstructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (Edit, ZeroConstructor)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue_5                        (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (None)
// double                             CallFunc_FClamp_ReturnValue_5                                    (None)
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

void UBP_VFX_Spawn_Footprint_AnimNotify_C::Spawn_Sound(class USceneComponent* Actor, const struct FVector& Location, double Size, const struct FAudio_Ground_Collection& StepSounds, bool IsPlayer, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, double CallFunc_Divide_DoubleFloat_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Divide_DoubleFloat_ReturnValue_1, double CallFunc_Divide_DoubleFloat_ReturnValue_2, double CallFunc_FClamp_ReturnValue_1, double CallFunc_FClamp_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleFloat_ReturnValue_3, double CallFunc_Divide_DoubleFloat_ReturnValue_4, double CallFunc_FClamp_ReturnValue_3, double CallFunc_FClamp_ReturnValue_4, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, double CallFunc_Divide_DoubleFloat_ReturnValue_5, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, double CallFunc_FClamp_ReturnValue_5, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_4, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_5, float CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast, float CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_1, float CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_2, float CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_3, float CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_4, float CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "Spawn_Sound");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_Spawn_Sound_Params Parms{};

	Parms.Actor = Actor;
	Parms.Location = Location;
	Parms.Size = Size;
	Parms.StepSounds = StepSounds;
	Parms.IsPlayer = IsPlayer;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue = CallFunc_Divide_DoubleFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue_1 = CallFunc_Divide_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue_2 = CallFunc_Divide_DoubleFloat_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue_3 = CallFunc_Divide_DoubleFloat_ReturnValue_3;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue_4 = CallFunc_Divide_DoubleFloat_ReturnValue_4;
	Parms.CallFunc_FClamp_ReturnValue_3 = CallFunc_FClamp_ReturnValue_3;
	Parms.CallFunc_FClamp_ReturnValue_4 = CallFunc_FClamp_ReturnValue_4;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleFloat_ReturnValue_5 = CallFunc_Divide_DoubleFloat_ReturnValue_5;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue_5 = CallFunc_FClamp_ReturnValue_5;
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


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Spawn_Anim_Notify
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:

void UBP_VFX_Spawn_Footprint_AnimNotify_C::Spawn_Anim_Notify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "Spawn_Anim_Notify");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Received_NotifyBegin
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (Edit, ZeroConstructor)
// class UAnimSequenceBase*           Animation                                                        (Edit, ZeroConstructor)
// float                              TotalDuration                                                    (None)
// struct FAnimNotifyEventReference   EventReference                                                   (Edit, ZeroConstructor, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
// bool                               ReturnValue                                                      (None)
// bool                               IsPlayer                                                         (None)
// class UMaterialInterface*          Material_Front                                                   (Edit, ZeroConstructor)
// class UMaterialInterface*          Material_Back                                                    (Edit, ZeroConstructor)
// double                             Foot_Print_Size                                                  (None)
// class AActor*                      Owner                                                            (Edit, ZeroConstructor)
// struct FVector                     Direction                                                        (None)
// double                             BabyScale                                                        (None)
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
// class UNiagaraComponent*           Niagara_Component                                                (Edit, ZeroConstructor)
// class FString                      NewLocalVar                                                      (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
// bool                               DebugPrint_                                                      (None)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ZeroConstructor)
// bool                               CallFunc_Contains_ReturnValue                                    (None)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// float                              CallFunc_TimeSince_ReturnValue                                   (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// bool                               CallFunc_IsShooterCharacter_ReturnValue                          (None)
// float                              CallFunc_TimeSince_ReturnValue_1                                 (None)
// bool                               CallFunc_Contains_ReturnValue_1                                  (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (Edit, ZeroConstructor)
// float                              CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue   (None)
// double                             CallFunc_SelectFloat_ReturnValue                                 (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (None)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ZeroConstructor)
// class APlayerPawnTest_C*           K2Node_DynamicCast_AsPlayer_Pawn_Test                            (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class AWorldSettings*              CallFunc_K2_GetWorldSettings_ReturnValue                         (Edit, ZeroConstructor)
// class APrimalWorldSettings*        K2Node_DynamicCast_AsPrimal_World_Settings                       (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// struct FRotator                    CallFunc_GetSocketRotation_ReturnValue                           (None)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (None)
// TArray<class UNiagaraComponent*>   CallFunc_GetComponentsByTag_ReturnValue                          (Edit, ZeroConstructor, ContainsInstancedReference, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class UNiagaraComponent*           CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_CanSpawnGloballyLimitedParticle_ReturnValue             (None)
// class ADino_Character_BP_C*        K2Node_DynamicCast_AsDino_Character_BP                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (None)
// double                             CallFunc_Lerp_ReturnValue                                        (None)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_IsConsoleBuild_ReturnValue                              (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, ZeroConstructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// class FString                      CallFunc_Split_LeftS                                             (Protected, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Split_RightS                                            (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_Split_ReturnValue                                       (None)
// class FString                      CallFunc_Right_ReturnValue                                       (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      CallFunc_Left_ReturnValue                                        (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (None)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (None)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (None)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (None)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (None)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (None)
// struct FRotator                    CallFunc_GetSocketRotation_ReturnValue_1                         (None)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (None)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue_1              (None)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (None)
// double                             CallFunc_Do_Trace_FootPrintSize                                  (None)
// bool                               CallFunc_Do_Trace_Hit_Bool                                       (None)
// struct FHitResult                  CallFunc_Do_Trace_OutHit                                         (Edit, ZeroConstructor)
// class UMaterialInterface*          CallFunc_Do_Trace_FootPrintMaterialBack                          (Edit, ZeroConstructor)
// class UMaterialInterface*          CallFunc_Do_Trace_FootPrintMaterialFront                         (Edit, ZeroConstructor)
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
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (None)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (Edit, ZeroConstructor)
// struct FStruct_Ground_Attributes   CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (None)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (None)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (None)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (None)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (None)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (None)

void UBP_VFX_Spawn_Footprint_AnimNotify_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const struct FAnimNotifyEventReference& EventReference, bool ReturnValue, bool IsPlayer, class UMaterialInterface* Material_Front, class UMaterialInterface* Material_Back, double Foot_Print_Size, class AActor* Owner, const struct FVector& Direction, double BabyScale, const struct FAudio_Ground_Collection& StepSounds, double Total_Amount_Mult, double Foot_Velocity_Mult, class UCurveFloat* Curve_foot_vel, class UCurveFloat* Curve_foot_size, double Foot_Size_Mult, double Thatch, double Sand, double Pebbles, double Leaves, double Grass, double Friction, double Dust, double Bounce, class USkeletalMeshComponent* SK_Mesh_Comp, const struct FColor& Color, class UNiagaraComponent* Niagara_Component, const class FString& NewLocalVar, bool DebugPrint_, const class FString& CallFunc_GetDisplayName_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Contains_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_TimeSince_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsShooterCharacter_ReturnValue, float CallFunc_TimeSince_ReturnValue_1, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, float CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, int32 Temp_int_Array_Index_Variable, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool K2Node_DynamicCast_bSuccess_1, class AWorldSettings* CallFunc_K2_GetWorldSettings_ReturnValue, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, bool K2Node_DynamicCast_bSuccess_2, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_3, const TArray<class UNiagaraComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_CanSpawnGloballyLimitedParticle_ReturnValue, class ADino_Character_BP_C* K2Node_DynamicCast_AsDino_Character_BP, bool K2Node_DynamicCast_bSuccess_4, double CallFunc_Lerp_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsConsoleBuild_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const class FString& CallFunc_Right_ReturnValue, const class FString& CallFunc_Left_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, double CallFunc_Do_Trace_FootPrintSize, bool CallFunc_Do_Trace_Hit_Bool, const struct FHitResult& CallFunc_Do_Trace_OutHit, class UMaterialInterface* CallFunc_Do_Trace_FootPrintMaterialBack, class UMaterialInterface* CallFunc_Do_Trace_FootPrintMaterialFront, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const class FString& CallFunc_GetDisplayName_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FStruct_Ground_Attributes& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "Received_NotifyBegin");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_Received_NotifyBegin_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;
	Parms.EventReference = EventReference;
	Parms.ReturnValue = ReturnValue;
	Parms.IsPlayer = IsPlayer;
	Parms.Material_Front = Material_Front;
	Parms.Material_Back = Material_Back;
	Parms.Foot_Print_Size = Foot_Print_Size;
	Parms.Owner = Owner;
	Parms.Direction = Direction;
	Parms.BabyScale = BabyScale;
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
	Parms.DebugPrint_ = DebugPrint_;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TimeSince_ReturnValue = CallFunc_TimeSince_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsShooterCharacter_ReturnValue = CallFunc_IsShooterCharacter_ReturnValue;
	Parms.CallFunc_TimeSince_ReturnValue_1 = CallFunc_TimeSince_ReturnValue_1;
	Parms.CallFunc_Contains_ReturnValue_1 = CallFunc_Contains_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue = CallFunc_GetPrimaryCameraLocationDistanceFromPoint_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Test = K2Node_DynamicCast_AsPlayer_Pawn_Test;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_GetWorldSettings_ReturnValue = CallFunc_K2_GetWorldSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_World_Settings = K2Node_DynamicCast_AsPrimal_World_Settings;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetSocketRotation_ReturnValue = CallFunc_GetSocketRotation_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetComponentsByTag_ReturnValue = CallFunc_GetComponentsByTag_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_CanSpawnGloballyLimitedParticle_ReturnValue = CallFunc_CanSpawnGloballyLimitedParticle_ReturnValue;
	Parms.K2Node_DynamicCast_AsDino_Character_BP = K2Node_DynamicCast_AsDino_Character_BP;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsConsoleBuild_ReturnValue = CallFunc_IsConsoleBuild_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Right_ReturnValue = CallFunc_Right_ReturnValue;
	Parms.CallFunc_Left_ReturnValue = CallFunc_Left_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_1 = CallFunc_EqualEqual_StriStri_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_GetSocketRotation_ReturnValue_1 = CallFunc_GetSocketRotation_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue_1 = CallFunc_GreaterGreater_VectorRotator_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;
	Parms.CallFunc_Do_Trace_FootPrintSize = CallFunc_Do_Trace_FootPrintSize;
	Parms.CallFunc_Do_Trace_Hit_Bool = CallFunc_Do_Trace_Hit_Bool;
	Parms.CallFunc_Do_Trace_OutHit = CallFunc_Do_Trace_OutHit;
	Parms.CallFunc_Do_Trace_FootPrintMaterialBack = CallFunc_Do_Trace_FootPrintMaterialBack;
	Parms.CallFunc_Do_Trace_FootPrintMaterialFront = CallFunc_Do_Trace_FootPrintMaterialFront;
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
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Lerp_A_ImplicitCast = CallFunc_Lerp_A_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast = CallFunc_Multiply_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Received_NotifyEnd
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (Edit, ZeroConstructor)
// class UAnimSequenceBase*           Animation                                                        (Edit, ZeroConstructor)
// struct FAnimNotifyEventReference   EventReference                                                   (None)
// bool                               ReturnValue                                                      (None)

void UBP_VFX_Spawn_Footprint_AnimNotify_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "Received_NotifyEnd");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_Received_NotifyEnd_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Protected, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (None)

void UBP_VFX_Spawn_Footprint_AnimNotify_C::GetNotifyName(const class FString& ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "GetNotifyName");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_GetNotifyName_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.Received_NotifyTick
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (Edit, ZeroConstructor)
// class UAnimSequenceBase*           Animation                                                        (Edit, ZeroConstructor)
// float                              FrameDeltaTime                                                   (None)
// struct FAnimNotifyEventReference   EventReference                                                   (Edit, ZeroConstructor)
// bool                               ReturnValue                                                      (None)
// class USkeletalMeshComponent*      Mesh_Comp                                                        (None)
// double                             Line_End_Distance                                                (None)

void UBP_VFX_Spawn_Footprint_AnimNotify_C::Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, const struct FAnimNotifyEventReference& EventReference, bool ReturnValue, class USkeletalMeshComponent* Mesh_Comp, double Line_End_Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "Received_NotifyTick");

	Params::UBP_VFX_Spawn_Footprint_AnimNotify_C_Received_NotifyTick_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.FrameDeltaTime = FrameDeltaTime;
	Parms.EventReference = EventReference;
	Parms.ReturnValue = ReturnValue;
	Parms.Mesh_Comp = Mesh_Comp;
	Parms.Line_End_Distance = Line_End_Distance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VFX_Spawn_Footprint_AnimNotify.BP_VFX_Spawn_Footprint_AnimNotify_C.NewEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_VFX_Spawn_Footprint_AnimNotify_C::NewEventDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VFX_Spawn_Footprint_AnimNotify_C", "NewEventDispatcher__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


