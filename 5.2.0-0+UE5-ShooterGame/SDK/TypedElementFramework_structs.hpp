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

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.ScriptTypedElementHandle
struct FScriptTypedElementHandle
{
public:
	uint8                                        Pad_2BB4[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementDataStorageColumn
struct FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_2BB5[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementDataStorageTag
struct FTypedElementDataStorageTag
{
public:
	uint8                                        Pad_2BB6[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementWidgetConstructor
struct FTypedElementWidgetConstructor
{
public:
	uint8                                        Pad_2BB7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF (0x10 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementLabelColumn
struct FTypedElementLabelColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_2BB8[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x7 (0x8 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementLabelHashColumn
struct FTypedElementLabelHashColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_2BB9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct TypedElementFramework.ScriptTypedElementListProxy
struct FScriptTypedElementListProxy
{
public:
	uint8                                        Pad_2BBA[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x1 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementSyncBackToWorldTag
struct FTypedElementSyncBackToWorldTag : public FTypedElementDataStorageTag
{
public:
};

// 0xF (0x10 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementPackagePathColumn
struct FTypedElementPackagePathColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_2BBC[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB (0xC - 0x1)
// ScriptStruct TypedElementFramework.TypedElementPackageLoadedPathColumn
struct FTypedElementPackageLoadedPathColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_2BBD[0xB];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF (0x10 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementSlateWidgetReferenceColumn
struct FTypedElementSlateWidgetReferenceColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_2BBE[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x1 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementSlateWidgetReferenceDeletesRowTag
struct FTypedElementSlateWidgetReferenceDeletesRowTag : public FTypedElementDataStorageTag
{
public:
};

// 0x5F (0x60 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementLocalTransformColumn
struct FTypedElementLocalTransformColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_2BBF[0x5F];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x4 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementU32IntValueCacheColumn
struct FTypedElementU32IntValueCacheColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_2BC0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x4 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementI32IntValueCacheColumn
struct FTypedElementI32IntValueCacheColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_2BC1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x4 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementFloatValueCacheColumn
struct FTypedElementFloatValueCacheColumn : public FTypedElementDataStorageColumn
{
public:
	uint8                                        Pad_2BC2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


