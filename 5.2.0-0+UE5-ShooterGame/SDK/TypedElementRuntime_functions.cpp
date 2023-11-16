#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TypedElementRuntime.TypedElementSelectionSetLibrary
// (None)

class UClass* UTypedElementSelectionSetLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementSelectionSetLibrary");

	return Clss;
}


// TypedElementSelectionSetLibrary TypedElementRuntime.Default__TypedElementSelectionSetLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTypedElementSelectionSetLibrary* UTypedElementSelectionSetLibrary::GetDefaultObj()
{
	static class UTypedElementSelectionSetLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTypedElementSelectionSetLibrary*>(UTypedElementSelectionSetLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (None)
// struct FScriptTypedElementListProxyElementList                                                      (None)
// struct FTypedElementSelectionOptionsSelectionOptions                                                 (None)
// bool                               ReturnValue                                                      (None)

void UTypedElementSelectionSetLibrary::SetSelectionFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSetLibrary", "SetSelectionFromList");

	Params::UTypedElementSelectionSetLibrary_SetSelectionFromList_Params Parms{};

	Parms.SelectionSet = SelectionSet;
	Parms.ElementList = ElementList;
	Parms.SelectionOptions = SelectionOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (None)
// struct FScriptTypedElementListProxyElementList                                                      (None)
// struct FTypedElementSelectionOptionsSelectionOptions                                                 (None)
// bool                               ReturnValue                                                      (None)

void UTypedElementSelectionSetLibrary::SelectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSetLibrary", "SelectElementsFromList");

	Params::UTypedElementSelectionSetLibrary_SelectElementsFromList_Params Parms{};

	Parms.SelectionSet = SelectionSet;
	Parms.ElementList = ElementList;
	Parms.SelectionOptions = SelectionOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (None)
// struct FTypedElementSelectionNormalizationOptionsNormalizationOptions                                             (None)
// struct FScriptTypedElementListProxyReturnValue                                                      (None)

void UTypedElementSelectionSetLibrary::GetNormalizedSelection(class UTypedElementSelectionSet* SelectionSet, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions, const struct FScriptTypedElementListProxy& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSetLibrary", "GetNormalizedSelection");

	Params::UTypedElementSelectionSetLibrary_GetNormalizedSelection_Params Parms{};

	Parms.SelectionSet = SelectionSet;
	Parms.NormalizationOptions = NormalizationOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (None)
// struct FScriptTypedElementListProxyElementList                                                      (None)
// struct FTypedElementSelectionNormalizationOptionsNormalizationOptions                                             (None)
// struct FScriptTypedElementListProxyReturnValue                                                      (None)

void UTypedElementSelectionSetLibrary::GetNormalizedElementList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions, const struct FScriptTypedElementListProxy& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSetLibrary", "GetNormalizedElementList");

	Params::UTypedElementSelectionSetLibrary_GetNormalizedElementList_Params Parms{};

	Parms.SelectionSet = SelectionSet;
	Parms.ElementList = ElementList;
	Parms.NormalizationOptions = NormalizationOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (None)
// struct FScriptTypedElementListProxyElementList                                                      (None)
// struct FTypedElementSelectionOptionsSelectionOptions                                                 (None)
// bool                               ReturnValue                                                      (None)

void UTypedElementSelectionSetLibrary::DeselectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSetLibrary", "DeselectElementsFromList");

	Params::UTypedElementSelectionSetLibrary_DeselectElementsFromList_Params Parms{};

	Parms.SelectionSet = SelectionSet;
	Parms.ElementList = ElementList;
	Parms.SelectionOptions = SelectionOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TypedElementRuntime.TypedElementSelectionSet
// (None)

class UClass* UTypedElementSelectionSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementSelectionSet");

	return Clss;
}


// TypedElementSelectionSet TypedElementRuntime.Default__TypedElementSelectionSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UTypedElementSelectionSet* UTypedElementSelectionSet::GetDefaultObj()
{
	static class UTypedElementSelectionSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UTypedElementSelectionSet*>(UTypedElementSelectionSet::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementRuntime.TypedElementSelectionSet.SetSelection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FScriptTypedElementHandle>InElementHandles                                                 (None)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (None)
// bool                               ReturnValue                                                      (None)

void UTypedElementSelectionSet::SetSelection(const TArray<struct FScriptTypedElementHandle>& InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "SetSelection");

	Params::UTypedElementSelectionSet_SetSelection_Params Parms{};

	Parms.InElementHandles = InElementHandles;
	Parms.InSelectionOptions = InSelectionOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.SelectElements
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FScriptTypedElementHandle>InElementHandles                                                 (None)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (None)
// bool                               ReturnValue                                                      (None)

void UTypedElementSelectionSet::SelectElements(const TArray<struct FScriptTypedElementHandle>& InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "SelectElements");

	Params::UTypedElementSelectionSet_SelectElements_Params Parms{};

	Parms.InElementHandles = InElementHandles;
	Parms.InSelectionOptions = InSelectionOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.SelectElement
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (None)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (None)
// bool                               ReturnValue                                                      (None)

void UTypedElementSelectionSet::SelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "SelectElement");

	Params::UTypedElementSelectionSet_SelectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionOptions = InSelectionOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTypedElementSelectionSetStateInSelectionState                                                 (None)

void UTypedElementSelectionSet::RestoreSelectionState(const struct FTypedElementSelectionSetState& InSelectionState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "RestoreSelectionState");

	Params::UTypedElementSelectionSet_RestoreSelectionState_Params Parms{};

	Parms.InSelectionState = InSelectionState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (None)

void UTypedElementSelectionSet::OnPreChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "OnPreChangeDynamic__DelegateSignature");

	Params::UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Params Parms{};

	Parms.SelectionSet = SelectionSet;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (None)

void UTypedElementSelectionSet::OnChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "OnChangeDynamic__DelegateSignature");

	Params::UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Params Parms{};

	Parms.SelectionSet = SelectionSet;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                      InBaseInterfaceType                                              (None)
// TArray<struct FScriptTypedElementHandle>ReturnValue                                                      (None)

void UTypedElementSelectionSet::K2_GetSelectedElementHandles(class UClass* InBaseInterfaceType, const TArray<struct FScriptTypedElementHandle>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "K2_GetSelectedElementHandles");

	Params::UTypedElementSelectionSet_K2_GetSelectedElementHandles_Params Parms{};

	Parms.InBaseInterfaceType = InBaseInterfaceType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.IsElementSelected
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (None)
// struct FTypedElementIsSelectedOptionsInSelectionOptions                                               (None)
// bool                               ReturnValue                                                      (None)

void UTypedElementSelectionSet::IsElementSelected(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementIsSelectedOptions& InSelectionOptions, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "IsElementSelected");

	Params::UTypedElementSelectionSet_IsElementSelected_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionOptions = InSelectionOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                      InRequiredClass                                                  (None)
// bool                               ReturnValue                                                      (None)

void UTypedElementSelectionSet::HasSelectedObjects(class UClass* InRequiredClass, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "HasSelectedObjects");

	Params::UTypedElementSelectionSet_HasSelectedObjects_Params Parms{};

	Parms.InRequiredClass = InRequiredClass;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                      InBaseInterfaceType                                              (None)
// bool                               ReturnValue                                                      (None)

void UTypedElementSelectionSet::HasSelectedElements(class UClass* InBaseInterfaceType, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "HasSelectedElements");

	Params::UTypedElementSelectionSet_HasSelectedElements_Params Parms{};

	Parms.InBaseInterfaceType = InBaseInterfaceType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      InRequiredClass                                                  (ZeroConstructor)
// class UObject*                     ReturnValue                                                      (None)

void UTypedElementSelectionSet::GetTopSelectedObject(class UClass* InRequiredClass, class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetTopSelectedObject");

	Params::UTypedElementSelectionSet_GetTopSelectedObject_Params Parms{};

	Parms.InRequiredClass = InRequiredClass;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (None)
// enum class ETypedElementSelectionMethodInSelectionMethod                                                (None)
// struct FScriptTypedElementHandle   ReturnValue                                                      (None)

void UTypedElementSelectionSet::GetSelectionElement(const struct FScriptTypedElementHandle& InElementHandle, enum class ETypedElementSelectionMethod InSelectionMethod, const struct FScriptTypedElementHandle& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetSelectionElement");

	Params::UTypedElementSelectionSet_GetSelectionElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionMethod = InSelectionMethod;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                      InRequiredClass                                                  (ZeroConstructor)
// TArray<class UObject*>             ReturnValue                                                      (None)

void UTypedElementSelectionSet::GetSelectedObjects(class UClass* InRequiredClass, const TArray<class UObject*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetSelectedObjects");

	Params::UTypedElementSelectionSet_GetSelectedObjects_Params Parms{};

	Parms.InRequiredClass = InRequiredClass;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (None)

void UTypedElementSelectionSet::GetNumSelectedElements(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetNumSelectedElements");

	Params::UTypedElementSelectionSet_GetNumSelectedElements_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTypedElementSelectionSetStateReturnValue                                                      (None)

void UTypedElementSelectionSet::GetCurrentSelectionState(const struct FTypedElementSelectionSetState& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetCurrentSelectionState");

	Params::UTypedElementSelectionSet_GetCurrentSelectionState_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      InRequiredClass                                                  (ZeroConstructor)
// class UObject*                     ReturnValue                                                      (None)

void UTypedElementSelectionSet::GetBottomSelectedObject(class UClass* InRequiredClass, class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetBottomSelectedObject");

	Params::UTypedElementSelectionSet_GetBottomSelectedObject_Params Parms{};

	Parms.InRequiredClass = InRequiredClass;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.DeselectElements
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FScriptTypedElementHandle>InElementHandles                                                 (None)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (None)
// bool                               ReturnValue                                                      (None)

void UTypedElementSelectionSet::DeselectElements(const TArray<struct FScriptTypedElementHandle>& InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "DeselectElements");

	Params::UTypedElementSelectionSet_DeselectElements_Params Parms{};

	Parms.InElementHandles = InElementHandles;
	Parms.InSelectionOptions = InSelectionOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.DeselectElement
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (None)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (None)
// bool                               ReturnValue                                                      (None)

void UTypedElementSelectionSet::DeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "DeselectElement");

	Params::UTypedElementSelectionSet_DeselectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionOptions = InSelectionOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                      InRequiredClass                                                  (None)
// int32                              ReturnValue                                                      (None)

void UTypedElementSelectionSet::CountSelectedObjects(class UClass* InRequiredClass, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "CountSelectedObjects");

	Params::UTypedElementSelectionSet_CountSelectedObjects_Params Parms{};

	Parms.InRequiredClass = InRequiredClass;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                      InBaseInterfaceType                                              (None)
// int32                              ReturnValue                                                      (None)

void UTypedElementSelectionSet::CountSelectedElements(class UClass* InBaseInterfaceType, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "CountSelectedElements");

	Params::UTypedElementSelectionSet_CountSelectedElements_Params Parms{};

	Parms.InBaseInterfaceType = InBaseInterfaceType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (None)
// bool                               ReturnValue                                                      (None)

void UTypedElementSelectionSet::ClearSelection(const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "ClearSelection");

	Params::UTypedElementSelectionSet_ClearSelection_Params Parms{};

	Parms.InSelectionOptions = InSelectionOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.CanSelectElement
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (None)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (None)
// bool                               ReturnValue                                                      (None)

void UTypedElementSelectionSet::CanSelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "CanSelectElement");

	Params::UTypedElementSelectionSet_CanSelectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionOptions = InSelectionOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (None)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (None)
// bool                               ReturnValue                                                      (None)

void UTypedElementSelectionSet::CanDeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "CanDeselectElement");

	Params::UTypedElementSelectionSet_CanDeselectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionOptions = InSelectionOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (None)
// bool                               ReturnValue                                                      (None)

void UTypedElementSelectionSet::AllowSelectionModifiers(const struct FScriptTypedElementHandle& InElementHandle, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "AllowSelectionModifiers");

	Params::UTypedElementSelectionSet_AllowSelectionModifiers_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TypedElementRuntime.TypedElementAssetDataInterface
// (None)

class UClass* ITypedElementAssetDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementAssetDataInterface");

	return Clss;
}


// TypedElementAssetDataInterface TypedElementRuntime.Default__TypedElementAssetDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ITypedElementAssetDataInterface* ITypedElementAssetDataInterface::GetDefaultObj()
{
	static class ITypedElementAssetDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ITypedElementAssetDataInterface*>(ITypedElementAssetDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (None)
// struct FAssetData                  ReturnValue                                                      (None)

void ITypedElementAssetDataInterface::GetAssetData(const struct FScriptTypedElementHandle& InElementHandle, const struct FAssetData& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementAssetDataInterface", "GetAssetData");

	Params::ITypedElementAssetDataInterface_GetAssetData_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (None)
// TArray<struct FAssetData>          ReturnValue                                                      (None)

void ITypedElementAssetDataInterface::GetAllReferencedAssetDatas(const struct FScriptTypedElementHandle& InElementHandle, const TArray<struct FAssetData>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementAssetDataInterface", "GetAllReferencedAssetDatas");

	Params::ITypedElementAssetDataInterface_GetAllReferencedAssetDatas_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TypedElementRuntime.TypedElementHierarchyInterface
// (None)

class UClass* ITypedElementHierarchyInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementHierarchyInterface");

	return Clss;
}


// TypedElementHierarchyInterface TypedElementRuntime.Default__TypedElementHierarchyInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ITypedElementHierarchyInterface* ITypedElementHierarchyInterface::GetDefaultObj()
{
	static class ITypedElementHierarchyInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ITypedElementHierarchyInterface*>(ITypedElementHierarchyInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (None)
// bool                               bAllowCreate                                                     (None)
// struct FScriptTypedElementHandle   ReturnValue                                                      (None)

void ITypedElementHierarchyInterface::GetParentElement(const struct FScriptTypedElementHandle& InElementHandle, bool bAllowCreate, const struct FScriptTypedElementHandle& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementHierarchyInterface", "GetParentElement");

	Params::ITypedElementHierarchyInterface_GetParentElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.bAllowCreate = bAllowCreate;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (None)
// TArray<struct FScriptTypedElementHandle>OutElementHandles                                                (None)
// bool                               bAllowCreate                                                     (None)

void ITypedElementHierarchyInterface::GetChildElements(const struct FScriptTypedElementHandle& InElementHandle, const TArray<struct FScriptTypedElementHandle>& OutElementHandles, bool bAllowCreate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementHierarchyInterface", "GetChildElements");

	Params::ITypedElementHierarchyInterface_GetChildElements_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.OutElementHandles = OutElementHandles;
	Parms.bAllowCreate = bAllowCreate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TypedElementRuntime.TypedElementObjectInterface
// (None)

class UClass* ITypedElementObjectInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementObjectInterface");

	return Clss;
}


// TypedElementObjectInterface TypedElementRuntime.Default__TypedElementObjectInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ITypedElementObjectInterface* ITypedElementObjectInterface::GetDefaultObj()
{
	static class ITypedElementObjectInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ITypedElementObjectInterface*>(ITypedElementObjectInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementRuntime.TypedElementObjectInterface.GetObjectClass
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (None)
// class UClass*                      ReturnValue                                                      (None)

void ITypedElementObjectInterface::GetObjectClass(const struct FScriptTypedElementHandle& InElementHandle, class UClass* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementObjectInterface", "GetObjectClass");

	Params::ITypedElementObjectInterface_GetObjectClass_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementObjectInterface.GetObject
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (None)
// class UObject*                     ReturnValue                                                      (None)

void ITypedElementObjectInterface::GetObject(const struct FScriptTypedElementHandle& InElementHandle, class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementObjectInterface", "GetObject");

	Params::ITypedElementObjectInterface_GetObject_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TypedElementRuntime.TypedElementSelectionInterface
// (None)

class UClass* ITypedElementSelectionInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementSelectionInterface");

	return Clss;
}


// TypedElementSelectionInterface TypedElementRuntime.Default__TypedElementSelectionInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ITypedElementSelectionInterface* ITypedElementSelectionInterface::GetDefaultObj()
{
	static class ITypedElementSelectionInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ITypedElementSelectionInterface*>(ITypedElementSelectionInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementRuntime.TypedElementSelectionInterface.SelectElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (None)
// struct FScriptTypedElementListProxyInSelectionSet                                                   (None)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (None)
// bool                               ReturnValue                                                      (None)

void ITypedElementSelectionInterface::SelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "SelectElement");

	Params::ITypedElementSelectionInterface_SelectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionSet = InSelectionSet;
	Parms.InSelectionOptions = InSelectionOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (None)
// struct FScriptTypedElementListProxyInSelectionSet                                                   (None)
// struct FTypedElementIsSelectedOptionsInSelectionOptions                                               (None)
// bool                               ReturnValue                                                      (None)

void ITypedElementSelectionInterface::IsElementSelected(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementIsSelectedOptions& InSelectionOptions, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "IsElementSelected");

	Params::ITypedElementSelectionInterface_IsElementSelected_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionSet = InSelectionSet;
	Parms.InSelectionOptions = InSelectionOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (None)
// struct FScriptTypedElementListProxyInCurrentSelection                                               (None)
// enum class ETypedElementSelectionMethodInSelectionMethod                                                (None)
// struct FScriptTypedElementHandle   ReturnValue                                                      (None)

void ITypedElementSelectionInterface::GetSelectionElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InCurrentSelection, enum class ETypedElementSelectionMethod InSelectionMethod, const struct FScriptTypedElementHandle& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "GetSelectionElement");

	Params::ITypedElementSelectionInterface_GetSelectionElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InCurrentSelection = InCurrentSelection;
	Parms.InSelectionMethod = InSelectionMethod;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.DeselectElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (None)
// struct FScriptTypedElementListProxyInSelectionSet                                                   (None)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (None)
// bool                               ReturnValue                                                      (None)

void ITypedElementSelectionInterface::DeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "DeselectElement");

	Params::ITypedElementSelectionInterface_DeselectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionSet = InSelectionSet;
	Parms.InSelectionOptions = InSelectionOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (None)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (None)
// bool                               ReturnValue                                                      (None)

void ITypedElementSelectionInterface::CanSelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "CanSelectElement");

	Params::ITypedElementSelectionInterface_CanSelectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionOptions = InSelectionOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (None)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (None)
// bool                               ReturnValue                                                      (None)

void ITypedElementSelectionInterface::CanDeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "CanDeselectElement");

	Params::ITypedElementSelectionInterface_CanDeselectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionOptions = InSelectionOptions;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (None)
// struct FScriptTypedElementListProxyInSelectionSet                                                   (None)
// bool                               ReturnValue                                                      (None)

void ITypedElementSelectionInterface::AllowSelectionModifiers(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "AllowSelectionModifiers");

	Params::ITypedElementSelectionInterface_AllowSelectionModifiers_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionSet = InSelectionSet;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


