#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_Rocket_SOTF.PrimalItemAmmo_Rocket_SOTF_C
// (None)

class UClass* UPrimalItemAmmo_Rocket_SOTF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_Rocket_SOTF_C");

	return Clss;
}


// PrimalItemAmmo_Rocket_SOTF_C PrimalItemAmmo_Rocket_SOTF.Default__PrimalItemAmmo_Rocket_SOTF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_Rocket_SOTF_C* UPrimalItemAmmo_Rocket_SOTF_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_Rocket_SOTF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_Rocket_SOTF_C*>(UPrimalItemAmmo_Rocket_SOTF_C::StaticClass()->DefaultObject);

	return Default;
}

}


