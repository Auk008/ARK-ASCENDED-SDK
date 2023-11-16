#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MeshDescription.MeshDescriptionBase
// (None)

class UClass* UMeshDescriptionBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshDescriptionBase");

	return Clss;
}


// MeshDescriptionBase MeshDescription.Default__MeshDescriptionBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshDescriptionBase* UMeshDescriptionBase::GetDefaultObj()
{
	static class UMeshDescriptionBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshDescriptionBase*>(UMeshDescriptionBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshDescription.MeshDescriptionBase.SetVertexPosition
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVertexID                   VertexID                                                         (None)
// struct FVector                     Position                                                         (None)

void UMeshDescriptionBase::SetVertexPosition(const struct FVertexID& VertexID, const struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "SetVertexPosition");

	Params::UMeshDescriptionBase_SetVertexPosition_Params Parms{};

	Parms.VertexID = VertexID;
	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.SetPolygonVertexInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (None)
// TArray<struct FVertexInstanceID>   VertexInstanceIDs                                                (None)

void UMeshDescriptionBase::SetPolygonVertexInstances(const struct FPolygonID& PolygonID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "SetPolygonVertexInstances");

	Params::UMeshDescriptionBase_SetPolygonVertexInstances_Params Parms{};

	Parms.PolygonID = PolygonID;
	Parms.VertexInstanceIDs = VertexInstanceIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.SetPolygonPolygonGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (None)
// struct FPolygonGroupID             PolygonGroupID                                                   (None)

void UMeshDescriptionBase::SetPolygonPolygonGroup(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "SetPolygonPolygonGroup");

	Params::UMeshDescriptionBase_SetPolygonPolygonGroup_Params Parms{};

	Parms.PolygonID = PolygonID;
	Parms.PolygonGroupID = PolygonGroupID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.ReversePolygonFacing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (None)

void UMeshDescriptionBase::ReversePolygonFacing(const struct FPolygonID& PolygonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReversePolygonFacing");

	Params::UMeshDescriptionBase_ReversePolygonFacing_Params Parms{};

	Parms.PolygonID = PolygonID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewVertices
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewVertices                                              (None)

void UMeshDescriptionBase::ReserveNewVertices(int32 NumberOfNewVertices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewVertices");

	Params::UMeshDescriptionBase_ReserveNewVertices_Params Parms{};

	Parms.NumberOfNewVertices = NumberOfNewVertices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewVertexInstances
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewVertexInstances                                       (None)

void UMeshDescriptionBase::ReserveNewVertexInstances(int32 NumberOfNewVertexInstances)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewVertexInstances");

	Params::UMeshDescriptionBase_ReserveNewVertexInstances_Params Parms{};

	Parms.NumberOfNewVertexInstances = NumberOfNewVertexInstances;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewTriangles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewTriangles                                             (None)

void UMeshDescriptionBase::ReserveNewTriangles(int32 NumberOfNewTriangles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewTriangles");

	Params::UMeshDescriptionBase_ReserveNewTriangles_Params Parms{};

	Parms.NumberOfNewTriangles = NumberOfNewTriangles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygons
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewPolygons                                              (None)

void UMeshDescriptionBase::ReserveNewPolygons(int32 NumberOfNewPolygons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewPolygons");

	Params::UMeshDescriptionBase_ReserveNewPolygons_Params Parms{};

	Parms.NumberOfNewPolygons = NumberOfNewPolygons;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewPolygonGroups
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewPolygonGroups                                         (None)

void UMeshDescriptionBase::ReserveNewPolygonGroups(int32 NumberOfNewPolygonGroups)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewPolygonGroups");

	Params::UMeshDescriptionBase_ReserveNewPolygonGroups_Params Parms{};

	Parms.NumberOfNewPolygonGroups = NumberOfNewPolygonGroups;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.ReserveNewEdges
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumberOfNewEdges                                                 (None)

void UMeshDescriptionBase::ReserveNewEdges(int32 NumberOfNewEdges)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ReserveNewEdges");

	Params::UMeshDescriptionBase_ReserveNewEdges_Params Parms{};

	Parms.NumberOfNewEdges = NumberOfNewEdges;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.IsVertexValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (None)
// bool                               ReturnValue                                                      (None)

void UMeshDescriptionBase::IsVertexValid(const struct FVertexID& VertexID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsVertexValid");

	Params::UMeshDescriptionBase_IsVertexValid_Params Parms{};

	Parms.VertexID = VertexID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.IsVertexOrphaned
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (None)
// bool                               ReturnValue                                                      (None)

void UMeshDescriptionBase::IsVertexOrphaned(const struct FVertexID& VertexID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsVertexOrphaned");

	Params::UMeshDescriptionBase_IsVertexOrphaned_Params Parms{};

	Parms.VertexID = VertexID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.IsVertexInstanceValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (None)
// bool                               ReturnValue                                                      (None)

void UMeshDescriptionBase::IsVertexInstanceValid(const struct FVertexInstanceID& VertexInstanceID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsVertexInstanceValid");

	Params::UMeshDescriptionBase_IsVertexInstanceValid_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.IsTriangleValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (None)
// bool                               ReturnValue                                                      (None)

void UMeshDescriptionBase::IsTriangleValid(const struct FTriangleID& TriangleID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsTriangleValid");

	Params::UMeshDescriptionBase_IsTriangleValid_Params Parms{};

	Parms.TriangleID = TriangleID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.IsTrianglePartOfNgon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (None)
// bool                               ReturnValue                                                      (None)

void UMeshDescriptionBase::IsTrianglePartOfNgon(const struct FTriangleID& TriangleID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsTrianglePartOfNgon");

	Params::UMeshDescriptionBase_IsTrianglePartOfNgon_Params Parms{};

	Parms.TriangleID = TriangleID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.IsPolygonValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (None)
// bool                               ReturnValue                                                      (None)

void UMeshDescriptionBase::IsPolygonValid(const struct FPolygonID& PolygonID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsPolygonValid");

	Params::UMeshDescriptionBase_IsPolygonValid_Params Parms{};

	Parms.PolygonID = PolygonID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.IsPolygonGroupValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (None)
// bool                               ReturnValue                                                      (None)

void UMeshDescriptionBase::IsPolygonGroupValid(const struct FPolygonGroupID& PolygonGroupID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsPolygonGroupValid");

	Params::UMeshDescriptionBase_IsPolygonGroupValid_Params Parms{};

	Parms.PolygonGroupID = PolygonGroupID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.IsEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UMeshDescriptionBase::IsEmpty(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsEmpty");

	Params::UMeshDescriptionBase_IsEmpty_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.IsEdgeValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (None)
// bool                               ReturnValue                                                      (None)

void UMeshDescriptionBase::IsEdgeValid(const struct FEdgeID& EdgeID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsEdgeValid");

	Params::UMeshDescriptionBase_IsEdgeValid_Params Parms{};

	Parms.EdgeID = EdgeID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.IsEdgeInternalToPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (None)
// struct FPolygonID                  PolygonID                                                        (None)
// bool                               ReturnValue                                                      (None)

void UMeshDescriptionBase::IsEdgeInternalToPolygon(const struct FEdgeID& EdgeID, const struct FPolygonID& PolygonID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsEdgeInternalToPolygon");

	Params::UMeshDescriptionBase_IsEdgeInternalToPolygon_Params Parms{};

	Parms.EdgeID = EdgeID;
	Parms.PolygonID = PolygonID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.IsEdgeInternal
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (None)
// bool                               ReturnValue                                                      (None)

void UMeshDescriptionBase::IsEdgeInternal(const struct FEdgeID& EdgeID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "IsEdgeInternal");

	Params::UMeshDescriptionBase_IsEdgeInternal_Params Parms{};

	Parms.EdgeID = EdgeID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexVertexInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (None)
// TArray<struct FVertexInstanceID>   OutVertexInstanceIDs                                             (None)

void UMeshDescriptionBase::GetVertexVertexInstances(const struct FVertexID& VertexID, const TArray<struct FVertexInstanceID>& OutVertexInstanceIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexVertexInstances");

	Params::UMeshDescriptionBase_GetVertexVertexInstances_Params Parms{};

	Parms.VertexID = VertexID;
	Parms.OutVertexInstanceIDs = OutVertexInstanceIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (None)
// struct FVector                     ReturnValue                                                      (None)

void UMeshDescriptionBase::GetVertexPosition(const struct FVertexID& VertexID, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexPosition");

	Params::UMeshDescriptionBase_GetVertexPosition_Params Parms{};

	Parms.VertexID = VertexID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexPairEdge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID0                                                        (None)
// struct FVertexID                   VertexID1                                                        (None)
// struct FEdgeID                     ReturnValue                                                      (None)

void UMeshDescriptionBase::GetVertexPairEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1, const struct FEdgeID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexPairEdge");

	Params::UMeshDescriptionBase_GetVertexPairEdge_Params Parms{};

	Parms.VertexID0 = VertexID0;
	Parms.VertexID1 = VertexID1;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (None)
// struct FVertexID                   ReturnValue                                                      (None)

void UMeshDescriptionBase::GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID, const struct FVertexID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceVertex");

	Params::UMeshDescriptionBase_GetVertexInstanceVertex_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstancePairEdge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID0                                                (None)
// struct FVertexInstanceID           VertexInstanceID1                                                (None)
// struct FEdgeID                     ReturnValue                                                      (None)

void UMeshDescriptionBase::GetVertexInstancePairEdge(const struct FVertexInstanceID& VertexInstanceID0, const struct FVertexInstanceID& VertexInstanceID1, const struct FEdgeID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstancePairEdge");

	Params::UMeshDescriptionBase_GetVertexInstancePairEdge_Params Parms{};

	Parms.VertexInstanceID0 = VertexInstanceID0;
	Parms.VertexInstanceID1 = VertexInstanceID1;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForTriangleVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (None)
// struct FVertexID                   VertexID                                                         (None)
// struct FVertexInstanceID           ReturnValue                                                      (None)

void UMeshDescriptionBase::GetVertexInstanceForTriangleVertex(const struct FTriangleID& TriangleID, const struct FVertexID& VertexID, const struct FVertexInstanceID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceForTriangleVertex");

	Params::UMeshDescriptionBase_GetVertexInstanceForTriangleVertex_Params Parms{};

	Parms.TriangleID = TriangleID;
	Parms.VertexID = VertexID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceForPolygonVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (None)
// struct FVertexID                   VertexID                                                         (None)
// struct FVertexInstanceID           ReturnValue                                                      (None)

void UMeshDescriptionBase::GetVertexInstanceForPolygonVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID, const struct FVertexInstanceID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceForPolygonVertex");

	Params::UMeshDescriptionBase_GetVertexInstanceForPolygonVertex_Params Parms{};

	Parms.PolygonID = PolygonID;
	Parms.VertexID = VertexID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UMeshDescriptionBase::GetVertexInstanceCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceCount");

	Params::UMeshDescriptionBase_GetVertexInstanceCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedTriangles
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (None)
// TArray<struct FTriangleID>         OutConnectedTriangleIDs                                          (None)

void UMeshDescriptionBase::GetVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID, const TArray<struct FTriangleID>& OutConnectedTriangleIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceConnectedTriangles");

	Params::UMeshDescriptionBase_GetVertexInstanceConnectedTriangles_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;
	Parms.OutConnectedTriangleIDs = OutConnectedTriangleIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexInstanceConnectedPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (None)
// TArray<struct FPolygonID>          OutConnectedPolygonIDs                                           (None)

void UMeshDescriptionBase::GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, const TArray<struct FPolygonID>& OutConnectedPolygonIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexInstanceConnectedPolygons");

	Params::UMeshDescriptionBase_GetVertexInstanceConnectedPolygons_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;
	Parms.OutConnectedPolygonIDs = OutConnectedPolygonIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UMeshDescriptionBase::GetVertexCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexCount");

	Params::UMeshDescriptionBase_GetVertexCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedTriangles
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (None)
// TArray<struct FTriangleID>         OutConnectedTriangleIDs                                          (None)

void UMeshDescriptionBase::GetVertexConnectedTriangles(const struct FVertexID& VertexID, const TArray<struct FTriangleID>& OutConnectedTriangleIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexConnectedTriangles");

	Params::UMeshDescriptionBase_GetVertexConnectedTriangles_Params Parms{};

	Parms.VertexID = VertexID;
	Parms.OutConnectedTriangleIDs = OutConnectedTriangleIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (None)
// TArray<struct FPolygonID>          OutConnectedPolygonIDs                                           (None)

void UMeshDescriptionBase::GetVertexConnectedPolygons(const struct FVertexID& VertexID, const TArray<struct FPolygonID>& OutConnectedPolygonIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexConnectedPolygons");

	Params::UMeshDescriptionBase_GetVertexConnectedPolygons_Params Parms{};

	Parms.VertexID = VertexID;
	Parms.OutConnectedPolygonIDs = OutConnectedPolygonIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexConnectedEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (None)
// TArray<struct FEdgeID>             OutEdgeIDs                                                       (None)

void UMeshDescriptionBase::GetVertexConnectedEdges(const struct FVertexID& VertexID, const TArray<struct FEdgeID>& OutEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexConnectedEdges");

	Params::UMeshDescriptionBase_GetVertexConnectedEdges_Params Parms{};

	Parms.VertexID = VertexID;
	Parms.OutEdgeIDs = OutEdgeIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetVertexAdjacentVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (None)
// TArray<struct FVertexID>           OutAdjacentVertexIDs                                             (None)

void UMeshDescriptionBase::GetVertexAdjacentVertices(const struct FVertexID& VertexID, const TArray<struct FVertexID>& OutAdjacentVertexIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetVertexAdjacentVertices");

	Params::UMeshDescriptionBase_GetVertexAdjacentVertices_Params Parms{};

	Parms.VertexID = VertexID;
	Parms.OutAdjacentVertexIDs = OutAdjacentVertexIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (None)
// TArray<struct FVertexID>           OutVertexIDs                                                     (None)

void UMeshDescriptionBase::GetTriangleVertices(const struct FTriangleID& TriangleID, const TArray<struct FVertexID>& OutVertexIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleVertices");

	Params::UMeshDescriptionBase_GetTriangleVertices_Params Parms{};

	Parms.TriangleID = TriangleID;
	Parms.OutVertexIDs = OutVertexIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (None)
// TArray<struct FVertexInstanceID>   OutVertexInstanceIDs                                             (None)

void UMeshDescriptionBase::GetTriangleVertexInstances(const struct FTriangleID& TriangleID, const TArray<struct FVertexInstanceID>& OutVertexInstanceIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleVertexInstances");

	Params::UMeshDescriptionBase_GetTriangleVertexInstances_Params Parms{};

	Parms.TriangleID = TriangleID;
	Parms.OutVertexInstanceIDs = OutVertexInstanceIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleVertexInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (None)
// int32                              Index                                                            (None)
// struct FVertexInstanceID           ReturnValue                                                      (None)

void UMeshDescriptionBase::GetTriangleVertexInstance(const struct FTriangleID& TriangleID, int32 Index, const struct FVertexInstanceID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleVertexInstance");

	Params::UMeshDescriptionBase_GetTriangleVertexInstance_Params Parms{};

	Parms.TriangleID = TriangleID;
	Parms.Index = Index;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygonGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (None)
// struct FPolygonGroupID             ReturnValue                                                      (None)

void UMeshDescriptionBase::GetTrianglePolygonGroup(const struct FTriangleID& TriangleID, const struct FPolygonGroupID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTrianglePolygonGroup");

	Params::UMeshDescriptionBase_GetTrianglePolygonGroup_Params Parms{};

	Parms.TriangleID = TriangleID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetTrianglePolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (None)
// struct FPolygonID                  ReturnValue                                                      (None)

void UMeshDescriptionBase::GetTrianglePolygon(const struct FTriangleID& TriangleID, const struct FPolygonID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTrianglePolygon");

	Params::UMeshDescriptionBase_GetTrianglePolygon_Params Parms{};

	Parms.TriangleID = TriangleID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (None)
// TArray<struct FEdgeID>             OutEdgeIDs                                                       (None)

void UMeshDescriptionBase::GetTriangleEdges(const struct FTriangleID& TriangleID, const TArray<struct FEdgeID>& OutEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleEdges");

	Params::UMeshDescriptionBase_GetTriangleEdges_Params Parms{};

	Parms.TriangleID = TriangleID;
	Parms.OutEdgeIDs = OutEdgeIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UMeshDescriptionBase::GetTriangleCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleCount");

	Params::UMeshDescriptionBase_GetTriangleCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetTriangleAdjacentTriangles
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (None)
// TArray<struct FTriangleID>         OutTriangleIDs                                                   (None)

void UMeshDescriptionBase::GetTriangleAdjacentTriangles(const struct FTriangleID& TriangleID, const TArray<struct FTriangleID>& OutTriangleIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetTriangleAdjacentTriangles");

	Params::UMeshDescriptionBase_GetTriangleAdjacentTriangles_Params Parms{};

	Parms.TriangleID = TriangleID;
	Parms.OutTriangleIDs = OutTriangleIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (None)
// TArray<struct FVertexID>           OutVertexIDs                                                     (None)

void UMeshDescriptionBase::GetPolygonVertices(const struct FPolygonID& PolygonID, const TArray<struct FVertexID>& OutVertexIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonVertices");

	Params::UMeshDescriptionBase_GetPolygonVertices_Params Parms{};

	Parms.PolygonID = PolygonID;
	Parms.OutVertexIDs = OutVertexIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonVertexInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (None)
// TArray<struct FVertexInstanceID>   OutVertexInstanceIDs                                             (None)

void UMeshDescriptionBase::GetPolygonVertexInstances(const struct FPolygonID& PolygonID, const TArray<struct FVertexInstanceID>& OutVertexInstanceIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonVertexInstances");

	Params::UMeshDescriptionBase_GetPolygonVertexInstances_Params Parms{};

	Parms.PolygonID = PolygonID;
	Parms.OutVertexInstanceIDs = OutVertexInstanceIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonTriangles
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (None)
// TArray<struct FTriangleID>         OutTriangleIDs                                                   (None)

void UMeshDescriptionBase::GetPolygonTriangles(const struct FPolygonID& PolygonID, const TArray<struct FTriangleID>& OutTriangleIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonTriangles");

	Params::UMeshDescriptionBase_GetPolygonTriangles_Params Parms{};

	Parms.PolygonID = PolygonID;
	Parms.OutTriangleIDs = OutTriangleIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonPolygonGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (None)
// struct FPolygonGroupID             ReturnValue                                                      (None)

void UMeshDescriptionBase::GetPolygonPolygonGroup(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonPolygonGroup");

	Params::UMeshDescriptionBase_GetPolygonPolygonGroup_Params Parms{};

	Parms.PolygonID = PolygonID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonPerimeterEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (None)
// TArray<struct FEdgeID>             OutEdgeIDs                                                       (None)

void UMeshDescriptionBase::GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, const TArray<struct FEdgeID>& OutEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonPerimeterEdges");

	Params::UMeshDescriptionBase_GetPolygonPerimeterEdges_Params Parms{};

	Parms.PolygonID = PolygonID;
	Parms.OutEdgeIDs = OutEdgeIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonInternalEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (None)
// TArray<struct FEdgeID>             OutEdgeIDs                                                       (None)

void UMeshDescriptionBase::GetPolygonInternalEdges(const struct FPolygonID& PolygonID, const TArray<struct FEdgeID>& OutEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonInternalEdges");

	Params::UMeshDescriptionBase_GetPolygonInternalEdges_Params Parms{};

	Parms.PolygonID = PolygonID;
	Parms.OutEdgeIDs = OutEdgeIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (None)
// TArray<struct FPolygonID>          OutPolygonIDs                                                    (None)

void UMeshDescriptionBase::GetPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID, const TArray<struct FPolygonID>& OutPolygonIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonGroupPolygons");

	Params::UMeshDescriptionBase_GetPolygonGroupPolygons_Params Parms{};

	Parms.PolygonGroupID = PolygonGroupID;
	Parms.OutPolygonIDs = OutPolygonIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonGroupCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UMeshDescriptionBase::GetPolygonGroupCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonGroupCount");

	Params::UMeshDescriptionBase_GetPolygonGroupCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UMeshDescriptionBase::GetPolygonCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonCount");

	Params::UMeshDescriptionBase_GetPolygonCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetPolygonAdjacentPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (None)
// TArray<struct FPolygonID>          OutPolygonIDs                                                    (None)

void UMeshDescriptionBase::GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, const TArray<struct FPolygonID>& OutPolygonIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetPolygonAdjacentPolygons");

	Params::UMeshDescriptionBase_GetPolygonAdjacentPolygons_Params Parms{};

	Parms.PolygonID = PolygonID;
	Parms.OutPolygonIDs = OutPolygonIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexVertexInstances
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (None)
// int32                              ReturnValue                                                      (None)

void UMeshDescriptionBase::GetNumVertexVertexInstances(const struct FVertexID& VertexID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexVertexInstances");

	Params::UMeshDescriptionBase_GetNumVertexVertexInstances_Params Parms{};

	Parms.VertexID = VertexID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedTriangles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (None)
// int32                              ReturnValue                                                      (None)

void UMeshDescriptionBase::GetNumVertexInstanceConnectedTriangles(const struct FVertexInstanceID& VertexInstanceID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexInstanceConnectedTriangles");

	Params::UMeshDescriptionBase_GetNumVertexInstanceConnectedTriangles_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexInstanceConnectedPolygons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (None)
// int32                              ReturnValue                                                      (None)

void UMeshDescriptionBase::GetNumVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexInstanceConnectedPolygons");

	Params::UMeshDescriptionBase_GetNumVertexInstanceConnectedPolygons_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedTriangles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (None)
// int32                              ReturnValue                                                      (None)

void UMeshDescriptionBase::GetNumVertexConnectedTriangles(const struct FVertexID& VertexID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexConnectedTriangles");

	Params::UMeshDescriptionBase_GetNumVertexConnectedTriangles_Params Parms{};

	Parms.VertexID = VertexID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedPolygons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (None)
// int32                              ReturnValue                                                      (None)

void UMeshDescriptionBase::GetNumVertexConnectedPolygons(const struct FVertexID& VertexID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexConnectedPolygons");

	Params::UMeshDescriptionBase_GetNumVertexConnectedPolygons_Params Parms{};

	Parms.VertexID = VertexID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetNumVertexConnectedEdges
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (None)
// int32                              ReturnValue                                                      (None)

void UMeshDescriptionBase::GetNumVertexConnectedEdges(const struct FVertexID& VertexID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumVertexConnectedEdges");

	Params::UMeshDescriptionBase_GetNumVertexConnectedEdges_Params Parms{};

	Parms.VertexID = VertexID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonVertices
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (None)
// int32                              ReturnValue                                                      (None)

void UMeshDescriptionBase::GetNumPolygonVertices(const struct FPolygonID& PolygonID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumPolygonVertices");

	Params::UMeshDescriptionBase_GetNumPolygonVertices_Params Parms{};

	Parms.PolygonID = PolygonID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonTriangles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (None)
// int32                              ReturnValue                                                      (None)

void UMeshDescriptionBase::GetNumPolygonTriangles(const struct FPolygonID& PolygonID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumPolygonTriangles");

	Params::UMeshDescriptionBase_GetNumPolygonTriangles_Params Parms{};

	Parms.PolygonID = PolygonID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonInternalEdges
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (None)
// int32                              ReturnValue                                                      (None)

void UMeshDescriptionBase::GetNumPolygonInternalEdges(const struct FPolygonID& PolygonID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumPolygonInternalEdges");

	Params::UMeshDescriptionBase_GetNumPolygonInternalEdges_Params Parms{};

	Parms.PolygonID = PolygonID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetNumPolygonGroupPolygons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (None)
// int32                              ReturnValue                                                      (None)

void UMeshDescriptionBase::GetNumPolygonGroupPolygons(const struct FPolygonGroupID& PolygonGroupID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumPolygonGroupPolygons");

	Params::UMeshDescriptionBase_GetNumPolygonGroupPolygons_Params Parms{};

	Parms.PolygonGroupID = PolygonGroupID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedTriangles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (None)
// int32                              ReturnValue                                                      (None)

void UMeshDescriptionBase::GetNumEdgeConnectedTriangles(const struct FEdgeID& EdgeID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumEdgeConnectedTriangles");

	Params::UMeshDescriptionBase_GetNumEdgeConnectedTriangles_Params Parms{};

	Parms.EdgeID = EdgeID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetNumEdgeConnectedPolygons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (None)
// int32                              ReturnValue                                                      (None)

void UMeshDescriptionBase::GetNumEdgeConnectedPolygons(const struct FEdgeID& EdgeID, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetNumEdgeConnectedPolygons");

	Params::UMeshDescriptionBase_GetNumEdgeConnectedPolygons_Params Parms{};

	Parms.EdgeID = EdgeID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (None)
// TArray<struct FVertexID>           OutVertexIDs                                                     (None)

void UMeshDescriptionBase::GetEdgeVertices(const struct FEdgeID& EdgeID, const TArray<struct FVertexID>& OutVertexIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeVertices");

	Params::UMeshDescriptionBase_GetEdgeVertices_Params Parms{};

	Parms.EdgeID = EdgeID;
	Parms.OutVertexIDs = OutVertexIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (None)
// int32                              VertexNumber                                                     (None)
// struct FVertexID                   ReturnValue                                                      (None)

void UMeshDescriptionBase::GetEdgeVertex(const struct FEdgeID& EdgeID, int32 VertexNumber, const struct FVertexID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeVertex");

	Params::UMeshDescriptionBase_GetEdgeVertex_Params Parms{};

	Parms.EdgeID = EdgeID;
	Parms.VertexNumber = VertexNumber;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UMeshDescriptionBase::GetEdgeCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeCount");

	Params::UMeshDescriptionBase_GetEdgeCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedTriangles
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (None)
// TArray<struct FTriangleID>         OutConnectedTriangleIDs                                          (None)

void UMeshDescriptionBase::GetEdgeConnectedTriangles(const struct FEdgeID& EdgeID, const TArray<struct FTriangleID>& OutConnectedTriangleIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeConnectedTriangles");

	Params::UMeshDescriptionBase_GetEdgeConnectedTriangles_Params Parms{};

	Parms.EdgeID = EdgeID;
	Parms.OutConnectedTriangleIDs = OutConnectedTriangleIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.GetEdgeConnectedPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (None)
// TArray<struct FPolygonID>          OutConnectedPolygonIDs                                           (None)

void UMeshDescriptionBase::GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, const TArray<struct FPolygonID>& OutConnectedPolygonIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "GetEdgeConnectedPolygons");

	Params::UMeshDescriptionBase_GetEdgeConnectedPolygons_Params Parms{};

	Parms.EdgeID = EdgeID;
	Parms.OutConnectedPolygonIDs = OutConnectedPolygonIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.Empty
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMeshDescriptionBase::Empty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "Empty");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.DeleteVertexInstance
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (None)
// TArray<struct FVertexID>           OrphanedVertices                                                 (None)

void UMeshDescriptionBase::DeleteVertexInstance(const struct FVertexInstanceID& VertexInstanceID, const TArray<struct FVertexID>& OrphanedVertices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeleteVertexInstance");

	Params::UMeshDescriptionBase_DeleteVertexInstance_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;
	Parms.OrphanedVertices = OrphanedVertices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.DeleteVertex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID                   VertexID                                                         (None)

void UMeshDescriptionBase::DeleteVertex(const struct FVertexID& VertexID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeleteVertex");

	Params::UMeshDescriptionBase_DeleteVertex_Params Parms{};

	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.DeleteTriangle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (None)
// TArray<struct FEdgeID>             OrphanedEdges                                                    (None)
// TArray<struct FVertexInstanceID>   OrphanedVertexInstances                                          (None)
// TArray<struct FPolygonGroupID>     OrphanedPolygonGroupsPtr                                         (None)

void UMeshDescriptionBase::DeleteTriangle(const struct FTriangleID& TriangleID, const TArray<struct FEdgeID>& OrphanedEdges, const TArray<struct FVertexInstanceID>& OrphanedVertexInstances, const TArray<struct FPolygonGroupID>& OrphanedPolygonGroupsPtr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeleteTriangle");

	Params::UMeshDescriptionBase_DeleteTriangle_Params Parms{};

	Parms.TriangleID = TriangleID;
	Parms.OrphanedEdges = OrphanedEdges;
	Parms.OrphanedVertexInstances = OrphanedVertexInstances;
	Parms.OrphanedPolygonGroupsPtr = OrphanedPolygonGroupsPtr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.DeletePolygonGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (None)

void UMeshDescriptionBase::DeletePolygonGroup(const struct FPolygonGroupID& PolygonGroupID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeletePolygonGroup");

	Params::UMeshDescriptionBase_DeletePolygonGroup_Params Parms{};

	Parms.PolygonGroupID = PolygonGroupID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.DeletePolygon
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (None)
// TArray<struct FEdgeID>             OrphanedEdges                                                    (None)
// TArray<struct FVertexInstanceID>   OrphanedVertexInstances                                          (None)
// TArray<struct FPolygonGroupID>     OrphanedPolygonGroups                                            (None)

void UMeshDescriptionBase::DeletePolygon(const struct FPolygonID& PolygonID, const TArray<struct FEdgeID>& OrphanedEdges, const TArray<struct FVertexInstanceID>& OrphanedVertexInstances, const TArray<struct FPolygonGroupID>& OrphanedPolygonGroups)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeletePolygon");

	Params::UMeshDescriptionBase_DeletePolygon_Params Parms{};

	Parms.PolygonID = PolygonID;
	Parms.OrphanedEdges = OrphanedEdges;
	Parms.OrphanedVertexInstances = OrphanedVertexInstances;
	Parms.OrphanedPolygonGroups = OrphanedPolygonGroups;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.DeleteEdge
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (None)
// TArray<struct FVertexID>           OrphanedVertices                                                 (None)

void UMeshDescriptionBase::DeleteEdge(const struct FEdgeID& EdgeID, const TArray<struct FVertexID>& OrphanedVertices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "DeleteEdge");

	Params::UMeshDescriptionBase_DeleteEdge_Params Parms{};

	Parms.EdgeID = EdgeID;
	Parms.OrphanedVertices = OrphanedVertices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.CreateVertexWithID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID                   VertexID                                                         (None)

void UMeshDescriptionBase::CreateVertexWithID(const struct FVertexID& VertexID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateVertexWithID");

	Params::UMeshDescriptionBase_CreateVertexWithID_Params Parms{};

	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.CreateVertexInstanceWithID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (None)
// struct FVertexID                   VertexID                                                         (None)

void UMeshDescriptionBase::CreateVertexInstanceWithID(const struct FVertexInstanceID& VertexInstanceID, const struct FVertexID& VertexID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateVertexInstanceWithID");

	Params::UMeshDescriptionBase_CreateVertexInstanceWithID_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;
	Parms.VertexID = VertexID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.CreateVertexInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID                   VertexID                                                         (None)
// struct FVertexInstanceID           ReturnValue                                                      (None)

void UMeshDescriptionBase::CreateVertexInstance(const struct FVertexID& VertexID, const struct FVertexInstanceID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateVertexInstance");

	Params::UMeshDescriptionBase_CreateVertexInstance_Params Parms{};

	Parms.VertexID = VertexID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.CreateVertex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID                   ReturnValue                                                      (None)

void UMeshDescriptionBase::CreateVertex(const struct FVertexID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateVertex");

	Params::UMeshDescriptionBase_CreateVertex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.CreateTriangleWithID
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTriangleID                 TriangleID                                                       (None)
// struct FPolygonGroupID             PolygonGroupID                                                   (None)
// TArray<struct FVertexInstanceID>   VertexInstanceIDs                                                (None)
// TArray<struct FEdgeID>             NewEdgeIDs                                                       (None)

void UMeshDescriptionBase::CreateTriangleWithID(const struct FTriangleID& TriangleID, const struct FPolygonGroupID& PolygonGroupID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs, const TArray<struct FEdgeID>& NewEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateTriangleWithID");

	Params::UMeshDescriptionBase_CreateTriangleWithID_Params Parms{};

	Parms.TriangleID = TriangleID;
	Parms.PolygonGroupID = PolygonGroupID;
	Parms.VertexInstanceIDs = VertexInstanceIDs;
	Parms.NewEdgeIDs = NewEdgeIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.CreateTriangle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (None)
// TArray<struct FVertexInstanceID>   VertexInstanceIDs                                                (None)
// TArray<struct FEdgeID>             NewEdgeIDs                                                       (None)
// struct FTriangleID                 ReturnValue                                                      (None)

void UMeshDescriptionBase::CreateTriangle(const struct FPolygonGroupID& PolygonGroupID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs, const TArray<struct FEdgeID>& NewEdgeIDs, const struct FTriangleID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateTriangle");

	Params::UMeshDescriptionBase_CreateTriangle_Params Parms{};

	Parms.PolygonGroupID = PolygonGroupID;
	Parms.VertexInstanceIDs = VertexInstanceIDs;
	Parms.NewEdgeIDs = NewEdgeIDs;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonWithID
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (None)
// struct FPolygonGroupID             PolygonGroupID                                                   (None)
// TArray<struct FVertexInstanceID>   VertexInstanceIDs                                                (None)
// TArray<struct FEdgeID>             NewEdgeIDs                                                       (None)

void UMeshDescriptionBase::CreatePolygonWithID(const struct FPolygonID& PolygonID, const struct FPolygonGroupID& PolygonGroupID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs, const TArray<struct FEdgeID>& NewEdgeIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreatePolygonWithID");

	Params::UMeshDescriptionBase_CreatePolygonWithID_Params Parms{};

	Parms.PolygonID = PolygonID;
	Parms.PolygonGroupID = PolygonGroupID;
	Parms.VertexInstanceIDs = VertexInstanceIDs;
	Parms.NewEdgeIDs = NewEdgeIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroupWithID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (None)

void UMeshDescriptionBase::CreatePolygonGroupWithID(const struct FPolygonGroupID& PolygonGroupID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreatePolygonGroupWithID");

	Params::UMeshDescriptionBase_CreatePolygonGroupWithID_Params Parms{};

	Parms.PolygonGroupID = PolygonGroupID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.CreatePolygonGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID             ReturnValue                                                      (None)

void UMeshDescriptionBase::CreatePolygonGroup(const struct FPolygonGroupID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreatePolygonGroup");

	Params::UMeshDescriptionBase_CreatePolygonGroup_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.CreatePolygon
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (None)
// TArray<struct FVertexInstanceID>   VertexInstanceIDs                                                (None)
// TArray<struct FEdgeID>             NewEdgeIDs                                                       (None)
// struct FPolygonID                  ReturnValue                                                      (None)

void UMeshDescriptionBase::CreatePolygon(const struct FPolygonGroupID& PolygonGroupID, const TArray<struct FVertexInstanceID>& VertexInstanceIDs, const TArray<struct FEdgeID>& NewEdgeIDs, const struct FPolygonID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreatePolygon");

	Params::UMeshDescriptionBase_CreatePolygon_Params Parms{};

	Parms.PolygonGroupID = PolygonGroupID;
	Parms.VertexInstanceIDs = VertexInstanceIDs;
	Parms.NewEdgeIDs = NewEdgeIDs;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.CreateEdgeWithID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (None)
// struct FVertexID                   VertexID0                                                        (None)
// struct FVertexID                   VertexID1                                                        (None)

void UMeshDescriptionBase::CreateEdgeWithID(const struct FEdgeID& EdgeID, const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateEdgeWithID");

	Params::UMeshDescriptionBase_CreateEdgeWithID_Params Parms{};

	Parms.EdgeID = EdgeID;
	Parms.VertexID0 = VertexID0;
	Parms.VertexID1 = VertexID1;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.CreateEdge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID                   VertexID0                                                        (None)
// struct FVertexID                   VertexID1                                                        (None)
// struct FEdgeID                     ReturnValue                                                      (None)

void UMeshDescriptionBase::CreateEdge(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1, const struct FEdgeID& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "CreateEdge");

	Params::UMeshDescriptionBase_CreateEdge_Params Parms{};

	Parms.VertexID0 = VertexID0;
	Parms.VertexID1 = VertexID1;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshDescription.MeshDescriptionBase.ComputePolygonTriangulation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (None)

void UMeshDescriptionBase::ComputePolygonTriangulation(const struct FPolygonID& PolygonID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshDescriptionBase", "ComputePolygonTriangulation");

	Params::UMeshDescriptionBase_ComputePolygonTriangulation_Params Parms{};

	Parms.PolygonID = PolygonID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class MeshDescription.MeshDescriptionBaseBulkData
// (None)

class UClass* UMeshDescriptionBaseBulkData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshDescriptionBaseBulkData");

	return Clss;
}


// MeshDescriptionBaseBulkData MeshDescription.Default__MeshDescriptionBaseBulkData
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshDescriptionBaseBulkData* UMeshDescriptionBaseBulkData::GetDefaultObj()
{
	static class UMeshDescriptionBaseBulkData* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshDescriptionBaseBulkData*>(UMeshDescriptionBaseBulkData::StaticClass()->DefaultObject);

	return Default;
}

}


