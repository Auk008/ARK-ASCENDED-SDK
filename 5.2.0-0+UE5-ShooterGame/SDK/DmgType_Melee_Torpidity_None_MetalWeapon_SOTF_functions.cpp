#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_Torpidity_None_MetalWeapon_SOTF.DmgType_Melee_Torpidity_None_MetalWeapon_SOTF_C
// (None)

class UClass* UDmgType_Melee_Torpidity_None_MetalWeapon_SOTF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_Torpidity_None_MetalWeapon_SOTF_C");

	return Clss;
}


// DmgType_Melee_Torpidity_None_MetalWeapon_SOTF_C DmgType_Melee_Torpidity_None_MetalWeapon_SOTF.Default__DmgType_Melee_Torpidity_None_MetalWeapon_SOTF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_Torpidity_None_MetalWeapon_SOTF_C* UDmgType_Melee_Torpidity_None_MetalWeapon_SOTF_C::GetDefaultObj()
{
	static class UDmgType_Melee_Torpidity_None_MetalWeapon_SOTF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_Torpidity_None_MetalWeapon_SOTF_C*>(UDmgType_Melee_Torpidity_None_MetalWeapon_SOTF_C::StaticClass()->DefaultObject);

	return Default;
}

}


