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

// 0x28 (0x28 - 0x0)
// ScriptStruct ConsoleVariablesEditorRuntime.ConsoleVariablesEditorAssetSaveData
struct FConsoleVariablesEditorAssetSaveData
{
public:
	class FString                                CommandName;                                       // 0x0(0x10)(AdvancedDisplay, Protected, BlueprintAuthorityOnly, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CommandValueAsString;                              // 0x10(0x10)(None)
	enum class ECheckBoxState                    CheckedState;                                      // 0x20(0x1)(None)
	uint8                                        Pad_1985[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


