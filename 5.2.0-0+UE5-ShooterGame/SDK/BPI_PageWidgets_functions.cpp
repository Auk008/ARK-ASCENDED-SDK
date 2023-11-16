#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_PageWidgets.BPI_PageWidgets_C
// (None)

class UClass* IBPI_PageWidgets_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_PageWidgets_C");

	return Clss;
}


// BPI_PageWidgets_C BPI_PageWidgets.Default__BPI_PageWidgets_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_PageWidgets_C* IBPI_PageWidgets_C::GetDefaultObj()
{
	static class IBPI_PageWidgets_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_PageWidgets_C*>(IBPI_PageWidgets_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_PageWidgets.BPI_PageWidgets_C.UpdateSearch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SearchInput                                                      (None)

void IBPI_PageWidgets_C::UpdateSearch(class FText SearchInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PageWidgets_C", "UpdateSearch");

	Params::IBPI_PageWidgets_C_UpdateSearch_Params Parms{};

	Parms.SearchInput = SearchInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_PageWidgets.BPI_PageWidgets_C.GetClose_B
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (None)

void IBPI_PageWidgets_C::GetClose_B(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PageWidgets_C", "GetClose_B");

	Params::IBPI_PageWidgets_C_GetClose_B_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_PageWidgets.BPI_PageWidgets_C.OnSearch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Search_Input                                                     (None)

void IBPI_PageWidgets_C::OnSearch(class FText Search_Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PageWidgets_C", "OnSearch");

	Params::IBPI_PageWidgets_C_OnSearch_Params Parms{};

	Parms.Search_Input = Search_Input;

	UObject::ProcessEvent(Func, &Parms);

}

}


