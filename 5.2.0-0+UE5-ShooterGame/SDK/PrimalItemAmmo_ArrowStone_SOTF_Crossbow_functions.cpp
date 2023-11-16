#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_ArrowStone_SOTF_Crossbow.PrimalItemAmmo_ArrowStone_SOTF_Crossbow_C
// (None)

class UClass* UPrimalItemAmmo_ArrowStone_SOTF_Crossbow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_ArrowStone_SOTF_Crossbow_C");

	return Clss;
}


// PrimalItemAmmo_ArrowStone_SOTF_Crossbow_C PrimalItemAmmo_ArrowStone_SOTF_Crossbow.Default__PrimalItemAmmo_ArrowStone_SOTF_Crossbow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_ArrowStone_SOTF_Crossbow_C* UPrimalItemAmmo_ArrowStone_SOTF_Crossbow_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_ArrowStone_SOTF_Crossbow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_ArrowStone_SOTF_Crossbow_C*>(UPrimalItemAmmo_ArrowStone_SOTF_Crossbow_C::StaticClass()->DefaultObject);

	return Default;
}

}


