#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_DmgStone_NoHarvest.DmgType_Melee_DmgStone_NoHarvest_C
// (None)

class UClass* UDmgType_Melee_DmgStone_NoHarvest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_DmgStone_NoHarvest_C");

	return Clss;
}


// DmgType_Melee_DmgStone_NoHarvest_C DmgType_Melee_DmgStone_NoHarvest.Default__DmgType_Melee_DmgStone_NoHarvest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_DmgStone_NoHarvest_C* UDmgType_Melee_DmgStone_NoHarvest_C::GetDefaultObj()
{
	static class UDmgType_Melee_DmgStone_NoHarvest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_DmgStone_NoHarvest_C*>(UDmgType_Melee_DmgStone_NoHarvest_C::StaticClass()->DefaultObject);

	return Default;
}

}


