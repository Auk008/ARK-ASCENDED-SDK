#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemC4Ammo_SOTF.PrimalItemC4Ammo_SOTF_C
// (None)

class UClass* UPrimalItemC4Ammo_SOTF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemC4Ammo_SOTF_C");

	return Clss;
}


// PrimalItemC4Ammo_SOTF_C PrimalItemC4Ammo_SOTF.Default__PrimalItemC4Ammo_SOTF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemC4Ammo_SOTF_C* UPrimalItemC4Ammo_SOTF_C::GetDefaultObj()
{
	static class UPrimalItemC4Ammo_SOTF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemC4Ammo_SOTF_C*>(UPrimalItemC4Ammo_SOTF_C::StaticClass()->DefaultObject);

	return Default;
}

}


