#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGameplayDebuggerOverrideMode : uint8
{
	Enable                         = 0,
	Disable                        = 1,
	UseDefault                     = 2,
	EGameplayDebuggerOverrideMode_MAX = 3,
};

enum class EGameplayDebuggerShape : uint8
{
	Invalid                        = 0,
	Point                          = 1,
	Segment                        = 2,
	Box                            = 3,
	Cone                           = 4,
	Cylinder                       = 5,
	Circle                         = 6,
	Capsule                        = 7,
	Polygon                        = 8,
	Arrow                          = 9,
	EGameplayDebuggerShape_MAX     = 10,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerDataPackHeader
struct FGameplayDebuggerDataPackHeader
{
public:
	int16                                        DataVersion;                                       // 0x0(0x2)(None)
	int16                                        SyncCounter;                                       // 0x2(0x2)(None)
	int32                                        DataSize;                                          // 0x4(0x4)(None)
	int32                                        DataOffset;                                        // 0x8(0x4)(None)
	uint8                                        bIsCompressed : 1;                                 // Mask: 0x1, PropSize: 0x10xC(0x1)(None)
	uint8                                        Pad_2FCE[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerDataPackRPCParams
struct FGameplayDebuggerDataPackRPCParams
{
public:
	class FName                                  CategoryName;                                      // 0x0(0x8)(None)
	int32                                        DataPackIdx;                                       // 0x8(0x4)(None)
	struct FGameplayDebuggerDataPackHeader       Header;                                            // 0xC(0x10)(None)
	uint8                                        Pad_2FCF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                Data;                                              // 0x20(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerShape
struct FGameplayDebuggerShape
{
public:
	TArray<struct FVector>                       ShapeData;                                         // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                Description;                                       // 0x10(0x10)(None)
	struct FColor                                Color;                                             // 0x20(0x4)(None)
	enum class EGameplayDebuggerShape            Type;                                              // 0x24(0x1)(None)
	uint8                                        Pad_2FD1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerCategoryData
struct FGameplayDebuggerCategoryData
{
public:
	class FName                                  CategoryName;                                      // 0x0(0x8)(None)
	TArray<class FString>                        TextLines;                                         // 0x8(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected)
	TArray<struct FGameplayDebuggerShape>        Shapes;                                            // 0x18(0x10)(AutoWeak, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected)
	TArray<struct FGameplayDebuggerDataPackHeader> DataPacks;                                         // 0x28(0x10)(None)
	bool                                         bIsEnabled;                                        // 0x38(0x1)(None)
	uint8                                        Pad_2FD2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerNetPack
struct FGameplayDebuggerNetPack
{
public:
	class AGameplayDebuggerCategoryReplicator*   Owner;                                             // 0x0(0x8)(None)
	TArray<struct FGameplayDebuggerCategoryData> SavedData;                                         // 0x8(0x10)(None)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerDebugActor
struct FGameplayDebuggerDebugActor
{
public:
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x0(0x8)(None)
	class FName                                  ActorName;                                         // 0x8(0x8)(None)
	int16                                        SyncCounter;                                       // 0x10(0x2)(None)
	uint8                                        Pad_2FD3[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerVisLogSync
struct FGameplayDebuggerVisLogSync
{
public:
	class FString                                DeviceIDs;                                         // 0x0(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerInputConfig
struct FGameplayDebuggerInputConfig
{
public:
	class FString                                ConfigName;                                        // 0x0(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                  Key;                                               // 0x10(0x18)(None)
	uint8                                        bModShift : 1;                                     // Mask: 0x1, PropSize: 0x10x28(0x1)(None)
	uint8                                        bModCtrl : 1;                                      // Mask: 0x2, PropSize: 0x10x28(0x1)(None)
	uint8                                        bModAlt : 1;                                       // Mask: 0x4, PropSize: 0x10x28(0x1)(None)
	uint8                                        bModCmd : 1;                                       // Mask: 0x8, PropSize: 0x10x28(0x1)(None)
	uint8                                        Pad_2FD4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerCategoryConfig
struct FGameplayDebuggerCategoryConfig
{
public:
	class FString                                CategoryName;                                      // 0x0(0x10)(ContainsInstancedReference, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected)
	int32                                        SlotIdx;                                           // 0x10(0x4)(None)
	enum class EGameplayDebuggerOverrideMode     ActiveInGame;                                      // 0x14(0x1)(None)
	enum class EGameplayDebuggerOverrideMode     ActiveInSimulate;                                  // 0x15(0x1)(None)
	enum class EGameplayDebuggerOverrideMode     Hidden;                                            // 0x16(0x1)(None)
	uint8                                        Pad_2FD5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bOverrideSlotIdx : 1;                              // Mask: 0x1, PropSize: 0x10x18(0x1)(None)
	uint8                                        BitPad_25C : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2FD6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayDebuggerInputConfig>  InputHandlers;                                     // 0x20(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerExtensionConfig
struct FGameplayDebuggerExtensionConfig
{
public:
	class FString                                ExtensionName;                                     // 0x0(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected)
	enum class EGameplayDebuggerOverrideMode     UseExtension;                                      // 0x10(0x1)(None)
	uint8                                        Pad_2FD7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayDebuggerInputConfig>  InputHandlers;                                     // 0x18(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayDebugger.GameplayDebuggerPlayerData
struct FGameplayDebuggerPlayerData
{
public:
	class UGameplayDebuggerLocalController*      Controller;                                        // 0x0(0x8)(ZeroConstructor)
	class UInputComponent*                       InputComponent;                                    // 0x8(0x8)(ZeroConstructor)
	class AGameplayDebuggerCategoryReplicator*   Replicator;                                        // 0x10(0x8)(None)
};

}


