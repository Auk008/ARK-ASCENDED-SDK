#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PreviewScene_Base.PreviewScene_Base_C
// (Actor)

class UClass* APreviewScene_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PreviewScene_Base_C");

	return Clss;
}


// PreviewScene_Base_C PreviewScene_Base.Default__PreviewScene_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APreviewScene_Base_C* APreviewScene_Base_C::GetDefaultObj()
{
	static class APreviewScene_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APreviewScene_Base_C*>(APreviewScene_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PreviewScene_Base.PreviewScene_Base_C.SetDebugLightIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewIntensity                                                     (None)

void APreviewScene_Base_C::SetDebugLightIntensity(double NewIntensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Base_C", "SetDebugLightIntensity");

	Params::APreviewScene_Base_C_SetDebugLightIntensity_Params Parms{};

	Parms.NewIntensity = NewIntensity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PreviewScene_Base.PreviewScene_Base_C.SetDebugLightRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    NewRotation                                                      (None)

void APreviewScene_Base_C::SetDebugLightRotation(const struct FRotator& NewRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Base_C", "SetDebugLightRotation");

	Params::APreviewScene_Base_C_SetDebugLightRotation_Params Parms{};

	Parms.NewRotation = NewRotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PreviewScene_Base.PreviewScene_Base_C.DebugLights
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APreviewScene_Base_C::DebugLights()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Base_C", "DebugLights");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PreviewScene_Base.PreviewScene_Base_C.UpdateFloorLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFemale                                                         (None)

void APreviewScene_Base_C::UpdateFloorLocation(bool IsFemale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Base_C", "UpdateFloorLocation");

	Params::APreviewScene_Base_C_UpdateFloorLocation_Params Parms{};

	Parms.IsFemale = IsFemale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PreviewScene_Base.PreviewScene_Base_C.NotifySetupPreviewScene
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UMeshComponent*              ForMeshComp                                                      (Edit, ZeroConstructor)
// TArray<class USceneComponent*>     ForChildComps                                                    (Edit, ZeroConstructor)
// class AShooterPlayerController*    ForPC                                                            (None)

void APreviewScene_Base_C::NotifySetupPreviewScene(class UMeshComponent* ForMeshComp, const TArray<class USceneComponent*>& ForChildComps, class AShooterPlayerController* ForPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Base_C", "NotifySetupPreviewScene");

	Params::APreviewScene_Base_C_NotifySetupPreviewScene_Params Parms{};

	Parms.ForMeshComp = ForMeshComp;
	Parms.ForChildComps = ForChildComps;
	Parms.ForPC = ForPC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PreviewScene_Base.PreviewScene_Base_C.NotifyPreviewSceneUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (None)

void APreviewScene_Base_C::NotifyPreviewSceneUpdated(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Base_C", "NotifyPreviewSceneUpdated");

	Params::APreviewScene_Base_C_NotifyPreviewSceneUpdated_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PreviewScene_Base.PreviewScene_Base_C.ExecuteUbergraph_PreviewScene_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// struct FVector                     CallFunc_BreakTransform_Location                                 (None)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (None)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (None)
// class UMeshComponent*              K2Node_Event_ForMeshComp                                         (Edit, ZeroConstructor)
// TArray<class USceneComponent*>     K2Node_Event_ForChildComps                                       (Edit, ZeroConstructor)
// class AShooterPlayerController*    K2Node_Event_ForPC                                               (Edit, ZeroConstructor)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (None)
// int32                              CallFunc_Max_ReturnValue                                         (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (None)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (None)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (None)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (None)
// double                             CallFunc_Vector_Distance_ReturnValue                             (None)
// float                              K2Node_Event_DeltaTime                                           (None)
// float                              K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast  (None)
// float                              K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast          (None)

void APreviewScene_Base_C::ExecuteUbergraph_PreviewScene_Base(int32 EntryPoint, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UMeshComponent* K2Node_Event_ForMeshComp, const TArray<class USceneComponent*>& K2Node_Event_ForChildComps, class AShooterPlayerController* K2Node_Event_ForPC, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, double CallFunc_Vector_Distance_ReturnValue, float K2Node_Event_DeltaTime, float K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast, float K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Base_C", "ExecuteUbergraph_PreviewScene_Base");

	Params::APreviewScene_Base_C_ExecuteUbergraph_PreviewScene_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Event_ForMeshComp = K2Node_Event_ForMeshComp;
	Parms.K2Node_Event_ForChildComps = K2Node_Event_ForChildComps;
	Parms.K2Node_Event_ForPC = K2Node_Event_ForPC;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast = K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast = K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


