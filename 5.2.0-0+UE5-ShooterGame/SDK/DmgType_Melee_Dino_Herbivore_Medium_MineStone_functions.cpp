#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_Dino_Herbivore_Medium_MineStone.DmgType_Melee_Dino_Herbivore_Medium_MineStone_C
// (None)

class UClass* UDmgType_Melee_Dino_Herbivore_Medium_MineStone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_Dino_Herbivore_Medium_MineStone_C");

	return Clss;
}


// DmgType_Melee_Dino_Herbivore_Medium_MineStone_C DmgType_Melee_Dino_Herbivore_Medium_MineStone.Default__DmgType_Melee_Dino_Herbivore_Medium_MineStone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_Dino_Herbivore_Medium_MineStone_C* UDmgType_Melee_Dino_Herbivore_Medium_MineStone_C::GetDefaultObj()
{
	static class UDmgType_Melee_Dino_Herbivore_Medium_MineStone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_Dino_Herbivore_Medium_MineStone_C*>(UDmgType_Melee_Dino_Herbivore_Medium_MineStone_C::StaticClass()->DefaultObject);

	return Default;
}

}

