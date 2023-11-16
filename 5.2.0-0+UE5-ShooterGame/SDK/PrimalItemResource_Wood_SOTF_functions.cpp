#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Wood_SOTF.PrimalItemResource_Wood_SOTF_C
// (None)

class UClass* UPrimalItemResource_Wood_SOTF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Wood_SOTF_C");

	return Clss;
}


// PrimalItemResource_Wood_SOTF_C PrimalItemResource_Wood_SOTF.Default__PrimalItemResource_Wood_SOTF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Wood_SOTF_C* UPrimalItemResource_Wood_SOTF_C::GetDefaultObj()
{
	static class UPrimalItemResource_Wood_SOTF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Wood_SOTF_C*>(UPrimalItemResource_Wood_SOTF_C::StaticClass()->DefaultObject);

	return Default;
}

}


