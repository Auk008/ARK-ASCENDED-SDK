#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Dino_Character_BP.Dino_Character_BP_C
// (Actor, Pawn)

class UClass* ADino_Character_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dino_Character_BP_C");

	return Clss;
}


// Dino_Character_BP_C Dino_Character_BP.Default__Dino_Character_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADino_Character_BP_C* ADino_Character_BP_C::GetDefaultObj()
{
	static class ADino_Character_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADino_Character_BP_C*>(ADino_Character_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CurrentCameraPivotLocation                                       (None)
// struct FVector                     DesiredCameraPivotLocation                                       (None)
// bool                               ReturnValue                                                      (None)

void ADino_Character_BP_C::BPOverrideCameraDesiredPivotLocation(const struct FVector& CurrentCameraPivotLocation, const struct FVector& DesiredCameraPivotLocation, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraDesiredPivotLocation");

	Params::ADino_Character_BP_C_BPOverrideCameraDesiredPivotLocation_Params Parms{};

	Parms.CurrentCameraPivotLocation = CurrentCameraPivotLocation;
	Parms.DesiredCameraPivotLocation = DesiredCameraPivotLocation;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotRotation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    CurrentCameraPivotRotation                                       (None)
// struct FRotator                    DesiredCameraPivotRotation                                       (None)
// bool                               ReturnValue                                                      (None)
// float                              CallFunc_BreakRotator_Roll                                       (None)
// float                              CallFunc_BreakRotator_Pitch                                      (None)
// float                              CallFunc_BreakRotator_Yaw                                        (None)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (None)

void ADino_Character_BP_C::BPOverrideCameraDesiredPivotRotation(const struct FRotator& CurrentCameraPivotRotation, const struct FRotator& DesiredCameraPivotRotation, bool ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraDesiredPivotRotation");

	Params::ADino_Character_BP_C_BPOverrideCameraDesiredPivotRotation_Params Parms{};

	Parms.CurrentCameraPivotRotation = CurrentCameraPivotRotation;
	Parms.DesiredCameraPivotRotation = DesiredCameraPivotRotation;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotOffset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (None)
// struct FVector                     DesiredCameraOffset                                              (None)
// bool                               ReturnValue                                                      (None)

void ADino_Character_BP_C::BPOverrideCameraDesiredPivotOffset(const struct FPrimalCameraParams& CameraParams, const struct FVector& DesiredCameraOffset, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraDesiredPivotOffset");

	Params::ADino_Character_BP_C_BPOverrideCameraDesiredPivotOffset_Params Parms{};

	Parms.CameraParams = CameraParams;
	Parms.DesiredCameraOffset = DesiredCameraOffset;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraPivotLocationInterpParams
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

void ADino_Character_BP_C::BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraParams& CameraParams, const struct FPrimalCameraPivotZInterpOverrides& PivotZInterpOverrides, const struct FPrimalCameraInterpParams& LastInterpParamsX, const struct FPrimalCameraInterpParams& LastInterpParamsY, const struct FPrimalCameraInterpParams& LastInterpParamsZ, const struct FPrimalCameraInterpParams& OutInterpParamsX, const struct FPrimalCameraInterpParams& OutInterpParamsY, const struct FPrimalCameraInterpParams& OutInterpParamsZ, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraPivotLocationInterpParams");

	Params::ADino_Character_BP_C_BPOverrideCameraPivotLocationInterpParams_Params Parms{};

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


// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraArmLengthInterpParams
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (None)
// struct FPrimalCameraInterpParams   OutInterpParams                                                  (None)
// bool                               ReturnValue                                                      (None)

void ADino_Character_BP_C::BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraParams& CameraParams, const struct FPrimalCameraInterpParams& OutInterpParams, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraArmLengthInterpParams");

	Params::ADino_Character_BP_C_BPOverrideCameraArmLengthInterpParams_Params Parms{};

	Parms.CameraParams = CameraParams;
	Parms.OutInterpParams = OutInterpParams;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraArmLength
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams         CameraParams                                                     (None)
// float                              CurrentCameraArmLength                                           (None)
// float                              DesiredCameraArmLength                                           (None)
// bool                               ReturnValue                                                      (None)
// double                             CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast(None)
// double                             CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast(None)

void ADino_Character_BP_C::BPOverrideCameraArmLength(const struct FPrimalCameraParams& CameraParams, float CurrentCameraArmLength, float DesiredCameraArmLength, bool ReturnValue, double CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast, double CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPOverrideCameraArmLength");

	Params::ADino_Character_BP_C_BPOverrideCameraArmLength_Params Parms{};

	Parms.CameraParams = CameraParams;
	Parms.CurrentCameraArmLength = CurrentCameraArmLength;
	Parms.DesiredCameraArmLength = DesiredCameraArmLength;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast = CallFunc_FinalOverrideCameraArmLength_CurrentCameraArmLength_ImplicitCast;
	Parms.CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast = CallFunc_FinalOverrideCameraArmLength_DesiredCameraArmLength_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dino_Character_BP.Dino_Character_BP_C.GetFXBloodColor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (None)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Split_LeftS                                             (SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
// class FString                      CallFunc_Split_RightS                                            (None)
// bool                               CallFunc_Split_ReturnValue                                       (None)
// bool                               K2Node_SwitchString_CmpSuccess                                   (None)
// struct FLinearColor                CallFunc_GetFXBloodColor_ReturnValue                             (None)

void ADino_Character_BP_C::GetFXBloodColor(const struct FLinearColor& ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, bool K2Node_SwitchString_CmpSuccess, const struct FLinearColor& CallFunc_GetFXBloodColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "GetFXBloodColor");

	Params::ADino_Character_BP_C_GetFXBloodColor_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetFXBloodColor_ReturnValue = CallFunc_GetFXBloodColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BlueprintOverrideWantsToRun
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInputWantsToRun                                                 (None)
// bool                               ReturnValue                                                      (None)
// bool                               RetVal                                                           (None)
// bool                               CallFunc_BlueprintOverrideWantsToRun_ReturnValue                 (None)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (None)
// bool                               CallFunc_K2_TimerExists_ReturnValue                              (None)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (None)
// bool                               CallFunc_IsWildSlow_ReturnValue                                  (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// double                             CallFunc_GetNetworkTimeInSeconds_ReturnValue                     (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// enum class ENetModeBP              CallFunc_SwitchNetworkMode_OutNetworkMode                        (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (None)
// float                              K2Node_VariableSet_FollowingRunDistance_ImplicitCast             (None)
// float                              K2Node_VariableSet_FollowingRunDistance_ImplicitCast_1           (None)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (None)

void ADino_Character_BP_C::BlueprintOverrideWantsToRun(bool bInputWantsToRun, bool ReturnValue, bool RetVal, bool CallFunc_BlueprintOverrideWantsToRun_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_K2_TimerExists_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsWildSlow_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_GetNetworkTimeInSeconds_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, enum class ENetModeBP CallFunc_SwitchNetworkMode_OutNetworkMode, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_FollowingRunDistance_ImplicitCast, float K2Node_VariableSet_FollowingRunDistance_ImplicitCast_1, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BlueprintOverrideWantsToRun");

	Params::ADino_Character_BP_C_BlueprintOverrideWantsToRun_Params Parms{};

	Parms.bInputWantsToRun = bInputWantsToRun;
	Parms.ReturnValue = ReturnValue;
	Parms.RetVal = RetVal;
	Parms.CallFunc_BlueprintOverrideWantsToRun_ReturnValue = CallFunc_BlueprintOverrideWantsToRun_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_TimerExists_ReturnValue = CallFunc_K2_TimerExists_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_IsWildSlow_ReturnValue = CallFunc_IsWildSlow_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetNetworkTimeInSeconds_ReturnValue = CallFunc_GetNetworkTimeInSeconds_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_SwitchNetworkMode_OutNetworkMode = CallFunc_SwitchNetworkMode_OutNetworkMode;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSet_FollowingRunDistance_ImplicitCast = K2Node_VariableSet_FollowingRunDistance_ImplicitCast;
	Parms.K2Node_VariableSet_FollowingRunDistance_ImplicitCast_1 = K2Node_VariableSet_FollowingRunDistance_ImplicitCast_1;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dino_Character_BP.Dino_Character_BP_C.UpdateBabyAndRunValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (None)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (Edit, ZeroConstructor)
// class ADino_AIController_BP_C*     K2Node_DynamicCast_AsDino_AIController_BP                        (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsWildSlow_ReturnValue                                  (None)
// class AAIController*               CallFunc_GetAIController_ReturnValue_1                           (Edit, ZeroConstructor)
// class APrimalDinoAIController*     K2Node_DynamicCast_AsPrimal_Dino_AIController                    (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// enum class ENetModeBP              CallFunc_SwitchNetworkMode_OutNetworkMode                        (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// float                              K2Node_VariableSet_FollowStoppingDistance_ImplicitCast           (None)
// float                              K2Node_VariableSet_FollowingRunDistance_ImplicitCast             (None)
// float                              K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast              (None)
// float                              K2Node_VariableSet_FollowStoppingDistance_ImplicitCast_1         (None)
// float                              K2Node_VariableSet_FollowingRunDistance_ImplicitCast_1           (None)
// float                              K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast_1            (None)
// float                              K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast_2            (None)

void ADino_Character_BP_C::UpdateBabyAndRunValues(int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class AAIController* CallFunc_GetAIController_ReturnValue, class ADino_AIController_BP_C* K2Node_DynamicCast_AsDino_AIController_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsWildSlow_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue_1, class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController, bool K2Node_DynamicCast_bSuccess_1, enum class ENetModeBP CallFunc_SwitchNetworkMode_OutNetworkMode, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_VariableSet_FollowStoppingDistance_ImplicitCast, float K2Node_VariableSet_FollowingRunDistance_ImplicitCast, float K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast, float K2Node_VariableSet_FollowStoppingDistance_ImplicitCast_1, float K2Node_VariableSet_FollowingRunDistance_ImplicitCast_1, float K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast_1, float K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "UpdateBabyAndRunValues");

	Params::ADino_Character_BP_C_UpdateBabyAndRunValues_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.K2Node_DynamicCast_AsDino_AIController_BP = K2Node_DynamicCast_AsDino_AIController_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsWildSlow_ReturnValue = CallFunc_IsWildSlow_ReturnValue;
	Parms.CallFunc_GetAIController_ReturnValue_1 = CallFunc_GetAIController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_AIController = K2Node_DynamicCast_AsPrimal_Dino_AIController;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SwitchNetworkMode_OutNetworkMode = CallFunc_SwitchNetworkMode_OutNetworkMode;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_VariableSet_FollowStoppingDistance_ImplicitCast = K2Node_VariableSet_FollowStoppingDistance_ImplicitCast;
	Parms.K2Node_VariableSet_FollowingRunDistance_ImplicitCast = K2Node_VariableSet_FollowingRunDistance_ImplicitCast;
	Parms.K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast = K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast;
	Parms.K2Node_VariableSet_FollowStoppingDistance_ImplicitCast_1 = K2Node_VariableSet_FollowStoppingDistance_ImplicitCast_1;
	Parms.K2Node_VariableSet_FollowingRunDistance_ImplicitCast_1 = K2Node_VariableSet_FollowingRunDistance_ImplicitCast_1;
	Parms.K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast_1 = K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast_1;
	Parms.K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast_2 = K2Node_VariableSet_BabySpeedMultiplier_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPControlRigNotify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        NotifyName                                                       (None)
// class FName                        NotifyCustomTag                                                  (None)
// struct FHitResult                  WorldSpaceHitResult                                              (None)
// struct FVector                     Velocity                                                         (None)

void ADino_Character_BP_C::BPControlRigNotify(class FName NotifyName, class FName NotifyCustomTag, const struct FHitResult& WorldSpaceHitResult, const struct FVector& Velocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPControlRigNotify");

	Params::ADino_Character_BP_C_BPControlRigNotify_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.NotifyCustomTag = NotifyCustomTag;
	Parms.WorldSpaceHitResult = WorldSpaceHitResult;
	Parms.Velocity = Velocity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dino_Character_BP.Dino_Character_BP_C.GetDinoContentData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDinoContentData            DinoContentData                                                  (None)

void ADino_Character_BP_C::GetDinoContentData(const struct FDinoContentData& DinoContentData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "GetDinoContentData");

	Params::ADino_Character_BP_C_GetDinoContentData_Params Parms{};

	Parms.DinoContentData = DinoContentData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPHandleRightShoulderButton
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (None)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// TArray<class APrimalBuff*>         CallFunc_GetBuffs_TheBuffs                                       (Edit, ZeroConstructor)
// class APrimalBuff*                 CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// class ABuff_DinoTekHelmet_Base_C*  K2Node_DynamicCast_AsBuff_Dino_Tek_Helmet_Base                   (None)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)

void ADino_Character_BP_C::BPHandleRightShoulderButton(bool ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const TArray<class APrimalBuff*>& CallFunc_GetBuffs_TheBuffs, class APrimalBuff* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABuff_DinoTekHelmet_Base_C* K2Node_DynamicCast_AsBuff_Dino_Tek_Helmet_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPHandleRightShoulderButton");

	Params::ADino_Character_BP_C_BPHandleRightShoulderButton_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetBuffs_TheBuffs = CallFunc_GetBuffs_TheBuffs;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuff_Dino_Tek_Helmet_Base = K2Node_DynamicCast_AsBuff_Dino_Tek_Helmet_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dino_Character_BP.Dino_Character_BP_C.UpdateWildBabyNextRunTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADino_Character_BP_C::UpdateWildBabyNextRunTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "UpdateWildBabyNextRunTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BlendSpaceGenerated
// (Event, Public, BlueprintEvent)
// Parameters:
// class UBlendSpace*                 BlendSpace                                                       (None)

void ADino_Character_BP_C::BlendSpaceGenerated(class UBlendSpace* BlendSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BlendSpaceGenerated");

	Params::ADino_Character_BP_C_BlendSpaceGenerated_Params Parms{};

	Parms.BlendSpace = BlendSpace;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dino_Character_BP.Dino_Character_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADino_Character_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_Character_BP.Dino_Character_BP_C.EditorBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void ADino_Character_BP_C::EditorBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "EditorBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BP_OnSetDeath
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADino_Character_BP_C::BP_OnSetDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BP_OnSetDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPBecomeBaby
// (Event, Public, BlueprintEvent)
// Parameters:

void ADino_Character_BP_C::BPBecomeBaby()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPBecomeBaby");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_Character_BP.Dino_Character_BP_C.ReceiveDestroyed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADino_Character_BP_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPTriggerStasisEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void ADino_Character_BP_C::BPTriggerStasisEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPTriggerStasisEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPSpawnAttackerDamageImpactFX
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        SocketName                                                       (None)
// class APrimalCharacter*            VictimChar                                                       (None)

void ADino_Character_BP_C::BPSpawnAttackerDamageImpactFX(class FName SocketName, class APrimalCharacter* VictimChar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPSpawnAttackerDamageImpactFX");

	Params::ADino_Character_BP_C_BPSpawnAttackerDamageImpactFX_Params Parms{};

	Parms.SocketName = SocketName;
	Parms.VictimChar = VictimChar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPBecomeAdult
// (Event, Public, BlueprintEvent)
// Parameters:

void ADino_Character_BP_C::BPBecomeAdult()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPBecomeAdult");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_Character_BP.Dino_Character_BP_C.BPNotifyClaimed
// (Event, Public, BlueprintEvent)
// Parameters:

void ADino_Character_BP_C::BPNotifyClaimed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "BPNotifyClaimed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dino_Character_BP.Dino_Character_BP_C.ExecuteUbergraph_Dino_Character_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (None)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (None)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (None)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (Edit, ZeroConstructor)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (Edit, ZeroConstructor)
// float                              CallFunc_TimeSeconds_ReturnValue                                 (None)
// class ADino_Character_BP_C*        K2Node_DynamicCast_AsDino_Character_BP                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (None)
// double                             CallFunc_SelectFloat_ReturnValue                                 (None)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (None)
// class UAnimMontage*                CallFunc_GetCurrentMontage_ReturnValue                           (Edit, ZeroConstructor)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (None)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (None)
// class UBlendSpace*                 K2Node_Event_blendSpace                                          (ZeroConstructor)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_Contains_ReturnValue                                    (None)
// bool                               CallFunc_Contains_ReturnValue_1                                  (None)
// bool                               CallFunc_Contains_ReturnValue_2                                  (None)
// bool                               CallFunc_Contains_ReturnValue_3                                  (None)
// bool                               CallFunc_Contains_ReturnValue_4                                  (None)
// int32                              Temp_int_Array_Index_Variable                                    (None)
// enum class ENetModeBP              CallFunc_SwitchNetworkMode_OutNetworkMode                        (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (None)
// TArray<class USceneComponent*>     CallFunc_GetComponentsByTag_ReturnValue                          (Edit, ZeroConstructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (None)
// class UActorComponent*             CallFunc_Array_Get_Item                                          (Edit, ZeroConstructor)
// class USceneComponent*             K2Node_DynamicCast_AsScene_Component                             (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (None)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (None)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (None)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (None)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (None)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (Edit, ZeroConstructor)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (Edit, ZeroConstructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_2                         (None)
// bool                               CallFunc_DoesUseHibernation_ReturnValue                          (None)
// class FName                        K2Node_Event_SocketName                                          (None)
// class APrimalCharacter*            K2Node_Event_VictimChar                                          (Edit, ZeroConstructor)
// struct FLinearColor                CallFunc_GetFXBloodColor_ReturnValue                             (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (None)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (None)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (None)
// double                             CallFunc_GetNetworkTimeInSeconds_ReturnValue                     (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_4                      (None)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (None)
// class FName                        Temp_name_Variable                                               (None)
// double                             CallFunc_FMin_ReturnValue                                        (None)
// class FName                        Temp_name_Variable_1                                             (None)
// class FName                        Temp_name_Variable_2                                             (None)
// class FName                        Temp_name_Variable_3                                             (None)
// class FName                        Temp_name_Variable_4                                             (None)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (None)
// float                              CallFunc_SetLifeSpan_InLifespan_ImplicitCast                     (None)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (None)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_2                   (None)
// double                             CallFunc_SelectFloat_B_ImplicitCast_1                            (None)
// double                             CallFunc_SelectFloat_A_ImplicitCast_1                            (None)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_3                   (None)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (None)

void ADino_Character_BP_C::ExecuteUbergraph_Dino_Character_BP(int32 EntryPoint, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, class UObject* CallFunc_GetClassDefaultObject_ReturnValue, float CallFunc_TimeSeconds_ReturnValue, class ADino_Character_BP_C* K2Node_DynamicCast_AsDino_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UBlendSpace* K2Node_Event_blendSpace, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, bool CallFunc_Contains_ReturnValue_4, int32 Temp_int_Array_Index_Variable, enum class ENetModeBP CallFunc_SwitchNetworkMode_OutNetworkMode, bool K2Node_SwitchEnum_CmpSuccess, const TArray<class USceneComponent*>& CallFunc_GetComponentsByTag_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, class UActorComponent* CallFunc_Array_Get_Item, class USceneComponent* K2Node_DynamicCast_AsScene_Component, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_2, bool CallFunc_DoesUseHibernation_ReturnValue, class FName K2Node_Event_SocketName, class APrimalCharacter* K2Node_Event_VictimChar, const struct FLinearColor& CallFunc_GetFXBloodColor_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_GetNetworkTimeInSeconds_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_4, double CallFunc_SelectFloat_ReturnValue_2, class FName Temp_name_Variable, double CallFunc_FMin_ReturnValue, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetLifeSpan_InLifespan_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_2, double CallFunc_SelectFloat_B_ImplicitCast_1, double CallFunc_SelectFloat_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_3, float CallFunc_SetVariableFloat_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dino_Character_BP_C", "ExecuteUbergraph_Dino_Character_BP");

	Params::ADino_Character_BP_C_ExecuteUbergraph_Dino_Character_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_TimeSeconds_ReturnValue = CallFunc_TimeSeconds_ReturnValue;
	Parms.K2Node_DynamicCast_AsDino_Character_BP = K2Node_DynamicCast_AsDino_Character_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetCurrentMontage_ReturnValue = CallFunc_GetCurrentMontage_ReturnValue;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_blendSpace = K2Node_Event_blendSpace;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue_1 = CallFunc_Contains_ReturnValue_1;
	Parms.CallFunc_Contains_ReturnValue_2 = CallFunc_Contains_ReturnValue_2;
	Parms.CallFunc_Contains_ReturnValue_3 = CallFunc_Contains_ReturnValue_3;
	Parms.CallFunc_Contains_ReturnValue_4 = CallFunc_Contains_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_SwitchNetworkMode_OutNetworkMode = CallFunc_SwitchNetworkMode_OutNetworkMode;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetComponentsByTag_ReturnValue = CallFunc_GetComponentsByTag_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsScene_Component = K2Node_DynamicCast_AsScene_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetComponentBounds_Origin = CallFunc_GetComponentBounds_Origin;
	Parms.CallFunc_GetComponentBounds_BoxExtent = CallFunc_GetComponentBounds_BoxExtent;
	Parms.CallFunc_GetComponentBounds_SphereRadius = CallFunc_GetComponentBounds_SphereRadius;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_2 = CallFunc_IsDedicatedServer_ReturnValue_2;
	Parms.CallFunc_DoesUseHibernation_ReturnValue = CallFunc_DoesUseHibernation_ReturnValue;
	Parms.K2Node_Event_SocketName = K2Node_Event_SocketName;
	Parms.K2Node_Event_VictimChar = K2Node_Event_VictimChar;
	Parms.CallFunc_GetFXBloodColor_ReturnValue = CallFunc_GetFXBloodColor_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_3 = CallFunc_Greater_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetNetworkTimeInSeconds_ReturnValue = CallFunc_GetNetworkTimeInSeconds_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_4 = CallFunc_Greater_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_SetLifeSpan_InLifespan_ImplicitCast = CallFunc_SetLifeSpan_InLifespan_ImplicitCast;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_2 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_1 = CallFunc_SelectFloat_B_ImplicitCast_1;
	Parms.CallFunc_SelectFloat_A_ImplicitCast_1 = CallFunc_SelectFloat_A_ImplicitCast_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_3 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_3;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast = CallFunc_SetVariableFloat_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


