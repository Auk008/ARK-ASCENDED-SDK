#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_BallistaArrow_TSOTF.PrimalItemAmmo_BallistaArrow_TSOTF_C
// (None)

class UClass* UPrimalItemAmmo_BallistaArrow_TSOTF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_BallistaArrow_TSOTF_C");

	return Clss;
}


// PrimalItemAmmo_BallistaArrow_TSOTF_C PrimalItemAmmo_BallistaArrow_TSOTF.Default__PrimalItemAmmo_BallistaArrow_TSOTF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_BallistaArrow_TSOTF_C* UPrimalItemAmmo_BallistaArrow_TSOTF_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_BallistaArrow_TSOTF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_BallistaArrow_TSOTF_C*>(UPrimalItemAmmo_BallistaArrow_TSOTF_C::StaticClass()->DefaultObject);

	return Default;
}

}


