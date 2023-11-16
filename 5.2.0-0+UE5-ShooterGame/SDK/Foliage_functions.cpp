#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Foliage.FoliageInstancedStaticMeshComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UFoliageInstancedStaticMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoliageInstancedStaticMeshComponent");

	return Clss;
}


// FoliageInstancedStaticMeshComponent Foliage.Default__FoliageInstancedStaticMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFoliageInstancedStaticMeshComponent* UFoliageInstancedStaticMeshComponent::GetDefaultObj()
{
	static class UFoliageInstancedStaticMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoliageInstancedStaticMeshComponent*>(UFoliageInstancedStaticMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.FoliageType
// (None)

class UClass* UFoliageType::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoliageType");

	return Clss;
}


// FoliageType Foliage.Default__FoliageType
// (Public, ClassDefaultObject, ArchetypeObject)

class UFoliageType* UFoliageType::GetDefaultObj()
{
	static class UFoliageType* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoliageType*>(UFoliageType::StaticClass()->DefaultObject);

	return Default;
}


// Function Foliage.FoliageType.GetResponseToChannel
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECollisionChannel       Channel                                                          (None)
// enum class ECollisionResponse      ReturnValue                                                      (None)

void UFoliageType::GetResponseToChannel(enum class ECollisionChannel Channel, enum class ECollisionResponse ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FoliageType", "GetResponseToChannel");

	Params::UFoliageType_GetResponseToChannel_Params Parms{};

	Parms.Channel = Channel;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Foliage.FoliageType_Actor
// (None)

class UClass* UFoliageType_Actor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoliageType_Actor");

	return Clss;
}


// FoliageType_Actor Foliage.Default__FoliageType_Actor
// (Public, ClassDefaultObject, ArchetypeObject)

class UFoliageType_Actor* UFoliageType_Actor::GetDefaultObj()
{
	static class UFoliageType_Actor* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoliageType_Actor*>(UFoliageType_Actor::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.FoliageType_InstancedStaticMesh
// (None)

class UClass* UFoliageType_InstancedStaticMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoliageType_InstancedStaticMesh");

	return Clss;
}


// FoliageType_InstancedStaticMesh Foliage.Default__FoliageType_InstancedStaticMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UFoliageType_InstancedStaticMesh* UFoliageType_InstancedStaticMesh::GetDefaultObj()
{
	static class UFoliageType_InstancedStaticMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoliageType_InstancedStaticMesh*>(UFoliageType_InstancedStaticMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.InstancedFoliageActor
// (Actor)

class UClass* AInstancedFoliageActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InstancedFoliageActor");

	return Clss;
}


// InstancedFoliageActor Foliage.Default__InstancedFoliageActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AInstancedFoliageActor* AInstancedFoliageActor::GetDefaultObj()
{
	static class AInstancedFoliageActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AInstancedFoliageActor*>(AInstancedFoliageActor::StaticClass()->DefaultObject);

	return Default;
}


// Function Foliage.InstancedFoliageActor.BPGetInstancedFoliageActorForCurrentLevel
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      World                                                            (ZeroConstructor)
// class AInstancedFoliageActor*      ReturnValue                                                      (None)

void AInstancedFoliageActor::BPGetInstancedFoliageActorForCurrentLevel(class UWorld* World, class AInstancedFoliageActor* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstancedFoliageActor", "BPGetInstancedFoliageActorForCurrentLevel");

	Params::AInstancedFoliageActor_BPGetInstancedFoliageActorForCurrentLevel_Params Parms{};

	Parms.World = World;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Foliage.InstancedFoliageActor.BPConvertStaticMeshActorsToFoliage
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class AStaticMeshActor*>    Actors                                                           (ZeroConstructor)
// TArray<class AStaticMeshActor*>    ConvertedActors                                                  (None)

void AInstancedFoliageActor::BPConvertStaticMeshActorsToFoliage(const TArray<class AStaticMeshActor*>& Actors, const TArray<class AStaticMeshActor*>& ConvertedActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstancedFoliageActor", "BPConvertStaticMeshActorsToFoliage");

	Params::AInstancedFoliageActor_BPConvertStaticMeshActorsToFoliage_Params Parms{};

	Parms.Actors = Actors;
	Parms.ConvertedActors = ConvertedActors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Foliage.InteractiveFoliageComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UInteractiveFoliageComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractiveFoliageComponent");

	return Clss;
}


// InteractiveFoliageComponent Foliage.Default__InteractiveFoliageComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UInteractiveFoliageComponent* UInteractiveFoliageComponent::GetDefaultObj()
{
	static class UInteractiveFoliageComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UInteractiveFoliageComponent*>(UInteractiveFoliageComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.FoliageStatistics
// (None)

class UClass* UFoliageStatistics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoliageStatistics");

	return Clss;
}


// FoliageStatistics Foliage.Default__FoliageStatistics
// (Public, ClassDefaultObject, ArchetypeObject)

class UFoliageStatistics* UFoliageStatistics::GetDefaultObj()
{
	static class UFoliageStatistics* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoliageStatistics*>(UFoliageStatistics::StaticClass()->DefaultObject);

	return Default;
}


// Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class UStaticMesh*                 StaticMesh                                                       (None)
// struct FVector                     CenterPosition                                                   (None)
// float                              Radius                                                           (None)
// int32                              ReturnValue                                                      (None)

void UFoliageStatistics::FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FoliageStatistics", "FoliageOverlappingSphereCount");

	Params::UFoliageStatistics_FoliageOverlappingSphereCount_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.StaticMesh = StaticMesh;
	Parms.CenterPosition = CenterPosition;
	Parms.Radius = Radius;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Foliage.FoliageStatistics.FoliageOverlappingBoxTransforms
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class UStaticMesh*                 StaticMesh                                                       (None)
// struct FBox                        Box                                                              (None)
// TArray<struct FTransform>          OutTransforms                                                    (None)

void UFoliageStatistics::FoliageOverlappingBoxTransforms(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box, const TArray<struct FTransform>& OutTransforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FoliageStatistics", "FoliageOverlappingBoxTransforms");

	Params::UFoliageStatistics_FoliageOverlappingBoxTransforms_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.StaticMesh = StaticMesh;
	Parms.Box = Box;
	Parms.OutTransforms = OutTransforms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ZeroConstructor)
// class UStaticMesh*                 StaticMesh                                                       (None)
// struct FBox                        Box                                                              (None)
// int32                              ReturnValue                                                      (None)

void UFoliageStatistics::FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FoliageStatistics", "FoliageOverlappingBoxCount");

	Params::UFoliageStatistics_FoliageOverlappingBoxCount_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.StaticMesh = StaticMesh;
	Parms.Box = Box;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Foliage.GrassInstancedStaticMeshComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UGrassInstancedStaticMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrassInstancedStaticMeshComponent");

	return Clss;
}


// GrassInstancedStaticMeshComponent Foliage.Default__GrassInstancedStaticMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGrassInstancedStaticMeshComponent* UGrassInstancedStaticMeshComponent::GetDefaultObj()
{
	static class UGrassInstancedStaticMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGrassInstancedStaticMeshComponent*>(UGrassInstancedStaticMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.InteractiveFoliageActor
// (Actor)

class UClass* AInteractiveFoliageActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractiveFoliageActor");

	return Clss;
}


// InteractiveFoliageActor Foliage.Default__InteractiveFoliageActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AInteractiveFoliageActor* AInteractiveFoliageActor::GetDefaultObj()
{
	static class AInteractiveFoliageActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AInteractiveFoliageActor*>(AInteractiveFoliageActor::StaticClass()->DefaultObject);

	return Default;
}


// Function Foliage.InteractiveFoliageActor.CapsuleTouched
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComp                                                   (ZeroConstructor)
// class AActor*                      Other                                                            (ZeroConstructor)
// class UPrimitiveComponent*         OtherComp                                                        (ZeroConstructor)
// int32                              OtherBodyIndex                                                   (None)
// bool                               bFromSweep                                                       (None)
// struct FHitResult                  OverlapInfo                                                      (None)

void AInteractiveFoliageActor::CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractiveFoliageActor", "CapsuleTouched");

	Params::AInteractiveFoliageActor_CapsuleTouched_Params Parms{};

	Parms.OverlappedComp = OverlappedComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.OverlapInfo = OverlapInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Foliage.ProceduralFoliageBlockingVolume
// (Actor)

class UClass* AProceduralFoliageBlockingVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralFoliageBlockingVolume");

	return Clss;
}


// ProceduralFoliageBlockingVolume Foliage.Default__ProceduralFoliageBlockingVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AProceduralFoliageBlockingVolume* AProceduralFoliageBlockingVolume::GetDefaultObj()
{
	static class AProceduralFoliageBlockingVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AProceduralFoliageBlockingVolume*>(AProceduralFoliageBlockingVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.ProceduralFoliageComponent
// (None)

class UClass* UProceduralFoliageComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralFoliageComponent");

	return Clss;
}


// ProceduralFoliageComponent Foliage.Default__ProceduralFoliageComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralFoliageComponent* UProceduralFoliageComponent::GetDefaultObj()
{
	static class UProceduralFoliageComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralFoliageComponent*>(UProceduralFoliageComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.ProceduralFoliageSpawner
// (None)

class UClass* UProceduralFoliageSpawner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralFoliageSpawner");

	return Clss;
}


// ProceduralFoliageSpawner Foliage.Default__ProceduralFoliageSpawner
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralFoliageSpawner* UProceduralFoliageSpawner::GetDefaultObj()
{
	static class UProceduralFoliageSpawner* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralFoliageSpawner*>(UProceduralFoliageSpawner::StaticClass()->DefaultObject);

	return Default;
}


// Function Foliage.ProceduralFoliageSpawner.Simulate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumSteps                                                         (None)

void UProceduralFoliageSpawner::Simulate(int32 NumSteps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralFoliageSpawner", "Simulate");

	Params::UProceduralFoliageSpawner_Simulate_Params Parms{};

	Parms.NumSteps = NumSteps;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Foliage.ProceduralFoliageTile
// (None)

class UClass* UProceduralFoliageTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralFoliageTile");

	return Clss;
}


// ProceduralFoliageTile Foliage.Default__ProceduralFoliageTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralFoliageTile* UProceduralFoliageTile::GetDefaultObj()
{
	static class UProceduralFoliageTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralFoliageTile*>(UProceduralFoliageTile::StaticClass()->DefaultObject);

	return Default;
}


// Class Foliage.ProceduralFoliageVolume
// (Actor)

class UClass* AProceduralFoliageVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralFoliageVolume");

	return Clss;
}


// ProceduralFoliageVolume Foliage.Default__ProceduralFoliageVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AProceduralFoliageVolume* AProceduralFoliageVolume::GetDefaultObj()
{
	static class AProceduralFoliageVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AProceduralFoliageVolume*>(AProceduralFoliageVolume::StaticClass()->DefaultObject);

	return Default;
}

}


