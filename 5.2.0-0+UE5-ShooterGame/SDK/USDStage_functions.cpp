#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class USDStage.UsdPrimTwin
// (None)

class UClass* UUsdPrimTwin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UsdPrimTwin");

	return Clss;
}


// UsdPrimTwin USDStage.Default__UsdPrimTwin
// (Public, ClassDefaultObject, ArchetypeObject)

class UUsdPrimTwin* UUsdPrimTwin::GetDefaultObj()
{
	static class UUsdPrimTwin* Default = nullptr;

	if (!Default)
		Default = static_cast<UUsdPrimTwin*>(UUsdPrimTwin::StaticClass()->DefaultObject);

	return Default;
}


// Class USDStage.UsdStageActor
// (Actor)

class UClass* AUsdStageActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UsdStageActor");

	return Clss;
}


// UsdStageActor USDStage.Default__UsdStageActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AUsdStageActor* AUsdStageActor::GetDefaultObj()
{
	static class AUsdStageActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AUsdStageActor*>(AUsdStageActor::StaticClass()->DefaultObject);

	return Default;
}


// Function USDStage.UsdStageActor.SetTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// float                              InTime                                                           (None)

void AUsdStageActor::SetTime(float InTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetTime");

	Params::AUsdStageActor_SetTime_Params Parms{};

	Parms.InTime = InTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.SetRootMotionHandling
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUsdRootMotionHandling  NewHandlingStrategy                                              (None)

void AUsdStageActor::SetRootMotionHandling(enum class EUsdRootMotionHandling NewHandlingStrategy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetRootMotionHandling");

	Params::AUsdStageActor_SetRootMotionHandling_Params Parms{};

	Parms.NewHandlingStrategy = NewHandlingStrategy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.SetRootLayer
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      RootFilePath                                                     (None)

void AUsdStageActor::SetRootLayer(const class FString& RootFilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetRootLayer");

	Params::AUsdStageActor_SetRootLayer_Params Parms{};

	Parms.RootFilePath = RootFilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.SetRenderContext
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        NewRenderContext                                                 (None)

void AUsdStageActor::SetRenderContext(class FName NewRenderContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetRenderContext");

	Params::AUsdStageActor_SetRenderContext_Params Parms{};

	Parms.NewRenderContext = NewRenderContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.SetPurposesToLoad
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewPurposesToLoad                                                (None)

void AUsdStageActor::SetPurposesToLoad(int32 NewPurposesToLoad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetPurposesToLoad");

	Params::AUsdStageActor_SetPurposesToLoad_Params Parms{};

	Parms.NewPurposesToLoad = NewPurposesToLoad;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.SetNaniteTriangleThreshold
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewNaniteTriangleThreshold                                       (None)

void AUsdStageActor::SetNaniteTriangleThreshold(int32 NewNaniteTriangleThreshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetNaniteTriangleThreshold");

	Params::AUsdStageActor_SetNaniteTriangleThreshold_Params Parms{};

	Parms.NewNaniteTriangleThreshold = NewNaniteTriangleThreshold;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.SetMergeIdenticalMaterialSlots
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bMerge                                                           (None)

void AUsdStageActor::SetMergeIdenticalMaterialSlots(bool bMerge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetMergeIdenticalMaterialSlots");

	Params::AUsdStageActor_SetMergeIdenticalMaterialSlots_Params Parms{};

	Parms.bMerge = bMerge;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.SetMaterialPurpose
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        NewMaterialPurpose                                               (None)

void AUsdStageActor::SetMaterialPurpose(class FName NewMaterialPurpose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetMaterialPurpose");

	Params::AUsdStageActor_SetMaterialPurpose_Params Parms{};

	Parms.NewMaterialPurpose = NewMaterialPurpose;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.SetKindsToCollapse
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewKindsToCollapse                                               (None)

void AUsdStageActor::SetKindsToCollapse(int32 NewKindsToCollapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetKindsToCollapse");

	Params::AUsdStageActor_SetKindsToCollapse_Params Parms{};

	Parms.NewKindsToCollapse = NewKindsToCollapse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.SetIsolatedRootLayer
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      IsolatedStageRootLayer                                           (None)

void AUsdStageActor::SetIsolatedRootLayer(const class FString& IsolatedStageRootLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetIsolatedRootLayer");

	Params::AUsdStageActor_SetIsolatedRootLayer_Params Parms{};

	Parms.IsolatedStageRootLayer = IsolatedStageRootLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.SetInterpolationType
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUsdInterpolationType   NewType                                                          (None)

void AUsdStageActor::SetInterpolationType(enum class EUsdInterpolationType NewType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetInterpolationType");

	Params::AUsdStageActor_SetInterpolationType_Params Parms{};

	Parms.NewType = NewType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.SetInitialLoadSet
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUsdInitialLoadSet      NewLoadSet                                                       (None)

void AUsdStageActor::SetInitialLoadSet(enum class EUsdInitialLoadSet NewLoadSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetInitialLoadSet");

	Params::AUsdStageActor_SetInitialLoadSet_Params Parms{};

	Parms.NewLoadSet = NewLoadSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.SetCollapseTopLevelPointInstancers
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCollapse                                                        (None)

void AUsdStageActor::SetCollapseTopLevelPointInstancers(bool bCollapse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetCollapseTopLevelPointInstancers");

	Params::AUsdStageActor_SetCollapseTopLevelPointInstancers_Params Parms{};

	Parms.bCollapse = bCollapse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.SetAssetCache
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UUsdAssetCache2*             NewCache                                                         (None)

void AUsdStageActor::SetAssetCache(class UUsdAssetCache2* NewCache)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "SetAssetCache");

	Params::AUsdStageActor_SetAssetCache_Params Parms{};

	Parms.NewCache = NewCache;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.NewStage
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void AUsdStageActor::NewStage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "NewStage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.GetTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (None)

void AUsdStageActor::GetTime(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "GetTime");

	Params::AUsdStageActor_GetTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.GetSourcePrimPath
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (None)
// class FString                      ReturnValue                                                      (None)

void AUsdStageActor::GetSourcePrimPath(class UObject* Object, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "GetSourcePrimPath");

	Params::AUsdStageActor_GetSourcePrimPath_Params Parms{};

	Parms.Object = Object;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.GetLevelSequence
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*              ReturnValue                                                      (None)

void AUsdStageActor::GetLevelSequence(class ULevelSequence* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "GetLevelSequence");

	Params::AUsdStageActor_GetLevelSequence_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.GetIsolatedRootLayer
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (None)

void AUsdStageActor::GetIsolatedRootLayer(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "GetIsolatedRootLayer");

	Params::AUsdStageActor_GetIsolatedRootLayer_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.GetGeneratedComponent
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PrimPath                                                         (None)
// class USceneComponent*             ReturnValue                                                      (None)

void AUsdStageActor::GetGeneratedComponent(const class FString& PrimPath, class USceneComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "GetGeneratedComponent");

	Params::AUsdStageActor_GetGeneratedComponent_Params Parms{};

	Parms.PrimPath = PrimPath;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function USDStage.UsdStageActor.GetGeneratedAssets
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PrimPath                                                         (None)
// TArray<class UObject*>             ReturnValue                                                      (None)

void AUsdStageActor::GetGeneratedAssets(const class FString& PrimPath, const TArray<class UObject*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsdStageActor", "GetGeneratedAssets");

	Params::AUsdStageActor_GetGeneratedAssets_Params Parms{};

	Parms.PrimPath = PrimPath;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class USDStage.UsdTransactor
// (None)

class UClass* UUsdTransactor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UsdTransactor");

	return Clss;
}


// UsdTransactor USDStage.Default__UsdTransactor
// (Public, ClassDefaultObject, ArchetypeObject)

class UUsdTransactor* UUsdTransactor::GetDefaultObj()
{
	static class UUsdTransactor* Default = nullptr;

	if (!Default)
		Default = static_cast<UUsdTransactor*>(UUsdTransactor::StaticClass()->DefaultObject);

	return Default;
}

}


