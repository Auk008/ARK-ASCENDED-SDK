#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_StonePick.DmgType_Melee_StonePick_C
// (None)

class UClass* UDmgType_Melee_StonePick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_StonePick_C");

	return Clss;
}


// DmgType_Melee_StonePick_C DmgType_Melee_StonePick.Default__DmgType_Melee_StonePick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_StonePick_C* UDmgType_Melee_StonePick_C::GetDefaultObj()
{
	static class UDmgType_Melee_StonePick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_StonePick_C*>(UDmgType_Melee_StonePick_C::StaticClass()->DefaultObject);

	return Default;
}

}


