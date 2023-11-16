#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPropertyPathTestEnum : uint8
{
	One                            = 0,
	Two                            = 1,
	Three                          = 2,
	Four                           = 3,
	EPropertyPathTestEnum_MAX      = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct PropertyPath.PropertyPathSegment
struct FPropertyPathSegment
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(None)
	int32                                        ArrayIndex;                                        // 0x8(0x4)(None)
	uint8                                        Pad_2DC1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStruct*                               Struct;                                            // 0x10(0x8)(None)
	uint8                                        Pad_2DC2[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct PropertyPath.CachedPropertyPath
struct FCachedPropertyPath
{
public:
	TArray<struct FPropertyPathSegment>          Segments;                                          // 0x0(0x10)(ZeroConstructor)
	uint8                                        Pad_2DC3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFunction*                             CachedFunction;                                    // 0x18(0x8)(None)
	uint8                                        Pad_2DC4[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct PropertyPath.PropertyPathTestInnerStruct
struct FPropertyPathTestInnerStruct
{
public:
	float                                        Float;                                             // 0x0(0x4)(None)
	bool                                         Bool;                                              // 0x4(0x1)(None)
	enum class EPropertyPathTestEnum             EnumOne;                                           // 0x5(0x1)(None)
	enum class EPropertyPathTestEnum             EnumTwo;                                           // 0x6(0x1)(None)
	enum class EPropertyPathTestEnum             EnumThree;                                         // 0x7(0x1)(None)
	enum class EPropertyPathTestEnum             EnumFour;                                          // 0x8(0x1)(None)
	uint8                                        Pad_2DC6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Integer;                                           // 0xC(0x4)(None)
	class FString                                String;                                            // 0x10(0x10)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct PropertyPath.PropertyPathTestStruct
struct FPropertyPathTestStruct
{
public:
	bool                                         Bool;                                              // 0x0(0x1)(None)
	uint8                                        Pad_2DC7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Integer;                                           // 0x4(0x4)(None)
	enum class EPropertyPathTestEnum             EnumOne;                                           // 0x8(0x1)(None)
	enum class EPropertyPathTestEnum             EnumTwo;                                           // 0x9(0x1)(None)
	enum class EPropertyPathTestEnum             EnumThree;                                         // 0xA(0x1)(None)
	enum class EPropertyPathTestEnum             EnumFour;                                          // 0xB(0x1)(None)
	uint8                                        Pad_2DC9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                String;                                            // 0x10(0x10)(AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Float;                                             // 0x20(0x4)(None)
	uint8                                        Pad_2DCA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPropertyPathTestInnerStruct          InnerStruct;                                       // 0x28(0x20)(None)
	class UPropertyPathTestObject*               InnerObject;                                       // 0x48(0x8)(None)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct PropertyPath.PropertyPathTestBed
struct FPropertyPathTestBed
{
public:
	class UPropertyPathTestObject*               Object;                                            // 0x0(0x8)(ZeroConstructor)
	class UPropertyPathTestObject*               ModifiedObject;                                    // 0x8(0x8)(ZeroConstructor)
	struct FPropertyPathTestStruct               ModifiedStruct;                                    // 0x10(0x50)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, HasGetValueTypeHash)
	struct FPropertyPathTestStruct               DefaultStruct;                                     // 0x60(0x50)(None)
};

}


