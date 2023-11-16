#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VariantManagerContent.LevelVariantSets
// (None)

class UClass* ULevelVariantSets::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelVariantSets");

	return Clss;
}


// LevelVariantSets VariantManagerContent.Default__LevelVariantSets
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelVariantSets* ULevelVariantSets::GetDefaultObj()
{
	static class ULevelVariantSets* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelVariantSets*>(ULevelVariantSets::StaticClass()->DefaultObject);

	return Default;
}


// Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      VariantSetName                                                   (None)
// class UVariantSet*                 ReturnValue                                                      (None)

void ULevelVariantSets::GetVariantSetByName(const class FString& VariantSetName, class UVariantSet* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelVariantSets", "GetVariantSetByName");

	Params::ULevelVariantSets_GetVariantSetByName_Params Parms{};

	Parms.VariantSetName = VariantSetName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.LevelVariantSets.GetVariantSet
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              VariantSetIndex                                                  (None)
// class UVariantSet*                 ReturnValue                                                      (None)

void ULevelVariantSets::GetVariantSet(int32 VariantSetIndex, class UVariantSet* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelVariantSets", "GetVariantSet");

	Params::ULevelVariantSets_GetVariantSet_Params Parms{};

	Parms.VariantSetIndex = VariantSetIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (None)

void ULevelVariantSets::GetNumVariantSets(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelVariantSets", "GetNumVariantSets");

	Params::ULevelVariantSets_GetNumVariantSets_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VariantManagerContent.LevelVariantSetsActor
// (Actor)

class UClass* ALevelVariantSetsActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelVariantSetsActor");

	return Clss;
}


// LevelVariantSetsActor VariantManagerContent.Default__LevelVariantSetsActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ALevelVariantSetsActor* ALevelVariantSetsActor::GetDefaultObj()
{
	static class ALevelVariantSetsActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ALevelVariantSetsActor*>(ALevelVariantSetsActor::StaticClass()->DefaultObject);

	return Default;
}


// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      VariantSetName                                                   (None)
// class FString                      VariantName                                                      (None)
// bool                               ReturnValue                                                      (None)

void ALevelVariantSetsActor::SwitchOnVariantByName(const class FString& VariantSetName, const class FString& VariantName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelVariantSetsActor", "SwitchOnVariantByName");

	Params::ALevelVariantSetsActor_SwitchOnVariantByName_Params Parms{};

	Parms.VariantSetName = VariantSetName;
	Parms.VariantName = VariantName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              VariantSetIndex                                                  (None)
// int32                              VariantIndex                                                     (None)
// bool                               ReturnValue                                                      (None)

void ALevelVariantSetsActor::SwitchOnVariantByIndex(int32 VariantSetIndex, int32 VariantIndex, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelVariantSetsActor", "SwitchOnVariantByIndex");

	Params::ALevelVariantSetsActor_SwitchOnVariantByIndex_Params Parms{};

	Parms.VariantSetIndex = VariantSetIndex;
	Parms.VariantIndex = VariantIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelVariantSets*           InVariantSets                                                    (None)

void ALevelVariantSetsActor::SetLevelVariantSets(class ULevelVariantSets* InVariantSets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelVariantSetsActor", "SetLevelVariantSets");

	Params::ALevelVariantSetsActor_SetLevelVariantSets_Params Parms{};

	Parms.InVariantSets = InVariantSets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bLoad                                                            (None)
// class ULevelVariantSets*           ReturnValue                                                      (None)

void ALevelVariantSetsActor::GetLevelVariantSets(bool bLoad, class ULevelVariantSets* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelVariantSetsActor", "GetLevelVariantSets");

	Params::ALevelVariantSetsActor_GetLevelVariantSets_Params Parms{};

	Parms.bLoad = bLoad;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// (None)

class UClass* ULevelVariantSetsFunctionDirector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelVariantSetsFunctionDirector");

	return Clss;
}


// LevelVariantSetsFunctionDirector VariantManagerContent.Default__LevelVariantSetsFunctionDirector
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelVariantSetsFunctionDirector* ULevelVariantSetsFunctionDirector::GetDefaultObj()
{
	static class ULevelVariantSetsFunctionDirector* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelVariantSetsFunctionDirector*>(ULevelVariantSetsFunctionDirector::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.PropertyValue
// (None)

class UClass* UPropertyValue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyValue");

	return Clss;
}


// PropertyValue VariantManagerContent.Default__PropertyValue
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyValue* UPropertyValue::GetDefaultObj()
{
	static class UPropertyValue* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyValue*>(UPropertyValue::StaticClass()->DefaultObject);

	return Default;
}


// Function VariantManagerContent.PropertyValue.HasRecordedData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UPropertyValue::HasRecordedData(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyValue", "HasRecordedData");

	Params::UPropertyValue_HasRecordedData_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.PropertyValue.GetPropertyTooltip
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (None)

void UPropertyValue::GetPropertyTooltip(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyValue", "GetPropertyTooltip");

	Params::UPropertyValue_GetPropertyTooltip_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.PropertyValue.GetFullDisplayString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (None)

void UPropertyValue::GetFullDisplayString(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PropertyValue", "GetFullDisplayString");

	Params::UPropertyValue_GetFullDisplayString_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VariantManagerContent.PropertyValueTransform
// (None)

class UClass* UPropertyValueTransform::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyValueTransform");

	return Clss;
}


// PropertyValueTransform VariantManagerContent.Default__PropertyValueTransform
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyValueTransform* UPropertyValueTransform::GetDefaultObj()
{
	static class UPropertyValueTransform* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyValueTransform*>(UPropertyValueTransform::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.PropertyValueVisibility
// (None)

class UClass* UPropertyValueVisibility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyValueVisibility");

	return Clss;
}


// PropertyValueVisibility VariantManagerContent.Default__PropertyValueVisibility
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyValueVisibility* UPropertyValueVisibility::GetDefaultObj()
{
	static class UPropertyValueVisibility* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyValueVisibility*>(UPropertyValueVisibility::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.PropertyValueColor
// (None)

class UClass* UPropertyValueColor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyValueColor");

	return Clss;
}


// PropertyValueColor VariantManagerContent.Default__PropertyValueColor
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyValueColor* UPropertyValueColor::GetDefaultObj()
{
	static class UPropertyValueColor* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyValueColor*>(UPropertyValueColor::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.PropertyValueMaterial
// (None)

class UClass* UPropertyValueMaterial::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyValueMaterial");

	return Clss;
}


// PropertyValueMaterial VariantManagerContent.Default__PropertyValueMaterial
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyValueMaterial* UPropertyValueMaterial::GetDefaultObj()
{
	static class UPropertyValueMaterial* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyValueMaterial*>(UPropertyValueMaterial::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.PropertyValueOption
// (None)

class UClass* UPropertyValueOption::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyValueOption");

	return Clss;
}


// PropertyValueOption VariantManagerContent.Default__PropertyValueOption
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyValueOption* UPropertyValueOption::GetDefaultObj()
{
	static class UPropertyValueOption* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyValueOption*>(UPropertyValueOption::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.PropertyValueSoftObject
// (None)

class UClass* UPropertyValueSoftObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyValueSoftObject");

	return Clss;
}


// PropertyValueSoftObject VariantManagerContent.Default__PropertyValueSoftObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyValueSoftObject* UPropertyValueSoftObject::GetDefaultObj()
{
	static class UPropertyValueSoftObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyValueSoftObject*>(UPropertyValueSoftObject::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.SwitchActor
// (Actor)

class UClass* ASwitchActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SwitchActor");

	return Clss;
}


// SwitchActor VariantManagerContent.Default__SwitchActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ASwitchActor* ASwitchActor::GetDefaultObj()
{
	static class ASwitchActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ASwitchActor*>(ASwitchActor::StaticClass()->DefaultObject);

	return Default;
}


// Function VariantManagerContent.SwitchActor.SelectOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OptionIndex                                                      (None)

void ASwitchActor::SelectOption(int32 OptionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitchActor", "SelectOption");

	Params::ASwitchActor_SelectOption_Params Parms{};

	Parms.OptionIndex = OptionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.SwitchActor.GetSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void ASwitchActor::GetSelectedOption(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitchActor", "GetSelectedOption");

	Params::ASwitchActor_GetSelectedOption_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.SwitchActor.GetOptions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>              ReturnValue                                                      (None)

void ASwitchActor::GetOptions(const TArray<class AActor*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SwitchActor", "GetOptions");

	Params::ASwitchActor_GetOptions_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VariantManagerContent.Variant
// (None)

class UClass* UVariant::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Variant");

	return Clss;
}


// Variant VariantManagerContent.Default__Variant
// (Public, ClassDefaultObject, ArchetypeObject)

class UVariant* UVariant::GetDefaultObj()
{
	static class UVariant* Default = nullptr;

	if (!Default)
		Default = static_cast<UVariant*>(UVariant::StaticClass()->DefaultObject);

	return Default;
}


// Function VariantManagerContent.Variant.SwitchOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVariant::SwitchOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "SwitchOn");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.SetThumbnailFromTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  NewThumbnail                                                     (None)

void UVariant::SetThumbnailFromTexture(class UTexture2D* NewThumbnail)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "SetThumbnailFromTexture");

	Params::UVariant_SetThumbnailFromTexture_Params Parms{};

	Parms.NewThumbnail = NewThumbnail;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.SetThumbnailFromFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FilePath                                                         (None)

void UVariant::SetThumbnailFromFile(const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "SetThumbnailFromFile");

	Params::UVariant_SetThumbnailFromFile_Params Parms{};

	Parms.FilePath = FilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.SetThumbnailFromEditorViewport
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVariant::SetThumbnailFromEditorViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "SetThumbnailFromEditorViewport");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.SetThumbnailFromCamera
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (None)
// struct FTransform                  CameraTransform                                                  (None)
// float                              FOVDegrees                                                       (None)
// float                              MinZ                                                             (None)
// float                              Gamma                                                            (None)

void UVariant::SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "SetThumbnailFromCamera");

	Params::UVariant_SetThumbnailFromCamera_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CameraTransform = CameraTransform;
	Parms.FOVDegrees = FOVDegrees;
	Parms.MinZ = MinZ;
	Parms.Gamma = Gamma;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.SetDisplayText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        NewDisplayText                                                   (None)

void UVariant::SetDisplayText(class FText NewDisplayText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "SetDisplayText");

	Params::UVariant_SetDisplayText_Params Parms{};

	Parms.NewDisplayText = NewDisplayText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.SetDependency
// (Final, Native, Public, HasOutParams)
// Parameters:
// int32                              Index                                                            (None)
// struct FVariantDependency          Dependency                                                       (None)

void UVariant::SetDependency(int32 Index, const struct FVariantDependency& Dependency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "SetDependency");

	Params::UVariant_SetDependency_Params Parms{};

	Parms.Index = Index;
	Parms.Dependency = Dependency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.IsActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (None)

void UVariant::IsActive(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "IsActive");

	Params::UVariant_IsActive_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.GetThumbnail
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  ReturnValue                                                      (None)

void UVariant::GetThumbnail(class UTexture2D* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "GetThumbnail");

	Params::UVariant_GetThumbnail_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.GetParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UVariantSet*                 ReturnValue                                                      (None)

void UVariant::GetParent(class UVariantSet* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "GetParent");

	Params::UVariant_GetParent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.GetNumDependencies
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UVariant::GetNumDependencies(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "GetNumDependencies");

	Params::UVariant_GetNumDependencies_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.GetNumActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UVariant::GetNumActors(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "GetNumActors");

	Params::UVariant_GetNumActors_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.GetDisplayText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (None)

void UVariant::GetDisplayText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "GetDisplayText");

	Params::UVariant_GetDisplayText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.GetDependents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelVariantSets*           LevelVariantSets                                                 (ZeroConstructor)
// bool                               bOnlyEnabledDependencies                                         (None)
// TArray<class UVariant*>            ReturnValue                                                      (None)

void UVariant::GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies, const TArray<class UVariant*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "GetDependents");

	Params::UVariant_GetDependents_Params Parms{};

	Parms.LevelVariantSets = LevelVariantSets;
	Parms.bOnlyEnabledDependencies = bOnlyEnabledDependencies;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.GetDependency
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Index                                                            (None)
// struct FVariantDependency          ReturnValue                                                      (None)

void UVariant::GetDependency(int32 Index, const struct FVariantDependency& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "GetDependency");

	Params::UVariant_GetDependency_Params Parms{};

	Parms.Index = Index;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.GetActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ActorIndex                                                       (None)
// class AActor*                      ReturnValue                                                      (None)

void UVariant::GetActor(int32 ActorIndex, class AActor* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "GetActor");

	Params::UVariant_GetActor_Params Parms{};

	Parms.ActorIndex = ActorIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.DeleteDependency
// (Final, Native, Public)
// Parameters:
// int32                              Index                                                            (None)

void UVariant::DeleteDependency(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "DeleteDependency");

	Params::UVariant_DeleteDependency_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.Variant.AddDependency
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FVariantDependency          Dependency                                                       (None)
// int32                              ReturnValue                                                      (None)

void UVariant::AddDependency(const struct FVariantDependency& Dependency, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Variant", "AddDependency");

	Params::UVariant_AddDependency_Params Parms{};

	Parms.Dependency = Dependency;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VariantManagerContent.VariantObjectBinding
// (None)

class UClass* UVariantObjectBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VariantObjectBinding");

	return Clss;
}


// VariantObjectBinding VariantManagerContent.Default__VariantObjectBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UVariantObjectBinding* UVariantObjectBinding::GetDefaultObj()
{
	static class UVariantObjectBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UVariantObjectBinding*>(UVariantObjectBinding::StaticClass()->DefaultObject);

	return Default;
}


// Class VariantManagerContent.VariantSet
// (None)

class UClass* UVariantSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VariantSet");

	return Clss;
}


// VariantSet VariantManagerContent.Default__VariantSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UVariantSet* UVariantSet::GetDefaultObj()
{
	static class UVariantSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UVariantSet*>(UVariantSet::StaticClass()->DefaultObject);

	return Default;
}


// Function VariantManagerContent.VariantSet.SetThumbnailFromTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  NewThumbnail                                                     (None)

void UVariantSet::SetThumbnailFromTexture(class UTexture2D* NewThumbnail)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "SetThumbnailFromTexture");

	Params::UVariantSet_SetThumbnailFromTexture_Params Parms{};

	Parms.NewThumbnail = NewThumbnail;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.VariantSet.SetThumbnailFromFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FilePath                                                         (None)

void UVariantSet::SetThumbnailFromFile(const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "SetThumbnailFromFile");

	Params::UVariantSet_SetThumbnailFromFile_Params Parms{};

	Parms.FilePath = FilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVariantSet::SetThumbnailFromEditorViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "SetThumbnailFromEditorViewport");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.VariantSet.SetThumbnailFromCamera
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (None)
// struct FTransform                  CameraTransform                                                  (None)
// float                              FOVDegrees                                                       (None)
// float                              MinZ                                                             (None)
// float                              Gamma                                                            (None)

void UVariantSet::SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "SetThumbnailFromCamera");

	Params::UVariantSet_SetThumbnailFromCamera_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CameraTransform = CameraTransform;
	Parms.FOVDegrees = FOVDegrees;
	Parms.MinZ = MinZ;
	Parms.Gamma = Gamma;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.VariantSet.SetDisplayText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        NewDisplayText                                                   (None)

void UVariantSet::SetDisplayText(class FText NewDisplayText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "SetDisplayText");

	Params::UVariantSet_SetDisplayText_Params Parms{};

	Parms.NewDisplayText = NewDisplayText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.VariantSet.GetVariantByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      VariantName                                                      (None)
// class UVariant*                    ReturnValue                                                      (None)

void UVariantSet::GetVariantByName(const class FString& VariantName, class UVariant* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "GetVariantByName");

	Params::UVariantSet_GetVariantByName_Params Parms{};

	Parms.VariantName = VariantName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.VariantSet.GetVariant
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              VariantIndex                                                     (None)
// class UVariant*                    ReturnValue                                                      (None)

void UVariantSet::GetVariant(int32 VariantIndex, class UVariant* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "GetVariant");

	Params::UVariantSet_GetVariant_Params Parms{};

	Parms.VariantIndex = VariantIndex;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.VariantSet.GetThumbnail
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  ReturnValue                                                      (None)

void UVariantSet::GetThumbnail(class UTexture2D* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "GetThumbnail");

	Params::UVariantSet_GetThumbnail_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.VariantSet.GetParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelVariantSets*           ReturnValue                                                      (None)

void UVariantSet::GetParent(class ULevelVariantSets* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "GetParent");

	Params::UVariantSet_GetParent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.VariantSet.GetNumVariants
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UVariantSet::GetNumVariants(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "GetNumVariants");

	Params::UVariantSet_GetNumVariants_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VariantManagerContent.VariantSet.GetDisplayText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (None)

void UVariantSet::GetDisplayText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VariantSet", "GetDisplayText");

	Params::UVariantSet_GetDisplayText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


