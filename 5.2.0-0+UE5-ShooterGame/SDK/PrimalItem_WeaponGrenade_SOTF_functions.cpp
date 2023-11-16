#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponGrenade_SOTF.PrimalItem_WeaponGrenade_SOTF_C
// (None)

class UClass* UPrimalItem_WeaponGrenade_SOTF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponGrenade_SOTF_C");

	return Clss;
}


// PrimalItem_WeaponGrenade_SOTF_C PrimalItem_WeaponGrenade_SOTF.Default__PrimalItem_WeaponGrenade_SOTF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponGrenade_SOTF_C* UPrimalItem_WeaponGrenade_SOTF_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponGrenade_SOTF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponGrenade_SOTF_C*>(UPrimalItem_WeaponGrenade_SOTF_C::StaticClass()->DefaultObject);

	return Default;
}

}


