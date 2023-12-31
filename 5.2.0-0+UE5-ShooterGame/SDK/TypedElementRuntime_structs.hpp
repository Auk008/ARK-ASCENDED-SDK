#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETypedElementChildInclusionMethod : uint8
{
	None                           = 0,
	Immediate                      = 1,
	Recursive                      = 2,
	ETypedElementChildInclusionMethod_MAX = 3,
};

enum class ETypedElementSelectionMethod : uint8
{
	Primary                        = 0,
	Secondary                      = 1,
	ETypedElementSelectionMethod_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x5 (0x5 - 0x0)
// ScriptStruct TypedElementRuntime.TypedElementSelectionOptions
struct FTypedElementSelectionOptions
{
public:
	bool                                         bAllowHidden;                                      // 0x0(0x1)(None)
	bool                                         bAllowGroups;                                      // 0x1(0x1)(None)
	bool                                         bAllowLegacyNotifications;                         // 0x2(0x1)(None)
	bool                                         bWarnIfLocked;                                     // 0x3(0x1)(None)
	enum class ETypedElementChildInclusionMethod ChildElementInclusionMethod;                       // 0x4(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct TypedElementRuntime.TypedElementSelectionSetState
struct FTypedElementSelectionSetState
{
public:
	TWeakObjectPtr<class UTypedElementSelectionSet> CreatedFromSelectionSet;                           // 0x0(0x8)(None)
	uint8                                        Pad_26D4[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct TypedElementRuntime.TypedElementIsSelectedOptions
struct FTypedElementIsSelectedOptions
{
public:
	bool                                         bAllowIndirect;                                    // 0x0(0x1)(None)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct TypedElementRuntime.TypedElementSelectionNormalizationOptions
struct FTypedElementSelectionNormalizationOptions
{
public:
	bool                                         bExpandGroups;                                     // 0x0(0x1)(None)
	bool                                         bFollowAttachment;                                 // 0x1(0x1)(None)
};

}


