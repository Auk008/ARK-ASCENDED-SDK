#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_AnglerGel_SOTF.PrimalItemResource_AnglerGel_SOTF_C
// (None)

class UClass* UPrimalItemResource_AnglerGel_SOTF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_AnglerGel_SOTF_C");

	return Clss;
}


// PrimalItemResource_AnglerGel_SOTF_C PrimalItemResource_AnglerGel_SOTF.Default__PrimalItemResource_AnglerGel_SOTF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_AnglerGel_SOTF_C* UPrimalItemResource_AnglerGel_SOTF_C::GetDefaultObj()
{
	static class UPrimalItemResource_AnglerGel_SOTF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_AnglerGel_SOTF_C*>(UPrimalItemResource_AnglerGel_SOTF_C::StaticClass()->DefaultObject);

	return Default;
}

}


