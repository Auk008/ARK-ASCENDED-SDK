#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Fibers_SOTF.PrimalItemResource_Fibers_SOTF_C
// (None)

class UClass* UPrimalItemResource_Fibers_SOTF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Fibers_SOTF_C");

	return Clss;
}


// PrimalItemResource_Fibers_SOTF_C PrimalItemResource_Fibers_SOTF.Default__PrimalItemResource_Fibers_SOTF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Fibers_SOTF_C* UPrimalItemResource_Fibers_SOTF_C::GetDefaultObj()
{
	static class UPrimalItemResource_Fibers_SOTF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Fibers_SOTF_C*>(UPrimalItemResource_Fibers_SOTF_C::StaticClass()->DefaultObject);

	return Default;
}

}


