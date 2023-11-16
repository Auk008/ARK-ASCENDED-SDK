#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ProjTekDinoHelmet.ProjTekDinoHelmet_C
// (Actor)

class UClass* AProjTekDinoHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProjTekDinoHelmet_C");

	return Clss;
}


// ProjTekDinoHelmet_C ProjTekDinoHelmet.Default__ProjTekDinoHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjTekDinoHelmet_C* AProjTekDinoHelmet_C::GetDefaultObj()
{
	static class AProjTekDinoHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjTekDinoHelmet_C*>(AProjTekDinoHelmet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.BPIgnoreRadialDamageVictim
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Victim                                                           (None)
// bool                               ReturnValue                                                      (None)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (None)
// bool                               CallFunc_BPIsA_ReturnValue                                       (None)
// bool                               CallFunc_Array_Contains_ReturnValue                              (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (None)
// double                             CallFunc_VSize_ReturnValue                                       (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)

void AProjTekDinoHelmet_C::BPIgnoreRadialDamageVictim(class AActor* Victim, bool ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_BPIsA_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProjTekDinoHelmet_C", "BPIgnoreRadialDamageVictim");

	Params::AProjTekDinoHelmet_C_BPIgnoreRadialDamageVictim_Params Parms{};

	Parms.Victim = Victim;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_BPIsA_ReturnValue = CallFunc_BPIsA_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AProjTekDinoHelmet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProjTekDinoHelmet_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.OnExplode
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Result                                                           (None)

void AProjTekDinoHelmet_C::OnExplode(const struct FHitResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProjTekDinoHelmet_C", "OnExplode");

	Params::AProjTekDinoHelmet_C_OnExplode_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProjTekDinoHelmet.ProjTekDinoHelmet_C.ExecuteUbergraph_ProjTekDinoHelmet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (None)
// struct FHitResult                  K2Node_Event_Result                                              (ZeroConstructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (None)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (None)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (None)
// float                              CallFunc_BreakHitResult_Time                                     (None)
// float                              CallFunc_BreakHitResult_Distance                                 (None)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (None)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (None)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (None)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (None)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (None)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (None)
// int32                              CallFunc_BreakHitResult_HitItem                                  (None)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (None)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (None)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (None)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (None)
// double                             CallFunc_VSize_ReturnValue                                       (None)
// class APrimalStructure*            K2Node_DynamicCast_AsPrimal_Structure                            (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_Array_Contains_ReturnValue                              (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)

void AProjTekDinoHelmet_C::ExecuteUbergraph_ProjTekDinoHelmet(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& K2Node_Event_Result, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, double CallFunc_VSize_ReturnValue, class APrimalStructure* K2Node_DynamicCast_AsPrimal_Structure, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProjTekDinoHelmet_C", "ExecuteUbergraph_ProjTekDinoHelmet");

	Params::AProjTekDinoHelmet_C_ExecuteUbergraph_ProjTekDinoHelmet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_Event_Result = K2Node_Event_Result;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
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
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Structure = K2Node_DynamicCast_AsPrimal_Structure;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


