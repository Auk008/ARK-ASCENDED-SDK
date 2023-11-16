#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct Serialization.StructSerializerNumericTestStruct
struct FStructSerializerNumericTestStruct
{
public:
	int8                                         Int8;                                              // 0x0(0x1)(None)
	uint8                                        Pad_31F6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int16                                        Int16;                                             // 0x2(0x2)(None)
	int32                                        Int32;                                             // 0x4(0x4)(None)
	int64                                        Int64;                                             // 0x8(0x8)(None)
	uint8                                        Uint8;                                             // 0x10(0x1)(None)
	uint8                                        Pad_31F7[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       Uint16;                                            // 0x12(0x2)(None)
	uint32                                       Uint32;                                            // 0x14(0x4)(None)
	uint64                                       UInt64;                                            // 0x18(0x8)(None)
	float                                        Float;                                             // 0x20(0x4)(None)
	uint8                                        Pad_31F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Double;                                            // 0x28(0x8)(None)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct Serialization.StructSerializerBooleanTestStruct
struct FStructSerializerBooleanTestStruct
{
public:
	bool                                         BoolFalse;                                         // 0x0(0x1)(None)
	bool                                         BoolTrue;                                          // 0x1(0x1)(None)
	uint8                                        Bitfield0 : 1;                                     // Mask: 0x1, PropSize: 0x10x2(0x1)(None)
	uint8                                        Bitfield1 : 1;                                     // Mask: 0x2, PropSize: 0x10x2(0x1)(None)
	uint8                                        Bitfield2Set : 1;                                  // Mask: 0x4, PropSize: 0x10x2(0x1)(None)
	uint8                                        Bitfield3 : 1;                                     // Mask: 0x8, PropSize: 0x10x2(0x1)(None)
	uint8                                        Bitfield4Set : 1;                                  // Mask: 0x10, PropSize: 0x10x2(0x1)(None)
	uint8                                        Bitfield5Set : 1;                                  // Mask: 0x20, PropSize: 0x10x2(0x1)(None)
	uint8                                        Bitfield6 : 1;                                     // Mask: 0x40, PropSize: 0x10x2(0x1)(None)
	uint8                                        Bitfield7Set : 1;                                  // Mask: 0x80, PropSize: 0x10x2(0x1)(None)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Serialization.StructSerializerObjectTestStruct
struct FStructSerializerObjectTestStruct
{
public:
	class UClass*                                RawClass;                                          // 0x0(0x8)(ZeroConstructor)
	class UClass*                                WrappedClass;                                      // 0x8(0x8)(ZeroConstructor)
	class UClass*                                SubClass;                                          // 0x10(0x8)(ZeroConstructor)
	TSoftClassPtr<class UMetaData>               SoftClass;                                         // 0x18(0x30)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               RawObject;                                         // 0x48(0x8)(ZeroConstructor)
	class UObject*                               WrappedObject;                                     // 0x50(0x8)(ZeroConstructor)
	TWeakObjectPtr<class UMetaData>              WeakObject;                                        // 0x58(0x8)(ZeroConstructor)
	TSoftObjectPtr<class UMetaData>              SoftObject;                                        // 0x60(0x30)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                        ClassPath;                                         // 0x90(0x20)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       ObjectPath;                                        // 0xB0(0x20)(None)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
struct FStructSerializerBuiltinTestStruct
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(None)
	class FName                                  Name;                                              // 0x10(0x8)(None)
	class FString                                String;                                            // 0x18(0x10)(ContainsInstancedReference, SimpleDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x28(0x18)(None)
	struct FVector                               Vector;                                            // 0x40(0x18)(None)
	uint8                                        Pad_31F9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              Vector4;                                           // 0x60(0x20)(None)
	struct FRotator                              Rotator;                                           // 0x80(0x18)(None)
	uint8                                        Pad_31FA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Quat;                                              // 0xA0(0x20)(None)
	struct FColor                                Color;                                             // 0xC0(0x4)(None)
	uint8                                        Pad_31FB[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x360 (0x360 - 0x0)
// ScriptStruct Serialization.StructSerializerLWCTypesTest
struct FStructSerializerLWCTypesTest
{
public:
	struct FVector                               Vector;                                            // 0x0(0x18)(None)
	struct FVector2D                             Vector2D;                                          // 0x18(0x10)(None)
	uint8                                        Pad_31FC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              Vector4;                                           // 0x30(0x20)(None)
	struct FMatrix                               Matrix;                                            // 0x50(0x80)(None)
	struct FPlane                                Plane;                                             // 0xD0(0x20)(None)
	struct FQuat                                 Quat;                                              // 0xF0(0x20)(None)
	struct FRotator                              Rotator;                                           // 0x110(0x18)(None)
	uint8                                        Pad_31FD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x130(0x60)(None)
	struct FBox                                  Box;                                               // 0x190(0x38)(None)
	struct FBox2D                                Box2D;                                             // 0x1C8(0x28)(None)
	struct FBoxSphereBounds                      BoxSphereBounds;                                   // 0x1F0(0x38)(None)
	struct FOrientedBox                          OrientedBox;                                       // 0x228(0x78)(None)
	float                                        Float;                                             // 0x2A0(0x4)(None)
	uint8                                        Pad_31FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Double;                                            // 0x2A8(0x8)(None)
	TArray<struct FVector>                       VectorArray;                                       // 0x2B0(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FVector>          StrToVec;                                          // 0x2C0(0x50)(BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TSet<struct FVector>                         VectorSet;                                         // 0x310(0x50)(None)
};

// 0x3C (0x3C - 0x0)
// ScriptStruct Serialization.OrientedBoxFloat
struct FOrientedBoxFloat
{
public:
	struct FVector3f                             Center;                                            // 0x0(0xC)(None)
	struct FVector3f                             AxisX;                                             // 0xC(0xC)(None)
	struct FVector3f                             AxisY;                                             // 0x18(0xC)(None)
	struct FVector3f                             AxisZ;                                             // 0x24(0xC)(None)
	float                                        ExtentX;                                           // 0x30(0x4)(None)
	float                                        ExtentY;                                           // 0x34(0x4)(None)
	float                                        ExtentZ;                                           // 0x38(0x4)(None)
};

// 0x220 (0x220 - 0x0)
// ScriptStruct Serialization.StructSerializerNonLWCTypesTest
struct FStructSerializerNonLWCTypesTest
{
public:
	struct FVector3f                             Vector;                                            // 0x0(0xC)(None)
	struct FVector2f                             Vector2D;                                          // 0xC(0x8)(None)
	uint8                                        Pad_31FF[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4f                             Vector4;                                           // 0x20(0x10)(None)
	struct FMatrix44f                            Matrix;                                            // 0x30(0x40)(None)
	struct FPlane4f                              Plane;                                             // 0x70(0x10)(None)
	struct FQuat4f                               Quat;                                              // 0x80(0x10)(None)
	struct FRotator3f                            Rotator;                                           // 0x90(0xC)(None)
	uint8                                        Pad_3200[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform3f                          Transform;                                         // 0xA0(0x30)(None)
	struct FBox3f                                Box;                                               // 0xD0(0x1C)(None)
	struct FBox2f                                Box2D;                                             // 0xEC(0x14)(None)
	struct FBoxSphereBounds3f                    BoxSphereBounds;                                   // 0x100(0x1C)(None)
	struct FOrientedBoxFloat                     OrientedBox;                                       // 0x11C(0x3C)(None)
	float                                        Float;                                             // 0x158(0x4)(None)
	uint8                                        Pad_3201[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Double;                                            // 0x160(0x8)(None)
	TArray<struct FVector3f>                     VectorArray;                                       // 0x168(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FVector3f>        StrToVec;                                          // 0x178(0x50)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TSet<struct FVector3f>                       VectorSet;                                         // 0x1C8(0x50)(None)
	uint8                                        Pad_3202[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Serialization.StructSerializerByteArray
struct FStructSerializerByteArray
{
public:
	int32                                        Dummy1;                                            // 0x0(0x4)(None)
	uint8                                        Pad_3203[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                ByteArray;                                         // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        Dummy2;                                            // 0x18(0x4)(None)
	uint8                                        Pad_3204[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int8>                                 Int8Array;                                         // 0x20(0x10)(None)
	int32                                        Dummy3;                                            // 0x30(0x4)(None)
	uint8                                        Pad_3205[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Serialization.StructSerializerArrayTestStruct
struct FStructSerializerArrayTestStruct
{
public:
	TArray<int32>                                Int32Array;                                        // 0x0(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<uint8>                                ByteArray;                                         // 0x10(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        StaticSingleElement;                               // 0x20(0x4)(None)
	int32                                        StaticInt32Array[0x3];                             // 0x24(0xC)(None)
	float                                        StaticFloatArray[0x3];                             // 0x30(0xC)(None)
	uint8                                        Pad_3206[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       VectorArray;                                       // 0x40(0x10)(AutoWeak, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FStructSerializerBuiltinTestStruct> StructArray;                                       // 0x50(0x10)(None)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct Serialization.StructSerializerMapTestStruct
struct FStructSerializerMapTestStruct
{
public:
	TMap<int32, class FString>                   IntToStr;                                          // 0x0(0x50)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           StrToStr;                                          // 0x50(0x50)(Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FVector>          StrToVec;                                          // 0xA0(0x50)(AutoWeak, ContainsInstancedReference, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FStructSerializerBuiltinTestStruct> StrToStruct;                                       // 0xF0(0x50)(None)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct Serialization.StructSerializerSetTestStruct
struct FStructSerializerSetTestStruct
{
public:
	TSet<class FString>                          StrSet;                                            // 0x0(0x50)(ContainsInstancedReference, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TSet<int32>                                  IntSet;                                            // 0x50(0x50)(AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TSet<class FName>                            NameSet;                                           // 0xA0(0x50)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TSet<struct FStructSerializerBuiltinTestStruct> StructSet;                                         // 0xF0(0x50)(None)
};

// 0x820 (0x820 - 0x0)
// ScriptStruct Serialization.StructSerializerTestStruct
struct FStructSerializerTestStruct
{
public:
	struct FStructSerializerNumericTestStruct    Numerics;                                          // 0x0(0x30)(None)
	struct FStructSerializerBooleanTestStruct    Booleans;                                          // 0x30(0x3)(None)
	uint8                                        Pad_3207[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructSerializerObjectTestStruct     Objects;                                           // 0x38(0xD0)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3208[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructSerializerBuiltinTestStruct    Builtins;                                          // 0x110(0xD0)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStructSerializerArrayTestStruct      Arrays;                                            // 0x1E0(0x60)(BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStructSerializerMapTestStruct        Maps;                                              // 0x240(0x140)(ContainsInstancedReference, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStructSerializerSetTestStruct        Sets;                                              // 0x380(0x140)(AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStructSerializerLWCTypesTest         LWCTypes;                                          // 0x4C0(0x360)(None)
};

}


