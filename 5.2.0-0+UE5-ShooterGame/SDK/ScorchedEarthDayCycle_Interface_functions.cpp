#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C
// (None)

class UClass* IScorchedEarthDayCycle_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScorchedEarthDayCycle_Interface_C");

	return Clss;
}


// ScorchedEarthDayCycle_Interface_C ScorchedEarthDayCycle_Interface.Default__ScorchedEarthDayCycle_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IScorchedEarthDayCycle_Interface_C* IScorchedEarthDayCycle_Interface_C::GetDefaultObj()
{
	static class IScorchedEarthDayCycle_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IScorchedEarthDayCycle_Interface_C*>(IScorchedEarthDayCycle_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C.GetIsElectricalStorm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return                                                           (None)

void IScorchedEarthDayCycle_Interface_C::GetIsElectricalStorm(bool Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScorchedEarthDayCycle_Interface_C", "GetIsElectricalStorm");

	Params::IScorchedEarthDayCycle_Interface_C_GetIsElectricalStorm_Params Parms{};

	Parms.Return = Return;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C.GetElectricalStormValues
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              LocationRegions                                                  (None)
// int32                              CurrentRegion                                                    (None)
// double                             Radius                                                           (None)

void IScorchedEarthDayCycle_Interface_C::GetElectricalStormValues(const TArray<class AActor*>& LocationRegions, int32 CurrentRegion, double Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScorchedEarthDayCycle_Interface_C", "GetElectricalStormValues");

	Params::IScorchedEarthDayCycle_Interface_C_GetElectricalStormValues_Params Parms{};

	Parms.LocationRegions = LocationRegions;
	Parms.CurrentRegion = CurrentRegion;
	Parms.Radius = Radius;

	UObject::ProcessEvent(Func, &Parms);

}

}


