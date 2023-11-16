#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BaseHumanAnimBP_Fists.BaseHumanAnimBP_Fists_C
// (None)

class UClass* UBaseHumanAnimBP_Fists_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseHumanAnimBP_Fists_C");

	return Clss;
}


// BaseHumanAnimBP_Fists_C BaseHumanAnimBP_Fists.Default__BaseHumanAnimBP_Fists_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseHumanAnimBP_Fists_C* UBaseHumanAnimBP_Fists_C::GetDefaultObj()
{
	static class UBaseHumanAnimBP_Fists_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseHumanAnimBP_Fists_C*>(UBaseHumanAnimBP_Fists_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BaseHumanAnimBP_Fists.BaseHumanAnimBP_Fists_C.UpdateLayeringValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (None)
// double                             K2Node_VariableSet_Layering_L_Hand_ImplicitCast                  (None)
// double                             K2Node_VariableSet_Layering_Spine_ImplicitCast                   (None)
// double                             K2Node_VariableSet_Layering_L_Arm_ImplicitCast                   (None)
// double                             K2Node_VariableSet_Layering_R_Hand_ImplicitCast                  (None)
// double                             K2Node_VariableSet_Layering_R_Arm_ImplicitCast                   (None)

void UBaseHumanAnimBP_Fists_C::UpdateLayeringValues(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, double K2Node_VariableSet_Layering_L_Hand_ImplicitCast, double K2Node_VariableSet_Layering_Spine_ImplicitCast, double K2Node_VariableSet_Layering_L_Arm_ImplicitCast, double K2Node_VariableSet_Layering_R_Hand_ImplicitCast, double K2Node_VariableSet_Layering_R_Arm_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_Fists_C", "UpdateLayeringValues");

	Params::UBaseHumanAnimBP_Fists_C_UpdateLayeringValues_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = CallFunc_EqualEqual_ByteByte_ReturnValue_7;
	Parms.K2Node_VariableSet_Layering_L_Hand_ImplicitCast = K2Node_VariableSet_Layering_L_Hand_ImplicitCast;
	Parms.K2Node_VariableSet_Layering_Spine_ImplicitCast = K2Node_VariableSet_Layering_Spine_ImplicitCast;
	Parms.K2Node_VariableSet_Layering_L_Arm_ImplicitCast = K2Node_VariableSet_Layering_L_Arm_ImplicitCast;
	Parms.K2Node_VariableSet_Layering_R_Hand_ImplicitCast = K2Node_VariableSet_Layering_R_Hand_ImplicitCast;
	Parms.K2Node_VariableSet_Layering_R_Arm_ImplicitCast = K2Node_VariableSet_Layering_R_Arm_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


