#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_ArrowNet_SOTF.PrimalItemAmmo_ArrowNet_SOTF_C
// (None)

class UClass* UPrimalItemAmmo_ArrowNet_SOTF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_ArrowNet_SOTF_C");

	return Clss;
}


// PrimalItemAmmo_ArrowNet_SOTF_C PrimalItemAmmo_ArrowNet_SOTF.Default__PrimalItemAmmo_ArrowNet_SOTF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_ArrowNet_SOTF_C* UPrimalItemAmmo_ArrowNet_SOTF_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_ArrowNet_SOTF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_ArrowNet_SOTF_C*>(UPrimalItemAmmo_ArrowNet_SOTF_C::StaticClass()->DefaultObject);

	return Default;
}

}


