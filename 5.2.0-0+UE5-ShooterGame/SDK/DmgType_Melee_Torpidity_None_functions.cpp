#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_Torpidity_None.DmgType_Melee_Torpidity_None_C
// (None)

class UClass* UDmgType_Melee_Torpidity_None_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_Torpidity_None_C");

	return Clss;
}


// DmgType_Melee_Torpidity_None_C DmgType_Melee_Torpidity_None.Default__DmgType_Melee_Torpidity_None_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_Torpidity_None_C* UDmgType_Melee_Torpidity_None_C::GetDefaultObj()
{
	static class UDmgType_Melee_Torpidity_None_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_Torpidity_None_C*>(UDmgType_Melee_Torpidity_None_C::StaticClass()->DefaultObject);

	return Default;
}

}


