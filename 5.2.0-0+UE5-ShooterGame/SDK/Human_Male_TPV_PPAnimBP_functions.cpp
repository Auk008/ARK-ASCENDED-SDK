#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C
// (None)

class UClass* UHuman_Male_TPV_PPAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Human_Male_TPV_PPAnimBP_C");

	return Clss;
}


// Human_Male_TPV_PPAnimBP_C Human_Male_TPV_PPAnimBP.Default__Human_Male_TPV_PPAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHuman_Male_TPV_PPAnimBP_C* UHuman_Male_TPV_PPAnimBP_C::GetDefaultObj()
{
	static class UHuman_Male_TPV_PPAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHuman_Male_TPV_PPAnimBP_C*>(UHuman_Male_TPV_PPAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (None)
// struct FPoseLink                   AnimGraph                                                        (None)

void UHuman_Male_TPV_PPAnimBP_C::AnimGraph(const struct FPoseLink& InPose, const struct FPoseLink& AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Human_Male_TPV_PPAnimBP_C", "AnimGraph");

	Params::UHuman_Male_TPV_PPAnimBP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;
	Parms.AnimGraph = AnimGraph;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (None)

void UHuman_Male_TPV_PPAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Human_Male_TPV_PPAnimBP_C", "BlueprintUpdateAnimation");

	Params::UHuman_Male_TPV_PPAnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C.ExecuteUbergraph_Human_Male_TPV_PPAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (None)
// float                              K2Node_Event_DeltaTimeX                                          (None)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// bool                               CallFunc_IsRider_ReturnValue                                     (None)
// enum class ENetRole                CallFunc_GetLocalRole_ReturnValue                                (None)
// class AActor*                      CallFunc_GetBasedOnDinoAsActor_ReturnValue                       (ZeroConstructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// class UBaseHumanAnimBP_C*          K2Node_DynamicCast_AsBase_Human_Anim_BP                          (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)

void UHuman_Male_TPV_PPAnimBP_C::ExecuteUbergraph_Human_Male_TPV_PPAnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRider_ReturnValue, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, class AActor* CallFunc_GetBasedOnDinoAsActor_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UBaseHumanAnimBP_C* K2Node_DynamicCast_AsBase_Human_Anim_BP, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Human_Male_TPV_PPAnimBP_C", "ExecuteUbergraph_Human_Male_TPV_PPAnimBP");

	Params::UHuman_Male_TPV_PPAnimBP_C_ExecuteUbergraph_Human_Male_TPV_PPAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsRider_ReturnValue = CallFunc_IsRider_ReturnValue;
	Parms.CallFunc_GetLocalRole_ReturnValue = CallFunc_GetLocalRole_ReturnValue;
	Parms.CallFunc_GetBasedOnDinoAsActor_ReturnValue = CallFunc_GetBasedOnDinoAsActor_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Human_Anim_BP = K2Node_DynamicCast_AsBase_Human_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


