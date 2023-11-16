#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerPawnTest.PlayerPawnTest_C
// (Actor, Pawn)

class UClass* APlayerPawnTest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerPawnTest_C");

	return Clss;
}


// PlayerPawnTest_C PlayerPawnTest.Default__PlayerPawnTest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APlayerPawnTest_C* APlayerPawnTest_C::GetDefaultObj()
{
	static class APlayerPawnTest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayerPawnTest_C*>(APlayerPawnTest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CurrentCameraPivotLocation                                       (None)
// struct FVector                     DesiredCameraPivotLocation                                       (None)
// bool                               ReturnValue                                                      (None)

void APlayerPawnTest_C::BPOverrideCameraDesiredPivotLocation(const struct FVector& CurrentCameraPivotLocation, const struct FVector& DesiredCameraPivotLocation, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraDesiredPivotLocation");

	Params::APlayerPawnTest_C_BPOverrideCameraDesiredPivotLocation_Params Parms{};

	Parms.CurrentCameraPivotLocation = CurrentCameraPivotLocation;
	Parms.DesiredCameraPivotLocation = DesiredCameraPivotLocation;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.GetFXBloodColor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (None)

void APlayerPawnTest_C::GetFXBloodColor(const struct FLinearColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "GetFXBloodColor");

	Params::APlayerPawnTest_C_GetFXBloodColor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.DisableFluidInteraction
// (Exec, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawnTest_C::DisableFluidInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "DisableFluidInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPawnTest.PlayerPawnTest_C.EnableFluidInteraction
// (Exec, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawnTest_C::EnableFluidInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "EnableFluidInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPawnTest.PlayerPawnTest_C.AssignAssetsFromVoiceCollection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_VoiceCollection_C*      K2Node_DynamicCast_AsPDA_Voice_Collection                        (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void APlayerPawnTest_C::AssignAssetsFromVoiceCollection(class UPDA_VoiceCollection_C* K2Node_DynamicCast_AsPDA_Voice_Collection, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "AssignAssetsFromVoiceCollection");

	Params::APlayerPawnTest_C_AssignAssetsFromVoiceCollection_Params Parms{};

	Parms.K2Node_DynamicCast_AsPDA_Voice_Collection = K2Node_DynamicCast_AsPDA_Voice_Collection;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotRotation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    CurrentCameraPivotRotation                                       (None)
// struct FRotator                    DesiredCameraPivotRotation                                       (None)
// bool                               ReturnValue                                                      (None)
// float                              CallFunc_BreakRotator_Roll                                       (None)
// float                              CallFunc_BreakRotator_Pitch                                      (None)
// float                              CallFunc_BreakRotator_Yaw                                        (None)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (None)

void APlayerPawnTest_C::BPOverrideCameraDesiredPivotRotation(const struct FRotator& CurrentCameraPivotRotation, const struct FRotator& DesiredCameraPivotRotation, bool ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraDesiredPivotRotation");

	Params::APlayerPawnTest_C_BPOverrideCameraDesiredPivotRotation_Params Parms{};

	Parms.CurrentCameraPivotRotation = CurrentCameraPivotRotation;
	Parms.DesiredCameraPivotRotation = DesiredCameraPivotRotation;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotOffset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (None)
// struct FVector                     DesiredCameraOffset                                              (None)
// bool                               ReturnValue                                                      (None)

void APlayerPawnTest_C::BPOverrideCameraDesiredPivotOffset(const struct FPrimalCameraParams& CameraParams, const struct FVector& DesiredCameraOffset, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraDesiredPivotOffset");

	Params::APlayerPawnTest_C_BPOverrideCameraDesiredPivotOffset_Params Parms{};

	Parms.CameraParams = CameraParams;
	Parms.DesiredCameraOffset = DesiredCameraOffset;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraPivotLocationInterpParams
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (None)
// struct FPrimalCameraPivotZInterpOverridesPivotZInterpOverrides                                            (None)
// struct FPrimalCameraInterpParams   LastInterpParamsX                                                (None)
// struct FPrimalCameraInterpParams   LastInterpParamsY                                                (None)
// struct FPrimalCameraInterpParams   LastInterpParamsZ                                                (None)
// struct FPrimalCameraInterpParams   OutInterpParamsX                                                 (None)
// struct FPrimalCameraInterpParams   OutInterpParamsY                                                 (None)
// struct FPrimalCameraInterpParams   OutInterpParamsZ                                                 (None)
// bool                               ReturnValue                                                      (None)

void APlayerPawnTest_C::BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraParams& CameraParams, const struct FPrimalCameraPivotZInterpOverrides& PivotZInterpOverrides, const struct FPrimalCameraInterpParams& LastInterpParamsX, const struct FPrimalCameraInterpParams& LastInterpParamsY, const struct FPrimalCameraInterpParams& LastInterpParamsZ, const struct FPrimalCameraInterpParams& OutInterpParamsX, const struct FPrimalCameraInterpParams& OutInterpParamsY, const struct FPrimalCameraInterpParams& OutInterpParamsZ, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraPivotLocationInterpParams");

	Params::APlayerPawnTest_C_BPOverrideCameraPivotLocationInterpParams_Params Parms{};

	Parms.CameraParams = CameraParams;
	Parms.PivotZInterpOverrides = PivotZInterpOverrides;
	Parms.LastInterpParamsX = LastInterpParamsX;
	Parms.LastInterpParamsY = LastInterpParamsY;
	Parms.LastInterpParamsZ = LastInterpParamsZ;
	Parms.OutInterpParamsX = OutInterpParamsX;
	Parms.OutInterpParamsY = OutInterpParamsY;
	Parms.OutInterpParamsZ = OutInterpParamsZ;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraArmLengthInterpParams
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (None)
// struct FPrimalCameraInterpParams   OutInterpParams                                                  (None)
// bool                               ReturnValue                                                      (None)

void APlayerPawnTest_C::BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraParams& CameraParams, const struct FPrimalCameraInterpParams& OutInterpParams, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraArmLengthInterpParams");

	Params::APlayerPawnTest_C_BPOverrideCameraArmLengthInterpParams_Params Parms{};

	Parms.CameraParams = CameraParams;
	Parms.OutInterpParams = OutInterpParams;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraArmLength
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (None)
// float                              CurrentCameraArmLength                                           (None)
// float                              DesiredCameraArmLength                                           (None)
// bool                               ReturnValue                                                      (None)
// double                             CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast(None)
// double                             CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast(None)

void APlayerPawnTest_C::BPOverrideCameraArmLength(const struct FPrimalCameraParams& CameraParams, float CurrentCameraArmLength, float DesiredCameraArmLength, bool ReturnValue, double CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast, double CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPOverrideCameraArmLength");

	Params::APlayerPawnTest_C_BPOverrideCameraArmLength_Params Parms{};

	Parms.CameraParams = CameraParams;
	Parms.CurrentCameraArmLength = CurrentCameraArmLength;
	Parms.DesiredCameraArmLength = DesiredCameraArmLength;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast = CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast;
	Parms.CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast = CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.DontCreateAnyMoreSpawnUIs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterHUD*                 CallFunc_GetShooterHud_ShooterHud                                (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void APlayerPawnTest_C::DontCreateAnyMoreSpawnUIs(class AShooterHUD* CallFunc_GetShooterHud_ShooterHud, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "DontCreateAnyMoreSpawnUIs");

	Params::APlayerPawnTest_C_DontCreateAnyMoreSpawnUIs_Params Parms{};

	Parms.CallFunc_GetShooterHud_ShooterHud = CallFunc_GetShooterHud_ShooterHud;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.GetShooterHud
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterHUD*                 ShooterHUD                                                       (Edit, ZeroConstructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, ZeroConstructor)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (None)

void APlayerPawnTest_C::GetShooterHud(class AShooterHUD* ShooterHUD, class AController* CallFunc_GetController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "GetShooterHud");

	Params::APlayerPawnTest_C_GetShooterHud_Params Parms{};

	Parms.ShooterHUD = ShooterHUD;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetShooterHUD_ReturnValue = CallFunc_GetShooterHUD_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.SetGeneralizedUnlockedAchievementTags
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                GeneralizedUnlockedAchievementTags                               (None)

void APlayerPawnTest_C::SetGeneralizedUnlockedAchievementTags(const TArray<class FName>& GeneralizedUnlockedAchievementTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "SetGeneralizedUnlockedAchievementTags");

	Params::APlayerPawnTest_C_SetGeneralizedUnlockedAchievementTags_Params Parms{};

	Parms.GeneralizedUnlockedAchievementTags = GeneralizedUnlockedAchievementTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.HasEquipToHideImplant
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ShouldHideImplant                                                (None)
// bool                               Local_HideImplant                                                (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UPrimalItem*                 CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (None)

void APlayerPawnTest_C::HasEquipToHideImplant(bool ShouldHideImplant, bool Local_HideImplant, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "HasEquipToHideImplant");

	Params::APlayerPawnTest_C_HasEquipToHideImplant_Params Parms{};

	Parms.ShouldHideImplant = ShouldHideImplant;
	Parms.Local_HideImplant = Local_HideImplant;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPSetupFirstPersonHandsMesh
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawnTest_C::BPSetupFirstPersonHandsMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPSetupFirstPersonHandsMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPawnTest.PlayerPawnTest_C.SetupMeshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bForce                                                           (None)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (None)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue                                (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// int32                              Temp_int_Variable                                                (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (None)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_1                                        (Edit, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_1                              (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (Edit, ZeroConstructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue_1                           (None)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (Edit, ZeroConstructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// int32                              Temp_int_Variable_1                                              (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (None)
// int32                              CallFunc_GetNumMaterials_ReturnValue_2                           (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (None)
// int32                              Temp_int_Variable_2                                              (None)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_1                               (Edit, ZeroConstructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (Edit, ZeroConstructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (None)
// int32                              Temp_int_Variable_3                                              (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (None)
// int32                              Temp_int_Variable_4                                              (None)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_2                                        (Edit, ZeroConstructor, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_2                              (Edit, ZeroConstructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// bool                               CallFunc_HasEquipToHideImplant_ShouldHideImplant                 (None)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ZeroConstructor)
// class FName                        CallFunc_GetObjectName_ReturnValue                               (None)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_3                                        (Edit, ZeroConstructor, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (None)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_3                              (Edit, ZeroConstructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (None)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_2                               (Edit, ZeroConstructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue_3                           (None)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (Edit, ZeroConstructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue_4                            (None)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue_5                            (None)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_3                               (Edit, ZeroConstructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue_4                           (None)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_3             (Edit, ZeroConstructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_4                           (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_3                          (None)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue_6                            (None)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_4                                        (Edit, ZeroConstructor, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_4                              (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (None)
// int32                              Temp_int_Variable_5                                              (None)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_4                               (Edit, ZeroConstructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_4             (Edit, ZeroConstructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_4                          (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (None)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_5                                        (Edit, ZeroConstructor)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_5                               (Edit, ZeroConstructor)
// class USkeletalMesh*               CallFunc_AssetResolve_ReturnValue_5                              (Edit, ZeroConstructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_5             (None)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (None)
// int32                              CallFunc_GetNumMaterials_ReturnValue_5                           (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_5                           (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_5                          (None)

void APlayerPawnTest_C::SetupMeshes(bool bForce, int32 CallFunc_GetNumMaterials_ReturnValue, TSoftObjectPtr<class USkeletalMesh> CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, class USkeletalMesh* CallFunc_AssetResolve_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, TSoftObjectPtr<class USkeletalMesh> CallFunc_Array_Get_Item_1, class USkeletalMesh* CallFunc_AssetResolve_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_GetNumMaterials_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 Temp_int_Variable_2, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Variable_4, TSoftObjectPtr<class USkeletalMesh> CallFunc_Array_Get_Item_2, class USkeletalMesh* CallFunc_AssetResolve_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_HasEquipToHideImplant_ShouldHideImplant, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class FName CallFunc_GetObjectName_ReturnValue, TSoftObjectPtr<class USkeletalMesh> CallFunc_Array_Get_Item_3, bool CallFunc_EqualEqual_NameName_ReturnValue, class USkeletalMesh* CallFunc_AssetResolve_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_3, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_2, int32 CallFunc_GetNumMaterials_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_5, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_3, int32 CallFunc_GetNumMaterials_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_6, TSoftObjectPtr<class USkeletalMesh> CallFunc_Array_Get_Item_4, class USkeletalMesh* CallFunc_AssetResolve_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_3, int32 Temp_int_Variable_5, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, TSoftObjectPtr<class USkeletalMesh> CallFunc_Array_Get_Item_5, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_5, class USkeletalMesh* CallFunc_AssetResolve_ReturnValue_5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_GetNumMaterials_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue_5, bool CallFunc_LessEqual_IntInt_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "SetupMeshes");

	Params::APlayerPawnTest_C_SetupMeshes_Params Parms{};

	Parms.bForce = bForce;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_AssetResolve_ReturnValue = CallFunc_AssetResolve_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_AssetResolve_ReturnValue_1 = CallFunc_AssetResolve_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_GetNumMaterials_ReturnValue_1 = CallFunc_GetNumMaterials_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_GetNumMaterials_ReturnValue_2 = CallFunc_GetNumMaterials_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_GetMaterial_ReturnValue_1 = CallFunc_GetMaterial_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_AssetResolve_ReturnValue_2 = CallFunc_AssetResolve_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_HasEquipToHideImplant_ShouldHideImplant = CallFunc_HasEquipToHideImplant_ShouldHideImplant;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_AssetResolve_ReturnValue_3 = CallFunc_AssetResolve_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.CallFunc_GetMaterial_ReturnValue_2 = CallFunc_GetMaterial_ReturnValue_2;
	Parms.CallFunc_GetNumMaterials_ReturnValue_3 = CallFunc_GetNumMaterials_ReturnValue_3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_4 = CallFunc_Greater_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue_5 = CallFunc_Greater_IntInt_ReturnValue_5;
	Parms.CallFunc_GetMaterial_ReturnValue_3 = CallFunc_GetMaterial_ReturnValue_3;
	Parms.CallFunc_GetNumMaterials_ReturnValue_4 = CallFunc_GetNumMaterials_ReturnValue_4;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_4 = CallFunc_Subtract_IntInt_ReturnValue_4;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_3 = CallFunc_LessEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Greater_IntInt_ReturnValue_6 = CallFunc_Greater_IntInt_ReturnValue_6;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_AssetResolve_ReturnValue_4 = CallFunc_AssetResolve_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.CallFunc_GetMaterial_ReturnValue_4 = CallFunc_GetMaterial_ReturnValue_4;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_4;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_4 = CallFunc_LessEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetMaterial_ReturnValue_5 = CallFunc_GetMaterial_ReturnValue_5;
	Parms.CallFunc_AssetResolve_ReturnValue_5 = CallFunc_AssetResolve_ReturnValue_5;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_5 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetNumMaterials_ReturnValue_5 = CallFunc_GetNumMaterials_ReturnValue_5;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_5 = CallFunc_Subtract_IntInt_ReturnValue_5;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_5 = CallFunc_LessEqual_IntInt_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPUnlockedAllExplorerNotes
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (None)

void APlayerPawnTest_C::BPUnlockedAllExplorerNotes(bool CallFunc_EqualEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPUnlockedAllExplorerNotes");

	Params::APlayerPawnTest_C_BPUnlockedAllExplorerNotes_Params Parms{};

	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.GetTheNumChibiLevelUps
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              OutVal                                                           (None)

void APlayerPawnTest_C::GetTheNumChibiLevelUps(int32 OutVal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "GetTheNumChibiLevelUps");

	Params::APlayerPawnTest_C_GetTheNumChibiLevelUps_Params Parms{};

	Parms.OutVal = OutVal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.SetNumChibiLevelUps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewNum                                                           (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)

void APlayerPawnTest_C::SetNumChibiLevelUps(int32 NewNum, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "SetNumChibiLevelUps");

	Params::APlayerPawnTest_C_SetNumChibiLevelUps_Params Parms{};

	Parms.NewNum = NewNum;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPGetPlayerHexagonCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (None)
// int32                              Ret_val                                                          (None)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (None)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, ZeroConstructor)
// enum class ENetworkModeResult      CallFunc_IsRunningOnServer_OutNetworkMode                        (None)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// class UPrimalPlayerData*           CallFunc_GetPlayerData_ReturnValue                               (Edit, ZeroConstructor)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)

void APlayerPawnTest_C::BPGetPlayerHexagonCount(int32 ReturnValue, int32 Ret_val, const class FString& CallFunc_LinkedPlayerIDString_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, enum class ENetworkModeResult CallFunc_IsRunningOnServer_OutNetworkMode, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UPrimalPlayerData* CallFunc_GetPlayerData_ReturnValue, class UPrimalPlayerDataBP_Base_C* K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPGetPlayerHexagonCount");

	Params::APlayerPawnTest_C_BPGetPlayerHexagonCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Ret_val = Ret_val;
	Parms.CallFunc_LinkedPlayerIDString_ReturnValue = CallFunc_LinkedPlayerIDString_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_IsRunningOnServer_OutNetworkMode = CallFunc_IsRunningOnServer_OutNetworkMode;
	Parms.K2Node_DynamicCast_AsShooter_Game_Mode = K2Node_DynamicCast_AsShooter_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetPlayerData_ReturnValue = CallFunc_GetPlayerData_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base = K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPSetPlayerHexagonCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewHexagonCount                                                  (None)
// bool                               ReturnValue                                                      (None)
// bool                               Ret_val                                                          (None)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (None)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, ZeroConstructor)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UPrimalPlayerData*           CallFunc_GetPlayerData_ReturnValue                               (Edit, ZeroConstructor)
// enum class ENetworkModeResult      CallFunc_IsRunningOnServer_OutNetworkMode                        (None)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)

void APlayerPawnTest_C::BPSetPlayerHexagonCount(int32 NewHexagonCount, bool ReturnValue, bool Ret_val, class UWorld* CallFunc_K2_GetWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_LinkedPlayerIDString_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool K2Node_DynamicCast_bSuccess, class UPrimalPlayerData* CallFunc_GetPlayerData_ReturnValue, enum class ENetworkModeResult CallFunc_IsRunningOnServer_OutNetworkMode, class UPrimalPlayerDataBP_Base_C* K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPSetPlayerHexagonCount");

	Params::APlayerPawnTest_C_BPSetPlayerHexagonCount_Params Parms{};

	Parms.NewHexagonCount = NewHexagonCount;
	Parms.ReturnValue = ReturnValue;
	Parms.Ret_val = Ret_val;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LinkedPlayerIDString_ReturnValue = CallFunc_LinkedPlayerIDString_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Game_Mode = K2Node_DynamicCast_AsShooter_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerData_ReturnValue = CallFunc_GetPlayerData_ReturnValue;
	Parms.CallFunc_IsRunningOnServer_OutNetworkMode = CallFunc_IsRunningOnServer_OutNetworkMode;
	Parms.K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base = K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPGetShowDebugAnimationComponents
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkeletalMeshComponent*>SkelMeshComponents                                               (ZeroConstructor, AutoWeak, SimpleDisplay, AdvancedDisplay, TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TArray<class USkeletalMeshComponent*>Comps                                                            (Edit, ZeroConstructor)
// bool                               Temp_bool_Variable                                               (None)
// bool                               CallFunc_IsFirstPerson_ReturnValue                               (None)
// bool                               CallFunc_IsFirstPerson_ReturnValue_1                             (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (None)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (None)
// class AShooterWeapon*              CallFunc_GetWeapon_ReturnValue                                   (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class USkeletalMeshComponent*      K2Node_Select_Default                                            (None)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (None)

void APlayerPawnTest_C::BPGetShowDebugAnimationComponents(const TArray<class USkeletalMeshComponent*>& SkelMeshComponents, const TArray<class USkeletalMeshComponent*>& Comps, bool Temp_bool_Variable, bool CallFunc_IsFirstPerson_ReturnValue, bool CallFunc_IsFirstPerson_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class AShooterWeapon* CallFunc_GetWeapon_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPGetShowDebugAnimationComponents");

	Params::APlayerPawnTest_C_BPGetShowDebugAnimationComponents_Params Parms{};

	Parms.SkelMeshComponents = SkelMeshComponents;
	Parms.Comps = Comps;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsFirstPerson_ReturnValue = CallFunc_IsFirstPerson_ReturnValue;
	Parms.CallFunc_IsFirstPerson_ReturnValue_1 = CallFunc_IsFirstPerson_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_GetWeapon_ReturnValue = CallFunc_GetWeapon_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPGetOverrideCameraInterpSpeed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DefaultTPVCameraSpeedInterpolationMultiplier                     (None)
// float                              DefaultTPVOffsetInterpSpeed                                      (None)
// float                              TPVCameraSpeedInterpolationMultiplier                            (None)
// float                              TPVOffsetInterpSpeed                                             (None)
// double                             LocalDefaultTPVOffsetInterpSpeed                                 (None)
// bool                               CallFunc_HasBuff_ReturnValue                                     (None)
// double                             K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast (None)
// float                              K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast          (None)

void APlayerPawnTest_C::BPGetOverrideCameraInterpSpeed(float DefaultTPVCameraSpeedInterpolationMultiplier, float DefaultTPVOffsetInterpSpeed, float TPVCameraSpeedInterpolationMultiplier, float TPVOffsetInterpSpeed, double LocalDefaultTPVOffsetInterpSpeed, bool CallFunc_HasBuff_ReturnValue, double K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast, float K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPGetOverrideCameraInterpSpeed");

	Params::APlayerPawnTest_C_BPGetOverrideCameraInterpSpeed_Params Parms{};

	Parms.DefaultTPVCameraSpeedInterpolationMultiplier = DefaultTPVCameraSpeedInterpolationMultiplier;
	Parms.DefaultTPVOffsetInterpSpeed = DefaultTPVOffsetInterpSpeed;
	Parms.TPVCameraSpeedInterpolationMultiplier = TPVCameraSpeedInterpolationMultiplier;
	Parms.TPVOffsetInterpSpeed = TPVOffsetInterpSpeed;
	Parms.LocalDefaultTPVOffsetInterpSpeed = LocalDefaultTPVOffsetInterpSpeed;
	Parms.CallFunc_HasBuff_ReturnValue = CallFunc_HasBuff_ReturnValue;
	Parms.K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast = K2Node_VariableSet_LocalDefaultTPVOffsetInterpSpeed_ImplicitCast;
	Parms.K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast = K2Node_FunctionResult_TPVOffsetInterpSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.ShowHUDNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (None)
// struct FLinearColor                Color                                                            (None)
// double                             LifetimeSeconds                                                  (None)
// double                             DisplayScale                                                     (None)
// class USoundCue*                   SoundToPlay                                                      (None)

void APlayerPawnTest_C::ShowHUDNotification(const class FString& Text, const struct FLinearColor& Color, double LifetimeSeconds, double DisplayScale, class USoundCue* SoundToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ShowHUDNotification");

	Params::APlayerPawnTest_C_ShowHUDNotification_Params Parms{};

	Parms.Text = Text;
	Parms.Color = Color;
	Parms.LifetimeSeconds = LifetimeSeconds;
	Parms.DisplayScale = DisplayScale;
	Parms.SoundToPlay = SoundToPlay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawnTest_C::TrySpawnMound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "TrySpawnMound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMoundEx
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Angle                                                            (None)
// double                             Range                                                            (None)

void APlayerPawnTest_C::TrySpawnMoundEx(double Angle, double Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "TrySpawnMoundEx");

	Params::APlayerPawnTest_C_TrySpawnMoundEx_Params Parms{};

	Parms.Angle = Angle;
	Parms.Range = Range;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPSetFirstPersonMasterPoseComponent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      FirstPersonMasterPosecomponent                                   (None)

void APlayerPawnTest_C::BPSetFirstPersonMasterPoseComponent(class USkeletalMeshComponent* FirstPersonMasterPosecomponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPSetFirstPersonMasterPoseComponent");

	Params::APlayerPawnTest_C_BPSetFirstPersonMasterPoseComponent_Params Parms{};

	Parms.FirstPersonMasterPosecomponent = FirstPersonMasterPosecomponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.DefeatedBoss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalDinoCharacter*        BossCharacter                                                    (Edit, ZeroConstructor)
// class FName                        BossTag                                                          (None)
// int32                              BossDifficulty                                                   (None)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, ZeroConstructor)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ZeroConstructor)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (None)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, ZeroConstructor)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class UPrimalPlayerData*           CallFunc_GetPlayerData_ReturnValue                               (Edit, ZeroConstructor)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (None)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)

void APlayerPawnTest_C::DefeatedBoss(class APrimalDinoCharacter* BossCharacter, class FName BossTag, int32 BossDifficulty, class AController* CallFunc_GetController_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_LinkedPlayerIDString_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool K2Node_DynamicCast_bSuccess_1, class UPrimalPlayerData* CallFunc_GetPlayerData_ReturnValue, class UPrimalPlayerDataBP_Base_C* K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "DefeatedBoss");

	Params::APlayerPawnTest_C_DefeatedBoss_Params Parms{};

	Parms.BossCharacter = BossCharacter;
	Parms.BossTag = BossTag;
	Parms.BossDifficulty = BossDifficulty;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LinkedPlayerIDString_ReturnValue = CallFunc_LinkedPlayerIDString_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Game_Mode = K2Node_DynamicCast_AsShooter_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerData_ReturnValue = CallFunc_GetPlayerData_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base = K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.ServerAscend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DifficultyIndex                                                  (None)
// bool                               bImmediateAscend                                                 (None)
// bool                               bSuppressAchievements                                            (None)
// bool                               bIsCheatAscend                                                   (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (None)
// bool                               CallFunc_IsListenServer_ReturnValue                              (None)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_K2_TeleportTo_ReturnValue                               (None)
// class FString                      Temp_string_Variable                                             (SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// bool                               K2Node_SwitchName_CmpSuccess                                     (None)
// class FString                      Temp_string_Variable_1                                           (ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// class FString                      Temp_string_Variable_2                                           (BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              Temp_int_Variable                                                (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// class FString                      K2Node_Select_Default                                            (ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class AController*                 CallFunc_GetCharacterController_ReturnValue                      (Edit, ZeroConstructor)
// class UWorld*                      CallFunc_GetPrimaryWorld_ReturnValue                             (Edit, ZeroConstructor)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue                            (Edit, ZeroConstructor)
// class APrimalWorldSettings*        K2Node_DynamicCast_AsPrimal_World_Settings                       (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class UClass*                      CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (None)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, ZeroConstructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (Edit, ZeroConstructor)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (None)
// class AShooterGameMode*            K2Node_DynamicCast_AsShooter_Game_Mode_1                         (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (None)
// float                              CallFunc_GetServerSettingsFloat_OutFloat                         (None)
// bool                               CallFunc_GetServerSettingsFloat_ReturnValue                      (None)
// float                              CallFunc_GetServerSettingsFloat_OutFloat_1                       (None)
// bool                               CallFunc_GetServerSettingsFloat_ReturnValue_1                    (None)
// float                              CallFunc_GetServerSettingsFloat_OutFloat_2                       (None)
// bool                               CallFunc_GetServerSettingsFloat_ReturnValue_2                    (None)
// class FString                      CallFunc_LinkedPlayerIDString_ReturnValue                        (None)
// class UPrimalPlayerData*           CallFunc_GetPlayerData_ReturnValue                               (Edit, ZeroConstructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (None)
// class UPrimalPlayerDataBP_Base_C*  K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base                  (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (None)
// bool                               CallFunc_K2_TeleportTo_ReturnValue_1                             (None)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, ZeroConstructor)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ZeroConstructor)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_1                 (None)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (None)
// bool                               CallFunc_IsLocalController_ReturnValue                           (None)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (None)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (None)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (None)

void APlayerPawnTest_C::ServerAscend(int32 DifficultyIndex, bool bImmediateAscend, bool bSuppressAchievements, bool bIsCheatAscend, int32 Temp_int_Array_Index_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_IsListenServer_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_K2_TeleportTo_ReturnValue, const class FString& Temp_string_Variable, bool K2Node_SwitchName_CmpSuccess, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, class AController* CallFunc_GetCharacterController_ReturnValue, class UWorld* CallFunc_GetPrimaryWorld_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AWorldSettings* CallFunc_GetWorldSettings_ReturnValue, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AShooterPlayerState* K2Node_DynamicCast_AsShooter_Player_State, bool K2Node_DynamicCast_bSuccess_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode, bool K2Node_DynamicCast_bSuccess_3, class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode_1, bool K2Node_DynamicCast_bSuccess_4, float CallFunc_GetServerSettingsFloat_OutFloat, bool CallFunc_GetServerSettingsFloat_ReturnValue, float CallFunc_GetServerSettingsFloat_OutFloat_1, bool CallFunc_GetServerSettingsFloat_ReturnValue_1, float CallFunc_GetServerSettingsFloat_OutFloat_2, bool CallFunc_GetServerSettingsFloat_ReturnValue_2, const class FString& CallFunc_LinkedPlayerIDString_ReturnValue, class UPrimalPlayerData* CallFunc_GetPlayerData_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class UPrimalPlayerDataBP_Base_C* K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_K2_TeleportTo_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsLocalController_ReturnValue, double CallFunc_MakeVector_Z_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast, double CallFunc_MakeVector_X_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ServerAscend");

	Params::APlayerPawnTest_C_ServerAscend_Params Parms{};

	Parms.DifficultyIndex = DifficultyIndex;
	Parms.bImmediateAscend = bImmediateAscend;
	Parms.bSuppressAchievements = bSuppressAchievements;
	Parms.bIsCheatAscend = bIsCheatAscend;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsListenServer_ReturnValue = CallFunc_IsListenServer_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_TeleportTo_ReturnValue = CallFunc_K2_TeleportTo_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCharacterController_ReturnValue = CallFunc_GetCharacterController_ReturnValue;
	Parms.CallFunc_GetPrimaryWorld_ReturnValue = CallFunc_GetPrimaryWorld_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWorldSettings_ReturnValue = CallFunc_GetWorldSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_World_Settings = K2Node_DynamicCast_AsPrimal_World_Settings;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_State = K2Node_DynamicCast_AsShooter_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsShooter_Game_Mode = K2Node_DynamicCast_AsShooter_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsShooter_Game_Mode_1 = K2Node_DynamicCast_AsShooter_Game_Mode_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetServerSettingsFloat_OutFloat = CallFunc_GetServerSettingsFloat_OutFloat;
	Parms.CallFunc_GetServerSettingsFloat_ReturnValue = CallFunc_GetServerSettingsFloat_ReturnValue;
	Parms.CallFunc_GetServerSettingsFloat_OutFloat_1 = CallFunc_GetServerSettingsFloat_OutFloat_1;
	Parms.CallFunc_GetServerSettingsFloat_ReturnValue_1 = CallFunc_GetServerSettingsFloat_ReturnValue_1;
	Parms.CallFunc_GetServerSettingsFloat_OutFloat_2 = CallFunc_GetServerSettingsFloat_OutFloat_2;
	Parms.CallFunc_GetServerSettingsFloat_ReturnValue_2 = CallFunc_GetServerSettingsFloat_ReturnValue_2;
	Parms.CallFunc_LinkedPlayerIDString_ReturnValue = CallFunc_LinkedPlayerIDString_ReturnValue;
	Parms.CallFunc_GetPlayerData_ReturnValue = CallFunc_GetPlayerData_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base = K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_K2_TeleportTo_ReturnValue_1 = CallFunc_K2_TeleportTo_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller_1 = K2Node_DynamicCast_AsShooter_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;
	Parms.CallFunc_MakeVector_Z_ImplicitCast = CallFunc_MakeVector_Z_ImplicitCast;
	Parms.CallFunc_MakeVector_Y_ImplicitCast = CallFunc_MakeVector_Y_ImplicitCast;
	Parms.CallFunc_MakeVector_X_ImplicitCast = CallFunc_MakeVector_X_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.PlayerCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TheCommand                                                       (Protected, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RetVal                                                           (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CallFunc_PlayerCommand_ReturnValue                               (None)
// bool                               K2Node_SwitchString_CmpSuccess                                   (None)

void APlayerPawnTest_C::PlayerCommand(const class FString& TheCommand, const class FString& ReturnValue, const class FString& RetVal, const class FString& CallFunc_PlayerCommand_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "PlayerCommand");

	Params::APlayerPawnTest_C_PlayerCommand_Params Parms{};

	Parms.TheCommand = TheCommand;
	Parms.ReturnValue = ReturnValue;
	Parms.RetVal = RetVal;
	Parms.CallFunc_PlayerCommand_ReturnValue = CallFunc_PlayerCommand_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawnTest_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPawnTest.PlayerPawnTest_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APlayerPawnTest_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPawnTest.PlayerPawnTest_C.NetClientAscend
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AscendIndex                                                      (None)
// bool                               bImmediateAscend                                                 (None)
// bool                               bIsCheatAscend                                                   (None)

void APlayerPawnTest_C::NetClientAscend(int32 AscendIndex, bool bImmediateAscend, bool bIsCheatAscend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "NetClientAscend");

	Params::APlayerPawnTest_C_NetClientAscend_Params Parms{};

	Parms.AscendIndex = AscendIndex;
	Parms.bImmediateAscend = bImmediateAscend;
	Parms.bIsCheatAscend = bIsCheatAscend;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.ClientShowHUDNotification
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (None)
// struct FLinearColor                Color                                                            (None)
// double                             LifetimeSeconds                                                  (None)
// double                             DisplayScale                                                     (None)
// class USoundCue*                   SoundToPlay                                                      (None)

void APlayerPawnTest_C::ClientShowHUDNotification(const class FString& Text, const struct FLinearColor& Color, double LifetimeSeconds, double DisplayScale, class USoundCue* SoundToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ClientShowHUDNotification");

	Params::APlayerPawnTest_C_ClientShowHUDNotification_Params Parms{};

	Parms.Text = Text;
	Parms.Color = Color;
	Parms.LifetimeSeconds = LifetimeSeconds;
	Parms.DisplayScale = DisplayScale;
	Parms.SoundToPlay = SoundToPlay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.NetClientPreLoadAcension
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawnTest_C::NetClientPreLoadAcension()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "NetClientPreLoadAcension");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPawnTest.PlayerPawnTest_C.BPSpawnAttackerDamageImpactFX
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        SocketName                                                       (None)
// class APrimalCharacter*            VictimChar                                                       (None)

void APlayerPawnTest_C::BPSpawnAttackerDamageImpactFX(class FName SocketName, class APrimalCharacter* VictimChar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "BPSpawnAttackerDamageImpactFX");

	Params::APlayerPawnTest_C_BPSpawnAttackerDamageImpactFX_Params Parms{};

	Parms.SocketName = SocketName;
	Parms.VictimChar = VictimChar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerPawnTest.PlayerPawnTest_C.AscensionCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APlayerPawnTest_C::AscensionCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "AscensionCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerPawnTest.PlayerPawnTest_C.ExecuteUbergraph_PlayerPawnTest
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               Temp_bool_Variable                                               (None)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)
// int32                              K2Node_CustomEvent_AscendIndex                                   (None)
// bool                               K2Node_CustomEvent_bImmediateAscend                              (None)
// bool                               K2Node_CustomEvent_bIsCheatAscend                                (None)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ZeroConstructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (Edit, ZeroConstructor)
// class UShooterGameUserSettings*    CallFunc_GetUserSettings_ReturnValue                             (Edit, ZeroConstructor)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UFinalCreditsUI_C*           CallFunc_Create_ReturnValue                                      (Edit, ZeroConstructor)
// class FString                      K2Node_CustomEvent_Text                                          (SimpleDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                K2Node_CustomEvent_Color                                         (None)
// double                             K2Node_CustomEvent_LifetimeSeconds                               (None)
// double                             K2Node_CustomEvent_DisplayScale                                  (None)
// class USoundCue*                   K2Node_CustomEvent_SoundToPlay                                   (Edit, ZeroConstructor)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (Edit, ZeroConstructor)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (None)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_1                 (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (Edit, ZeroConstructor)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue_1                               (Edit, ZeroConstructor)
// bool                               CallFunc_TriggerLevelCustomEvents_ReturnValue                    (None)
// bool                               CallFunc_IsShipping_ReturnValue                                  (None)
// class FString                      CallFunc_BPGetPrimaryMapName_ReturnValue                         (AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (None)
// class FName                        K2Node_Event_SocketName                                          (None)
// class APrimalCharacter*            K2Node_Event_VictimChar                                          (Edit, ZeroConstructor)
// struct FLinearColor                CallFunc_GetFXBloodColor_ReturnValue                             (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// double                             CallFunc_SelectFloat_ReturnValue                                 (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (None)
// bool                               Temp_bool_Variable_1                                             (None)
// struct FLinearColor                Temp_struct_Variable                                             (None)
// struct FLinearColor                Temp_struct_Variable_1                                           (None)
// struct FLinearColor                Temp_struct_Variable_2                                           (None)
// int32                              Temp_int_Variable                                                (None)
// bool                               Temp_bool_Variable_2                                             (None)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (None)
// bool                               CallFunc_IsFirstPerson_ReturnValue                               (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// class USceneComponent*             K2Node_Select_Default                                            (Edit, ZeroConstructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (None)
// class USceneComponent*             K2Node_Select_Default_1                                          (Edit, ZeroConstructor)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (None)
// class USceneComponent*             K2Node_Select_Default_2                                          (Edit, ZeroConstructor)
// double                             CallFunc_FMin_ReturnValue                                        (None)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CallFunc_Max_ReturnValue                                         (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (None)
// bool                               CallFunc_TriggerLevelCustomEvents_ReturnValue_1                  (None)
// struct FLinearColor                K2Node_Select_Default_3                                          (None)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (Edit, ZeroConstructor)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_2                 (None)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// float                              CallFunc_BPAddHUDNotification_DisplayTime_ImplicitCast           (None)
// float                              CallFunc_BPAddHUDNotification_DisplayScale_ImplicitCast          (None)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (None)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (None)
// double                             CallFunc_SelectFloat_B_ImplicitCast_1                            (None)
// double                             CallFunc_SelectFloat_A_ImplicitCast_1                            (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (None)

void APlayerPawnTest_C::ExecuteUbergraph_PlayerPawnTest(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, int32 K2Node_CustomEvent_AscendIndex, bool K2Node_CustomEvent_bImmediateAscend, bool K2Node_CustomEvent_bIsCheatAscend, class FName CallFunc_MakeLiteralName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UShooterGameUserSettings* CallFunc_GetUserSettings_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFinalCreditsUI_C* CallFunc_Create_ReturnValue, const class FString& K2Node_CustomEvent_Text, const struct FLinearColor& K2Node_CustomEvent_Color, double K2Node_CustomEvent_LifetimeSeconds, double K2Node_CustomEvent_DisplayScale, class USoundCue* K2Node_CustomEvent_SoundToPlay, class AController* CallFunc_GetController_ReturnValue_1, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue_1, bool CallFunc_TriggerLevelCustomEvents_ReturnValue, bool CallFunc_IsShipping_ReturnValue, const class FString& CallFunc_BPGetPrimaryMapName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FName K2Node_Event_SocketName, class APrimalCharacter* K2Node_Event_VictimChar, const struct FLinearColor& CallFunc_GetFXBloodColor_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, int32 Temp_int_Variable, bool Temp_bool_Variable_2, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsFirstPerson_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USceneComponent* K2Node_Select_Default, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, class USceneComponent* K2Node_Select_Default_1, double CallFunc_SelectFloat_ReturnValue_1, class USceneComponent* K2Node_Select_Default_2, double CallFunc_FMin_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Max_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_TriggerLevelCustomEvents_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default_3, class AController* CallFunc_GetController_ReturnValue_2, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller_2, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_BPAddHUDNotification_DisplayTime_ImplicitCast, float CallFunc_BPAddHUDNotification_DisplayScale_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast_1, double CallFunc_SelectFloat_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerPawnTest_C", "ExecuteUbergraph_PlayerPawnTest");

	Params::APlayerPawnTest_C_ExecuteUbergraph_PlayerPawnTest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CustomEvent_AscendIndex = K2Node_CustomEvent_AscendIndex;
	Parms.K2Node_CustomEvent_bImmediateAscend = K2Node_CustomEvent_bImmediateAscend;
	Parms.K2Node_CustomEvent_bIsCheatAscend = K2Node_CustomEvent_bIsCheatAscend;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetUserSettings_ReturnValue = CallFunc_GetUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.K2Node_CustomEvent_Color = K2Node_CustomEvent_Color;
	Parms.K2Node_CustomEvent_LifetimeSeconds = K2Node_CustomEvent_LifetimeSeconds;
	Parms.K2Node_CustomEvent_DisplayScale = K2Node_CustomEvent_DisplayScale;
	Parms.K2Node_CustomEvent_SoundToPlay = K2Node_CustomEvent_SoundToPlay;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller_1 = K2Node_DynamicCast_AsShooter_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetShooterHUD_ReturnValue = CallFunc_GetShooterHUD_ReturnValue;
	Parms.CallFunc_K2_GetWorld_ReturnValue_1 = CallFunc_K2_GetWorld_ReturnValue_1;
	Parms.CallFunc_TriggerLevelCustomEvents_ReturnValue = CallFunc_TriggerLevelCustomEvents_ReturnValue;
	Parms.CallFunc_IsShipping_ReturnValue = CallFunc_IsShipping_ReturnValue;
	Parms.CallFunc_BPGetPrimaryMapName_ReturnValue = CallFunc_BPGetPrimaryMapName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_Event_SocketName = K2Node_Event_SocketName;
	Parms.K2Node_Event_VictimChar = K2Node_Event_VictimChar;
	Parms.CallFunc_GetFXBloodColor_ReturnValue = CallFunc_GetFXBloodColor_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsFirstPerson_ReturnValue = CallFunc_IsFirstPerson_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_TriggerLevelCustomEvents_ReturnValue_1 = CallFunc_TriggerLevelCustomEvents_ReturnValue_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller_2 = K2Node_DynamicCast_AsShooter_Player_Controller_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_BPAddHUDNotification_DisplayTime_ImplicitCast = CallFunc_BPAddHUDNotification_DisplayTime_ImplicitCast;
	Parms.CallFunc_BPAddHUDNotification_DisplayScale_ImplicitCast = CallFunc_BPAddHUDNotification_DisplayScale_ImplicitCast;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_1 = CallFunc_SelectFloat_B_ImplicitCast_1;
	Parms.CallFunc_SelectFloat_A_ImplicitCast_1 = CallFunc_SelectFloat_A_ImplicitCast_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast = CallFunc_SetVariableFloat_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


