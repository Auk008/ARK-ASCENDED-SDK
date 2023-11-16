#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FL_ControlRigFX.FL_ControlRigFX_C
// (None)

class UClass* UFL_ControlRigFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FL_ControlRigFX_C");

	return Clss;
}


// FL_ControlRigFX_C FL_ControlRigFX.Default__FL_ControlRigFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFL_ControlRigFX_C* UFL_ControlRigFX_C::GetDefaultObj()
{
	static class UFL_ControlRigFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFL_ControlRigFX_C*>(UFL_ControlRigFX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FL_ControlRigFX.FL_ControlRigFX_C.Spawn Phys Mat VFX
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Bone_Name                                                        (ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, PersistentInstance)
// class APrimalCharacter*            Creature                                                         (Edit, ZeroConstructor)
// class UPhysicalMaterial*           Phys_Material                                                    (Edit, ZeroConstructor)
// struct FVector                     Ground_Normal                                                    (None)
// struct FVector                     Location                                                         (None)
// class UNiagaraSystem*              NS                                                               (Edit, ZeroConstructor)
// double                             Amount_Mult                                                      (None)
// double                             Vel_Mult                                                         (None)
// double                             Size_Mult                                                        (None)
// bool                               Attached                                                         (None)
// struct FVector                     Bone_Velocity                                                    (None)
// class UObject*                     __WorldContext                                                   (Edit, ZeroConstructor)
// struct FVector                     Velocity                                                         (None)
// class UNiagaraComponent*           NS_Spawned                                                       (Edit, ZeroConstructor)
// struct FColor                      Color                                                            (None)
// double                             Bounce                                                           (None)
// double                             Friction                                                         (None)
// double                             Pebbles                                                          (None)
// double                             Thatch                                                           (None)
// double                             Grass                                                            (None)
// double                             Leaves                                                           (None)
// double                             Dust                                                             (None)
// double                             Sand                                                             (None)
// double                             Size_Multiply                                                    (None)
// struct FStruct_Ground_Attributes   CallFunc_GetDataTableRowFromName_OutRow                          (Edit, ZeroConstructor)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (None)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (None)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (None)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (Edit, ZeroConstructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (None)
// struct FStruct_Ground_Attributes   CallFunc_GetDataTableRowFromName_OutRow_1                        (Edit, ZeroConstructor)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (None)
// struct FVector                     CallFunc_GetComponentVelocity_ReturnValue                        (None)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (None)
// class USoundBase*                  Temp_object_Variable                                             (Edit, ZeroConstructor)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (Edit, ZeroConstructor)
// class USoundBase*                  Temp_object_Variable_1                                           (Edit, ZeroConstructor)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (None)
// class USoundBase*                  Temp_object_Variable_2                                           (Edit, ZeroConstructor)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (None)
// class USoundBase*                  Temp_object_Variable_3                                           (Edit, ZeroConstructor)
// int64                              CallFunc_FFloor64_ReturnValue                                    (None)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (None)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (None)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (None)
// int32                              Temp_int_Variable                                                (None)
// class USoundBase*                  K2Node_Select_Default                                            (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_1                 (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_2                 (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_3                 (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_4                 (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_5                 (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_6                 (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_7                 (None)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (None)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (None)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_8                 (None)

void UFL_ControlRigFX_C::Spawn_Phys_Mat_VFX(const class FString& Bone_Name, class APrimalCharacter* Creature, class UPhysicalMaterial* Phys_Material, const struct FVector& Ground_Normal, const struct FVector& Location, class UNiagaraSystem* NS, double Amount_Mult, double Vel_Mult, double Size_Mult, bool Attached, const struct FVector& Bone_Velocity, class UObject* __WorldContext, const struct FVector& Velocity, class UNiagaraComponent* NS_Spawned, const struct FColor& Color, double Bounce, double Friction, double Pebbles, double Thatch, double Grass, double Leaves, double Dust, double Sand, double Size_Multiply, const struct FStruct_Ground_Attributes& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FStruct_Ground_Attributes& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FVector& CallFunc_GetComponentVelocity_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, class USoundBase* Temp_object_Variable, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class USoundBase* Temp_object_Variable_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class USoundBase* Temp_object_Variable_2, double CallFunc_MapRangeClamped_ReturnValue, class USoundBase* Temp_object_Variable_3, int64 CallFunc_FFloor64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 Temp_int_Variable, class USoundBase* K2Node_Select_Default, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast_2, float CallFunc_SetVariableFloat_InValue_ImplicitCast_3, float CallFunc_SetVariableFloat_InValue_ImplicitCast_4, float CallFunc_SetVariableFloat_InValue_ImplicitCast_5, float CallFunc_SetVariableFloat_InValue_ImplicitCast_6, float CallFunc_SetVariableFloat_InValue_ImplicitCast_7, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_ControlRigFX_C", "Spawn Phys Mat VFX");

	Params::UFL_ControlRigFX_C_Spawn_Phys_Mat_VFX_Params Parms{};

	Parms.Bone_Name = Bone_Name;
	Parms.Creature = Creature;
	Parms.Phys_Material = Phys_Material;
	Parms.Ground_Normal = Ground_Normal;
	Parms.Location = Location;
	Parms.NS = NS;
	Parms.Amount_Mult = Amount_Mult;
	Parms.Vel_Mult = Vel_Mult;
	Parms.Size_Mult = Size_Mult;
	Parms.Attached = Attached;
	Parms.Bone_Velocity = Bone_Velocity;
	Parms.__WorldContext = __WorldContext;
	Parms.Velocity = Velocity;
	Parms.NS_Spawned = NS_Spawned;
	Parms.Color = Color;
	Parms.Bounce = Bounce;
	Parms.Friction = Friction;
	Parms.Pebbles = Pebbles;
	Parms.Thatch = Thatch;
	Parms.Grass = Grass;
	Parms.Leaves = Leaves;
	Parms.Dust = Dust;
	Parms.Sand = Sand;
	Parms.Size_Multiply = Size_Multiply;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_GetComponentVelocity_ReturnValue = CallFunc_GetComponentVelocity_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.CallFunc_FFloor64_ReturnValue = CallFunc_FFloor64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast = CallFunc_SetVariableFloat_InValue_ImplicitCast;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_1 = CallFunc_SetVariableFloat_InValue_ImplicitCast_1;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_2 = CallFunc_SetVariableFloat_InValue_ImplicitCast_2;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_3 = CallFunc_SetVariableFloat_InValue_ImplicitCast_3;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_4 = CallFunc_SetVariableFloat_InValue_ImplicitCast_4;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_5 = CallFunc_SetVariableFloat_InValue_ImplicitCast_5;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_6 = CallFunc_SetVariableFloat_InValue_ImplicitCast_6;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_7 = CallFunc_SetVariableFloat_InValue_ImplicitCast_7;
	Parms.CallFunc_MakeVector_X_ImplicitCast = CallFunc_MakeVector_X_ImplicitCast;
	Parms.CallFunc_MakeVector_Y_ImplicitCast = CallFunc_MakeVector_Y_ImplicitCast;
	Parms.CallFunc_MakeVector_Z_ImplicitCast = CallFunc_MakeVector_Z_ImplicitCast;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_8 = CallFunc_SetVariableFloat_InValue_ImplicitCast_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FL_ControlRigFX.FL_ControlRigFX_C.ControlRigNotify
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (None)
// class FName                        CustomTag                                                        (None)
// struct FHitResult                  HitResult                                                        (Edit, ZeroConstructor)
// class APrimalCharacter*            PrimalCharacter                                                  (Edit, ZeroConstructor)
// struct FVector                     BoneVelocity                                                     (None)
// class UObject*                     __WorldContext                                                   (Edit, ZeroConstructor)
// bool                               bContainsDeath                                                   (None)
// class UPhysicalMaterial*           Phys_Material                                                    (Edit, ZeroConstructor)
// struct FVector                     Normal                                                           (None)
// struct FVector                     Velocity                                                         (None)
// struct FVector                     Location                                                         (None)
// class APrimalCharacter*            Character                                                        (ZeroConstructor)
// class FString                      bone                                                             (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (None)
// double                             CallFunc_GetLastRenderTimeNoShadow_ReturnValue                   (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (None)
// float                              CallFunc_TimeSince_ReturnValue                                   (None)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// bool                               CallFunc_Contains_ReturnValue                                    (None)
// double                             CallFunc_GetTimeSeconds_ReturnValue                              (None)
// double                             CallFunc_GetTimeSeconds_ReturnValue_1                            (None)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (None)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_2                         (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Split_LeftS                                             (ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Split_RightS                                            (AutoWeak, ContainsInstancedReference, SimpleDisplay, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// bool                               CallFunc_Split_ReturnValue                                       (None)
// TArray<class AActor*>              Temp_object_Variable                                             (Edit, ZeroConstructor, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, PersistentInstance)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (Edit, ZeroConstructor)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (None)
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
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (None)
// struct FStruct_VFX_Body_Drop       CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (None)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (None)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (None)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (None)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1                   (None)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (None)

void UFL_ControlRigFX_C::ControlRigNotify(class FName NotifyName, class FName CustomTag, const struct FHitResult& HitResult, class APrimalCharacter* PrimalCharacter, const struct FVector& BoneVelocity, class UObject* __WorldContext, bool bContainsDeath, class UPhysicalMaterial* Phys_Material, const struct FVector& Normal, const struct FVector& Velocity, const struct FVector& Location, class APrimalCharacter* Character, const class FString& bone, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, double CallFunc_GetLastRenderTimeNoShadow_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_TimeSince_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_Contains_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue_1, double CallFunc_Subtract_DoubleFloat_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleFloat_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const TArray<class AActor*>& Temp_object_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FStruct_VFX_Body_Drop& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, float CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FL_ControlRigFX_C", "ControlRigNotify");

	Params::UFL_ControlRigFX_C_ControlRigNotify_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.CustomTag = CustomTag;
	Parms.HitResult = HitResult;
	Parms.PrimalCharacter = PrimalCharacter;
	Parms.BoneVelocity = BoneVelocity;
	Parms.__WorldContext = __WorldContext;
	Parms.bContainsDeath = bContainsDeath;
	Parms.Phys_Material = Phys_Material;
	Parms.Normal = Normal;
	Parms.Velocity = Velocity;
	Parms.Location = Location;
	Parms.Character = Character;
	Parms.bone = bone;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetLastRenderTimeNoShadow_ReturnValue = CallFunc_GetLastRenderTimeNoShadow_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_TimeSince_ReturnValue = CallFunc_TimeSince_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue_1 = CallFunc_GetTimeSeconds_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue = CallFunc_Subtract_DoubleFloat_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1 = CallFunc_Subtract_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_2 = CallFunc_Less_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
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
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast = CallFunc_Subtract_DoubleFloat_B_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1 = CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast = CallFunc_Multiply_DoubleFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


