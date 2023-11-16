#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_GasGrenade_TSOTF.PrimalItem_GasGrenade_TSOTF_C
// (None)

class UClass* UPrimalItem_GasGrenade_TSOTF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_GasGrenade_TSOTF_C");

	return Clss;
}


// PrimalItem_GasGrenade_TSOTF_C PrimalItem_GasGrenade_TSOTF.Default__PrimalItem_GasGrenade_TSOTF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_GasGrenade_TSOTF_C* UPrimalItem_GasGrenade_TSOTF_C::GetDefaultObj()
{
	static class UPrimalItem_GasGrenade_TSOTF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_GasGrenade_TSOTF_C*>(UPrimalItem_GasGrenade_TSOTF_C::StaticClass()->DefaultObject);

	return Default;
}

}


