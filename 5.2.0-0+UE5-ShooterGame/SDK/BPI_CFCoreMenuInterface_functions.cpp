#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_CFCoreMenuInterface.BPI_CFCoreMenuInterface_C
// (None)

class UClass* IBPI_CFCoreMenuInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_CFCoreMenuInterface_C");

	return Clss;
}


// BPI_CFCoreMenuInterface_C BPI_CFCoreMenuInterface.Default__BPI_CFCoreMenuInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_CFCoreMenuInterface_C* IBPI_CFCoreMenuInterface_C::GetDefaultObj()
{
	static class IBPI_CFCoreMenuInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_CFCoreMenuInterface_C*>(IBPI_CFCoreMenuInterface_C::StaticClass()->DefaultObject);

	return Default;
}

}


