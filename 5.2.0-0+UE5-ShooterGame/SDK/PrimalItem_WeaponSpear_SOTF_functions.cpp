#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponSpear_SOTF.PrimalItem_WeaponSpear_SOTF_C
// (None)

class UClass* UPrimalItem_WeaponSpear_SOTF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponSpear_SOTF_C");

	return Clss;
}


// PrimalItem_WeaponSpear_SOTF_C PrimalItem_WeaponSpear_SOTF.Default__PrimalItem_WeaponSpear_SOTF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponSpear_SOTF_C* UPrimalItem_WeaponSpear_SOTF_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponSpear_SOTF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponSpear_SOTF_C*>(UPrimalItem_WeaponSpear_SOTF_C::StaticClass()->DefaultObject);

	return Default;
}

}


