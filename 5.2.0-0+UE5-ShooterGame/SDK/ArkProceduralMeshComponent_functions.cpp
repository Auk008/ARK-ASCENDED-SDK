#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ArkProceduralMeshComponent.ArkProceduralMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UArkProceduralMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArkProceduralMeshComponent");

	return Clss;
}


// ArkProceduralMeshComponent ArkProceduralMeshComponent.Default__ArkProceduralMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UArkProceduralMeshComponent* UArkProceduralMeshComponent::GetDefaultObj()
{
	static class UArkProceduralMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UArkProceduralMeshComponent*>(UArkProceduralMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.UpdateMeshSection_LinearColor
// (Final, Native, Public, HasOutParams)
// Parameters:
// int32                              SectionIndex                                                     (None)
// TArray<struct FVector3f>           Vertices                                                         (None)
// TArray<struct FVector3f>           Normals                                                          (None)
// TArray<struct FVector2f>           UV0                                                              (None)
// TArray<struct FVector2f>           UV1                                                              (None)
// TArray<struct FVector2f>           UV2                                                              (None)
// TArray<struct FVector2f>           UV3                                                              (None)
// TArray<struct FLinearColor>        VertexColors                                                     (None)
// TArray<struct FArkProcMeshTangent> Tangents                                                         (None)

void UArkProceduralMeshComponent::UpdateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector3f>& Vertices, const TArray<struct FVector3f>& Normals, const TArray<struct FVector2f>& UV0, const TArray<struct FVector2f>& UV1, const TArray<struct FVector2f>& UV2, const TArray<struct FVector2f>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "UpdateMeshSection_LinearColor");

	Params::UArkProceduralMeshComponent_UpdateMeshSection_LinearColor_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = Vertices;
	Parms.Normals = Normals;
	Parms.UV0 = UV0;
	Parms.UV1 = UV1;
	Parms.UV2 = UV2;
	Parms.UV3 = UV3;
	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.UpdateMeshSection
// (Final, Native, Public, HasOutParams)
// Parameters:
// int32                              SectionIndex                                                     (None)
// TArray<struct FVector3f>           Vertices                                                         (None)
// TArray<struct FVector3f>           Normals                                                          (None)
// TArray<struct FVector2f>           UV0                                                              (None)
// TArray<struct FColor>              VertexColors                                                     (None)
// TArray<struct FArkProcMeshTangent> Tangents                                                         (None)

void UArkProceduralMeshComponent::UpdateMeshSection(int32 SectionIndex, const TArray<struct FVector3f>& Vertices, const TArray<struct FVector3f>& Normals, const TArray<struct FVector2f>& UV0, const TArray<struct FColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "UpdateMeshSection");

	Params::UArkProceduralMeshComponent_UpdateMeshSection_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = Vertices;
	Parms.Normals = Normals;
	Parms.UV0 = UV0;
	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.SetMeshSectionVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (None)
// bool                               bNewVisibility                                                   (None)

void UArkProceduralMeshComponent::SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "SetMeshSectionVisible");

	Params::UArkProceduralMeshComponent_SetMeshSectionVisible_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.bNewVisibility = bNewVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.IsMeshSectionVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SectionIndex                                                     (None)
// bool                               ReturnValue                                                      (None)

void UArkProceduralMeshComponent::IsMeshSectionVisible(int32 SectionIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "IsMeshSectionVisible");

	Params::UArkProceduralMeshComponent_IsMeshSectionVisible_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.GetNumSections
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UArkProceduralMeshComponent::GetNumSections(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "GetNumSections");

	Params::UArkProceduralMeshComponent_GetNumSections_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection_LinearColor
// (Final, Native, Public, HasOutParams)
// Parameters:
// int32                              SectionIndex                                                     (None)
// TArray<struct FVector3f>           Vertices                                                         (None)
// TArray<int32>                      Triangles                                                        (None)
// TArray<struct FVector3f>           Normals                                                          (None)
// TArray<struct FVector2f>           UV0                                                              (None)
// TArray<struct FVector2f>           UV1                                                              (None)
// TArray<struct FVector2f>           UV2                                                              (None)
// TArray<struct FVector2f>           UV3                                                              (None)
// TArray<struct FLinearColor>        VertexColors                                                     (None)
// TArray<struct FArkProcMeshTangent> Tangents                                                         (None)
// bool                               bCreateCollision                                                 (None)

void UArkProceduralMeshComponent::CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector3f>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector3f>& Normals, const TArray<struct FVector2f>& UV0, const TArray<struct FVector2f>& UV1, const TArray<struct FVector2f>& UV2, const TArray<struct FVector2f>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents, bool bCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "CreateMeshSection_LinearColor");

	Params::UArkProceduralMeshComponent_CreateMeshSection_LinearColor_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = Vertices;
	Parms.Triangles = Triangles;
	Parms.Normals = Normals;
	Parms.UV0 = UV0;
	Parms.UV1 = UV1;
	Parms.UV2 = UV2;
	Parms.UV3 = UV3;
	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;
	Parms.bCreateCollision = bCreateCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection
// (Final, Native, Public, HasOutParams)
// Parameters:
// int32                              SectionIndex                                                     (None)
// TArray<struct FVector3f>           Vertices                                                         (None)
// TArray<int32>                      Triangles                                                        (None)
// TArray<struct FVector3f>           Normals                                                          (None)
// TArray<struct FVector2f>           UV0                                                              (None)
// TArray<struct FColor>              VertexColors                                                     (None)
// TArray<struct FArkProcMeshTangent> Tangents                                                         (None)
// bool                               bCreateCollision                                                 (None)

void UArkProceduralMeshComponent::CreateMeshSection(int32 SectionIndex, const TArray<struct FVector3f>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector3f>& Normals, const TArray<struct FVector2f>& UV0, const TArray<struct FColor>& VertexColors, const TArray<struct FArkProcMeshTangent>& Tangents, bool bCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "CreateMeshSection");

	Params::UArkProceduralMeshComponent_CreateMeshSection_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = Vertices;
	Parms.Triangles = Triangles;
	Parms.Normals = Normals;
	Parms.UV0 = UV0;
	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;
	Parms.bCreateCollision = bCreateCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearMeshSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (None)

void UArkProceduralMeshComponent::ClearMeshSection(int32 SectionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "ClearMeshSection");

	Params::UArkProceduralMeshComponent_ClearMeshSection_Params Parms{};

	Parms.SectionIndex = SectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearCollisionConvexMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UArkProceduralMeshComponent::ClearCollisionConvexMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "ClearCollisionConvexMeshes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearAllMeshSections
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UArkProceduralMeshComponent::ClearAllMeshSections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "ClearAllMeshSections");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.AddCollisionConvexMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             ConvexVerts                                                      (None)

void UArkProceduralMeshComponent::AddCollisionConvexMesh(const TArray<struct FVector>& ConvexVerts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArkProceduralMeshComponent", "AddCollisionConvexMesh");

	Params::UArkProceduralMeshComponent_AddCollisionConvexMesh_Params Parms{};

	Parms.ConvexVerts = ConvexVerts;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


