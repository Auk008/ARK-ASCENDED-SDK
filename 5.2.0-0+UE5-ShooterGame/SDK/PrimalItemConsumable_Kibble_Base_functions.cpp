#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Kibble_Base.PrimalItemConsumable_Kibble_Base_C
// (None)

class UClass* UPrimalItemConsumable_Kibble_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Kibble_Base_C");

	return Clss;
}


// PrimalItemConsumable_Kibble_Base_C PrimalItemConsumable_Kibble_Base.Default__PrimalItemConsumable_Kibble_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Kibble_Base_C* UPrimalItemConsumable_Kibble_Base_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Kibble_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Kibble_Base_C*>(UPrimalItemConsumable_Kibble_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


