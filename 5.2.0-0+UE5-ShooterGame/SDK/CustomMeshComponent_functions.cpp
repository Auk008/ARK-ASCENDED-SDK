#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CustomMeshComponent.CustomMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UCustomMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomMeshComponent");

	return Clss;
}


// CustomMeshComponent CustomMeshComponent.Default__CustomMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCustomMeshComponent* UCustomMeshComponent::GetDefaultObj()
{
	static class UCustomMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomMeshComponent*>(UCustomMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FCustomMeshTriangle> Triangles                                                        (None)
// bool                               ReturnValue                                                      (None)

void UCustomMeshComponent::SetCustomMeshTriangles(const TArray<struct FCustomMeshTriangle>& Triangles, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMeshComponent", "SetCustomMeshTriangles");

	Params::UCustomMeshComponent_SetCustomMeshTriangles_Params Parms{};

	Parms.Triangles = Triangles;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCustomMeshComponent::ClearCustomMeshTriangles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMeshComponent", "ClearCustomMeshTriangles");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FCustomMeshTriangle> Triangles                                                        (None)

void UCustomMeshComponent::AddCustomMeshTriangles(const TArray<struct FCustomMeshTriangle>& Triangles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMeshComponent", "AddCustomMeshTriangles");

	Params::UCustomMeshComponent_AddCustomMeshTriangles_Params Parms{};

	Parms.Triangles = Triangles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


