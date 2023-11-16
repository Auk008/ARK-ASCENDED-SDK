#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GeometryCollectionEngine.PrimalDestructibleActor
// (Actor)

class UClass* APrimalDestructibleActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalDestructibleActor");

	return Clss;
}


// PrimalDestructibleActor GeometryCollectionEngine.Default__PrimalDestructibleActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APrimalDestructibleActor* APrimalDestructibleActor::GetDefaultObj()
{
	static class APrimalDestructibleActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimalDestructibleActor*>(APrimalDestructibleActor::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCollectionEngine.PrimalDestructibleActor.StaticBPPreDestructionHandleAttachedComponentClass
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// class UClass*                      AttachedComponentClass                                           (ZeroConstructor)
// class UInstancedStaticMeshComponent*ForMeshComp                                                      (None)
// struct FVector                     InstancePosition                                                 (None)
// struct FRotator                    InstanceRotation                                                 (None)
// int32                              InstanceIndex                                                    (None)
// struct FVector                     HitDirection                                                     (None)
// float                              Damage                                                           (None)
// float                              TotalHealth                                                      (None)

void APrimalDestructibleActor::StaticBPPreDestructionHandleAttachedComponentClass(class UClass* AttachedComponentClass, class UInstancedStaticMeshComponent* ForMeshComp, const struct FVector& InstancePosition, const struct FRotator& InstanceRotation, int32 InstanceIndex, const struct FVector& HitDirection, float Damage, float TotalHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleActor", "StaticBPPreDestructionHandleAttachedComponentClass");

	Params::APrimalDestructibleActor_StaticBPPreDestructionHandleAttachedComponentClass_Params Parms{};

	Parms.AttachedComponentClass = AttachedComponentClass;
	Parms.ForMeshComp = ForMeshComp;
	Parms.InstancePosition = InstancePosition;
	Parms.InstanceRotation = InstanceRotation;
	Parms.InstanceIndex = InstanceIndex;
	Parms.HitDirection = HitDirection;
	Parms.Damage = Damage;
	Parms.TotalHealth = TotalHealth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeometryCollectionEngine.PrimalDestructibleActor.SetGeoCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGeometryCollection*         GeoCollection                                                    (None)

void APrimalDestructibleActor::SetGeoCollection(class UGeometryCollection* GeoCollection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleActor", "SetGeoCollection");

	Params::APrimalDestructibleActor_SetGeoCollection_Params Parms{};

	Parms.GeoCollection = GeoCollection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.PrimalDestructibleActor.BPStartDestruction
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// class UGeometryCollection*         DestructionAsset                                                 (None)
// struct FVector                     HitDirection                                                     (None)
// float                              Damage                                                           (None)
// float                              TotalHealth                                                      (None)

void APrimalDestructibleActor::BPStartDestruction(class UGeometryCollection* DestructionAsset, const struct FVector& HitDirection, float Damage, float TotalHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleActor", "BPStartDestruction");

	Params::APrimalDestructibleActor_BPStartDestruction_Params Parms{};

	Parms.DestructionAsset = DestructionAsset;
	Parms.HitDirection = HitDirection;
	Parms.Damage = Damage;
	Parms.TotalHealth = TotalHealth;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GeometryCollectionEngine.ChaosDestructionListener
// (SceneComponent)

class UClass* UChaosDestructionListener::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosDestructionListener");

	return Clss;
}


// ChaosDestructionListener GeometryCollectionEngine.Default__ChaosDestructionListener
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosDestructionListener* UChaosDestructionListener::GetDefaultObj()
{
	static class UChaosDestructionListener* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosDestructionListener*>(UChaosDestructionListener::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FChaosTrailingEventData>TrailingEvents                                                   (None)
// enum class EChaosTrailingSortMethodSortMethod                                                       (None)

void UChaosDestructionListener::SortTrailingEvents(const TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SortTrailingEvents");

	Params::UChaosDestructionListener_SortTrailingEvents_Params Parms{};

	Parms.TrailingEvents = TrailingEvents;
	Parms.SortMethod = SortMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FChaosRemovalEventData>RemovalEvents                                                    (None)
// enum class EChaosRemovalSortMethod SortMethod                                                       (None)

void UChaosDestructionListener::SortRemovalEvents(const TArray<struct FChaosRemovalEventData>& RemovalEvents, enum class EChaosRemovalSortMethod SortMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SortRemovalEvents");

	Params::UChaosDestructionListener_SortRemovalEvents_Params Parms{};

	Parms.RemovalEvents = RemovalEvents;
	Parms.SortMethod = SortMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FChaosCollisionEventData>CollisionEvents                                                  (None)
// enum class EChaosCollisionSortMethodSortMethod                                                       (None)

void UChaosDestructionListener::SortCollisionEvents(const TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SortCollisionEvents");

	Params::UChaosDestructionListener_SortCollisionEvents_Params Parms{};

	Parms.CollisionEvents = CollisionEvents;
	Parms.SortMethod = SortMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FChaosBreakingEventData>BreakingEvents                                                   (None)
// enum class EChaosBreakingSortMethodSortMethod                                                       (None)

void UChaosDestructionListener::SortBreakingEvents(const TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SortBreakingEvents");

	Params::UChaosDestructionListener_SortBreakingEvents_Params Parms{};

	Parms.BreakingEvents = BreakingEvents;
	Parms.SortMethod = SortMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChaosTrailingEventRequestSettingsInSettings                                                       (None)

void UChaosDestructionListener::SetTrailingEventRequestSettings(const struct FChaosTrailingEventRequestSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SetTrailingEventRequestSettings");

	Params::UChaosDestructionListener_SetTrailingEventRequestSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (None)

void UChaosDestructionListener::SetTrailingEventEnabled(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SetTrailingEventEnabled");

	Params::UChaosDestructionListener_SetTrailingEventEnabled_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChaosRemovalEventRequestSettingsInSettings                                                       (None)

void UChaosDestructionListener::SetRemovalEventRequestSettings(const struct FChaosRemovalEventRequestSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SetRemovalEventRequestSettings");

	Params::UChaosDestructionListener_SetRemovalEventRequestSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (None)

void UChaosDestructionListener::SetRemovalEventEnabled(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SetRemovalEventEnabled");

	Params::UChaosDestructionListener_SetRemovalEventEnabled_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChaosCollisionEventRequestSettingsInSettings                                                       (None)

void UChaosDestructionListener::SetCollisionEventRequestSettings(const struct FChaosCollisionEventRequestSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SetCollisionEventRequestSettings");

	Params::UChaosDestructionListener_SetCollisionEventRequestSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (None)

void UChaosDestructionListener::SetCollisionEventEnabled(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SetCollisionEventEnabled");

	Params::UChaosDestructionListener_SetCollisionEventEnabled_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChaosBreakingEventRequestSettingsInSettings                                                       (None)

void UChaosDestructionListener::SetBreakingEventRequestSettings(const struct FChaosBreakingEventRequestSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SetBreakingEventRequestSettings");

	Params::UChaosDestructionListener_SetBreakingEventRequestSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (None)

void UChaosDestructionListener::SetBreakingEventEnabled(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "SetBreakingEventEnabled");

	Params::UChaosDestructionListener_SetBreakingEventEnabled_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AGeometryCollectionActor*    GeometryCollectionActor                                          (None)

void UChaosDestructionListener::RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "RemoveGeometryCollectionActor");

	Params::UChaosDestructionListener_RemoveGeometryCollectionActor_Params Parms{};

	Parms.GeometryCollectionActor = GeometryCollectionActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AChaosSolverActor*           ChaosSolverActor                                                 (None)

void UChaosDestructionListener::RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "RemoveChaosSolverActor");

	Params::UChaosDestructionListener_RemoveChaosSolverActor_Params Parms{};

	Parms.ChaosSolverActor = ChaosSolverActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UChaosDestructionListener::IsEventListening(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "IsEventListening");

	Params::UChaosDestructionListener_IsEventListening_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AGeometryCollectionActor*    GeometryCollectionActor                                          (None)

void UChaosDestructionListener::AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "AddGeometryCollectionActor");

	Params::UChaosDestructionListener_AddGeometryCollectionActor_Params Parms{};

	Parms.GeometryCollectionActor = GeometryCollectionActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AChaosSolverActor*           ChaosSolverActor                                                 (None)

void UChaosDestructionListener::AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosDestructionListener", "AddChaosSolverActor");

	Params::UChaosDestructionListener_AddChaosSolverActor_Params Parms{};

	Parms.ChaosSolverActor = ChaosSolverActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryCollectionEngine.GeometryCollectionActor
// (Actor)

class UClass* AGeometryCollectionActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionActor");

	return Clss;
}


// GeometryCollectionActor GeometryCollectionEngine.Default__GeometryCollectionActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGeometryCollectionActor* AGeometryCollectionActor::GetDefaultObj()
{
	static class AGeometryCollectionActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGeometryCollectionActor*>(AGeometryCollectionActor::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     Start                                                            (None)
// struct FVector                     End                                                              (None)
// struct FHitResult                  OutHit                                                           (None)
// bool                               ReturnValue                                                      (None)

void AGeometryCollectionActor::RaycastSingle(const struct FVector& Start, const struct FVector& End, const struct FHitResult& OutHit, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionActor", "RaycastSingle");

	Params::AGeometryCollectionActor_RaycastSingle_Params Parms{};

	Parms.Start = Start;
	Parms.End = End;
	Parms.OutHit = OutHit;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryCollectionEngine.GeometryCollectionCache
// (None)

class UClass* UGeometryCollectionCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionCache");

	return Clss;
}


// GeometryCollectionCache GeometryCollectionEngine.Default__GeometryCollectionCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCollectionCache* UGeometryCollectionCache::GetDefaultObj()
{
	static class UGeometryCollectionCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCollectionCache*>(UGeometryCollectionCache::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCollectionEngine.GeometryCollectionComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGeometryCollectionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionComponent");

	return Clss;
}


// GeometryCollectionComponent GeometryCollectionEngine.Default__GeometryCollectionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCollectionComponent* UGeometryCollectionComponent::GetDefaultObj()
{
	static class UGeometryCollectionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCollectionComponent*>(UGeometryCollectionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGeometryCollection*         RestCollectionIn                                                 (None)

void UGeometryCollectionComponent::SetRestCollection(class UGeometryCollection* RestCollectionIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "SetRestCollection");

	Params::UGeometryCollectionComponent_SetRestCollection_Params Parms{};

	Parms.RestCollectionIn = RestCollectionIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewNotifyRemovals                                               (None)

void UGeometryCollectionComponent::SetNotifyRemovals(bool bNewNotifyRemovals)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "SetNotifyRemovals");

	Params::UGeometryCollectionComponent_SetNotifyRemovals_Params Parms{};

	Parms.bNewNotifyRemovals = bNewNotifyRemovals;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewNotifyCrumblings                                             (None)
// bool                               bNewCrumblingEventIncludesChildren                               (None)

void UGeometryCollectionComponent::SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "SetNotifyCrumblings");

	Params::UGeometryCollectionComponent_SetNotifyCrumblings_Params Parms{};

	Parms.bNewNotifyCrumblings = bNewNotifyCrumblings;
	Parms.bNewCrumblingEventIncludesChildren = bNewCrumblingEventIncludesChildren;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewNotifyBreaks                                                 (None)

void UGeometryCollectionComponent::SetNotifyBreaks(bool bNewNotifyBreaks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "SetNotifyBreaks");

	Params::UGeometryCollectionComponent_SetNotifyBreaks_Params Parms{};

	Parms.bNewNotifyBreaks = bNewNotifyBreaks;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetEnableDamageFromCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (None)

void UGeometryCollectionComponent::SetEnableDamageFromCollision(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "SetEnableDamageFromCollision");

	Params::UGeometryCollectionComponent_SetEnableDamageFromCollision_Params Parms{};

	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByTransformedBox
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                        Box                                                              (None)
// struct FTransform                  Transform                                                        (None)
// bool                               bAnchored                                                        (None)
// int32                              MaxLevel                                                         (None)

void UGeometryCollectionComponent::SetAnchoredByTransformedBox(const struct FBox& Box, const struct FTransform& Transform, bool bAnchored, int32 MaxLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "SetAnchoredByTransformedBox");

	Params::UGeometryCollectionComponent_SetAnchoredByTransformedBox_Params Parms{};

	Parms.Box = Box;
	Parms.Transform = Transform;
	Parms.bAnchored = bAnchored;
	Parms.MaxLevel = MaxLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (None)
// bool                               bAnchored                                                        (None)

void UGeometryCollectionComponent::SetAnchoredByIndex(int32 Index, bool bAnchored)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "SetAnchoredByIndex");

	Params::UGeometryCollectionComponent_SetAnchoredByIndex_Params Parms{};

	Parms.Index = Index;
	Parms.bAnchored = bAnchored;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByBox
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                        WorldSpaceBox                                                    (None)
// bool                               bAnchored                                                        (None)
// int32                              MaxLevel                                                         (None)

void UGeometryCollectionComponent::SetAnchoredByBox(const struct FBox& WorldSpaceBox, bool bAnchored, int32 MaxLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "SetAnchoredByBox");

	Params::UGeometryCollectionComponent_SetAnchoredByBox_Params Parms{};

	Parms.WorldSpaceBox = WorldSpaceBox;
	Parms.bAnchored = bAnchored;
	Parms.MaxLevel = MaxLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.RemoveAllAnchors
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCollectionComponent::RemoveAllAnchors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "RemoveAllAnchors");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FChaosPhysicsCollisionInfo  CollisionInfo                                                    (None)

void UGeometryCollectionComponent::ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "ReceivePhysicsCollision");

	Params::UGeometryCollectionComponent_ReceivePhysicsCollision_Params Parms{};

	Parms.CollisionInfo = CollisionInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UGeometryCollectionComponent*FracturedComponent                                               (None)

void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "NotifyGeometryCollectionPhysicsStateChange__DelegateSignature");

	Params::UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params Parms{};

	Parms.FracturedComponent = FracturedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UGeometryCollectionComponent*FracturedComponent                                               (None)

void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature");

	Params::UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params Parms{};

	Parms.FracturedComponent = FracturedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.GetRootIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UGeometryCollectionComponent::GetRootIndex(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "GetRootIndex");

	Params::UGeometryCollectionComponent_GetRootIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.GetMassAndExtents
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (None)
// float                              OutMass                                                          (None)
// struct FBox                        OutExtents                                                       (None)

void UGeometryCollectionComponent::GetMassAndExtents(int32 ItemIndex, float OutMass, const struct FBox& OutExtents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "GetMassAndExtents");

	Params::UGeometryCollectionComponent_GetMassAndExtents_Params Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.OutMass = OutMass;
	Parms.OutExtents = OutExtents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.GetLocalBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (None)

void UGeometryCollectionComponent::GetLocalBounds(const struct FBox& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "GetLocalBounds");

	Params::UGeometryCollectionComponent_GetLocalBounds_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (None)
// int32                              ReturnValue                                                      (None)

void UGeometryCollectionComponent::GetInitialLevel(int32 ItemIndex, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "GetInitialLevel");

	Params::UGeometryCollectionComponent_GetInitialLevel_Params Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.GetDebugInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (None)

void UGeometryCollectionComponent::GetDebugInfo(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "GetDebugInfo");

	Params::UGeometryCollectionComponent_GetDebugInfo_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (None)

void UGeometryCollectionComponent::CrumbleCluster(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "CrumbleCluster");

	Params::UGeometryCollectionComponent_CrumbleCluster_Params Parms{};

	Parms.ItemIndex = ItemIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleActiveClusters
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCollectionComponent::CrumbleActiveClusters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "CrumbleActiveClusters");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.BPGetMaxIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UGeometryCollectionComponent::BPGetMaxIndex(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "BPGetMaxIndex");

	Params::UGeometryCollectionComponent_BPGetMaxIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (None)
// enum class EGeometryCollectionPhysicsTypeEnumTarget                                                           (None)
// class UFieldSystemMetaData*        MetaData                                                         (ZeroConstructor)
// class UFieldNodeBase*              Field                                                            (None)

void UGeometryCollectionComponent::ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "ApplyPhysicsField");

	Params::UGeometryCollectionComponent_ApplyPhysicsField_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.Target = Target;
	Parms.MetaData = MetaData;
	Parms.Field = Field;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (None)
// struct FVector                     LinearVelocity                                                   (None)

void UGeometryCollectionComponent::ApplyLinearVelocity(int32 ItemIndex, const struct FVector& LinearVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "ApplyLinearVelocity");

	Params::UGeometryCollectionComponent_ApplyLinearVelocity_Params Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.LinearVelocity = LinearVelocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              Radius                                                           (None)
// struct FVector                     Position                                                         (None)

void UGeometryCollectionComponent::ApplyKinematicField(float Radius, const struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "ApplyKinematicField");

	Params::UGeometryCollectionComponent_ApplyKinematicField_Params Parms{};

	Parms.Radius = Radius;
	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (None)
// struct FVector                     Location                                                         (None)
// float                              Radius                                                           (None)
// int32                              PropagationDepth                                                 (None)
// float                              PropagationFactor                                                (None)
// float                              Strain                                                           (None)

void UGeometryCollectionComponent::ApplyInternalStrain(int32 ItemIndex, const struct FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "ApplyInternalStrain");

	Params::UGeometryCollectionComponent_ApplyInternalStrain_Params Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.Location = Location;
	Parms.Radius = Radius;
	Parms.PropagationDepth = PropagationDepth;
	Parms.PropagationFactor = PropagationFactor;
	Parms.Strain = Strain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (None)
// struct FVector                     Location                                                         (None)
// float                              Radius                                                           (None)
// int32                              PropagationDepth                                                 (None)
// float                              PropagationFactor                                                (None)
// float                              Strain                                                           (None)

void UGeometryCollectionComponent::ApplyExternalStrain(int32 ItemIndex, const struct FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "ApplyExternalStrain");

	Params::UGeometryCollectionComponent_ApplyExternalStrain_Params Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.Location = Location;
	Parms.Radius = Radius;
	Parms.PropagationDepth = PropagationDepth;
	Parms.PropagationFactor = PropagationFactor;
	Parms.Strain = Strain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (None)
// struct FVector                     LinearVelocity                                                   (None)

void UGeometryCollectionComponent::ApplyBreakingLinearVelocity(int32 ItemIndex, const struct FVector& LinearVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "ApplyBreakingLinearVelocity");

	Params::UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Params Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.LinearVelocity = LinearVelocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (None)
// struct FVector                     AngularVelocity                                                  (None)

void UGeometryCollectionComponent::ApplyBreakingAngularVelocity(int32 ItemIndex, const struct FVector& AngularVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "ApplyBreakingAngularVelocity");

	Params::UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Params Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.AngularVelocity = AngularVelocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              ItemIndex                                                        (None)
// struct FVector                     AngularVelocity                                                  (None)

void UGeometryCollectionComponent::ApplyAngularVelocity(int32 ItemIndex, const struct FVector& AngularVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCollectionComponent", "ApplyAngularVelocity");

	Params::UGeometryCollectionComponent_ApplyAngularVelocity_Params Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.AngularVelocity = AngularVelocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// (Actor)

class UClass* AGeometryCollectionDebugDrawActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionDebugDrawActor");

	return Clss;
}


// GeometryCollectionDebugDrawActor GeometryCollectionEngine.Default__GeometryCollectionDebugDrawActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGeometryCollectionDebugDrawActor* AGeometryCollectionDebugDrawActor::GetDefaultObj()
{
	static class AGeometryCollectionDebugDrawActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGeometryCollectionDebugDrawActor*>(AGeometryCollectionDebugDrawActor::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// (None)

class UClass* UGeometryCollectionDebugDrawComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionDebugDrawComponent");

	return Clss;
}


// GeometryCollectionDebugDrawComponent GeometryCollectionEngine.Default__GeometryCollectionDebugDrawComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCollectionDebugDrawComponent* UGeometryCollectionDebugDrawComponent::GetDefaultObj()
{
	static class UGeometryCollectionDebugDrawComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCollectionDebugDrawComponent*>(UGeometryCollectionDebugDrawComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCollectionEngine.GeometryCollectionISMPoolActor
// (Actor)

class UClass* AGeometryCollectionISMPoolActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionISMPoolActor");

	return Clss;
}


// GeometryCollectionISMPoolActor GeometryCollectionEngine.Default__GeometryCollectionISMPoolActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGeometryCollectionISMPoolActor* AGeometryCollectionISMPoolActor::GetDefaultObj()
{
	static class AGeometryCollectionISMPoolActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGeometryCollectionISMPoolActor*>(AGeometryCollectionISMPoolActor::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCollectionEngine.GeometryCollectionISMPoolComponent
// (SceneComponent)

class UClass* UGeometryCollectionISMPoolComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionISMPoolComponent");

	return Clss;
}


// GeometryCollectionISMPoolComponent GeometryCollectionEngine.Default__GeometryCollectionISMPoolComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCollectionISMPoolComponent* UGeometryCollectionISMPoolComponent::GetDefaultObj()
{
	static class UGeometryCollectionISMPoolComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCollectionISMPoolComponent*>(UGeometryCollectionISMPoolComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCollectionEngine.GeometryCollection
// (None)

class UClass* UGeometryCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollection");

	return Clss;
}


// GeometryCollection GeometryCollectionEngine.Default__GeometryCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCollection* UGeometryCollection::GetDefaultObj()
{
	static class UGeometryCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCollection*>(UGeometryCollection::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// (Actor)

class UClass* AGeometryCollectionRenderLevelSetActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionRenderLevelSetActor");

	return Clss;
}


// GeometryCollectionRenderLevelSetActor GeometryCollectionEngine.Default__GeometryCollectionRenderLevelSetActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGeometryCollectionRenderLevelSetActor* AGeometryCollectionRenderLevelSetActor::GetDefaultObj()
{
	static class AGeometryCollectionRenderLevelSetActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGeometryCollectionRenderLevelSetActor*>(AGeometryCollectionRenderLevelSetActor::StaticClass()->DefaultObject);

	return Default;
}

}


