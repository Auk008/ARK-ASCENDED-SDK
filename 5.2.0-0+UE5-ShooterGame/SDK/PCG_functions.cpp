#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PCG.PCGAttributeExtractorTestObject
// (None)

class UClass* UPCGAttributeExtractorTestObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGAttributeExtractorTestObject");

	return Clss;
}


// PCGAttributeExtractorTestObject PCG.Default__PCGAttributeExtractorTestObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGAttributeExtractorTestObject* UPCGAttributeExtractorTestObject::GetDefaultObj()
{
	static class UPCGAttributeExtractorTestObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGAttributeExtractorTestObject*>(UPCGAttributeExtractorTestObject::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGAttributePropertySelectorBlueprintHelpers
// (None)

class UClass* UPCGAttributePropertySelectorBlueprintHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGAttributePropertySelectorBlueprintHelpers");

	return Clss;
}


// PCGAttributePropertySelectorBlueprintHelpers PCG.Default__PCGAttributePropertySelectorBlueprintHelpers
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGAttributePropertySelectorBlueprintHelpers* UPCGAttributePropertySelectorBlueprintHelpers::GetDefaultObj()
{
	static class UPCGAttributePropertySelectorBlueprintHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGAttributePropertySelectorBlueprintHelpers*>(UPCGAttributePropertySelectorBlueprintHelpers::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGAttributePropertySelectorBlueprintHelpers.SetPointProperty
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGAttributePropertySelectorSelector                                                         (None)
// enum class EPCGPointProperties     InPointProperty                                                  (None)
// bool                               ReturnValue                                                      (None)

void UPCGAttributePropertySelectorBlueprintHelpers::SetPointProperty(const struct FPCGAttributePropertySelector& Selector, enum class EPCGPointProperties InPointProperty, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGAttributePropertySelectorBlueprintHelpers", "SetPointProperty");

	Params::UPCGAttributePropertySelectorBlueprintHelpers_SetPointProperty_Params Parms{};

	Parms.Selector = Selector;
	Parms.InPointProperty = InPointProperty;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGAttributePropertySelectorBlueprintHelpers.SetAttributeName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGAttributePropertySelectorSelector                                                         (None)
// class FName                        InAttributeName                                                  (None)
// bool                               ReturnValue                                                      (None)

void UPCGAttributePropertySelectorBlueprintHelpers::SetAttributeName(const struct FPCGAttributePropertySelector& Selector, class FName InAttributeName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGAttributePropertySelectorBlueprintHelpers", "SetAttributeName");

	Params::UPCGAttributePropertySelectorBlueprintHelpers_SetAttributeName_Params Parms{};

	Parms.Selector = Selector;
	Parms.InAttributeName = InAttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGAttributePropertySelectorBlueprintHelpers.GetName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGAttributePropertySelectorSelector                                                         (None)
// class FName                        ReturnValue                                                      (None)

void UPCGAttributePropertySelectorBlueprintHelpers::GetName(const struct FPCGAttributePropertySelector& Selector, class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGAttributePropertySelectorBlueprintHelpers", "GetName");

	Params::UPCGAttributePropertySelectorBlueprintHelpers_GetName_Params Parms{};

	Parms.Selector = Selector;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGData
// (None)

class UClass* UPCGData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGData");

	return Clss;
}


// PCGData PCG.Default__PCGData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGData* UPCGData::GetDefaultObj()
{
	static class UPCGData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGData*>(UPCGData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSpatialData
// (None)

class UClass* UPCGSpatialData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSpatialData");

	return Clss;
}


// PCGSpatialData PCG.Default__PCGSpatialData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSpatialData* UPCGSpatialData::GetDefaultObj()
{
	static class UPCGSpatialData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSpatialData*>(UPCGSpatialData::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGSpatialData.UnionWith
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGSpatialData*             InOther                                                          (ZeroConstructor)
// class UPCGUnionData*               ReturnValue                                                      (None)

void UPCGSpatialData::UnionWith(class UPCGSpatialData* InOther, class UPCGUnionData* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "UnionWith");

	Params::UPCGSpatialData_UnionWith_Params Parms{};

	Parms.InOther = InOther;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGSpatialData.ToPointDataWithContext
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPCGContext                 Context                                                          (None)
// class UPCGPointData*               ReturnValue                                                      (None)

void UPCGSpatialData::ToPointDataWithContext(const struct FPCGContext& Context, class UPCGPointData* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "ToPointDataWithContext");

	Params::UPCGSpatialData_ToPointDataWithContext_Params Parms{};

	Parms.Context = Context;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGSpatialData.ToPointData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGPointData*               ReturnValue                                                      (None)

void UPCGSpatialData::ToPointData(class UPCGPointData* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "ToPointData");

	Params::UPCGSpatialData_ToPointData_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGSpatialData.Subtract
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGSpatialData*             InOther                                                          (ZeroConstructor)
// class UPCGDifferenceData*          ReturnValue                                                      (None)

void UPCGSpatialData::Subtract(class UPCGSpatialData* InOther, class UPCGDifferenceData* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "Subtract");

	Params::UPCGSpatialData_Subtract_Params Parms{};

	Parms.InOther = InOther;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGSpatialData.SamplePoint
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  Transform                                                        (None)
// struct FBox                        Bounds                                                           (None)
// struct FPCGPoint                   OutPoint                                                         (None)
// class UPCGMetadata*                OutMetadata                                                      (None)
// bool                               ReturnValue                                                      (None)

void UPCGSpatialData::SamplePoint(const struct FTransform& Transform, const struct FBox& Bounds, const struct FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "SamplePoint");

	Params::UPCGSpatialData_SamplePoint_Params Parms{};

	Parms.Transform = Transform;
	Parms.Bounds = Bounds;
	Parms.OutPoint = OutPoint;
	Parms.OutMetadata = OutMetadata;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGSpatialData.ProjectPoint
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  InTransform                                                      (None)
// struct FBox                        InBounds                                                         (None)
// struct FPCGProjectionParams        InParams                                                         (None)
// struct FPCGPoint                   OutPoint                                                         (None)
// class UPCGMetadata*                OutMetadata                                                      (None)
// bool                               ReturnValue                                                      (None)

void UPCGSpatialData::ProjectPoint(const struct FTransform& InTransform, const struct FBox& InBounds, const struct FPCGProjectionParams& InParams, const struct FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "ProjectPoint");

	Params::UPCGSpatialData_ProjectPoint_Params Parms{};

	Parms.InTransform = InTransform;
	Parms.InBounds = InBounds;
	Parms.InParams = InParams;
	Parms.OutPoint = OutPoint;
	Parms.OutMetadata = OutMetadata;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGSpatialData.ProjectOn
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGSpatialData*             InOther                                                          (ZeroConstructor)
// struct FPCGProjectionParams        InParams                                                         (None)
// class UPCGSpatialData*             ReturnValue                                                      (None)

void UPCGSpatialData::ProjectOn(class UPCGSpatialData* InOther, const struct FPCGProjectionParams& InParams, class UPCGSpatialData* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "ProjectOn");

	Params::UPCGSpatialData_ProjectOn_Params Parms{};

	Parms.InOther = InOther;
	Parms.InParams = InParams;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGSpatialData.MutableMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                ReturnValue                                                      (None)

void UPCGSpatialData::MutableMetadata(class UPCGMetadata* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "MutableMetadata");

	Params::UPCGSpatialData_MutableMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGSpatialData.IntersectWith
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGSpatialData*             InOther                                                          (ZeroConstructor)
// class UPCGIntersectionData*        ReturnValue                                                      (None)

void UPCGSpatialData::IntersectWith(class UPCGSpatialData* InOther, class UPCGIntersectionData* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "IntersectWith");

	Params::UPCGSpatialData_IntersectWith_Params Parms{};

	Parms.InOther = InOther;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGSpatialData.InitializeFromData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGSpatialData*             InSource                                                         (ZeroConstructor)
// class UPCGMetadata*                InMetadataParentOverride                                         (None)
// bool                               bInheritMetadata                                                 (None)
// bool                               bInheritAttributes                                               (None)

void UPCGSpatialData::InitializeFromData(class UPCGSpatialData* InSource, class UPCGMetadata* InMetadataParentOverride, bool bInheritMetadata, bool bInheritAttributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "InitializeFromData");

	Params::UPCGSpatialData_InitializeFromData_Params Parms{};

	Parms.InSource = InSource;
	Parms.InMetadataParentOverride = InMetadataParentOverride;
	Parms.bInheritMetadata = bInheritMetadata;
	Parms.bInheritAttributes = bInheritAttributes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGSpatialData.HasNonTrivialTransform
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UPCGSpatialData::HasNonTrivialTransform(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "HasNonTrivialTransform");

	Params::UPCGSpatialData_HasNonTrivialTransform_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGSpatialData.GetStrictBounds
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (None)

void UPCGSpatialData::GetStrictBounds(const struct FBox& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "GetStrictBounds");

	Params::UPCGSpatialData_GetStrictBounds_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGSpatialData.GetNormal
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (None)

void UPCGSpatialData::GetNormal(const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "GetNormal");

	Params::UPCGSpatialData_GetNormal_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGSpatialData.GetDimension
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UPCGSpatialData::GetDimension(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "GetDimension");

	Params::UPCGSpatialData_GetDimension_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGSpatialData.GetDensityAtPosition
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     InPosition                                                       (None)
// float                              ReturnValue                                                      (None)

void UPCGSpatialData::GetDensityAtPosition(const struct FVector& InPosition, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "GetDensityAtPosition");

	Params::UPCGSpatialData_GetDensityAtPosition_Params Parms{};

	Parms.InPosition = InPosition;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGSpatialData.GetBounds
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (None)

void UPCGSpatialData::GetBounds(const struct FBox& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "GetBounds");

	Params::UPCGSpatialData_GetBounds_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGSpatialData.CreateEmptyMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                ReturnValue                                                      (None)

void UPCGSpatialData::CreateEmptyMetadata(class UPCGMetadata* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "CreateEmptyMetadata");

	Params::UPCGSpatialData_CreateEmptyMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGSpatialData.ConstMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGMetadata*                ReturnValue                                                      (None)

void UPCGSpatialData::ConstMetadata(class UPCGMetadata* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGSpatialData", "ConstMetadata");

	Params::UPCGSpatialData_ConstMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGSpatialDataWithPointCache
// (None)

class UClass* UPCGSpatialDataWithPointCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSpatialDataWithPointCache");

	return Clss;
}


// PCGSpatialDataWithPointCache PCG.Default__PCGSpatialDataWithPointCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSpatialDataWithPointCache* UPCGSpatialDataWithPointCache::GetDefaultObj()
{
	static class UPCGSpatialDataWithPointCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSpatialDataWithPointCache*>(UPCGSpatialDataWithPointCache::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGCollisionShapeData
// (None)

class UClass* UPCGCollisionShapeData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGCollisionShapeData");

	return Clss;
}


// PCGCollisionShapeData PCG.Default__PCGCollisionShapeData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGCollisionShapeData* UPCGCollisionShapeData::GetDefaultObj()
{
	static class UPCGCollisionShapeData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGCollisionShapeData*>(UPCGCollisionShapeData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSettingsInterface
// (None)

class UClass* UPCGSettingsInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSettingsInterface");

	return Clss;
}


// PCGSettingsInterface PCG.Default__PCGSettingsInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSettingsInterface* UPCGSettingsInterface::GetDefaultObj()
{
	static class UPCGSettingsInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSettingsInterface*>(UPCGSettingsInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSettings
// (None)

class UClass* UPCGSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSettings");

	return Clss;
}


// PCGSettings PCG.Default__PCGSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSettings* UPCGSettings::GetDefaultObj()
{
	static class UPCGSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSettings*>(UPCGSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGDistanceSettings
// (None)

class UClass* UPCGDistanceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDistanceSettings");

	return Clss;
}


// PCGDistanceSettings PCG.Default__PCGDistanceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDistanceSettings* UPCGDistanceSettings::GetDefaultObj()
{
	static class UPCGDistanceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDistanceSettings*>(UPCGDistanceSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGEngineSettings
// (None)

class UClass* UPCGEngineSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGEngineSettings");

	return Clss;
}


// PCGEngineSettings PCG.Default__PCGEngineSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGEngineSettings* UPCGEngineSettings::GetDefaultObj()
{
	static class UPCGEngineSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGEngineSettings*>(UPCGEngineSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGGatherSettings
// (None)

class UClass* UPCGGatherSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGGatherSettings");

	return Clss;
}


// PCGGatherSettings PCG.Default__PCGGatherSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGGatherSettings* UPCGGatherSettings::GetDefaultObj()
{
	static class UPCGGatherSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGGatherSettings*>(UPCGGatherSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGNormalToDensitySettings
// (None)

class UClass* UPCGNormalToDensitySettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGNormalToDensitySettings");

	return Clss;
}


// PCGNormalToDensitySettings PCG.Default__PCGNormalToDensitySettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGNormalToDensitySettings* UPCGNormalToDensitySettings::GetDefaultObj()
{
	static class UPCGNormalToDensitySettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGNormalToDensitySettings*>(UPCGNormalToDensitySettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGRerouteSettings
// (None)

class UClass* UPCGRerouteSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGRerouteSettings");

	return Clss;
}


// PCGRerouteSettings PCG.Default__PCGRerouteSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGRerouteSettings* UPCGRerouteSettings::GetDefaultObj()
{
	static class UPCGRerouteSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGRerouteSettings*>(UPCGRerouteSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGUserParameterGetSettings
// (None)

class UClass* UPCGUserParameterGetSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGUserParameterGetSettings");

	return Clss;
}


// PCGUserParameterGetSettings PCG.Default__PCGUserParameterGetSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGUserParameterGetSettings* UPCGUserParameterGetSettings::GetDefaultObj()
{
	static class UPCGUserParameterGetSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGUserParameterGetSettings*>(UPCGUserParameterGetSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGUserParametersData
// (None)

class UClass* UPCGUserParametersData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGUserParametersData");

	return Clss;
}


// PCGUserParametersData PCG.Default__PCGUserParametersData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGUserParametersData* UPCGUserParametersData::GetDefaultObj()
{
	static class UPCGUserParametersData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGUserParametersData*>(UPCGUserParametersData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGDifferenceData
// (None)

class UClass* UPCGDifferenceData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDifferenceData");

	return Clss;
}


// PCGDifferenceData PCG.Default__PCGDifferenceData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDifferenceData* UPCGDifferenceData::GetDefaultObj()
{
	static class UPCGDifferenceData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDifferenceData*>(UPCGDifferenceData::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGDifferenceData.SetDensityFunction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EPCGDifferenceDensityFunctionInDensityFunction                                                (None)

void UPCGDifferenceData::SetDensityFunction(enum class EPCGDifferenceDensityFunction InDensityFunction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDifferenceData", "SetDensityFunction");

	Params::UPCGDifferenceData_SetDensityFunction_Params Parms{};

	Parms.InDensityFunction = InDensityFunction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGDifferenceData.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGSpatialData*             InData                                                           (None)

void UPCGDifferenceData::Initialize(class UPCGSpatialData* InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDifferenceData", "Initialize");

	Params::UPCGDifferenceData_Initialize_Params Parms{};

	Parms.InData = InData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGDifferenceData.AddDifference
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGSpatialData*             InDifference                                                     (None)

void UPCGDifferenceData::AddDifference(class UPCGSpatialData* InDifference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDifferenceData", "AddDifference");

	Params::UPCGDifferenceData_AddDifference_Params Parms{};

	Parms.InDifference = InDifference;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGIntersectionData
// (None)

class UClass* UPCGIntersectionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGIntersectionData");

	return Clss;
}


// PCGIntersectionData PCG.Default__PCGIntersectionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGIntersectionData* UPCGIntersectionData::GetDefaultObj()
{
	static class UPCGIntersectionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGIntersectionData*>(UPCGIntersectionData::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGIntersectionData.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGSpatialData*             InA                                                              (ZeroConstructor)
// class UPCGSpatialData*             InB                                                              (None)

void UPCGIntersectionData::Initialize(class UPCGSpatialData* InA, class UPCGSpatialData* InB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGIntersectionData", "Initialize");

	Params::UPCGIntersectionData_Initialize_Params Parms{};

	Parms.InA = InA;
	Parms.InB = InB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGSurfaceData
// (None)

class UClass* UPCGSurfaceData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSurfaceData");

	return Clss;
}


// PCGSurfaceData PCG.Default__PCGSurfaceData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSurfaceData* UPCGSurfaceData::GetDefaultObj()
{
	static class UPCGSurfaceData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSurfaceData*>(UPCGSurfaceData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGLandscapeData
// (None)

class UClass* UPCGLandscapeData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGLandscapeData");

	return Clss;
}


// PCGLandscapeData PCG.Default__PCGLandscapeData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGLandscapeData* UPCGLandscapeData::GetDefaultObj()
{
	static class UPCGLandscapeData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGLandscapeData*>(UPCGLandscapeData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGPolyLineData
// (None)

class UClass* UPCGPolyLineData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGPolyLineData");

	return Clss;
}


// PCGPolyLineData PCG.Default__PCGPolyLineData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGPolyLineData* UPCGPolyLineData::GetDefaultObj()
{
	static class UPCGPolyLineData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGPolyLineData*>(UPCGPolyLineData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGLandscapeSplineData
// (None)

class UClass* UPCGLandscapeSplineData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGLandscapeSplineData");

	return Clss;
}


// PCGLandscapeSplineData PCG.Default__PCGLandscapeSplineData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGLandscapeSplineData* UPCGLandscapeSplineData::GetDefaultObj()
{
	static class UPCGLandscapeSplineData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGLandscapeSplineData*>(UPCGLandscapeSplineData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGPointData
// (None)

class UClass* UPCGPointData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGPointData");

	return Clss;
}


// PCGPointData PCG.Default__PCGPointData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGPointData* UPCGPointData::GetDefaultObj()
{
	static class UPCGPointData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGPointData*>(UPCGPointData::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGPointData.SetPoints
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPCGPoint>           InPoints                                                         (None)

void UPCGPointData::SetPoints(const TArray<struct FPCGPoint>& InPoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGPointData", "SetPoints");

	Params::UPCGPointData_SetPoints_Params Parms{};

	Parms.InPoints = InPoints;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGPointData.GetPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FPCGPoint>           ReturnValue                                                      (None)

void UPCGPointData::GetPoints(const TArray<struct FPCGPoint>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGPointData", "GetPoints");

	Params::UPCGPointData_GetPoints_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGPointData.GetPoint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (None)
// struct FPCGPoint                   ReturnValue                                                      (None)

void UPCGPointData::GetPoint(int32 Index, const struct FPCGPoint& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGPointData", "GetPoint");

	Params::UPCGPointData_GetPoint_Params Parms{};

	Parms.Index = Index;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGPointData.CopyPointsFrom
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPCGPointData*               InData                                                           (None)
// TArray<int32>                      InDataIndices                                                    (None)

void UPCGPointData::CopyPointsFrom(class UPCGPointData* InData, const TArray<int32>& InDataIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGPointData", "CopyPointsFrom");

	Params::UPCGPointData_CopyPointsFrom_Params Parms{};

	Parms.InData = InData;
	Parms.InDataIndices = InDataIndices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGPrimitiveData
// (None)

class UClass* UPCGPrimitiveData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGPrimitiveData");

	return Clss;
}


// PCGPrimitiveData PCG.Default__PCGPrimitiveData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGPrimitiveData* UPCGPrimitiveData::GetDefaultObj()
{
	static class UPCGPrimitiveData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGPrimitiveData*>(UPCGPrimitiveData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGProjectionData
// (None)

class UClass* UPCGProjectionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGProjectionData");

	return Clss;
}


// PCGProjectionData PCG.Default__PCGProjectionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGProjectionData* UPCGProjectionData::GetDefaultObj()
{
	static class UPCGProjectionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGProjectionData*>(UPCGProjectionData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGBaseTextureData
// (None)

class UClass* UPCGBaseTextureData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGBaseTextureData");

	return Clss;
}


// PCGBaseTextureData PCG.Default__PCGBaseTextureData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGBaseTextureData* UPCGBaseTextureData::GetDefaultObj()
{
	static class UPCGBaseTextureData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGBaseTextureData*>(UPCGBaseTextureData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGRenderTargetData
// (None)

class UClass* UPCGRenderTargetData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGRenderTargetData");

	return Clss;
}


// PCGRenderTargetData PCG.Default__PCGRenderTargetData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGRenderTargetData* UPCGRenderTargetData::GetDefaultObj()
{
	static class UPCGRenderTargetData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGRenderTargetData*>(UPCGRenderTargetData::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGRenderTargetData.Initialize
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      InRenderTarget                                                   (None)
// struct FTransform                  InTransform                                                      (None)

void UPCGRenderTargetData::Initialize(class UTextureRenderTarget2D* InRenderTarget, const struct FTransform& InTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGRenderTargetData", "Initialize");

	Params::UPCGRenderTargetData_Initialize_Params Parms{};

	Parms.InRenderTarget = InRenderTarget;
	Parms.InTransform = InTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGSplineData
// (None)

class UClass* UPCGSplineData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSplineData");

	return Clss;
}


// PCGSplineData PCG.Default__PCGSplineData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSplineData* UPCGSplineData::GetDefaultObj()
{
	static class UPCGSplineData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSplineData*>(UPCGSplineData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSplineProjectionData
// (None)

class UClass* UPCGSplineProjectionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSplineProjectionData");

	return Clss;
}


// PCGSplineProjectionData PCG.Default__PCGSplineProjectionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSplineProjectionData* UPCGSplineProjectionData::GetDefaultObj()
{
	static class UPCGSplineProjectionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSplineProjectionData*>(UPCGSplineProjectionData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGTextureData
// (None)

class UClass* UPCGTextureData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGTextureData");

	return Clss;
}


// PCGTextureData PCG.Default__PCGTextureData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGTextureData* UPCGTextureData::GetDefaultObj()
{
	static class UPCGTextureData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGTextureData*>(UPCGTextureData::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGTextureData.Initialize
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture2D*                  InTexture                                                        (None)
// struct FTransform                  InTransform                                                      (None)

void UPCGTextureData::Initialize(class UTexture2D* InTexture, const struct FTransform& InTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGTextureData", "Initialize");

	Params::UPCGTextureData_Initialize_Params Parms{};

	Parms.InTexture = InTexture;
	Parms.InTransform = InTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGUnionData
// (None)

class UClass* UPCGUnionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGUnionData");

	return Clss;
}


// PCGUnionData PCG.Default__PCGUnionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGUnionData* UPCGUnionData::GetDefaultObj()
{
	static class UPCGUnionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGUnionData*>(UPCGUnionData::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGUnionData.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGSpatialData*             InA                                                              (ZeroConstructor)
// class UPCGSpatialData*             InB                                                              (None)

void UPCGUnionData::Initialize(class UPCGSpatialData* InA, class UPCGSpatialData* InB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGUnionData", "Initialize");

	Params::UPCGUnionData_Initialize_Params Parms{};

	Parms.InA = InA;
	Parms.InB = InB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGUnionData.AddData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGSpatialData*             InData                                                           (None)

void UPCGUnionData::AddData(class UPCGSpatialData* InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGUnionData", "AddData");

	Params::UPCGUnionData_AddData_Params Parms{};

	Parms.InData = InData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGVolumeData
// (None)

class UClass* UPCGVolumeData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGVolumeData");

	return Clss;
}


// PCGVolumeData PCG.Default__PCGVolumeData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGVolumeData* UPCGVolumeData::GetDefaultObj()
{
	static class UPCGVolumeData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGVolumeData*>(UPCGVolumeData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGWorldVolumetricData
// (None)

class UClass* UPCGWorldVolumetricData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGWorldVolumetricData");

	return Clss;
}


// PCGWorldVolumetricData PCG.Default__PCGWorldVolumetricData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGWorldVolumetricData* UPCGWorldVolumetricData::GetDefaultObj()
{
	static class UPCGWorldVolumetricData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGWorldVolumetricData*>(UPCGWorldVolumetricData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGWorldRayHitData
// (None)

class UClass* UPCGWorldRayHitData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGWorldRayHitData");

	return Clss;
}


// PCGWorldRayHitData PCG.Default__PCGWorldRayHitData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGWorldRayHitData* UPCGWorldRayHitData::GetDefaultObj()
{
	static class UPCGWorldRayHitData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGWorldRayHitData*>(UPCGWorldRayHitData::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataSettingsBase
// (None)

class UClass* UPCGMetadataSettingsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataSettingsBase");

	return Clss;
}


// PCGMetadataSettingsBase PCG.Default__PCGMetadataSettingsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataSettingsBase* UPCGMetadataSettingsBase::GetDefaultObj()
{
	static class UPCGMetadataSettingsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataSettingsBase*>(UPCGMetadataSettingsBase::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataBitwiseSettings
// (None)

class UClass* UPCGMetadataBitwiseSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataBitwiseSettings");

	return Clss;
}


// PCGMetadataBitwiseSettings PCG.Default__PCGMetadataBitwiseSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataBitwiseSettings* UPCGMetadataBitwiseSettings::GetDefaultObj()
{
	static class UPCGMetadataBitwiseSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataBitwiseSettings*>(UPCGMetadataBitwiseSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataBooleanSettings
// (None)

class UClass* UPCGMetadataBooleanSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataBooleanSettings");

	return Clss;
}


// PCGMetadataBooleanSettings PCG.Default__PCGMetadataBooleanSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataBooleanSettings* UPCGMetadataBooleanSettings::GetDefaultObj()
{
	static class UPCGMetadataBooleanSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataBooleanSettings*>(UPCGMetadataBooleanSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataBreakTransformSettings
// (None)

class UClass* UPCGMetadataBreakTransformSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataBreakTransformSettings");

	return Clss;
}


// PCGMetadataBreakTransformSettings PCG.Default__PCGMetadataBreakTransformSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataBreakTransformSettings* UPCGMetadataBreakTransformSettings::GetDefaultObj()
{
	static class UPCGMetadataBreakTransformSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataBreakTransformSettings*>(UPCGMetadataBreakTransformSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataBreakVectorSettings
// (None)

class UClass* UPCGMetadataBreakVectorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataBreakVectorSettings");

	return Clss;
}


// PCGMetadataBreakVectorSettings PCG.Default__PCGMetadataBreakVectorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataBreakVectorSettings* UPCGMetadataBreakVectorSettings::GetDefaultObj()
{
	static class UPCGMetadataBreakVectorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataBreakVectorSettings*>(UPCGMetadataBreakVectorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataCompareSettings
// (None)

class UClass* UPCGMetadataCompareSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataCompareSettings");

	return Clss;
}


// PCGMetadataCompareSettings PCG.Default__PCGMetadataCompareSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataCompareSettings* UPCGMetadataCompareSettings::GetDefaultObj()
{
	static class UPCGMetadataCompareSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataCompareSettings*>(UPCGMetadataCompareSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataOperationSettings
// (None)

class UClass* UPCGMetadataOperationSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataOperationSettings");

	return Clss;
}


// PCGMetadataOperationSettings PCG.Default__PCGMetadataOperationSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataOperationSettings* UPCGMetadataOperationSettings::GetDefaultObj()
{
	static class UPCGMetadataOperationSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataOperationSettings*>(UPCGMetadataOperationSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataMakeTransformSettings
// (None)

class UClass* UPCGMetadataMakeTransformSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataMakeTransformSettings");

	return Clss;
}


// PCGMetadataMakeTransformSettings PCG.Default__PCGMetadataMakeTransformSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataMakeTransformSettings* UPCGMetadataMakeTransformSettings::GetDefaultObj()
{
	static class UPCGMetadataMakeTransformSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataMakeTransformSettings*>(UPCGMetadataMakeTransformSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataMakeVectorSettings
// (None)

class UClass* UPCGMetadataMakeVectorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataMakeVectorSettings");

	return Clss;
}


// PCGMetadataMakeVectorSettings PCG.Default__PCGMetadataMakeVectorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataMakeVectorSettings* UPCGMetadataMakeVectorSettings::GetDefaultObj()
{
	static class UPCGMetadataMakeVectorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataMakeVectorSettings*>(UPCGMetadataMakeVectorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataMathsSettings
// (None)

class UClass* UPCGMetadataMathsSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataMathsSettings");

	return Clss;
}


// PCGMetadataMathsSettings PCG.Default__PCGMetadataMathsSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataMathsSettings* UPCGMetadataMathsSettings::GetDefaultObj()
{
	static class UPCGMetadataMathsSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataMathsSettings*>(UPCGMetadataMathsSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataPartitionSettings
// (None)

class UClass* UPCGMetadataPartitionSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataPartitionSettings");

	return Clss;
}


// PCGMetadataPartitionSettings PCG.Default__PCGMetadataPartitionSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataPartitionSettings* UPCGMetadataPartitionSettings::GetDefaultObj()
{
	static class UPCGMetadataPartitionSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataPartitionSettings*>(UPCGMetadataPartitionSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataRenameSettings
// (None)

class UClass* UPCGMetadataRenameSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataRenameSettings");

	return Clss;
}


// PCGMetadataRenameSettings PCG.Default__PCGMetadataRenameSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataRenameSettings* UPCGMetadataRenameSettings::GetDefaultObj()
{
	static class UPCGMetadataRenameSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataRenameSettings*>(UPCGMetadataRenameSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataRotatorSettings
// (None)

class UClass* UPCGMetadataRotatorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataRotatorSettings");

	return Clss;
}


// PCGMetadataRotatorSettings PCG.Default__PCGMetadataRotatorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataRotatorSettings* UPCGMetadataRotatorSettings::GetDefaultObj()
{
	static class UPCGMetadataRotatorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataRotatorSettings*>(UPCGMetadataRotatorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataTransformSettings
// (None)

class UClass* UPCGMetadataTransformSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataTransformSettings");

	return Clss;
}


// PCGMetadataTransformSettings PCG.Default__PCGMetadataTransformSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataTransformSettings* UPCGMetadataTransformSettings::GetDefaultObj()
{
	static class UPCGMetadataTransformSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataTransformSettings*>(UPCGMetadataTransformSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataTrigSettings
// (None)

class UClass* UPCGMetadataTrigSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataTrigSettings");

	return Clss;
}


// PCGMetadataTrigSettings PCG.Default__PCGMetadataTrigSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataTrigSettings* UPCGMetadataTrigSettings::GetDefaultObj()
{
	static class UPCGMetadataTrigSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataTrigSettings*>(UPCGMetadataTrigSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadataVectorSettings
// (None)

class UClass* UPCGMetadataVectorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataVectorSettings");

	return Clss;
}


// PCGMetadataVectorSettings PCG.Default__PCGMetadataVectorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataVectorSettings* UPCGMetadataVectorSettings::GetDefaultObj()
{
	static class UPCGMetadataVectorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataVectorSettings*>(UPCGMetadataVectorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGAttributeFilterSettings
// (None)

class UClass* UPCGAttributeFilterSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGAttributeFilterSettings");

	return Clss;
}


// PCGAttributeFilterSettings PCG.Default__PCGAttributeFilterSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGAttributeFilterSettings* UPCGAttributeFilterSettings::GetDefaultObj()
{
	static class UPCGAttributeFilterSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGAttributeFilterSettings*>(UPCGAttributeFilterSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGAttributeGetFromPointIndexSettings
// (None)

class UClass* UPCGAttributeGetFromPointIndexSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGAttributeGetFromPointIndexSettings");

	return Clss;
}


// PCGAttributeGetFromPointIndexSettings PCG.Default__PCGAttributeGetFromPointIndexSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGAttributeGetFromPointIndexSettings* UPCGAttributeGetFromPointIndexSettings::GetDefaultObj()
{
	static class UPCGAttributeGetFromPointIndexSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGAttributeGetFromPointIndexSettings*>(UPCGAttributeGetFromPointIndexSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGAttributeReduceSettings
// (None)

class UClass* UPCGAttributeReduceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGAttributeReduceSettings");

	return Clss;
}


// PCGAttributeReduceSettings PCG.Default__PCGAttributeReduceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGAttributeReduceSettings* UPCGAttributeReduceSettings::GetDefaultObj()
{
	static class UPCGAttributeReduceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGAttributeReduceSettings*>(UPCGAttributeReduceSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGAttributeSelectSettings
// (None)

class UClass* UPCGAttributeSelectSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGAttributeSelectSettings");

	return Clss;
}


// PCGAttributeSelectSettings PCG.Default__PCGAttributeSelectSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGAttributeSelectSettings* UPCGAttributeSelectSettings::GetDefaultObj()
{
	static class UPCGAttributeSelectSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGAttributeSelectSettings*>(UPCGAttributeSelectSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGAttributeTransferSettings
// (None)

class UClass* UPCGAttributeTransferSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGAttributeTransferSettings");

	return Clss;
}


// PCGAttributeTransferSettings PCG.Default__PCGAttributeTransferSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGAttributeTransferSettings* UPCGAttributeTransferSettings::GetDefaultObj()
{
	static class UPCGAttributeTransferSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGAttributeTransferSettings*>(UPCGAttributeTransferSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGBoundsModifierSettings
// (None)

class UClass* UPCGBoundsModifierSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGBoundsModifierSettings");

	return Clss;
}


// PCGBoundsModifierSettings PCG.Default__PCGBoundsModifierSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGBoundsModifierSettings* UPCGBoundsModifierSettings::GetDefaultObj()
{
	static class UPCGBoundsModifierSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGBoundsModifierSettings*>(UPCGBoundsModifierSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGCollapseSettings
// (None)

class UClass* UPCGCollapseSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGCollapseSettings");

	return Clss;
}


// PCGCollapseSettings PCG.Default__PCGCollapseSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGCollapseSettings* UPCGCollapseSettings::GetDefaultObj()
{
	static class UPCGCollapseSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGCollapseSettings*>(UPCGCollapseSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGCopyPointsSettings
// (None)

class UClass* UPCGCopyPointsSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGCopyPointsSettings");

	return Clss;
}


// PCGCopyPointsSettings PCG.Default__PCGCopyPointsSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGCopyPointsSettings* UPCGCopyPointsSettings::GetDefaultObj()
{
	static class UPCGCopyPointsSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGCopyPointsSettings*>(UPCGCopyPointsSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGCreateAttributeSettings
// (None)

class UClass* UPCGCreateAttributeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGCreateAttributeSettings");

	return Clss;
}


// PCGCreateAttributeSettings PCG.Default__PCGCreateAttributeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGCreateAttributeSettings* UPCGCreateAttributeSettings::GetDefaultObj()
{
	static class UPCGCreateAttributeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGCreateAttributeSettings*>(UPCGCreateAttributeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGCreateAttributeSetSettings
// (None)

class UClass* UPCGCreateAttributeSetSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGCreateAttributeSetSettings");

	return Clss;
}


// PCGCreateAttributeSetSettings PCG.Default__PCGCreateAttributeSetSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGCreateAttributeSetSettings* UPCGCreateAttributeSetSettings::GetDefaultObj()
{
	static class UPCGCreateAttributeSetSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGCreateAttributeSetSettings*>(UPCGCreateAttributeSetSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGCreateSplineSettings
// (None)

class UClass* UPCGCreateSplineSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGCreateSplineSettings");

	return Clss;
}


// PCGCreateSplineSettings PCG.Default__PCGCreateSplineSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGCreateSplineSettings* UPCGCreateSplineSettings::GetDefaultObj()
{
	static class UPCGCreateSplineSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGCreateSplineSettings*>(UPCGCreateSplineSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGDataFromActorSettings
// (None)

class UClass* UPCGDataFromActorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDataFromActorSettings");

	return Clss;
}


// PCGDataFromActorSettings PCG.Default__PCGDataFromActorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDataFromActorSettings* UPCGDataFromActorSettings::GetDefaultObj()
{
	static class UPCGDataFromActorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDataFromActorSettings*>(UPCGDataFromActorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGDataTableRowToParamDataSettings
// (None)

class UClass* UPCGDataTableRowToParamDataSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDataTableRowToParamDataSettings");

	return Clss;
}


// PCGDataTableRowToParamDataSettings PCG.Default__PCGDataTableRowToParamDataSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDataTableRowToParamDataSettings* UPCGDataTableRowToParamDataSettings::GetDefaultObj()
{
	static class UPCGDataTableRowToParamDataSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDataTableRowToParamDataSettings*>(UPCGDataTableRowToParamDataSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGDebugSettings
// (None)

class UClass* UPCGDebugSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDebugSettings");

	return Clss;
}


// PCGDebugSettings PCG.Default__PCGDebugSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDebugSettings* UPCGDebugSettings::GetDefaultObj()
{
	static class UPCGDebugSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDebugSettings*>(UPCGDebugSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGDensityFilterSettings
// (None)

class UClass* UPCGDensityFilterSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDensityFilterSettings");

	return Clss;
}


// PCGDensityFilterSettings PCG.Default__PCGDensityFilterSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDensityFilterSettings* UPCGDensityFilterSettings::GetDefaultObj()
{
	static class UPCGDensityFilterSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDensityFilterSettings*>(UPCGDensityFilterSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGDensityNoiseSettings
// (None)

class UClass* UPCGDensityNoiseSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDensityNoiseSettings");

	return Clss;
}


// PCGDensityNoiseSettings PCG.Default__PCGDensityNoiseSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDensityNoiseSettings* UPCGDensityNoiseSettings::GetDefaultObj()
{
	static class UPCGDensityNoiseSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDensityNoiseSettings*>(UPCGDensityNoiseSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGLinearDensityRemapSettings
// (None)

class UClass* UPCGLinearDensityRemapSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGLinearDensityRemapSettings");

	return Clss;
}


// PCGLinearDensityRemapSettings PCG.Default__PCGLinearDensityRemapSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGLinearDensityRemapSettings* UPCGLinearDensityRemapSettings::GetDefaultObj()
{
	static class UPCGLinearDensityRemapSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGLinearDensityRemapSettings*>(UPCGLinearDensityRemapSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGDensityRemapSettings
// (None)

class UClass* UPCGDensityRemapSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDensityRemapSettings");

	return Clss;
}


// PCGDensityRemapSettings PCG.Default__PCGDensityRemapSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDensityRemapSettings* UPCGDensityRemapSettings::GetDefaultObj()
{
	static class UPCGDensityRemapSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDensityRemapSettings*>(UPCGDensityRemapSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGDifferenceSettings
// (None)

class UClass* UPCGDifferenceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDifferenceSettings");

	return Clss;
}


// PCGDifferenceSettings PCG.Default__PCGDifferenceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDifferenceSettings* UPCGDifferenceSettings::GetDefaultObj()
{
	static class UPCGDifferenceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDifferenceSettings*>(UPCGDifferenceSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGBlueprintElement
// (None)

class UClass* UPCGBlueprintElement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGBlueprintElement");

	return Clss;
}


// PCGBlueprintElement PCG.Default__PCGBlueprintElement
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGBlueprintElement* UPCGBlueprintElement::GetDefaultObj()
{
	static class UPCGBlueprintElement* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGBlueprintElement*>(UPCGBlueprintElement::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGBlueprintElement.VariableLoopBody
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FPCGContext                 InContext                                                        (None)
// class UPCGPointData*               InData                                                           (ZeroConstructor)
// struct FPCGPoint                   InPoint                                                          (None)
// class UPCGMetadata*                OutMetadata                                                      (None)
// TArray<struct FPCGPoint>           ReturnValue                                                      (None)

void UPCGBlueprintElement::VariableLoopBody(const struct FPCGContext& InContext, class UPCGPointData* InData, const struct FPCGPoint& InPoint, class UPCGMetadata* OutMetadata, const TArray<struct FPCGPoint>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "VariableLoopBody");

	Params::UPCGBlueprintElement_VariableLoopBody_Params Parms{};

	Parms.InContext = InContext;
	Parms.InData = InData;
	Parms.InPoint = InPoint;
	Parms.OutMetadata = OutMetadata;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PCG.PCGBlueprintElement.VariableLoop
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FPCGContext                 InContext                                                        (None)
// class UPCGPointData*               InData                                                           (ZeroConstructor)
// class UPCGPointData*               OutData                                                          (ZeroConstructor)
// class UPCGPointData*               OptionalOutData                                                  (None)

void UPCGBlueprintElement::VariableLoop(const struct FPCGContext& InContext, class UPCGPointData* InData, class UPCGPointData* OutData, class UPCGPointData* OptionalOutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "VariableLoop");

	Params::UPCGBlueprintElement_VariableLoop_Params Parms{};

	Parms.InContext = InContext;
	Parms.InData = InData;
	Parms.OutData = OutData;
	Parms.OptionalOutData = OptionalOutData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintElement.PointLoopBody
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FPCGContext                 InContext                                                        (None)
// class UPCGPointData*               InData                                                           (ZeroConstructor)
// struct FPCGPoint                   InPoint                                                          (None)
// struct FPCGPoint                   OutPoint                                                         (None)
// class UPCGMetadata*                OutMetadata                                                      (None)
// bool                               ReturnValue                                                      (None)

void UPCGBlueprintElement::PointLoopBody(const struct FPCGContext& InContext, class UPCGPointData* InData, const struct FPCGPoint& InPoint, const struct FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "PointLoopBody");

	Params::UPCGBlueprintElement_PointLoopBody_Params Parms{};

	Parms.InContext = InContext;
	Parms.InData = InData;
	Parms.InPoint = InPoint;
	Parms.OutPoint = OutPoint;
	Parms.OutMetadata = OutMetadata;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PCG.PCGBlueprintElement.PointLoop
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FPCGContext                 InContext                                                        (None)
// class UPCGPointData*               InData                                                           (ZeroConstructor)
// class UPCGPointData*               OutData                                                          (ZeroConstructor)
// class UPCGPointData*               OptionalOutData                                                  (None)

void UPCGBlueprintElement::PointLoop(const struct FPCGContext& InContext, class UPCGPointData* InData, class UPCGPointData* OutData, class UPCGPointData* OptionalOutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "PointLoop");

	Params::UPCGBlueprintElement_PointLoop_Params Parms{};

	Parms.InContext = InContext;
	Parms.InData = InData;
	Parms.OutData = OutData;
	Parms.OptionalOutData = OptionalOutData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintElement.OutputLabels
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSet<class FName>                  ReturnValue                                                      (None)

void UPCGBlueprintElement::OutputLabels(TSet<class FName> ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "OutputLabels");

	Params::UPCGBlueprintElement_OutputLabels_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintElement.NodeTypeOverride
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// enum class EPCGSettingsType        ReturnValue                                                      (None)

void UPCGBlueprintElement::NodeTypeOverride(enum class EPCGSettingsType ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "NodeTypeOverride");

	Params::UPCGBlueprintElement_NodeTypeOverride_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintElement.NodeTitleOverride
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FName                        ReturnValue                                                      (None)

void UPCGBlueprintElement::NodeTitleOverride(class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "NodeTitleOverride");

	Params::UPCGBlueprintElement_NodeTitleOverride_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintElement.NodeColorOverride
// (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (None)

void UPCGBlueprintElement::NodeColorOverride(const struct FLinearColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "NodeColorOverride");

	Params::UPCGBlueprintElement_NodeColorOverride_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintElement.NestedLoopBody
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FPCGContext                 InContext                                                        (None)
// class UPCGPointData*               InOuterData                                                      (ZeroConstructor)
// class UPCGPointData*               InInnerData                                                      (ZeroConstructor)
// struct FPCGPoint                   InOuterPoint                                                     (None)
// struct FPCGPoint                   InInnerPoint                                                     (None)
// struct FPCGPoint                   OutPoint                                                         (None)
// class UPCGMetadata*                OutMetadata                                                      (None)
// bool                               ReturnValue                                                      (None)

void UPCGBlueprintElement::NestedLoopBody(const struct FPCGContext& InContext, class UPCGPointData* InOuterData, class UPCGPointData* InInnerData, const struct FPCGPoint& InOuterPoint, const struct FPCGPoint& InInnerPoint, const struct FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "NestedLoopBody");

	Params::UPCGBlueprintElement_NestedLoopBody_Params Parms{};

	Parms.InContext = InContext;
	Parms.InOuterData = InOuterData;
	Parms.InInnerData = InInnerData;
	Parms.InOuterPoint = InOuterPoint;
	Parms.InInnerPoint = InInnerPoint;
	Parms.OutPoint = OutPoint;
	Parms.OutMetadata = OutMetadata;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PCG.PCGBlueprintElement.NestedLoop
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FPCGContext                 InContext                                                        (None)
// class UPCGPointData*               InOuterData                                                      (ZeroConstructor)
// class UPCGPointData*               InInnerData                                                      (ZeroConstructor)
// class UPCGPointData*               OutData                                                          (ZeroConstructor)
// class UPCGPointData*               OptionalOutData                                                  (None)

void UPCGBlueprintElement::NestedLoop(const struct FPCGContext& InContext, class UPCGPointData* InOuterData, class UPCGPointData* InInnerData, class UPCGPointData* OutData, class UPCGPointData* OptionalOutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "NestedLoop");

	Params::UPCGBlueprintElement_NestedLoop_Params Parms{};

	Parms.InContext = InContext;
	Parms.InOuterData = InOuterData;
	Parms.InInnerData = InInnerData;
	Parms.OutData = OutData;
	Parms.OptionalOutData = OptionalOutData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintElement.IterationLoopBody
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FPCGContext                 InContext                                                        (None)
// int64                              Iteration                                                        (None)
// class UPCGSpatialData*             InA                                                              (ZeroConstructor)
// class UPCGSpatialData*             InB                                                              (ZeroConstructor)
// struct FPCGPoint                   OutPoint                                                         (None)
// class UPCGMetadata*                OutMetadata                                                      (None)
// bool                               ReturnValue                                                      (None)

void UPCGBlueprintElement::IterationLoopBody(const struct FPCGContext& InContext, int64 Iteration, class UPCGSpatialData* InA, class UPCGSpatialData* InB, const struct FPCGPoint& OutPoint, class UPCGMetadata* OutMetadata, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "IterationLoopBody");

	Params::UPCGBlueprintElement_IterationLoopBody_Params Parms{};

	Parms.InContext = InContext;
	Parms.Iteration = Iteration;
	Parms.InA = InA;
	Parms.InB = InB;
	Parms.OutPoint = OutPoint;
	Parms.OutMetadata = OutMetadata;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PCG.PCGBlueprintElement.IterationLoop
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FPCGContext                 InContext                                                        (None)
// int64                              NumIterations                                                    (None)
// class UPCGPointData*               OutData                                                          (ZeroConstructor)
// class UPCGSpatialData*             OptionalA                                                        (ZeroConstructor)
// class UPCGSpatialData*             OptionalB                                                        (ZeroConstructor)
// class UPCGPointData*               OptionalOutData                                                  (None)

void UPCGBlueprintElement::IterationLoop(const struct FPCGContext& InContext, int64 NumIterations, class UPCGPointData* OutData, class UPCGSpatialData* OptionalA, class UPCGSpatialData* OptionalB, class UPCGPointData* OptionalOutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "IterationLoop");

	Params::UPCGBlueprintElement_IterationLoop_Params Parms{};

	Parms.InContext = InContext;
	Parms.NumIterations = NumIterations;
	Parms.OutData = OutData;
	Parms.OptionalA = OptionalA;
	Parms.OptionalB = OptionalB;
	Parms.OptionalOutData = OptionalOutData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintElement.InputLabels
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSet<class FName>                  ReturnValue                                                      (None)

void UPCGBlueprintElement::InputLabels(TSet<class FName> ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "InputLabels");

	Params::UPCGBlueprintElement_InputLabels_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintElement.GetSeed
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPCGContext                 InContext                                                        (None)
// int32                              ReturnValue                                                      (None)

void UPCGBlueprintElement::GetSeed(const struct FPCGContext& InContext, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "GetSeed");

	Params::UPCGBlueprintElement_GetSeed_Params Parms{};

	Parms.InContext = InContext;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintElement.GetRandomStream
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FPCGContext                 InContext                                                        (None)
// struct FRandomStream               ReturnValue                                                      (None)

void UPCGBlueprintElement::GetRandomStream(const struct FPCGContext& InContext, const struct FRandomStream& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "GetRandomStream");

	Params::UPCGBlueprintElement_GetRandomStream_Params Parms{};

	Parms.InContext = InContext;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintElement.ExecuteWithContext
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPCGContext                 InContext                                                        (None)
// struct FPCGDataCollection          Input                                                            (ZeroConstructor)
// struct FPCGDataCollection          Output                                                           (None)

void UPCGBlueprintElement::ExecuteWithContext(const struct FPCGContext& InContext, const struct FPCGDataCollection& Input, const struct FPCGDataCollection& Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "ExecuteWithContext");

	Params::UPCGBlueprintElement_ExecuteWithContext_Params Parms{};

	Parms.InContext = InContext;
	Parms.Input = Input;
	Parms.Output = Output;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintElement.Execute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPCGDataCollection          Input                                                            (ZeroConstructor)
// struct FPCGDataCollection          Output                                                           (None)

void UPCGBlueprintElement::Execute(const struct FPCGDataCollection& Input, const struct FPCGDataCollection& Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintElement", "Execute");

	Params::UPCGBlueprintElement_Execute_Params Parms{};

	Parms.Input = Input;
	Parms.Output = Output;

	UObject::ProcessEvent(Func, &Parms);

}


// Class PCG.PCGBlueprintSettings
// (None)

class UClass* UPCGBlueprintSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGBlueprintSettings");

	return Clss;
}


// PCGBlueprintSettings PCG.Default__PCGBlueprintSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGBlueprintSettings* UPCGBlueprintSettings::GetDefaultObj()
{
	static class UPCGBlueprintSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGBlueprintSettings*>(UPCGBlueprintSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGBlueprintSettings.SetElementType
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UClass*                      InElementType                                                    (ZeroConstructor)
// class UPCGBlueprintElement*        ElementInstance                                                  (None)

void UPCGBlueprintSettings::SetElementType(class UClass* InElementType, class UPCGBlueprintElement* ElementInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintSettings", "SetElementType");

	Params::UPCGBlueprintSettings_SetElementType_Params Parms{};

	Parms.InElementType = InElementType;
	Parms.ElementInstance = ElementInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintSettings.GetElementType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ReturnValue                                                      (None)

void UPCGBlueprintSettings::GetElementType(class UClass* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintSettings", "GetElementType");

	Params::UPCGBlueprintSettings_GetElementType_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGFilterByTagSettings
// (None)

class UClass* UPCGFilterByTagSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGFilterByTagSettings");

	return Clss;
}


// PCGFilterByTagSettings PCG.Default__PCGFilterByTagSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGFilterByTagSettings* UPCGFilterByTagSettings::GetDefaultObj()
{
	static class UPCGFilterByTagSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGFilterByTagSettings*>(UPCGFilterByTagSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGIntersectionSettings
// (None)

class UClass* UPCGIntersectionSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGIntersectionSettings");

	return Clss;
}


// PCGIntersectionSettings PCG.Default__PCGIntersectionSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGIntersectionSettings* UPCGIntersectionSettings::GetDefaultObj()
{
	static class UPCGIntersectionSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGIntersectionSettings*>(UPCGIntersectionSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMergeSettings
// (None)

class UClass* UPCGMergeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMergeSettings");

	return Clss;
}


// PCGMergeSettings PCG.Default__PCGMergeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMergeSettings* UPCGMergeSettings::GetDefaultObj()
{
	static class UPCGMergeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMergeSettings*>(UPCGMergeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGPointExtentsModifierSettings
// (None)

class UClass* UPCGPointExtentsModifierSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGPointExtentsModifierSettings");

	return Clss;
}


// PCGPointExtentsModifierSettings PCG.Default__PCGPointExtentsModifierSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGPointExtentsModifierSettings* UPCGPointExtentsModifierSettings::GetDefaultObj()
{
	static class UPCGPointExtentsModifierSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGPointExtentsModifierSettings*>(UPCGPointExtentsModifierSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGPointFilterSettings
// (None)

class UClass* UPCGPointFilterSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGPointFilterSettings");

	return Clss;
}


// PCGPointFilterSettings PCG.Default__PCGPointFilterSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGPointFilterSettings* UPCGPointFilterSettings::GetDefaultObj()
{
	static class UPCGPointFilterSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGPointFilterSettings*>(UPCGPointFilterSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGPointMatchAndSetSettings
// (None)

class UClass* UPCGPointMatchAndSetSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGPointMatchAndSetSettings");

	return Clss;
}


// PCGPointMatchAndSetSettings PCG.Default__PCGPointMatchAndSetSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGPointMatchAndSetSettings* UPCGPointMatchAndSetSettings::GetDefaultObj()
{
	static class UPCGPointMatchAndSetSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGPointMatchAndSetSettings*>(UPCGPointMatchAndSetSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGPointMatchAndSetSettings.SetMatchAndSetType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InMatchAndSetType                                                (None)

void UPCGPointMatchAndSetSettings::SetMatchAndSetType(class UClass* InMatchAndSetType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGPointMatchAndSetSettings", "SetMatchAndSetType");

	Params::UPCGPointMatchAndSetSettings_SetMatchAndSetType_Params Parms{};

	Parms.InMatchAndSetType = InMatchAndSetType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGPointSamplerSettings
// (None)

class UClass* UPCGPointSamplerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGPointSamplerSettings");

	return Clss;
}


// PCGPointSamplerSettings PCG.Default__PCGPointSamplerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGPointSamplerSettings* UPCGPointSamplerSettings::GetDefaultObj()
{
	static class UPCGPointSamplerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGPointSamplerSettings*>(UPCGPointSamplerSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGProjectionSettings
// (None)

class UClass* UPCGProjectionSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGProjectionSettings");

	return Clss;
}


// PCGProjectionSettings PCG.Default__PCGProjectionSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGProjectionSettings* UPCGProjectionSettings::GetDefaultObj()
{
	static class UPCGProjectionSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGProjectionSettings*>(UPCGProjectionSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGPropertyToParamDataSettings
// (None)

class UClass* UPCGPropertyToParamDataSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGPropertyToParamDataSettings");

	return Clss;
}


// PCGPropertyToParamDataSettings PCG.Default__PCGPropertyToParamDataSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGPropertyToParamDataSettings* UPCGPropertyToParamDataSettings::GetDefaultObj()
{
	static class UPCGPropertyToParamDataSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGPropertyToParamDataSettings*>(UPCGPropertyToParamDataSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSelfPruningSettings
// (None)

class UClass* UPCGSelfPruningSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSelfPruningSettings");

	return Clss;
}


// PCGSelfPruningSettings PCG.Default__PCGSelfPruningSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSelfPruningSettings* UPCGSelfPruningSettings::GetDefaultObj()
{
	static class UPCGSelfPruningSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSelfPruningSettings*>(UPCGSelfPruningSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGBaseSubgraphSettings
// (None)

class UClass* UPCGBaseSubgraphSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGBaseSubgraphSettings");

	return Clss;
}


// PCGBaseSubgraphSettings PCG.Default__PCGBaseSubgraphSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGBaseSubgraphSettings* UPCGBaseSubgraphSettings::GetDefaultObj()
{
	static class UPCGBaseSubgraphSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGBaseSubgraphSettings*>(UPCGBaseSubgraphSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSpawnActorSettings
// (None)

class UClass* UPCGSpawnActorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSpawnActorSettings");

	return Clss;
}


// PCGSpawnActorSettings PCG.Default__PCGSpawnActorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSpawnActorSettings* UPCGSpawnActorSettings::GetDefaultObj()
{
	static class UPCGSpawnActorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSpawnActorSettings*>(UPCGSpawnActorSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGNode
// (None)

class UClass* UPCGNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGNode");

	return Clss;
}


// PCGNode PCG.Default__PCGNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGNode* UPCGNode::GetDefaultObj()
{
	static class UPCGNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGNode*>(UPCGNode::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGNode.RemoveEdgeTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        FromPinLable                                                     (None)
// class UPCGNode*                    To                                                               (None)
// class FName                        ToPinLabel                                                       (None)
// bool                               ReturnValue                                                      (None)

void UPCGNode::RemoveEdgeTo(class FName FromPinLable, class UPCGNode* To, class FName ToPinLabel, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGNode", "RemoveEdgeTo");

	Params::UPCGNode_RemoveEdgeTo_Params Parms{};

	Parms.FromPinLable = FromPinLable;
	Parms.To = To;
	Parms.ToPinLabel = ToPinLabel;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGNode.GetSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGSettings*                ReturnValue                                                      (None)

void UPCGNode::GetSettings(class UPCGSettings* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGNode", "GetSettings");

	Params::UPCGNode_GetSettings_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGNode.GetGraph
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGGraph*                   ReturnValue                                                      (None)

void UPCGNode::GetGraph(class UPCGGraph* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGNode", "GetGraph");

	Params::UPCGNode_GetGraph_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGNode.AddEdgeTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        FromPinLabel                                                     (None)
// class UPCGNode*                    To                                                               (ZeroConstructor)
// class FName                        ToPinLabel                                                       (None)
// class UPCGNode*                    ReturnValue                                                      (None)

void UPCGNode::AddEdgeTo(class FName FromPinLabel, class UPCGNode* To, class FName ToPinLabel, class UPCGNode* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGNode", "AddEdgeTo");

	Params::UPCGNode_AddEdgeTo_Params Parms{};

	Parms.FromPinLabel = FromPinLabel;
	Parms.To = To;
	Parms.ToPinLabel = ToPinLabel;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGBaseSubgraphNode
// (None)

class UClass* UPCGBaseSubgraphNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGBaseSubgraphNode");

	return Clss;
}


// PCGBaseSubgraphNode PCG.Default__PCGBaseSubgraphNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGBaseSubgraphNode* UPCGBaseSubgraphNode::GetDefaultObj()
{
	static class UPCGBaseSubgraphNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGBaseSubgraphNode*>(UPCGBaseSubgraphNode::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSpawnActorNode
// (None)

class UClass* UPCGSpawnActorNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSpawnActorNode");

	return Clss;
}


// PCGSpawnActorNode PCG.Default__PCGSpawnActorNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSpawnActorNode* UPCGSpawnActorNode::GetDefaultObj()
{
	static class UPCGSpawnActorNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSpawnActorNode*>(UPCGSpawnActorNode::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSplineSamplerSettings
// (None)

class UClass* UPCGSplineSamplerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSplineSamplerSettings");

	return Clss;
}


// PCGSplineSamplerSettings PCG.Default__PCGSplineSamplerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSplineSamplerSettings* UPCGSplineSamplerSettings::GetDefaultObj()
{
	static class UPCGSplineSamplerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSplineSamplerSettings*>(UPCGSplineSamplerSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGStaticMeshSpawnerSettings
// (None)

class UClass* UPCGStaticMeshSpawnerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGStaticMeshSpawnerSettings");

	return Clss;
}


// PCGStaticMeshSpawnerSettings PCG.Default__PCGStaticMeshSpawnerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGStaticMeshSpawnerSettings* UPCGStaticMeshSpawnerSettings::GetDefaultObj()
{
	static class UPCGStaticMeshSpawnerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGStaticMeshSpawnerSettings*>(UPCGStaticMeshSpawnerSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGStaticMeshSpawnerSettings.SetMeshSelectorType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InMeshSelectorType                                               (None)

void UPCGStaticMeshSpawnerSettings::SetMeshSelectorType(class UClass* InMeshSelectorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGStaticMeshSpawnerSettings", "SetMeshSelectorType");

	Params::UPCGStaticMeshSpawnerSettings_SetMeshSelectorType_Params Parms{};

	Parms.InMeshSelectorType = InMeshSelectorType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGStaticMeshSpawnerSettings.SetInstancePackerType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InInstancePackerType                                             (None)

void UPCGStaticMeshSpawnerSettings::SetInstancePackerType(class UClass* InInstancePackerType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGStaticMeshSpawnerSettings", "SetInstancePackerType");

	Params::UPCGStaticMeshSpawnerSettings_SetInstancePackerType_Params Parms{};

	Parms.InInstancePackerType = InInstancePackerType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGSurfaceSamplerSettings
// (None)

class UClass* UPCGSurfaceSamplerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSurfaceSamplerSettings");

	return Clss;
}


// PCGSurfaceSamplerSettings PCG.Default__PCGSurfaceSamplerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSurfaceSamplerSettings* UPCGSurfaceSamplerSettings::GetDefaultObj()
{
	static class UPCGSurfaceSamplerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSurfaceSamplerSettings*>(UPCGSurfaceSamplerSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGTextureSamplerSettings
// (None)

class UClass* UPCGTextureSamplerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGTextureSamplerSettings");

	return Clss;
}


// PCGTextureSamplerSettings PCG.Default__PCGTextureSamplerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGTextureSamplerSettings* UPCGTextureSamplerSettings::GetDefaultObj()
{
	static class UPCGTextureSamplerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGTextureSamplerSettings*>(UPCGTextureSamplerSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGTransformPointsSettings
// (None)

class UClass* UPCGTransformPointsSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGTransformPointsSettings");

	return Clss;
}


// PCGTransformPointsSettings PCG.Default__PCGTransformPointsSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGTransformPointsSettings* UPCGTransformPointsSettings::GetDefaultObj()
{
	static class UPCGTransformPointsSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGTransformPointsSettings*>(UPCGTransformPointsSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGGetLandscapeSettings
// (None)

class UClass* UPCGGetLandscapeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGGetLandscapeSettings");

	return Clss;
}


// PCGGetLandscapeSettings PCG.Default__PCGGetLandscapeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGGetLandscapeSettings* UPCGGetLandscapeSettings::GetDefaultObj()
{
	static class UPCGGetLandscapeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGGetLandscapeSettings*>(UPCGGetLandscapeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGGetSplineSettings
// (None)

class UClass* UPCGGetSplineSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGGetSplineSettings");

	return Clss;
}


// PCGGetSplineSettings PCG.Default__PCGGetSplineSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGGetSplineSettings* UPCGGetSplineSettings::GetDefaultObj()
{
	static class UPCGGetSplineSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGGetSplineSettings*>(UPCGGetSplineSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGGetVolumeSettings
// (None)

class UClass* UPCGGetVolumeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGGetVolumeSettings");

	return Clss;
}


// PCGGetVolumeSettings PCG.Default__PCGGetVolumeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGGetVolumeSettings* UPCGGetVolumeSettings::GetDefaultObj()
{
	static class UPCGGetVolumeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGGetVolumeSettings*>(UPCGGetVolumeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGGetPrimitiveSettings
// (None)

class UClass* UPCGGetPrimitiveSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGGetPrimitiveSettings");

	return Clss;
}


// PCGGetPrimitiveSettings PCG.Default__PCGGetPrimitiveSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGGetPrimitiveSettings* UPCGGetPrimitiveSettings::GetDefaultObj()
{
	static class UPCGGetPrimitiveSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGGetPrimitiveSettings*>(UPCGGetPrimitiveSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGUnionSettings
// (None)

class UClass* UPCGUnionSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGUnionSettings");

	return Clss;
}


// PCGUnionSettings PCG.Default__PCGUnionSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGUnionSettings* UPCGUnionSettings::GetDefaultObj()
{
	static class UPCGUnionSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGUnionSettings*>(UPCGUnionSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGVolumeSamplerSettings
// (None)

class UClass* UPCGVolumeSamplerSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGVolumeSamplerSettings");

	return Clss;
}


// PCGVolumeSamplerSettings PCG.Default__PCGVolumeSamplerSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGVolumeSamplerSettings* UPCGVolumeSamplerSettings::GetDefaultObj()
{
	static class UPCGVolumeSamplerSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGVolumeSamplerSettings*>(UPCGVolumeSamplerSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGWorldQuerySettings
// (None)

class UClass* UPCGWorldQuerySettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGWorldQuerySettings");

	return Clss;
}


// PCGWorldQuerySettings PCG.Default__PCGWorldQuerySettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGWorldQuerySettings* UPCGWorldQuerySettings::GetDefaultObj()
{
	static class UPCGWorldQuerySettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGWorldQuerySettings*>(UPCGWorldQuerySettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGWorldRayHitSettings
// (None)

class UClass* UPCGWorldRayHitSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGWorldRayHitSettings");

	return Clss;
}


// PCGWorldRayHitSettings PCG.Default__PCGWorldRayHitSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGWorldRayHitSettings* UPCGWorldRayHitSettings::GetDefaultObj()
{
	static class UPCGWorldRayHitSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGWorldRayHitSettings*>(UPCGWorldRayHitSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGLandscapeCache
// (None)

class UClass* UPCGLandscapeCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGLandscapeCache");

	return Clss;
}


// PCGLandscapeCache PCG.Default__PCGLandscapeCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGLandscapeCache* UPCGLandscapeCache::GetDefaultObj()
{
	static class UPCGLandscapeCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGLandscapeCache*>(UPCGLandscapeCache::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGPartitionActor
// (Actor)

class UClass* APCGPartitionActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGPartitionActor");

	return Clss;
}


// PCGPartitionActor PCG.Default__PCGPartitionActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APCGPartitionActor* APCGPartitionActor::GetDefaultObj()
{
	static class APCGPartitionActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APCGPartitionActor*>(APCGPartitionActor::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGPartitionActor.GetOriginalComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGComponent*               LocalComponent                                                   (ZeroConstructor)
// class UPCGComponent*               ReturnValue                                                      (None)

void APCGPartitionActor::GetOriginalComponent(class UPCGComponent* LocalComponent, class UPCGComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGPartitionActor", "GetOriginalComponent");

	Params::APCGPartitionActor_GetOriginalComponent_Params Parms{};

	Parms.LocalComponent = LocalComponent;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGPartitionActor.GetLocalComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGComponent*               OriginalComponent                                                (ZeroConstructor)
// class UPCGComponent*               ReturnValue                                                      (None)

void APCGPartitionActor::GetLocalComponent(class UPCGComponent* OriginalComponent, class UPCGComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGPartitionActor", "GetLocalComponent");

	Params::APCGPartitionActor_GetLocalComponent_Params Parms{};

	Parms.OriginalComponent = OriginalComponent;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGActorHelpers
// (None)

class UClass* UPCGActorHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGActorHelpers");

	return Clss;
}


// PCGActorHelpers PCG.Default__PCGActorHelpers
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGActorHelpers* UPCGActorHelpers::GetDefaultObj()
{
	static class UPCGActorHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGActorHelpers*>(UPCGActorHelpers::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGBlueprintHelpers
// (None)

class UClass* UPCGBlueprintHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGBlueprintHelpers");

	return Clss;
}


// PCGBlueprintHelpers PCG.Default__PCGBlueprintHelpers
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGBlueprintHelpers* UPCGBlueprintHelpers::GetDefaultObj()
{
	static class UPCGBlueprintHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGBlueprintHelpers*>(UPCGBlueprintHelpers::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGBlueprintHelpers.SetSeedFromPosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   InPoint                                                          (None)

void UPCGBlueprintHelpers::SetSeedFromPosition(const struct FPCGPoint& InPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "SetSeedFromPosition");

	Params::UPCGBlueprintHelpers_SetSeedFromPosition_Params Parms{};

	Parms.InPoint = InPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintHelpers.SetLocalCenter
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   InPoint                                                          (None)
// struct FVector                     InLocalCenter                                                    (None)

void UPCGBlueprintHelpers::SetLocalCenter(const struct FPCGPoint& InPoint, const struct FVector& InLocalCenter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "SetLocalCenter");

	Params::UPCGBlueprintHelpers_SetLocalCenter_Params Parms{};

	Parms.InPoint = InPoint;
	Parms.InLocalCenter = InLocalCenter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintHelpers.SetExtents
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   InPoint                                                          (None)
// struct FVector                     InExtents                                                        (None)

void UPCGBlueprintHelpers::SetExtents(const struct FPCGPoint& InPoint, const struct FVector& InExtents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "SetExtents");

	Params::UPCGBlueprintHelpers_SetExtents_Params Parms{};

	Parms.InPoint = InPoint;
	Parms.InExtents = InExtents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintHelpers.GetTransformedBounds
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   InPoint                                                          (None)
// struct FBox                        ReturnValue                                                      (None)

void UPCGBlueprintHelpers::GetTransformedBounds(const struct FPCGPoint& InPoint, const struct FBox& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetTransformedBounds");

	Params::UPCGBlueprintHelpers_GetTransformedBounds_Params Parms{};

	Parms.InPoint = InPoint;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintHelpers.GetTaskId
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGContext                 Context                                                          (None)
// int64                              ReturnValue                                                      (None)

void UPCGBlueprintHelpers::GetTaskId(const struct FPCGContext& Context, int64 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetTaskId");

	Params::UPCGBlueprintHelpers_GetTaskId_Params Parms{};

	Parms.Context = Context;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintHelpers.GetSettings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGContext                 Context                                                          (None)
// class UPCGSettings*                ReturnValue                                                      (None)

void UPCGBlueprintHelpers::GetSettings(const struct FPCGContext& Context, class UPCGSettings* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetSettings");

	Params::UPCGBlueprintHelpers_GetSettings_Params Parms{};

	Parms.Context = Context;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintHelpers.GetRandomStream
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   InPoint                                                          (None)
// class UPCGSettings*                OptionalSettings                                                 (ZeroConstructor)
// class UPCGComponent*               OptionalComponent                                                (None)
// struct FRandomStream               ReturnValue                                                      (None)

void UPCGBlueprintHelpers::GetRandomStream(const struct FPCGPoint& InPoint, class UPCGSettings* OptionalSettings, class UPCGComponent* OptionalComponent, const struct FRandomStream& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetRandomStream");

	Params::UPCGBlueprintHelpers_GetRandomStream_Params Parms{};

	Parms.InPoint = InPoint;
	Parms.OptionalSettings = OptionalSettings;
	Parms.OptionalComponent = OptionalComponent;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintHelpers.GetOriginalComponent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGContext                 Context                                                          (None)
// class UPCGComponent*               ReturnValue                                                      (None)

void UPCGBlueprintHelpers::GetOriginalComponent(const struct FPCGContext& Context, class UPCGComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetOriginalComponent");

	Params::UPCGBlueprintHelpers_GetOriginalComponent_Params Parms{};

	Parms.Context = Context;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintHelpers.GetLocalCenter
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   InPoint                                                          (None)
// struct FVector                     ReturnValue                                                      (None)

void UPCGBlueprintHelpers::GetLocalCenter(const struct FPCGPoint& InPoint, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetLocalCenter");

	Params::UPCGBlueprintHelpers_GetLocalCenter_Params Parms{};

	Parms.InPoint = InPoint;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintHelpers.GetInterpolatedPCGLandscapeLayerWeights
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (None)
// struct FVector                     Location                                                         (None)
// TArray<struct FPCGLandscapeLayerWeight>ReturnValue                                                      (None)

void UPCGBlueprintHelpers::GetInterpolatedPCGLandscapeLayerWeights(class UObject* WorldContextObject, const struct FVector& Location, const TArray<struct FPCGLandscapeLayerWeight>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetInterpolatedPCGLandscapeLayerWeights");

	Params::UPCGBlueprintHelpers_GetInterpolatedPCGLandscapeLayerWeights_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Location = Location;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintHelpers.GetInputData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGContext                 Context                                                          (None)
// class UPCGData*                    ReturnValue                                                      (None)

void UPCGBlueprintHelpers::GetInputData(const struct FPCGContext& Context, class UPCGData* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetInputData");

	Params::UPCGBlueprintHelpers_GetInputData_Params Parms{};

	Parms.Context = Context;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintHelpers.GetExtents
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   InPoint                                                          (None)
// struct FVector                     ReturnValue                                                      (None)

void UPCGBlueprintHelpers::GetExtents(const struct FPCGPoint& InPoint, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetExtents");

	Params::UPCGBlueprintHelpers_GetExtents_Params Parms{};

	Parms.InPoint = InPoint;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintHelpers.GetComponent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGContext                 Context                                                          (None)
// class UPCGComponent*               ReturnValue                                                      (None)

void UPCGBlueprintHelpers::GetComponent(const struct FPCGContext& Context, class UPCGComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetComponent");

	Params::UPCGBlueprintHelpers_GetComponent_Params Parms{};

	Parms.Context = Context;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintHelpers.GetActorLocalBoundsPCG
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (None)
// bool                               bIgnorePCGCreatedComponents                                      (None)
// struct FBox                        ReturnValue                                                      (None)

void UPCGBlueprintHelpers::GetActorLocalBoundsPCG(class AActor* InActor, bool bIgnorePCGCreatedComponents, const struct FBox& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetActorLocalBoundsPCG");

	Params::UPCGBlueprintHelpers_GetActorLocalBoundsPCG_Params Parms{};

	Parms.InActor = InActor;
	Parms.bIgnorePCGCreatedComponents = bIgnorePCGCreatedComponents;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintHelpers.GetActorData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGContext                 Context                                                          (None)
// class UPCGData*                    ReturnValue                                                      (None)

void UPCGBlueprintHelpers::GetActorData(const struct FPCGContext& Context, class UPCGData* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetActorData");

	Params::UPCGBlueprintHelpers_GetActorData_Params Parms{};

	Parms.Context = Context;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintHelpers.GetActorBoundsPCG
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (None)
// bool                               bIgnorePCGCreatedComponents                                      (None)
// struct FBox                        ReturnValue                                                      (None)

void UPCGBlueprintHelpers::GetActorBoundsPCG(class AActor* InActor, bool bIgnorePCGCreatedComponents, const struct FBox& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "GetActorBoundsPCG");

	Params::UPCGBlueprintHelpers_GetActorBoundsPCG_Params Parms{};

	Parms.InActor = InActor;
	Parms.bIgnorePCGCreatedComponents = bIgnorePCGCreatedComponents;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintHelpers.CreatePCGDataFromActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (ZeroConstructor)
// bool                               bParseActor                                                      (None)
// class UPCGData*                    ReturnValue                                                      (None)

void UPCGBlueprintHelpers::CreatePCGDataFromActor(class AActor* InActor, bool bParseActor, class UPCGData* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "CreatePCGDataFromActor");

	Params::UPCGBlueprintHelpers_CreatePCGDataFromActor_Params Parms{};

	Parms.InActor = InActor;
	Parms.bParseActor = bParseActor;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGBlueprintHelpers.ComputeSeedFromPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InPosition                                                       (None)
// int32                              ReturnValue                                                      (None)

void UPCGBlueprintHelpers::ComputeSeedFromPosition(const struct FVector& InPosition, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGBlueprintHelpers", "ComputeSeedFromPosition");

	Params::UPCGBlueprintHelpers_ComputeSeedFromPosition_Params Parms{};

	Parms.InPosition = InPosition;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGInstancePackerBase
// (None)

class UClass* UPCGInstancePackerBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGInstancePackerBase");

	return Clss;
}


// PCGInstancePackerBase PCG.Default__PCGInstancePackerBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGInstancePackerBase* UPCGInstancePackerBase::GetDefaultObj()
{
	static class UPCGInstancePackerBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGInstancePackerBase*>(UPCGInstancePackerBase::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGInstancePackerBase.PackInstances
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FPCGContext                 Context                                                          (None)
// class UPCGSpatialData*             InSpatialData                                                    (ZeroConstructor)
// struct FPCGMeshInstanceList        InstanceList                                                     (None)
// struct FPCGPackedCustomData        OutPackedCustomData                                              (None)

void UPCGInstancePackerBase::PackInstances(const struct FPCGContext& Context, class UPCGSpatialData* InSpatialData, const struct FPCGMeshInstanceList& InstanceList, const struct FPCGPackedCustomData& OutPackedCustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGInstancePackerBase", "PackInstances");

	Params::UPCGInstancePackerBase_PackInstances_Params Parms{};

	Parms.Context = Context;
	Parms.InSpatialData = InSpatialData;
	Parms.InstanceList = InstanceList;
	Parms.OutPackedCustomData = OutPackedCustomData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGInstancePackerBase.PackCustomDataFromAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPCGMeshInstanceList        InstanceList                                                     (ZeroConstructor)
// class UPCGMetadata*                MetaData                                                         (None)
// TArray<class FName>                AttributeNames                                                   (None)
// struct FPCGPackedCustomData        OutPackedCustomData                                              (None)

void UPCGInstancePackerBase::PackCustomDataFromAttributes(const struct FPCGMeshInstanceList& InstanceList, class UPCGMetadata* MetaData, const TArray<class FName>& AttributeNames, const struct FPCGPackedCustomData& OutPackedCustomData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGInstancePackerBase", "PackCustomDataFromAttributes");

	Params::UPCGInstancePackerBase_PackCustomDataFromAttributes_Params Parms{};

	Parms.InstanceList = InstanceList;
	Parms.MetaData = MetaData;
	Parms.AttributeNames = AttributeNames;
	Parms.OutPackedCustomData = OutPackedCustomData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGInstancePackerBase.AddTypeToPacking
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              TypeId                                                           (None)
// struct FPCGPackedCustomData        OutPackedCustomData                                              (None)
// bool                               ReturnValue                                                      (None)

void UPCGInstancePackerBase::AddTypeToPacking(int32 TypeId, const struct FPCGPackedCustomData& OutPackedCustomData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGInstancePackerBase", "AddTypeToPacking");

	Params::UPCGInstancePackerBase_AddTypeToPacking_Params Parms{};

	Parms.TypeId = TypeId;
	Parms.OutPackedCustomData = OutPackedCustomData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGInstancePackerByAttribute
// (None)

class UClass* UPCGInstancePackerByAttribute::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGInstancePackerByAttribute");

	return Clss;
}


// PCGInstancePackerByAttribute PCG.Default__PCGInstancePackerByAttribute
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGInstancePackerByAttribute* UPCGInstancePackerByAttribute::GetDefaultObj()
{
	static class UPCGInstancePackerByAttribute* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGInstancePackerByAttribute*>(UPCGInstancePackerByAttribute::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGInstancePackerByRegex
// (None)

class UClass* UPCGInstancePackerByRegex::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGInstancePackerByRegex");

	return Clss;
}


// PCGInstancePackerByRegex PCG.Default__PCGInstancePackerByRegex
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGInstancePackerByRegex* UPCGInstancePackerByRegex::GetDefaultObj()
{
	static class UPCGInstancePackerByRegex* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGInstancePackerByRegex*>(UPCGInstancePackerByRegex::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMatchAndSetBase
// (None)

class UClass* UPCGMatchAndSetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMatchAndSetBase");

	return Clss;
}


// PCGMatchAndSetBase PCG.Default__PCGMatchAndSetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMatchAndSetBase* UPCGMatchAndSetBase::GetDefaultObj()
{
	static class UPCGMatchAndSetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMatchAndSetBase*>(UPCGMatchAndSetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGMatchAndSetBase.ValidatePreconditions
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UPCGPointData*               InPointData                                                      (None)
// bool                               ReturnValue                                                      (None)

void UPCGMatchAndSetBase::ValidatePreconditions(class UPCGPointData* InPointData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMatchAndSetBase", "ValidatePreconditions");

	Params::UPCGMatchAndSetBase_ValidatePreconditions_Params Parms{};

	Parms.InPointData = InPointData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMatchAndSetBase.MatchAndSet
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FPCGContext                 Context                                                          (None)
// class UPCGPointMatchAndSetSettings*InSettings                                                       (ZeroConstructor)
// class UPCGPointData*               InPointData                                                      (ZeroConstructor)
// class UPCGPointData*               OutPointData                                                     (None)

void UPCGMatchAndSetBase::MatchAndSet(const struct FPCGContext& Context, class UPCGPointMatchAndSetSettings* InSettings, class UPCGPointData* InPointData, class UPCGPointData* OutPointData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMatchAndSetBase", "MatchAndSet");

	Params::UPCGMatchAndSetBase_MatchAndSet_Params Parms{};

	Parms.Context = Context;
	Parms.InSettings = InSettings;
	Parms.InPointData = InPointData;
	Parms.OutPointData = OutPointData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGMatchAndSetByAttribute
// (None)

class UClass* UPCGMatchAndSetByAttribute::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMatchAndSetByAttribute");

	return Clss;
}


// PCGMatchAndSetByAttribute PCG.Default__PCGMatchAndSetByAttribute
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMatchAndSetByAttribute* UPCGMatchAndSetByAttribute::GetDefaultObj()
{
	static class UPCGMatchAndSetByAttribute* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMatchAndSetByAttribute*>(UPCGMatchAndSetByAttribute::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMatchAndSetWeighted
// (None)

class UClass* UPCGMatchAndSetWeighted::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMatchAndSetWeighted");

	return Clss;
}


// PCGMatchAndSetWeighted PCG.Default__PCGMatchAndSetWeighted
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMatchAndSetWeighted* UPCGMatchAndSetWeighted::GetDefaultObj()
{
	static class UPCGMatchAndSetWeighted* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMatchAndSetWeighted*>(UPCGMatchAndSetWeighted::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMatchAndSetWeightedByCategory
// (None)

class UClass* UPCGMatchAndSetWeightedByCategory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMatchAndSetWeightedByCategory");

	return Clss;
}


// PCGMatchAndSetWeightedByCategory PCG.Default__PCGMatchAndSetWeightedByCategory
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMatchAndSetWeightedByCategory* UPCGMatchAndSetWeightedByCategory::GetDefaultObj()
{
	static class UPCGMatchAndSetWeightedByCategory* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMatchAndSetWeightedByCategory*>(UPCGMatchAndSetWeightedByCategory::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMeshSelectorBase
// (None)

class UClass* UPCGMeshSelectorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMeshSelectorBase");

	return Clss;
}


// PCGMeshSelectorBase PCG.Default__PCGMeshSelectorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMeshSelectorBase* UPCGMeshSelectorBase::GetDefaultObj()
{
	static class UPCGMeshSelectorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMeshSelectorBase*>(UPCGMeshSelectorBase::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMeshSelectorByAttribute
// (None)

class UClass* UPCGMeshSelectorByAttribute::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMeshSelectorByAttribute");

	return Clss;
}


// PCGMeshSelectorByAttribute PCG.Default__PCGMeshSelectorByAttribute
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMeshSelectorByAttribute* UPCGMeshSelectorByAttribute::GetDefaultObj()
{
	static class UPCGMeshSelectorByAttribute* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMeshSelectorByAttribute*>(UPCGMeshSelectorByAttribute::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMeshSelectorWeighted
// (None)

class UClass* UPCGMeshSelectorWeighted::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMeshSelectorWeighted");

	return Clss;
}


// PCGMeshSelectorWeighted PCG.Default__PCGMeshSelectorWeighted
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMeshSelectorWeighted* UPCGMeshSelectorWeighted::GetDefaultObj()
{
	static class UPCGMeshSelectorWeighted* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMeshSelectorWeighted*>(UPCGMeshSelectorWeighted::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMeshSelectorWeightedByCategory
// (None)

class UClass* UPCGMeshSelectorWeightedByCategory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMeshSelectorWeightedByCategory");

	return Clss;
}


// PCGMeshSelectorWeightedByCategory PCG.Default__PCGMeshSelectorWeightedByCategory
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMeshSelectorWeightedByCategory* UPCGMeshSelectorWeightedByCategory::GetDefaultObj()
{
	static class UPCGMeshSelectorWeightedByCategory* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMeshSelectorWeightedByCategory*>(UPCGMeshSelectorWeightedByCategory::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGMetadata
// (None)

class UClass* UPCGMetadata::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadata");

	return Clss;
}


// PCGMetadata PCG.Default__PCGMetadata
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadata* UPCGMetadata::GetDefaultObj()
{
	static class UPCGMetadata* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadata*>(UPCGMetadata::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGMetadata.SetPointAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// struct FPCGPoint                   OutPoint                                                         (None)

void UPCGMetadata::SetPointAttributes(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const struct FPCGPoint& OutPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "SetPointAttributes");

	Params::UPCGMetadata_SetPointAttributes_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.OutPoint = OutPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.SetAttributesByKey
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                InMetaData                                                       (None)
// int64                              TargetKey                                                        (None)
// int64                              OutKey                                                           (None)

void UPCGMetadata::SetAttributesByKey(int64 Key, class UPCGMetadata* InMetaData, int64 TargetKey, int64 OutKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "SetAttributesByKey");

	Params::UPCGMetadata_SetAttributesByKey_Params Parms{};

	Parms.Key = Key;
	Parms.InMetaData = InMetaData;
	Parms.TargetKey = TargetKey;
	Parms.OutKey = OutKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.ResetWeightedAttributesByKey
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              TargetKey                                                        (None)
// int64                              OutKey                                                           (None)

void UPCGMetadata::ResetWeightedAttributesByKey(int64 TargetKey, int64 OutKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "ResetWeightedAttributesByKey");

	Params::UPCGMetadata_ResetWeightedAttributesByKey_Params Parms{};

	Parms.TargetKey = TargetKey;
	Parms.OutKey = OutKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.ResetPointWeightedAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   OutPoint                                                         (None)

void UPCGMetadata::ResetPointWeightedAttributes(const struct FPCGPoint& OutPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "ResetPointWeightedAttributes");

	Params::UPCGMetadata_ResetPointWeightedAttributes_Params Parms{};

	Parms.OutPoint = OutPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.RenameAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AttributeToRename                                                (None)
// class FName                        NewAttributeName                                                 (None)
// bool                               ReturnValue                                                      (None)

void UPCGMetadata::RenameAttribute(class FName AttributeToRename, class FName NewAttributeName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "RenameAttribute");

	Params::UPCGMetadata_RenameAttribute_Params Parms{};

	Parms.AttributeToRename = AttributeToRename;
	Parms.NewAttributeName = NewAttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.MergePointAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   PointA                                                           (None)
// class UPCGMetadata*                MetadataA                                                        (ZeroConstructor)
// struct FPCGPoint                   PointB                                                           (None)
// class UPCGMetadata*                MetadataB                                                        (None)
// struct FPCGPoint                   TargetPoint                                                      (None)
// enum class EPCGMetadataOp          Op                                                               (None)

void UPCGMetadata::MergePointAttributes(const struct FPCGPoint& PointA, class UPCGMetadata* MetadataA, const struct FPCGPoint& PointB, class UPCGMetadata* MetadataB, const struct FPCGPoint& TargetPoint, enum class EPCGMetadataOp Op)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "MergePointAttributes");

	Params::UPCGMetadata_MergePointAttributes_Params Parms{};

	Parms.PointA = PointA;
	Parms.MetadataA = MetadataA;
	Parms.PointB = PointB;
	Parms.MetadataB = MetadataB;
	Parms.TargetPoint = TargetPoint;
	Parms.Op = Op;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.MergeAttributesByKey
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              KeyA                                                             (None)
// class UPCGMetadata*                MetadataA                                                        (ZeroConstructor)
// int64                              KeyB                                                             (None)
// class UPCGMetadata*                MetadataB                                                        (None)
// int64                              TargetKey                                                        (None)
// enum class EPCGMetadataOp          Op                                                               (None)
// int64                              OutKey                                                           (None)

void UPCGMetadata::MergeAttributesByKey(int64 KeyA, class UPCGMetadata* MetadataA, int64 KeyB, class UPCGMetadata* MetadataB, int64 TargetKey, enum class EPCGMetadataOp Op, int64 OutKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "MergeAttributesByKey");

	Params::UPCGMetadata_MergeAttributesByKey_Params Parms{};

	Parms.KeyA = KeyA;
	Parms.MetadataA = MetadataA;
	Parms.KeyB = KeyB;
	Parms.MetadataB = MetadataB;
	Parms.TargetKey = TargetKey;
	Parms.Op = Op;
	Parms.OutKey = OutKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.InitializeWithAttributeFilter
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                InParent                                                         (None)
// TSet<class FName>                  InFilteredAttributes                                             (None)
// enum class EPCGMetadataFilterMode  InFilterMode                                                     (None)

void UPCGMetadata::InitializeWithAttributeFilter(class UPCGMetadata* InParent, TSet<class FName> InFilteredAttributes, enum class EPCGMetadataFilterMode InFilterMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "InitializeWithAttributeFilter");

	Params::UPCGMetadata_InitializeWithAttributeFilter_Params Parms{};

	Parms.InParent = InParent;
	Parms.InFilteredAttributes = InFilteredAttributes;
	Parms.InFilterMode = InFilterMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.InitializeAsCopyWithAttributeFilter
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                InMetadataToCopy                                                 (None)
// TSet<class FName>                  InFilteredAttributes                                             (None)
// enum class EPCGMetadataFilterMode  InFilterMode                                                     (None)

void UPCGMetadata::InitializeAsCopyWithAttributeFilter(class UPCGMetadata* InMetadataToCopy, TSet<class FName> InFilteredAttributes, enum class EPCGMetadataFilterMode InFilterMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "InitializeAsCopyWithAttributeFilter");

	Params::UPCGMetadata_InitializeAsCopyWithAttributeFilter_Params Parms{};

	Parms.InMetadataToCopy = InMetadataToCopy;
	Parms.InFilteredAttributes = InFilteredAttributes;
	Parms.InFilterMode = InFilterMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.InitializeAsCopy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                InMetadataToCopy                                                 (None)

void UPCGMetadata::InitializeAsCopy(class UPCGMetadata* InMetadataToCopy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "InitializeAsCopy");

	Params::UPCGMetadata_InitializeAsCopy_Params Parms{};

	Parms.InMetadataToCopy = InMetadataToCopy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                InParent                                                         (None)

void UPCGMetadata::Initialize(class UPCGMetadata* InParent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "Initialize");

	Params::UPCGMetadata_Initialize_Params Parms{};

	Parms.InParent = InParent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.HasCommonAttributes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGMetadata*                InMetaData                                                       (None)
// bool                               ReturnValue                                                      (None)

void UPCGMetadata::HasCommonAttributes(class UPCGMetadata* InMetaData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "HasCommonAttributes");

	Params::UPCGMetadata_HasCommonAttributes_Params Parms{};

	Parms.InMetaData = InMetaData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.HasAttribute
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        AttributeName                                                    (None)
// bool                               ReturnValue                                                      (None)

void UPCGMetadata::HasAttribute(class FName AttributeName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "HasAttribute");

	Params::UPCGMetadata_HasAttribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.GetAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                AttributeNames                                                   (None)
// TArray<enum class EPCGMetadataTypes>AttributeTypes                                                   (None)

void UPCGMetadata::GetAttributes(const TArray<class FName>& AttributeNames, const TArray<enum class EPCGMetadataTypes>& AttributeTypes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "GetAttributes");

	Params::UPCGMetadata_GetAttributes_Params Parms{};

	Parms.AttributeNames = AttributeNames;
	Parms.AttributeTypes = AttributeTypes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.DeleteAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (None)

void UPCGMetadata::DeleteAttribute(class FName AttributeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "DeleteAttribute");

	Params::UPCGMetadata_DeleteAttribute_Params Parms{};

	Parms.AttributeName = AttributeName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.CreateVectorAttribute
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (None)
// struct FVector                     DefaultValue                                                     (None)
// bool                               bAllowsInterpolation                                             (None)
// bool                               bOverrideParent                                                  (None)

void UPCGMetadata::CreateVectorAttribute(class FName AttributeName, const struct FVector& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateVectorAttribute");

	Params::UPCGMetadata_CreateVectorAttribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.DefaultValue = DefaultValue;
	Parms.bAllowsInterpolation = bAllowsInterpolation;
	Parms.bOverrideParent = bOverrideParent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.CreateVector4Attribute
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (None)
// struct FVector4                    DefaultValue                                                     (None)
// bool                               bAllowsInterpolation                                             (None)
// bool                               bOverrideParent                                                  (None)

void UPCGMetadata::CreateVector4Attribute(class FName AttributeName, const struct FVector4& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateVector4Attribute");

	Params::UPCGMetadata_CreateVector4Attribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.DefaultValue = DefaultValue;
	Parms.bAllowsInterpolation = bAllowsInterpolation;
	Parms.bOverrideParent = bOverrideParent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.CreateVector2Attribute
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (None)
// struct FVector2D                   DefaultValue                                                     (None)
// bool                               bAllowsInterpolation                                             (None)
// bool                               bOverrideParent                                                  (None)

void UPCGMetadata::CreateVector2Attribute(class FName AttributeName, const struct FVector2D& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateVector2Attribute");

	Params::UPCGMetadata_CreateVector2Attribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.DefaultValue = DefaultValue;
	Parms.bAllowsInterpolation = bAllowsInterpolation;
	Parms.bOverrideParent = bOverrideParent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.CreateTransformAttribute
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (None)
// struct FTransform                  DefaultValue                                                     (None)
// bool                               bAllowsInterpolation                                             (None)
// bool                               bOverrideParent                                                  (None)

void UPCGMetadata::CreateTransformAttribute(class FName AttributeName, const struct FTransform& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateTransformAttribute");

	Params::UPCGMetadata_CreateTransformAttribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.DefaultValue = DefaultValue;
	Parms.bAllowsInterpolation = bAllowsInterpolation;
	Parms.bOverrideParent = bOverrideParent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.CreateStringAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (None)
// class FString                      DefaultValue                                                     (None)
// bool                               bAllowsInterpolation                                             (None)
// bool                               bOverrideParent                                                  (None)

void UPCGMetadata::CreateStringAttribute(class FName AttributeName, const class FString& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateStringAttribute");

	Params::UPCGMetadata_CreateStringAttribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.DefaultValue = DefaultValue;
	Parms.bAllowsInterpolation = bAllowsInterpolation;
	Parms.bOverrideParent = bOverrideParent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.CreateRotatorAttribute
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (None)
// struct FRotator                    DefaultValue                                                     (None)
// bool                               bAllowsInterpolation                                             (None)
// bool                               bOverrideParent                                                  (None)

void UPCGMetadata::CreateRotatorAttribute(class FName AttributeName, const struct FRotator& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateRotatorAttribute");

	Params::UPCGMetadata_CreateRotatorAttribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.DefaultValue = DefaultValue;
	Parms.bAllowsInterpolation = bAllowsInterpolation;
	Parms.bOverrideParent = bOverrideParent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.CreateQuatAttribute
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (None)
// struct FQuat                       DefaultValue                                                     (None)
// bool                               bAllowsInterpolation                                             (None)
// bool                               bOverrideParent                                                  (None)

void UPCGMetadata::CreateQuatAttribute(class FName AttributeName, const struct FQuat& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateQuatAttribute");

	Params::UPCGMetadata_CreateQuatAttribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.DefaultValue = DefaultValue;
	Parms.bAllowsInterpolation = bAllowsInterpolation;
	Parms.bOverrideParent = bOverrideParent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.CreateInteger64Attribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (None)
// int64                              DefaultValue                                                     (None)
// bool                               bAllowsInterpolation                                             (None)
// bool                               bOverrideParent                                                  (None)

void UPCGMetadata::CreateInteger64Attribute(class FName AttributeName, int64 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateInteger64Attribute");

	Params::UPCGMetadata_CreateInteger64Attribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.DefaultValue = DefaultValue;
	Parms.bAllowsInterpolation = bAllowsInterpolation;
	Parms.bOverrideParent = bOverrideParent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.CreateInteger32Attribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (None)
// int32                              DefaultValue                                                     (None)
// bool                               bAllowsInterpolation                                             (None)
// bool                               bOverrideParent                                                  (None)

void UPCGMetadata::CreateInteger32Attribute(class FName AttributeName, int32 DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateInteger32Attribute");

	Params::UPCGMetadata_CreateInteger32Attribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.DefaultValue = DefaultValue;
	Parms.bAllowsInterpolation = bAllowsInterpolation;
	Parms.bOverrideParent = bOverrideParent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.CreateFloatAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (None)
// float                              DefaultValue                                                     (None)
// bool                               bAllowsInterpolation                                             (None)
// bool                               bOverrideParent                                                  (None)

void UPCGMetadata::CreateFloatAttribute(class FName AttributeName, float DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateFloatAttribute");

	Params::UPCGMetadata_CreateFloatAttribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.DefaultValue = DefaultValue;
	Parms.bAllowsInterpolation = bAllowsInterpolation;
	Parms.bOverrideParent = bOverrideParent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.CreateDoubleAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (None)
// double                             DefaultValue                                                     (None)
// bool                               bAllowsInterpolation                                             (None)
// bool                               bOverrideParent                                                  (None)

void UPCGMetadata::CreateDoubleAttribute(class FName AttributeName, double DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateDoubleAttribute");

	Params::UPCGMetadata_CreateDoubleAttribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.DefaultValue = DefaultValue;
	Parms.bAllowsInterpolation = bAllowsInterpolation;
	Parms.bOverrideParent = bOverrideParent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.CreateBoolAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AttributeName                                                    (None)
// bool                               DefaultValue                                                     (None)
// bool                               bAllowsInterpolation                                             (None)
// bool                               bOverrideParent                                                  (None)

void UPCGMetadata::CreateBoolAttribute(class FName AttributeName, bool DefaultValue, bool bAllowsInterpolation, bool bOverrideParent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CreateBoolAttribute");

	Params::UPCGMetadata_CreateBoolAttribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.DefaultValue = DefaultValue;
	Parms.bAllowsInterpolation = bAllowsInterpolation;
	Parms.bOverrideParent = bOverrideParent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.CopyExistingAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AttributeToCopy                                                  (None)
// class FName                        NewAttributeName                                                 (None)
// bool                               bKeepParent                                                      (None)
// bool                               ReturnValue                                                      (None)

void UPCGMetadata::CopyExistingAttribute(class FName AttributeToCopy, class FName NewAttributeName, bool bKeepParent, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CopyExistingAttribute");

	Params::UPCGMetadata_CopyExistingAttribute_Params Parms{};

	Parms.AttributeToCopy = AttributeToCopy;
	Parms.NewAttributeName = NewAttributeName;
	Parms.bKeepParent = bKeepParent;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.CopyAttributes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                InOther                                                          (None)

void UPCGMetadata::CopyAttributes(class UPCGMetadata* InOther)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CopyAttributes");

	Params::UPCGMetadata_CopyAttributes_Params Parms{};

	Parms.InOther = InOther;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.CopyAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                InOther                                                          (None)
// class FName                        AttributeToCopy                                                  (None)
// class FName                        NewAttributeName                                                 (None)

void UPCGMetadata::CopyAttribute(class UPCGMetadata* InOther, class FName AttributeToCopy, class FName NewAttributeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "CopyAttribute");

	Params::UPCGMetadata_CopyAttribute_Params Parms{};

	Parms.InOther = InOther;
	Parms.AttributeToCopy = AttributeToCopy;
	Parms.NewAttributeName = NewAttributeName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.ClearAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        AttributeToClear                                                 (None)

void UPCGMetadata::ClearAttribute(class FName AttributeToClear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "ClearAttribute");

	Params::UPCGMetadata_ClearAttribute_Params Parms{};

	Parms.AttributeToClear = AttributeToClear;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.AddEntry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                              ParentEntryKey                                                   (None)
// int64                              ReturnValue                                                      (None)

void UPCGMetadata::AddEntry(int64 ParentEntryKey, int64 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "AddEntry");

	Params::UPCGMetadata_AddEntry_Params Parms{};

	Parms.ParentEntryKey = ParentEntryKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.AddAttributesFiltered
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                InOther                                                          (None)
// TSet<class FName>                  InFilteredAttributes                                             (None)
// enum class EPCGMetadataFilterMode  InFilterMode                                                     (None)

void UPCGMetadata::AddAttributesFiltered(class UPCGMetadata* InOther, TSet<class FName> InFilteredAttributes, enum class EPCGMetadataFilterMode InFilterMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "AddAttributesFiltered");

	Params::UPCGMetadata_AddAttributesFiltered_Params Parms{};

	Parms.InOther = InOther;
	Parms.InFilteredAttributes = InFilteredAttributes;
	Parms.InFilterMode = InFilterMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.AddAttributes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                InOther                                                          (None)

void UPCGMetadata::AddAttributes(class UPCGMetadata* InOther)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "AddAttributes");

	Params::UPCGMetadata_AddAttributes_Params Parms{};

	Parms.InOther = InOther;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.AddAttribute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                InOther                                                          (None)
// class FName                        AttributeName                                                    (None)

void UPCGMetadata::AddAttribute(class UPCGMetadata* InOther, class FName AttributeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "AddAttribute");

	Params::UPCGMetadata_AddAttribute_Params Parms{};

	Parms.InOther = InOther;
	Parms.AttributeName = AttributeName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.AccumulateWeightedAttributesByKey
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// float                              Weight                                                           (None)
// bool                               bSetNonInterpolableAttributes                                    (None)
// int64                              TargetKey                                                        (None)
// int64                              OutKey                                                           (None)

void UPCGMetadata::AccumulateWeightedAttributesByKey(int64 Key, class UPCGMetadata* MetaData, float Weight, bool bSetNonInterpolableAttributes, int64 TargetKey, int64 OutKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "AccumulateWeightedAttributesByKey");

	Params::UPCGMetadata_AccumulateWeightedAttributesByKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.Weight = Weight;
	Parms.bSetNonInterpolableAttributes = bSetNonInterpolableAttributes;
	Parms.TargetKey = TargetKey;
	Parms.OutKey = OutKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadata.AccumulatePointWeightedAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   InPoint                                                          (None)
// class UPCGMetadata*                InMetaData                                                       (None)
// float                              Weight                                                           (None)
// bool                               bSetNonInterpolableAttributes                                    (None)
// struct FPCGPoint                   OutPoint                                                         (None)

void UPCGMetadata::AccumulatePointWeightedAttributes(const struct FPCGPoint& InPoint, class UPCGMetadata* InMetaData, float Weight, bool bSetNonInterpolableAttributes, const struct FPCGPoint& OutPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadata", "AccumulatePointWeightedAttributes");

	Params::UPCGMetadata_AccumulatePointWeightedAttributes_Params Parms{};

	Parms.InPoint = InPoint;
	Parms.InMetaData = InMetaData;
	Parms.Weight = Weight;
	Parms.bSetNonInterpolableAttributes = bSetNonInterpolableAttributes;
	Parms.OutPoint = OutPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGMetadataAccessorHelpers
// (None)

class UClass* UPCGMetadataAccessorHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGMetadataAccessorHelpers");

	return Clss;
}


// PCGMetadataAccessorHelpers PCG.Default__PCGMetadataAccessorHelpers
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGMetadataAccessorHelpers* UPCGMetadataAccessorHelpers::GetDefaultObj()
{
	static class UPCGMetadataAccessorHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGMetadataAccessorHelpers*>(UPCGMetadataAccessorHelpers::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGMetadataAccessorHelpers.SetVectorAttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FVector                     Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetVectorAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetVectorAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetVectorAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetVectorAttribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FVector                     Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetVectorAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetVectorAttribute");

	Params::UPCGMetadataAccessorHelpers_SetVectorAttribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetVector4AttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FVector4                    Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetVector4AttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector4& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetVector4AttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetVector4AttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetVector4Attribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FVector4                    Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetVector4Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector4& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetVector4Attribute");

	Params::UPCGMetadataAccessorHelpers_SetVector4Attribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetVector2AttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FVector2D                   Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetVector2AttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector2D& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetVector2AttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetVector2AttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetVector2Attribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FVector2D                   Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetVector2Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector2D& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetVector2Attribute");

	Params::UPCGMetadataAccessorHelpers_SetVector2Attribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetTransformAttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FTransform                  Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetTransformAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FTransform& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetTransformAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetTransformAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetTransformAttribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FTransform                  Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetTransformAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FTransform& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetTransformAttribute");

	Params::UPCGMetadataAccessorHelpers_SetTransformAttribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetStringAttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// class FString                      Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetStringAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetStringAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetStringAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetStringAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// class FString                      Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetStringAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetStringAttribute");

	Params::UPCGMetadataAccessorHelpers_SetStringAttribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetRotatorAttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FRotator                    Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetRotatorAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FRotator& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetRotatorAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetRotatorAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetRotatorAttribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FRotator                    Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetRotatorAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FRotator& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetRotatorAttribute");

	Params::UPCGMetadataAccessorHelpers_SetRotatorAttribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetQuatAttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FQuat                       Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetQuatAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FQuat& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetQuatAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetQuatAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetQuatAttribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FQuat                       Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetQuatAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FQuat& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetQuatAttribute");

	Params::UPCGMetadataAccessorHelpers_SetQuatAttribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetInteger64AttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// int64                              Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetInteger64AttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, int64 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetInteger64AttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetInteger64AttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetInteger64Attribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// int64                              Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetInteger64Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, int64 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetInteger64Attribute");

	Params::UPCGMetadataAccessorHelpers_SetInteger64Attribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetInteger32AttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// int32                              Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetInteger32AttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetInteger32AttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetInteger32AttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetInteger32Attribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// int32                              Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetInteger32Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetInteger32Attribute");

	Params::UPCGMetadataAccessorHelpers_SetInteger32Attribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetFloatAttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// float                              Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetFloatAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetFloatAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetFloatAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetFloatAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// float                              Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetFloatAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetFloatAttribute");

	Params::UPCGMetadataAccessorHelpers_SetFloatAttribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetDoubleAttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// double                             Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetDoubleAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetDoubleAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetDoubleAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetDoubleAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// double                             Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetDoubleAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetDoubleAttribute");

	Params::UPCGMetadataAccessorHelpers_SetDoubleAttribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetBoolAttributeByMetadataKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// bool                               Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetBoolAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetBoolAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetBoolAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetBoolAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// bool                               Value                                                            (None)

void UPCGMetadataAccessorHelpers::SetBoolAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetBoolAttribute");

	Params::UPCGMetadataAccessorHelpers_SetBoolAttribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.SetAttributeFromPropertyByMetadataKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (ZeroConstructor)
// class FName                        AttributeName                                                    (None)
// class UObject*                     Object                                                           (None)
// class FName                        PropertyName                                                     (None)
// bool                               ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::SetAttributeFromPropertyByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, class UObject* Object, class FName PropertyName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "SetAttributeFromPropertyByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_SetAttributeFromPropertyByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.Object = Object;
	Parms.PropertyName = PropertyName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.InitializeMetadata
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (ZeroConstructor)
// struct FPCGPoint                   ParentPoint                                                      (None)
// class UPCGMetadata*                ParentMetadata                                                   (None)

void UPCGMetadataAccessorHelpers::InitializeMetadata(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const struct FPCGPoint& ParentPoint, class UPCGMetadata* ParentMetadata)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "InitializeMetadata");

	Params::UPCGMetadataAccessorHelpers_InitializeMetadata_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.ParentPoint = ParentPoint;
	Parms.ParentMetadata = ParentMetadata;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.HasAttributeSetByMetadataKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// bool                               ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::HasAttributeSetByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "HasAttributeSetByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_HasAttributeSetByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.HasAttributeSet
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// bool                               ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::HasAttributeSet(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "HasAttributeSet");

	Params::UPCGMetadataAccessorHelpers_HasAttributeSet_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetVectorAttributeByMetadataKey
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FVector                     ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetVectorAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetVectorAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetVectorAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetVectorAttribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FVector                     ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetVectorAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetVectorAttribute");

	Params::UPCGMetadataAccessorHelpers_GetVectorAttribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetVector4AttributeByMetadataKey
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FVector4                    ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetVector4AttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector4& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetVector4AttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetVector4AttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetVector4Attribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FVector4                    ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetVector4Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector4& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetVector4Attribute");

	Params::UPCGMetadataAccessorHelpers_GetVector4Attribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetVector2AttributeByMetadataKey
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FVector2D                   ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetVector2AttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetVector2AttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetVector2AttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetVector2Attribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FVector2D                   ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetVector2Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetVector2Attribute");

	Params::UPCGMetadataAccessorHelpers_GetVector2Attribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetTransformAttributeByMetadataKey
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FTransform                  ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetTransformAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetTransformAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetTransformAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetTransformAttribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FTransform                  ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetTransformAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetTransformAttribute");

	Params::UPCGMetadataAccessorHelpers_GetTransformAttribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetStringAttributeByMetadataKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// class FString                      ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetStringAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetStringAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetStringAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetStringAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// class FString                      ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetStringAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetStringAttribute");

	Params::UPCGMetadataAccessorHelpers_GetStringAttribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetRotatorAttributeByMetadataKey
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FRotator                    ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetRotatorAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FRotator& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetRotatorAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetRotatorAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetRotatorAttribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FRotator                    ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetRotatorAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FRotator& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetRotatorAttribute");

	Params::UPCGMetadataAccessorHelpers_GetRotatorAttribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetQuatAttributeByMetadataKey
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FQuat                       ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetQuatAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, const struct FQuat& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetQuatAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetQuatAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetQuatAttribute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// struct FQuat                       ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetQuatAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, const struct FQuat& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetQuatAttribute");

	Params::UPCGMetadataAccessorHelpers_GetQuatAttribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetInteger64AttributeByMetadataKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// int64                              ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetInteger64AttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, int64 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetInteger64AttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetInteger64AttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetInteger64Attribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// int64                              ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetInteger64Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, int64 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetInteger64Attribute");

	Params::UPCGMetadataAccessorHelpers_GetInteger64Attribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetInteger32AttributeByMetadataKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// int32                              ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetInteger32AttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetInteger32AttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetInteger32AttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetInteger32Attribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// int32                              ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetInteger32Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetInteger32Attribute");

	Params::UPCGMetadataAccessorHelpers_GetInteger32Attribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetFloatAttributeByMetadataKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// float                              ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetFloatAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetFloatAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetFloatAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetFloatAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// float                              ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetFloatAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetFloatAttribute");

	Params::UPCGMetadataAccessorHelpers_GetFloatAttribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetDoubleAttributeByMetadataKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// double                             ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetDoubleAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetDoubleAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetDoubleAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetDoubleAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// double                             ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetDoubleAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetDoubleAttribute");

	Params::UPCGMetadataAccessorHelpers_GetDoubleAttribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetBoolAttributeByMetadataKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64                              Key                                                              (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// bool                               ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetBoolAttributeByMetadataKey(int64 Key, class UPCGMetadata* MetaData, class FName AttributeName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetBoolAttributeByMetadataKey");

	Params::UPCGMetadataAccessorHelpers_GetBoolAttributeByMetadataKey_Params Parms{};

	Parms.Key = Key;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.GetBoolAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   Point                                                            (None)
// class UPCGMetadata*                MetaData                                                         (None)
// class FName                        AttributeName                                                    (None)
// bool                               ReturnValue                                                      (None)

void UPCGMetadataAccessorHelpers::GetBoolAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, class FName AttributeName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "GetBoolAttribute");

	Params::UPCGMetadataAccessorHelpers_GetBoolAttribute_Params Parms{};

	Parms.Point = Point;
	Parms.MetaData = MetaData;
	Parms.AttributeName = AttributeName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGMetadataAccessorHelpers.CopyPoint
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGPoint                   InPoint                                                          (None)
// struct FPCGPoint                   OutPoint                                                         (None)
// bool                               bCopyMetadata                                                    (None)
// class UPCGMetadata*                InMetaData                                                       (ZeroConstructor)
// class UPCGMetadata*                OutMetadata                                                      (None)

void UPCGMetadataAccessorHelpers::CopyPoint(const struct FPCGPoint& InPoint, const struct FPCGPoint& OutPoint, bool bCopyMetadata, class UPCGMetadata* InMetaData, class UPCGMetadata* OutMetadata)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGMetadataAccessorHelpers", "CopyPoint");

	Params::UPCGMetadataAccessorHelpers_CopyPoint_Params Parms{};

	Parms.InPoint = InPoint;
	Parms.OutPoint = OutPoint;
	Parms.bCopyMetadata = bCopyMetadata;
	Parms.InMetaData = InMetaData;
	Parms.OutMetadata = OutMetadata;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGComponent
// (None)

class UClass* UPCGComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGComponent");

	return Clss;
}


// PCGComponent PCG.Default__PCGComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGComponent* UPCGComponent::GetDefaultObj()
{
	static class UPCGComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGComponent*>(UPCGComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGComponent.SetGraph
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// class UPCGGraphInterface*          InGraph                                                          (None)

void UPCGComponent::SetGraph(class UPCGGraphInterface* InGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGComponent", "SetGraph");

	Params::UPCGComponent_SetGraph_Params Parms{};

	Parms.InGraph = InGraph;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGComponent.NotifyPropertiesChangedFromBlueprint
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPCGComponent::NotifyPropertiesChangedFromBlueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGComponent", "NotifyPropertiesChangedFromBlueprint");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGComponent.GetGeneratedGraphOutput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPCGDataCollection          ReturnValue                                                      (None)

void UPCGComponent::GetGeneratedGraphOutput(const struct FPCGDataCollection& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGComponent", "GetGeneratedGraphOutput");

	Params::UPCGComponent_GetGeneratedGraphOutput_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGComponent.GenerateLocal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bForce                                                           (None)

void UPCGComponent::GenerateLocal(bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGComponent", "GenerateLocal");

	Params::UPCGComponent_GenerateLocal_Params Parms{};

	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGComponent.Generate
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// bool                               bForce                                                           (None)

void UPCGComponent::Generate(bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGComponent", "Generate");

	Params::UPCGComponent_Generate_Params Parms{};

	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGComponent.ClearPCGLink
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      TemplateActor                                                    (ZeroConstructor)
// class AActor*                      ReturnValue                                                      (None)

void UPCGComponent::ClearPCGLink(class UClass* TemplateActor, class AActor* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGComponent", "ClearPCGLink");

	Params::UPCGComponent_ClearPCGLink_Params Parms{};

	Parms.TemplateActor = TemplateActor;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGComponent.CleanupLocal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bRemoveComponents                                                (None)
// bool                               bSave                                                            (None)

void UPCGComponent::CleanupLocal(bool bRemoveComponents, bool bSave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGComponent", "CleanupLocal");

	Params::UPCGComponent_CleanupLocal_Params Parms{};

	Parms.bRemoveComponents = bRemoveComponents;
	Parms.bSave = bSave;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGComponent.Cleanup
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// bool                               bRemoveComponents                                                (None)
// bool                               bSave                                                            (None)

void UPCGComponent::Cleanup(bool bRemoveComponents, bool bSave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGComponent", "Cleanup");

	Params::UPCGComponent_Cleanup_Params Parms{};

	Parms.bRemoveComponents = bRemoveComponents;
	Parms.bSave = bSave;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGComponent.AddToManagedResources
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGManagedResource*         InResource                                                       (None)

void UPCGComponent::AddToManagedResources(class UPCGManagedResource* InResource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGComponent", "AddToManagedResources");

	Params::UPCGComponent_AddToManagedResources_Params Parms{};

	Parms.InResource = InResource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGDataFunctionLibrary
// (None)

class UClass* UPCGDataFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDataFunctionLibrary");

	return Clss;
}


// PCGDataFunctionLibrary PCG.Default__PCGDataFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDataFunctionLibrary* UPCGDataFunctionLibrary::GetDefaultObj()
{
	static class UPCGDataFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDataFunctionLibrary*>(UPCGDataFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGDataFunctionLibrary.GetTaggedParams
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGDataCollection          InCollection                                                     (ZeroConstructor)
// class FString                      InTag                                                            (None)
// TArray<struct FPCGTaggedData>      ReturnValue                                                      (None)

void UPCGDataFunctionLibrary::GetTaggedParams(const struct FPCGDataCollection& InCollection, const class FString& InTag, const TArray<struct FPCGTaggedData>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDataFunctionLibrary", "GetTaggedParams");

	Params::UPCGDataFunctionLibrary_GetTaggedParams_Params Parms{};

	Parms.InCollection = InCollection;
	Parms.InTag = InTag;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGDataFunctionLibrary.GetTaggedInputs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGDataCollection          InCollection                                                     (ZeroConstructor)
// class FString                      InTag                                                            (None)
// TArray<struct FPCGTaggedData>      ReturnValue                                                      (None)

void UPCGDataFunctionLibrary::GetTaggedInputs(const struct FPCGDataCollection& InCollection, const class FString& InTag, const TArray<struct FPCGTaggedData>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDataFunctionLibrary", "GetTaggedInputs");

	Params::UPCGDataFunctionLibrary_GetTaggedInputs_Params Parms{};

	Parms.InCollection = InCollection;
	Parms.InTag = InTag;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGDataFunctionLibrary.GetParamsByPin
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGDataCollection          InCollection                                                     (ZeroConstructor)
// class FName                        InPinLabel                                                       (None)
// TArray<struct FPCGTaggedData>      ReturnValue                                                      (None)

void UPCGDataFunctionLibrary::GetParamsByPin(const struct FPCGDataCollection& InCollection, class FName InPinLabel, const TArray<struct FPCGTaggedData>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDataFunctionLibrary", "GetParamsByPin");

	Params::UPCGDataFunctionLibrary_GetParamsByPin_Params Parms{};

	Parms.InCollection = InCollection;
	Parms.InPinLabel = InPinLabel;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGDataFunctionLibrary.GetParams
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGDataCollection          InCollection                                                     (ZeroConstructor)
// TArray<struct FPCGTaggedData>      ReturnValue                                                      (None)

void UPCGDataFunctionLibrary::GetParams(const struct FPCGDataCollection& InCollection, const TArray<struct FPCGTaggedData>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDataFunctionLibrary", "GetParams");

	Params::UPCGDataFunctionLibrary_GetParams_Params Parms{};

	Parms.InCollection = InCollection;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGDataFunctionLibrary.GetInputsByPin
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGDataCollection          InCollection                                                     (ZeroConstructor)
// class FName                        InPinLabel                                                       (None)
// TArray<struct FPCGTaggedData>      ReturnValue                                                      (None)

void UPCGDataFunctionLibrary::GetInputsByPin(const struct FPCGDataCollection& InCollection, class FName InPinLabel, const TArray<struct FPCGTaggedData>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDataFunctionLibrary", "GetInputsByPin");

	Params::UPCGDataFunctionLibrary_GetInputsByPin_Params Parms{};

	Parms.InCollection = InCollection;
	Parms.InPinLabel = InPinLabel;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGDataFunctionLibrary.GetInputs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGDataCollection          InCollection                                                     (ZeroConstructor)
// TArray<struct FPCGTaggedData>      ReturnValue                                                      (None)

void UPCGDataFunctionLibrary::GetInputs(const struct FPCGDataCollection& InCollection, const TArray<struct FPCGTaggedData>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDataFunctionLibrary", "GetInputs");

	Params::UPCGDataFunctionLibrary_GetInputs_Params Parms{};

	Parms.InCollection = InCollection;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGDataFunctionLibrary.GetAllSettings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPCGDataCollection          InCollection                                                     (ZeroConstructor)
// TArray<struct FPCGTaggedData>      ReturnValue                                                      (None)

void UPCGDataFunctionLibrary::GetAllSettings(const struct FPCGDataCollection& InCollection, const TArray<struct FPCGTaggedData>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDataFunctionLibrary", "GetAllSettings");

	Params::UPCGDataFunctionLibrary_GetAllSettings_Params Parms{};

	Parms.InCollection = InCollection;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGEdge
// (None)

class UClass* UPCGEdge::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGEdge");

	return Clss;
}


// PCGEdge PCG.Default__PCGEdge
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UPCGEdge* UPCGEdge::GetDefaultObj()
{
	static class UPCGEdge* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGEdge*>(UPCGEdge::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGGraphInterface
// (None)

class UClass* UPCGGraphInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGGraphInterface");

	return Clss;
}


// PCGGraphInterface PCG.Default__PCGGraphInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGGraphInterface* UPCGGraphInterface::GetDefaultObj()
{
	static class UPCGGraphInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGGraphInterface*>(UPCGGraphInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGGraphInterface.GetMutablePCGGraph
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGGraph*                   ReturnValue                                                      (None)

void UPCGGraphInterface::GetMutablePCGGraph(class UPCGGraph* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGGraphInterface", "GetMutablePCGGraph");

	Params::UPCGGraphInterface_GetMutablePCGGraph_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGGraphInterface.GetConstPCGGraph
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGGraph*                   ReturnValue                                                      (None)

void UPCGGraphInterface::GetConstPCGGraph(class UPCGGraph* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGGraphInterface", "GetConstPCGGraph");

	Params::UPCGGraphInterface_GetConstPCGGraph_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGGraph
// (None)

class UClass* UPCGGraph::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGGraph");

	return Clss;
}


// PCGGraph PCG.Default__PCGGraph
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGGraph* UPCGGraph::GetDefaultObj()
{
	static class UPCGGraph* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGGraph*>(UPCGGraph::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGGraph.RemoveNode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGNode*                    InNode                                                           (None)

void UPCGGraph::RemoveNode(class UPCGNode* InNode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGGraph", "RemoveNode");

	Params::UPCGGraph_RemoveNode_Params Parms{};

	Parms.InNode = InNode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGGraph.RemoveEdge
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPCGNode*                    From                                                             (ZeroConstructor)
// class FName                        FromLabel                                                        (None)
// class UPCGNode*                    To                                                               (None)
// class FName                        ToLabel                                                          (None)
// bool                               ReturnValue                                                      (None)

void UPCGGraph::RemoveEdge(class UPCGNode* From, class FName FromLabel, class UPCGNode* To, class FName ToLabel, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGGraph", "RemoveEdge");

	Params::UPCGGraph_RemoveEdge_Params Parms{};

	Parms.From = From;
	Parms.FromLabel = FromLabel;
	Parms.To = To;
	Parms.ToLabel = ToLabel;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGGraph.GetOutputNode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGNode*                    ReturnValue                                                      (None)

void UPCGGraph::GetOutputNode(class UPCGNode* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGGraph", "GetOutputNode");

	Params::UPCGGraph_GetOutputNode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGGraph.GetInputNode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGNode*                    ReturnValue                                                      (None)

void UPCGGraph::GetInputNode(class UPCGNode* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGGraph", "GetInputNode");

	Params::UPCGGraph_GetInputNode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGGraph.AddNodeOfType
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UClass*                      InSettingsClass                                                  (ZeroConstructor)
// class UPCGSettings*                DefaultNodeSettings                                              (ZeroConstructor)
// class UPCGNode*                    ReturnValue                                                      (None)

void UPCGGraph::AddNodeOfType(class UClass* InSettingsClass, class UPCGSettings* DefaultNodeSettings, class UPCGNode* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGGraph", "AddNodeOfType");

	Params::UPCGGraph_AddNodeOfType_Params Parms{};

	Parms.InSettingsClass = InSettingsClass;
	Parms.DefaultNodeSettings = DefaultNodeSettings;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGGraph.AddNodeInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGSettings*                InSettings                                                       (ZeroConstructor)
// class UPCGNode*                    ReturnValue                                                      (None)

void UPCGGraph::AddNodeInstance(class UPCGSettings* InSettings, class UPCGNode* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGGraph", "AddNodeInstance");

	Params::UPCGGraph_AddNodeInstance_Params Parms{};

	Parms.InSettings = InSettings;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGGraph.AddNodeCopy
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPCGSettings*                InSettings                                                       (ZeroConstructor)
// class UPCGSettings*                DefaultNodeSettings                                              (ZeroConstructor)
// class UPCGNode*                    ReturnValue                                                      (None)

void UPCGGraph::AddNodeCopy(class UPCGSettings* InSettings, class UPCGSettings* DefaultNodeSettings, class UPCGNode* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGGraph", "AddNodeCopy");

	Params::UPCGGraph_AddNodeCopy_Params Parms{};

	Parms.InSettings = InSettings;
	Parms.DefaultNodeSettings = DefaultNodeSettings;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGGraph.AddEdge
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPCGNode*                    From                                                             (ZeroConstructor)
// class FName                        FromPinLabel                                                     (None)
// class UPCGNode*                    To                                                               (ZeroConstructor)
// class FName                        ToPinLabel                                                       (None)
// class UPCGNode*                    ReturnValue                                                      (None)

void UPCGGraph::AddEdge(class UPCGNode* From, class FName FromPinLabel, class UPCGNode* To, class FName ToPinLabel, class UPCGNode* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGGraph", "AddEdge");

	Params::UPCGGraph_AddEdge_Params Parms{};

	Parms.From = From;
	Parms.FromPinLabel = FromPinLabel;
	Parms.To = To;
	Parms.ToPinLabel = ToPinLabel;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGGraphInstance
// (None)

class UClass* UPCGGraphInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGGraphInstance");

	return Clss;
}


// PCGGraphInstance PCG.Default__PCGGraphInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGGraphInstance* UPCGGraphInstance::GetDefaultObj()
{
	static class UPCGGraphInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGGraphInstance*>(UPCGGraphInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGGraphInputOutputSettings
// (None)

class UClass* UPCGGraphInputOutputSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGGraphInputOutputSettings");

	return Clss;
}


// PCGGraphInputOutputSettings PCG.Default__PCGGraphInputOutputSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGGraphInputOutputSettings* UPCGGraphInputOutputSettings::GetDefaultObj()
{
	static class UPCGGraphInputOutputSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGGraphInputOutputSettings*>(UPCGGraphInputOutputSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGManagedResource
// (None)

class UClass* UPCGManagedResource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGManagedResource");

	return Clss;
}


// PCGManagedResource PCG.Default__PCGManagedResource
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGManagedResource* UPCGManagedResource::GetDefaultObj()
{
	static class UPCGManagedResource* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGManagedResource*>(UPCGManagedResource::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGManagedActors
// (None)

class UClass* UPCGManagedActors::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGManagedActors");

	return Clss;
}


// PCGManagedActors PCG.Default__PCGManagedActors
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGManagedActors* UPCGManagedActors::GetDefaultObj()
{
	static class UPCGManagedActors* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGManagedActors*>(UPCGManagedActors::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGManagedComponent
// (None)

class UClass* UPCGManagedComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGManagedComponent");

	return Clss;
}


// PCGManagedComponent PCG.Default__PCGManagedComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGManagedComponent* UPCGManagedComponent::GetDefaultObj()
{
	static class UPCGManagedComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGManagedComponent*>(UPCGManagedComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGManagedISMComponent
// (None)

class UClass* UPCGManagedISMComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGManagedISMComponent");

	return Clss;
}


// PCGManagedISMComponent PCG.Default__PCGManagedISMComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGManagedISMComponent* UPCGManagedISMComponent::GetDefaultObj()
{
	static class UPCGManagedISMComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGManagedISMComponent*>(UPCGManagedISMComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGParamData
// (None)

class UClass* UPCGParamData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGParamData");

	return Clss;
}


// PCGParamData PCG.Default__PCGParamData
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGParamData* UPCGParamData::GetDefaultObj()
{
	static class UPCGParamData* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGParamData*>(UPCGParamData::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGParamData.MutableMetadata
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPCGMetadata*                ReturnValue                                                      (None)

void UPCGParamData::MutableMetadata(class UPCGMetadata* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGParamData", "MutableMetadata");

	Params::UPCGParamData_MutableMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGParamData.FindOrAddMetadataKey
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (None)
// int64                              ReturnValue                                                      (None)

void UPCGParamData::FindOrAddMetadataKey(class FName InName, int64 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGParamData", "FindOrAddMetadataKey");

	Params::UPCGParamData_FindOrAddMetadataKey_Params Parms{};

	Parms.InName = InName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGParamData.FindMetadataKey
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InName                                                           (None)
// int64                              ReturnValue                                                      (None)

void UPCGParamData::FindMetadataKey(class FName InName, int64 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGParamData", "FindMetadataKey");

	Params::UPCGParamData_FindMetadataKey_Params Parms{};

	Parms.InName = InName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGParamData.FilterParamsByName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InName                                                           (None)
// class UPCGParamData*               ReturnValue                                                      (None)

void UPCGParamData::FilterParamsByName(class FName InName, class UPCGParamData* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGParamData", "FilterParamsByName");

	Params::UPCGParamData_FilterParamsByName_Params Parms{};

	Parms.InName = InName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGParamData.FilterParamsByKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int64                              InKey                                                            (None)
// class UPCGParamData*               ReturnValue                                                      (None)

void UPCGParamData::FilterParamsByKey(int64 InKey, class UPCGParamData* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGParamData", "FilterParamsByKey");

	Params::UPCGParamData_FilterParamsByKey_Params Parms{};

	Parms.InKey = InKey;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGParamData.ConstMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPCGMetadata*                ReturnValue                                                      (None)

void UPCGParamData::ConstMetadata(class UPCGMetadata* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGParamData", "ConstMetadata");

	Params::UPCGParamData_ConstMetadata_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGPin
// (None)

class UClass* UPCGPin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGPin");

	return Clss;
}


// PCGPin PCG.Default__PCGPin
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UPCGPin* UPCGPin::GetDefaultObj()
{
	static class UPCGPin* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGPin*>(UPCGPin::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGPin.SetToolTip
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InTooltip                                                        (None)

void UPCGPin::SetToolTip(class FText InTooltip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGPin", "SetToolTip");

	Params::UPCGPin_SetToolTip_Params Parms{};

	Parms.InTooltip = InTooltip;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function PCG.PCGPin.GetTooltip
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (None)

void UPCGPin::GetTooltip(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGPin", "GetTooltip");

	Params::UPCGPin_GetTooltip_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGSettingsInstance
// (None)

class UClass* UPCGSettingsInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSettingsInstance");

	return Clss;
}


// PCGSettingsInstance PCG.Default__PCGSettingsInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSettingsInstance* UPCGSettingsInstance::GetDefaultObj()
{
	static class UPCGSettingsInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSettingsInstance*>(UPCGSettingsInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGTrivialSettings
// (None)

class UClass* UPCGTrivialSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGTrivialSettings");

	return Clss;
}


// PCGTrivialSettings PCG.Default__PCGTrivialSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGTrivialSettings* UPCGTrivialSettings::GetDefaultObj()
{
	static class UPCGTrivialSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGTrivialSettings*>(UPCGTrivialSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSubgraphSettings
// (None)

class UClass* UPCGSubgraphSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSubgraphSettings");

	return Clss;
}


// PCGSubgraphSettings PCG.Default__PCGSubgraphSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSubgraphSettings* UPCGSubgraphSettings::GetDefaultObj()
{
	static class UPCGSubgraphSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSubgraphSettings*>(UPCGSubgraphSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSubgraphNode
// (None)

class UClass* UPCGSubgraphNode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSubgraphNode");

	return Clss;
}


// PCGSubgraphNode PCG.Default__PCGSubgraphNode
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSubgraphNode* UPCGSubgraphNode::GetDefaultObj()
{
	static class UPCGSubgraphNode* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSubgraphNode*>(UPCGSubgraphNode::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGSubsystem
// (None)

class UClass* UPCGSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGSubsystem");

	return Clss;
}


// PCGSubsystem PCG.Default__PCGSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGSubsystem* UPCGSubsystem::GetDefaultObj()
{
	static class UPCGSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGSubsystem*>(UPCGSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGVolume
// (Actor)

class UClass* APCGVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGVolume");

	return Clss;
}


// PCGVolume PCG.Default__PCGVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class APCGVolume* APCGVolume::GetDefaultObj()
{
	static class APCGVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<APCGVolume*>(APCGVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGWorldActor
// (Actor)

class UClass* APCGWorldActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGWorldActor");

	return Clss;
}


// PCGWorldActor PCG.Default__PCGWorldActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APCGWorldActor* APCGWorldActor::GetDefaultObj()
{
	static class APCGWorldActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APCGWorldActor*>(APCGWorldActor::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGDeterminismTestBlueprintBase
// (None)

class UClass* UPCGDeterminismTestBlueprintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGDeterminismTestBlueprintBase");

	return Clss;
}


// PCGDeterminismTestBlueprintBase PCG.Default__PCGDeterminismTestBlueprintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGDeterminismTestBlueprintBase* UPCGDeterminismTestBlueprintBase::GetDefaultObj()
{
	static class UPCGDeterminismTestBlueprintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGDeterminismTestBlueprintBase*>(UPCGDeterminismTestBlueprintBase::StaticClass()->DefaultObject);

	return Default;
}


// Function PCG.PCGDeterminismTestBlueprintBase.ExecuteTest
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPCGNode*                    InPCGNode                                                        (None)
// struct FDeterminismTestResult      InOutTestResult                                                  (None)

void UPCGDeterminismTestBlueprintBase::ExecuteTest(class UPCGNode* InPCGNode, const struct FDeterminismTestResult& InOutTestResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PCGDeterminismTestBlueprintBase", "ExecuteTest");

	Params::UPCGDeterminismTestBlueprintBase_ExecuteTest_Params Parms{};

	Parms.InPCGNode = InPCGNode;
	Parms.InOutTestResult = InOutTestResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class PCG.PCGUnitTestDummyActor
// (Actor)

class UClass* APCGUnitTestDummyActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGUnitTestDummyActor");

	return Clss;
}


// PCGUnitTestDummyActor PCG.Default__PCGUnitTestDummyActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APCGUnitTestDummyActor* APCGUnitTestDummyActor::GetDefaultObj()
{
	static class APCGUnitTestDummyActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APCGUnitTestDummyActor*>(APCGUnitTestDummyActor::StaticClass()->DefaultObject);

	return Default;
}


// Class PCG.PCGUnitTestDummyComponent
// (None)

class UClass* UPCGUnitTestDummyComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PCGUnitTestDummyComponent");

	return Clss;
}


// PCGUnitTestDummyComponent PCG.Default__PCGUnitTestDummyComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPCGUnitTestDummyComponent* UPCGUnitTestDummyComponent::GetDefaultObj()
{
	static class UPCGUnitTestDummyComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPCGUnitTestDummyComponent*>(UPCGUnitTestDummyComponent::StaticClass()->DefaultObject);

	return Default;
}

}


