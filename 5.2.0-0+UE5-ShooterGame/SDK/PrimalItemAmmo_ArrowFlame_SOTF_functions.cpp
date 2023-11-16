#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_ArrowFlame_SOTF.PrimalItemAmmo_ArrowFlame_SOTF_C
// (None)

class UClass* UPrimalItemAmmo_ArrowFlame_SOTF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_ArrowFlame_SOTF_C");

	return Clss;
}


// PrimalItemAmmo_ArrowFlame_SOTF_C PrimalItemAmmo_ArrowFlame_SOTF.Default__PrimalItemAmmo_ArrowFlame_SOTF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_ArrowFlame_SOTF_C* UPrimalItemAmmo_ArrowFlame_SOTF_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_ArrowFlame_SOTF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_ArrowFlame_SOTF_C*>(UPrimalItemAmmo_ArrowFlame_SOTF_C::StaticClass()->DefaultObject);

	return Default;
}

}


