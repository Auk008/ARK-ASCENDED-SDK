#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CactusHarvestComponent.CactusHarvestComponent_C
// (None)

class UClass* UCactusHarvestComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CactusHarvestComponent_C");

	return Clss;
}


// CactusHarvestComponent_C CactusHarvestComponent.Default__CactusHarvestComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCactusHarvestComponent_C* UCactusHarvestComponent_C::GetDefaultObj()
{
	static class UCactusHarvestComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCactusHarvestComponent_C*>(UCactusHarvestComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CactusHarvestComponent.CactusHarvestComponent_C.BPCustomHarvestResource
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalInventoryComponent*   InvComp                                                          (ZeroConstructor)
// int32                              NumToGive                                                        (None)
// class UClass*                      DamageTypeClass                                                  (Edit, ZeroConstructor)
// class AActor*                      ToActor                                                          (Edit, ZeroConstructor)
// int32                              ReturnValue                                                      (None)
// class ACamelsaurus_Character_Base_BP_C*K2Node_DynamicCast_AsCamelsaurus_Character_Base_BP               (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (None)
// double                             CallFunc_AddWater_NewWaterAmount                                 (None)
// class UPrimalCharacterStatusComponent*CallFunc_GetCharacterStatusComponent_ReturnValue                 (None)
// float                              CallFunc_AddStatusValueModifier_Speed_ImplicitCast               (None)
// float                              CallFunc_AddStatusValueModifier_Amount_ImplicitCast              (None)

void UCactusHarvestComponent_C::BPCustomHarvestResource(class UPrimalInventoryComponent* InvComp, int32 NumToGive, class UClass* DamageTypeClass, class AActor* ToActor, int32 ReturnValue, class ACamelsaurus_Character_Base_BP_C* K2Node_DynamicCast_AsCamelsaurus_Character_Base_BP, bool K2Node_DynamicCast_bSuccess, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_AddWater_NewWaterAmount, class UPrimalCharacterStatusComponent* CallFunc_GetCharacterStatusComponent_ReturnValue, float CallFunc_AddStatusValueModifier_Speed_ImplicitCast, float CallFunc_AddStatusValueModifier_Amount_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CactusHarvestComponent_C", "BPCustomHarvestResource");

	Params::UCactusHarvestComponent_C_BPCustomHarvestResource_Params Parms{};

	Parms.InvComp = InvComp;
	Parms.NumToGive = NumToGive;
	Parms.DamageTypeClass = DamageTypeClass;
	Parms.ToActor = ToActor;
	Parms.ReturnValue = ReturnValue;
	Parms.K2Node_DynamicCast_AsCamelsaurus_Character_Base_BP = K2Node_DynamicCast_AsCamelsaurus_Character_Base_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_AddWater_NewWaterAmount = CallFunc_AddWater_NewWaterAmount;
	Parms.CallFunc_GetCharacterStatusComponent_ReturnValue = CallFunc_GetCharacterStatusComponent_ReturnValue;
	Parms.CallFunc_AddStatusValueModifier_Speed_ImplicitCast = CallFunc_AddStatusValueModifier_Speed_ImplicitCast;
	Parms.CallFunc_AddStatusValueModifier_Amount_ImplicitCast = CallFunc_AddStatusValueModifier_Amount_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


