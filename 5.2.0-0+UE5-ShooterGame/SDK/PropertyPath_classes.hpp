#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x150 - 0x28)
// Class PropertyPath.PropertyPathTestObject
class UPropertyPathTestObject : public UObject
{
public:
	bool                                         Bool;                                              // 0x28(0x1)(None)
	enum class EPropertyPathTestEnum             EnumOne;                                           // 0x29(0x1)(None)
	enum class EPropertyPathTestEnum             EnumTwo;                                           // 0x2A(0x1)(None)
	enum class EPropertyPathTestEnum             EnumThree;                                         // 0x2B(0x1)(None)
	enum class EPropertyPathTestEnum             EnumFour;                                          // 0x2C(0x1)(None)
	uint8                                        Pad_2DBB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Integer;                                           // 0x30(0x4)(None)
	uint8                                        Pad_2DBC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                String;                                            // 0x38(0x10)(None)
	float                                        Float;                                             // 0x48(0x4)(None)
	uint8                                        Pad_2DBD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPropertyPathTestStruct               Struct;                                            // 0x50(0x50)(ZeroConstructor)
	struct FPropertyPathTestStruct               StructRef;                                         // 0xA0(0x50)(ZeroConstructor)
	struct FPropertyPathTestStruct               StructConstRef;                                    // 0xF0(0x50)(ZeroConstructor)
	class UPropertyPathTestObject*               InnerObject;                                       // 0x140(0x8)(None)
	uint8                                        Pad_2DBF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPropertyPathTestObject* GetDefaultObj();

	void SetStructRef(const struct FPropertyPathTestStruct& InStruct);
	void SetStructConstRef(const struct FPropertyPathTestStruct& InStruct);
	void SetStruct(const struct FPropertyPathTestStruct& InStruct);
	void SetFloat(float InFloat);
	void GetStructRef(const struct FPropertyPathTestStruct& ReturnValue);
	void GetStructConstRef(const struct FPropertyPathTestStruct& ReturnValue);
	void GetStruct(const struct FPropertyPathTestStruct& ReturnValue);
	void GetFloat(float ReturnValue);
};

}


