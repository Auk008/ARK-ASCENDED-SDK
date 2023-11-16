#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buff_BeltTorch.Buff_BeltTorch_C
// (Actor)

class UClass* ABuff_BeltTorch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buff_BeltTorch_C");

	return Clss;
}


// Buff_BeltTorch_C Buff_BeltTorch.Default__Buff_BeltTorch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuff_BeltTorch_C* ABuff_BeltTorch_C::GetDefaultObj()
{
	static class ABuff_BeltTorch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuff_BeltTorch_C*>(ABuff_BeltTorch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Buff_BeltTorch.Buff_BeltTorch_C.ActivateVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (Edit, ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsLocallyControlledByPlayer_ReturnValue                 (None)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (None)

void ABuff_BeltTorch_C::ActivateVFX(class APawn* CallFunc_GetInstigator_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlledByPlayer_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "ActivateVFX");

	Params::ABuff_BeltTorch_C_ActivateVFX_Params Parms{};

	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlledByPlayer_ReturnValue = CallFunc_IsLocallyControlledByPlayer_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FPV                                                              (None)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (Edit, ZeroConstructor)
// struct FVector                     CallFunc_GetActorEyesViewPoint_OutLocation                       (None)
// struct FRotator                    CallFunc_GetActorEyesViewPoint_OutRotation                       (None)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (None)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (None)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (None)

void ABuff_BeltTorch_C::UpdateTorchType(bool FPV, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "UpdateTorchType");

	Params::ABuff_BeltTorch_C_UpdateTorchType_Params Parms{};

	Parms.FPV = FPV;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_GetActorEyesViewPoint_OutLocation = CallFunc_GetActorEyesViewPoint_OutLocation;
	Parms.CallFunc_GetActorEyesViewPoint_OutRotation = CallFunc_GetActorEyesViewPoint_OutRotation;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.BPTryMultiUse
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           ForPC                                                            (None)
// int32                              UseIndex                                                         (None)
// bool                               ReturnValue                                                      (None)

void ABuff_BeltTorch_C::BPTryMultiUse(class APlayerController* ForPC, int32 UseIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "BPTryMultiUse");

	Params::ABuff_BeltTorch_C_BPTryMultiUse_Params Parms{};

	Parms.ForPC = ForPC;
	Parms.UseIndex = UseIndex;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.BPGetMultiUseEntries
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           ForPC                                                            (ZeroConstructor)
// TArray<struct FMultiUseEntry>      MultiUseEntries                                                  (ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// TArray<struct FMultiUseEntry>      ReturnValue                                                      (None)

void ABuff_BeltTorch_C::BPGetMultiUseEntries(class APlayerController* ForPC, const TArray<struct FMultiUseEntry>& MultiUseEntries, const TArray<struct FMultiUseEntry>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "BPGetMultiUseEntries");

	Params::ABuff_BeltTorch_C_BPGetMultiUseEntries_Params Parms{};

	Parms.ForPC = ForPC;
	Parms.MultiUseEntries = MultiUseEntries;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchFromItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 TheItem                                                          (ZeroConstructor)
// class UClass*                      WeaponClassOverride                                              (ZeroConstructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (None)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor)
// class AShooterWeapon_Melee*        K2Node_DynamicCast_AsShooter_Weapon_Melee                        (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsValidClass_ReturnValue                                (None)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (None)
// class UPrimalItem_WeaponTorch_C*   K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch                    (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor)
// int32                              CallFunc_GetFlameColorIndex_Index                                (None)
// class UClass*                      K2Node_ClassDynamicCast_AsShooter_Weapon                         (None)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (None)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (None)

void ABuff_BeltTorch_C::InitializeTorchFromItem(class UPrimalItem* TheItem, class UClass* WeaponClassOverride, bool CallFunc_NotEqual_ClassClass_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class AShooterWeapon_Melee* K2Node_DynamicCast_AsShooter_Weapon_Melee, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, class UPrimalItem_WeaponTorch_C* K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, bool K2Node_DynamicCast_bSuccess_1, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, int32 CallFunc_GetFlameColorIndex_Index, class UClass* K2Node_ClassDynamicCast_AsShooter_Weapon, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValidSoftClassReference_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "InitializeTorchFromItem");

	Params::ABuff_BeltTorch_C_InitializeTorchFromItem_Params Parms{};

	Parms.TheItem = TheItem;
	Parms.WeaponClassOverride = WeaponClassOverride;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Weapon_Melee = K2Node_DynamicCast_AsShooter_Weapon_Melee;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch = K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.CallFunc_GetFlameColorIndex_Index = CallFunc_GetFlameColorIndex_Index;
	Parms.K2Node_ClassDynamicCast_AsShooter_Weapon = K2Node_ClassDynamicCast_AsShooter_Weapon;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.SetFlameColorIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TheIndex                                                         (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (None)

void ABuff_BeltTorch_C::SetFlameColorIndex(int32 TheIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "SetFlameColorIndex");

	Params::ABuff_BeltTorch_C_SetFlameColorIndex_Params Parms{};

	Parms.TheIndex = TheIndex;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchFlameColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    TheMIC                                                           (None)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (None)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)
// bool                               CallFunc_NotEqual_LinearColorLinearColor_ReturnValue             (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)

void ABuff_BeltTorch_C::UpdateTorchFlameColor(class UMaterialInstanceDynamic* TheMIC, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "UpdateTorchFlameColor");

	Params::ABuff_BeltTorch_C_UpdateTorchFlameColor_Params Parms{};

	Parms.TheMIC = TheMIC;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_NotEqual_LinearColorLinearColor_ReturnValue = CallFunc_NotEqual_LinearColorLinearColor_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchFlameColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                TheColor                                                         (None)
// class UMaterialInstanceDynamic*    TheMIC                                                           (None)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (None)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)

void ABuff_BeltTorch_C::SetTorchFlameColor(const struct FLinearColor& TheColor, class UMaterialInstanceDynamic* TheMIC, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "SetTorchFlameColor");

	Params::ABuff_BeltTorch_C_SetTorchFlameColor_Params Parms{};

	Parms.TheColor = TheColor;
	Parms.TheMIC = TheMIC;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeAssociatedWeaponClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      WeaponClass                                                      (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (None)

void ABuff_BeltTorch_C::InitializeAssociatedWeaponClass(class UClass* WeaponClass, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "InitializeAssociatedWeaponClass");

	Params::ABuff_BeltTorch_C_InitializeAssociatedWeaponClass_Params Parms{};

	Parms.WeaponClass = WeaponClass;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.Update All Torch Colors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// struct FLinearColor                CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)

void ABuff_BeltTorch_C::Update_All_Torch_Colors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FLinearColor& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "Update All Torch Colors");

	Params::ABuff_BeltTorch_C_Update_All_Torch_Colors_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchColorsArray
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 ForPrimalItem                                                    (ZeroConstructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              Temp_int_Variable                                                (None)
// struct FLinearColor                CallFunc_GetItemCustomColor_outColor                             (None)
// bool                               CallFunc_GetItemCustomColor_ReturnValue                          (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (None)
// class UPrimalItem_WeaponTorch_C*   K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch                    (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// int32                              CallFunc_GetFlameColorIndex_Index                                (None)
// struct FLinearColor                CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_NotEqual_LinearColorLinearColor_ReturnValue             (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)

void ABuff_BeltTorch_C::UpdateTorchColorsArray(class UPrimalItem* ForPrimalItem, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable, const struct FLinearColor& CallFunc_GetItemCustomColor_outColor, bool CallFunc_GetItemCustomColor_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class UPrimalItem_WeaponTorch_C* K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetFlameColorIndex_Index, const struct FLinearColor& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "UpdateTorchColorsArray");

	Params::ABuff_BeltTorch_C_UpdateTorchColorsArray_Params Parms{};

	Parms.ForPrimalItem = ForPrimalItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetItemCustomColor_outColor = CallFunc_GetItemCustomColor_outColor;
	Parms.CallFunc_GetItemCustomColor_ReturnValue = CallFunc_GetItemCustomColor_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch = K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFlameColorIndex_Index = CallFunc_GetFlameColorIndex_Index;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_LinearColorLinearColor_ReturnValue = CallFunc_NotEqual_LinearColorLinearColor_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchColorByIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                TheColor                                                         (None)
// int32                              TheColorIndex                                                    (None)
// class UMaterialInstanceDynamic*    TheMIC                                                           (ZeroConstructor)
// bool                               CallFunc_InRange_IntInt_ReturnValue                              (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ZeroConstructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (None)
// bool                               CallFunc_NotEqual_LinearColorLinearColor_ReturnValue             (None)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor)
// class UPrimalItem_WeaponTorch_C*   K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch                    (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)

void ABuff_BeltTorch_C::SetTorchColorByIndex(const struct FLinearColor& TheColor, int32 TheColorIndex, class UMaterialInstanceDynamic* TheMIC, bool CallFunc_InRange_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class UPrimalItem_WeaponTorch_C* K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "SetTorchColorByIndex");

	Params::ABuff_BeltTorch_C_SetTorchColorByIndex_Params Parms{};

	Parms.TheColor = TheColor;
	Parms.TheColorIndex = TheColorIndex;
	Parms.TheMIC = TheMIC;
	Parms.CallFunc_InRange_IntInt_ReturnValue = CallFunc_InRange_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_NotEqual_LinearColorLinearColor_ReturnValue = CallFunc_NotEqual_LinearColorLinearColor_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch = K2Node_DynamicCast_AsPrimal_Item_Weapon_Torch;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.ApplyMeshColorization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void ABuff_BeltTorch_C::ApplyMeshColorization(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "ApplyMeshColorization");

	Params::ABuff_BeltTorch_C_ApplyMeshColorization_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.ShouldDeactivateBuff
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bShouldDeactivate                                                (None)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (None)
// bool                               CallFunc_IsSubmerged_ReturnValue                                 (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (None)

void ABuff_BeltTorch_C::ShouldDeactivateBuff(bool bShouldDeactivate, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_IsSubmerged_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "ShouldDeactivateBuff");

	Params::ABuff_BeltTorch_C_ShouldDeactivateBuff_Params Parms{};

	Parms.bShouldDeactivate = bShouldDeactivate;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsSubmerged_ReturnValue = CallFunc_IsSubmerged_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeDefaultTorchWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValidClass_ReturnValue                                (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (Edit, ZeroConstructor)
// class AShooterWeapon_Melee*        K2Node_DynamicCast_AsShooter_Weapon_Melee                        (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)

void ABuff_BeltTorch_C::InitializeDefaultTorchWeapon(bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, class AShooterWeapon_Melee* K2Node_DynamicCast_AsShooter_Weapon_Melee, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "InitializeDefaultTorchWeapon");

	Params::ABuff_BeltTorch_C_InitializeDefaultTorchWeapon_Params Parms{};

	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Weapon_Melee = K2Node_DynamicCast_AsShooter_Weapon_Melee;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)

void ABuff_BeltTorch_C::InitializeTorchMesh(bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "InitializeTorchMesh");

	Params::ABuff_BeltTorch_C_InitializeTorchMesh_Params Parms{};

	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.DeactivateBeltTorch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEquipTorchOnDeactivation                                        (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void ABuff_BeltTorch_C::DeactivateBeltTorch(bool bEquipTorchOnDeactivation, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "DeactivateBeltTorch");

	Params::ABuff_BeltTorch_C_DeactivateBeltTorch_Params Parms{};

	Parms.bEquipTorchOnDeactivation = bEquipTorchOnDeactivation;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.AreValidTorchIDs
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              TorchID1                                                         (None)
// int32                              TorchID2                                                         (None)
// bool                               bAreValid                                                        (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (Edit, ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UPrimalItem*                 CallFunc_BPFindItemWithID_ReturnValue                            (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void ABuff_BeltTorch_C::AreValidTorchIDs(int32 TorchID1, int32 TorchID2, bool bAreValid, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, class UPrimalItem* CallFunc_BPFindItemWithID_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "AreValidTorchIDs");

	Params::ABuff_BeltTorch_C_AreValidTorchIDs_Params Parms{};

	Parms.TorchID1 = TorchID1;
	Parms.TorchID2 = TorchID2;
	Parms.bAreValid = bAreValid;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BPFindItemWithID_ReturnValue = CallFunc_BPFindItemWithID_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInitialized                                                     (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (None)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (Edit, ZeroConstructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class UPrimalItem*                 CallFunc_BPFindItemWithID_ReturnValue                            (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)

void ABuff_BeltTorch_C::InitializeTorchItem(bool bInitialized, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, class UPrimalItem* CallFunc_BPFindItemWithID_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "InitializeTorchItem");

	Params::ABuff_BeltTorch_C_InitializeTorchItem_Params Parms{};

	Parms.bInitialized = bInitialized;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BPFindItemWithID_ReturnValue = CallFunc_BPFindItemWithID_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 TorchItem                                                        (None)
// int32                              CallFunc_BPGetItemID_ItemID1                                     (None)
// int32                              CallFunc_BPGetItemID_ItemID2                                     (None)
// bool                               CallFunc_AreValidTorchIDs_bAreValid                              (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (None)
// bool                               CallFunc_IsServer_ReturnValue                                    (None)

void ABuff_BeltTorch_C::InitializeTorchIDs(class UPrimalItem* TorchItem, int32 CallFunc_BPGetItemID_ItemID1, int32 CallFunc_BPGetItemID_ItemID2, bool CallFunc_AreValidTorchIDs_bAreValid, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "InitializeTorchIDs");

	Params::ABuff_BeltTorch_C_InitializeTorchIDs_Params Parms{};

	Parms.TorchItem = TorchItem;
	Parms.CallFunc_BPGetItemID_ItemID1 = CallFunc_BPGetItemID_ItemID1;
	Parms.CallFunc_BPGetItemID_ItemID2 = CallFunc_BPGetItemID_ItemID2;
	Parms.CallFunc_AreValidTorchIDs_bAreValid = CallFunc_AreValidTorchIDs_bAreValid;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.Server_DeactivateBeltTorch
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABuff_BeltTorch_C::Server_DeactivateBeltTorch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "Server_DeactivateBeltTorch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.BuffTickServer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (None)

void ABuff_BeltTorch_C::BuffTickServer(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "BuffTickServer");

	Params::ABuff_BeltTorch_C_BuffTickServer_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchColorByIndex_Multicast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                TheColor                                                         (None)
// int32                              TheIndex                                                         (None)

void ABuff_BeltTorch_C::SetTorchColorByIndex_Multicast(const struct FLinearColor& TheColor, int32 TheIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "SetTorchColorByIndex_Multicast");

	Params::ABuff_BeltTorch_C_SetTorchColorByIndex_Multicast_Params Parms{};

	Parms.TheColor = TheColor;
	Parms.TheIndex = TheIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.BPOnInputEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EPrimalCharacterInputTypeInputType                                                        (None)

void ABuff_BeltTorch_C::BPOnInputEvent(enum class EPrimalCharacterInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "BPOnInputEvent");

	Params::ABuff_BeltTorch_C_BPOnInputEvent_Params Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchFlameColor_Multicast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                TheColor                                                         (None)

void ABuff_BeltTorch_C::SetTorchFlameColor_Multicast(const struct FLinearColor& TheColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "SetTorchFlameColor_Multicast");

	Params::ABuff_BeltTorch_C_SetTorchFlameColor_Multicast_Params Parms{};

	Parms.TheColor = TheColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.BuffTickClient
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (None)

void ABuff_BeltTorch_C::BuffTickClient(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "BuffTickClient");

	Params::ABuff_BeltTorch_C_BuffTickClient_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.BPDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (None)

void ABuff_BeltTorch_C::BPDeactivated(class AActor* ForInstigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "BPDeactivated");

	Params::ABuff_BeltTorch_C_BPDeactivated_Params Parms{};

	Parms.ForInstigator = ForInstigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Buff_BeltTorch.Buff_BeltTorch_C.ExecuteUbergraph_Buff_BeltTorch
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// float                              K2Node_Event_DeltaTime_1                                         (None)
// bool                               CallFunc_AreValidTorchIDs_bAreValid                              (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_InitializeTorchItem_bInitialized                        (None)
// bool                               CallFunc_ShouldDeactivateBuff_bShouldDeactivate                  (None)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_ObjectIsChildOf_ReturnValue                             (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (None)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (None)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (None)
// struct FLinearColor                K2Node_CustomEvent_TheColor_1                                    (None)
// int32                              K2Node_CustomEvent_TheIndex                                      (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// enum class EPrimalCharacterInputTypeK2Node_Event_inputType                                           (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (None)
// struct FLinearColor                K2Node_CustomEvent_TheColor                                      (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character_1                         (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               CallFunc_IsLocallyControlledByPlayer_ReturnValue                 (None)
// bool                               CallFunc_IsFirstPerson_ReturnValue                               (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// float                              K2Node_Event_DeltaTime                                           (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// class AActor*                      K2Node_Event_ForInstigator                                       (None)
// enum class ENetworkModeResult      CallFunc_CanRunCosmeticEvents_OutNetworkMode                     (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (None)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (None)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (None)
// float                              CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast          (None)

void ABuff_BeltTorch_C::ExecuteUbergraph_Buff_BeltTorch(int32 EntryPoint, float K2Node_Event_DeltaTime_1, bool CallFunc_AreValidTorchIDs_bAreValid, bool CallFunc_IsValid_ReturnValue, bool CallFunc_InitializeTorchItem_bInitialized, bool CallFunc_ShouldDeactivateBuff_bShouldDeactivate, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ObjectIsChildOf_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsTimeSince_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, const struct FLinearColor& K2Node_CustomEvent_TheColor_1, int32 K2Node_CustomEvent_TheIndex, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EPrimalCharacterInputType K2Node_Event_inputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FLinearColor& K2Node_CustomEvent_TheColor, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlledByPlayer_ReturnValue, bool CallFunc_IsFirstPerson_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float K2Node_Event_DeltaTime, bool CallFunc_BooleanAND_ReturnValue_1, class AActor* K2Node_Event_ForInstigator, enum class ENetworkModeResult CallFunc_CanRunCosmeticEvents_OutNetworkMode, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Buff_BeltTorch_C", "ExecuteUbergraph_Buff_BeltTorch");

	Params::ABuff_BeltTorch_C_ExecuteUbergraph_Buff_BeltTorch_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTime_1 = K2Node_Event_DeltaTime_1;
	Parms.CallFunc_AreValidTorchIDs_bAreValid = CallFunc_AreValidTorchIDs_bAreValid;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_InitializeTorchItem_bInitialized = CallFunc_InitializeTorchItem_bInitialized;
	Parms.CallFunc_ShouldDeactivateBuff_bShouldDeactivate = CallFunc_ShouldDeactivateBuff_bShouldDeactivate;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_ObjectIsChildOf_ReturnValue = CallFunc_ObjectIsChildOf_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.K2Node_CustomEvent_TheColor_1 = K2Node_CustomEvent_TheColor_1;
	Parms.K2Node_CustomEvent_TheIndex = K2Node_CustomEvent_TheIndex;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Event_inputType = K2Node_Event_inputType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_TheColor = K2Node_CustomEvent_TheColor;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character_1 = K2Node_DynamicCast_AsShooter_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsLocallyControlledByPlayer_ReturnValue = CallFunc_IsLocallyControlledByPlayer_ReturnValue;
	Parms.CallFunc_IsFirstPerson_ReturnValue = CallFunc_IsFirstPerson_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Event_ForInstigator = K2Node_Event_ForInstigator;
	Parms.CallFunc_CanRunCosmeticEvents_OutNetworkMode = CallFunc_CanRunCosmeticEvents_OutNetworkMode;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast = CallFunc_Multiply_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast = CallFunc_Multiply_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast = CallFunc_AddItemDurability_durabilityToAdd_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


