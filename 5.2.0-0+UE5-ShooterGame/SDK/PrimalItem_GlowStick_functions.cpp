#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_GlowStick.PrimalItem_GlowStick_C
// (None)

class UClass* UPrimalItem_GlowStick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_GlowStick_C");

	return Clss;
}


// PrimalItem_GlowStick_C PrimalItem_GlowStick.Default__PrimalItem_GlowStick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_GlowStick_C* UPrimalItem_GlowStick_C::GetDefaultObj()
{
	static class UPrimalItem_GlowStick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_GlowStick_C*>(UPrimalItem_GlowStick_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_GlowStick.PrimalItem_GlowStick_C.BPPostInitializeItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWorld*                      OptionalInitWorld                                                (None)
// int32                              CallFunc_IncrementItemQuantity_ReturnValue                       (None)
// float                              CallFunc_GetItemStatModifier_ReturnValue                         (None)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (None)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (None)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (None)

void UPrimalItem_GlowStick_C::BPPostInitializeItem(class UWorld* OptionalInitWorld, int32 CallFunc_IncrementItemQuantity_ReturnValue, float CallFunc_GetItemStatModifier_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_GlowStick_C", "BPPostInitializeItem");

	Params::UPrimalItem_GlowStick_C_BPPostInitializeItem_Params Parms{};

	Parms.OptionalInitWorld = OptionalInitWorld;
	Parms.CallFunc_IncrementItemQuantity_ReturnValue = CallFunc_IncrementItemQuantity_ReturnValue;
	Parms.CallFunc_GetItemStatModifier_ReturnValue = CallFunc_GetItemStatModifier_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast = CallFunc_Less_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItem_GlowStick.PrimalItem_GlowStick_C.BPItemBroken
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (None)
// class AWeapGlowStick_Base_C*       K2Node_DynamicCast_AsWeap_Glow_Stick_Base                        (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class AWeapGlowStick_Base_C*       K2Node_DynamicCast_AsWeap_Glow_Stick_Base_1                      (None)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// float                              CallFunc_GetItemStatModifier_ReturnValue                         (None)
// int32                              CallFunc_IncrementItemQuantity_ReturnValue                       (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (None)

void UPrimalItem_GlowStick_C::BPItemBroken(bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AWeapGlowStick_Base_C* K2Node_DynamicCast_AsWeap_Glow_Stick_Base, bool K2Node_DynamicCast_bSuccess, class AWeapGlowStick_Base_C* K2Node_DynamicCast_AsWeap_Glow_Stick_Base_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetItemStatModifier_ReturnValue, int32 CallFunc_IncrementItemQuantity_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_GlowStick_C", "BPItemBroken");

	Params::UPrimalItem_GlowStick_C_BPItemBroken_Params Parms{};

	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsWeap_Glow_Stick_Base = K2Node_DynamicCast_AsWeap_Glow_Stick_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsWeap_Glow_Stick_Base_1 = K2Node_DynamicCast_AsWeap_Glow_Stick_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetItemStatModifier_ReturnValue = CallFunc_GetItemStatModifier_ReturnValue;
	Parms.CallFunc_IncrementItemQuantity_ReturnValue = CallFunc_IncrementItemQuantity_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


