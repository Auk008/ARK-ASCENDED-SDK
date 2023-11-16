#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_PlantSpeciesZ_Grenade_TSOTF.PrimalItem_PlantSpeciesZ_Grenade_TSOTF_C
// (None)

class UClass* UPrimalItem_PlantSpeciesZ_Grenade_TSOTF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_PlantSpeciesZ_Grenade_TSOTF_C");

	return Clss;
}


// PrimalItem_PlantSpeciesZ_Grenade_TSOTF_C PrimalItem_PlantSpeciesZ_Grenade_TSOTF.Default__PrimalItem_PlantSpeciesZ_Grenade_TSOTF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_PlantSpeciesZ_Grenade_TSOTF_C* UPrimalItem_PlantSpeciesZ_Grenade_TSOTF_C::GetDefaultObj()
{
	static class UPrimalItem_PlantSpeciesZ_Grenade_TSOTF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_PlantSpeciesZ_Grenade_TSOTF_C*>(UPrimalItem_PlantSpeciesZ_Grenade_TSOTF_C::StaticClass()->DefaultObject);

	return Default;
}

}


