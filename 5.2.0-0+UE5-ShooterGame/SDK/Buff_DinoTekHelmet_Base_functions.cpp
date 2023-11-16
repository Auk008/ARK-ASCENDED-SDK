#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C
// (Actor)

class UClass* ABuff_DinoTekHelmet_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_DinoTekHelmet_Base_C");

	return Clss;
}


// Buff_DinoTekHelmet_Base_C Buff_DinoTekHelmet_Base.Default__Buff_DinoTekHelmet_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_DinoTekHelmet_Base_C* ABuff_DinoTekHelmet_Base_C::GetDefaultObj()
{
	static class ABuff_DinoTekHelmet_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_DinoTekHelmet_Base_C*>(ABuff_DinoTekHelmet_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.IsElectricalStormActive
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return                                                           (None)
// bool                               ActiveStorm                                                      (None)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (None)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ZeroConstructor)
// double                             CallFunc_BreakVector_X                                           (None)
// double                             CallFunc_BreakVector_Y                                           (None)
// double                             CallFunc_BreakVector_Z                                           (None)
// class ADayCycleManager*            CallFunc_GetDayCycleManager_ReturnValue                          (Edit, ZeroConstructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (None)
// TScriptInterface<class IScorchedEarthDayCycle_Interface_C>K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface          (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// TScriptInterface<class IScorchedEarthDayCycle_Interface_C>K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface_1        (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// TArray<class AActor*>              CallFunc_GetElectricalStormValues_LocationRegions                (Edit, ZeroConstructor)
// int32                              CallFunc_GetElectricalStormValues_CurrentRegion                  (None)
// double                             CallFunc_GetElectricalStormValues_Radius                         (None)
// bool                               CallFunc_GetIsElectricalStorm_Return                             (None)
// class AActor*                      CallFunc_Array_Get_Item                                          (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (None)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (None)
// double                             CallFunc_BreakVector_X_1                                         (None)
// double                             CallFunc_BreakVector_Y_1                                         (None)
// double                             CallFunc_BreakVector_Z_1                                         (None)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (None)
// bool                               CallFunc_IsDistanceLessThan_ReturnValue                          (None)
// float                              CallFunc_IsDistanceLessThan_Distance_ImplicitCast                (None)

void ABuff_DinoTekHelmet_Base_C::IsElectricalStormActive(bool Return, bool ActiveStorm, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, class ADayCycleManager* CallFunc_GetDayCycleManager_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, TScriptInterface<class IScorchedEarthDayCycle_Interface_C> K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IScorchedEarthDayCycle_Interface_C> K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface_1, bool K2Node_DynamicCast_bSuccess_2, const TArray<class AActor*>& CallFunc_GetElectricalStormValues_LocationRegions, int32 CallFunc_GetElectricalStormValues_CurrentRegion, double CallFunc_GetElectricalStormValues_Radius, bool CallFunc_GetIsElectricalStorm_Return, class AActor* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_DoesImplementInterface_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_IsDistanceLessThan_ReturnValue, float CallFunc_IsDistanceLessThan_Distance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "IsElectricalStormActive");

	Params::ABuff_DinoTekHelmet_Base_C_IsElectricalStormActive_Params Parms{};

	Parms.Return = Return;
	Parms.ActiveStorm = ActiveStorm;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_GetDayCycleManager_ReturnValue = CallFunc_GetDayCycleManager_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface = K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface_1 = K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetElectricalStormValues_LocationRegions = CallFunc_GetElectricalStormValues_LocationRegions;
	Parms.CallFunc_GetElectricalStormValues_CurrentRegion = CallFunc_GetElectricalStormValues_CurrentRegion;
	Parms.CallFunc_GetElectricalStormValues_Radius = CallFunc_GetElectricalStormValues_Radius;
	Parms.CallFunc_GetIsElectricalStorm_Return = CallFunc_GetIsElectricalStorm_Return;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_IsDistanceLessThan_ReturnValue = CallFunc_IsDistanceLessThan_ReturnValue;
	Parms.CallFunc_IsDistanceLessThan_Distance_ImplicitCast = CallFunc_IsDistanceLessThan_Distance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.GetSocketClampDelta
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             OutSocketClampDelta                                              (None)

void ABuff_DinoTekHelmet_Base_C::GetSocketClampDelta(double OutSocketClampDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "GetSocketClampDelta");

	Params::ABuff_DinoTekHelmet_Base_C_GetSocketClampDelta_Params Parms{};

	Parms.OutSocketClampDelta = OutSocketClampDelta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BPSetupForInstigator
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)

void ABuff_DinoTekHelmet_Base_C::BPSetupForInstigator(class AActor* ForInstigator, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "BPSetupForInstigator");

	Params::ABuff_DinoTekHelmet_Base_C_BPSetupForInstigator_Params Parms{};

	Parms.ForInstigator = ForInstigator;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BPDrawBuffStatusHUD
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterHUD*                 HUD                                                              (None)
// float                              XPos                                                             (None)
// float                              YPos                                                             (None)
// float                              ScaleMult                                                        (None)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (None)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (None)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (None)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (None)
// float                              CallFunc_GetItemStatModifier_ReturnValue                         (None)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (None)
// int32                              CallFunc_FFloor_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (None)
// float                              CallFunc_BPDrawTextCentered_ReturnValue                          (None)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (None)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (None)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (None)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (None)
// float                              CallFunc_BPDrawTextCentered_Y_ImplicitCast                       (None)
// float                              CallFunc_BPDrawTextCentered_X_ImplicitCast                       (None)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (None)

void ABuff_DinoTekHelmet_Base_C::BPDrawBuffStatusHUD(class AShooterHUD* HUD, float XPos, float YPos, float ScaleMult, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, float CallFunc_GetItemStatModifier_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_BPDrawTextCentered_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, float CallFunc_BPDrawTextCentered_Y_ImplicitCast, float CallFunc_BPDrawTextCentered_X_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "BPDrawBuffStatusHUD");

	Params::ABuff_DinoTekHelmet_Base_C_BPDrawBuffStatusHUD_Params Parms{};

	Parms.HUD = HUD;
	Parms.XPos = XPos;
	Parms.YPos = YPos;
	Parms.ScaleMult = ScaleMult;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_LinearColorToColor_ReturnValue = CallFunc_Conv_LinearColorToColor_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetItemStatModifier_ReturnValue = CallFunc_GetItemStatModifier_ReturnValue;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue = CallFunc_GetWeaponClipAmmo_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_BPDrawTextCentered_ReturnValue = CallFunc_BPDrawTextCentered_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_BPDrawTextCentered_Y_ImplicitCast = CallFunc_BPDrawTextCentered_Y_ImplicitCast;
	Parms.CallFunc_BPDrawTextCentered_X_ImplicitCast = CallFunc_BPDrawTextCentered_X_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.IsAllowedToFire
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     AimAtLoc                                                         (None)
// struct FVector                     ServerSpawnAtLoc                                                 (None)
// bool                               bAllowed                                                         (None)
// bool                               RetVal                                                           (None)
// TArray<class AActor*>              Temp_object_Variable                                             (Edit, ZeroConstructor, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// class UPrimalItem*                 CallFunc_GetTekSaddleItem_TekSaddleItem                          (Edit, ZeroConstructor)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (Edit, ZeroConstructor)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (None)
// struct FVector                     CallFunc_BreakTransform_Location                                 (None)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (None)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (None)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (ZeroConstructor)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (None)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue_1                        (None)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (None)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (None)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (None)
// TArray<class AActor*>              Temp_object_Variable_1                                           (Edit, ZeroConstructor)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit_1                                (ZeroConstructor)
// bool                               CallFunc_LineTraceSingle_ReturnValue_1                           (None)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (Edit, ZeroConstructor)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, ZeroConstructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (None)
// class AStructurePreventionZoneVolume*CallFunc_BPIsWithinAnyStructurePreventionVolume_ReturnValue      (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              CallFunc_IsChildOfClassesSoftRef_ReturnValue                     (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)

void ABuff_DinoTekHelmet_Base_C::IsAllowedToFire(const struct FVector& AimAtLoc, const struct FVector& ServerSpawnAtLoc, bool bAllowed, bool RetVal, const TArray<class AActor*>& Temp_object_Variable, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class UActorComponent* CallFunc_GetAttachedComponent_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const TArray<class AActor*>& Temp_object_Variable_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_1, bool CallFunc_LineTraceSingle_ReturnValue_1, class UClass* CallFunc_ClassAssetResolve_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AStructurePreventionZoneVolume* CallFunc_BPIsWithinAnyStructurePreventionVolume_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_IsChildOfClassesSoftRef_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "IsAllowedToFire");

	Params::ABuff_DinoTekHelmet_Base_C_IsAllowedToFire_Params Parms{};

	Parms.AimAtLoc = AimAtLoc;
	Parms.ServerSpawnAtLoc = ServerSpawnAtLoc;
	Parms.bAllowed = bAllowed;
	Parms.RetVal = RetVal;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetTekSaddleItem_TekSaddleItem = CallFunc_GetTekSaddleItem_TekSaddleItem;
	Parms.CallFunc_GetAttachedComponent_ReturnValue = CallFunc_GetAttachedComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component = K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue_1 = CallFunc_GetSocketTransform_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_LineTraceSingle_OutHit_1 = CallFunc_LineTraceSingle_OutHit_1;
	Parms.CallFunc_LineTraceSingle_ReturnValue_1 = CallFunc_LineTraceSingle_ReturnValue_1;
	Parms.CallFunc_ClassAssetResolve_ReturnValue = CallFunc_ClassAssetResolve_ReturnValue;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_BPIsWithinAnyStructurePreventionVolume_ReturnValue = CallFunc_BPIsWithinAnyStructurePreventionVolume_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsChildOfClassesSoftRef_ReturnValue = CallFunc_IsChildOfClassesSoftRef_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.HideBuffFromHUD
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)

void ABuff_DinoTekHelmet_Base_C::HideBuffFromHUD(bool ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "HideBuffFromHUD");

	Params::ABuff_DinoTekHelmet_Base_C_HideBuffFromHUD_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.SetTargeting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bTargetingEnabled                                                (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)

void ABuff_DinoTekHelmet_Base_C::SetTargeting(bool bTargetingEnabled, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "SetTargeting");

	Params::ABuff_DinoTekHelmet_Base_C_SetTargeting_Params Parms{};

	Parms.bTargetingEnabled = bTargetingEnabled;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BuffTickClient
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (None)
// bool                               Temp_bool_Variable                                               (None)
// bool                               Temp_bool_Variable_1                                             (None)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UObject*                     CallFunc_GetDefaultObject_ReturnValue                            (ZeroConstructor)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character_1                     (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// double                             CallFunc_BreakVector_X                                           (None)
// double                             CallFunc_BreakVector_Y                                           (None)
// double                             CallFunc_BreakVector_Z                                           (None)
// double                             CallFunc_BreakVector_X_1                                         (None)
// double                             CallFunc_BreakVector_Y_1                                         (None)
// double                             CallFunc_BreakVector_Z_1                                         (None)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (None)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (None)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (None)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (None)
// struct FVector                     K2Node_Select_Default                                            (None)
// struct FVector                     K2Node_Select_Default_1                                          (None)
// struct FVector                     CallFunc_VInterpTo_Constant_ReturnValue                          (None)
// struct FVector                     CallFunc_VInterpTo_Constant_ReturnValue_1                        (None)
// float                              CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast             (None)

void ABuff_DinoTekHelmet_Base_C::BuffTickClient(float DeltaTime, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetDefaultObject_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character_1, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& K2Node_Select_Default, const struct FVector& K2Node_Select_Default_1, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue_1, float CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "BuffTickClient");

	Params::ABuff_DinoTekHelmet_Base_C_BuffTickClient_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDefaultObject_ReturnValue = CallFunc_GetDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character_1 = K2Node_DynamicCast_AsPrimal_Dino_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_VInterpTo_Constant_ReturnValue = CallFunc_VInterpTo_Constant_ReturnValue;
	Parms.CallFunc_VInterpTo_Constant_ReturnValue_1 = CallFunc_VInterpTo_Constant_ReturnValue_1;
	Parms.CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast = CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.LocalDoAttack
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDidAttack                                                       (None)
// bool                               Temp_bool_Variable                                               (None)
// bool                               Temp_bool_Variable_1                                             (None)
// class FName                        Temp_name_Variable                                               (None)
// class FName                        Temp_name_Variable_1                                             (None)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (None)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class APrimalBuff*                 CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff               (Edit, ZeroConstructor)
// bool                               CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue             (None)
// class FName                        K2Node_Select_Default                                            (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (None)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (ZeroConstructor)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (Edit, ZeroConstructor)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue                          (Edit, ZeroConstructor)
// class UPrimalItem*                 CallFunc_GetTekSaddleItem_TekSaddleItem                          (Edit, ZeroConstructor)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (Edit, ZeroConstructor)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (None)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (None)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (None)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (None)
// struct FVector                     CallFunc_BreakTransform_Location                                 (None)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (None)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (None)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (None)
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
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (None)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (None)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (None)
// int32                              CallFunc_BreakHitResult_HitItem                                  (None)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (None)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (None)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (None)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (None)
// struct FVector                     K2Node_Select_Default_1                                          (None)
// bool                               CallFunc_BPFastTrace_ReturnValue                                 (None)

void ABuff_DinoTekHelmet_Base_C::LocalDoAttack(bool bDidAttack, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName CallFunc_MakeLiteralName_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess, class APrimalBuff* CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff, bool CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue, class FName K2Node_Select_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, const TArray<class AActor*>& K2Node_MakeArray_Array, class APlayerController* CallFunc_GetOwnerController_ReturnValue, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class UActorComponent* CallFunc_GetAttachedComponent_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& K2Node_Select_Default_1, bool CallFunc_BPFastTrace_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "LocalDoAttack");

	Params::ABuff_DinoTekHelmet_Base_C_LocalDoAttack_Params Parms{};

	Parms.bDidAttack = bDidAttack;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff = CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff;
	Parms.CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue = CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetOwnerController_ReturnValue = CallFunc_GetOwnerController_ReturnValue;
	Parms.CallFunc_GetTekSaddleItem_TekSaddleItem = CallFunc_GetTekSaddleItem_TekSaddleItem;
	Parms.CallFunc_GetAttachedComponent_ReturnValue = CallFunc_GetAttachedComponent_ReturnValue;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component = K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
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
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_BPFastTrace_ReturnValue = CallFunc_BPFastTrace_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.PlayItemAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                PlayAnim                                                         (Edit, ZeroConstructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)
// class UPrimalItem*                 CallFunc_GetTekSaddleItem_TekSaddleItem                          (Edit, ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (Edit, ZeroConstructor)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (None)
// float                              CallFunc_Montage_Play_ReturnValue                                (None)

void ABuff_DinoTekHelmet_Base_C::PlayItemAnim(class UAnimMontage* PlayAnim, bool CallFunc_IsDedicatedServer_ReturnValue, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, bool CallFunc_IsValid_ReturnValue, class UActorComponent* CallFunc_GetAttachedComponent_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "PlayItemAnim");

	Params::ABuff_DinoTekHelmet_Base_C_PlayItemAnim_Params Parms{};

	Parms.PlayAnim = PlayAnim;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetTekSaddleItem_TekSaddleItem = CallFunc_GetTekSaddleItem_TekSaddleItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAttachedComponent_ReturnValue = CallFunc_GetAttachedComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component = K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.GetTekSaddleItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 TekSaddleItem                                                    (Edit, ZeroConstructor)
// class UPrimalItem*                 RetVal                                                           (Edit, ZeroConstructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class UPrimalItem*                 CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)

void ABuff_DinoTekHelmet_Base_C::GetTekSaddleItem(class UPrimalItem* TekSaddleItem, class UPrimalItem* RetVal, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class UPrimalItem* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "GetTekSaddleItem");

	Params::ABuff_DinoTekHelmet_Base_C_GetTekSaddleItem_Params Parms{};

	Parms.TekSaddleItem = TekSaddleItem;
	Parms.RetVal = RetVal;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ActivateHelmet
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_DinoTekHelmet_Base_C::ActivateHelmet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "ActivateHelmet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DeactivateHelmet
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_DinoTekHelmet_Base_C::DeactivateHelmet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "DeactivateHelmet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.PressedAltFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_DinoTekHelmet_Base_C::PressedAltFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "PressedAltFire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DoServerActivateHelmet
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_DinoTekHelmet_Base_C::DoServerActivateHelmet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "DoServerActivateHelmet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DoServerDeactivateHelmet
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_DinoTekHelmet_Base_C::DoServerDeactivateHelmet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "DoServerDeactivateHelmet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ServerDoAttack
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     AimAtLoc                                                         (None)
// struct FVector                     ServerSpawnAtLoc                                                 (None)

void ABuff_DinoTekHelmet_Base_C::ServerDoAttack(const struct FVector& AimAtLoc, const struct FVector& ServerSpawnAtLoc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "ServerDoAttack");

	Params::ABuff_DinoTekHelmet_Base_C_ServerDoAttack_Params Parms{};

	Parms.AimAtLoc = AimAtLoc;
	Parms.ServerSpawnAtLoc = ServerSpawnAtLoc;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DoAttack
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     AimAtLoc                                                         (None)
// bool                               bLeftSide                                                        (None)
// struct FVector                     ServerSpawnAtLoc                                                 (None)

void ABuff_DinoTekHelmet_Base_C::DoAttack(const struct FVector& AimAtLoc, bool bLeftSide, const struct FVector& ServerSpawnAtLoc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "DoAttack");

	Params::ABuff_DinoTekHelmet_Base_C_DoAttack_Params Parms{};

	Parms.AimAtLoc = AimAtLoc;
	Parms.bLeftSide = bLeftSide;
	Parms.ServerSpawnAtLoc = ServerSpawnAtLoc;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.CheckForItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_DinoTekHelmet_Base_C::CheckForItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "CheckForItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ExecuteUbergraph_Buff_DinoTekHelmet_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// bool                               Temp_bool_Variable                                               (None)
// class FName                        Temp_name_Variable                                               (None)
// bool                               Temp_bool_Variable_1                                             (None)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (ZeroConstructor)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (None)
// bool                               CallFunc_IsTimeSince_ReturnValue_1                               (None)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (None)
// struct FVector                     K2Node_CustomEvent_AimAtLoc_1                                    (None)
// struct FVector                     K2Node_CustomEvent_ServerSpawnAtLoc_1                            (None)
// bool                               CallFunc_IsAllowedToFire_bAllowed                                (None)
// struct FVector                     K2Node_CustomEvent_AimAtLoc                                      (None)
// bool                               K2Node_CustomEvent_bLeftSide                                     (None)
// struct FVector                     K2Node_CustomEvent_ServerSpawnAtLoc                              (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// class FName                        Temp_name_Variable_1                                             (None)
// class UPrimalItem*                 CallFunc_GetTekSaddleItem_TekSaddleItem                          (ZeroConstructor)
// class UActorComponent*             CallFunc_GetAttachedComponent_ReturnValue                        (ZeroConstructor)
// class FName                        K2Node_Select_Default                                            (None)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (None)
// struct FVector                     CallFunc_BreakTransform_Location                                 (None)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (None)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (None)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// float                              CallFunc_BreakRotator_Roll                                       (None)
// float                              CallFunc_BreakRotator_Pitch                                      (None)
// float                              CallFunc_BreakRotator_Yaw                                        (None)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (None)
// class AActor*                      CallFunc_SpawnActorDeferred_ReturnValue                          (ZeroConstructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (None)
// class AShooterProjectile*          K2Node_DynamicCast_AsShooter_Projectile                          (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (None)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (None)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (None)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (None)
// class UAnimMontage*                K2Node_Select_Default_1                                          (ZeroConstructor)
// float                              CallFunc_BreakRotator_Roll_1                                     (None)
// float                              CallFunc_BreakRotator_Pitch_1                                    (None)
// float                              CallFunc_BreakRotator_Yaw_1                                      (None)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (None)
// bool                               CallFunc_IsTimeSince_ReturnValue_2                               (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_IsTimeSince_ReturnValue_3                               (None)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (ZeroConstructor)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (None)
// class UPrimalItemArmor_SaddleGeneric_Tek_C*K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek        (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (None)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (None)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor)
// bool                               CallFunc_CanElementDecrease_CanDecrease                          (None)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (None)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (None)
// bool                               CallFunc_IsShipping_ReturnValue                                  (None)
// bool                               CallFunc_HasEngram_ReturnValue                                   (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character_1                          (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (None)
// double                             CallFunc_GetSocketClampDelta_OutSocketClampDelta                 (None)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (None)
// float                              CallFunc_ClampRotAxis_ReturnValue                                (None)
// float                              CallFunc_ClampRotAxis_ReturnValue_1                              (None)
// bool                               CallFunc_IsElectricalStormActive_Return                          (None)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (None)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_1                      (None)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (None)
// float                              CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast                 (None)
// float                              CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1               (None)
// float                              CallFunc_ClampRotAxis_MaxDiff_ImplicitCast                       (None)
// float                              CallFunc_ClampRotAxis_MaxDiff_ImplicitCast_1                     (None)

void ABuff_DinoTekHelmet_Base_C::ExecuteUbergraph_Buff_DinoTekHelmet_Base(int32 EntryPoint, bool Temp_bool_Variable, class FName Temp_name_Variable, bool Temp_bool_Variable_1, class UWorld* CallFunc_K2_GetWorld_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue_1, double CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FVector& K2Node_CustomEvent_AimAtLoc_1, const struct FVector& K2Node_CustomEvent_ServerSpawnAtLoc_1, bool CallFunc_IsAllowedToFire_bAllowed, const struct FVector& K2Node_CustomEvent_AimAtLoc, bool K2Node_CustomEvent_bLeftSide, const struct FVector& K2Node_CustomEvent_ServerSpawnAtLoc, bool CallFunc_Not_PreBool_ReturnValue, class FName Temp_name_Variable_1, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class UActorComponent* CallFunc_GetAttachedComponent_ReturnValue, class FName K2Node_Select_Default, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, class AActor* CallFunc_SpawnActorDeferred_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AShooterProjectile* K2Node_DynamicCast_AsShooter_Projectile, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class UAnimMontage* K2Node_Select_Default_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_GetGameTimeInSeconds_ReturnValue_1, bool CallFunc_IsTimeSince_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue_3, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item, bool K2Node_ClassDynamicCast_bSuccess, class UPrimalItemArmor_SaddleGeneric_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek, bool K2Node_DynamicCast_bSuccess_3, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_4, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_CanElementDecrease_CanDecrease, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool K2Node_DynamicCast_bSuccess_5, class AShooterPlayerState* K2Node_DynamicCast_AsShooter_Player_State, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsShipping_ReturnValue, bool CallFunc_HasEngram_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPrimalItem* CallFunc_GetEquippedItemOfType_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UClass* CallFunc_GetObjectClass_ReturnValue_1, double CallFunc_GetSocketClampDelta_OutSocketClampDelta, bool CallFunc_ClassIsChildOf_ReturnValue, float CallFunc_ClampRotAxis_ReturnValue, float CallFunc_ClampRotAxis_ReturnValue_1, bool CallFunc_IsElectricalStormActive_Return, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, float CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast, float CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1, float CallFunc_ClampRotAxis_MaxDiff_ImplicitCast, float CallFunc_ClampRotAxis_MaxDiff_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_DinoTekHelmet_Base_C", "ExecuteUbergraph_Buff_DinoTekHelmet_Base");

	Params::ABuff_DinoTekHelmet_Base_C_ExecuteUbergraph_Buff_DinoTekHelmet_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_K2_GetWorld_ReturnValue = CallFunc_K2_GetWorld_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue_1 = CallFunc_IsTimeSince_ReturnValue_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.K2Node_CustomEvent_AimAtLoc_1 = K2Node_CustomEvent_AimAtLoc_1;
	Parms.K2Node_CustomEvent_ServerSpawnAtLoc_1 = K2Node_CustomEvent_ServerSpawnAtLoc_1;
	Parms.CallFunc_IsAllowedToFire_bAllowed = CallFunc_IsAllowedToFire_bAllowed;
	Parms.K2Node_CustomEvent_AimAtLoc = K2Node_CustomEvent_AimAtLoc;
	Parms.K2Node_CustomEvent_bLeftSide = K2Node_CustomEvent_bLeftSide;
	Parms.K2Node_CustomEvent_ServerSpawnAtLoc = K2Node_CustomEvent_ServerSpawnAtLoc;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_GetTekSaddleItem_TekSaddleItem = CallFunc_GetTekSaddleItem_TekSaddleItem;
	Parms.CallFunc_GetAttachedComponent_ReturnValue = CallFunc_GetAttachedComponent_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component = K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_SpawnActorDeferred_ReturnValue = CallFunc_SpawnActorDeferred_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Projectile = K2Node_DynamicCast_AsShooter_Projectile;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_IsTimeSince_ReturnValue_2 = CallFunc_IsTimeSince_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue_3 = CallFunc_IsTimeSince_ReturnValue_3;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_ClassDynamicCast_AsPrimal_Item = K2Node_ClassDynamicCast_AsPrimal_Item;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek = K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_CanElementDecrease_CanDecrease = CallFunc_CanElementDecrease_CanDecrease;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsShooter_Player_State = K2Node_DynamicCast_AsShooter_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsShipping_ReturnValue = CallFunc_IsShipping_ReturnValue;
	Parms.CallFunc_HasEngram_ReturnValue = CallFunc_HasEngram_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character_1 = K2Node_DynamicCast_AsPrimal_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetEquippedItemOfType_ReturnValue = CallFunc_GetEquippedItemOfType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_GetSocketClampDelta_OutSocketClampDelta = CallFunc_GetSocketClampDelta_OutSocketClampDelta;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_ClampRotAxis_ReturnValue = CallFunc_ClampRotAxis_ReturnValue;
	Parms.CallFunc_ClampRotAxis_ReturnValue_1 = CallFunc_ClampRotAxis_ReturnValue_1;
	Parms.CallFunc_IsElectricalStormActive_Return = CallFunc_IsElectricalStormActive_Return;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue_1 = CallFunc_Conv_RotatorToVector_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast = CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast;
	Parms.CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1 = CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1;
	Parms.CallFunc_ClampRotAxis_MaxDiff_ImplicitCast = CallFunc_ClampRotAxis_MaxDiff_ImplicitCast;
	Parms.CallFunc_ClampRotAxis_MaxDiff_ImplicitCast_1 = CallFunc_ClampRotAxis_MaxDiff_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


