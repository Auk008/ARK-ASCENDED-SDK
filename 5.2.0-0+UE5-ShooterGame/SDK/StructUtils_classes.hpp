#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class StructUtils.PropertyBagMissingObject
class UPropertyBagMissingObject : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPropertyBagMissingObject* GetDefaultObj();

};

// 0x18 (0xD8 - 0xC0)
// Class StructUtils.PropertyBag
class UPropertyBag : public UScriptStruct
{
public:
	TArray<struct FPropertyBagPropertyDesc>      PropertyDescs;                                     // 0xC0(0x10)(None)
	uint8                                        Pad_6B0[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPropertyBag* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class StructUtils.StructUtilsFunctionLibrary
class UStructUtilsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UStructUtilsFunctionLibrary* GetDefaultObj();

	void SetInstancedStructValue(const struct FInstancedStruct& InstancedStruct, int32 Value);
	void Reset(const struct FInstancedStruct& InstancedStruct, class UScriptStruct* StructType);
	void NotEqual_InstancedStruct(const struct FInstancedStruct& A, const struct FInstancedStruct& B, bool ReturnValue);
	void MakeInstancedStruct(int32 Value, const struct FInstancedStruct& ReturnValue);
	void IsValid_InstancedStruct(const struct FInstancedStruct& InstancedStruct, bool ReturnValue);
	void IsInstancedStructValid(const struct FInstancedStruct& InstancedStruct, enum class EStructUtilsResult ReturnValue);
	void GetInstancedStructValue(enum class EStructUtilsResult ExecResult, const struct FInstancedStruct& InstancedStruct, int32 Value);
	void EqualEqual_InstancedStruct(const struct FInstancedStruct& A, const struct FInstancedStruct& B, bool ReturnValue);
};

}


