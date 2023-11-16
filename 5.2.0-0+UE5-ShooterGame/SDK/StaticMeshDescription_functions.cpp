#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class StaticMeshDescription.StaticMeshDescription
// (None)

class UClass* UStaticMeshDescription::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StaticMeshDescription");

	return Clss;
}


// StaticMeshDescription StaticMeshDescription.Default__StaticMeshDescription
// (Public, ClassDefaultObject, ArchetypeObject)

class UStaticMeshDescription* UStaticMeshDescription::GetDefaultObj()
{
	static class UStaticMeshDescription* Default = nullptr;

	if (!Default)
		Default = static_cast<UStaticMeshDescription*>(UStaticMeshDescription::StaticClass()->DefaultObject);

	return Default;
}


// Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (None)
// struct FVector2D                   UV                                                               (None)
// int32                              UVIndex                                                          (None)

void UStaticMeshDescription::SetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, const struct FVector2D& UV, int32 UVIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticMeshDescription", "SetVertexInstanceUV");

	Params::UStaticMeshDescription_SetVertexInstanceUV_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;
	Parms.UV = UV;
	Parms.UVIndex = UVIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (None)
// class FName                        SlotName                                                         (None)

void UStaticMeshDescription::SetPolygonGroupMaterialSlotName(const struct FPolygonGroupID& PolygonGroupID, class FName SlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticMeshDescription", "SetPolygonGroupMaterialSlotName");

	Params::UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Params Parms{};

	Parms.PolygonGroupID = PolygonGroupID;
	Parms.SlotName = SlotName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (None)
// int32                              UVIndex                                                          (None)
// struct FVector2D                   ReturnValue                                                      (None)

void UStaticMeshDescription::GetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, int32 UVIndex, const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticMeshDescription", "GetVertexInstanceUV");

	Params::UStaticMeshDescription_GetVertexInstanceUV_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;
	Parms.UVIndex = UVIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StaticMeshDescription.StaticMeshDescription.CreateCube
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Center                                                           (None)
// struct FVector                     HalfExtents                                                      (None)
// struct FPolygonGroupID             PolygonGroup                                                     (None)
// struct FPolygonID                  PolygonID_PlusX                                                  (None)
// struct FPolygonID                  PolygonID_MinusX                                                 (None)
// struct FPolygonID                  PolygonID_PlusY                                                  (None)
// struct FPolygonID                  PolygonID_MinusY                                                 (None)
// struct FPolygonID                  PolygonID_PlusZ                                                  (None)
// struct FPolygonID                  PolygonID_MinusZ                                                 (None)

void UStaticMeshDescription::CreateCube(const struct FVector& Center, const struct FVector& HalfExtents, const struct FPolygonGroupID& PolygonGroup, const struct FPolygonID& PolygonID_PlusX, const struct FPolygonID& PolygonID_MinusX, const struct FPolygonID& PolygonID_PlusY, const struct FPolygonID& PolygonID_MinusY, const struct FPolygonID& PolygonID_PlusZ, const struct FPolygonID& PolygonID_MinusZ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticMeshDescription", "CreateCube");

	Params::UStaticMeshDescription_CreateCube_Params Parms{};

	Parms.Center = Center;
	Parms.HalfExtents = HalfExtents;
	Parms.PolygonGroup = PolygonGroup;
	Parms.PolygonID_PlusX = PolygonID_PlusX;
	Parms.PolygonID_MinusX = PolygonID_MinusX;
	Parms.PolygonID_PlusY = PolygonID_PlusY;
	Parms.PolygonID_MinusY = PolygonID_MinusY;
	Parms.PolygonID_PlusZ = PolygonID_PlusZ;
	Parms.PolygonID_MinusZ = PolygonID_MinusZ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


