#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_CustomComboBoxInterface.BPI_CustomComboBoxInterface_C
// (None)

class UClass* IBPI_CustomComboBoxInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_CustomComboBoxInterface_C");

	return Clss;
}


// BPI_CustomComboBoxInterface_C BPI_CustomComboBoxInterface.Default__BPI_CustomComboBoxInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_CustomComboBoxInterface_C* IBPI_CustomComboBoxInterface_C::GetDefaultObj()
{
	static class IBPI_CustomComboBoxInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_CustomComboBoxInterface_C*>(IBPI_CustomComboBoxInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_CustomComboBoxInterface.BPI_CustomComboBoxInterface_C.OnOptionSelectedInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (None)
// int64                              ID                                                               (None)
// class UUI_CustomComboBoxOption_C*  OptionWidget                                                     (None)

void IBPI_CustomComboBoxInterface_C::OnOptionSelectedInterface(const class FString& Option, int64 ID, class UUI_CustomComboBoxOption_C* OptionWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CustomComboBoxInterface_C", "OnOptionSelectedInterface");

	Params::IBPI_CustomComboBoxInterface_C_OnOptionSelectedInterface_Params Parms{};

	Parms.Option = Option;
	Parms.ID = ID;
	Parms.OptionWidget = OptionWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


