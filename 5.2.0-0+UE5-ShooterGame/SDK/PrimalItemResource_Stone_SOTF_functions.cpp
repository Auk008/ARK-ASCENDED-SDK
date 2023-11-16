#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Stone_SOTF.PrimalItemResource_Stone_SOTF_C
// (None)

class UClass* UPrimalItemResource_Stone_SOTF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Stone_SOTF_C");

	return Clss;
}


// PrimalItemResource_Stone_SOTF_C PrimalItemResource_Stone_SOTF.Default__PrimalItemResource_Stone_SOTF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Stone_SOTF_C* UPrimalItemResource_Stone_SOTF_C::GetDefaultObj()
{
	static class UPrimalItemResource_Stone_SOTF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Stone_SOTF_C*>(UPrimalItemResource_Stone_SOTF_C::StaticClass()->DefaultObject);

	return Default;
}

}


