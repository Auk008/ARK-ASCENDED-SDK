#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Element.PrimalItemResource_Element_C
// (None)

class UClass* UPrimalItemResource_Element_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Element_C");

	return Clss;
}


// PrimalItemResource_Element_C PrimalItemResource_Element.Default__PrimalItemResource_Element_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Element_C* UPrimalItemResource_Element_C::GetDefaultObj()
{
	static class UPrimalItemResource_Element_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Element_C*>(UPrimalItemResource_Element_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPServerHandleItemNetExecCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerController*    ForPC                                                            (Edit, ZeroConstructor)
// class FName                        CommandName                                                      (None)
// struct FBPNetExecParams            ExecParams                                                       (Edit, ZeroConstructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (None)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class AShooterCharacter*           CallFunc_GetPlayerCharacter_ReturnValue                          (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (None)
// double                             CallFunc_VSize_ReturnValue                                       (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (None)

void UPrimalItemResource_Element_C::BPServerHandleItemNetExecCommand(class AShooterPlayerController* ForPC, class FName CommandName, const struct FBPNetExecParams& ExecParams, bool K2Node_SwitchName_CmpSuccess, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, class AShooterCharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Element_C", "BPServerHandleItemNetExecCommand");

	Params::UPrimalItemResource_Element_C_BPServerHandleItemNetExecCommand_Params Parms{};

	Parms.ForPC = ForPC;
	Parms.CommandName = CommandName;
	Parms.ExecParams = ExecParams;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.FindShapeshifter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalDinoCharacter*        Shapeshifter                                                     (Edit, ZeroConstructor)
// bool                               RetMounted                                                       (None)
// bool                               Mounted                                                          (None)
// class APrimalDinoCharacter*        Result                                                           (Edit, ZeroConstructor)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams_1                              (Edit, ZeroConstructor, AssetRegistrySearchable, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ZeroConstructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (None)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor)
// bool                               CallFunc_BPServerHandleNetExecCommand_ReturnValue                (None)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (None)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (None)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (None)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (None)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// TArray<struct FHitResult>          CallFunc_VTraceMultiBP_OutHits                                   (Edit, ZeroConstructor)
// bool                               CallFunc_VTraceMultiBP_ReturnValue                               (None)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
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
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (None)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (None)
// bool                               CallFunc_BPServerHandleNetExecCommand_ReturnValue_1              (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (None)
// bool                               CallFunc_IsAlive_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (None)
// bool                               CallFunc_IsAlliedWithOtherTeam_ReturnValue                       (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (None)
// bool                               CallFunc_BPIsTamed_ReturnValue                                   (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (None)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (None)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (None)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (None)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (None)

void UPrimalItemResource_Element_C::FindShapeshifter(class APrimalDinoCharacter* Shapeshifter, bool RetMounted, bool Mounted, class APrimalDinoCharacter* Result, int32 Temp_int_Array_Index_Variable, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_BPServerHandleNetExecCommand_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, const TArray<struct FHitResult>& CallFunc_VTraceMultiBP_OutHits, bool CallFunc_VTraceMultiBP_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Not_PreBool_ReturnValue, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BPServerHandleNetExecCommand_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_IsAlliedWithOtherTeam_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BPIsTamed_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Element_C", "FindShapeshifter");

	Params::UPrimalItemResource_Element_C_FindShapeshifter_Params Parms{};

	Parms.Shapeshifter = Shapeshifter;
	Parms.RetMounted = RetMounted;
	Parms.Mounted = Mounted;
	Parms.Result = Result;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;
	Parms.K2Node_MakeStruct_BPNetExecParams_1 = K2Node_MakeStruct_BPNetExecParams_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_BPServerHandleNetExecCommand_ReturnValue = CallFunc_BPServerHandleNetExecCommand_ReturnValue;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_VTraceMultiBP_OutHits = CallFunc_VTraceMultiBP_OutHits;
	Parms.CallFunc_VTraceMultiBP_ReturnValue = CallFunc_VTraceMultiBP_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
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
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BPServerHandleNetExecCommand_ReturnValue_1 = CallFunc_BPServerHandleNetExecCommand_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_IsAlliedWithOtherTeam_ReturnValue = CallFunc_IsAlliedWithOtherTeam_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_BPIsTamed_ReturnValue = CallFunc_BPIsTamed_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPPreUseItem
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ZeroConstructor, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// enum class ENetModeBP              CallFunc_SwitchNetworkMode_OutNetworkMode                        (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue                          (Edit, ZeroConstructor)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               CallFunc_BPServerHandleNetExecCommand_ReturnValue                (None)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams_1                              (None)
// bool                               CallFunc_BPServerHandleNetExecCommand_ReturnValue_1              (None)

void UPrimalItemResource_Element_C::BPPreUseItem(const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, enum class ENetModeBP CallFunc_SwitchNetworkMode_OutNetworkMode, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetPlayerName_ReturnValue, class APlayerController* CallFunc_GetOwnerController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BPServerHandleNetExecCommand_ReturnValue, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams_1, bool CallFunc_BPServerHandleNetExecCommand_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Element_C", "BPPreUseItem");

	Params::UPrimalItemResource_Element_C_BPPreUseItem_Params Parms{};

	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SwitchNetworkMode_OutNetworkMode = CallFunc_SwitchNetworkMode_OutNetworkMode;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_GetOwnerController_ReturnValue = CallFunc_GetOwnerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BPServerHandleNetExecCommand_ReturnValue = CallFunc_BPServerHandleNetExecCommand_ReturnValue;
	Parms.K2Node_MakeStruct_BPNetExecParams_1 = K2Node_MakeStruct_BPNetExecParams_1;
	Parms.CallFunc_BPServerHandleNetExecCommand_ReturnValue_1 = CallFunc_BPServerHandleNetExecCommand_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPCanUse
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIgnoreCooldown                                                  (None)
// bool                               ReturnValue                                                      (None)
// class APrimalCharacter*            Res                                                              (Edit, ZeroConstructor)
// bool                               Ret                                                              (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ZeroConstructor)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (Edit, ZeroConstructor)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue                          (Edit, ZeroConstructor)
// enum class ENetModeBP              CallFunc_SwitchNetworkMode_OutNetworkMode                        (None)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// class AShooterPlayerState*         K2Node_DynamicCast_AsShooter_Player_State                        (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ZeroConstructor)
// class APrimalDinoCharacter*        CallFunc_FindShapeshifter_Shapeshifter                           (None)
// bool                               CallFunc_FindShapeshifter_RetMounted                             (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)

void UPrimalItemResource_Element_C::BPCanUse(bool bIgnoreCooldown, bool ReturnValue, class APrimalCharacter* Res, bool Ret, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class APlayerController* CallFunc_GetOwnerController_ReturnValue, enum class ENetModeBP CallFunc_SwitchNetworkMode_OutNetworkMode, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class AShooterPlayerState* K2Node_DynamicCast_AsShooter_Player_State, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetPlayerName_ReturnValue, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, class APrimalDinoCharacter* CallFunc_FindShapeshifter_Shapeshifter, bool CallFunc_FindShapeshifter_RetMounted, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Element_C", "BPCanUse");

	Params::UPrimalItemResource_Element_C_BPCanUse_Params Parms{};

	Parms.bIgnoreCooldown = bIgnoreCooldown;
	Parms.ReturnValue = ReturnValue;
	Parms.Res = Res;
	Parms.Ret = Ret;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetOwnerController_ReturnValue = CallFunc_GetOwnerController_ReturnValue;
	Parms.CallFunc_SwitchNetworkMode_OutNetworkMode = CallFunc_SwitchNetworkMode_OutNetworkMode;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsShooter_Player_State = K2Node_DynamicCast_AsShooter_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;
	Parms.CallFunc_FindShapeshifter_Shapeshifter = CallFunc_FindShapeshifter_Shapeshifter;
	Parms.CallFunc_FindShapeshifter_RetMounted = CallFunc_FindShapeshifter_RetMounted;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPSupportUseOntoItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ZeroConstructor)
// bool                               ReturnValue                                                      (None)
// bool                               IsValid                                                          (None)
// TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C>K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface(Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (None)
// int32                              CallFunc_IGet_Max_Ammo_RetVal                                    (None)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (None)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue_1                         (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (None)

void UPrimalItemResource_Element_C::BPSupportUseOntoItem(class UPrimalItem* DestinationItem, bool ReturnValue, bool IsValid, TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C> K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, int32 CallFunc_IGet_Max_Ammo_RetVal, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Element_C", "BPSupportUseOntoItem");

	Params::UPrimalItemResource_Element_C_BPSupportUseOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.ReturnValue = ReturnValue;
	Parms.IsValid = IsValid;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface = K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_IGet_Max_Ammo_RetVal = CallFunc_IGet_Max_Ammo_RetVal;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue = CallFunc_GetWeaponClipAmmo_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue_1 = CallFunc_GetWeaponClipAmmo_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemResource_Element.PrimalItemResource_Element_C.BPUsedOntoItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 DestinationItem                                                  (Edit, ZeroConstructor)
// int32                              AdditionalData                                                   (None)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C>K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface(None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (None)

void UPrimalItemResource_Element_C::BPUsedOntoItem(class UPrimalItem* DestinationItem, int32 AdditionalData, class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IPrimalItemArmor_SaddleGeneric_Tek_Interface_C> K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_DoesImplementInterface_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemResource_Element_C", "BPUsedOntoItem");

	Params::UPrimalItemResource_Element_C_BPUsedOntoItem_Params Parms{};

	Parms.DestinationItem = DestinationItem;
	Parms.AdditionalData = AdditionalData;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface = K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


