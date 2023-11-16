#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_SimpleShotgunBullet_TSOTF.PrimalItemAmmo_SimpleShotgunBullet_TSOTF_C
// (None)

class UClass* UPrimalItemAmmo_SimpleShotgunBullet_TSOTF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_SimpleShotgunBullet_TSOTF_C");

	return Clss;
}


// PrimalItemAmmo_SimpleShotgunBullet_TSOTF_C PrimalItemAmmo_SimpleShotgunBullet_TSOTF.Default__PrimalItemAmmo_SimpleShotgunBullet_TSOTF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_SimpleShotgunBullet_TSOTF_C* UPrimalItemAmmo_SimpleShotgunBullet_TSOTF_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_SimpleShotgunBullet_TSOTF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_SimpleShotgunBullet_TSOTF_C*>(UPrimalItemAmmo_SimpleShotgunBullet_TSOTF_C::StaticClass()->DefaultObject);

	return Default;
}

}


