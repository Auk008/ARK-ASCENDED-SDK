#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GeometryScriptingCore.GeometryScriptDebug
// (None)

class UClass* UGeometryScriptDebug::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptDebug");

	return Clss;
}


// GeometryScriptDebug GeometryScriptingCore.Default__GeometryScriptDebug
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptDebug* UGeometryScriptDebug::GetDefaultObj()
{
	static class UGeometryScriptDebug* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptDebug*>(UGeometryScriptDebug::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions
// (None)

class UClass* UGeometryScriptLibrary_CollisionFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_CollisionFunctions");

	return Clss;
}


// GeometryScriptLibrary_CollisionFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_CollisionFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_CollisionFunctions* UGeometryScriptLibrary_CollisionFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_CollisionFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_CollisionFunctions*>(UGeometryScriptLibrary_CollisionFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetStaticMeshCollisionFromMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                FromDynamicMesh                                                  (ZeroConstructor)
// class UStaticMesh*                 ToStaticMeshAsset                                                (ZeroConstructor)
// struct FGeometryScriptCollisionFromMeshOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_CollisionFunctions::SetStaticMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, const struct FGeometryScriptCollisionFromMeshOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_CollisionFunctions", "SetStaticMeshCollisionFromMesh");

	Params::UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromMesh_Params Parms{};

	Parms.FromDynamicMesh = FromDynamicMesh;
	Parms.ToStaticMeshAsset = ToStaticMeshAsset;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetStaticMeshCollisionFromComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 StaticMeshAsset                                                  (ZeroConstructor)
// class UPrimitiveComponent*         SourceComponent                                                  (ZeroConstructor)
// struct FGeometryScriptSetSimpleCollisionOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (None)

void UGeometryScriptLibrary_CollisionFunctions::SetStaticMeshCollisionFromComponent(class UStaticMesh* StaticMeshAsset, class UPrimitiveComponent* SourceComponent, const struct FGeometryScriptSetSimpleCollisionOptions& Options, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_CollisionFunctions", "SetStaticMeshCollisionFromComponent");

	Params::UGeometryScriptLibrary_CollisionFunctions_SetStaticMeshCollisionFromComponent_Params Parms{};

	Parms.StaticMeshAsset = StaticMeshAsset;
	Parms.SourceComponent = SourceComponent;
	Parms.Options = Options;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.SetDynamicMeshCollisionFromMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                FromDynamicMesh                                                  (ZeroConstructor)
// class UDynamicMeshComponent*       ToDynamicMeshComponent                                           (ZeroConstructor)
// struct FGeometryScriptCollisionFromMeshOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_CollisionFunctions::SetDynamicMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UDynamicMeshComponent* ToDynamicMeshComponent, const struct FGeometryScriptCollisionFromMeshOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_CollisionFunctions", "SetDynamicMeshCollisionFromMesh");

	Params::UGeometryScriptLibrary_CollisionFunctions_SetDynamicMeshCollisionFromMesh_Params Parms{};

	Parms.FromDynamicMesh = FromDynamicMesh;
	Parms.ToDynamicMeshComponent = ToDynamicMeshComponent;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions.ResetDynamicMeshCollision
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMeshComponent*       Component                                                        (ZeroConstructor)
// bool                               bEmitTransaction                                                 (None)
// class UGeometryScriptDebug*        Debug                                                            (None)

void UGeometryScriptLibrary_CollisionFunctions::ResetDynamicMeshCollision(class UDynamicMeshComponent* Component, bool bEmitTransaction, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_CollisionFunctions", "ResetDynamicMeshCollision");

	Params::UGeometryScriptLibrary_CollisionFunctions_ResetDynamicMeshCollision_Params Parms{};

	Parms.Component = Component;
	Parms.bEmitTransaction = bEmitTransaction;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions
// (None)

class UClass* UGeometryScriptLibrary_ContainmentFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_ContainmentFunctions");

	return Clss;
}


// GeometryScriptLibrary_ContainmentFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_ContainmentFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_ContainmentFunctions* UGeometryScriptLibrary_ContainmentFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_ContainmentFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_ContainmentFunctions*>(UGeometryScriptLibrary_ContainmentFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshSweptHull
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UDynamicMesh*                CopyToMesh                                                       (ZeroConstructor)
// class UDynamicMesh*                CopyToMeshOut                                                    (ZeroConstructor)
// struct FTransform                  ProjectionFrame                                                  (None)
// struct FGeometryScriptSweptHullOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshSweptHull(class UDynamicMesh* TargetMesh, class UDynamicMesh* CopyToMesh, class UDynamicMesh* CopyToMeshOut, const struct FTransform& ProjectionFrame, const struct FGeometryScriptSweptHullOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ContainmentFunctions", "ComputeMeshSweptHull");

	Params::UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshSweptHull_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.CopyToMesh = CopyToMesh;
	Parms.CopyToMeshOut = CopyToMeshOut;
	Parms.ProjectionFrame = ProjectionFrame;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexHull
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UDynamicMesh*                CopyToMesh                                                       (ZeroConstructor)
// class UDynamicMesh*                CopyToMeshOut                                                    (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FGeometryScriptConvexHullOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshConvexHull(class UDynamicMesh* TargetMesh, class UDynamicMesh* CopyToMesh, class UDynamicMesh* CopyToMeshOut, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptConvexHullOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ContainmentFunctions", "ComputeMeshConvexHull");

	Params::UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexHull_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.CopyToMesh = CopyToMesh;
	Parms.CopyToMeshOut = CopyToMeshOut;
	Parms.Selection = Selection;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions.ComputeMeshConvexDecomposition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UDynamicMesh*                CopyToMesh                                                       (ZeroConstructor)
// class UDynamicMesh*                CopyToMeshOut                                                    (ZeroConstructor)
// struct FGeometryScriptConvexDecompositionOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_ContainmentFunctions::ComputeMeshConvexDecomposition(class UDynamicMesh* TargetMesh, class UDynamicMesh* CopyToMesh, class UDynamicMesh* CopyToMeshOut, const struct FGeometryScriptConvexDecompositionOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ContainmentFunctions", "ComputeMeshConvexDecomposition");

	Params::UGeometryScriptLibrary_ContainmentFunctions_ComputeMeshConvexDecomposition_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.CopyToMesh = CopyToMesh;
	Parms.CopyToMeshOut = CopyToMeshOut;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions
// (None)

class UClass* UGeometryScriptLibrary_ListUtilityFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_ListUtilityFunctions");

	return Clss;
}


// GeometryScriptLibrary_ListUtilityFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_ListUtilityFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_ListUtilityFunctions* UGeometryScriptLibrary_ListUtilityFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_ListUtilityFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_ListUtilityFunctions*>(UGeometryScriptLibrary_ListUtilityFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetVectorListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (None)
// int32                              Index                                                            (None)
// struct FVector                     NewValue                                                         (None)
// bool                               bIsValidIndex                                                    (None)

void UGeometryScriptLibrary_ListUtilityFunctions::SetVectorListItem(const struct FGeometryScriptVectorList& VectorList, int32 Index, const struct FVector& NewValue, bool bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetVectorListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetVectorListItem_Params Parms{};

	Parms.VectorList = VectorList;
	Parms.Index = Index;
	Parms.NewValue = NewValue;
	Parms.bIsValidIndex = bIsValidIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetUVListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (None)
// int32                              Index                                                            (None)
// struct FVector2D                   NewUV                                                            (None)
// bool                               bIsValidIndex                                                    (None)

void UGeometryScriptLibrary_ListUtilityFunctions::SetUVListItem(const struct FGeometryScriptUVList& UVList, int32 Index, const struct FVector2D& NewUV, bool bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetUVListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetUVListItem_Params Parms{};

	Parms.UVList = UVList;
	Parms.Index = Index;
	Parms.NewUV = NewUV;
	Parms.bIsValidIndex = bIsValidIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetScalarListItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (None)
// int32                              Index                                                            (None)
// double                             NewValue                                                         (None)
// bool                               bIsValidIndex                                                    (None)

void UGeometryScriptLibrary_ListUtilityFunctions::SetScalarListItem(const struct FGeometryScriptScalarList& ScalarList, int32 Index, double NewValue, bool bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetScalarListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetScalarListItem_Params Parms{};

	Parms.ScalarList = ScalarList;
	Parms.Index = Index;
	Parms.NewValue = NewValue;
	Parms.bIsValidIndex = bIsValidIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetIndexListItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (None)
// int32                              Index                                                            (None)
// int32                              NewValue                                                         (None)
// bool                               bIsValidIndex                                                    (None)

void UGeometryScriptLibrary_ListUtilityFunctions::SetIndexListItem(const struct FGeometryScriptIndexList& IndexList, int32 Index, int32 NewValue, bool bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetIndexListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetIndexListItem_Params Parms{};

	Parms.IndexList = IndexList;
	Parms.Index = Index;
	Parms.NewValue = NewValue;
	Parms.bIsValidIndex = bIsValidIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.SetColorListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (None)
// int32                              Index                                                            (None)
// struct FLinearColor                NewColor                                                         (None)
// bool                               bIsValidIndex                                                    (None)

void UGeometryScriptLibrary_ListUtilityFunctions::SetColorListItem(const struct FGeometryScriptColorList& ColorList, int32 Index, const struct FLinearColor& NewColor, bool bIsValidIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "SetColorListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_SetColorListItem_Params Parms{};

	Parms.ColorList = ColorList;
	Parms.Index = Index;
	Parms.NewColor = NewColor;
	Parms.bIsValidIndex = bIsValidIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListLength(const struct FGeometryScriptVectorList& VectorList, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetVectorListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLength_Params Parms{};

	Parms.VectorList = VectorList;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListLastIndex(const struct FGeometryScriptVectorList& VectorList, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetVectorListLastIndex");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListLastIndex_Params Parms{};

	Parms.VectorList = VectorList;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetVectorListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (None)
// int32                              Index                                                            (None)
// bool                               bIsValidIndex                                                    (None)
// struct FVector                     ReturnValue                                                      (None)

void UGeometryScriptLibrary_ListUtilityFunctions::GetVectorListItem(const struct FGeometryScriptVectorList& VectorList, int32 Index, bool bIsValidIndex, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetVectorListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetVectorListItem_Params Parms{};

	Parms.VectorList = VectorList;
	Parms.Index = Index;
	Parms.bIsValidIndex = bIsValidIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_ListUtilityFunctions::GetUVListLength(const struct FGeometryScriptUVList& UVList, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetUVListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLength_Params Parms{};

	Parms.UVList = UVList;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_ListUtilityFunctions::GetUVListLastIndex(const struct FGeometryScriptUVList& UVList, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetUVListLastIndex");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetUVListLastIndex_Params Parms{};

	Parms.UVList = UVList;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetUVListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (None)
// int32                              Index                                                            (None)
// bool                               bIsValidIndex                                                    (None)
// struct FVector2D                   ReturnValue                                                      (None)

void UGeometryScriptLibrary_ListUtilityFunctions::GetUVListItem(const struct FGeometryScriptUVList& UVList, int32 Index, bool bIsValidIndex, const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetUVListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetUVListItem_Params Parms{};

	Parms.UVList = UVList;
	Parms.Index = Index;
	Parms.bIsValidIndex = bIsValidIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptTriangleList TriangleList                                                     (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListLength(const struct FGeometryScriptTriangleList& TriangleList, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetTriangleListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLength_Params Parms{};

	Parms.TriangleList = TriangleList;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListLastTriangle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptTriangleList TriangleList                                                     (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListLastTriangle(const struct FGeometryScriptTriangleList& TriangleList, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetTriangleListLastTriangle");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListLastTriangle_Params Parms{};

	Parms.TriangleList = TriangleList;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetTriangleListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptTriangleList TriangleList                                                     (None)
// int32                              Triangle                                                         (None)
// bool                               bIsValidTriangle                                                 (None)
// struct FIntVector                  ReturnValue                                                      (None)

void UGeometryScriptLibrary_ListUtilityFunctions::GetTriangleListItem(const struct FGeometryScriptTriangleList& TriangleList, int32 Triangle, bool bIsValidTriangle, const struct FIntVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetTriangleListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetTriangleListItem_Params Parms{};

	Parms.TriangleList = TriangleList;
	Parms.Triangle = Triangle;
	Parms.bIsValidTriangle = bIsValidTriangle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListLength(const struct FGeometryScriptScalarList& ScalarList, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetScalarListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLength_Params Parms{};

	Parms.ScalarList = ScalarList;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListLastIndex(const struct FGeometryScriptScalarList& ScalarList, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetScalarListLastIndex");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListLastIndex_Params Parms{};

	Parms.ScalarList = ScalarList;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetScalarListItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (None)
// int32                              Index                                                            (None)
// bool                               bIsValidIndex                                                    (None)
// double                             ReturnValue                                                      (None)

void UGeometryScriptLibrary_ListUtilityFunctions::GetScalarListItem(const struct FGeometryScriptScalarList& ScalarList, int32 Index, bool bIsValidIndex, double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetScalarListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetScalarListItem_Params Parms{};

	Parms.ScalarList = ScalarList;
	Parms.Index = Index;
	Parms.bIsValidIndex = bIsValidIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListLength(const struct FGeometryScriptIndexList& IndexList, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetIndexListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLength_Params Parms{};

	Parms.IndexList = IndexList;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListLastIndex(const struct FGeometryScriptIndexList& IndexList, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetIndexListLastIndex");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListLastIndex_Params Parms{};

	Parms.IndexList = IndexList;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetIndexListItem
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (None)
// int32                              Index                                                            (None)
// bool                               bIsValidIndex                                                    (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_ListUtilityFunctions::GetIndexListItem(const struct FGeometryScriptIndexList& IndexList, int32 Index, bool bIsValidIndex, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetIndexListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetIndexListItem_Params Parms{};

	Parms.IndexList = IndexList;
	Parms.Index = Index;
	Parms.bIsValidIndex = bIsValidIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_ListUtilityFunctions::GetColorListLength(const struct FGeometryScriptColorList& ColorList, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetColorListLength");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLength_Params Parms{};

	Parms.ColorList = ColorList;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_ListUtilityFunctions::GetColorListLastIndex(const struct FGeometryScriptColorList& ColorList, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetColorListLastIndex");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetColorListLastIndex_Params Parms{};

	Parms.ColorList = ColorList;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.GetColorListItem
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (None)
// int32                              Index                                                            (None)
// bool                               bIsValidIndex                                                    (None)
// struct FLinearColor                ReturnValue                                                      (None)

void UGeometryScriptLibrary_ListUtilityFunctions::GetColorListItem(const struct FGeometryScriptColorList& ColorList, int32 Index, bool bIsValidIndex, const struct FLinearColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "GetColorListItem");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_GetColorListItem_Params Parms{};

	Parms.ColorList = ColorList;
	Parms.Index = Index;
	Parms.bIsValidIndex = bIsValidIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (None)
// struct FGeometryScriptVectorList   VectorList                                                       (None)
// int32                              XChannelIndex                                                    (None)
// int32                              YChannelIndex                                                    (None)
// int32                              ZChannelIndex                                                    (None)

void UGeometryScriptLibrary_ListUtilityFunctions::ExtractColorListChannels(const struct FGeometryScriptColorList& ColorList, const struct FGeometryScriptVectorList& VectorList, int32 XChannelIndex, int32 YChannelIndex, int32 ZChannelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ExtractColorListChannels");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannels_Params Parms{};

	Parms.ColorList = ColorList;
	Parms.VectorList = VectorList;
	Parms.XChannelIndex = XChannelIndex;
	Parms.YChannelIndex = YChannelIndex;
	Parms.ZChannelIndex = ZChannelIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ExtractColorListChannel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (None)
// struct FGeometryScriptScalarList   ScalarList                                                       (None)
// int32                              ChannelIndex                                                     (None)

void UGeometryScriptLibrary_ListUtilityFunctions::ExtractColorListChannel(const struct FGeometryScriptColorList& ColorList, const struct FGeometryScriptScalarList& ScalarList, int32 ChannelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ExtractColorListChannel");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ExtractColorListChannel_Params Parms{};

	Parms.ColorList = ColorList;
	Parms.ScalarList = ScalarList;
	Parms.ChannelIndex = ChannelIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateVectorList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (None)
// struct FGeometryScriptVectorList   DuplicateList                                                    (None)

void UGeometryScriptLibrary_ListUtilityFunctions::DuplicateVectorList(const struct FGeometryScriptVectorList& VectorList, const struct FGeometryScriptVectorList& DuplicateList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "DuplicateVectorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_DuplicateVectorList_Params Parms{};

	Parms.VectorList = VectorList;
	Parms.DuplicateList = DuplicateList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateUVList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (None)
// struct FGeometryScriptUVList       DuplicateList                                                    (None)

void UGeometryScriptLibrary_ListUtilityFunctions::DuplicateUVList(const struct FGeometryScriptUVList& UVList, const struct FGeometryScriptUVList& DuplicateList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "DuplicateUVList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_DuplicateUVList_Params Parms{};

	Parms.UVList = UVList;
	Parms.DuplicateList = DuplicateList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateScalarList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (None)
// struct FGeometryScriptScalarList   DuplicateList                                                    (None)

void UGeometryScriptLibrary_ListUtilityFunctions::DuplicateScalarList(const struct FGeometryScriptScalarList& ScalarList, const struct FGeometryScriptScalarList& DuplicateList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "DuplicateScalarList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_DuplicateScalarList_Params Parms{};

	Parms.ScalarList = ScalarList;
	Parms.DuplicateList = DuplicateList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateIndexList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (None)
// struct FGeometryScriptIndexList    DuplicateList                                                    (None)

void UGeometryScriptLibrary_ListUtilityFunctions::DuplicateIndexList(const struct FGeometryScriptIndexList& IndexList, const struct FGeometryScriptIndexList& DuplicateList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "DuplicateIndexList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_DuplicateIndexList_Params Parms{};

	Parms.IndexList = IndexList;
	Parms.DuplicateList = DuplicateList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.DuplicateColorList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (None)
// struct FGeometryScriptColorList    DuplicateList                                                    (None)

void UGeometryScriptLibrary_ListUtilityFunctions::DuplicateColorList(const struct FGeometryScriptColorList& ColorList, const struct FGeometryScriptColorList& DuplicateList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "DuplicateColorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_DuplicateColorList_Params Parms{};

	Parms.ColorList = ColorList;
	Parms.DuplicateList = DuplicateList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertVectorListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (None)
// TArray<struct FVector>             VectorArray                                                      (None)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertVectorListToArray(const struct FGeometryScriptVectorList& VectorList, const TArray<struct FVector>& VectorArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertVectorListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertVectorListToArray_Params Parms{};

	Parms.VectorList = VectorList;
	Parms.VectorArray = VectorArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertUVListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (None)
// TArray<struct FVector2D>           UVArray                                                          (None)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertUVListToArray(const struct FGeometryScriptUVList& UVList, const TArray<struct FVector2D>& UVArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertUVListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertUVListToArray_Params Parms{};

	Parms.UVList = UVList;
	Parms.UVArray = UVArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertTriangleListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptTriangleList TriangleList                                                     (None)
// TArray<struct FIntVector>          TriangleArray                                                    (None)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertTriangleListToArray(const struct FGeometryScriptTriangleList& TriangleList, const TArray<struct FIntVector>& TriangleArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertTriangleListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertTriangleListToArray_Params Parms{};

	Parms.TriangleList = TriangleList;
	Parms.TriangleArray = TriangleArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertScalarListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (None)
// TArray<double>                     ScalarArray                                                      (None)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertScalarListToArray(const struct FGeometryScriptScalarList& ScalarList, const TArray<double>& ScalarArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertScalarListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertScalarListToArray_Params Parms{};

	Parms.ScalarList = ScalarList;
	Parms.ScalarArray = ScalarArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertIndexListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (None)
// TArray<int32>                      IndexArray                                                       (None)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertIndexListToArray(const struct FGeometryScriptIndexList& IndexList, const TArray<int32>& IndexArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertIndexListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertIndexListToArray_Params Parms{};

	Parms.IndexList = IndexList;
	Parms.IndexArray = IndexArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertColorListToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (None)
// TArray<struct FLinearColor>        ColorArray                                                       (None)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertColorListToArray(const struct FGeometryScriptColorList& ColorList, const TArray<struct FLinearColor>& ColorArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertColorListToArray");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertColorListToArray_Params Parms{};

	Parms.ColorList = ColorList;
	Parms.ColorArray = ColorArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToVectorList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             VectorArray                                                      (None)
// struct FGeometryScriptVectorList   VectorList                                                       (None)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToVectorList(const TArray<struct FVector>& VectorArray, const struct FGeometryScriptVectorList& VectorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToVectorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToVectorList_Params Parms{};

	Parms.VectorArray = VectorArray;
	Parms.VectorList = VectorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToUVList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector2D>           UVArray                                                          (None)
// struct FGeometryScriptUVList       UVList                                                           (None)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToUVList(const TArray<struct FVector2D>& UVArray, const struct FGeometryScriptUVList& UVList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToUVList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToUVList_Params Parms{};

	Parms.UVArray = UVArray;
	Parms.UVList = UVList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToTriangleList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FIntVector>          TriangleArray                                                    (None)
// struct FGeometryScriptTriangleList TriangleList                                                     (None)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToTriangleList(const TArray<struct FIntVector>& TriangleArray, const struct FGeometryScriptTriangleList& TriangleList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToTriangleList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToTriangleList_Params Parms{};

	Parms.TriangleArray = TriangleArray;
	Parms.TriangleList = TriangleList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToScalarList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<double>                     VectorArray                                                      (None)
// struct FGeometryScriptScalarList   ScalarList                                                       (None)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToScalarList(const TArray<double>& VectorArray, const struct FGeometryScriptScalarList& ScalarList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToScalarList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToScalarList_Params Parms{};

	Parms.VectorArray = VectorArray;
	Parms.ScalarList = ScalarList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToIndexList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      IndexArray                                                       (None)
// struct FGeometryScriptIndexList    IndexList                                                        (None)
// enum class EGeometryScriptIndexTypeIndexType                                                        (None)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToIndexList(const TArray<int32>& IndexArray, const struct FGeometryScriptIndexList& IndexList, enum class EGeometryScriptIndexType IndexType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToIndexList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToIndexList_Params Parms{};

	Parms.IndexArray = IndexArray;
	Parms.IndexList = IndexList;
	Parms.IndexType = IndexType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ConvertArrayToColorList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FLinearColor>        ColorArray                                                       (None)
// struct FGeometryScriptColorList    ColorList                                                        (None)

void UGeometryScriptLibrary_ListUtilityFunctions::ConvertArrayToColorList(const TArray<struct FLinearColor>& ColorArray, const struct FGeometryScriptColorList& ColorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ConvertArrayToColorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ConvertArrayToColorList_Params Parms{};

	Parms.ColorArray = ColorArray;
	Parms.ColorList = ColorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearVectorList
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (None)
// struct FVector                     ClearValue                                                       (None)

void UGeometryScriptLibrary_ListUtilityFunctions::ClearVectorList(const struct FGeometryScriptVectorList& VectorList, const struct FVector& ClearValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearVectorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearVectorList_Params Parms{};

	Parms.VectorList = VectorList;
	Parms.ClearValue = ClearValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearUVList
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (None)
// struct FVector2D                   ClearUV                                                          (None)

void UGeometryScriptLibrary_ListUtilityFunctions::ClearUVList(const struct FGeometryScriptUVList& UVList, const struct FVector2D& ClearUV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearUVList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearUVList_Params Parms{};

	Parms.UVList = UVList;
	Parms.ClearUV = ClearUV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearScalarList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (None)
// double                             ClearValue                                                       (None)

void UGeometryScriptLibrary_ListUtilityFunctions::ClearScalarList(const struct FGeometryScriptScalarList& ScalarList, double ClearValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearScalarList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearScalarList_Params Parms{};

	Parms.ScalarList = ScalarList;
	Parms.ClearValue = ClearValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearIndexList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptIndexList    IndexList                                                        (None)
// int32                              ClearValue                                                       (None)

void UGeometryScriptLibrary_ListUtilityFunctions::ClearIndexList(const struct FGeometryScriptIndexList& IndexList, int32 ClearValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearIndexList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearIndexList_Params Parms{};

	Parms.IndexList = IndexList;
	Parms.ClearValue = ClearValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions.ClearColorList
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptColorList    ColorList                                                        (None)
// struct FLinearColor                ClearColor                                                       (None)

void UGeometryScriptLibrary_ListUtilityFunctions::ClearColorList(const struct FGeometryScriptColorList& ColorList, const struct FLinearColor& ClearColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_ListUtilityFunctions", "ClearColorList");

	Params::UGeometryScriptLibrary_ListUtilityFunctions_ClearColorList_Params Parms{};

	Parms.ColorList = ColorList;
	Parms.ClearColor = ClearColor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions
// (None)

class UClass* UGeometryScriptLibrary_StaticMeshFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_StaticMeshFunctions");

	return Clss;
}


// GeometryScriptLibrary_StaticMeshFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_StaticMeshFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_StaticMeshFunctions* UGeometryScriptLibrary_StaticMeshFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_StaticMeshFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_StaticMeshFunctions*>(UGeometryScriptLibrary_StaticMeshFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.GetSectionMaterialListFromStaticMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 FromStaticMeshAsset                                              (ZeroConstructor)
// struct FGeometryScriptMeshReadLOD  RequestedLOD                                                     (None)
// TArray<class UMaterialInterface*>  MaterialList                                                     (ZeroConstructor)
// TArray<int32>                      MaterialIndex                                                    (None)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (None)

void UGeometryScriptLibrary_StaticMeshFunctions::GetSectionMaterialListFromStaticMesh(class UStaticMesh* FromStaticMeshAsset, const struct FGeometryScriptMeshReadLOD& RequestedLOD, const TArray<class UMaterialInterface*>& MaterialList, const TArray<int32>& MaterialIndex, enum class EGeometryScriptOutcomePins Outcome, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "GetSectionMaterialListFromStaticMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_GetSectionMaterialListFromStaticMesh_Params Parms{};

	Parms.FromStaticMeshAsset = FromStaticMeshAsset;
	Parms.RequestedLOD = RequestedLOD;
	Parms.MaterialList = MaterialList;
	Parms.MaterialIndex = MaterialIndex;
	Parms.Outcome = Outcome;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToStaticMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                FromDynamicMesh                                                  (ZeroConstructor)
// class UStaticMesh*                 ToStaticMeshAsset                                                (ZeroConstructor)
// struct FGeometryScriptCopyMeshToAssetOptionsOptions                                                          (ZeroConstructor)
// struct FGeometryScriptMeshWriteLOD TargetLod                                                        (None)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshToStaticMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, const struct FGeometryScriptCopyMeshToAssetOptions& Options, const struct FGeometryScriptMeshWriteLOD& TargetLod, enum class EGeometryScriptOutcomePins Outcome, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "CopyMeshToStaticMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToStaticMesh_Params Parms{};

	Parms.FromDynamicMesh = FromDynamicMesh;
	Parms.ToStaticMeshAsset = ToStaticMeshAsset;
	Parms.Options = Options;
	Parms.TargetLod = TargetLod;
	Parms.Outcome = Outcome;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshToSkeletalMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                FromDynamicMesh                                                  (ZeroConstructor)
// class USkeletalMesh*               ToSkeletalMeshAsset                                              (ZeroConstructor)
// struct FGeometryScriptCopyMeshToAssetOptionsOptions                                                          (ZeroConstructor)
// struct FGeometryScriptMeshWriteLOD TargetLod                                                        (None)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshToSkeletalMesh(class UDynamicMesh* FromDynamicMesh, class USkeletalMesh* ToSkeletalMeshAsset, const struct FGeometryScriptCopyMeshToAssetOptions& Options, const struct FGeometryScriptMeshWriteLOD& TargetLod, enum class EGeometryScriptOutcomePins Outcome, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "CopyMeshToSkeletalMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshToSkeletalMesh_Params Parms{};

	Parms.FromDynamicMesh = FromDynamicMesh;
	Parms.ToSkeletalMeshAsset = ToSkeletalMeshAsset;
	Parms.Options = Options;
	Parms.TargetLod = TargetLod;
	Parms.Outcome = Outcome;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromStaticMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 FromStaticMeshAsset                                              (ZeroConstructor)
// class UDynamicMesh*                ToDynamicMesh                                                    (ZeroConstructor)
// struct FGeometryScriptCopyMeshFromAssetOptionsAssetOptions                                                     (None)
// struct FGeometryScriptMeshReadLOD  RequestedLOD                                                     (None)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshFromStaticMesh(class UStaticMesh* FromStaticMeshAsset, class UDynamicMesh* ToDynamicMesh, const struct FGeometryScriptCopyMeshFromAssetOptions& AssetOptions, const struct FGeometryScriptMeshReadLOD& RequestedLOD, enum class EGeometryScriptOutcomePins Outcome, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "CopyMeshFromStaticMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromStaticMesh_Params Parms{};

	Parms.FromStaticMeshAsset = FromStaticMeshAsset;
	Parms.ToDynamicMesh = ToDynamicMesh;
	Parms.AssetOptions = AssetOptions;
	Parms.RequestedLOD = RequestedLOD;
	Parms.Outcome = Outcome;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions.CopyMeshFromSkeletalMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USkeletalMesh*               FromSkeletalMeshAsset                                            (ZeroConstructor)
// class UDynamicMesh*                ToDynamicMesh                                                    (ZeroConstructor)
// struct FGeometryScriptCopyMeshFromAssetOptionsAssetOptions                                                     (None)
// struct FGeometryScriptMeshReadLOD  RequestedLOD                                                     (None)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshFromSkeletalMesh(class USkeletalMesh* FromSkeletalMeshAsset, class UDynamicMesh* ToDynamicMesh, const struct FGeometryScriptCopyMeshFromAssetOptions& AssetOptions, const struct FGeometryScriptMeshReadLOD& RequestedLOD, enum class EGeometryScriptOutcomePins Outcome, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_StaticMeshFunctions", "CopyMeshFromSkeletalMesh");

	Params::UGeometryScriptLibrary_StaticMeshFunctions_CopyMeshFromSkeletalMesh_Params Parms{};

	Parms.FromSkeletalMeshAsset = FromSkeletalMeshAsset;
	Parms.ToDynamicMesh = ToDynamicMesh;
	Parms.AssetOptions = AssetOptions;
	Parms.RequestedLOD = RequestedLOD;
	Parms.Outcome = Outcome;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshBakeFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshBakeFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshBakeFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshBakeFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshBakeFunctions* UGeometryScriptLibrary_MeshBakeFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshBakeFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshBakeFunctions*>(UGeometryScriptLibrary_MeshBakeFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeVertexColor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeVertexColor(const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeVertexColor");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeVertexColor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTexture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*                  SourceTexture                                                    (None)
// int32                              SourceUVLayer                                                    (None)
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeTexture(class UTexture2D* SourceTexture, int32 SourceUVLayer, const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeTexture");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTexture_Params Parms{};

	Parms.SourceTexture = SourceTexture;
	Parms.SourceUVLayer = SourceUVLayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeTangentNormal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeTangentNormal(const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeTangentNormal");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeTangentNormal_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypePosition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypePosition(const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypePosition");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypePosition_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeObjectNormal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeObjectNormal(const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeObjectNormal");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeObjectNormal_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMultiTexture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UTexture2D*>          MaterialIDSourceTextures                                         (None)
// int32                              SourceUVLayer                                                    (None)
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeMultiTexture(const TArray<class UTexture2D*>& MaterialIDSourceTextures, int32 SourceUVLayer, const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeMultiTexture");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMultiTexture_Params Parms{};

	Parms.MaterialIDSourceTextures = MaterialIDSourceTextures;
	Parms.SourceUVLayer = SourceUVLayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeMaterialID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeMaterialID(const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeMaterialID");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeMaterialID_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeFaceNormal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeFaceNormal(const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeFaceNormal");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeFaceNormal_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeCurvature
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EGeometryScriptBakeCurvatureTypeModeCurvatureType                                                    (None)
// enum class EGeometryScriptBakeCurvatureColorModeColorMapping                                                     (None)
// float                              ColorRangeMultiplier                                             (None)
// float                              MinRangeMultiplier                                               (None)
// enum class EGeometryScriptBakeCurvatureClampModeClamping                                                         (None)
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeCurvature(enum class EGeometryScriptBakeCurvatureTypeMode CurvatureType, enum class EGeometryScriptBakeCurvatureColorMode ColorMapping, float ColorRangeMultiplier, float MinRangeMultiplier, enum class EGeometryScriptBakeCurvatureClampMode Clamping, const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeCurvature");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeCurvature_Params Parms{};

	Parms.CurvatureType = CurvatureType;
	Parms.ColorMapping = ColorMapping;
	Parms.ColorRangeMultiplier = ColorRangeMultiplier;
	Parms.MinRangeMultiplier = MinRangeMultiplier;
	Parms.Clamping = Clamping;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeBentNormal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              OcclusionRays                                                    (None)
// float                              MaxDistance                                                      (None)
// float                              SpreadAngle                                                      (None)
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeBentNormal(int32 OcclusionRays, float MaxDistance, float SpreadAngle, const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeBentNormal");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeBentNormal_Params Parms{};

	Parms.OcclusionRays = OcclusionRays;
	Parms.MaxDistance = MaxDistance;
	Parms.SpreadAngle = SpreadAngle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.MakeBakeTypeAmbientOcclusion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              OcclusionRays                                                    (None)
// float                              MaxDistance                                                      (None)
// float                              SpreadAngle                                                      (None)
// float                              BiasAngle                                                        (None)
// struct FGeometryScriptBakeTypeOptionsReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBakeFunctions::MakeBakeTypeAmbientOcclusion(int32 OcclusionRays, float MaxDistance, float SpreadAngle, float BiasAngle, const struct FGeometryScriptBakeTypeOptions& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "MakeBakeTypeAmbientOcclusion");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_MakeBakeTypeAmbientOcclusion_Params Parms{};

	Parms.OcclusionRays = OcclusionRays;
	Parms.MaxDistance = MaxDistance;
	Parms.SpreadAngle = SpreadAngle;
	Parms.BiasAngle = BiasAngle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeVertex
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FTransform                  TargetTransform                                                  (None)
// struct FGeometryScriptBakeTargetMeshOptionsTargetOptions                                                    (None)
// class UDynamicMesh*                SourceMesh                                                       (ZeroConstructor)
// struct FTransform                  SourceTransform                                                  (None)
// struct FGeometryScriptBakeSourceMeshOptionsSourceOptions                                                    (ZeroConstructor)
// struct FGeometryScriptBakeOutputTypeBakeTypes                                                        (None)
// struct FGeometryScriptBakeVertexOptionsBakeOptions                                                      (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBakeFunctions::BakeVertex(class UDynamicMesh* TargetMesh, const struct FTransform& TargetTransform, const struct FGeometryScriptBakeTargetMeshOptions& TargetOptions, class UDynamicMesh* SourceMesh, const struct FTransform& SourceTransform, const struct FGeometryScriptBakeSourceMeshOptions& SourceOptions, const struct FGeometryScriptBakeOutputType& BakeTypes, const struct FGeometryScriptBakeVertexOptions& BakeOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "BakeVertex");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_BakeVertex_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TargetTransform = TargetTransform;
	Parms.TargetOptions = TargetOptions;
	Parms.SourceMesh = SourceMesh;
	Parms.SourceTransform = SourceTransform;
	Parms.SourceOptions = SourceOptions;
	Parms.BakeTypes = BakeTypes;
	Parms.BakeOptions = BakeOptions;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTextureFromRenderCaptures
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FTransform                  TargetLocalToWorld                                               (None)
// struct FGeometryScriptBakeTargetMeshOptionsTargetOptions                                                    (None)
// TArray<class AActor*>              SourceActors                                                     (ZeroConstructor)
// struct FGeometryScriptBakeRenderCaptureOptionsBakeOptions                                                      (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// struct FGeometryScriptRenderCaptureTexturesReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBakeFunctions::BakeTextureFromRenderCaptures(class UDynamicMesh* TargetMesh, const struct FTransform& TargetLocalToWorld, const struct FGeometryScriptBakeTargetMeshOptions& TargetOptions, const TArray<class AActor*>& SourceActors, const struct FGeometryScriptBakeRenderCaptureOptions& BakeOptions, class UGeometryScriptDebug* Debug, const struct FGeometryScriptRenderCaptureTextures& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "BakeTextureFromRenderCaptures");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_BakeTextureFromRenderCaptures_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TargetLocalToWorld = TargetLocalToWorld;
	Parms.TargetOptions = TargetOptions;
	Parms.SourceActors = SourceActors;
	Parms.BakeOptions = BakeOptions;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions.BakeTexture
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FTransform                  TargetTransform                                                  (None)
// struct FGeometryScriptBakeTargetMeshOptionsTargetOptions                                                    (None)
// class UDynamicMesh*                SourceMesh                                                       (ZeroConstructor)
// struct FTransform                  SourceTransform                                                  (None)
// struct FGeometryScriptBakeSourceMeshOptionsSourceOptions                                                    (ZeroConstructor)
// TArray<struct FGeometryScriptBakeTypeOptions>BakeTypes                                                        (None)
// struct FGeometryScriptBakeTextureOptionsBakeOptions                                                      (ZeroConstructor)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// TArray<class UTexture2D*>          ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBakeFunctions::BakeTexture(class UDynamicMesh* TargetMesh, const struct FTransform& TargetTransform, const struct FGeometryScriptBakeTargetMeshOptions& TargetOptions, class UDynamicMesh* SourceMesh, const struct FTransform& SourceTransform, const struct FGeometryScriptBakeSourceMeshOptions& SourceOptions, const TArray<struct FGeometryScriptBakeTypeOptions>& BakeTypes, const struct FGeometryScriptBakeTextureOptions& BakeOptions, class UGeometryScriptDebug* Debug, const TArray<class UTexture2D*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBakeFunctions", "BakeTexture");

	Params::UGeometryScriptLibrary_MeshBakeFunctions_BakeTexture_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TargetTransform = TargetTransform;
	Parms.TargetOptions = TargetOptions;
	Parms.SourceMesh = SourceMesh;
	Parms.SourceTransform = SourceTransform;
	Parms.SourceOptions = SourceOptions;
	Parms.BakeTypes = BakeTypes;
	Parms.BakeOptions = BakeOptions;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshBasicEditFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshBasicEditFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshBasicEditFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshBasicEditFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshBasicEditFunctions* UGeometryScriptLibrary_MeshBasicEditFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshBasicEditFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshBasicEditFunctions*>(UGeometryScriptLibrary_MeshBasicEditFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetVertexPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              VertexID                                                         (None)
// struct FVector                     NewPosition                                                      (None)
// bool                               bIsValidVertex                                                   (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBasicEditFunctions::SetVertexPosition(class UDynamicMesh* TargetMesh, int32 VertexID, const struct FVector& NewPosition, bool bIsValidVertex, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "SetVertexPosition");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_SetVertexPosition_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexID = VertexID;
	Parms.NewPosition = NewPosition;
	Parms.bIsValidVertex = bIsValidVertex;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.SetAllMeshVertexPositions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptVectorList   PositionList                                                     (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBasicEditFunctions::SetAllMeshVertexPositions(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& PositionList, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "SetAllMeshVertexPositions");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_SetAllMeshVertexPositions_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PositionList = PositionList;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DiscardMeshAttributes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// bool                               bDeferChangeNotifications                                        (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBasicEditFunctions::DiscardMeshAttributes(class UDynamicMesh* TargetMesh, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DiscardMeshAttributes");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DiscardMeshAttributes_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVerticesFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptIndexList    VertexList                                                       (None)
// int32                              NumDeleted                                                       (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteVerticesFromMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& VertexList, int32 NumDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteVerticesFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVerticesFromMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexList = VertexList;
	Parms.NumDeleted = NumDeleted;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteVertexFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              VertexID                                                         (None)
// bool                               bWasVertexDeleted                                                (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteVertexFromMesh(class UDynamicMesh* TargetMesh, int32 VertexID, bool bWasVertexDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteVertexFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteVertexFromMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexID = VertexID;
	Parms.bWasVertexDeleted = bWasVertexDeleted;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTrianglesFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptIndexList    TriangleList                                                     (None)
// int32                              NumDeleted                                                       (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteTrianglesFromMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleList, int32 NumDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteTrianglesFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTrianglesFromMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleList = TriangleList;
	Parms.NumDeleted = NumDeleted;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteTriangleFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              TriangleID                                                       (None)
// bool                               bWasTriangleDeleted                                              (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteTriangleFromMesh(class UDynamicMesh* TargetMesh, int32 TriangleID, bool bWasTriangleDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteTriangleFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteTriangleFromMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.bWasTriangleDeleted = bWasTriangleDeleted;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.DeleteSelectedTrianglesFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// int32                              NumDeleted                                                       (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBasicEditFunctions::DeleteSelectedTrianglesFromMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, int32 NumDeleted, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "DeleteSelectedTrianglesFromMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_DeleteSelectedTrianglesFromMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.NumDeleted = NumDeleted;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshTransformed
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UDynamicMesh*                AppendMesh                                                       (ZeroConstructor)
// TArray<struct FTransform>          AppendTransforms                                                 (None)
// struct FTransform                  ConstantTransform                                                (None)
// bool                               bConstantTransformIsRelative                                     (None)
// bool                               bDeferChangeNotifications                                        (None)
// struct FGeometryScriptAppendMeshOptionsAppendOptions                                                    (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshTransformed(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, const TArray<struct FTransform>& AppendTransforms, const struct FTransform& ConstantTransform, bool bConstantTransformIsRelative, bool bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AppendMeshTransformed");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshTransformed_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.AppendMesh = AppendMesh;
	Parms.AppendTransforms = AppendTransforms;
	Parms.ConstantTransform = ConstantTransform;
	Parms.bConstantTransformIsRelative = bConstantTransformIsRelative;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.AppendOptions = AppendOptions;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMeshRepeated
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UDynamicMesh*                AppendMesh                                                       (ZeroConstructor)
// struct FTransform                  AppendTransform                                                  (None)
// int32                              RepeatCount                                                      (None)
// bool                               bApplyTransformToFirstInstance                                   (None)
// bool                               bDeferChangeNotifications                                        (None)
// struct FGeometryScriptAppendMeshOptionsAppendOptions                                                    (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMeshRepeated(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, const struct FTransform& AppendTransform, int32 RepeatCount, bool bApplyTransformToFirstInstance, bool bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AppendMeshRepeated");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMeshRepeated_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.AppendMesh = AppendMesh;
	Parms.AppendTransform = AppendTransform;
	Parms.RepeatCount = RepeatCount;
	Parms.bApplyTransformToFirstInstance = bApplyTransformToFirstInstance;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.AppendOptions = AppendOptions;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UDynamicMesh*                AppendMesh                                                       (ZeroConstructor)
// struct FTransform                  AppendTransform                                                  (None)
// bool                               bDeferChangeNotifications                                        (None)
// struct FGeometryScriptAppendMeshOptionsAppendOptions                                                    (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBasicEditFunctions::AppendMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, const struct FTransform& AppendTransform, bool bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AppendMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AppendMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.AppendMesh = AppendMesh;
	Parms.AppendTransform = AppendTransform;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.AppendOptions = AppendOptions;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AppendBuffersToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptSimpleMeshBuffersBuffers                                                          (None)
// struct FGeometryScriptIndexList    NewTriangleIndicesList                                           (None)
// int32                              MaterialID                                                       (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBasicEditFunctions::AppendBuffersToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptSimpleMeshBuffers& Buffers, const struct FGeometryScriptIndexList& NewTriangleIndicesList, int32 MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AppendBuffersToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AppendBuffersToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Buffers = Buffers;
	Parms.NewTriangleIndicesList = NewTriangleIndicesList;
	Parms.MaterialID = MaterialID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVerticesToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptVectorList   NewPositionsList                                                 (None)
// struct FGeometryScriptIndexList    NewIndicesList                                                   (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBasicEditFunctions::AddVerticesToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& NewPositionsList, const struct FGeometryScriptIndexList& NewIndicesList, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AddVerticesToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AddVerticesToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.NewPositionsList = NewPositionsList;
	Parms.NewIndicesList = NewIndicesList;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddVertexToMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FVector                     NewPosition                                                      (None)
// int32                              NewVertexIndex                                                   (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBasicEditFunctions::AddVertexToMesh(class UDynamicMesh* TargetMesh, const struct FVector& NewPosition, int32 NewVertexIndex, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AddVertexToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AddVertexToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.NewPosition = NewPosition;
	Parms.NewVertexIndex = NewVertexIndex;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTriangleToMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FIntVector                  NewTriangle                                                      (None)
// int32                              NewTriangleIndex                                                 (None)
// int32                              NewTriangleGroupID                                               (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBasicEditFunctions::AddTriangleToMesh(class UDynamicMesh* TargetMesh, const struct FIntVector& NewTriangle, int32 NewTriangleIndex, int32 NewTriangleGroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AddTriangleToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AddTriangleToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.NewTriangle = NewTriangle;
	Parms.NewTriangleIndex = NewTriangleIndex;
	Parms.NewTriangleGroupID = NewTriangleGroupID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions.AddTrianglesToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptTriangleList NewTrianglesList                                                 (None)
// struct FGeometryScriptIndexList    NewIndicesList                                                   (None)
// int32                              NewTriangleGroupID                                               (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBasicEditFunctions::AddTrianglesToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptTriangleList& NewTrianglesList, const struct FGeometryScriptIndexList& NewIndicesList, int32 NewTriangleGroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBasicEditFunctions", "AddTrianglesToMesh");

	Params::UGeometryScriptLibrary_MeshBasicEditFunctions_AddTrianglesToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.NewTrianglesList = NewTrianglesList;
	Parms.NewIndicesList = NewIndicesList;
	Parms.NewTriangleGroupID = NewTriangleGroupID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshBoneWeightFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshBoneWeightFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshBoneWeightFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshBoneWeightFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshBoneWeightFunctions* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshBoneWeightFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshBoneWeightFunctions*>(UGeometryScriptLibrary_MeshBoneWeightFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetVertexBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              VertexID                                                         (None)
// TArray<struct FGeometryScriptBoneWeight>BoneWeights                                                      (None)
// bool                               bIsValidVertexID                                                 (None)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBoneWeightFunctions::SetVertexBoneWeights(class UDynamicMesh* TargetMesh, int32 VertexID, const TArray<struct FGeometryScriptBoneWeight>& BoneWeights, bool bIsValidVertexID, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "SetVertexBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_SetVertexBoneWeights_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexID = VertexID;
	Parms.BoneWeights = BoneWeights;
	Parms.bIsValidVertexID = bIsValidVertexID;
	Parms.Profile = Profile;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.SetAllVertexBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// TArray<struct FGeometryScriptBoneWeight>BoneWeights                                                      (None)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBoneWeightFunctions::SetAllVertexBoneWeights(class UDynamicMesh* TargetMesh, const TArray<struct FGeometryScriptBoneWeight>& BoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "SetAllVertexBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_SetAllVertexBoneWeights_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.BoneWeights = BoneWeights;
	Parms.Profile = Profile;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshHasBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// bool                               bHasBoneWeights                                                  (None)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshHasBoneWeights(class UDynamicMesh* TargetMesh, bool bHasBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "MeshHasBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshHasBoneWeights_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bHasBoneWeights = bHasBoneWeights;
	Parms.Profile = Profile;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.MeshCreateBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// bool                               bProfileExisted                                                  (None)
// bool                               bReplaceExistingProfile                                          (None)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshCreateBoneWeights(class UDynamicMesh* TargetMesh, bool bProfileExisted, bool bReplaceExistingProfile, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "MeshCreateBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_MeshCreateBoneWeights_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bProfileExisted = bProfileExisted;
	Parms.bReplaceExistingProfile = bReplaceExistingProfile;
	Parms.Profile = Profile;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetVertexBoneWeights
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              VertexID                                                         (None)
// TArray<struct FGeometryScriptBoneWeight>BoneWeights                                                      (None)
// bool                               bHasValidBoneWeights                                             (None)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBoneWeightFunctions::GetVertexBoneWeights(class UDynamicMesh* TargetMesh, int32 VertexID, const TArray<struct FGeometryScriptBoneWeight>& BoneWeights, bool bHasValidBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "GetVertexBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_GetVertexBoneWeights_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexID = VertexID;
	Parms.BoneWeights = BoneWeights;
	Parms.bHasValidBoneWeights = bHasValidBoneWeights;
	Parms.Profile = Profile;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetMaxBoneWeightIndex
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// bool                               bHasBoneWeights                                                  (None)
// int32                              MaxBoneIndex                                                     (None)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBoneWeightFunctions::GetMaxBoneWeightIndex(class UDynamicMesh* TargetMesh, bool bHasBoneWeights, int32 MaxBoneIndex, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "GetMaxBoneWeightIndex");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_GetMaxBoneWeightIndex_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bHasBoneWeights = bHasBoneWeights;
	Parms.MaxBoneIndex = MaxBoneIndex;
	Parms.Profile = Profile;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.GetLargestVertexBoneWeight
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              VertexID                                                         (None)
// struct FGeometryScriptBoneWeight   BoneWeight                                                       (None)
// bool                               bHasValidBoneWeights                                             (None)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBoneWeightFunctions::GetLargestVertexBoneWeight(class UDynamicMesh* TargetMesh, int32 VertexID, const struct FGeometryScriptBoneWeight& BoneWeight, bool bHasValidBoneWeights, const struct FGeometryScriptBoneWeightProfile& Profile, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "GetLargestVertexBoneWeight");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_GetLargestVertexBoneWeight_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexID = VertexID;
	Parms.BoneWeight = BoneWeight;
	Parms.bHasValidBoneWeights = bHasValidBoneWeights;
	Parms.Profile = Profile;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions.ComputeSmoothBoneWeights
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class USkeleton*                   Skeleton                                                         (ZeroConstructor)
// struct FGeometryScriptSmoothBoneWeightsOptionsOptions                                                          (None)
// struct FGeometryScriptBoneWeightProfileProfile                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBoneWeightFunctions::ComputeSmoothBoneWeights(class UDynamicMesh* TargetMesh, class USkeleton* Skeleton, const struct FGeometryScriptSmoothBoneWeightsOptions& Options, const struct FGeometryScriptBoneWeightProfile& Profile, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBoneWeightFunctions", "ComputeSmoothBoneWeights");

	Params::UGeometryScriptLibrary_MeshBoneWeightFunctions_ComputeSmoothBoneWeights_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Skeleton = Skeleton;
	Parms.Options = Options;
	Parms.Profile = Profile;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshBooleanFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshBooleanFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshBooleanFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshBooleanFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshBooleanFunctions* UGeometryScriptLibrary_MeshBooleanFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshBooleanFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshBooleanFunctions*>(UGeometryScriptLibrary_MeshBooleanFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshSelfUnion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelfUnionOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshSelfUnion(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelfUnionOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBooleanFunctions", "ApplyMeshSelfUnion");

	Params::UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshSelfUnion_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneSlice
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FTransform                  CutFrame                                                         (None)
// struct FGeometryScriptMeshPlaneSliceOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshPlaneSlice(class UDynamicMesh* TargetMesh, const struct FTransform& CutFrame, const struct FGeometryScriptMeshPlaneSliceOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBooleanFunctions", "ApplyMeshPlaneSlice");

	Params::UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneSlice_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.CutFrame = CutFrame;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshPlaneCut
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FTransform                  CutFrame                                                         (None)
// struct FGeometryScriptMeshPlaneCutOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshPlaneCut(class UDynamicMesh* TargetMesh, const struct FTransform& CutFrame, const struct FGeometryScriptMeshPlaneCutOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBooleanFunctions", "ApplyMeshPlaneCut");

	Params::UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshPlaneCut_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.CutFrame = CutFrame;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshMirror
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FTransform                  MirrorFrame                                                      (None)
// struct FGeometryScriptMeshMirrorOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshMirror(class UDynamicMesh* TargetMesh, const struct FTransform& MirrorFrame, const struct FGeometryScriptMeshMirrorOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBooleanFunctions", "ApplyMeshMirror");

	Params::UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshMirror_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.MirrorFrame = MirrorFrame;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions.ApplyMeshBoolean
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FTransform                  TargetTransform                                                  (None)
// class UDynamicMesh*                ToolMesh                                                         (ZeroConstructor)
// struct FTransform                  ToolTransform                                                    (None)
// enum class EGeometryScriptBooleanOperationOperation                                                        (None)
// struct FGeometryScriptMeshBooleanOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshBoolean(class UDynamicMesh* TargetMesh, const struct FTransform& TargetTransform, class UDynamicMesh* ToolMesh, const struct FTransform& ToolTransform, enum class EGeometryScriptBooleanOperation Operation, const struct FGeometryScriptMeshBooleanOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshBooleanFunctions", "ApplyMeshBoolean");

	Params::UGeometryScriptLibrary_MeshBooleanFunctions_ApplyMeshBoolean_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TargetTransform = TargetTransform;
	Parms.ToolMesh = ToolMesh;
	Parms.ToolTransform = ToolTransform;
	Parms.Operation = Operation;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshComparisonFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshComparisonFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshComparisonFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshComparisonFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshComparisonFunctions* UGeometryScriptLibrary_MeshComparisonFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshComparisonFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshComparisonFunctions*>(UGeometryScriptLibrary_MeshComparisonFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.MeasureDistancesBetweenMeshes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UDynamicMesh*                OtherMesh                                                        (ZeroConstructor)
// struct FGeometryScriptMeasureMeshDistanceOptionsOptions                                                          (None)
// double                             MaxDistance                                                      (None)
// double                             MinDistance                                                      (None)
// double                             AverageDistance                                                  (None)
// double                             RootMeanSqrDeviation                                             (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshComparisonFunctions::MeasureDistancesBetweenMeshes(class UDynamicMesh* TargetMesh, class UDynamicMesh* OtherMesh, const struct FGeometryScriptMeasureMeshDistanceOptions& Options, double MaxDistance, double MinDistance, double AverageDistance, double RootMeanSqrDeviation, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshComparisonFunctions", "MeasureDistancesBetweenMeshes");

	Params::UGeometryScriptLibrary_MeshComparisonFunctions_MeasureDistancesBetweenMeshes_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.OtherMesh = OtherMesh;
	Parms.Options = Options;
	Parms.MaxDistance = MaxDistance;
	Parms.MinDistance = MinDistance;
	Parms.AverageDistance = AverageDistance;
	Parms.RootMeanSqrDeviation = RootMeanSqrDeviation;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsSameMeshAs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UDynamicMesh*                OtherMesh                                                        (ZeroConstructor)
// struct FGeometryScriptIsSameMeshOptionsOptions                                                          (None)
// bool                               bIsSameMesh                                                      (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshComparisonFunctions::IsSameMeshAs(class UDynamicMesh* TargetMesh, class UDynamicMesh* OtherMesh, const struct FGeometryScriptIsSameMeshOptions& Options, bool bIsSameMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshComparisonFunctions", "IsSameMeshAs");

	Params::UGeometryScriptLibrary_MeshComparisonFunctions_IsSameMeshAs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.OtherMesh = OtherMesh;
	Parms.Options = Options;
	Parms.bIsSameMesh = bIsSameMesh;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions.IsIntersectingMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FTransform                  TargetTransform                                                  (None)
// class UDynamicMesh*                OtherMesh                                                        (ZeroConstructor)
// struct FTransform                  OtherTransform                                                   (None)
// bool                               bIsIntersecting                                                  (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshComparisonFunctions::IsIntersectingMesh(class UDynamicMesh* TargetMesh, const struct FTransform& TargetTransform, class UDynamicMesh* OtherMesh, const struct FTransform& OtherTransform, bool bIsIntersecting, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshComparisonFunctions", "IsIntersectingMesh");

	Params::UGeometryScriptLibrary_MeshComparisonFunctions_IsIntersectingMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TargetTransform = TargetTransform;
	Parms.OtherMesh = OtherMesh;
	Parms.OtherTransform = OtherTransform;
	Parms.bIsIntersecting = bIsIntersecting;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshDecompositionFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshDecompositionFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshDecompositionFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshDecompositionFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshDecompositionFunctions* UGeometryScriptLibrary_MeshDecompositionFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshDecompositionFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshDecompositionFunctions*>(UGeometryScriptLibrary_MeshDecompositionFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByPolygroups
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (None)
// TArray<class UDynamicMesh*>        ComponentMeshes                                                  (ZeroConstructor)
// TArray<int32>                      ComponentPolygroups                                              (None)
// class UDynamicMeshPool*            MeshPool                                                         (ZeroConstructor)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, const TArray<class UDynamicMesh*>& ComponentMeshes, const TArray<int32>& ComponentPolygroups, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "SplitMeshByPolygroups");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByPolygroups_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.ComponentMeshes = ComponentMeshes;
	Parms.ComponentPolygroups = ComponentPolygroups;
	Parms.MeshPool = MeshPool;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByMaterialIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// TArray<class UDynamicMesh*>        ComponentMeshes                                                  (ZeroConstructor)
// TArray<int32>                      ComponentMaterialIDs                                             (None)
// class UDynamicMeshPool*            MeshPool                                                         (ZeroConstructor)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByMaterialIDs(class UDynamicMesh* TargetMesh, const TArray<class UDynamicMesh*>& ComponentMeshes, const TArray<int32>& ComponentMaterialIDs, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "SplitMeshByMaterialIDs");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ComponentMeshes = ComponentMeshes;
	Parms.ComponentMaterialIDs = ComponentMaterialIDs;
	Parms.MeshPool = MeshPool;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.SplitMeshByComponents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// TArray<class UDynamicMesh*>        ComponentMeshes                                                  (ZeroConstructor)
// class UDynamicMeshPool*            MeshPool                                                         (ZeroConstructor)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshDecompositionFunctions::SplitMeshByComponents(class UDynamicMesh* TargetMesh, const TArray<class UDynamicMesh*>& ComponentMeshes, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "SplitMeshByComponents");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_SplitMeshByComponents_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ComponentMeshes = ComponentMeshes;
	Parms.MeshPool = MeshPool;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.GetSubMeshFromMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UDynamicMesh*                StoreToSubmesh                                                   (ZeroConstructor)
// struct FGeometryScriptIndexList    TriangleList                                                     (None)
// class UDynamicMesh*                StoreToSubmeshOut                                                (ZeroConstructor)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshDecompositionFunctions::GetSubMeshFromMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* StoreToSubmesh, const struct FGeometryScriptIndexList& TriangleList, class UDynamicMesh* StoreToSubmeshOut, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "GetSubMeshFromMesh");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_GetSubMeshFromMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.StoreToSubmesh = StoreToSubmesh;
	Parms.TriangleList = TriangleList;
	Parms.StoreToSubmeshOut = StoreToSubmeshOut;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                CopyFromMesh                                                     (ZeroConstructor)
// class UDynamicMesh*                CopyToMesh                                                       (ZeroConstructor)
// class UDynamicMesh*                CopyToMeshOut                                                    (ZeroConstructor)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshToMesh(class UDynamicMesh* CopyFromMesh, class UDynamicMesh* CopyToMesh, class UDynamicMesh* CopyToMeshOut, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "CopyMeshToMesh");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshToMesh_Params Parms{};

	Parms.CopyFromMesh = CopyFromMesh;
	Parms.CopyToMesh = CopyToMesh;
	Parms.CopyToMeshOut = CopyToMeshOut;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions.CopyMeshSelectionToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UDynamicMesh*                StoreToSubmesh                                                   (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// class UDynamicMesh*                StoreToSubmeshOut                                                (ZeroConstructor)
// bool                               bAppendToExisting                                                (None)
// bool                               bPreserveGroupIDs                                                (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshDecompositionFunctions::CopyMeshSelectionToMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* StoreToSubmesh, const struct FGeometryScriptMeshSelection& Selection, class UDynamicMesh* StoreToSubmeshOut, bool bAppendToExisting, bool bPreserveGroupIDs, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDecompositionFunctions", "CopyMeshSelectionToMesh");

	Params::UGeometryScriptLibrary_MeshDecompositionFunctions_CopyMeshSelectionToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.StoreToSubmesh = StoreToSubmesh;
	Parms.Selection = Selection;
	Parms.StoreToSubmeshOut = StoreToSubmeshOut;
	Parms.bAppendToExisting = bAppendToExisting;
	Parms.bPreserveGroupIDs = bPreserveGroupIDs;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshDeformFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshDeformFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshDeformFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshDeformFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshDeformFunctions* UGeometryScriptLibrary_MeshDeformFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshDeformFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshDeformFunctions*>(UGeometryScriptLibrary_MeshDeformFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyTwistWarpToMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptTwistWarpOptionsOptions                                                          (None)
// struct FTransform                  TwistOrientation                                                 (None)
// float                              TwistAngle                                                       (None)
// float                              TwistExtent                                                      (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshDeformFunctions::ApplyTwistWarpToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptTwistWarpOptions& Options, const struct FTransform& TwistOrientation, float TwistAngle, float TwistExtent, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyTwistWarpToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyTwistWarpToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.TwistOrientation = TwistOrientation;
	Parms.TwistAngle = TwistAngle;
	Parms.TwistExtent = TwistExtent;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyPerlinNoiseToMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FGeometryScriptPerlinNoiseOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshDeformFunctions::ApplyPerlinNoiseToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptPerlinNoiseOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyPerlinNoiseToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyPerlinNoiseToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyMathWarpToMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FTransform                  WarpOrientation                                                  (None)
// enum class EGeometryScriptMathWarpTypeWarpType                                                         (None)
// struct FGeometryScriptMathWarpOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshDeformFunctions::ApplyMathWarpToMesh(class UDynamicMesh* TargetMesh, const struct FTransform& WarpOrientation, enum class EGeometryScriptMathWarpType WarpType, const struct FGeometryScriptMathWarpOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyMathWarpToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyMathWarpToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.WarpOrientation = WarpOrientation;
	Parms.WarpType = WarpType;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyIterativeSmoothingToMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FGeometryScriptIterativeMeshSmoothingOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshDeformFunctions::ApplyIterativeSmoothingToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptIterativeMeshSmoothingOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyIterativeSmoothingToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyIterativeSmoothingToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyFlareWarpToMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptFlareWarpOptionsOptions                                                          (None)
// struct FTransform                  FlareOrientation                                                 (None)
// float                              FlarePercentX                                                    (None)
// float                              FlarePercentY                                                    (None)
// float                              FlareExtent                                                      (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshDeformFunctions::ApplyFlareWarpToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptFlareWarpOptions& Options, const struct FTransform& FlareOrientation, float FlarePercentX, float FlarePercentY, float FlareExtent, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyFlareWarpToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyFlareWarpToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.FlareOrientation = FlareOrientation;
	Parms.FlarePercentX = FlarePercentX;
	Parms.FlarePercentY = FlarePercentY;
	Parms.FlareExtent = FlareExtent;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromTextureMap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UTexture2D*                  Texture                                                          (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FGeometryScriptDisplaceFromTextureOptionsOptions                                                          (None)
// int32                              UVLayer                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromTextureMap(class UDynamicMesh* TargetMesh, class UTexture2D* Texture, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptDisplaceFromTextureOptions& Options, int32 UVLayer, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyDisplaceFromTextureMap");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromTextureMap_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Texture = Texture;
	Parms.Selection = Selection;
	Parms.Options = Options;
	Parms.UVLayer = UVLayer;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyDisplaceFromPerVertexVectors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FGeometryScriptVectorList   VectorList                                                       (None)
// float                              Magnitude                                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromPerVertexVectors(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptVectorList& VectorList, float Magnitude, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyDisplaceFromPerVertexVectors");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyDisplaceFromPerVertexVectors_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.VectorList = VectorList;
	Parms.Magnitude = Magnitude;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions.ApplyBendWarpToMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptBendWarpOptionsOptions                                                          (None)
// struct FTransform                  BendOrientation                                                  (None)
// float                              BendAngle                                                        (None)
// float                              BendExtent                                                       (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshDeformFunctions::ApplyBendWarpToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptBendWarpOptions& Options, const struct FTransform& BendOrientation, float BendAngle, float BendExtent, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshDeformFunctions", "ApplyBendWarpToMesh");

	Params::UGeometryScriptLibrary_MeshDeformFunctions_ApplyBendWarpToMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.BendOrientation = BendOrientation;
	Parms.BendAngle = BendAngle;
	Parms.BendExtent = BendExtent;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshMaterialFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshMaterialFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshMaterialFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshMaterialFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshMaterialFunctions* UGeometryScriptLibrary_MeshMaterialFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshMaterialFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshMaterialFunctions*>(UGeometryScriptLibrary_MeshMaterialFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetTriangleMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              TriangleID                                                       (None)
// int32                              MaterialID                                                       (None)
// bool                               bIsValidTriangle                                                 (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshMaterialFunctions::SetTriangleMaterialID(class UDynamicMesh* TargetMesh, int32 TriangleID, int32 MaterialID, bool bIsValidTriangle, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetTriangleMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetTriangleMaterialID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.MaterialID = MaterialID;
	Parms.bIsValidTriangle = bIsValidTriangle;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetPolygroupMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (None)
// int32                              PolygroupID                                                      (None)
// int32                              MaterialID                                                       (None)
// bool                               bIsValidPolygroupID                                              (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshMaterialFunctions::SetPolygroupMaterialID(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 PolygroupID, int32 MaterialID, bool bIsValidPolygroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetPolygroupMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetPolygroupMaterialID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.PolygroupID = PolygroupID;
	Parms.MaterialID = MaterialID;
	Parms.bIsValidPolygroupID = bIsValidPolygroupID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDOnTriangles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptIndexList    TriangleIDList                                                   (None)
// int32                              MaterialID                                                       (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDOnTriangles(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleIDList, int32 MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetMaterialIDOnTriangles");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDOnTriangles_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleIDList = TriangleIDList;
	Parms.MaterialID = MaterialID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetMaterialIDForMeshSelection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// int32                              MaterialID                                                       (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshMaterialFunctions::SetMaterialIDForMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, int32 MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetMaterialIDForMeshSelection");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetMaterialIDForMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.MaterialID = MaterialID;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.SetAllTriangleMaterialIDs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptIndexList    TriangleMaterialIDList                                           (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshMaterialFunctions::SetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleMaterialIDList, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "SetAllTriangleMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_SetAllTriangleMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleMaterialIDList = TriangleMaterialIDList;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.RemapMaterialIDs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              FromMaterialID                                                   (None)
// int32                              ToMaterialID                                                     (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshMaterialFunctions::RemapMaterialIDs(class UDynamicMesh* TargetMesh, int32 FromMaterialID, int32 ToMaterialID, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "RemapMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_RemapMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.FromMaterialID = FromMaterialID;
	Parms.ToMaterialID = ToMaterialID;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTrianglesByMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              MaterialID                                                       (None)
// struct FGeometryScriptIndexList    TriangleIDList                                                   (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshMaterialFunctions::GetTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32 MaterialID, const struct FGeometryScriptIndexList& TriangleIDList, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetTrianglesByMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetTrianglesByMaterialID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.MaterialID = MaterialID;
	Parms.TriangleIDList = TriangleIDList;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetTriangleMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// int32                              TriangleID                                                       (None)
// bool                               bIsValidTriangle                                                 (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshMaterialFunctions::GetTriangleMaterialID(class UDynamicMesh* TargetMesh, int32 TriangleID, bool bIsValidTriangle, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetTriangleMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetTriangleMaterialID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.bIsValidTriangle = bIsValidTriangle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaxMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// bool                               bHasMaterialIDs                                                  (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshMaterialFunctions::GetMaxMaterialID(class UDynamicMesh* TargetMesh, bool bHasMaterialIDs, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetMaxMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetMaxMaterialID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bHasMaterialIDs = bHasMaterialIDs;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetMaterialIDsOfTriangles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptIndexList    TriangleIDList                                                   (None)
// struct FGeometryScriptIndexList    MaterialIDList                                                   (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshMaterialFunctions::GetMaterialIDsOfTriangles(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleIDList, const struct FGeometryScriptIndexList& MaterialIDList, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetMaterialIDsOfTriangles");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetMaterialIDsOfTriangles_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleIDList = TriangleIDList;
	Parms.MaterialIDList = MaterialIDList;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.GetAllTriangleMaterialIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptIndexList    MaterialIDList                                                   (None)
// bool                               bHasMaterialIDs                                                  (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshMaterialFunctions::GetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& MaterialIDList, bool bHasMaterialIDs, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "GetAllTriangleMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_GetAllTriangleMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.MaterialIDList = MaterialIDList;
	Parms.bHasMaterialIDs = bHasMaterialIDs;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.EnableMaterialIDs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshMaterialFunctions::EnableMaterialIDs(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "EnableMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_EnableMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.DeleteTrianglesByMaterialID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              MaterialID                                                       (None)
// int32                              NumDeleted                                                       (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshMaterialFunctions::DeleteTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32 MaterialID, int32 NumDeleted, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "DeleteTrianglesByMaterialID");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_DeleteTrianglesByMaterialID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.MaterialID = MaterialID;
	Parms.NumDeleted = NumDeleted;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.CompactMaterialIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// TArray<class UMaterialInterface*>  SourceMaterialList                                               (ZeroConstructor)
// TArray<class UMaterialInterface*>  CompactedMaterialList                                            (ZeroConstructor)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshMaterialFunctions::CompactMaterialIDs(class UDynamicMesh* TargetMesh, const TArray<class UMaterialInterface*>& SourceMaterialList, const TArray<class UMaterialInterface*>& CompactedMaterialList, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "CompactMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_CompactMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.SourceMaterialList = SourceMaterialList;
	Parms.CompactedMaterialList = CompactedMaterialList;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions.ClearMaterialIDs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              ClearValue                                                       (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshMaterialFunctions::ClearMaterialIDs(class UDynamicMesh* TargetMesh, int32 ClearValue, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshMaterialFunctions", "ClearMaterialIDs");

	Params::UGeometryScriptLibrary_MeshMaterialFunctions_ClearMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ClearValue = ClearValue;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshModelingFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshModelingFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshModelingFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshModelingFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshModelingFunctions* UGeometryScriptLibrary_MeshModelingFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshModelingFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshModelingFunctions*>(UGeometryScriptLibrary_MeshModelingFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshShell
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshOffsetOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshShell(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshOffsetOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshShell");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshShell_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshPolygroupBevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshBevelOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshPolygroupBevel(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshBevelOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshPolygroupBevel");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshPolygroupBevel_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffsetFaces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshOffsetFacesOptionsOptions                                                          (None)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffsetFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshOffsetFacesOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshOffsetFaces");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffsetFaces_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Selection = Selection;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshOffsetOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshOffset(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshOffsetOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshOffset");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshOffset_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshLinearExtrudeFaces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshLinearExtrudeOptionsOptions                                                          (None)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshLinearExtrudeFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshLinearExtrudeOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshLinearExtrudeFaces");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshLinearExtrudeFaces_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Selection = Selection;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshInsetOutsetFaces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshInsetOutsetFacesOptionsOptions                                                          (None)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshInsetOutsetFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshInsetOutsetFacesOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshInsetOutsetFaces");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshInsetOutsetFaces_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Selection = Selection;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshExtrude_Compatibility_5p0
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshExtrudeOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshExtrude_Compatibility_5p0(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshExtrudeOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshExtrude_Compatibility_5p0");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshExtrude_Compatibility_5p0_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDuplicateFaces
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FGeometryScriptMeshSelectionNewTriangles                                                     (None)
// struct FGeometryScriptMeshEditPolygroupOptionsGroupOptions                                                     (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDuplicateFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptMeshSelection& NewTriangles, const struct FGeometryScriptMeshEditPolygroupOptions& GroupOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshDuplicateFaces");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDuplicateFaces_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.NewTriangles = NewTriangles;
	Parms.GroupOptions = GroupOptions;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshDisconnectFaces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// bool                               bAllowBowtiesInOutput                                            (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshDisconnectFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, bool bAllowBowtiesInOutput, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshDisconnectFaces");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshDisconnectFaces_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.bAllowBowtiesInOutput = bAllowBowtiesInOutput;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions.ApplyMeshBevelSelection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// enum class EGeometryScriptMeshBevelSelectionModeBevelMode                                                        (None)
// struct FGeometryScriptMeshBevelSelectionOptionsBevelOptions                                                     (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshModelingFunctions::ApplyMeshBevelSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, enum class EGeometryScriptMeshBevelSelectionMode BevelMode, const struct FGeometryScriptMeshBevelSelectionOptions& BevelOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshModelingFunctions", "ApplyMeshBevelSelection");

	Params::UGeometryScriptLibrary_MeshModelingFunctions_ApplyMeshBevelSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.BevelMode = BevelMode;
	Parms.BevelOptions = BevelOptions;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshNormalsFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshNormalsFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshNormalsFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshNormalsFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshNormalsFunctions* UGeometryScriptLibrary_MeshNormalsFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshNormalsFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshNormalsFunctions*>(UGeometryScriptLibrary_MeshNormalsFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.UpdateVertexNormal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              VertexID                                                         (None)
// bool                               bUpdateNormal                                                    (None)
// struct FVector                     NewNormal                                                        (None)
// bool                               bUpdateTangents                                                  (None)
// struct FVector                     NewTangentX                                                      (None)
// struct FVector                     NewTangentY                                                      (None)
// bool                               bIsValidVertex                                                   (None)
// bool                               bMergeSplitValues                                                (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshNormalsFunctions::UpdateVertexNormal(class UDynamicMesh* TargetMesh, int32 VertexID, bool bUpdateNormal, const struct FVector& NewNormal, bool bUpdateTangents, const struct FVector& NewTangentX, const struct FVector& NewTangentY, bool bIsValidVertex, bool bMergeSplitValues, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "UpdateVertexNormal");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_UpdateVertexNormal_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexID = VertexID;
	Parms.bUpdateNormal = bUpdateNormal;
	Parms.NewNormal = NewNormal;
	Parms.bUpdateTangents = bUpdateTangents;
	Parms.NewTangentX = NewTangentX;
	Parms.NewTangentY = NewTangentY;
	Parms.bIsValidVertex = bIsValidVertex;
	Parms.bMergeSplitValues = bMergeSplitValues;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerVertexNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshNormalsFunctions::SetPerVertexNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "SetPerVertexNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_SetPerVertexNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetPerFaceNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshNormalsFunctions::SetPerFaceNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "SetPerFaceNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_SetPerFaceNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshTriangleNormals
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              TriangleID                                                       (None)
// struct FGeometryScriptTriangle     Normals                                                          (None)
// bool                               bIsValidTriangle                                                 (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshTriangleNormals(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct FGeometryScriptTriangle& Normals, bool bIsValidTriangle, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "SetMeshTriangleNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshTriangleNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.Normals = Normals;
	Parms.bIsValidTriangle = bIsValidTriangle;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexTangents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptVectorList   TangentXList                                                     (None)
// struct FGeometryScriptVectorList   TangentYList                                                     (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshPerVertexTangents(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& TangentXList, const struct FGeometryScriptVectorList& TangentYList, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "SetMeshPerVertexTangents");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexTangents_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TangentXList = TangentXList;
	Parms.TangentYList = TangentYList;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.SetMeshPerVertexNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptVectorList   VertexNormalList                                                 (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshPerVertexNormals(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& VertexNormalList, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "SetMeshPerVertexNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_SetMeshPerVertexNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexNormalList = VertexNormalList;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.RecomputeNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptCalculateNormalsOptionsCalculateOptions                                                 (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshNormalsFunctions::RecomputeNormals(class UDynamicMesh* TargetMesh, const struct FGeometryScriptCalculateNormalsOptions& CalculateOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "RecomputeNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_RecomputeNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.CalculateOptions = CalculateOptions;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexTangents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptVectorList   TangentXList                                                     (None)
// struct FGeometryScriptVectorList   TangentYList                                                     (None)
// bool                               bIsValidTangentSet                                               (None)
// bool                               bHasVertexIDGaps                                                 (None)
// bool                               bAverageSplitVertexValues                                        (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshPerVertexTangents(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& TangentXList, const struct FGeometryScriptVectorList& TangentYList, bool bIsValidTangentSet, bool bHasVertexIDGaps, bool bAverageSplitVertexValues, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "GetMeshPerVertexTangents");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexTangents_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TangentXList = TangentXList;
	Parms.TangentYList = TangentYList;
	Parms.bIsValidTangentSet = bIsValidTangentSet;
	Parms.bHasVertexIDGaps = bHasVertexIDGaps;
	Parms.bAverageSplitVertexValues = bAverageSplitVertexValues;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshPerVertexNormals
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptVectorList   NormalList                                                       (None)
// bool                               bIsValidNormalSet                                                (None)
// bool                               bHasVertexIDGaps                                                 (None)
// bool                               bAverageSplitVertexValues                                        (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshPerVertexNormals(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& NormalList, bool bIsValidNormalSet, bool bHasVertexIDGaps, bool bAverageSplitVertexValues, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "GetMeshPerVertexNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshPerVertexNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.NormalList = NormalList;
	Parms.bIsValidNormalSet = bIsValidNormalSet;
	Parms.bHasVertexIDGaps = bHasVertexIDGaps;
	Parms.bAverageSplitVertexValues = bAverageSplitVertexValues;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.GetMeshHasTangents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// bool                               bHasTangents                                                     (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshHasTangents(class UDynamicMesh* TargetMesh, bool bHasTangents, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "GetMeshHasTangents");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_GetMeshHasTangents_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bHasTangents = bHasTangents;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.FlipNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshNormalsFunctions::FlipNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "FlipNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_FlipNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.DiscardTangents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshNormalsFunctions::DiscardTangents(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "DiscardTangents");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_DiscardTangents_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeTangents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptTangentsOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshNormalsFunctions::ComputeTangents(class UDynamicMesh* TargetMesh, const struct FGeometryScriptTangentsOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "ComputeTangents");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_ComputeTangents_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.ComputeSplitNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptSplitNormalsOptionsSplitOptions                                                     (None)
// struct FGeometryScriptCalculateNormalsOptionsCalculateOptions                                                 (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshNormalsFunctions::ComputeSplitNormals(class UDynamicMesh* TargetMesh, const struct FGeometryScriptSplitNormalsOptions& SplitOptions, const struct FGeometryScriptCalculateNormalsOptions& CalculateOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "ComputeSplitNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_ComputeSplitNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.SplitOptions = SplitOptions;
	Parms.CalculateOptions = CalculateOptions;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions.AutoRepairNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshNormalsFunctions::AutoRepairNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshNormalsFunctions", "AutoRepairNormals");

	Params::UGeometryScriptLibrary_MeshNormalsFunctions_AutoRepairNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshPolygroupFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshPolygroupFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshPolygroupFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshPolygroupFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshPolygroupFunctions* UGeometryScriptLibrary_MeshPolygroupFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshPolygroupFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshPolygroupFunctions*>(UGeometryScriptLibrary_MeshPolygroupFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.SetPolygroupForMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (None)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// int32                              SetPolygroupIDOut                                                (None)
// int32                              SetPolygroupID                                                   (None)
// bool                               bGenerateNewPolygroup                                            (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPolygroupFunctions::SetPolygroupForMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, const struct FGeometryScriptMeshSelection& Selection, int32 SetPolygroupIDOut, int32 SetPolygroupID, bool bGenerateNewPolygroup, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "SetPolygroupForMeshSelection");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_SetPolygroupForMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.Selection = Selection;
	Parms.SetPolygroupIDOut = SetPolygroupIDOut;
	Parms.SetPolygroupID = SetPolygroupID;
	Parms.bGenerateNewPolygroup = bGenerateNewPolygroup;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.SetNumExtendedPolygroupLayers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              NumLayers                                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPolygroupFunctions::SetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh, int32 NumLayers, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "SetNumExtendedPolygroupLayers");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_SetNumExtendedPolygroupLayers_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.NumLayers = NumLayers;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglesInPolygroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (None)
// int32                              PolygroupID                                                      (None)
// struct FGeometryScriptIndexList    TriangleIDsOut                                                   (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPolygroupFunctions::GetTrianglesInPolygroup(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 PolygroupID, const struct FGeometryScriptIndexList& TriangleIDsOut, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "GetTrianglesInPolygroup");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglesInPolygroup_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.PolygroupID = PolygroupID;
	Parms.TriangleIDsOut = TriangleIDsOut;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetTrianglePolygroupID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (None)
// int32                              TriangleID                                                       (None)
// bool                               bIsValidTriangle                                                 (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPolygroupFunctions::GetTrianglePolygroupID(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 TriangleID, bool bIsValidTriangle, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "GetTrianglePolygroupID");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_GetTrianglePolygroupID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.TriangleID = TriangleID;
	Parms.bIsValidTriangle = bIsValidTriangle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetPolygroupIDsInMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (None)
// struct FGeometryScriptIndexList    PolygroupIDsOut                                                  (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolygroupIDsInMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, const struct FGeometryScriptIndexList& PolygroupIDsOut, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "GetPolygroupIDsInMesh");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_GetPolygroupIDsInMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.PolygroupIDsOut = PolygroupIDsOut;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.GetAllTrianglePolygroupIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (None)
// struct FGeometryScriptIndexList    PolygroupIDsOut                                                  (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPolygroupFunctions::GetAllTrianglePolygroupIDs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, const struct FGeometryScriptIndexList& PolygroupIDsOut, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "GetAllTrianglePolygroupIDs");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_GetAllTrianglePolygroupIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.PolygroupIDsOut = PolygroupIDsOut;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.EnablePolygroups
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPolygroupFunctions::EnablePolygroups(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "EnablePolygroups");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_EnablePolygroups_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.DeleteTrianglesInPolygroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (None)
// int32                              PolygroupID                                                      (None)
// int32                              NumDeleted                                                       (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPolygroupFunctions::DeleteTrianglesInPolygroup(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 PolygroupID, int32 NumDeleted, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "DeleteTrianglesInPolygroup");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_DeleteTrianglesInPolygroup_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.PolygroupID = PolygroupID;
	Parms.NumDeleted = NumDeleted;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.CopyPolygroupsLayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptGroupLayer   FromGroupLayer                                                   (None)
// struct FGeometryScriptGroupLayer   ToGroupLayer                                                     (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPolygroupFunctions::CopyPolygroupsLayer(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& FromGroupLayer, const struct FGeometryScriptGroupLayer& ToGroupLayer, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "CopyPolygroupsLayer");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_CopyPolygroupsLayer_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.FromGroupLayer = FromGroupLayer;
	Parms.ToGroupLayer = ToGroupLayer;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertUVIslandsToPolygroups
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (None)
// int32                              UVLayer                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPolygroupFunctions::ConvertUVIslandsToPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 UVLayer, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ConvertUVIslandsToPolygroups");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertUVIslandsToPolygroups_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.UVLayer = UVLayer;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ConvertComponentsToPolygroups
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPolygroupFunctions::ConvertComponentsToPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ConvertComponentsToPolygroups");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ConvertComponentsToPolygroups_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromPolygonDetection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (None)
// bool                               bRespectUVSeams                                                  (None)
// bool                               bRespectHardNormals                                              (None)
// double                             QuadAdjacencyWeight                                              (None)
// double                             QuadMetricClamp                                                  (None)
// int32                              MaxSearchRounds                                                  (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromPolygonDetection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, bool bRespectUVSeams, bool bRespectHardNormals, double QuadAdjacencyWeight, double QuadMetricClamp, int32 MaxSearchRounds, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ComputePolygroupsFromPolygonDetection");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromPolygonDetection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.bRespectUVSeams = bRespectUVSeams;
	Parms.bRespectHardNormals = bRespectHardNormals;
	Parms.QuadAdjacencyWeight = QuadAdjacencyWeight;
	Parms.QuadMetricClamp = QuadMetricClamp;
	Parms.MaxSearchRounds = MaxSearchRounds;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ComputePolygroupsFromAngleThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (None)
// float                              CreaseAngle                                                      (None)
// int32                              MinGroupSize                                                     (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromAngleThreshold(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, float CreaseAngle, int32 MinGroupSize, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ComputePolygroupsFromAngleThreshold");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ComputePolygroupsFromAngleThreshold_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.CreaseAngle = CreaseAngle;
	Parms.MinGroupSize = MinGroupSize;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions.ClearPolygroups
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (None)
// int32                              ClearValue                                                       (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPolygroupFunctions::ClearPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 ClearValue, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPolygroupFunctions", "ClearPolygroups");

	Params::UGeometryScriptLibrary_MeshPolygroupFunctions_ClearPolygroups_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.GroupLayer = GroupLayer;
	Parms.ClearValue = ClearValue;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshPrimitiveFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshPrimitiveFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshPrimitiveFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshPrimitiveFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshPrimitiveFunctions* UGeometryScriptLibrary_MeshPrimitiveFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshPrimitiveFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshPrimitiveFunctions*>(UGeometryScriptLibrary_MeshPrimitiveFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendVoronoiDiagram2D
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// TArray<struct FVector2D>           VoronoiSites                                                     (None)
// struct FGeometryScriptVoronoiOptionsVoronoiOptions                                                   (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendVoronoiDiagram2D(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const TArray<struct FVector2D>& VoronoiSites, const struct FGeometryScriptVoronoiOptions& VoronoiOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendVoronoiDiagram2D");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendVoronoiDiagram2D_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.VoronoiSites = VoronoiSites;
	Parms.VoronoiOptions = VoronoiOptions;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTriangulatedPolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// TArray<struct FVector2D>           PolygonVertices                                                  (None)
// bool                               bAllowSelfIntersections                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendTriangulatedPolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const TArray<struct FVector2D>& PolygonVertices, bool bAllowSelfIntersections, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendTriangulatedPolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTriangulatedPolygon_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.PolygonVertices = PolygonVertices;
	Parms.bAllowSelfIntersections = bAllowSelfIntersections;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendTorus
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// struct FGeometryScriptRevolveOptionsRevolveOptions                                                   (None)
// float                              MajorRadius                                                      (None)
// float                              MinorRadius                                                      (None)
// int32                              MajorSteps                                                       (None)
// int32                              MinorSteps                                                       (None)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendTorus(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const struct FGeometryScriptRevolveOptions& RevolveOptions, float MajorRadius, float MinorRadius, int32 MajorSteps, int32 MinorSteps, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendTorus");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendTorus_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.RevolveOptions = RevolveOptions;
	Parms.MajorRadius = MajorRadius;
	Parms.MinorRadius = MinorRadius;
	Parms.MajorSteps = MajorSteps;
	Parms.MinorSteps = MinorSteps;
	Parms.Origin = Origin;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolyline
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// TArray<struct FVector2D>           PolylineVertices                                                 (None)
// TArray<struct FTransform>          SweepPath                                                        (None)
// TArray<float>                      PolylineTexParamU                                                (None)
// TArray<float>                      SweepPathTexParamV                                               (None)
// bool                               bLoop                                                            (None)
// float                              StartScale                                                       (None)
// float                              EndScale                                                         (None)
// float                              RotationAngleDeg                                                 (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSweepPolyline(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const TArray<struct FVector2D>& PolylineVertices, const TArray<struct FTransform>& SweepPath, const TArray<float>& PolylineTexParamU, const TArray<float>& SweepPathTexParamV, bool bLoop, float StartScale, float EndScale, float RotationAngleDeg, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSweepPolyline");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolyline_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.PolylineVertices = PolylineVertices;
	Parms.SweepPath = SweepPath;
	Parms.PolylineTexParamU = PolylineTexParamU;
	Parms.SweepPathTexParamV = SweepPathTexParamV;
	Parms.bLoop = bLoop;
	Parms.StartScale = StartScale;
	Parms.EndScale = EndScale;
	Parms.RotationAngleDeg = RotationAngleDeg;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSweepPolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// TArray<struct FVector2D>           PolygonVertices                                                  (None)
// TArray<struct FTransform>          SweepPath                                                        (None)
// bool                               bLoop                                                            (None)
// bool                               bCapped                                                          (None)
// float                              StartScale                                                       (None)
// float                              EndScale                                                         (None)
// float                              RotationAngleDeg                                                 (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSweepPolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const TArray<struct FVector2D>& PolygonVertices, const TArray<struct FTransform>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, float RotationAngleDeg, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSweepPolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSweepPolygon_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.PolygonVertices = PolygonVertices;
	Parms.SweepPath = SweepPath;
	Parms.bLoop = bLoop;
	Parms.bCapped = bCapped;
	Parms.StartScale = StartScale;
	Parms.EndScale = EndScale;
	Parms.RotationAngleDeg = RotationAngleDeg;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSpiralRevolvePolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// TArray<struct FVector2D>           PolygonVertices                                                  (None)
// struct FGeometryScriptRevolveOptionsRevolveOptions                                                   (None)
// float                              Radius                                                           (None)
// int32                              Steps                                                            (None)
// float                              RisePerRevolution                                                (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSpiralRevolvePolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const TArray<struct FVector2D>& PolygonVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, float Radius, int32 Steps, float RisePerRevolution, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSpiralRevolvePolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSpiralRevolvePolygon_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.PolygonVertices = PolygonVertices;
	Parms.RevolveOptions = RevolveOptions;
	Parms.Radius = Radius;
	Parms.Steps = Steps;
	Parms.RisePerRevolution = RisePerRevolution;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereLatLong
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// float                              Radius                                                           (None)
// int32                              StepsPhi                                                         (None)
// int32                              StepsTheta                                                       (None)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereLatLong(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, int32 StepsPhi, int32 StepsTheta, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSphereLatLong");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereLatLong_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.Radius = Radius;
	Parms.StepsPhi = StepsPhi;
	Parms.StepsTheta = StepsTheta;
	Parms.Origin = Origin;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSphereBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// float                              Radius                                                           (None)
// int32                              StepsX                                                           (None)
// int32                              StepsY                                                           (None)
// int32                              StepsZ                                                           (None)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSphereBox(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, int32 StepsX, int32 StepsY, int32 StepsZ, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSphereBox");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSphereBox_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.Radius = Radius;
	Parms.StepsX = StepsX;
	Parms.StepsY = StepsY;
	Parms.StepsZ = StepsZ;
	Parms.Origin = Origin;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleSweptPolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// TArray<struct FVector2D>           PolygonVertices                                                  (None)
// TArray<struct FVector>             SweepPath                                                        (None)
// bool                               bLoop                                                            (None)
// bool                               bCapped                                                          (None)
// float                              StartScale                                                       (None)
// float                              EndScale                                                         (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleSweptPolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const TArray<struct FVector2D>& PolygonVertices, const TArray<struct FVector>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSimpleSweptPolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleSweptPolygon_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.PolygonVertices = PolygonVertices;
	Parms.SweepPath = SweepPath;
	Parms.bLoop = bLoop;
	Parms.bCapped = bCapped;
	Parms.StartScale = StartScale;
	Parms.EndScale = EndScale;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendSimpleExtrudePolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// TArray<struct FVector2D>           PolygonVertices                                                  (None)
// float                              Height                                                           (None)
// int32                              HeightSteps                                                      (None)
// bool                               bCapped                                                          (None)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleExtrudePolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const TArray<struct FVector2D>& PolygonVertices, float Height, int32 HeightSteps, bool bCapped, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendSimpleExtrudePolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendSimpleExtrudePolygon_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.PolygonVertices = PolygonVertices;
	Parms.Height = Height;
	Parms.HeightSteps = HeightSteps;
	Parms.bCapped = bCapped;
	Parms.Origin = Origin;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangleXY
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// float                              DimensionX                                                       (None)
// float                              DimensionY                                                       (None)
// float                              CornerRadius                                                     (None)
// int32                              StepsWidth                                                       (None)
// int32                              StepsHeight                                                      (None)
// int32                              StepsRound                                                       (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRoundRectangleXY(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, float CornerRadius, int32 StepsWidth, int32 StepsHeight, int32 StepsRound, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRoundRectangleXY");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangleXY_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.DimensionX = DimensionX;
	Parms.DimensionY = DimensionY;
	Parms.CornerRadius = CornerRadius;
	Parms.StepsWidth = StepsWidth;
	Parms.StepsHeight = StepsHeight;
	Parms.StepsRound = StepsRound;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRoundRectangle_Compatibility_5_0
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// float                              DimensionX                                                       (None)
// float                              DimensionY                                                       (None)
// float                              CornerRadius                                                     (None)
// int32                              StepsWidth                                                       (None)
// int32                              StepsHeight                                                      (None)
// int32                              StepsRound                                                       (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRoundRectangle_Compatibility_5_0(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, float CornerRadius, int32 StepsWidth, int32 StepsHeight, int32 StepsRound, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRoundRectangle_Compatibility_5_0");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRoundRectangle_Compatibility_5_0_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.DimensionX = DimensionX;
	Parms.DimensionY = DimensionY;
	Parms.CornerRadius = CornerRadius;
	Parms.StepsWidth = StepsWidth;
	Parms.StepsHeight = StepsHeight;
	Parms.StepsRound = StepsRound;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePolygon
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// TArray<struct FVector2D>           PolygonVertices                                                  (None)
// struct FGeometryScriptRevolveOptionsRevolveOptions                                                   (None)
// float                              Radius                                                           (None)
// int32                              Steps                                                            (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const TArray<struct FVector2D>& PolygonVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, float Radius, int32 Steps, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRevolvePolygon");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePolygon_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.PolygonVertices = PolygonVertices;
	Parms.RevolveOptions = RevolveOptions;
	Parms.Radius = Radius;
	Parms.Steps = Steps;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRevolvePath
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// TArray<struct FVector2D>           PathVertices                                                     (None)
// struct FGeometryScriptRevolveOptionsRevolveOptions                                                   (None)
// int32                              Steps                                                            (None)
// bool                               bCapped                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRevolvePath(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const TArray<struct FVector2D>& PathVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, int32 Steps, bool bCapped, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRevolvePath");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRevolvePath_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.PathVertices = PathVertices;
	Parms.RevolveOptions = RevolveOptions;
	Parms.Steps = Steps;
	Parms.bCapped = bCapped;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangleXY
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// float                              DimensionX                                                       (None)
// float                              DimensionY                                                       (None)
// int32                              StepsWidth                                                       (None)
// int32                              StepsHeight                                                      (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRectangleXY(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, int32 StepsWidth, int32 StepsHeight, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRectangleXY");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangleXY_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.DimensionX = DimensionX;
	Parms.DimensionY = DimensionY;
	Parms.StepsWidth = StepsWidth;
	Parms.StepsHeight = StepsHeight;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendRectangle_Compatibility_5_0
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// float                              DimensionX                                                       (None)
// float                              DimensionY                                                       (None)
// int32                              StepsWidth                                                       (None)
// int32                              StepsHeight                                                      (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendRectangle_Compatibility_5_0(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, int32 StepsWidth, int32 StepsHeight, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendRectangle_Compatibility_5_0");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendRectangle_Compatibility_5_0_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.DimensionX = DimensionX;
	Parms.DimensionY = DimensionY;
	Parms.StepsWidth = StepsWidth;
	Parms.StepsHeight = StepsHeight;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendLinearStairs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// float                              StepWidth                                                        (None)
// float                              StepHeight                                                       (None)
// float                              StepDepth                                                        (None)
// int32                              NumSteps                                                         (None)
// bool                               bFloating                                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendLinearStairs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float StepWidth, float StepHeight, float StepDepth, int32 NumSteps, bool bFloating, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendLinearStairs");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendLinearStairs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.StepWidth = StepWidth;
	Parms.StepHeight = StepHeight;
	Parms.StepDepth = StepDepth;
	Parms.NumSteps = NumSteps;
	Parms.bFloating = bFloating;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendDisc
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// float                              Radius                                                           (None)
// int32                              AngleSteps                                                       (None)
// int32                              SpokeSteps                                                       (None)
// float                              StartAngle                                                       (None)
// float                              EndAngle                                                         (None)
// float                              HoleRadius                                                       (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendDisc(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, int32 AngleSteps, int32 SpokeSteps, float StartAngle, float EndAngle, float HoleRadius, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendDisc");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendDisc_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.Radius = Radius;
	Parms.AngleSteps = AngleSteps;
	Parms.SpokeSteps = SpokeSteps;
	Parms.StartAngle = StartAngle;
	Parms.EndAngle = EndAngle;
	Parms.HoleRadius = HoleRadius;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCylinder
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// float                              Radius                                                           (None)
// float                              Height                                                           (None)
// int32                              RadialSteps                                                      (None)
// int32                              HeightSteps                                                      (None)
// bool                               bCapped                                                          (None)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCylinder(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, float Height, int32 RadialSteps, int32 HeightSteps, bool bCapped, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendCylinder");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCylinder_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.Radius = Radius;
	Parms.Height = Height;
	Parms.RadialSteps = RadialSteps;
	Parms.HeightSteps = HeightSteps;
	Parms.bCapped = bCapped;
	Parms.Origin = Origin;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCurvedStairs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// float                              StepWidth                                                        (None)
// float                              StepHeight                                                       (None)
// float                              InnerRadius                                                      (None)
// float                              CurveAngle                                                       (None)
// int32                              NumSteps                                                         (None)
// bool                               bFloating                                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCurvedStairs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float StepWidth, float StepHeight, float InnerRadius, float CurveAngle, int32 NumSteps, bool bFloating, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendCurvedStairs");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCurvedStairs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.StepWidth = StepWidth;
	Parms.StepHeight = StepHeight;
	Parms.InnerRadius = InnerRadius;
	Parms.CurveAngle = CurveAngle;
	Parms.NumSteps = NumSteps;
	Parms.bFloating = bFloating;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCone
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// float                              BaseRadius                                                       (None)
// float                              TopRadius                                                        (None)
// float                              Height                                                           (None)
// int32                              RadialSteps                                                      (None)
// int32                              HeightSteps                                                      (None)
// bool                               bCapped                                                          (None)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCone(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float BaseRadius, float TopRadius, float Height, int32 RadialSteps, int32 HeightSteps, bool bCapped, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendCone");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCone_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.BaseRadius = BaseRadius;
	Parms.TopRadius = TopRadius;
	Parms.Height = Height;
	Parms.RadialSteps = RadialSteps;
	Parms.HeightSteps = HeightSteps;
	Parms.bCapped = bCapped;
	Parms.Origin = Origin;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendCapsule
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// float                              Radius                                                           (None)
// float                              LineLength                                                       (None)
// int32                              HemisphereSteps                                                  (None)
// int32                              CircleSteps                                                      (None)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendCapsule(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, float LineLength, int32 HemisphereSteps, int32 CircleSteps, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendCapsule");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendCapsule_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.Radius = Radius;
	Parms.LineLength = LineLength;
	Parms.HemisphereSteps = HemisphereSteps;
	Parms.CircleSteps = CircleSteps;
	Parms.Origin = Origin;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions.AppendBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPrimitiveOptionsPrimitiveOptions                                                 (None)
// struct FTransform                  Transform                                                        (None)
// float                              DimensionX                                                       (None)
// float                              DimensionY                                                       (None)
// float                              DimensionZ                                                       (None)
// int32                              StepsX                                                           (None)
// int32                              StepsY                                                           (None)
// int32                              StepsZ                                                           (None)
// enum class EGeometryScriptPrimitiveOriginModeOrigin                                                           (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendBox(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, float DimensionZ, int32 StepsX, int32 StepsY, int32 StepsZ, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshPrimitiveFunctions", "AppendBox");

	Params::UGeometryScriptLibrary_MeshPrimitiveFunctions_AppendBox_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PrimitiveOptions = PrimitiveOptions;
	Parms.Transform = Transform;
	Parms.DimensionX = DimensionX;
	Parms.DimensionY = DimensionY;
	Parms.DimensionZ = DimensionZ;
	Parms.StepsX = StepsX;
	Parms.StepsY = StepsY;
	Parms.StepsZ = StepsZ;
	Parms.Origin = Origin;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshQueryFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshQueryFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshQueryFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshQueryFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshQueryFunctions* UGeometryScriptLibrary_MeshQueryFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshQueryFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshQueryFunctions*>(UGeometryScriptLibrary_MeshQueryFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidVertexID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// int32                              VertexID                                                         (None)
// bool                               ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::IsValidVertexID(class UDynamicMesh* TargetMesh, int32 VertexID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "IsValidVertexID");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_IsValidVertexID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexID = VertexID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.IsValidTriangleID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// int32                              TriangleID                                                       (None)
// bool                               ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::IsValidTriangleID(class UDynamicMesh* TargetMesh, int32 TriangleID, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "IsValidTriangleID");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_IsValidTriangleID_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// int32                              VertexID                                                         (None)
// bool                               bIsValidVertex                                                   (None)
// struct FVector                     ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetVertexPosition(class UDynamicMesh* TargetMesh, int32 VertexID, bool bIsValidVertex, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetVertexPosition");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetVertexPosition_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexID = VertexID;
	Parms.bIsValidVertex = bIsValidVertex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetVertexCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetVertexCount(class UDynamicMesh* TargetMesh, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetVertexCount");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetVertexCount_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetUVSetBoundingBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// int32                              UvSetIndex                                                       (None)
// bool                               bIsValidUVSet                                                    (None)
// bool                               bUVSetIsEmpty                                                    (None)
// struct FBox2D                      ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetUVSetBoundingBox(class UDynamicMesh* TargetMesh, int32 UvSetIndex, bool bIsValidUVSet, bool bUVSetIsEmpty, const struct FBox2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetUVSetBoundingBox");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetUVSetBoundingBox_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.bIsValidUVSet = bIsValidUVSet;
	Parms.bUVSetIsEmpty = bUVSetIsEmpty;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleVertexColors
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              TriangleID                                                       (None)
// struct FLinearColor                Color1                                                           (None)
// struct FLinearColor                Color2                                                           (None)
// struct FLinearColor                Color3                                                           (None)
// bool                               bTriHasValidVertexColors                                         (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleVertexColors(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct FLinearColor& Color1, const struct FLinearColor& Color2, const struct FLinearColor& Color3, bool bTriHasValidVertexColors, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleVertexColors");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleVertexColors_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.Color1 = Color1;
	Parms.Color2 = Color2;
	Parms.Color3 = Color3;
	Parms.bTriHasValidVertexColors = bTriHasValidVertexColors;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleUVs
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// int32                              UvSetIndex                                                       (None)
// int32                              TriangleID                                                       (None)
// struct FVector2D                   UV1                                                              (None)
// struct FVector2D                   UV2                                                              (None)
// struct FVector2D                   UV3                                                              (None)
// bool                               bHaveValidUVs                                                    (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, const struct FVector2D& UV1, const struct FVector2D& UV2, const struct FVector2D& UV3, bool bHaveValidUVs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleUVs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.TriangleID = TriangleID;
	Parms.UV1 = UV1;
	Parms.UV2 = UV2;
	Parms.UV3 = UV3;
	Parms.bHaveValidUVs = bHaveValidUVs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTrianglePositions
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// int32                              TriangleID                                                       (None)
// bool                               bIsValidTriangle                                                 (None)
// struct FVector                     Vertex1                                                          (None)
// struct FVector                     Vertex2                                                          (None)
// struct FVector                     Vertex3                                                          (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetTrianglePositions(class UDynamicMesh* TargetMesh, int32 TriangleID, bool bIsValidTriangle, const struct FVector& Vertex1, const struct FVector& Vertex2, const struct FVector& Vertex3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTrianglePositions");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTrianglePositions_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.bIsValidTriangle = bIsValidTriangle;
	Parms.Vertex1 = Vertex1;
	Parms.Vertex2 = Vertex2;
	Parms.Vertex3 = Vertex3;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormalTangents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              TriangleID                                                       (None)
// bool                               bTriHasValidElements                                             (None)
// struct FGeometryScriptTriangle     Normals                                                          (None)
// struct FGeometryScriptTriangle     Tangents                                                         (None)
// struct FGeometryScriptTriangle     BiTangents                                                       (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormalTangents(class UDynamicMesh* TargetMesh, int32 TriangleID, bool bTriHasValidElements, const struct FGeometryScriptTriangle& Normals, const struct FGeometryScriptTriangle& Tangents, const struct FGeometryScriptTriangle& BiTangents, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleNormalTangents");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormalTangents_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.bTriHasValidElements = bTriHasValidElements;
	Parms.Normals = Normals;
	Parms.Tangents = Tangents;
	Parms.BiTangents = BiTangents;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleNormals
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              TriangleID                                                       (None)
// struct FVector                     Normal1                                                          (None)
// struct FVector                     Normal2                                                          (None)
// struct FVector                     Normal3                                                          (None)
// bool                               bTriHasValidNormals                                              (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormals(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct FVector& Normal1, const struct FVector& Normal2, const struct FVector& Normal3, bool bTriHasValidNormals, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleNormals");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.Normal1 = Normal1;
	Parms.Normal2 = Normal2;
	Parms.Normal3 = Normal3;
	Parms.bTriHasValidNormals = bTriHasValidNormals;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleIndices
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// int32                              TriangleID                                                       (None)
// bool                               bIsValidTriangle                                                 (None)
// struct FIntVector                  ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleIndices(class UDynamicMesh* TargetMesh, int32 TriangleID, bool bIsValidTriangle, const struct FIntVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleIndices");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleIndices_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.bIsValidTriangle = bIsValidTriangle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetTriangleFaceNormal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// int32                              TriangleID                                                       (None)
// bool                               bIsValidTriangle                                                 (None)
// struct FVector                     ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleFaceNormal(class UDynamicMesh* TargetMesh, int32 TriangleID, bool bIsValidTriangle, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetTriangleFaceNormal");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetTriangleFaceNormal_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.bIsValidTriangle = bIsValidTriangle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumVertexIDs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetNumVertexIDs(class UDynamicMesh* TargetMesh, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumVertexIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumVertexIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumUVSets
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVSets(class UDynamicMesh* TargetMesh, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumUVSets");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumUVSets_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumTriangleIDs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetNumTriangleIDs(class UDynamicMesh* TargetMesh, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumTriangleIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumTriangleIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderLoops
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// bool                               bAmbiguousTopologyFound                                          (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetNumOpenBorderLoops(class UDynamicMesh* TargetMesh, bool bAmbiguousTopologyFound, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumOpenBorderLoops");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderLoops_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bAmbiguousTopologyFound = bAmbiguousTopologyFound;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumOpenBorderEdges
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetNumOpenBorderEdges(class UDynamicMesh* TargetMesh, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumOpenBorderEdges");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumOpenBorderEdges_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumExtendedPolygroupLayers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumExtendedPolygroupLayers");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumExtendedPolygroupLayers_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetNumConnectedComponents
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetNumConnectedComponents(class UDynamicMesh* TargetMesh, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetNumConnectedComponents");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetNumConnectedComponents_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshVolumeArea
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// float                              SurfaceArea                                                      (None)
// float                              Volume                                                           (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetMeshVolumeArea(class UDynamicMesh* TargetMesh, float SurfaceArea, float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetMeshVolumeArea");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetMeshVolumeArea_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.SurfaceArea = SurfaceArea;
	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshInfoString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// class FString                      ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetMeshInfoString(class UDynamicMesh* TargetMesh, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetMeshInfoString");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetMeshInfoString_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshHasAttributeSet
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// bool                               ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetMeshHasAttributeSet(class UDynamicMesh* TargetMesh, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetMeshHasAttributeSet");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetMeshHasAttributeSet_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetMeshBoundingBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// struct FBox                        ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetMeshBoundingBox(class UDynamicMesh* TargetMesh, const struct FBox& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetMeshBoundingBox");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetMeshBoundingBox_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsDenseMesh
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// bool                               ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetIsDenseMesh(class UDynamicMesh* TargetMesh, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetIsDenseMesh");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetIsDenseMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetIsClosedMesh
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// bool                               ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetIsClosedMesh(class UDynamicMesh* TargetMesh, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetIsClosedMesh");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetIsClosedMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleVertexColor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              TriangleID                                                       (None)
// struct FVector                     BarycentricCoords                                                (None)
// struct FLinearColor                DefaultColor                                                     (None)
// bool                               bTriHasValidVertexColors                                         (None)
// struct FLinearColor                InterpolatedColor                                                (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleVertexColor(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct FVector& BarycentricCoords, const struct FLinearColor& DefaultColor, bool bTriHasValidVertexColors, const struct FLinearColor& InterpolatedColor, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTriangleVertexColor");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleVertexColor_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.BarycentricCoords = BarycentricCoords;
	Parms.DefaultColor = DefaultColor;
	Parms.bTriHasValidVertexColors = bTriHasValidVertexColors;
	Parms.InterpolatedColor = InterpolatedColor;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleUV
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              UvSetIndex                                                       (None)
// int32                              TriangleID                                                       (None)
// struct FVector                     BarycentricCoords                                                (None)
// bool                               bTriHasValidUVs                                                  (None)
// struct FVector2D                   InterpolatedUV                                                   (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleUV(class UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, const struct FVector& BarycentricCoords, bool bTriHasValidUVs, const struct FVector2D& InterpolatedUV, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTriangleUV");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleUV_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.TriangleID = TriangleID;
	Parms.BarycentricCoords = BarycentricCoords;
	Parms.bTriHasValidUVs = bTriHasValidUVs;
	Parms.InterpolatedUV = InterpolatedUV;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTrianglePosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              TriangleID                                                       (None)
// struct FVector                     BarycentricCoords                                                (None)
// bool                               bIsValidTriangle                                                 (None)
// struct FVector                     InterpolatedPosition                                             (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTrianglePosition(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct FVector& BarycentricCoords, bool bIsValidTriangle, const struct FVector& InterpolatedPosition, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTrianglePosition");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTrianglePosition_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.BarycentricCoords = BarycentricCoords;
	Parms.bIsValidTriangle = bIsValidTriangle;
	Parms.InterpolatedPosition = InterpolatedPosition;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormalTangents
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              TriangleID                                                       (None)
// struct FVector                     BarycentricCoords                                                (None)
// bool                               bTriHasValidElements                                             (None)
// struct FVector                     InterpolatedNormal                                               (None)
// struct FVector                     InterpolatedTangent                                              (None)
// struct FVector                     InterpolatedBiTangent                                            (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormalTangents(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct FVector& BarycentricCoords, bool bTriHasValidElements, const struct FVector& InterpolatedNormal, const struct FVector& InterpolatedTangent, const struct FVector& InterpolatedBiTangent, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTriangleNormalTangents");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormalTangents_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.BarycentricCoords = BarycentricCoords;
	Parms.bTriHasValidElements = bTriHasValidElements;
	Parms.InterpolatedNormal = InterpolatedNormal;
	Parms.InterpolatedTangent = InterpolatedTangent;
	Parms.InterpolatedBiTangent = InterpolatedBiTangent;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetInterpolatedTriangleNormal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              TriangleID                                                       (None)
// struct FVector                     BarycentricCoords                                                (None)
// bool                               bTriHasValidNormals                                              (None)
// struct FVector                     InterpolatedNormal                                               (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormal(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct FVector& BarycentricCoords, bool bTriHasValidNormals, const struct FVector& InterpolatedNormal, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetInterpolatedTriangleNormal");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetInterpolatedTriangleNormal_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.BarycentricCoords = BarycentricCoords;
	Parms.bTriHasValidNormals = bTriHasValidNormals;
	Parms.InterpolatedNormal = InterpolatedNormal;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexIDGaps
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// bool                               ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetHasVertexIDGaps(class UDynamicMesh* TargetMesh, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasVertexIDGaps");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexIDGaps_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasVertexColors
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// bool                               ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetHasVertexColors(class UDynamicMesh* TargetMesh, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasVertexColors");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasVertexColors_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleNormals
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// bool                               ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetHasTriangleNormals(class UDynamicMesh* TargetMesh, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasTriangleNormals");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleNormals_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasTriangleIDGaps
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// bool                               ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetHasTriangleIDGaps(class UDynamicMesh* TargetMesh, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasTriangleIDGaps");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasTriangleIDGaps_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasPolygroups
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// bool                               ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetHasPolygroups(class UDynamicMesh* TargetMesh, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasPolygroups");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasPolygroups_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetHasMaterialIDs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (None)
// bool                               ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetHasMaterialIDs(class UDynamicMesh* TargetMesh, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetHasMaterialIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetHasMaterialIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexPositions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptVectorList   PositionList                                                     (None)
// bool                               bSkipGaps                                                        (None)
// bool                               bHasVertexIDGaps                                                 (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexPositions(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& PositionList, bool bSkipGaps, bool bHasVertexIDGaps, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetAllVertexPositions");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexPositions_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PositionList = PositionList;
	Parms.bSkipGaps = bSkipGaps;
	Parms.bHasVertexIDGaps = bHasVertexIDGaps;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllVertexIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptIndexList    VertexIDList                                                     (None)
// bool                               bHasVertexIDGaps                                                 (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexIDs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& VertexIDList, bool bHasVertexIDGaps, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetAllVertexIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetAllVertexIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexIDList = VertexIDList;
	Parms.bHasVertexIDGaps = bHasVertexIDGaps;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIndices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptTriangleList TriangleList                                                     (None)
// bool                               bSkipGaps                                                        (None)
// bool                               bHasTriangleIDGaps                                               (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIndices(class UDynamicMesh* TargetMesh, const struct FGeometryScriptTriangleList& TriangleList, bool bSkipGaps, bool bHasTriangleIDGaps, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetAllTriangleIndices");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIndices_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleList = TriangleList;
	Parms.bSkipGaps = bSkipGaps;
	Parms.bHasTriangleIDGaps = bHasTriangleIDGaps;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.GetAllTriangleIDs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptIndexList    TriangleIDList                                                   (None)
// bool                               bHasTriangleIDGaps                                               (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIDs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleIDList, bool bHasTriangleIDGaps, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "GetAllTriangleIDs");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_GetAllTriangleIDs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleIDList = TriangleIDList;
	Parms.bHasTriangleIDGaps = bHasTriangleIDGaps;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions.ComputeTriangleBarycentricCoords
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              TriangleID                                                       (None)
// bool                               bIsValidTriangle                                                 (None)
// struct FVector                     Point                                                            (None)
// struct FVector                     Vertex1                                                          (None)
// struct FVector                     Vertex2                                                          (None)
// struct FVector                     Vertex3                                                          (None)
// struct FVector                     BarycentricCoords                                                (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshQueryFunctions::ComputeTriangleBarycentricCoords(class UDynamicMesh* TargetMesh, int32 TriangleID, bool bIsValidTriangle, const struct FVector& Point, const struct FVector& Vertex1, const struct FVector& Vertex2, const struct FVector& Vertex3, const struct FVector& BarycentricCoords, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshQueryFunctions", "ComputeTriangleBarycentricCoords");

	Params::UGeometryScriptLibrary_MeshQueryFunctions_ComputeTriangleBarycentricCoords_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleID = TriangleID;
	Parms.bIsValidTriangle = bIsValidTriangle;
	Parms.Point = Point;
	Parms.Vertex1 = Vertex1;
	Parms.Vertex2 = Vertex2;
	Parms.Vertex3 = Vertex3;
	Parms.BarycentricCoords = BarycentricCoords;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions
// (None)

class UClass* UGeometryScriptLibrary_RemeshingFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_RemeshingFunctions");

	return Clss;
}


// GeometryScriptLibrary_RemeshingFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_RemeshingFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_RemeshingFunctions* UGeometryScriptLibrary_RemeshingFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_RemeshingFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_RemeshingFunctions*>(UGeometryScriptLibrary_RemeshingFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions.ApplyUniformRemesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptRemeshOptionsRemeshOptions                                                    (None)
// struct FGeometryScriptUniformRemeshOptionsUniformOptions                                                   (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_RemeshingFunctions::ApplyUniformRemesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptRemeshOptions& RemeshOptions, const struct FGeometryScriptUniformRemeshOptions& UniformOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RemeshingFunctions", "ApplyUniformRemesh");

	Params::UGeometryScriptLibrary_RemeshingFunctions_ApplyUniformRemesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.RemeshOptions = RemeshOptions;
	Parms.UniformOptions = UniformOptions;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshRepairFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshRepairFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshRepairFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshRepairFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshRepairFunctions* UGeometryScriptLibrary_MeshRepairFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshRepairFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshRepairFunctions*>(UGeometryScriptLibrary_MeshRepairFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.WeldMeshEdges
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptWeldEdgesOptionsWeldOptions                                                      (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshRepairFunctions::WeldMeshEdges(class UDynamicMesh* TargetMesh, const struct FGeometryScriptWeldEdgesOptions& WeldOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "WeldMeshEdges");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_WeldMeshEdges_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.WeldOptions = WeldOptions;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.SplitMeshBowties
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// bool                               bMeshBowties                                                     (None)
// bool                               bAttributeBowties                                                (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshRepairFunctions::SplitMeshBowties(class UDynamicMesh* TargetMesh, bool bMeshBowties, bool bAttributeBowties, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "SplitMeshBowties");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_SplitMeshBowties_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.bMeshBowties = bMeshBowties;
	Parms.bAttributeBowties = bAttributeBowties;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.ResolveMeshTJunctions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptResolveTJunctionOptionsResolveOptions                                                   (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshRepairFunctions::ResolveMeshTJunctions(class UDynamicMesh* TargetMesh, const struct FGeometryScriptResolveTJunctionOptions& ResolveOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "ResolveMeshTJunctions");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_ResolveMeshTJunctions_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ResolveOptions = ResolveOptions;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RepairMeshDegenerateGeometry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptDegenerateTriangleOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshRepairFunctions::RepairMeshDegenerateGeometry(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDegenerateTriangleOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "RepairMeshDegenerateGeometry");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_RepairMeshDegenerateGeometry_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveSmallComponents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptRemoveSmallComponentOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshRepairFunctions::RemoveSmallComponents(class UDynamicMesh* TargetMesh, const struct FGeometryScriptRemoveSmallComponentOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "RemoveSmallComponents");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_RemoveSmallComponents_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.RemoveHiddenTriangles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptRemoveHiddenTrianglesOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshRepairFunctions::RemoveHiddenTriangles(class UDynamicMesh* TargetMesh, const struct FGeometryScriptRemoveHiddenTrianglesOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "RemoveHiddenTriangles");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_RemoveHiddenTriangles_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.FillAllMeshHoles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptFillHolesOptionsFillOptions                                                      (None)
// int32                              NumFilledHoles                                                   (None)
// int32                              NumFailedHoleFills                                               (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshRepairFunctions::FillAllMeshHoles(class UDynamicMesh* TargetMesh, const struct FGeometryScriptFillHolesOptions& FillOptions, int32 NumFilledHoles, int32 NumFailedHoleFills, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "FillAllMeshHoles");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_FillAllMeshHoles_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.FillOptions = FillOptions;
	Parms.NumFilledHoles = NumFilledHoles;
	Parms.NumFailedHoleFills = NumFailedHoleFills;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions.CompactMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshRepairFunctions::CompactMesh(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshRepairFunctions", "CompactMesh");

	Params::UGeometryScriptLibrary_MeshRepairFunctions_CompactMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshSamplingFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSamplingFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshSamplingFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshSamplingFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshSamplingFunctions* UGeometryScriptLibrary_MeshSamplingFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshSamplingFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshSamplingFunctions*>(UGeometryScriptLibrary_MeshSamplingFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeVertexWeightedPointSampling
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshPointSamplingOptionsOptions                                                          (None)
// struct FGeometryScriptNonUniformPointSamplingOptionsNonUniformOptions                                                (None)
// struct FGeometryScriptScalarList   VertexWeights                                                    (None)
// TArray<struct FTransform>          Samples                                                          (None)
// TArray<double>                     SampleRadii                                                      (None)
// struct FGeometryScriptIndexList    TriangleIDs                                                      (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSamplingFunctions::ComputeVertexWeightedPointSampling(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshPointSamplingOptions& Options, const struct FGeometryScriptNonUniformPointSamplingOptions& NonUniformOptions, const struct FGeometryScriptScalarList& VertexWeights, const TArray<struct FTransform>& Samples, const TArray<double>& SampleRadii, const struct FGeometryScriptIndexList& TriangleIDs, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSamplingFunctions", "ComputeVertexWeightedPointSampling");

	Params::UGeometryScriptLibrary_MeshSamplingFunctions_ComputeVertexWeightedPointSampling_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.NonUniformOptions = NonUniformOptions;
	Parms.VertexWeights = VertexWeights;
	Parms.Samples = Samples;
	Parms.SampleRadii = SampleRadii;
	Parms.TriangleIDs = TriangleIDs;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputePointSampling
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshPointSamplingOptionsOptions                                                          (None)
// TArray<struct FTransform>          Samples                                                          (None)
// struct FGeometryScriptIndexList    TriangleIDs                                                      (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSamplingFunctions::ComputePointSampling(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshPointSamplingOptions& Options, const TArray<struct FTransform>& Samples, const struct FGeometryScriptIndexList& TriangleIDs, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSamplingFunctions", "ComputePointSampling");

	Params::UGeometryScriptLibrary_MeshSamplingFunctions_ComputePointSampling_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Samples = Samples;
	Parms.TriangleIDs = TriangleIDs;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions.ComputeNonUniformPointSampling
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshPointSamplingOptionsOptions                                                          (None)
// struct FGeometryScriptNonUniformPointSamplingOptionsNonUniformOptions                                                (None)
// TArray<struct FTransform>          Samples                                                          (None)
// TArray<double>                     SampleRadii                                                      (None)
// struct FGeometryScriptIndexList    TriangleIDs                                                      (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSamplingFunctions::ComputeNonUniformPointSampling(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshPointSamplingOptions& Options, const struct FGeometryScriptNonUniformPointSamplingOptions& NonUniformOptions, const TArray<struct FTransform>& Samples, const TArray<double>& SampleRadii, const struct FGeometryScriptIndexList& TriangleIDs, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSamplingFunctions", "ComputeNonUniformPointSampling");

	Params::UGeometryScriptLibrary_MeshSamplingFunctions_ComputeNonUniformPointSampling_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.NonUniformOptions = NonUniformOptions;
	Parms.Samples = Samples;
	Parms.SampleRadii = SampleRadii;
	Parms.TriangleIDs = TriangleIDs;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshSelectionFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSelectionFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshSelectionFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshSelectionFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshSelectionFunctions* UGeometryScriptLibrary_MeshSelectionFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshSelectionFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshSelectionFunctions*>(UGeometryScriptLibrary_MeshSelectionFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsWithPlane
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FVector                     PlaneOrigin                                                      (None)
// struct FVector                     PlaneNormal                                                      (None)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (None)
// bool                               bInvert                                                          (None)
// int32                              MinNumTrianglePoints                                             (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsWithPlane(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& PlaneOrigin, const struct FVector& PlaneNormal, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsWithPlane");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.PlaneOrigin = PlaneOrigin;
	Parms.PlaneNormal = PlaneNormal;
	Parms.SelectionType = SelectionType;
	Parms.bInvert = bInvert;
	Parms.MinNumTrianglePoints = MinNumTrianglePoints;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInSphere
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FVector                     SphereOrigin                                                     (None)
// double                             SphereRadius                                                     (None)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (None)
// bool                               bInvert                                                          (None)
// int32                              MinNumTrianglePoints                                             (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInSphere(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& SphereOrigin, double SphereRadius, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsInSphere");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.SphereOrigin = SphereOrigin;
	Parms.SphereRadius = SphereRadius;
	Parms.SelectionType = SelectionType;
	Parms.bInvert = bInvert;
	Parms.MinNumTrianglePoints = MinNumTrianglePoints;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInsideMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UDynamicMesh*                SelectionMesh                                                    (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FTransform                  SelectionMeshTransform                                           (None)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (None)
// bool                               bInvert                                                          (None)
// double                             ShellDistance                                                    (None)
// double                             WindingThreshold                                                 (None)
// int32                              MinNumTrianglePoints                                             (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInsideMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* SelectionMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FTransform& SelectionMeshTransform, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, double ShellDistance, double WindingThreshold, int32 MinNumTrianglePoints, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsInsideMesh");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.SelectionMesh = SelectionMesh;
	Parms.Selection = Selection;
	Parms.SelectionMeshTransform = SelectionMeshTransform;
	Parms.SelectionType = SelectionType;
	Parms.bInvert = bInvert;
	Parms.ShellDistance = ShellDistance;
	Parms.WindingThreshold = WindingThreshold;
	Parms.MinNumTrianglePoints = MinNumTrianglePoints;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsInBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FBox                        Box                                                              (None)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (None)
// bool                               bInvert                                                          (None)
// int32                              MinNumTrianglePoints                                             (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInBox(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FBox& Box, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsInBox");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Box = Box;
	Parms.SelectionType = SelectionType;
	Parms.bInvert = bInvert;
	Parms.MinNumTrianglePoints = MinNumTrianglePoints;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.SelectMeshElementsByNormalAngle
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FVector                     Normal                                                           (None)
// double                             MaxAngleDeg                                                      (None)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (None)
// bool                               bInvert                                                          (None)
// int32                              MinNumTrianglePoints                                             (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByNormalAngle(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& Normal, double MaxAngleDeg, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "SelectMeshElementsByNormalAngle");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Normal = Normal;
	Parms.MaxAngleDeg = MaxAngleDeg;
	Parms.SelectionType = SelectionType;
	Parms.bInvert = bInvert;
	Parms.MinNumTrianglePoints = MinNumTrianglePoints;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.InvertMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FGeometryScriptMeshSelectionNewSelection                                                     (None)
// bool                               bOnlyToConnected                                                 (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSelectionFunctions::InvertMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptMeshSelection& NewSelection, bool bOnlyToConnected, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "InvertMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.NewSelection = NewSelection;
	Parms.bOnlyToConnected = bOnlyToConnected;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.GetMeshSelectionInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (None)
// int32                              NumSelected                                                      (None)

void UGeometryScriptLibrary_MeshSelectionFunctions::GetMeshSelectionInfo(const struct FGeometryScriptMeshSelection& Selection, enum class EGeometryScriptMeshSelectionType SelectionType, int32 NumSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "GetMeshSelectionInfo");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Params Parms{};

	Parms.Selection = Selection;
	Parms.SelectionType = SelectionType;
	Parms.NumSelected = NumSelected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandMeshSelectionToConnected
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FGeometryScriptMeshSelectionNewSelection                                                     (None)
// enum class EGeometryScriptTopologyConnectionTypeConnectionType                                                   (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSelectionFunctions::ExpandMeshSelectionToConnected(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptMeshSelection& NewSelection, enum class EGeometryScriptTopologyConnectionType ConnectionType, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ExpandMeshSelectionToConnected");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.NewSelection = NewSelection;
	Parms.ConnectionType = ConnectionType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ExpandContractMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FGeometryScriptMeshSelectionNewSelection                                                     (None)
// int32                              Iterations                                                       (None)
// bool                               bContract                                                        (None)
// bool                               bOnlyExpandToFaceNeighbours                                      (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptMeshSelection& NewSelection, int32 Iterations, bool bContract, bool bOnlyExpandToFaceNeighbours, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ExpandContractMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.NewSelection = NewSelection;
	Parms.Iterations = Iterations;
	Parms.bContract = bContract;
	Parms.bOnlyExpandToFaceNeighbours = bOnlyExpandToFaceNeighbours;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.DebugPrintMeshSelection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// bool                               bDisable                                                         (None)

void UGeometryScriptLibrary_MeshSelectionFunctions::DebugPrintMeshSelection(const struct FGeometryScriptMeshSelection& Selection, bool bDisable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "DebugPrintMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Params Parms{};

	Parms.Selection = Selection;
	Parms.bDisable = bDisable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CreateSelectAllMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSelectionFunctions::CreateSelectAllMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, enum class EGeometryScriptMeshSelectionType SelectionType, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "CreateSelectAllMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.SelectionType = SelectionType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FGeometryScriptIndexList    IndexList                                                        (None)
// enum class EGeometryScriptIndexTypeResultListType                                                   (None)
// enum class EGeometryScriptIndexTypeConvertToType                                                    (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelectionToIndexList(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptIndexList& IndexList, enum class EGeometryScriptIndexType ResultListType, enum class EGeometryScriptIndexType ConvertToType, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertMeshSelectionToIndexList");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.IndexList = IndexList;
	Parms.ResultListType = ResultListType;
	Parms.ConvertToType = ConvertToType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelectionToIndexArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// TArray<int32>                      IndexArray                                                       (None)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelectionToIndexArray(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const TArray<int32>& IndexArray, enum class EGeometryScriptMeshSelectionType SelectionType, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertMeshSelectionToIndexArray");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.IndexArray = IndexArray;
	Parms.SelectionType = SelectionType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionFromSelection                                                    (None)
// struct FGeometryScriptMeshSelectionToSelection                                                      (None)
// enum class EGeometryScriptMeshSelectionTypeNewType                                                          (None)
// bool                               bAllowPartialInclusion                                           (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& FromSelection, const struct FGeometryScriptMeshSelection& ToSelection, enum class EGeometryScriptMeshSelectionType NewType, bool bAllowPartialInclusion, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.FromSelection = FromSelection;
	Parms.ToSelection = ToSelection;
	Parms.NewType = NewType;
	Parms.bAllowPartialInclusion = bAllowPartialInclusion;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexSetToMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// TSet<int32>                        IndexSet                                                         (None)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (None)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexSetToMeshSelection(class UDynamicMesh* TargetMesh, TSet<int32> IndexSet, enum class EGeometryScriptMeshSelectionType SelectionType, const struct FGeometryScriptMeshSelection& Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertIndexSetToMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.IndexSet = IndexSet;
	Parms.SelectionType = SelectionType;
	Parms.Selection = Selection;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexListToMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptIndexList    IndexList                                                        (None)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (None)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexListToMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& IndexList, enum class EGeometryScriptMeshSelectionType SelectionType, const struct FGeometryScriptMeshSelection& Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertIndexListToMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.IndexList = IndexList;
	Parms.SelectionType = SelectionType;
	Parms.Selection = Selection;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.ConvertIndexArrayToMeshSelection
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// TArray<int32>                      IndexArray                                                       (None)
// enum class EGeometryScriptMeshSelectionTypeSelectionType                                                    (None)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexArrayToMeshSelection(class UDynamicMesh* TargetMesh, const TArray<int32>& IndexArray, enum class EGeometryScriptMeshSelectionType SelectionType, const struct FGeometryScriptMeshSelection& Selection, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "ConvertIndexArrayToMeshSelection");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.IndexArray = IndexArray;
	Parms.SelectionType = SelectionType;
	Parms.Selection = Selection;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions.CombineMeshSelections
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptMeshSelectionSelectionA                                                       (None)
// struct FGeometryScriptMeshSelectionSelectionB                                                       (None)
// struct FGeometryScriptMeshSelectionResultSelection                                                  (None)
// enum class EGeometryScriptCombineSelectionModeCombineMode                                                      (None)

void UGeometryScriptLibrary_MeshSelectionFunctions::CombineMeshSelections(const struct FGeometryScriptMeshSelection& SelectionA, const struct FGeometryScriptMeshSelection& SelectionB, const struct FGeometryScriptMeshSelection& ResultSelection, enum class EGeometryScriptCombineSelectionMode CombineMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionFunctions", "CombineMeshSelections");

	Params::UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Params Parms{};

	Parms.SelectionA = SelectionA;
	Parms.SelectionB = SelectionB;
	Parms.ResultSelection = ResultSelection;
	Parms.CombineMode = CombineMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshSelectionQueryFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSelectionQueryFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshSelectionQueryFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshSelectionQueryFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshSelectionQueryFunctions* UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshSelectionQueryFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshSelectionQueryFunctions*>(UGeometryScriptLibrary_MeshSelectionQueryFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundingBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FBox                        SelectionBounds                                                  (None)
// bool                               bIsEmpty                                                         (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundingBox(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FBox& SelectionBounds, bool bIsEmpty, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionQueryFunctions", "GetMeshSelectionBoundingBox");

	Params::UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundingBox_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.SelectionBounds = SelectionBounds;
	Parms.bIsEmpty = bIsEmpty;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions.GetMeshSelectionBoundaryLoops
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// TArray<struct FGeometryScriptIndexList>IndexLoops                                                       (None)
// TArray<struct FGeometryScriptPolyPath>PathLoops                                                        (None)
// int32                              NumLoops                                                         (None)
// bool                               bFoundErrors                                                     (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSelectionQueryFunctions::GetMeshSelectionBoundaryLoops(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const TArray<struct FGeometryScriptIndexList>& IndexLoops, const TArray<struct FGeometryScriptPolyPath>& PathLoops, int32 NumLoops, bool bFoundErrors, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSelectionQueryFunctions", "GetMeshSelectionBoundaryLoops");

	Params::UGeometryScriptLibrary_MeshSelectionQueryFunctions_GetMeshSelectionBoundaryLoops_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.IndexLoops = IndexLoops;
	Parms.PathLoops = PathLoops;
	Parms.NumLoops = NumLoops;
	Parms.bFoundErrors = bFoundErrors;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshSimplifyFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSimplifyFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshSimplifyFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshSimplifyFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshSimplifyFunctions* UGeometryScriptLibrary_MeshSimplifyFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshSimplifyFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshSimplifyFunctions*>(UGeometryScriptLibrary_MeshSimplifyFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToVertexCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              Vertexcount                                                      (None)
// struct FGeometryScriptSimplifyMeshOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToVertexCount(class UDynamicMesh* TargetMesh, int32 Vertexcount, const struct FGeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSimplifyFunctions", "ApplySimplifyToVertexCount");

	Params::UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToVertexCount_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Vertexcount = Vertexcount;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTriangleCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              TriangleCount                                                    (None)
// struct FGeometryScriptSimplifyMeshOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToTriangleCount(class UDynamicMesh* TargetMesh, int32 TriangleCount, const struct FGeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSimplifyFunctions", "ApplySimplifyToTriangleCount");

	Params::UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTriangleCount_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TriangleCount = TriangleCount;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToTolerance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// float                              Tolerance                                                        (None)
// struct FGeometryScriptSimplifyMeshOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToTolerance(class UDynamicMesh* TargetMesh, float Tolerance, const struct FGeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSimplifyFunctions", "ApplySimplifyToTolerance");

	Params::UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToTolerance_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Tolerance = Tolerance;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPolygroupTopology
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPolygroupSimplifyOptionsOptions                                                          (None)
// struct FGeometryScriptGroupLayer   GroupLayer                                                       (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToPolygroupTopology(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPolygroupSimplifyOptions& Options, const struct FGeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSimplifyFunctions", "ApplySimplifyToPolygroupTopology");

	Params::UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPolygroupTopology_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.GroupLayer = GroupLayer;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions.ApplySimplifyToPlanar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPlanarSimplifyOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToPlanar(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPlanarSimplifyOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSimplifyFunctions", "ApplySimplifyToPlanar");

	Params::UGeometryScriptLibrary_MeshSimplifyFunctions_ApplySimplifyToPlanar_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial
// (None)

class UClass* UGeometryScriptLibrary_MeshSpatial::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSpatial");

	return Clss;
}


// GeometryScriptLibrary_MeshSpatial GeometryScriptingCore.Default__GeometryScriptLibrary_MeshSpatial
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshSpatial* UGeometryScriptLibrary_MeshSpatial::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshSpatial* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshSpatial*>(UGeometryScriptLibrary_MeshSpatial::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.ResetBVH
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptDynamicMeshBVHResetBVH                                                         (None)

void UGeometryScriptLibrary_MeshSpatial::ResetBVH(const struct FGeometryScriptDynamicMeshBVH& ResetBVH)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "ResetBVH");

	Params::UGeometryScriptLibrary_MeshSpatial_ResetBVH_Params Parms{};

	Parms.ResetBVH = ResetBVH;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.RebuildBVHForMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptDynamicMeshBVHUpdateBVH                                                        (None)
// bool                               bOnlyIfInvalid                                                   (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSpatial::RebuildBVHForMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& UpdateBVH, bool bOnlyIfInvalid, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "RebuildBVHForMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_RebuildBVHForMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UpdateBVH = UpdateBVH;
	Parms.bOnlyIfInvalid = bOnlyIfInvalid;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsPointInsideMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptDynamicMeshBVHQueryBVH                                                         (None)
// struct FVector                     QueryPoint                                                       (None)
// struct FGeometryScriptSpatialQueryOptionsOptions                                                          (None)
// bool                               bIsInside                                                        (None)
// enum class EGeometryScriptContainmentOutcomePinsOutcome                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSpatial::IsPointInsideMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& QueryBVH, const struct FVector& QueryPoint, const struct FGeometryScriptSpatialQueryOptions& Options, bool bIsInside, enum class EGeometryScriptContainmentOutcomePins Outcome, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "IsPointInsideMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_IsPointInsideMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.QueryBVH = QueryBVH;
	Parms.QueryPoint = QueryPoint;
	Parms.Options = Options;
	Parms.bIsInside = bIsInside;
	Parms.Outcome = Outcome;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.IsBVHValidForMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptDynamicMeshBVHTestBVH                                                          (None)
// bool                               bIsValid                                                         (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSpatial::IsBVHValidForMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& TestBVH, bool bIsValid, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "IsBVHValidForMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_IsBVHValidForMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TestBVH = TestBVH;
	Parms.bIsValid = bIsValid;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestRayIntersectionWithMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptDynamicMeshBVHQueryBVH                                                         (None)
// struct FVector                     RayOrigin                                                        (None)
// struct FVector                     RayDirection                                                     (None)
// struct FGeometryScriptSpatialQueryOptionsOptions                                                          (None)
// struct FGeometryScriptRayHitResult HitResult                                                        (None)
// enum class EGeometryScriptSearchOutcomePinsOutcome                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSpatial::FindNearestRayIntersectionWithMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& QueryBVH, const struct FVector& RayOrigin, const struct FVector& RayDirection, const struct FGeometryScriptSpatialQueryOptions& Options, const struct FGeometryScriptRayHitResult& HitResult, enum class EGeometryScriptSearchOutcomePins Outcome, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "FindNearestRayIntersectionWithMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_FindNearestRayIntersectionWithMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.QueryBVH = QueryBVH;
	Parms.RayOrigin = RayOrigin;
	Parms.RayDirection = RayDirection;
	Parms.Options = Options;
	Parms.HitResult = HitResult;
	Parms.Outcome = Outcome;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.FindNearestPointOnMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptDynamicMeshBVHQueryBVH                                                         (None)
// struct FVector                     QueryPoint                                                       (None)
// struct FGeometryScriptSpatialQueryOptionsOptions                                                          (None)
// struct FGeometryScriptTrianglePointNearestResult                                                    (None)
// enum class EGeometryScriptSearchOutcomePinsOutcome                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSpatial::FindNearestPointOnMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& QueryBVH, const struct FVector& QueryPoint, const struct FGeometryScriptSpatialQueryOptions& Options, const struct FGeometryScriptTrianglePoint& NearestResult, enum class EGeometryScriptSearchOutcomePins Outcome, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "FindNearestPointOnMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_FindNearestPointOnMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.QueryBVH = QueryBVH;
	Parms.QueryPoint = QueryPoint;
	Parms.Options = Options;
	Parms.NearestResult = NearestResult;
	Parms.Outcome = Outcome;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial.BuildBVHForMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptDynamicMeshBVHOutputBVH                                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSpatial::BuildBVHForMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDynamicMeshBVH& OutputBVH, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSpatial", "BuildBVHForMesh");

	Params::UGeometryScriptLibrary_MeshSpatial_BuildBVHForMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.OutputBVH = OutputBVH;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshSubdivideFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSubdivideFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshSubdivideFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshSubdivideFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshSubdivideFunctions* UGeometryScriptLibrary_MeshSubdivideFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshSubdivideFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshSubdivideFunctions*>(UGeometryScriptLibrary_MeshSubdivideFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyUniformTessellation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              TessellationLevel                                                (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSubdivideFunctions::ApplyUniformTessellation(class UDynamicMesh* TargetMesh, int32 TessellationLevel, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSubdivideFunctions", "ApplyUniformTessellation");

	Params::UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyUniformTessellation_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.TessellationLevel = TessellationLevel;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplySelectiveTessellation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FGeometryScriptSelectiveTessellateOptionsOptions                                                          (None)
// int32                              TessellationLevel                                                (None)
// enum class ESelectiveTessellatePatternTypePatternType                                                      (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSubdivideFunctions::ApplySelectiveTessellation(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptSelectiveTessellateOptions& Options, int32 TessellationLevel, enum class ESelectiveTessellatePatternType PatternType, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSubdivideFunctions", "ApplySelectiveTessellation");

	Params::UGeometryScriptLibrary_MeshSubdivideFunctions_ApplySelectiveTessellation_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Options = Options;
	Parms.TessellationLevel = TessellationLevel;
	Parms.PatternType = PatternType;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions.ApplyPNTessellation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptPNTessellateOptionsOptions                                                          (None)
// int32                              TessellationLevel                                                (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshSubdivideFunctions::ApplyPNTessellation(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPNTessellateOptions& Options, int32 TessellationLevel, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshSubdivideFunctions", "ApplyPNTessellation");

	Params::UGeometryScriptLibrary_MeshSubdivideFunctions_ApplyPNTessellation_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.TessellationLevel = TessellationLevel;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshTransformFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshTransformFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshTransformFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshTransformFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshTransformFunctions* UGeometryScriptLibrary_MeshTransformFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshTransformFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshTransformFunctions*>(UGeometryScriptLibrary_MeshTransformFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslatePivotToLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FVector                     PivotLocation                                                    (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshTransformFunctions::TranslatePivotToLocation(class UDynamicMesh* TargetMesh, const struct FVector& PivotLocation, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TranslatePivotToLocation");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TranslatePivotToLocation_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.PivotLocation = PivotLocation;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMeshSelection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FVector                     Translation                                                      (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshTransformFunctions::TranslateMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& Translation, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TranslateMeshSelection");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TranslateMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Translation = Translation;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TranslateMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FVector                     Translation                                                      (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshTransformFunctions::TranslateMesh(class UDynamicMesh* TargetMesh, const struct FVector& Translation, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TranslateMesh");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TranslateMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Translation = Translation;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMeshSelection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FTransform                  Transform                                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshTransformFunctions::TransformMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FTransform& Transform, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TransformMeshSelection");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TransformMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Transform = Transform;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.TransformMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FTransform                  Transform                                                        (None)
// bool                               bFixOrientationForNegativeScale                                  (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshTransformFunctions::TransformMesh(class UDynamicMesh* TargetMesh, const struct FTransform& Transform, bool bFixOrientationForNegativeScale, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "TransformMesh");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_TransformMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Transform = Transform;
	Parms.bFixOrientationForNegativeScale = bFixOrientationForNegativeScale;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMeshSelection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FVector                     Scale                                                            (None)
// struct FVector                     ScaleOrigin                                                      (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshTransformFunctions::ScaleMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& Scale, const struct FVector& ScaleOrigin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "ScaleMeshSelection");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_ScaleMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Scale = Scale;
	Parms.ScaleOrigin = ScaleOrigin;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.ScaleMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FVector                     Scale                                                            (None)
// struct FVector                     ScaleOrigin                                                      (None)
// bool                               bFixOrientationForNegativeScale                                  (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshTransformFunctions::ScaleMesh(class UDynamicMesh* TargetMesh, const struct FVector& Scale, const struct FVector& ScaleOrigin, bool bFixOrientationForNegativeScale, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "ScaleMesh");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_ScaleMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Scale = Scale;
	Parms.ScaleOrigin = ScaleOrigin;
	Parms.bFixOrientationForNegativeScale = bFixOrientationForNegativeScale;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMeshSelection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FRotator                    Rotation                                                         (None)
// struct FVector                     RotationOrigin                                                   (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshTransformFunctions::RotateMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FRotator& Rotation, const struct FVector& RotationOrigin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "RotateMeshSelection");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_RotateMeshSelection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Rotation = Rotation;
	Parms.RotationOrigin = RotationOrigin;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions.RotateMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FRotator                    Rotation                                                         (None)
// struct FVector                     RotationOrigin                                                   (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshTransformFunctions::RotateMesh(class UDynamicMesh* TargetMesh, const struct FRotator& Rotation, const struct FVector& RotationOrigin, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshTransformFunctions", "RotateMesh");

	Params::UGeometryScriptLibrary_MeshTransformFunctions_RotateMesh_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Rotation = Rotation;
	Parms.RotationOrigin = RotationOrigin;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshUVFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshUVFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshUVFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshUVFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshUVFunctions* UGeometryScriptLibrary_MeshUVFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshUVFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshUVFunctions*>(UGeometryScriptLibrary_MeshUVFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.TranslateMeshUVs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              UvSetIndex                                                       (None)
// struct FVector2D                   Translation                                                      (None)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshUVFunctions::TranslateMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FVector2D& Translation, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "TranslateMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_TranslateMeshUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.Translation = Translation;
	Parms.Selection = Selection;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetNumUVSets
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              NumUVSets                                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshUVFunctions::SetNumUVSets(class UDynamicMesh* TargetMesh, int32 NumUVSets, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetNumUVSets");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetNumUVSets_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.NumUVSets = NumUVSets;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromPlanarProjection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              UvSetIndex                                                       (None)
// struct FTransform                  PlaneTransform                                                   (None)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromPlanarProjection(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FTransform& PlaneTransform, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetMeshUVsFromPlanarProjection");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromPlanarProjection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.PlaneTransform = PlaneTransform;
	Parms.Selection = Selection;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromCylinderProjection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              UvSetIndex                                                       (None)
// struct FTransform                  CylinderTransform                                                (None)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// float                              SplitAngle                                                       (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromCylinderProjection(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FTransform& CylinderTransform, const struct FGeometryScriptMeshSelection& Selection, float SplitAngle, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetMeshUVsFromCylinderProjection");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromCylinderProjection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.CylinderTransform = CylinderTransform;
	Parms.Selection = Selection;
	Parms.SplitAngle = SplitAngle;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshUVsFromBoxProjection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              UvSetIndex                                                       (None)
// struct FTransform                  BoxTransform                                                     (None)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// int32                              MinIslandTriCount                                                (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshUVFunctions::SetMeshUVsFromBoxProjection(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FTransform& BoxTransform, const struct FGeometryScriptMeshSelection& Selection, int32 MinIslandTriCount, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetMeshUVsFromBoxProjection");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetMeshUVsFromBoxProjection_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.BoxTransform = BoxTransform;
	Parms.Selection = Selection;
	Parms.MinIslandTriCount = MinIslandTriCount;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.SetMeshTriangleUVs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              UvSetIndex                                                       (None)
// int32                              TriangleID                                                       (None)
// struct FGeometryScriptUVTriangle   UVs                                                              (None)
// bool                               bIsValidTriangle                                                 (None)
// bool                               bDeferChangeNotifications                                        (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshUVFunctions::SetMeshTriangleUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, const struct FGeometryScriptUVTriangle& UVs, bool bIsValidTriangle, bool bDeferChangeNotifications, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "SetMeshTriangleUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_SetMeshTriangleUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.TriangleID = TriangleID;
	Parms.UVs = UVs;
	Parms.bIsValidTriangle = bIsValidTriangle;
	Parms.bDeferChangeNotifications = bDeferChangeNotifications;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.ScaleMeshUVs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              UvSetIndex                                                       (None)
// struct FVector2D                   Scale                                                            (None)
// struct FVector2D                   ScaleOrigin                                                      (None)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshUVFunctions::ScaleMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FVector2D& Scale, const struct FVector2D& ScaleOrigin, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "ScaleMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_ScaleMeshUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.Scale = Scale;
	Parms.ScaleOrigin = ScaleOrigin;
	Parms.Selection = Selection;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RotateMeshUVs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              UvSetIndex                                                       (None)
// float                              RotationAngle                                                    (None)
// struct FVector2D                   RotationOrigin                                                   (None)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshUVFunctions::RotateMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, float RotationAngle, const struct FVector2D& RotationOrigin, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "RotateMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_RotateMeshUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.RotationAngle = RotationAngle;
	Parms.RotationOrigin = RotationOrigin;
	Parms.Selection = Selection;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RepackMeshUVs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              UvSetIndex                                                       (None)
// struct FGeometryScriptRepackUVsOptionsRepackOptions                                                    (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshUVFunctions::RepackMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FGeometryScriptRepackUVsOptions& RepackOptions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "RepackMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_RepackMeshUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.RepackOptions = RepackOptions;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.RecomputeMeshUVs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              UvSetIndex                                                       (None)
// struct FGeometryScriptRecomputeUVsOptionsOptions                                                          (None)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshUVFunctions::RecomputeMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FGeometryScriptRecomputeUVsOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "RecomputeMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_RecomputeMeshUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.Options = Options;
	Parms.Selection = Selection;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshUVSizeInfo
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              UvSetIndex                                                       (None)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// double                             MeshArea                                                         (None)
// double                             UVArea                                                           (None)
// struct FBox                        MeshBounds                                                       (None)
// struct FBox2D                      UVBounds                                                         (None)
// bool                               bIsValidUVSet                                                    (None)
// bool                               bFoundUnsetUVs                                                   (None)
// bool                               bOnlyIncludeValidUVTris                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshUVFunctions::GetMeshUVSizeInfo(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FGeometryScriptMeshSelection& Selection, double MeshArea, double UVArea, const struct FBox& MeshBounds, const struct FBox2D& UVBounds, bool bIsValidUVSet, bool bFoundUnsetUVs, bool bOnlyIncludeValidUVTris, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "GetMeshUVSizeInfo");

	Params::UGeometryScriptLibrary_MeshUVFunctions_GetMeshUVSizeInfo_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.Selection = Selection;
	Parms.MeshArea = MeshArea;
	Parms.UVArea = UVArea;
	Parms.MeshBounds = MeshBounds;
	Parms.UVBounds = UVBounds;
	Parms.bIsValidUVSet = bIsValidUVSet;
	Parms.bFoundUnsetUVs = bFoundUnsetUVs;
	Parms.bOnlyIncludeValidUVTris = bOnlyIncludeValidUVTris;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.GetMeshPerVertexUVs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              UvSetIndex                                                       (None)
// struct FGeometryScriptUVList       UVList                                                           (None)
// bool                               bIsValidUVSet                                                    (None)
// bool                               bHasVertexIDGaps                                                 (None)
// bool                               bHasSplitUVs                                                     (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshUVFunctions::GetMeshPerVertexUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FGeometryScriptUVList& UVList, bool bIsValidUVSet, bool bHasVertexIDGaps, bool bHasSplitUVs, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "GetMeshPerVertexUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_GetMeshPerVertexUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.UVList = UVList;
	Parms.bIsValidUVSet = bIsValidUVSet;
	Parms.bHasVertexIDGaps = bHasVertexIDGaps;
	Parms.bHasSplitUVs = bHasSplitUVs;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyUVSet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              FromUVSet                                                        (None)
// int32                              ToUVSet                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshUVFunctions::CopyUVSet(class UDynamicMesh* TargetMesh, int32 FromUVSet, int32 ToUVSet, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "CopyUVSet");

	Params::UGeometryScriptLibrary_MeshUVFunctions_CopyUVSet_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.FromUVSet = FromUVSet;
	Parms.ToUVSet = ToUVSet;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshUVLayerToMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                CopyFromMesh                                                     (ZeroConstructor)
// int32                              UvSetIndex                                                       (None)
// class UDynamicMesh*                CopyToUVMesh                                                     (ZeroConstructor)
// class UDynamicMesh*                CopyToUVMeshOut                                                  (ZeroConstructor)
// bool                               bInvalidTopology                                                 (None)
// bool                               bIsValidUVSet                                                    (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshUVFunctions::CopyMeshUVLayerToMesh(class UDynamicMesh* CopyFromMesh, int32 UvSetIndex, class UDynamicMesh* CopyToUVMesh, class UDynamicMesh* CopyToUVMeshOut, bool bInvalidTopology, bool bIsValidUVSet, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "CopyMeshUVLayerToMesh");

	Params::UGeometryScriptLibrary_MeshUVFunctions_CopyMeshUVLayerToMesh_Params Parms{};

	Parms.CopyFromMesh = CopyFromMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.CopyToUVMesh = CopyToUVMesh;
	Parms.CopyToUVMeshOut = CopyToUVMeshOut;
	Parms.bInvalidTopology = bInvalidTopology;
	Parms.bIsValidUVSet = bIsValidUVSet;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.CopyMeshToMeshUVLayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                CopyFromUVMesh                                                   (ZeroConstructor)
// int32                              ToUVSetIndex                                                     (None)
// class UDynamicMesh*                CopyToMesh                                                       (ZeroConstructor)
// class UDynamicMesh*                CopyToMeshOut                                                    (ZeroConstructor)
// bool                               bFoundTopologyErrors                                             (None)
// bool                               bIsValidUVSet                                                    (None)
// bool                               bOnlyUVPositions                                                 (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshUVFunctions::CopyMeshToMeshUVLayer(class UDynamicMesh* CopyFromUVMesh, int32 ToUVSetIndex, class UDynamicMesh* CopyToMesh, class UDynamicMesh* CopyToMeshOut, bool bFoundTopologyErrors, bool bIsValidUVSet, bool bOnlyUVPositions, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "CopyMeshToMeshUVLayer");

	Params::UGeometryScriptLibrary_MeshUVFunctions_CopyMeshToMeshUVLayer_Params Parms{};

	Parms.CopyFromUVMesh = CopyFromUVMesh;
	Parms.ToUVSetIndex = ToUVSetIndex;
	Parms.CopyToMesh = CopyToMesh;
	Parms.CopyToMeshOut = CopyToMeshOut;
	Parms.bFoundTopologyErrors = bFoundTopologyErrors;
	Parms.bIsValidUVSet = bIsValidUVSet;
	Parms.bOnlyUVPositions = bOnlyUVPositions;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGenerateXAtlasMeshUVs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              UvSetIndex                                                       (None)
// struct FGeometryScriptXAtlasOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshUVFunctions::AutoGenerateXAtlasMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FGeometryScriptXAtlasOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "AutoGenerateXAtlasMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_AutoGenerateXAtlasMeshUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions.AutoGeneratePatchBuilderMeshUVs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// int32                              UvSetIndex                                                       (None)
// struct FGeometryScriptPatchBuilderOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshUVFunctions::AutoGeneratePatchBuilderMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FGeometryScriptPatchBuilderOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshUVFunctions", "AutoGeneratePatchBuilderMeshUVs");

	Params::UGeometryScriptLibrary_MeshUVFunctions_AutoGeneratePatchBuilderMeshUVs_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.UvSetIndex = UvSetIndex;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshVertexColorFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshVertexColorFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshVertexColorFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshVertexColorFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshVertexColorFunctions* UGeometryScriptLibrary_MeshVertexColorFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshVertexColorFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshVertexColorFunctions*>(UGeometryScriptLibrary_MeshVertexColorFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshSelectionVertexColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMeshSelectionSelection                                                        (None)
// struct FLinearColor                Color                                                            (None)
// struct FGeometryScriptColorFlags   Flags                                                            (None)
// bool                               bCreateColorSeam                                                 (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshSelectionVertexColor(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FLinearColor& Color, const struct FGeometryScriptColorFlags& Flags, bool bCreateColorSeam, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "SetMeshSelectionVertexColor");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshSelectionVertexColor_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Selection = Selection;
	Parms.Color = Color;
	Parms.Flags = Flags;
	Parms.bCreateColorSeam = bCreateColorSeam;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshPerVertexColors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptColorList    VertexColorList                                                  (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshPerVertexColors(class UDynamicMesh* TargetMesh, const struct FGeometryScriptColorList& VertexColorList, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "SetMeshPerVertexColors");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshPerVertexColors_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.VertexColorList = VertexColorList;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.SetMeshConstantVertexColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FLinearColor                Color                                                            (None)
// struct FGeometryScriptColorFlags   Flags                                                            (None)
// bool                               bClearExisting                                                   (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshVertexColorFunctions::SetMeshConstantVertexColor(class UDynamicMesh* TargetMesh, const struct FLinearColor& Color, const struct FGeometryScriptColorFlags& Flags, bool bClearExisting, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "SetMeshConstantVertexColor");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_SetMeshConstantVertexColor_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Color = Color;
	Parms.Flags = Flags;
	Parms.bClearExisting = bClearExisting;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.GetMeshPerVertexColors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptColorList    ColorList                                                        (None)
// bool                               bIsValidColorSet                                                 (None)
// bool                               bHasVertexIDGaps                                                 (None)
// bool                               bBlendSplitVertexValues                                          (None)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshVertexColorFunctions::GetMeshPerVertexColors(class UDynamicMesh* TargetMesh, const struct FGeometryScriptColorList& ColorList, bool bIsValidColorSet, bool bHasVertexIDGaps, bool bBlendSplitVertexValues, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "GetMeshPerVertexColors");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_GetMeshPerVertexColors_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.ColorList = ColorList;
	Parms.bIsValidColorSet = bIsValidColorSet;
	Parms.bHasVertexIDGaps = bHasVertexIDGaps;
	Parms.bBlendSplitVertexValues = bBlendSplitVertexValues;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsSRGBToLinear
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshVertexColorFunctions::ConvertMeshVertexColorsSRGBToLinear(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "ConvertMeshVertexColorsSRGBToLinear");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsSRGBToLinear_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions.ConvertMeshVertexColorsLinearToSRGB
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshVertexColorFunctions::ConvertMeshVertexColorsLinearToSRGB(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVertexColorFunctions", "ConvertMeshVertexColorsLinearToSRGB");

	Params::UGeometryScriptLibrary_MeshVertexColorFunctions_ConvertMeshVertexColorsLinearToSRGB_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions
// (None)

class UClass* UGeometryScriptLibrary_MeshVoxelFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshVoxelFunctions");

	return Clss;
}


// GeometryScriptLibrary_MeshVoxelFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_MeshVoxelFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_MeshVoxelFunctions* UGeometryScriptLibrary_MeshVoxelFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_MeshVoxelFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_MeshVoxelFunctions*>(UGeometryScriptLibrary_MeshVoxelFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions.ApplyMeshSolidify
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptSolidifyOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshVoxelFunctions::ApplyMeshSolidify(class UDynamicMesh* TargetMesh, const struct FGeometryScriptSolidifyOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVoxelFunctions", "ApplyMeshSolidify");

	Params::UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshSolidify_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions.ApplyMeshMorphology
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                TargetMesh                                                       (ZeroConstructor)
// struct FGeometryScriptMorphologyOptionsOptions                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_MeshVoxelFunctions::ApplyMeshMorphology(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMorphologyOptions& Options, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_MeshVoxelFunctions", "ApplyMeshMorphology");

	Params::UGeometryScriptLibrary_MeshVoxelFunctions_ApplyMeshMorphology_Params Parms{};

	Parms.TargetMesh = TargetMesh;
	Parms.Options = Options;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions
// (None)

class UClass* UGeometryScriptLibrary_PolyPathFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_PolyPathFunctions");

	return Clss;
}


// GeometryScriptLibrary_PolyPathFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_PolyPathFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_PolyPathFunctions* UGeometryScriptLibrary_PolyPathFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_PolyPathFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_PolyPathFunctions*>(UGeometryScriptLibrary_PolyPathFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.SampleSplineToTransforms
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USplineComponent*            Spline                                                           (None)
// TArray<struct FTransform>          Frames                                                           (None)
// TArray<double>                     FrameTimes                                                       (None)
// struct FGeometryScriptSplineSamplingOptionsSamplingOptions                                                  (None)
// struct FTransform                  RelativeTransform                                                (None)
// bool                               bIncludeScale                                                    (None)

void UGeometryScriptLibrary_PolyPathFunctions::SampleSplineToTransforms(class USplineComponent* Spline, const TArray<struct FTransform>& Frames, const TArray<double>& FrameTimes, const struct FGeometryScriptSplineSamplingOptions& SamplingOptions, const struct FTransform& RelativeTransform, bool bIncludeScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "SampleSplineToTransforms");

	Params::UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Params Parms{};

	Parms.Spline = Spline;
	Parms.Frames = Frames;
	Parms.FrameTimes = FrameTimes;
	Parms.SamplingOptions = SamplingOptions;
	Parms.RelativeTransform = RelativeTransform;
	Parms.bIncludeScale = bIncludeScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathVertex
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (None)
// int32                              Index                                                            (None)
// bool                               bIsValidIndex                                                    (None)
// struct FVector                     ReturnValue                                                      (None)

void UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathVertex(const struct FGeometryScriptPolyPath& PolyPath, int32 Index, bool bIsValidIndex, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathVertex");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.Index = Index;
	Parms.bIsValidIndex = bIsValidIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathTangent
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (None)
// int32                              Index                                                            (None)
// bool                               bIsValidIndex                                                    (None)
// struct FVector                     ReturnValue                                                      (None)

void UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathTangent(const struct FGeometryScriptPolyPath& PolyPath, int32 Index, bool bIsValidIndex, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathTangent");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.Index = Index;
	Parms.bIsValidIndex = bIsValidIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathNumVertices
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathNumVertices(const struct FGeometryScriptPolyPath& PolyPath, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathNumVertices");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathLastIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathLastIndex(const struct FGeometryScriptPolyPath& PolyPath, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathLastIndex");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetPolyPathArcLength
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (None)
// double                             ReturnValue                                                      (None)

void UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathArcLength(const struct FGeometryScriptPolyPath& PolyPath, double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetPolyPathArcLength");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.GetNearestVertexIndex
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (None)
// struct FVector                     Point                                                            (None)
// int32                              ReturnValue                                                      (None)

void UGeometryScriptLibrary_PolyPathFunctions::GetNearestVertexIndex(const struct FGeometryScriptPolyPath& PolyPath, const struct FVector& Point, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "GetNearestVertexIndex");

	Params::UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.Point = Point;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.FlattenTo2DOnAxis
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (None)
// enum class EGeometryScriptAxis     DropAxis                                                         (None)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (None)

void UGeometryScriptLibrary_PolyPathFunctions::FlattenTo2DOnAxis(const struct FGeometryScriptPolyPath& PolyPath, enum class EGeometryScriptAxis DropAxis, const struct FGeometryScriptPolyPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "FlattenTo2DOnAxis");

	Params::UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.DropAxis = DropAxis;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  Transform                                                        (None)
// float                              Radius                                                           (None)
// int32                              NumPoints                                                        (None)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (None)

void UGeometryScriptLibrary_PolyPathFunctions::CreateCirclePath3D(const struct FTransform& Transform, float Radius, int32 NumPoints, const struct FGeometryScriptPolyPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "CreateCirclePath3D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Params Parms{};

	Parms.Transform = Transform;
	Parms.Radius = Radius;
	Parms.NumPoints = NumPoints;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateCirclePath2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Center                                                           (None)
// float                              Radius                                                           (None)
// int32                              NumPoints                                                        (None)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (None)

void UGeometryScriptLibrary_PolyPathFunctions::CreateCirclePath2D(const struct FVector2D& Center, float Radius, int32 NumPoints, const struct FGeometryScriptPolyPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "CreateCirclePath2D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Params Parms{};

	Parms.Center = Center;
	Parms.Radius = Radius;
	Parms.NumPoints = NumPoints;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  Transform                                                        (None)
// float                              Radius                                                           (None)
// int32                              NumPoints                                                        (None)
// float                              StartAngle                                                       (None)
// float                              EndAngle                                                         (None)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (None)

void UGeometryScriptLibrary_PolyPathFunctions::CreateArcPath3D(const struct FTransform& Transform, float Radius, int32 NumPoints, float StartAngle, float EndAngle, const struct FGeometryScriptPolyPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "CreateArcPath3D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Params Parms{};

	Parms.Transform = Transform;
	Parms.Radius = Radius;
	Parms.NumPoints = NumPoints;
	Parms.StartAngle = StartAngle;
	Parms.EndAngle = EndAngle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.CreateArcPath2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Center                                                           (None)
// float                              Radius                                                           (None)
// int32                              NumPoints                                                        (None)
// float                              StartAngle                                                       (None)
// float                              EndAngle                                                         (None)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (None)

void UGeometryScriptLibrary_PolyPathFunctions::CreateArcPath2D(const struct FVector2D& Center, float Radius, int32 NumPoints, float StartAngle, float EndAngle, const struct FGeometryScriptPolyPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "CreateArcPath2D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Params Parms{};

	Parms.Center = Center;
	Parms.Radius = Radius;
	Parms.NumPoints = NumPoints;
	Parms.StartAngle = StartAngle;
	Parms.EndAngle = EndAngle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertSplineToPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USplineComponent*            Spline                                                           (None)
// struct FGeometryScriptPolyPath     PolyPath                                                         (None)
// struct FGeometryScriptSplineSamplingOptionsSamplingOptions                                                  (None)

void UGeometryScriptLibrary_PolyPathFunctions::ConvertSplineToPolyPath(class USplineComponent* Spline, const struct FGeometryScriptPolyPath& PolyPath, const struct FGeometryScriptSplineSamplingOptions& SamplingOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "ConvertSplineToPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Params Parms{};

	Parms.Spline = Spline;
	Parms.PolyPath = PolyPath;
	Parms.SamplingOptions = SamplingOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArrayOfVector2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (None)
// TArray<struct FVector2D>           VertexArray                                                      (None)

void UGeometryScriptLibrary_PolyPathFunctions::ConvertPolyPathToArrayOfVector2D(const struct FGeometryScriptPolyPath& PolyPath, const TArray<struct FVector2D>& VertexArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "ConvertPolyPathToArrayOfVector2D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.VertexArray = VertexArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertPolyPathToArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (None)
// TArray<struct FVector>             VertexArray                                                      (None)

void UGeometryScriptLibrary_PolyPathFunctions::ConvertPolyPathToArray(const struct FGeometryScriptPolyPath& PolyPath, const TArray<struct FVector>& VertexArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "ConvertPolyPathToArray");

	Params::UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.VertexArray = VertexArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayToPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             VertexArray                                                      (None)
// struct FGeometryScriptPolyPath     PolyPath                                                         (None)

void UGeometryScriptLibrary_PolyPathFunctions::ConvertArrayToPolyPath(const TArray<struct FVector>& VertexArray, const struct FGeometryScriptPolyPath& PolyPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "ConvertArrayToPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Params Parms{};

	Parms.VertexArray = VertexArray;
	Parms.PolyPath = PolyPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.ConvertArrayOfVector2DToPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector2D>           VertexArray                                                      (None)
// struct FGeometryScriptPolyPath     PolyPath                                                         (None)

void UGeometryScriptLibrary_PolyPathFunctions::ConvertArrayOfVector2DToPolyPath(const TArray<struct FVector2D>& VertexArray, const struct FGeometryScriptPolyPath& PolyPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "ConvertArrayOfVector2DToPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Params Parms{};

	Parms.VertexArray = VertexArray;
	Parms.PolyPath = PolyPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArrayOfVector2D
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (None)
// TArray<struct FVector2D>           ReturnValue                                                      (None)

void UGeometryScriptLibrary_PolyPathFunctions::Conv_GeometryScriptPolyPathToArrayOfVector2D(const struct FGeometryScriptPolyPath& PolyPath, const TArray<struct FVector2D>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "Conv_GeometryScriptPolyPathToArrayOfVector2D");

	Params::UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_GeometryScriptPolyPathToArray
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometryScriptPolyPath     PolyPath                                                         (None)
// TArray<struct FVector>             ReturnValue                                                      (None)

void UGeometryScriptLibrary_PolyPathFunctions::Conv_GeometryScriptPolyPathToArray(const struct FGeometryScriptPolyPath& PolyPath, const TArray<struct FVector>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "Conv_GeometryScriptPolyPathToArray");

	Params::UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Params Parms{};

	Parms.PolyPath = PolyPath;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayToGeometryScriptPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>             PathVertices                                                     (None)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (None)

void UGeometryScriptLibrary_PolyPathFunctions::Conv_ArrayToGeometryScriptPolyPath(const TArray<struct FVector>& PathVertices, const struct FGeometryScriptPolyPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "Conv_ArrayToGeometryScriptPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Params Parms{};

	Parms.PathVertices = PathVertices;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions.Conv_ArrayOfVector2DToGeometryScriptPolyPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector2D>           PathVertices                                                     (None)
// struct FGeometryScriptPolyPath     ReturnValue                                                      (None)

void UGeometryScriptLibrary_PolyPathFunctions::Conv_ArrayOfVector2DToGeometryScriptPolyPath(const TArray<struct FVector2D>& PathVertices, const struct FGeometryScriptPolyPath& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_PolyPathFunctions", "Conv_ArrayOfVector2DToGeometryScriptPolyPath");

	Params::UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Params Parms{};

	Parms.PathVertices = PathVertices;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions
// (None)

class UClass* UGeometryScriptLibrary_SceneUtilityFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_SceneUtilityFunctions");

	return Clss;
}


// GeometryScriptLibrary_SceneUtilityFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_SceneUtilityFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_SceneUtilityFunctions* UGeometryScriptLibrary_SceneUtilityFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_SceneUtilityFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_SceneUtilityFunctions*>(UGeometryScriptLibrary_SceneUtilityFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.SetComponentMaterialList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         Component                                                        (ZeroConstructor)
// TArray<class UMaterialInterface*>  MaterialList                                                     (ZeroConstructor)
// class UGeometryScriptDebug*        Debug                                                            (None)

void UGeometryScriptLibrary_SceneUtilityFunctions::SetComponentMaterialList(class UPrimitiveComponent* Component, const TArray<class UMaterialInterface*>& MaterialList, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SceneUtilityFunctions", "SetComponentMaterialList");

	Params::UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Params Parms{};

	Parms.Component = Component;
	Parms.MaterialList = MaterialList;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CreateDynamicMeshPool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDynamicMeshPool*            ReturnValue                                                      (None)

void UGeometryScriptLibrary_SceneUtilityFunctions::CreateDynamicMeshPool(class UDynamicMeshPool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SceneUtilityFunctions", "CreateDynamicMeshPool");

	Params::UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyMeshFromComponent
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*             Component                                                        (ZeroConstructor)
// class UDynamicMesh*                ToDynamicMesh                                                    (ZeroConstructor)
// struct FGeometryScriptCopyMeshFromComponentOptionsOptions                                                          (None)
// bool                               bTransformToWorld                                                (None)
// struct FTransform                  LocalToWorld                                                     (None)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_SceneUtilityFunctions::CopyMeshFromComponent(class USceneComponent* Component, class UDynamicMesh* ToDynamicMesh, const struct FGeometryScriptCopyMeshFromComponentOptions& Options, bool bTransformToWorld, const struct FTransform& LocalToWorld, enum class EGeometryScriptOutcomePins Outcome, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SceneUtilityFunctions", "CopyMeshFromComponent");

	Params::UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Params Parms{};

	Parms.Component = Component;
	Parms.ToDynamicMesh = ToDynamicMesh;
	Parms.Options = Options;
	Parms.bTransformToWorld = bTransformToWorld;
	Parms.LocalToWorld = LocalToWorld;
	Parms.Outcome = Outcome;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions.CopyCollisionMeshesFromObject
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     FromObject                                                       (ZeroConstructor)
// class UDynamicMesh*                ToDynamicMesh                                                    (ZeroConstructor)
// bool                               bTransformToWorld                                                (None)
// struct FTransform                  LocalToWorld                                                     (None)
// enum class EGeometryScriptOutcomePinsOutcome                                                          (None)
// bool                               bUseComplexCollision                                             (None)
// int32                              SphereResolution                                                 (None)
// class UGeometryScriptDebug*        Debug                                                            (ZeroConstructor)
// class UDynamicMesh*                ReturnValue                                                      (None)

void UGeometryScriptLibrary_SceneUtilityFunctions::CopyCollisionMeshesFromObject(class UObject* FromObject, class UDynamicMesh* ToDynamicMesh, bool bTransformToWorld, const struct FTransform& LocalToWorld, enum class EGeometryScriptOutcomePins Outcome, bool bUseComplexCollision, int32 SphereResolution, class UGeometryScriptDebug* Debug, class UDynamicMesh* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_SceneUtilityFunctions", "CopyCollisionMeshesFromObject");

	Params::UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Params Parms{};

	Parms.FromObject = FromObject;
	Parms.ToDynamicMesh = ToDynamicMesh;
	Parms.bTransformToWorld = bTransformToWorld;
	Parms.LocalToWorld = LocalToWorld;
	Parms.Outcome = Outcome;
	Parms.bUseComplexCollision = bUseComplexCollision;
	Parms.SphereResolution = SphereResolution;
	Parms.Debug = Debug;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions
// (None)

class UClass* UGeometryScriptLibrary_TransformFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_TransformFunctions");

	return Clss;
}


// GeometryScriptLibrary_TransformFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_TransformFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_TransformFunctions* UGeometryScriptLibrary_TransformFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_TransformFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_TransformFunctions*>(UGeometryScriptLibrary_TransformFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.MakeTransformFromZAxis
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (None)
// struct FVector                     ZAxis                                                            (None)
// struct FTransform                  ReturnValue                                                      (None)

void UGeometryScriptLibrary_TransformFunctions::MakeTransformFromZAxis(const struct FVector& Location, const struct FVector& ZAxis, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "MakeTransformFromZAxis");

	Params::UGeometryScriptLibrary_TransformFunctions_MakeTransformFromZAxis_Params Parms{};

	Parms.Location = Location;
	Parms.ZAxis = ZAxis;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.MakeTransformFromAxes
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (None)
// struct FVector                     ZAxis                                                            (None)
// struct FVector                     TangentAxis                                                      (None)
// bool                               bTangentIsX                                                      (None)
// struct FTransform                  ReturnValue                                                      (None)

void UGeometryScriptLibrary_TransformFunctions::MakeTransformFromAxes(const struct FVector& Location, const struct FVector& ZAxis, const struct FVector& TangentAxis, bool bTangentIsX, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "MakeTransformFromAxes");

	Params::UGeometryScriptLibrary_TransformFunctions_MakeTransformFromAxes_Params Parms{};

	Parms.Location = Location;
	Parms.ZAxis = ZAxis;
	Parms.TangentAxis = TangentAxis;
	Parms.bTangentIsX = bTangentIsX;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  Transform                                                        (None)
// enum class EGeometryScriptAxis     Axis                                                             (None)
// struct FVector                     ReturnValue                                                      (None)

void UGeometryScriptLibrary_TransformFunctions::GetTransformAxisVector(const struct FTransform& Transform, enum class EGeometryScriptAxis Axis, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "GetTransformAxisVector");

	Params::UGeometryScriptLibrary_TransformFunctions_GetTransformAxisVector_Params Parms{};

	Parms.Transform = Transform;
	Parms.Axis = Axis;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisRay
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  Transform                                                        (None)
// enum class EGeometryScriptAxis     Axis                                                             (None)
// struct FRay                        ReturnValue                                                      (None)

void UGeometryScriptLibrary_TransformFunctions::GetTransformAxisRay(const struct FTransform& Transform, enum class EGeometryScriptAxis Axis, const struct FRay& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "GetTransformAxisRay");

	Params::UGeometryScriptLibrary_TransformFunctions_GetTransformAxisRay_Params Parms{};

	Parms.Transform = Transform;
	Parms.Axis = Axis;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions.GetTransformAxisPlane
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  Transform                                                        (None)
// enum class EGeometryScriptAxis     Axis                                                             (None)
// struct FPlane                      ReturnValue                                                      (None)

void UGeometryScriptLibrary_TransformFunctions::GetTransformAxisPlane(const struct FTransform& Transform, enum class EGeometryScriptAxis Axis, const struct FPlane& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TransformFunctions", "GetTransformAxisPlane");

	Params::UGeometryScriptLibrary_TransformFunctions_GetTransformAxisPlane_Params Parms{};

	Parms.Transform = Transform;
	Parms.Axis = Axis;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_RayFunctions
// (None)

class UClass* UGeometryScriptLibrary_RayFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_RayFunctions");

	return Clss;
}


// GeometryScriptLibrary_RayFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_RayFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_RayFunctions* UGeometryScriptLibrary_RayFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_RayFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_RayFunctions*>(UGeometryScriptLibrary_RayFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.MakeRayFromPoints
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     A                                                                (None)
// struct FVector                     B                                                                (None)
// struct FRay                        ReturnValue                                                      (None)

void UGeometryScriptLibrary_RayFunctions::MakeRayFromPoints(const struct FVector& A, const struct FVector& B, const struct FRay& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "MakeRayFromPoints");

	Params::UGeometryScriptLibrary_RayFunctions_MakeRayFromPoints_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.MakeRayFromPointDirection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Origin                                                           (None)
// struct FVector                     Direction                                                        (None)
// bool                               bDirectionIsNormalized                                           (None)
// struct FRay                        ReturnValue                                                      (None)

void UGeometryScriptLibrary_RayFunctions::MakeRayFromPointDirection(const struct FVector& Origin, const struct FVector& Direction, bool bDirectionIsNormalized, const struct FRay& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "MakeRayFromPointDirection");

	Params::UGeometryScriptLibrary_RayFunctions_MakeRayFromPointDirection_Params Parms{};

	Parms.Origin = Origin;
	Parms.Direction = Direction;
	Parms.bDirectionIsNormalized = bDirectionIsNormalized;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetTransformedRay
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (None)
// struct FTransform                  Transform                                                        (None)
// bool                               bInvert                                                          (None)
// struct FRay                        ReturnValue                                                      (None)

void UGeometryScriptLibrary_RayFunctions::GetTransformedRay(const struct FRay& Ray, const struct FTransform& Transform, bool bInvert, const struct FRay& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetTransformedRay");

	Params::UGeometryScriptLibrary_RayFunctions_GetTransformedRay_Params Parms{};

	Parms.Ray = Ray;
	Parms.Transform = Transform;
	Parms.bInvert = bInvert;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayStartEnd
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (None)
// double                             StartDistance                                                    (None)
// double                             EndDistance                                                      (None)
// struct FVector                     StartPoint                                                       (None)
// struct FVector                     EndPoint                                                         (None)

void UGeometryScriptLibrary_RayFunctions::GetRayStartEnd(const struct FRay& Ray, double StartDistance, double EndDistance, const struct FVector& StartPoint, const struct FVector& EndPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayStartEnd");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayStartEnd_Params Parms{};

	Parms.Ray = Ray;
	Parms.StartDistance = StartDistance;
	Parms.EndDistance = EndDistance;
	Parms.StartPoint = StartPoint;
	Parms.EndPoint = EndPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySphereIntersection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (None)
// struct FVector                     SphereCenter                                                     (None)
// double                             SphereRadius                                                     (None)
// double                             Distance1                                                        (None)
// double                             Distance2                                                        (None)
// bool                               ReturnValue                                                      (None)

void UGeometryScriptLibrary_RayFunctions::GetRaySphereIntersection(const struct FRay& Ray, const struct FVector& SphereCenter, double SphereRadius, double Distance1, double Distance2, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRaySphereIntersection");

	Params::UGeometryScriptLibrary_RayFunctions_GetRaySphereIntersection_Params Parms{};

	Parms.Ray = Ray;
	Parms.SphereCenter = SphereCenter;
	Parms.SphereRadius = SphereRadius;
	Parms.Distance1 = Distance1;
	Parms.Distance2 = Distance2;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRaySegmentClosestPoint
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (None)
// struct FVector                     SegStartPoint                                                    (None)
// struct FVector                     SegEndPoint                                                      (None)
// double                             RayParameter                                                     (None)
// struct FVector                     RayPoint                                                         (None)
// struct FVector                     SegPoint                                                         (None)
// double                             ReturnValue                                                      (None)

void UGeometryScriptLibrary_RayFunctions::GetRaySegmentClosestPoint(const struct FRay& Ray, const struct FVector& SegStartPoint, const struct FVector& SegEndPoint, double RayParameter, const struct FVector& RayPoint, const struct FVector& SegPoint, double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRaySegmentClosestPoint");

	Params::UGeometryScriptLibrary_RayFunctions_GetRaySegmentClosestPoint_Params Parms{};

	Parms.Ray = Ray;
	Parms.SegStartPoint = SegStartPoint;
	Parms.SegEndPoint = SegEndPoint;
	Parms.RayParameter = RayParameter;
	Parms.RayPoint = RayPoint;
	Parms.SegPoint = SegPoint;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPointDistance
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (None)
// struct FVector                     Point                                                            (None)
// double                             ReturnValue                                                      (None)

void UGeometryScriptLibrary_RayFunctions::GetRayPointDistance(const struct FRay& Ray, const struct FVector& Point, double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayPointDistance");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayPointDistance_Params Parms{};

	Parms.Ray = Ray;
	Parms.Point = Point;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPoint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (None)
// double                             Distance                                                         (None)
// struct FVector                     ReturnValue                                                      (None)

void UGeometryScriptLibrary_RayFunctions::GetRayPoint(const struct FRay& Ray, double Distance, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayPoint");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayPoint_Params Parms{};

	Parms.Ray = Ray;
	Parms.Distance = Distance;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayPlaneIntersection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (None)
// struct FPlane                      Plane                                                            (None)
// double                             HitDistance                                                      (None)
// bool                               ReturnValue                                                      (None)

void UGeometryScriptLibrary_RayFunctions::GetRayPlaneIntersection(const struct FRay& Ray, const struct FPlane& Plane, double HitDistance, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayPlaneIntersection");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayPlaneIntersection_Params Parms{};

	Parms.Ray = Ray;
	Parms.Plane = Plane;
	Parms.HitDistance = HitDistance;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayParameter
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (None)
// struct FVector                     Point                                                            (None)
// double                             ReturnValue                                                      (None)

void UGeometryScriptLibrary_RayFunctions::GetRayParameter(const struct FRay& Ray, const struct FVector& Point, double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayParameter");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayParameter_Params Parms{};

	Parms.Ray = Ray;
	Parms.Point = Point;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayLineClosestPoint
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (None)
// struct FVector                     LineOrigin                                                       (None)
// struct FVector                     LineDirection                                                    (None)
// double                             RayParameter                                                     (None)
// struct FVector                     RayPoint                                                         (None)
// double                             LineParameter                                                    (None)
// struct FVector                     LinePoint                                                        (None)
// double                             ReturnValue                                                      (None)

void UGeometryScriptLibrary_RayFunctions::GetRayLineClosestPoint(const struct FRay& Ray, const struct FVector& LineOrigin, const struct FVector& LineDirection, double RayParameter, const struct FVector& RayPoint, double LineParameter, const struct FVector& LinePoint, double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayLineClosestPoint");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayLineClosestPoint_Params Parms{};

	Parms.Ray = Ray;
	Parms.LineOrigin = LineOrigin;
	Parms.LineDirection = LineDirection;
	Parms.RayParameter = RayParameter;
	Parms.RayPoint = RayPoint;
	Parms.LineParameter = LineParameter;
	Parms.LinePoint = LinePoint;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayClosestPoint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (None)
// struct FVector                     Point                                                            (None)
// struct FVector                     ReturnValue                                                      (None)

void UGeometryScriptLibrary_RayFunctions::GetRayClosestPoint(const struct FRay& Ray, const struct FVector& Point, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayClosestPoint");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayClosestPoint_Params Parms{};

	Parms.Ray = Ray;
	Parms.Point = Point;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_RayFunctions.GetRayBoxIntersection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRay                        Ray                                                              (None)
// struct FBox                        Box                                                              (None)
// double                             HitDistance                                                      (None)
// bool                               ReturnValue                                                      (None)

void UGeometryScriptLibrary_RayFunctions::GetRayBoxIntersection(const struct FRay& Ray, const struct FBox& Box, double HitDistance, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_RayFunctions", "GetRayBoxIntersection");

	Params::UGeometryScriptLibrary_RayFunctions_GetRayBoxIntersection_Params Parms{};

	Parms.Ray = Ray;
	Parms.Box = Box;
	Parms.HitDistance = HitDistance;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions
// (None)

class UClass* UGeometryScriptLibrary_BoxFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_BoxFunctions");

	return Clss;
}


// GeometryScriptLibrary_BoxFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_BoxFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_BoxFunctions* UGeometryScriptLibrary_BoxFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_BoxFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_BoxFunctions*>(UGeometryScriptLibrary_BoxFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestPointInsideBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (None)
// struct FVector                     Point                                                            (None)
// bool                               bConsiderOnBoxAsInside                                           (None)
// bool                               ReturnValue                                                      (None)

void UGeometryScriptLibrary_BoxFunctions::TestPointInsideBox(const struct FBox& Box, const struct FVector& Point, bool bConsiderOnBoxAsInside, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "TestPointInsideBox");

	Params::UGeometryScriptLibrary_BoxFunctions_TestPointInsideBox_Params Parms{};

	Parms.Box = Box;
	Parms.Point = Point;
	Parms.bConsiderOnBoxAsInside = bConsiderOnBoxAsInside;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxSphereIntersection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (None)
// struct FVector                     SphereCenter                                                     (None)
// double                             SphereRadius                                                     (None)
// bool                               ReturnValue                                                      (None)

void UGeometryScriptLibrary_BoxFunctions::TestBoxSphereIntersection(const struct FBox& Box, const struct FVector& SphereCenter, double SphereRadius, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "TestBoxSphereIntersection");

	Params::UGeometryScriptLibrary_BoxFunctions_TestBoxSphereIntersection_Params Parms{};

	Parms.Box = Box;
	Parms.SphereCenter = SphereCenter;
	Parms.SphereRadius = SphereRadius;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.TestBoxBoxIntersection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box1                                                             (None)
// struct FBox                        Box2                                                             (None)
// bool                               ReturnValue                                                      (None)

void UGeometryScriptLibrary_BoxFunctions::TestBoxBoxIntersection(const struct FBox& Box1, const struct FBox& Box2, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "TestBoxBoxIntersection");

	Params::UGeometryScriptLibrary_BoxFunctions_TestBoxBoxIntersection_Params Parms{};

	Parms.Box1 = Box1;
	Parms.Box2 = Box2;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterSize
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Center                                                           (None)
// struct FVector                     Dimensions                                                       (None)
// struct FBox                        ReturnValue                                                      (None)

void UGeometryScriptLibrary_BoxFunctions::MakeBoxFromCenterSize(const struct FVector& Center, const struct FVector& Dimensions, const struct FBox& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "MakeBoxFromCenterSize");

	Params::UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterSize_Params Parms{};

	Parms.Center = Center;
	Parms.Dimensions = Dimensions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.MakeBoxFromCenterExtents
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Center                                                           (None)
// struct FVector                     Extents                                                          (None)
// struct FBox                        ReturnValue                                                      (None)

void UGeometryScriptLibrary_BoxFunctions::MakeBoxFromCenterExtents(const struct FVector& Center, const struct FVector& Extents, const struct FBox& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "MakeBoxFromCenterExtents");

	Params::UGeometryScriptLibrary_BoxFunctions_MakeBoxFromCenterExtents_Params Parms{};

	Parms.Center = Center;
	Parms.Extents = Extents;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetTransformedBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (None)
// struct FTransform                  Transform                                                        (None)
// struct FBox                        ReturnValue                                                      (None)

void UGeometryScriptLibrary_BoxFunctions::GetTransformedBox(const struct FBox& Box, const struct FTransform& Transform, const struct FBox& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetTransformedBox");

	Params::UGeometryScriptLibrary_BoxFunctions_GetTransformedBox_Params Parms{};

	Parms.Box = Box;
	Parms.Transform = Transform;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetExpandedBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (None)
// struct FVector                     ExpandBy                                                         (None)
// struct FBox                        ReturnValue                                                      (None)

void UGeometryScriptLibrary_BoxFunctions::GetExpandedBox(const struct FBox& Box, const struct FVector& ExpandBy, const struct FBox& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetExpandedBox");

	Params::UGeometryScriptLibrary_BoxFunctions_GetExpandedBox_Params Parms{};

	Parms.Box = Box;
	Parms.ExpandBy = ExpandBy;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxVolumeArea
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (None)
// double                             Volume                                                           (None)
// double                             SurfaceArea                                                      (None)

void UGeometryScriptLibrary_BoxFunctions::GetBoxVolumeArea(const struct FBox& Box, double Volume, double SurfaceArea)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxVolumeArea");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxVolumeArea_Params Parms{};

	Parms.Box = Box;
	Parms.Volume = Volume;
	Parms.SurfaceArea = SurfaceArea;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxPointDistance
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (None)
// struct FVector                     Point                                                            (None)
// double                             ReturnValue                                                      (None)

void UGeometryScriptLibrary_BoxFunctions::GetBoxPointDistance(const struct FBox& Box, const struct FVector& Point, double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxPointDistance");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxPointDistance_Params Parms{};

	Parms.Box = Box;
	Parms.Point = Point;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxFaceCenter
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (None)
// int32                              FaceIndex                                                        (None)
// struct FVector                     FaceNormal                                                       (None)
// struct FVector                     ReturnValue                                                      (None)

void UGeometryScriptLibrary_BoxFunctions::GetBoxFaceCenter(const struct FBox& Box, int32 FaceIndex, const struct FVector& FaceNormal, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxFaceCenter");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxFaceCenter_Params Parms{};

	Parms.Box = Box;
	Parms.FaceIndex = FaceIndex;
	Parms.FaceNormal = FaceNormal;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCorner
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (None)
// int32                              CornerIndex                                                      (None)
// struct FVector                     ReturnValue                                                      (None)

void UGeometryScriptLibrary_BoxFunctions::GetBoxCorner(const struct FBox& Box, int32 CornerIndex, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxCorner");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxCorner_Params Parms{};

	Parms.Box = Box;
	Parms.CornerIndex = CornerIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxCenterSize
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (None)
// struct FVector                     Center                                                           (None)
// struct FVector                     Dimensions                                                       (None)

void UGeometryScriptLibrary_BoxFunctions::GetBoxCenterSize(const struct FBox& Box, const struct FVector& Center, const struct FVector& Dimensions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxCenterSize");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxCenterSize_Params Parms{};

	Parms.Box = Box;
	Parms.Center = Center;
	Parms.Dimensions = Dimensions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.GetBoxBoxDistance
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box1                                                             (None)
// struct FBox                        Box2                                                             (None)
// double                             ReturnValue                                                      (None)

void UGeometryScriptLibrary_BoxFunctions::GetBoxBoxDistance(const struct FBox& Box1, const struct FBox& Box2, double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "GetBoxBoxDistance");

	Params::UGeometryScriptLibrary_BoxFunctions_GetBoxBoxDistance_Params Parms{};

	Parms.Box1 = Box1;
	Parms.Box2 = Box2;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindClosestPointOnBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box                                                              (None)
// struct FVector                     Point                                                            (None)
// bool                               bIsInside                                                        (None)
// struct FVector                     ReturnValue                                                      (None)

void UGeometryScriptLibrary_BoxFunctions::FindClosestPointOnBox(const struct FBox& Box, const struct FVector& Point, bool bIsInside, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "FindClosestPointOnBox");

	Params::UGeometryScriptLibrary_BoxFunctions_FindClosestPointOnBox_Params Parms{};

	Parms.Box = Box;
	Parms.Point = Point;
	Parms.bIsInside = bIsInside;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions.FindBoxBoxIntersection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                        Box1                                                             (None)
// struct FBox                        Box2                                                             (None)
// bool                               bIsIntersecting                                                  (None)
// struct FBox                        ReturnValue                                                      (None)

void UGeometryScriptLibrary_BoxFunctions::FindBoxBoxIntersection(const struct FBox& Box1, const struct FBox& Box2, bool bIsIntersecting, const struct FBox& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_BoxFunctions", "FindBoxBoxIntersection");

	Params::UGeometryScriptLibrary_BoxFunctions_FindBoxBoxIntersection_Params Parms{};

	Parms.Box1 = Box1;
	Parms.Box2 = Box2;
	Parms.bIsIntersecting = bIsIntersecting;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions
// (None)

class UClass* UGeometryScriptLibrary_TextureMapFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_TextureMapFunctions");

	return Clss;
}


// GeometryScriptLibrary_TextureMapFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_TextureMapFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_TextureMapFunctions* UGeometryScriptLibrary_TextureMapFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_TextureMapFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_TextureMapFunctions*>(UGeometryScriptLibrary_TextureMapFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTextureRenderTarget2DAtUVPositions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (None)
// class UTextureRenderTarget2D*      Texture                                                          (ZeroConstructor)
// struct FGeometryScriptSampleTextureOptionsSampleOptions                                                    (None)
// struct FGeometryScriptColorList    ColorList                                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (None)

void UGeometryScriptLibrary_TextureMapFunctions::SampleTextureRenderTarget2DAtUVPositions(const struct FGeometryScriptUVList& UVList, class UTextureRenderTarget2D* Texture, const struct FGeometryScriptSampleTextureOptions& SampleOptions, const struct FGeometryScriptColorList& ColorList, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TextureMapFunctions", "SampleTextureRenderTarget2DAtUVPositions");

	Params::UGeometryScriptLibrary_TextureMapFunctions_SampleTextureRenderTarget2DAtUVPositions_Params Parms{};

	Parms.UVList = UVList;
	Parms.Texture = Texture;
	Parms.SampleOptions = SampleOptions;
	Parms.ColorList = ColorList;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions.SampleTexture2DAtUVPositions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptUVList       UVList                                                           (None)
// class UTexture2D*                  Texture                                                          (ZeroConstructor)
// struct FGeometryScriptSampleTextureOptionsSampleOptions                                                    (None)
// struct FGeometryScriptColorList    ColorList                                                        (None)
// class UGeometryScriptDebug*        Debug                                                            (None)

void UGeometryScriptLibrary_TextureMapFunctions::SampleTexture2DAtUVPositions(const struct FGeometryScriptUVList& UVList, class UTexture2D* Texture, const struct FGeometryScriptSampleTextureOptions& SampleOptions, const struct FGeometryScriptColorList& ColorList, class UGeometryScriptDebug* Debug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_TextureMapFunctions", "SampleTexture2DAtUVPositions");

	Params::UGeometryScriptLibrary_TextureMapFunctions_SampleTexture2DAtUVPositions_Params Parms{};

	Parms.UVList = UVList;
	Parms.Texture = Texture;
	Parms.SampleOptions = SampleOptions;
	Parms.ColorList = ColorList;
	Parms.Debug = Debug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions
// (None)

class UClass* UGeometryScriptLibrary_VectorMathFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryScriptLibrary_VectorMathFunctions");

	return Clss;
}


// GeometryScriptLibrary_VectorMathFunctions GeometryScriptingCore.Default__GeometryScriptLibrary_VectorMathFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryScriptLibrary_VectorMathFunctions* UGeometryScriptLibrary_VectorMathFunctions::GetDefaultObj()
{
	static class UGeometryScriptLibrary_VectorMathFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryScriptLibrary_VectorMathFunctions*>(UGeometryScriptLibrary_VectorMathFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorToScalar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (None)
// double                             ConstantX                                                        (None)
// double                             ConstantY                                                        (None)
// double                             ConstantZ                                                        (None)
// struct FGeometryScriptScalarList   ReturnValue                                                      (None)

void UGeometryScriptLibrary_VectorMathFunctions::VectorToScalar(const struct FGeometryScriptVectorList& VectorList, double ConstantX, double ConstantY, double ConstantZ, const struct FGeometryScriptScalarList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorToScalar");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorToScalar_Params Parms{};

	Parms.VectorList = VectorList;
	Parms.ConstantX = ConstantX;
	Parms.ConstantY = ConstantY;
	Parms.ConstantZ = ConstantZ;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorNormalizeInPlace
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (None)
// struct FVector                     SetOnFailure                                                     (None)

void UGeometryScriptLibrary_VectorMathFunctions::VectorNormalizeInPlace(const struct FGeometryScriptVectorList& VectorList, const struct FVector& SetOnFailure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorNormalizeInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorNormalizeInPlace_Params Parms{};

	Parms.VectorList = VectorList;
	Parms.SetOnFailure = SetOnFailure;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorLength
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorList                                                       (None)
// struct FGeometryScriptScalarList   ReturnValue                                                      (None)

void UGeometryScriptLibrary_VectorMathFunctions::VectorLength(const struct FGeometryScriptVectorList& VectorList, const struct FGeometryScriptScalarList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorLength");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorLength_Params Parms{};

	Parms.VectorList = VectorList;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorDot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorListA                                                      (None)
// struct FGeometryScriptVectorList   VectorListB                                                      (None)
// struct FGeometryScriptScalarList   ReturnValue                                                      (None)

void UGeometryScriptLibrary_VectorMathFunctions::VectorDot(const struct FGeometryScriptVectorList& VectorListA, const struct FGeometryScriptVectorList& VectorListB, const struct FGeometryScriptScalarList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorDot");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorDot_Params Parms{};

	Parms.VectorListA = VectorListA;
	Parms.VectorListB = VectorListB;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorCross
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorListA                                                      (None)
// struct FGeometryScriptVectorList   VectorListB                                                      (None)
// struct FGeometryScriptVectorList   ReturnValue                                                      (None)

void UGeometryScriptLibrary_VectorMathFunctions::VectorCross(const struct FGeometryScriptVectorList& VectorListA, const struct FGeometryScriptVectorList& VectorListB, const struct FGeometryScriptVectorList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorCross");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorCross_Params Parms{};

	Parms.VectorListA = VectorListA;
	Parms.VectorListB = VectorListB;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlendInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorListA                                                      (None)
// struct FGeometryScriptVectorList   VectorListB                                                      (None)
// double                             ConstantA                                                        (None)
// double                             ConstantB                                                        (None)

void UGeometryScriptLibrary_VectorMathFunctions::VectorBlendInPlace(const struct FGeometryScriptVectorList& VectorListA, const struct FGeometryScriptVectorList& VectorListB, double ConstantA, double ConstantB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorBlendInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorBlendInPlace_Params Parms{};

	Parms.VectorListA = VectorListA;
	Parms.VectorListB = VectorListB;
	Parms.ConstantA = ConstantA;
	Parms.ConstantB = ConstantB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.VectorBlend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptVectorList   VectorListA                                                      (None)
// struct FGeometryScriptVectorList   VectorListB                                                      (None)
// double                             ConstantA                                                        (None)
// double                             ConstantB                                                        (None)
// struct FGeometryScriptVectorList   ReturnValue                                                      (None)

void UGeometryScriptLibrary_VectorMathFunctions::VectorBlend(const struct FGeometryScriptVectorList& VectorListA, const struct FGeometryScriptVectorList& VectorListB, double ConstantA, double ConstantB, const struct FGeometryScriptVectorList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "VectorBlend");

	Params::UGeometryScriptLibrary_VectorMathFunctions_VectorBlend_Params Parms{};

	Parms.VectorListA = VectorListA;
	Parms.VectorListB = VectorListB;
	Parms.ConstantA = ConstantA;
	Parms.ConstantB = ConstantB;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiplyInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (None)
// struct FGeometryScriptVectorList   VectorList                                                       (None)
// double                             ScalarMultiplier                                                 (None)

void UGeometryScriptLibrary_VectorMathFunctions::ScalarVectorMultiplyInPlace(const struct FGeometryScriptScalarList& ScalarList, const struct FGeometryScriptVectorList& VectorList, double ScalarMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarVectorMultiplyInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiplyInPlace_Params Parms{};

	Parms.ScalarList = ScalarList;
	Parms.VectorList = VectorList;
	Parms.ScalarMultiplier = ScalarMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarVectorMultiply
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (None)
// struct FGeometryScriptVectorList   VectorList                                                       (None)
// double                             ScalarMultiplier                                                 (None)
// struct FGeometryScriptVectorList   ReturnValue                                                      (None)

void UGeometryScriptLibrary_VectorMathFunctions::ScalarVectorMultiply(const struct FGeometryScriptScalarList& ScalarList, const struct FGeometryScriptVectorList& VectorList, double ScalarMultiplier, const struct FGeometryScriptVectorList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarVectorMultiply");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarVectorMultiply_Params Parms{};

	Parms.ScalarList = ScalarList;
	Parms.VectorList = VectorList;
	Parms.ScalarMultiplier = ScalarMultiplier;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiplyInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarListA                                                      (None)
// struct FGeometryScriptScalarList   ScalarListB                                                      (None)
// double                             ConstantMultiplier                                               (None)

void UGeometryScriptLibrary_VectorMathFunctions::ScalarMultiplyInPlace(const struct FGeometryScriptScalarList& ScalarListA, const struct FGeometryScriptScalarList& ScalarListB, double ConstantMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarMultiplyInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiplyInPlace_Params Parms{};

	Parms.ScalarListA = ScalarListA;
	Parms.ScalarListB = ScalarListB;
	Parms.ConstantMultiplier = ConstantMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarMultiply
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarListA                                                      (None)
// struct FGeometryScriptScalarList   ScalarListB                                                      (None)
// double                             ConstantMultiplier                                               (None)
// struct FGeometryScriptScalarList   ReturnValue                                                      (None)

void UGeometryScriptLibrary_VectorMathFunctions::ScalarMultiply(const struct FGeometryScriptScalarList& ScalarListA, const struct FGeometryScriptScalarList& ScalarListB, double ConstantMultiplier, const struct FGeometryScriptScalarList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarMultiply");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarMultiply_Params Parms{};

	Parms.ScalarListA = ScalarListA;
	Parms.ScalarListB = ScalarListB;
	Parms.ConstantMultiplier = ConstantMultiplier;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvertInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (None)
// double                             Numerator                                                        (None)
// double                             SetOnFailure                                                     (None)
// double                             Epsilon                                                          (None)

void UGeometryScriptLibrary_VectorMathFunctions::ScalarInvertInPlace(const struct FGeometryScriptScalarList& ScalarList, double Numerator, double SetOnFailure, double Epsilon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarInvertInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarInvertInPlace_Params Parms{};

	Parms.ScalarList = ScalarList;
	Parms.Numerator = Numerator;
	Parms.SetOnFailure = SetOnFailure;
	Parms.Epsilon = Epsilon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarInvert
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarList                                                       (None)
// double                             Numerator                                                        (None)
// double                             SetOnFailure                                                     (None)
// double                             Epsilon                                                          (None)
// struct FGeometryScriptScalarList   ReturnValue                                                      (None)

void UGeometryScriptLibrary_VectorMathFunctions::ScalarInvert(const struct FGeometryScriptScalarList& ScalarList, double Numerator, double SetOnFailure, double Epsilon, const struct FGeometryScriptScalarList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarInvert");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarInvert_Params Parms{};

	Parms.ScalarList = ScalarList;
	Parms.Numerator = Numerator;
	Parms.SetOnFailure = SetOnFailure;
	Parms.Epsilon = Epsilon;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlendInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarListA                                                      (None)
// struct FGeometryScriptScalarList   ScalarListB                                                      (None)
// double                             ConstantA                                                        (None)
// double                             ConstantB                                                        (None)

void UGeometryScriptLibrary_VectorMathFunctions::ScalarBlendInPlace(const struct FGeometryScriptScalarList& ScalarListA, const struct FGeometryScriptScalarList& ScalarListB, double ConstantA, double ConstantB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarBlendInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarBlendInPlace_Params Parms{};

	Parms.ScalarListA = ScalarListA;
	Parms.ScalarListB = ScalarListB;
	Parms.ConstantA = ConstantA;
	Parms.ConstantB = ConstantB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ScalarBlend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGeometryScriptScalarList   ScalarListA                                                      (None)
// struct FGeometryScriptScalarList   ScalarListB                                                      (None)
// double                             ConstantA                                                        (None)
// double                             ConstantB                                                        (None)
// struct FGeometryScriptScalarList   ReturnValue                                                      (None)

void UGeometryScriptLibrary_VectorMathFunctions::ScalarBlend(const struct FGeometryScriptScalarList& ScalarListA, const struct FGeometryScriptScalarList& ScalarListB, double ConstantA, double ConstantB, const struct FGeometryScriptScalarList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ScalarBlend");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ScalarBlend_Params Parms{};

	Parms.ScalarListA = ScalarListA;
	Parms.ScalarListB = ScalarListB;
	Parms.ConstantA = ConstantA;
	Parms.ConstantB = ConstantB;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiplyInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             Constant                                                         (None)
// struct FGeometryScriptVectorList   VectorList                                                       (None)

void UGeometryScriptLibrary_VectorMathFunctions::ConstantVectorMultiplyInPlace(double Constant, const struct FGeometryScriptVectorList& VectorList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ConstantVectorMultiplyInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiplyInPlace_Params Parms{};

	Parms.Constant = Constant;
	Parms.VectorList = VectorList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantVectorMultiply
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// double                             Constant                                                         (None)
// struct FGeometryScriptVectorList   VectorList                                                       (None)
// struct FGeometryScriptVectorList   ReturnValue                                                      (None)

void UGeometryScriptLibrary_VectorMathFunctions::ConstantVectorMultiply(double Constant, const struct FGeometryScriptVectorList& VectorList, const struct FGeometryScriptVectorList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ConstantVectorMultiply");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ConstantVectorMultiply_Params Parms{};

	Parms.Constant = Constant;
	Parms.VectorList = VectorList;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiplyInPlace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             Constant                                                         (None)
// struct FGeometryScriptScalarList   ScalarList                                                       (None)

void UGeometryScriptLibrary_VectorMathFunctions::ConstantScalarMultiplyInPlace(double Constant, const struct FGeometryScriptScalarList& ScalarList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ConstantScalarMultiplyInPlace");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiplyInPlace_Params Parms{};

	Parms.Constant = Constant;
	Parms.ScalarList = ScalarList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions.ConstantScalarMultiply
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// double                             Constant                                                         (None)
// struct FGeometryScriptScalarList   ScalarList                                                       (None)
// struct FGeometryScriptScalarList   ReturnValue                                                      (None)

void UGeometryScriptLibrary_VectorMathFunctions::ConstantScalarMultiply(double Constant, const struct FGeometryScriptScalarList& ScalarList, const struct FGeometryScriptScalarList& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryScriptLibrary_VectorMathFunctions", "ConstantScalarMultiply");

	Params::UGeometryScriptLibrary_VectorMathFunctions_ConstantScalarMultiply_Params Parms{};

	Parms.Constant = Constant;
	Parms.ScalarList = ScalarList;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


