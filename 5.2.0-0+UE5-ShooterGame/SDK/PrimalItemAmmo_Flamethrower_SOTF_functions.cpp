#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_Flamethrower_SOTF.PrimalItemAmmo_Flamethrower_SOTF_C
// (None)

class UClass* UPrimalItemAmmo_Flamethrower_SOTF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_Flamethrower_SOTF_C");

	return Clss;
}


// PrimalItemAmmo_Flamethrower_SOTF_C PrimalItemAmmo_Flamethrower_SOTF.Default__PrimalItemAmmo_Flamethrower_SOTF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_Flamethrower_SOTF_C* UPrimalItemAmmo_Flamethrower_SOTF_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_Flamethrower_SOTF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_Flamethrower_SOTF_C*>(UPrimalItemAmmo_Flamethrower_SOTF_C::StaticClass()->DefaultObject);

	return Default;
}

}


