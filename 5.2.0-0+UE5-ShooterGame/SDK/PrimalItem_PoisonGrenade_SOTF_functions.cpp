#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_PoisonGrenade_SOTF.PrimalItem_PoisonGrenade_SOTF_C
// (None)

class UClass* UPrimalItem_PoisonGrenade_SOTF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_PoisonGrenade_SOTF_C");

	return Clss;
}


// PrimalItem_PoisonGrenade_SOTF_C PrimalItem_PoisonGrenade_SOTF.Default__PrimalItem_PoisonGrenade_SOTF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_PoisonGrenade_SOTF_C* UPrimalItem_PoisonGrenade_SOTF_C::GetDefaultObj()
{
	static class UPrimalItem_PoisonGrenade_SOTF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_PoisonGrenade_SOTF_C*>(UPrimalItem_PoisonGrenade_SOTF_C::StaticClass()->DefaultObject);

	return Default;
}

}


