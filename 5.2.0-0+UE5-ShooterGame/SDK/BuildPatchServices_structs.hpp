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

// 0x20 (0x20 - 0x0)
// ScriptStruct BuildPatchServices.CustomFieldData
struct FCustomFieldData
{
public:
	class FString                                Key;                                               // 0x0(0x10)(AdvancedDisplay, BlueprintAuthorityOnly, UObjectWrapper)
	class FString                                Value;                                             // 0x10(0x10)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct BuildPatchServices.SHAHashData
struct FSHAHashData
{
public:
	uint8                                        Hash[0x14];                                        // 0x0(0x14)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct BuildPatchServices.ChunkInfoData
struct FChunkInfoData
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(None)
	uint64                                       Hash;                                              // 0x10(0x8)(None)
	struct FSHAHashData                          ShaHash;                                           // 0x18(0x14)(None)
	uint8                                        Pad_2916[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        FileSize;                                          // 0x30(0x8)(None)
	uint8                                        GroupNumber;                                       // 0x38(0x1)(None)
	uint8                                        Pad_2917[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct BuildPatchServices.ChunkPartData
struct FChunkPartData
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(None)
	uint32                                       Offset;                                            // 0x10(0x4)(None)
	uint32                                       Size;                                              // 0x14(0x4)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct BuildPatchServices.FileManifestData
struct FFileManifestData
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSHAHashData                          FileHash;                                          // 0x10(0x14)(None)
	uint8                                        Pad_291A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FChunkPartData>                FileChunkParts;                                    // 0x28(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class FString>                        InstallTags;                                       // 0x38(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper)
	bool                                         bIsUnixExecutable;                                 // 0x48(0x1)(None)
	uint8                                        Pad_291B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SymlinkTarget;                                     // 0x50(0x10)(None)
	bool                                         bIsReadOnly;                                       // 0x60(0x1)(None)
	bool                                         bIsCompressed;                                     // 0x61(0x1)(None)
	uint8                                        Pad_291C[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


