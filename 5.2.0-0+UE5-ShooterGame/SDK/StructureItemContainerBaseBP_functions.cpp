#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StructureItemContainerBaseBP.StructureItemContainerBaseBP_C
// (Actor)

class UClass* AStructureItemContainerBaseBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StructureItemContainerBaseBP_C");

	return Clss;
}


// StructureItemContainerBaseBP_C StructureItemContainerBaseBP.Default__StructureItemContainerBaseBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStructureItemContainerBaseBP_C* AStructureItemContainerBaseBP_C::GetDefaultObj()
{
	static class AStructureItemContainerBaseBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStructureItemContainerBaseBP_C*>(AStructureItemContainerBaseBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StructureItemContainerBaseBP.StructureItemContainerBaseBP_C.BPOnTransferAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalInventoryComponent*   ToInventory                                                      (None)

void AStructureItemContainerBaseBP_C::BPOnTransferAll(class UPrimalInventoryComponent* ToInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructureItemContainerBaseBP_C", "BPOnTransferAll");

	Params::AStructureItemContainerBaseBP_C_BPOnTransferAll_Params Parms{};

	Parms.ToInventory = ToInventory;

	UObject::ProcessEvent(Func, &Parms);

}

}


