#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FieldSystemEngine.FieldSystemActor
// (Actor)

class UClass* AFieldSystemActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldSystemActor");

	return Clss;
}


// FieldSystemActor FieldSystemEngine.Default__FieldSystemActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AFieldSystemActor* AFieldSystemActor::GetDefaultObj()
{
	static class AFieldSystemActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AFieldSystemActor*>(AFieldSystemActor::StaticClass()->DefaultObject);

	return Default;
}


// Class FieldSystemEngine.FieldSystem
// (None)

class UClass* UFieldSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldSystem");

	return Clss;
}


// FieldSystem FieldSystemEngine.Default__FieldSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UFieldSystem* UFieldSystem::GetDefaultObj()
{
	static class UFieldSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldSystem*>(UFieldSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class FieldSystemEngine.FieldSystemComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UFieldSystemComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldSystemComponent");

	return Clss;
}


// FieldSystemComponent FieldSystemEngine.Default__FieldSystemComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFieldSystemComponent* UFieldSystemComponent::GetDefaultObj()
{
	static class UFieldSystemComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldSystemComponent*>(UFieldSystemComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFieldSystemComponent::ResetFieldSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ResetFieldSystem");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FieldSystemEngine.FieldSystemComponent.RemovePersistentFields
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFieldSystemComponent::RemovePersistentFields()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "RemovePersistentFields");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (None)
// struct FVector                     Position                                                         (None)
// struct FVector                     Direction                                                        (None)
// float                              Radius                                                           (None)
// float                              Magnitude                                                        (None)

void UFieldSystemComponent::ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& Position, const struct FVector& Direction, float Radius, float Magnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyUniformVectorFalloffForce");

	Params::UFieldSystemComponent_ApplyUniformVectorFalloffForce_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.Position = Position;
	Parms.Direction = Direction;
	Parms.Radius = Radius;
	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (None)
// struct FVector                     Position                                                         (None)
// float                              Radius                                                           (None)
// float                              Magnitude                                                        (None)
// int32                              Iterations                                                       (None)

void UFieldSystemComponent::ApplyStrainField(bool Enabled, const struct FVector& Position, float Radius, float Magnitude, int32 Iterations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyStrainField");

	Params::UFieldSystemComponent_ApplyStrainField_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.Position = Position;
	Parms.Radius = Radius;
	Parms.Magnitude = Magnitude;
	Parms.Iterations = Iterations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (None)
// struct FVector                     Position                                                         (None)
// float                              Radius                                                           (None)

void UFieldSystemComponent::ApplyStayDynamicField(bool Enabled, const struct FVector& Position, float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyStayDynamicField");

	Params::UFieldSystemComponent_ApplyStayDynamicField_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.Position = Position;
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (None)
// struct FVector                     Position                                                         (None)
// float                              Radius                                                           (None)
// float                              Magnitude                                                        (None)

void UFieldSystemComponent::ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& Position, float Radius, float Magnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyRadialVectorFalloffForce");

	Params::UFieldSystemComponent_ApplyRadialVectorFalloffForce_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.Position = Position;
	Parms.Radius = Radius;
	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (None)
// struct FVector                     Position                                                         (None)
// float                              Magnitude                                                        (None)

void UFieldSystemComponent::ApplyRadialForce(bool Enabled, const struct FVector& Position, float Magnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyRadialForce");

	Params::UFieldSystemComponent_ApplyRadialForce_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.Position = Position;
	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (None)
// enum class EFieldPhysicsType       Target                                                           (None)
// class UFieldSystemMetaData*        MetaData                                                         (ZeroConstructor)
// class UFieldNodeBase*              Field                                                            (None)

void UFieldSystemComponent::ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyPhysicsField");

	Params::UFieldSystemComponent_ApplyPhysicsField_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.Target = Target;
	Parms.MetaData = MetaData;
	Parms.Field = Field;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (None)
// struct FVector                     Direction                                                        (None)
// float                              Magnitude                                                        (None)

void UFieldSystemComponent::ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "ApplyLinearForce");

	Params::UFieldSystemComponent_ApplyLinearForce_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.Direction = Direction;
	Parms.Magnitude = Magnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FieldSystemEngine.FieldSystemComponent.AddPersistentField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (None)
// enum class EFieldPhysicsType       Target                                                           (None)
// class UFieldSystemMetaData*        MetaData                                                         (ZeroConstructor)
// class UFieldNodeBase*              Field                                                            (None)

void UFieldSystemComponent::AddPersistentField(bool Enabled, enum class EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "AddPersistentField");

	Params::UFieldSystemComponent_AddPersistentField_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.Target = Target;
	Parms.MetaData = MetaData;
	Parms.Field = Field;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (None)
// enum class EFieldPhysicsType       Target                                                           (None)
// class UFieldSystemMetaData*        MetaData                                                         (ZeroConstructor)
// class UFieldNodeBase*              Field                                                            (None)

void UFieldSystemComponent::AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemComponent", "AddFieldCommand");

	Params::UFieldSystemComponent_AddFieldCommand_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.Target = Target;
	Parms.MetaData = MetaData;
	Parms.Field = Field;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FieldSystemEngine.FieldSystemMetaData
// (None)

class UClass* UFieldSystemMetaData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldSystemMetaData");

	return Clss;
}


// FieldSystemMetaData FieldSystemEngine.Default__FieldSystemMetaData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFieldSystemMetaData* UFieldSystemMetaData::GetDefaultObj()
{
	static class UFieldSystemMetaData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldSystemMetaData*>(UFieldSystemMetaData::StaticClass()->DefaultObject);

	return Default;
}


// Class FieldSystemEngine.FieldSystemMetaDataIteration
// (None)

class UClass* UFieldSystemMetaDataIteration::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldSystemMetaDataIteration");

	return Clss;
}


// FieldSystemMetaDataIteration FieldSystemEngine.Default__FieldSystemMetaDataIteration
// (Public, ClassDefaultObject, ArchetypeObject)

class UFieldSystemMetaDataIteration* UFieldSystemMetaDataIteration::GetDefaultObj()
{
	static class UFieldSystemMetaDataIteration* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldSystemMetaDataIteration*>(UFieldSystemMetaDataIteration::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Iterations                                                       (None)
// class UFieldSystemMetaDataIteration*ReturnValue                                                      (None)

void UFieldSystemMetaDataIteration::SetMetaDataIteration(int32 Iterations, class UFieldSystemMetaDataIteration* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemMetaDataIteration", "SetMetaDataIteration");

	Params::UFieldSystemMetaDataIteration_SetMetaDataIteration_Params Parms{};

	Parms.Iterations = Iterations;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// (None)

class UClass* UFieldSystemMetaDataProcessingResolution::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldSystemMetaDataProcessingResolution");

	return Clss;
}


// FieldSystemMetaDataProcessingResolution FieldSystemEngine.Default__FieldSystemMetaDataProcessingResolution
// (Public, ClassDefaultObject, ArchetypeObject)

class UFieldSystemMetaDataProcessingResolution* UFieldSystemMetaDataProcessingResolution::GetDefaultObj()
{
	static class UFieldSystemMetaDataProcessingResolution* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldSystemMetaDataProcessingResolution*>(UFieldSystemMetaDataProcessingResolution::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EFieldResolutionType    ResolutionType                                                   (None)
// class UFieldSystemMetaDataProcessingResolution*ReturnValue                                                      (None)

void UFieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType, class UFieldSystemMetaDataProcessingResolution* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemMetaDataProcessingResolution", "SetMetaDataaProcessingResolutionType");

	Params::UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Params Parms{};

	Parms.ResolutionType = ResolutionType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FieldSystemEngine.FieldSystemMetaDataFilter
// (None)

class UClass* UFieldSystemMetaDataFilter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldSystemMetaDataFilter");

	return Clss;
}


// FieldSystemMetaDataFilter FieldSystemEngine.Default__FieldSystemMetaDataFilter
// (Public, ClassDefaultObject, ArchetypeObject)

class UFieldSystemMetaDataFilter* UFieldSystemMetaDataFilter::GetDefaultObj()
{
	static class UFieldSystemMetaDataFilter* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldSystemMetaDataFilter*>(UFieldSystemMetaDataFilter::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EFieldFilterType        FilterType                                                       (None)
// enum class EFieldObjectType        ObjectType                                                       (None)
// enum class EFieldPositionType      PositionType                                                     (None)
// class UFieldSystemMetaDataFilter*  ReturnValue                                                      (None)

void UFieldSystemMetaDataFilter::SetMetaDataFilterType(enum class EFieldFilterType FilterType, enum class EFieldObjectType ObjectType, enum class EFieldPositionType PositionType, class UFieldSystemMetaDataFilter* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FieldSystemMetaDataFilter", "SetMetaDataFilterType");

	Params::UFieldSystemMetaDataFilter_SetMetaDataFilterType_Params Parms{};

	Parms.FilterType = FilterType;
	Parms.ObjectType = ObjectType;
	Parms.PositionType = PositionType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FieldSystemEngine.FieldNodeBase
// (None)

class UClass* UFieldNodeBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldNodeBase");

	return Clss;
}


// FieldNodeBase FieldSystemEngine.Default__FieldNodeBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFieldNodeBase* UFieldNodeBase::GetDefaultObj()
{
	static class UFieldNodeBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldNodeBase*>(UFieldNodeBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FieldSystemEngine.FieldNodeInt
// (None)

class UClass* UFieldNodeInt::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldNodeInt");

	return Clss;
}


// FieldNodeInt FieldSystemEngine.Default__FieldNodeInt
// (Public, ClassDefaultObject, ArchetypeObject)

class UFieldNodeInt* UFieldNodeInt::GetDefaultObj()
{
	static class UFieldNodeInt* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldNodeInt*>(UFieldNodeInt::StaticClass()->DefaultObject);

	return Default;
}


// Class FieldSystemEngine.FieldNodeFloat
// (None)

class UClass* UFieldNodeFloat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldNodeFloat");

	return Clss;
}


// FieldNodeFloat FieldSystemEngine.Default__FieldNodeFloat
// (Public, ClassDefaultObject, ArchetypeObject)

class UFieldNodeFloat* UFieldNodeFloat::GetDefaultObj()
{
	static class UFieldNodeFloat* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldNodeFloat*>(UFieldNodeFloat::StaticClass()->DefaultObject);

	return Default;
}


// Class FieldSystemEngine.FieldNodeVector
// (None)

class UClass* UFieldNodeVector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldNodeVector");

	return Clss;
}


// FieldNodeVector FieldSystemEngine.Default__FieldNodeVector
// (Public, ClassDefaultObject, ArchetypeObject)

class UFieldNodeVector* UFieldNodeVector::GetDefaultObj()
{
	static class UFieldNodeVector* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldNodeVector*>(UFieldNodeVector::StaticClass()->DefaultObject);

	return Default;
}


// Class FieldSystemEngine.UniformInteger
// (None)

class UClass* UUniformInteger::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UniformInteger");

	return Clss;
}


// UniformInteger FieldSystemEngine.Default__UniformInteger
// (Public, ClassDefaultObject, ArchetypeObject)

class UUniformInteger* UUniformInteger::GetDefaultObj()
{
	static class UUniformInteger* Default = nullptr;

	if (!Default)
		Default = static_cast<UUniformInteger*>(UUniformInteger::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.UniformInteger.SetUniformInteger
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Magnitude                                                        (None)
// class UUniformInteger*             ReturnValue                                                      (None)

void UUniformInteger::SetUniformInteger(int32 Magnitude, class UUniformInteger* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformInteger", "SetUniformInteger");

	Params::UUniformInteger_SetUniformInteger_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FieldSystemEngine.RadialIntMask
// (None)

class UClass* URadialIntMask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadialIntMask");

	return Clss;
}


// RadialIntMask FieldSystemEngine.Default__RadialIntMask
// (Public, ClassDefaultObject, ArchetypeObject)

class URadialIntMask* URadialIntMask::GetDefaultObj()
{
	static class URadialIntMask* Default = nullptr;

	if (!Default)
		Default = static_cast<URadialIntMask*>(URadialIntMask::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Radius                                                           (None)
// struct FVector                     Position                                                         (None)
// int32                              InteriorValue                                                    (None)
// int32                              ExteriorValue                                                    (None)
// enum class ESetMaskConditionType   SetMaskConditionIn                                               (None)
// class URadialIntMask*              ReturnValue                                                      (None)

void URadialIntMask::SetRadialIntMask(float Radius, const struct FVector& Position, int32 InteriorValue, int32 ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn, class URadialIntMask* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialIntMask", "SetRadialIntMask");

	Params::URadialIntMask_SetRadialIntMask_Params Parms{};

	Parms.Radius = Radius;
	Parms.Position = Position;
	Parms.InteriorValue = InteriorValue;
	Parms.ExteriorValue = ExteriorValue;
	Parms.SetMaskConditionIn = SetMaskConditionIn;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FieldSystemEngine.UniformScalar
// (None)

class UClass* UUniformScalar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UniformScalar");

	return Clss;
}


// UniformScalar FieldSystemEngine.Default__UniformScalar
// (Public, ClassDefaultObject, ArchetypeObject)

class UUniformScalar* UUniformScalar::GetDefaultObj()
{
	static class UUniformScalar* Default = nullptr;

	if (!Default)
		Default = static_cast<UUniformScalar*>(UUniformScalar::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.UniformScalar.SetUniformScalar
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Magnitude                                                        (None)
// class UUniformScalar*              ReturnValue                                                      (None)

void UUniformScalar::SetUniformScalar(float Magnitude, class UUniformScalar* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformScalar", "SetUniformScalar");

	Params::UUniformScalar_SetUniformScalar_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FieldSystemEngine.WaveScalar
// (None)

class UClass* UWaveScalar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaveScalar");

	return Clss;
}


// WaveScalar FieldSystemEngine.Default__WaveScalar
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaveScalar* UWaveScalar::GetDefaultObj()
{
	static class UWaveScalar* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaveScalar*>(UWaveScalar::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.WaveScalar.SetWaveScalar
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Magnitude                                                        (None)
// struct FVector                     Position                                                         (None)
// float                              Wavelength                                                       (None)
// float                              Period                                                           (None)
// float                              Time                                                             (None)
// enum class EWaveFunctionType       Function                                                         (None)
// enum class EFieldFalloffType       Falloff                                                          (None)
// class UWaveScalar*                 ReturnValue                                                      (None)

void UWaveScalar::SetWaveScalar(float Magnitude, const struct FVector& Position, float Wavelength, float Period, float Time, enum class EWaveFunctionType Function, enum class EFieldFalloffType Falloff, class UWaveScalar* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaveScalar", "SetWaveScalar");

	Params::UWaveScalar_SetWaveScalar_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.Position = Position;
	Parms.Wavelength = Wavelength;
	Parms.Period = Period;
	Parms.Time = Time;
	Parms.Function = Function;
	Parms.Falloff = Falloff;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FieldSystemEngine.RadialFalloff
// (None)

class UClass* URadialFalloff::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadialFalloff");

	return Clss;
}


// RadialFalloff FieldSystemEngine.Default__RadialFalloff
// (Public, ClassDefaultObject, ArchetypeObject)

class URadialFalloff* URadialFalloff::GetDefaultObj()
{
	static class URadialFalloff* Default = nullptr;

	if (!Default)
		Default = static_cast<URadialFalloff*>(URadialFalloff::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Magnitude                                                        (None)
// float                              MinRange                                                         (None)
// float                              MaxRange                                                         (None)
// float                              Default                                                          (None)
// float                              Radius                                                           (None)
// struct FVector                     Position                                                         (None)
// enum class EFieldFalloffType       Falloff                                                          (None)
// class URadialFalloff*              ReturnValue                                                      (None)

void URadialFalloff::SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, const struct FVector& Position, enum class EFieldFalloffType Falloff, class URadialFalloff* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialFalloff", "SetRadialFalloff");

	Params::URadialFalloff_SetRadialFalloff_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.MinRange = MinRange;
	Parms.MaxRange = MaxRange;
	Parms.Default = Default;
	Parms.Radius = Radius;
	Parms.Position = Position;
	Parms.Falloff = Falloff;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FieldSystemEngine.PlaneFalloff
// (None)

class UClass* UPlaneFalloff::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlaneFalloff");

	return Clss;
}


// PlaneFalloff FieldSystemEngine.Default__PlaneFalloff
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlaneFalloff* UPlaneFalloff::GetDefaultObj()
{
	static class UPlaneFalloff* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlaneFalloff*>(UPlaneFalloff::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Magnitude                                                        (None)
// float                              MinRange                                                         (None)
// float                              MaxRange                                                         (None)
// float                              Default                                                          (None)
// float                              Distance                                                         (None)
// struct FVector                     Position                                                         (None)
// struct FVector                     Normal                                                           (None)
// enum class EFieldFalloffType       Falloff                                                          (None)
// class UPlaneFalloff*               ReturnValue                                                      (None)

void UPlaneFalloff::SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, const struct FVector& Position, const struct FVector& Normal, enum class EFieldFalloffType Falloff, class UPlaneFalloff* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlaneFalloff", "SetPlaneFalloff");

	Params::UPlaneFalloff_SetPlaneFalloff_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.MinRange = MinRange;
	Parms.MaxRange = MaxRange;
	Parms.Default = Default;
	Parms.Distance = Distance;
	Parms.Position = Position;
	Parms.Normal = Normal;
	Parms.Falloff = Falloff;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FieldSystemEngine.BoxFalloff
// (None)

class UClass* UBoxFalloff::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BoxFalloff");

	return Clss;
}


// BoxFalloff FieldSystemEngine.Default__BoxFalloff
// (Public, ClassDefaultObject, ArchetypeObject)

class UBoxFalloff* UBoxFalloff::GetDefaultObj()
{
	static class UBoxFalloff* Default = nullptr;

	if (!Default)
		Default = static_cast<UBoxFalloff*>(UBoxFalloff::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Magnitude                                                        (None)
// float                              MinRange                                                         (None)
// float                              MaxRange                                                         (None)
// float                              Default                                                          (None)
// struct FTransform                  Transform                                                        (None)
// enum class EFieldFalloffType       Falloff                                                          (None)
// class UBoxFalloff*                 ReturnValue                                                      (None)

void UBoxFalloff::SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, const struct FTransform& Transform, enum class EFieldFalloffType Falloff, class UBoxFalloff* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoxFalloff", "SetBoxFalloff");

	Params::UBoxFalloff_SetBoxFalloff_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.MinRange = MinRange;
	Parms.MaxRange = MaxRange;
	Parms.Default = Default;
	Parms.Transform = Transform;
	Parms.Falloff = Falloff;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FieldSystemEngine.NoiseField
// (None)

class UClass* UNoiseField::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NoiseField");

	return Clss;
}


// NoiseField FieldSystemEngine.Default__NoiseField
// (Public, ClassDefaultObject, ArchetypeObject)

class UNoiseField* UNoiseField::GetDefaultObj()
{
	static class UNoiseField* Default = nullptr;

	if (!Default)
		Default = static_cast<UNoiseField*>(UNoiseField::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.NoiseField.SetNoiseField
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              MinRange                                                         (None)
// float                              MaxRange                                                         (None)
// struct FTransform                  Transform                                                        (None)
// class UNoiseField*                 ReturnValue                                                      (None)

void UNoiseField::SetNoiseField(float MinRange, float MaxRange, const struct FTransform& Transform, class UNoiseField* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NoiseField", "SetNoiseField");

	Params::UNoiseField_SetNoiseField_Params Parms{};

	Parms.MinRange = MinRange;
	Parms.MaxRange = MaxRange;
	Parms.Transform = Transform;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FieldSystemEngine.UniformVector
// (None)

class UClass* UUniformVector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UniformVector");

	return Clss;
}


// UniformVector FieldSystemEngine.Default__UniformVector
// (Public, ClassDefaultObject, ArchetypeObject)

class UUniformVector* UUniformVector::GetDefaultObj()
{
	static class UUniformVector* Default = nullptr;

	if (!Default)
		Default = static_cast<UUniformVector*>(UUniformVector::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.UniformVector.SetUniformVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Magnitude                                                        (None)
// struct FVector                     Direction                                                        (None)
// class UUniformVector*              ReturnValue                                                      (None)

void UUniformVector::SetUniformVector(float Magnitude, const struct FVector& Direction, class UUniformVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformVector", "SetUniformVector");

	Params::UUniformVector_SetUniformVector_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.Direction = Direction;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FieldSystemEngine.RadialVector
// (None)

class UClass* URadialVector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadialVector");

	return Clss;
}


// RadialVector FieldSystemEngine.Default__RadialVector
// (Public, ClassDefaultObject, ArchetypeObject)

class URadialVector* URadialVector::GetDefaultObj()
{
	static class URadialVector* Default = nullptr;

	if (!Default)
		Default = static_cast<URadialVector*>(URadialVector::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.RadialVector.SetRadialVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Magnitude                                                        (None)
// struct FVector                     Position                                                         (None)
// class URadialVector*               ReturnValue                                                      (None)

void URadialVector::SetRadialVector(float Magnitude, const struct FVector& Position, class URadialVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadialVector", "SetRadialVector");

	Params::URadialVector_SetRadialVector_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.Position = Position;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FieldSystemEngine.RandomVector
// (None)

class UClass* URandomVector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RandomVector");

	return Clss;
}


// RandomVector FieldSystemEngine.Default__RandomVector
// (Public, ClassDefaultObject, ArchetypeObject)

class URandomVector* URandomVector::GetDefaultObj()
{
	static class URandomVector* Default = nullptr;

	if (!Default)
		Default = static_cast<URandomVector*>(URandomVector::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.RandomVector.SetRandomVector
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Magnitude                                                        (None)
// class URandomVector*               ReturnValue                                                      (None)

void URandomVector::SetRandomVector(float Magnitude, class URandomVector* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RandomVector", "SetRandomVector");

	Params::URandomVector_SetRandomVector_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FieldSystemEngine.OperatorField
// (None)

class UClass* UOperatorField::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OperatorField");

	return Clss;
}


// OperatorField FieldSystemEngine.Default__OperatorField
// (Public, ClassDefaultObject, ArchetypeObject)

class UOperatorField* UOperatorField::GetDefaultObj()
{
	static class UOperatorField* Default = nullptr;

	if (!Default)
		Default = static_cast<UOperatorField*>(UOperatorField::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.OperatorField.SetOperatorField
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Magnitude                                                        (None)
// class UFieldNodeBase*              LeftField                                                        (ZeroConstructor)
// class UFieldNodeBase*              RightField                                                       (ZeroConstructor)
// enum class EFieldOperationType     Operation                                                        (None)
// class UOperatorField*              ReturnValue                                                      (None)

void UOperatorField::SetOperatorField(float Magnitude, class UFieldNodeBase* LeftField, class UFieldNodeBase* RightField, enum class EFieldOperationType Operation, class UOperatorField* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OperatorField", "SetOperatorField");

	Params::UOperatorField_SetOperatorField_Params Parms{};

	Parms.Magnitude = Magnitude;
	Parms.LeftField = LeftField;
	Parms.RightField = RightField;
	Parms.Operation = Operation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FieldSystemEngine.ToIntegerField
// (None)

class UClass* UToIntegerField::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToIntegerField");

	return Clss;
}


// ToIntegerField FieldSystemEngine.Default__ToIntegerField
// (Public, ClassDefaultObject, ArchetypeObject)

class UToIntegerField* UToIntegerField::GetDefaultObj()
{
	static class UToIntegerField* Default = nullptr;

	if (!Default)
		Default = static_cast<UToIntegerField*>(UToIntegerField::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.ToIntegerField.SetToIntegerField
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFieldNodeFloat*             FloatField                                                       (ZeroConstructor)
// class UToIntegerField*             ReturnValue                                                      (None)

void UToIntegerField::SetToIntegerField(class UFieldNodeFloat* FloatField, class UToIntegerField* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToIntegerField", "SetToIntegerField");

	Params::UToIntegerField_SetToIntegerField_Params Parms{};

	Parms.FloatField = FloatField;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FieldSystemEngine.ToFloatField
// (None)

class UClass* UToFloatField::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToFloatField");

	return Clss;
}


// ToFloatField FieldSystemEngine.Default__ToFloatField
// (Public, ClassDefaultObject, ArchetypeObject)

class UToFloatField* UToFloatField::GetDefaultObj()
{
	static class UToFloatField* Default = nullptr;

	if (!Default)
		Default = static_cast<UToFloatField*>(UToFloatField::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.ToFloatField.SetToFloatField
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFieldNodeInt*               IntegerField                                                     (ZeroConstructor)
// class UToFloatField*               ReturnValue                                                      (None)

void UToFloatField::SetToFloatField(class UFieldNodeInt* IntegerField, class UToFloatField* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToFloatField", "SetToFloatField");

	Params::UToFloatField_SetToFloatField_Params Parms{};

	Parms.IntegerField = IntegerField;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FieldSystemEngine.CullingField
// (None)

class UClass* UCullingField::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CullingField");

	return Clss;
}


// CullingField FieldSystemEngine.Default__CullingField
// (Public, ClassDefaultObject, ArchetypeObject)

class UCullingField* UCullingField::GetDefaultObj()
{
	static class UCullingField* Default = nullptr;

	if (!Default)
		Default = static_cast<UCullingField*>(UCullingField::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.CullingField.SetCullingField
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFieldNodeBase*              Culling                                                          (ZeroConstructor)
// class UFieldNodeBase*              Field                                                            (ZeroConstructor)
// enum class EFieldCullingOperationTypeOperation                                                        (None)
// class UCullingField*               ReturnValue                                                      (None)

void UCullingField::SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation, class UCullingField* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CullingField", "SetCullingField");

	Params::UCullingField_SetCullingField_Params Parms{};

	Parms.Culling = Culling;
	Parms.Field = Field;
	Parms.Operation = Operation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FieldSystemEngine.ReturnResultsTerminal
// (None)

class UClass* UReturnResultsTerminal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReturnResultsTerminal");

	return Clss;
}


// ReturnResultsTerminal FieldSystemEngine.Default__ReturnResultsTerminal
// (Public, ClassDefaultObject, ArchetypeObject)

class UReturnResultsTerminal* UReturnResultsTerminal::GetDefaultObj()
{
	static class UReturnResultsTerminal* Default = nullptr;

	if (!Default)
		Default = static_cast<UReturnResultsTerminal*>(UReturnResultsTerminal::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UReturnResultsTerminal*      ReturnValue                                                      (None)

void UReturnResultsTerminal::SetReturnResultsTerminal(class UReturnResultsTerminal* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReturnResultsTerminal", "SetReturnResultsTerminal");

	Params::UReturnResultsTerminal_SetReturnResultsTerminal_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


