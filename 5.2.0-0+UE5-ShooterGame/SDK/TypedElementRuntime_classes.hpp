#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementSelectionSetLibrary
class UTypedElementSelectionSetLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class UTypedElementSelectionSetLibrary* GetDefaultObj();

	void SetSelectionFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions, bool ReturnValue);
	void SelectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions, bool ReturnValue);
	void GetNormalizedSelection(class UTypedElementSelectionSet* SelectionSet, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions, const struct FScriptTypedElementListProxy& ReturnValue);
	void GetNormalizedElementList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions, const struct FScriptTypedElementListProxy& ReturnValue);
	void DeselectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions, bool ReturnValue);
};

// 0x870 (0x898 - 0x28)
// Class TypedElementRuntime.TypedElementSelectionSet
class UTypedElementSelectionSet : public UObject
{
public:
	uint8                                        Pad_269A[0x800];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPreSelectionChange;                              // 0x828(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnSelectionChange;                                 // 0x838(0x10)(None)
	uint8                                        Pad_269B[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTypedElementSelectionSet* GetDefaultObj();

	void SetSelection(const TArray<struct FScriptTypedElementHandle>& InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue);
	void SelectElements(const TArray<struct FScriptTypedElementHandle>& InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue);
	void SelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue);
	void RestoreSelectionState(const struct FTypedElementSelectionSetState& InSelectionState);
	void OnPreChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet);
	void OnChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet);
	void K2_GetSelectedElementHandles(class UClass* InBaseInterfaceType, const TArray<struct FScriptTypedElementHandle>& ReturnValue);
	void IsElementSelected(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementIsSelectedOptions& InSelectionOptions, bool ReturnValue);
	void HasSelectedObjects(class UClass* InRequiredClass, bool ReturnValue);
	void HasSelectedElements(class UClass* InBaseInterfaceType, bool ReturnValue);
	void GetTopSelectedObject(class UClass* InRequiredClass, class UObject* ReturnValue);
	void GetSelectionElement(const struct FScriptTypedElementHandle& InElementHandle, enum class ETypedElementSelectionMethod InSelectionMethod, const struct FScriptTypedElementHandle& ReturnValue);
	void GetSelectedObjects(class UClass* InRequiredClass, const TArray<class UObject*>& ReturnValue);
	void GetNumSelectedElements(int32 ReturnValue);
	void GetCurrentSelectionState(const struct FTypedElementSelectionSetState& ReturnValue);
	void GetBottomSelectedObject(class UClass* InRequiredClass, class UObject* ReturnValue);
	void DeselectElements(const TArray<struct FScriptTypedElementHandle>& InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue);
	void DeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue);
	void CountSelectedObjects(class UClass* InRequiredClass, int32 ReturnValue);
	void CountSelectedElements(class UClass* InBaseInterfaceType, int32 ReturnValue);
	void ClearSelection(const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue);
	void CanSelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue);
	void CanDeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue);
	void AllowSelectionModifiers(const struct FScriptTypedElementHandle& InElementHandle, bool ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementAssetDataInterface
class ITypedElementAssetDataInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementAssetDataInterface* GetDefaultObj();

	void GetAssetData(const struct FScriptTypedElementHandle& InElementHandle, const struct FAssetData& ReturnValue);
	void GetAllReferencedAssetDatas(const struct FScriptTypedElementHandle& InElementHandle, const TArray<struct FAssetData>& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementHierarchyInterface
class ITypedElementHierarchyInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementHierarchyInterface* GetDefaultObj();

	void GetParentElement(const struct FScriptTypedElementHandle& InElementHandle, bool bAllowCreate, const struct FScriptTypedElementHandle& ReturnValue);
	void GetChildElements(const struct FScriptTypedElementHandle& InElementHandle, const TArray<struct FScriptTypedElementHandle>& OutElementHandles, bool bAllowCreate);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementObjectInterface
class ITypedElementObjectInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementObjectInterface* GetDefaultObj();

	void GetObjectClass(const struct FScriptTypedElementHandle& InElementHandle, class UClass* ReturnValue);
	void GetObject(const struct FScriptTypedElementHandle& InElementHandle, class UObject* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementSelectionInterface
class ITypedElementSelectionInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementSelectionInterface* GetDefaultObj();

	void SelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue);
	void IsElementSelected(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementIsSelectedOptions& InSelectionOptions, bool ReturnValue);
	void GetSelectionElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InCurrentSelection, enum class ETypedElementSelectionMethod InSelectionMethod, const struct FScriptTypedElementHandle& ReturnValue);
	void DeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue);
	void CanSelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue);
	void CanDeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions, bool ReturnValue);
	void AllowSelectionModifiers(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, bool ReturnValue);
};

}


