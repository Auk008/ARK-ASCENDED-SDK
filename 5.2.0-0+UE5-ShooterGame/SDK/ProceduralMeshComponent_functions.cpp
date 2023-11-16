#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// (None)

class UClass* UKismetProceduralMeshLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KismetProceduralMeshLibrary");

	return Clss;
}


// KismetProceduralMeshLibrary ProceduralMeshComponent.Default__KismetProceduralMeshLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UKismetProceduralMeshLibrary* UKismetProceduralMeshLibrary::GetDefaultObj()
{
	static class UKismetProceduralMeshLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UKismetProceduralMeshLibrary*>(UKismetProceduralMeshLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UProceduralMeshComponent*    InProcMesh                                                       (ZeroConstructor)
// struct FVector                     PlanePosition                                                    (None)
// struct FVector                     PlaneNormal                                                      (None)
// bool                               bCreateOtherHalf                                                 (None)
// class UProceduralMeshComponent*    OutOtherHalfProcMesh                                             (ZeroConstructor)
// enum class EProcMeshSliceCapOption CapOption                                                        (None)
// class UMaterialInterface*          CapMaterial                                                      (None)

void UKismetProceduralMeshLibrary::SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent* OutOtherHalfProcMesh, enum class EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "SliceProceduralMesh");

	Params::UKismetProceduralMeshLibrary_SliceProceduralMesh_Params Parms{};

	Parms.InProcMesh = InProcMesh;
	Parms.PlanePosition = PlanePosition;
	Parms.PlaneNormal = PlaneNormal;
	Parms.bCreateOtherHalf = bCreateOtherHalf;
	Parms.OutOtherHalfProcMesh = OutOtherHalfProcMesh;
	Parms.CapOption = CapOption;
	Parms.CapMaterial = CapMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 InMesh                                                           (None)
// int32                              LODIndex                                                         (None)
// int32                              SectionIndex                                                     (None)
// TArray<struct FVector>             Vertices                                                         (None)
// TArray<int32>                      Triangles                                                        (None)
// TArray<struct FVector>             Normals                                                          (None)
// TArray<struct FVector2D>           UVs                                                              (None)
// TArray<struct FProcMeshTangent>    Tangents                                                         (None)

void UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(class UStaticMesh* InMesh, int32 LODIndex, int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UVs, const TArray<struct FProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "GetSectionFromStaticMesh");

	Params::UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Params Parms{};

	Parms.InMesh = InMesh;
	Parms.LODIndex = LODIndex;
	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = Vertices;
	Parms.Triangles = Triangles;
	Parms.Normals = Normals;
	Parms.UVs = UVs;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UProceduralMeshComponent*    InProcMesh                                                       (None)
// int32                              SectionIndex                                                     (None)
// TArray<struct FVector>             Vertices                                                         (None)
// TArray<int32>                      Triangles                                                        (None)
// TArray<struct FVector>             Normals                                                          (None)
// TArray<struct FVector2D>           UVs                                                              (None)
// TArray<struct FProcMeshTangent>    Tangents                                                         (None)

void UKismetProceduralMeshLibrary::GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UVs, const TArray<struct FProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "GetSectionFromProceduralMesh");

	Params::UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Params Parms{};

	Parms.InProcMesh = InProcMesh;
	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = Vertices;
	Parms.Triangles = Triangles;
	Parms.Normals = Normals;
	Parms.UVs = UVs;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     BoxRadius                                                        (None)
// TArray<struct FVector>             Vertices                                                         (None)
// TArray<int32>                      Triangles                                                        (None)
// TArray<struct FVector>             Normals                                                          (None)
// TArray<struct FVector2D>           UVs                                                              (None)
// TArray<struct FProcMeshTangent>    Tangents                                                         (None)

void UKismetProceduralMeshLibrary::GenerateBoxMesh(const struct FVector& BoxRadius, const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UVs, const TArray<struct FProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "GenerateBoxMesh");

	Params::UKismetProceduralMeshLibrary_GenerateBoxMesh_Params Parms{};

	Parms.BoxRadius = BoxRadius;
	Parms.Vertices = Vertices;
	Parms.Triangles = Triangles;
	Parms.Normals = Normals;
	Parms.UVs = UVs;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumX                                                             (None)
// int32                              NumY                                                             (None)
// TArray<int32>                      Triangles                                                        (None)
// TArray<struct FVector>             Vertices                                                         (None)
// TArray<struct FVector2D>           UVs                                                              (None)
// float                              GridSpacing                                                      (None)

void UKismetProceduralMeshLibrary::CreateGridMeshWelded(int32 NumX, int32 NumY, const TArray<int32>& Triangles, const TArray<struct FVector>& Vertices, const TArray<struct FVector2D>& UVs, float GridSpacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CreateGridMeshWelded");

	Params::UKismetProceduralMeshLibrary_CreateGridMeshWelded_Params Parms{};

	Parms.NumX = NumX;
	Parms.NumY = NumY;
	Parms.Triangles = Triangles;
	Parms.Vertices = Vertices;
	Parms.UVs = UVs;
	Parms.GridSpacing = GridSpacing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumX                                                             (None)
// int32                              NumY                                                             (None)
// bool                               bWinding                                                         (None)
// TArray<int32>                      Triangles                                                        (None)

void UKismetProceduralMeshLibrary::CreateGridMeshTriangles(int32 NumX, int32 NumY, bool bWinding, const TArray<int32>& Triangles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CreateGridMeshTriangles");

	Params::UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Params Parms{};

	Parms.NumX = NumX;
	Parms.NumY = NumY;
	Parms.bWinding = bWinding;
	Parms.Triangles = Triangles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumX                                                             (None)
// int32                              NumY                                                             (None)
// TArray<int32>                      Triangles                                                        (None)
// TArray<struct FVector>             Vertices                                                         (None)
// TArray<struct FVector2D>           UVs                                                              (None)
// TArray<struct FVector2D>           UV1s                                                             (None)
// float                              GridSpacing                                                      (None)

void UKismetProceduralMeshLibrary::CreateGridMeshSplit(int32 NumX, int32 NumY, const TArray<int32>& Triangles, const TArray<struct FVector>& Vertices, const TArray<struct FVector2D>& UVs, const TArray<struct FVector2D>& UV1s, float GridSpacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CreateGridMeshSplit");

	Params::UKismetProceduralMeshLibrary_CreateGridMeshSplit_Params Parms{};

	Parms.NumX = NumX;
	Parms.NumY = NumY;
	Parms.Triangles = Triangles;
	Parms.Vertices = Vertices;
	Parms.UVs = UVs;
	Parms.UV1s = UV1s;
	Parms.GridSpacing = GridSpacing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMeshComponent*        StaticMeshComponent                                              (ZeroConstructor)
// int32                              LODIndex                                                         (None)
// class UProceduralMeshComponent*    ProcMeshComponent                                                (None)
// bool                               bCreateCollision                                                 (None)

void UKismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int32 LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CopyProceduralMeshFromStaticMeshComponent");

	Params::UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Params Parms{};

	Parms.StaticMeshComponent = StaticMeshComponent;
	Parms.LODIndex = LODIndex;
	Parms.ProcMeshComponent = ProcMeshComponent;
	Parms.bCreateCollision = bCreateCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      Triangles                                                        (None)
// int32                              Vert0                                                            (None)
// int32                              Vert1                                                            (None)
// int32                              Vert2                                                            (None)
// int32                              Vert3                                                            (None)

void UKismetProceduralMeshLibrary::ConvertQuadToTriangles(const TArray<int32>& Triangles, int32 Vert0, int32 Vert1, int32 Vert2, int32 Vert3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "ConvertQuadToTriangles");

	Params::UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Params Parms{};

	Parms.Triangles = Triangles;
	Parms.Vert0 = Vert0;
	Parms.Vert1 = Vert1;
	Parms.Vert2 = Vert2;
	Parms.Vert3 = Vert3;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             Vertices                                                         (None)
// TArray<int32>                      Triangles                                                        (None)
// TArray<struct FVector2D>           UVs                                                              (None)
// TArray<struct FVector>             Normals                                                          (None)
// TArray<struct FProcMeshTangent>    Tangents                                                         (None)

void UKismetProceduralMeshLibrary::CalculateTangentsForMesh(const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector2D>& UVs, const TArray<struct FVector>& Normals, const TArray<struct FProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CalculateTangentsForMesh");

	Params::UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Params Parms{};

	Parms.Vertices = Vertices;
	Parms.Triangles = Triangles;
	Parms.UVs = UVs;
	Parms.Normals = Normals;
	Parms.Tangents = Tangents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ProceduralMeshComponent.ProceduralMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UProceduralMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralMeshComponent");

	return Clss;
}


// ProceduralMeshComponent ProceduralMeshComponent.Default__ProceduralMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralMeshComponent* UProceduralMeshComponent::GetDefaultObj()
{
	static class UProceduralMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralMeshComponent*>(UProceduralMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (None)
// TArray<struct FVector>             Vertices                                                         (None)
// TArray<struct FVector>             Normals                                                          (None)
// TArray<struct FVector2D>           UV0                                                              (None)
// TArray<struct FVector2D>           UV1                                                              (None)
// TArray<struct FVector2D>           UV2                                                              (None)
// TArray<struct FVector2D>           UV3                                                              (None)
// TArray<struct FLinearColor>        VertexColors                                                     (None)
// TArray<struct FProcMeshTangent>    Tangents                                                         (None)
// bool                               bSRGBConversion                                                  (None)

void UProceduralMeshComponent::UpdateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UV0, const TArray<struct FVector2D>& UV1, const TArray<struct FVector2D>& UV2, const TArray<struct FVector2D>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool bSRGBConversion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "UpdateMeshSection_LinearColor");

	Params::UProceduralMeshComponent_UpdateMeshSection_LinearColor_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.Vertices = Vertices;
	Parms.Normals = Normals;
	Parms.UV0 = UV0;
	Parms.UV1 = UV1;
	Parms.UV2 = UV2;
	Parms.UV3 = UV3;
	Parms.VertexColors = VertexColors;
	Parms.Tangents = Tangents;
	Parms.bSRGBConversion = bSRGBConversion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (None)
// TArray<struct FVector>             Vertices                                                         (None)
// TArray<struct FVector>             Normals                                                          (None)
// TArray<struct FVector2D>           UV0                                                              (None)
// TArray<struct FColor>              VertexColors                                                     (None)
// TArray<struct FProcMeshTangent>    Tangents                                                         (None)

void UProceduralMeshComponent::UpdateMeshSection(int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UV0, const TArray<struct FColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "UpdateMeshSection");

	Params::UProceduralMeshComponent_UpdateMeshSection_Params Parms{};

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


// Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (None)
// bool                               bNewVisibility                                                   (None)

void UProceduralMeshComponent::SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "SetMeshSectionVisible");

	Params::UProceduralMeshComponent_SetMeshSectionVisible_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.bNewVisibility = bNewVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SectionIndex                                                     (None)
// bool                               ReturnValue                                                      (None)

void UProceduralMeshComponent::IsMeshSectionVisible(int32 SectionIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "IsMeshSectionVisible");

	Params::UProceduralMeshComponent_IsMeshSectionVisible_Params Parms{};

	Parms.SectionIndex = SectionIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UProceduralMeshComponent::GetNumSections(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "GetNumSections");

	Params::UProceduralMeshComponent_GetNumSections_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (None)
// TArray<struct FVector>             Vertices                                                         (None)
// TArray<int32>                      Triangles                                                        (None)
// TArray<struct FVector>             Normals                                                          (None)
// TArray<struct FVector2D>           UV0                                                              (None)
// TArray<struct FVector2D>           UV1                                                              (None)
// TArray<struct FVector2D>           UV2                                                              (None)
// TArray<struct FVector2D>           UV3                                                              (None)
// TArray<struct FLinearColor>        VertexColors                                                     (None)
// TArray<struct FProcMeshTangent>    Tangents                                                         (None)
// bool                               bCreateCollision                                                 (None)
// bool                               bSRGBConversion                                                  (None)

void UProceduralMeshComponent::CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UV0, const TArray<struct FVector2D>& UV1, const TArray<struct FVector2D>& UV2, const TArray<struct FVector2D>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision, bool bSRGBConversion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "CreateMeshSection_LinearColor");

	Params::UProceduralMeshComponent_CreateMeshSection_LinearColor_Params Parms{};

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
	Parms.bSRGBConversion = bSRGBConversion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (None)
// TArray<struct FVector>             Vertices                                                         (None)
// TArray<int32>                      Triangles                                                        (None)
// TArray<struct FVector>             Normals                                                          (None)
// TArray<struct FVector2D>           UV0                                                              (None)
// TArray<struct FColor>              VertexColors                                                     (None)
// TArray<struct FProcMeshTangent>    Tangents                                                         (None)
// bool                               bCreateCollision                                                 (None)

void UProceduralMeshComponent::CreateMeshSection(int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UV0, const TArray<struct FColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "CreateMeshSection");

	Params::UProceduralMeshComponent_CreateMeshSection_Params Parms{};

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


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (None)

void UProceduralMeshComponent::ClearMeshSection(int32 SectionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "ClearMeshSection");

	Params::UProceduralMeshComponent_ClearMeshSection_Params Parms{};

	Parms.SectionIndex = SectionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UProceduralMeshComponent::ClearCollisionConvexMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "ClearCollisionConvexMeshes");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UProceduralMeshComponent::ClearAllMeshSections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "ClearAllMeshSections");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             ConvexVerts                                                      (None)

void UProceduralMeshComponent::AddCollisionConvexMesh(const TArray<struct FVector>& ConvexVerts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "AddCollisionConvexMesh");

	Params::UProceduralMeshComponent_AddCollisionConvexMesh_Params Parms{};

	Parms.ConvexVerts = ConvexVerts;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


