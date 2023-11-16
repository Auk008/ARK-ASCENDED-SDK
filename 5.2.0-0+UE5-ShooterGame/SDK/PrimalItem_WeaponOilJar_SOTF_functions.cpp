#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponOilJar_SOTF.PrimalItem_WeaponOilJar_SOTF_C
// (None)

class UClass* UPrimalItem_WeaponOilJar_SOTF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponOilJar_SOTF_C");

	return Clss;
}


// PrimalItem_WeaponOilJar_SOTF_C PrimalItem_WeaponOilJar_SOTF.Default__PrimalItem_WeaponOilJar_SOTF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponOilJar_SOTF_C* UPrimalItem_WeaponOilJar_SOTF_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponOilJar_SOTF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponOilJar_SOTF_C*>(UPrimalItem_WeaponOilJar_SOTF_C::StaticClass()->DefaultObject);

	return Default;
}

}


