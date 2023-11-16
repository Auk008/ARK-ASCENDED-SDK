#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponTripwireC4_SOTF.PrimalItem_WeaponTripwireC4_SOTF_C
// (None)

class UClass* UPrimalItem_WeaponTripwireC4_SOTF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponTripwireC4_SOTF_C");

	return Clss;
}


// PrimalItem_WeaponTripwireC4_SOTF_C PrimalItem_WeaponTripwireC4_SOTF.Default__PrimalItem_WeaponTripwireC4_SOTF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponTripwireC4_SOTF_C* UPrimalItem_WeaponTripwireC4_SOTF_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponTripwireC4_SOTF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponTripwireC4_SOTF_C*>(UPrimalItem_WeaponTripwireC4_SOTF_C::StaticClass()->DefaultObject);

	return Default;
}

}


