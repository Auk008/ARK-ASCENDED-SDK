#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_Torpidity_Low_StoneWeapon_Fire.DmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C
// (None)

class UClass* UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C");

	return Clss;
}


// DmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C DmgType_Melee_Torpidity_Low_StoneWeapon_Fire.Default__DmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C* UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C::GetDefaultObj()
{
	static class UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C*>(UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DmgType_Melee_Torpidity_Low_StoneWeapon_Fire.DmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C.OverrideBuffToGiveVictimCharacter
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APrimalCharacter*            Victim                                                           (ZeroConstructor)
// float                              IncomingDamage                                                   (None)
// struct FDamageEvent                TheDamageEvent                                                   (ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// class AController*                 EventInstigator                                                  (ZeroConstructor)
// class AActor*                      DamageCauser                                                     (ZeroConstructor)
// class UClass*                      ReturnValue                                                      (ZeroConstructor)
// class UClass*                      OutVal                                                           (ZeroConstructor)
// bool                               Temp_bool_Variable                                               (None)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (ZeroConstructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (None)
// TSoftClassPtr<class APrimalBuff>   Temp_softclass_Variable                                          (ZeroConstructor, AutoWeak, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (None)
// TSoftClassPtr<class APrimalBuff>   K2Node_Select_Default                                            (ZeroConstructor)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (None)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (None)

void UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C::OverrideBuffToGiveVictimCharacter(class APrimalCharacter* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class UClass* ReturnValue, class UClass* OutVal, bool Temp_bool_Variable, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, bool K2Node_DynamicCast_bSuccess, TSoftClassPtr<class APrimalBuff> Temp_softclass_Variable, bool CallFunc_Less_DoubleDouble_ReturnValue, TSoftClassPtr<class APrimalBuff> K2Node_Select_Default, class UClass* CallFunc_ClassAssetResolve_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C", "OverrideBuffToGiveVictimCharacter");

	Params::UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C_OverrideBuffToGiveVictimCharacter_Params Parms{};

	Parms.Victim = Victim;
	Parms.IncomingDamage = IncomingDamage;
	Parms.TheDamageEvent = TheDamageEvent;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;
	Parms.ReturnValue = ReturnValue;
	Parms.OutVal = OutVal;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_softclass_Variable = Temp_softclass_Variable;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_ClassAssetResolve_ReturnValue = CallFunc_ClassAssetResolve_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


