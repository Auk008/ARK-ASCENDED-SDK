#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Flint_SOTF.PrimalItemResource_Flint_SOTF_C
// (None)

class UClass* UPrimalItemResource_Flint_SOTF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Flint_SOTF_C");

	return Clss;
}


// PrimalItemResource_Flint_SOTF_C PrimalItemResource_Flint_SOTF.Default__PrimalItemResource_Flint_SOTF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Flint_SOTF_C* UPrimalItemResource_Flint_SOTF_C::GetDefaultObj()
{
	static class UPrimalItemResource_Flint_SOTF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Flint_SOTF_C*>(UPrimalItemResource_Flint_SOTF_C::StaticClass()->DefaultObject);

	return Default;
}

}


