#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementDataStorageCompatibilityInterface
class ITypedElementDataStorageCompatibilityInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementDataStorageCompatibilityInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementDataStorageInterface
class ITypedElementDataStorageInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementDataStorageInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementDataStorageUiInterface
class ITypedElementDataStorageUiInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementDataStorageUiInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementHandleLibrary
class UTypedElementHandleLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class UTypedElementHandleLibrary* GetDefaultObj();

	void Release(const struct FScriptTypedElementHandle& ElementHandle);
	void NotEqual(const struct FScriptTypedElementHandle& LHS, const struct FScriptTypedElementHandle& RHS, bool ReturnValue);
	void IsSet(const struct FScriptTypedElementHandle& ElementHandle, bool ReturnValue);
	void Equal(const struct FScriptTypedElementHandle& LHS, const struct FScriptTypedElementHandle& RHS, bool ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementListLibrary
class UTypedElementListLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class UTypedElementListLibrary* GetDefaultObj();

	void Shrink(const struct FScriptTypedElementListProxy& ElementList);
	void Reset(const struct FScriptTypedElementListProxy& ElementList);
	void Reserve(const struct FScriptTypedElementListProxy& ElementList, int32 Size);
	void Remove(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle, bool ReturnValue);
	void Num(const struct FScriptTypedElementListProxy& ElementList, int32 ReturnValue);
	void IsValidIndex(const struct FScriptTypedElementListProxy& ElementList, int32 Index, bool ReturnValue);
	void HasElementsOfType(const struct FScriptTypedElementListProxy& ElementList, class FName ElementTypeName, bool ReturnValue);
	void HasElements(const struct FScriptTypedElementListProxy& ElementList, class UClass* BaseInterfaceType, bool ReturnValue);
	void GetElementInterface(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle, class UClass* BaseInterfaceType, class UObject* ReturnValue);
	void GetElementHandles(const struct FScriptTypedElementListProxy& ElementList, class UClass* BaseInterfaceType, const TArray<struct FScriptTypedElementHandle>& ReturnValue);
	void GetElementHandleAt(const struct FScriptTypedElementListProxy& ElementList, int32 Index, const struct FScriptTypedElementHandle& ReturnValue);
	void Empty(const struct FScriptTypedElementListProxy& ElementList, int32 Slack);
	void CreateScriptElementList(class UTypedElementRegistry* Registry, const struct FScriptTypedElementListProxy& ReturnValue);
	void CountElementsOfType(const struct FScriptTypedElementListProxy& ElementList, class FName ElementTypeName, int32 ReturnValue);
	void CountElements(const struct FScriptTypedElementListProxy& ElementList, class UClass* BaseInterfaceType, int32 ReturnValue);
	void Contains(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle, bool ReturnValue);
	void Clone(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementListProxy& ReturnValue);
	void AppendList(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementListProxy& OtherElementList);
	void Append(const struct FScriptTypedElementListProxy& ElementList, const TArray<struct FScriptTypedElementHandle>& ElementHandles);
	void Add(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementHandle& ElementHandle, bool ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementCounterInterface
class ITypedElementCounterInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITypedElementCounterInterface* GetDefaultObj();

};

// 0x950 (0x978 - 0x28)
// Class TypedElementFramework.TypedElementRegistry
class UTypedElementRegistry : public UObject
{
public:
	uint8                                        Pad_2BA0[0x950];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTypedElementRegistry* GetDefaultObj();

	void GetInstance(class UTypedElementRegistry* ReturnValue);
	void GetElementInterface(const struct FScriptTypedElementHandle& InElementHandle, class UClass* InBaseInterfaceType, class UObject* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA
class ITestTypedElementInterfaceA : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITestTypedElementInterfaceA* GetDefaultObj();

	void SetDisplayName(const struct FScriptTypedElementHandle& InElementHandle, class FText InNewName, bool bNotify, bool ReturnValue);
	void GetDisplayName(const struct FScriptTypedElementHandle& InElementHandle, class FText ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceB
class ITestTypedElementInterfaceB : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITestTypedElementInterfaceB* GetDefaultObj();

	void MarkAsTested(const struct FScriptTypedElementHandle& InElementHandle, bool ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceC
class ITestTypedElementInterfaceC : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITestTypedElementInterfaceC* GetDefaultObj();

	void GetIsTested(const struct FScriptTypedElementHandle& InElementHandle, bool ReturnValue);
};

// 0x8 (0x30 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
class UTestTypedElementInterfaceA_ImplTyped : public UObject
{
public:
	uint8                                        Pad_2BAD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTestTypedElementInterfaceA_ImplTyped* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
class UTestTypedElementInterfaceA_ImplUntyped : public UObject
{
public:
	uint8                                        Pad_2BB0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTestTypedElementInterfaceA_ImplUntyped* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
class UTestTypedElementInterfaceBAndC_Typed : public UObject
{
public:
	uint8                                        Pad_2BB3[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTestTypedElementInterfaceBAndC_Typed* GetDefaultObj();

};

}


