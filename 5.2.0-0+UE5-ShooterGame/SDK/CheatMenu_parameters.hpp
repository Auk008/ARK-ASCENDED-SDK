#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x12 (0x12 - 0x0)
// Function CheatMenu.CheatMenu_C.BPEscapeClosed
struct UCheatMenu_C_BPEscapeClosed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	uint8                                        Pad_40A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterHUD*                           CallFunc_GetShooterHUD_ReturnValue;                // 0x8(0x8)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x10(0x1)(None)
	bool                                         CallFunc_CloseSpawnMenu_ReturnValue;               // 0x11(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function CheatMenu.CheatMenu_C.ClearFilter
struct UCheatMenu_C_ClearFilter_Params
{
public:
	bool                                         ShouldRefresh;                                     // 0x0(0x1)(None)
};

// 0x39 (0x39 - 0x0)
// Function CheatMenu.CheatMenu_C.GetBossSpawnArray
struct UCheatMenu_C_GetBossSpawnArray_Params
{
public:
	TArray<class FString>                        BossNames;                                         // 0x0(0x10)(AutoWeak, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        BossCheats;                                        // 0x10(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class UWorld*                                CallFunc_GetGameWorld_ReturnValue;                 // 0x20(0x8)(None)
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x28(0x10)(None)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x38(0x1)(None)
};

// 0x9 (0x9 - 0x0)
// Function CheatMenu.CheatMenu_C.CloseMenu
struct UCheatMenu_C_CloseMenu_Params
{
public:
	class AShooterHUD*                           CallFunc_GetShooterHUD_ReturnValue;                // 0x0(0x8)(None)
	bool                                         CallFunc_CloseSpawnMenu_ReturnValue;               // 0x8(0x1)(None)
};

// 0x1A (0x1A - 0x0)
// Function CheatMenu.CheatMenu_C.GetMapOpenListsForEntry
struct UCheatMenu_C_GetMapOpenListsForEntry_Params
{
public:
	int32                                        ScreenTracker;                                     // 0x0(0x4)(None)
	uint8                                        Pad_40AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CheatStrings;                                      // 0x8(0x10)(None)
	bool                                         Success;                                           // 0x18(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x19(0x1)(None)
};

// 0x48 (0x48 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateMapOpenButton
struct UCheatMenu_C_CreateMapOpenButton_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  MapName;                                           // 0x10(0x8)(None)
	class UUI_DebugSpawnMenuEntry*               CreatedWidget;                                     // 0x18(0x8)(ZeroConstructor)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x20(0x18)(None)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x38(0x8)(ZeroConstructor)
	class UCheatMenuMapOpenButton_C*             CallFunc_Create_ReturnValue;                       // 0x40(0x8)(None)
};

// 0x4C (0x4C - 0x0)
// Function CheatMenu.CheatMenu_C.CreateMapOpenEntry
struct UCheatMenu_C_CreateMapOpenEntry_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(AutoWeak, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        ArrayIndex;                                        // 0x10(0x4)(None)
	uint8                                        Pad_40B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Array;                                             // 0x18(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Array_Get_Item;                           // 0x28(0x10)(None)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x38(0x8)(None)
	class UUI_DebugSpawnMenuEntry*               CallFunc_CreateMapOpenButton_CreatedWidget;        // 0x40(0x8)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x48(0x4)(None)
};

// 0x60 (0x60 - 0x0)
// Function CheatMenu.CheatMenu_C.GetMapJumpArray
struct UCheatMenu_C_GetMapJumpArray_Params
{
public:
	TArray<class FString>                        EmptyStringArray;                                  // 0x0(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(None)
	uint8                                        Pad_40B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Temp_wildcard_Variable;                            // 0x18(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x28(0x1)(None)
	uint8                                        Pad_40B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(None)
	TArray<struct FCheatMapJumpInfo>             CallFunc_GetMapJumpListForEntry_MapJumps;          // 0x30(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         CallFunc_GetMapJumpListForEntry_Success;           // 0x40(0x1)(None)
	uint8                                        Pad_40B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x48(0x10)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x5C(0x4)(None)
};

// 0x70 (0x70 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateMapJumpButton
struct UCheatMenu_C_CreateMapJumpButton_Params
{
public:
	struct FCheatMapJumpInfo                     Cheat;                                             // 0x0(0x40)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UUI_DebugSpawnMenuEntry*               CreatedWidget;                                     // 0x40(0x8)(ZeroConstructor)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x48(0x8)(ZeroConstructor)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x50(0x18)(None)
	class UCheatMapJumpButton_C*                 CallFunc_Create_ReturnValue;                       // 0x68(0x8)(None)
};

// 0x64 (0x64 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateMapJumpEntry
struct UCheatMenu_C_CreateMapJumpEntry_Params
{
public:
	int32                                        ArrayIndex;                                        // 0x0(0x4)(None)
	uint8                                        Pad_40B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCheatMapJumpInfo>             MapJumps;                                          // 0x8(0x10)(Protected, BlueprintCallable, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FCheatMapJumpInfo                     CallFunc_Array_Get_Item;                           // 0x18(0x40)(None)
	class UUI_DebugSpawnMenuEntry*               CallFunc_CreateMapJumpButton_CreatedWidget;        // 0x58(0x8)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x60(0x4)(None)
};

// 0x39 (0x39 - 0x0)
// Function CheatMenu.CheatMenu_C.GetMapJumpListForEntry
struct UCheatMenu_C_GetMapJumpListForEntry_Params
{
public:
	int32                                        ScreenTracker;                                     // 0x0(0x4)(None)
	uint8                                        Pad_40B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCheatMapJumpInfo>             MapJumps;                                          // 0x8(0x10)(NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         Success;                                           // 0x18(0x1)(None)
	uint8                                        Pad_40BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                CallFunc_GetGameWorld_ReturnValue;                 // 0x20(0x8)(None)
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x28(0x10)(None)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x38(0x1)(None)
};

// 0x1A (0x1A - 0x0)
// Function CheatMenu.CheatMenu_C.AddAllEntriesButtonForItems
struct UCheatMenu_C_AddAllEntriesButtonForItems_Params
{
public:
	TArray<TSoftClassPtr<class UPrimalItem>>     Items;                                             // 0x0(0x10)(ZeroConstructor)
	class UCheatMenuItemAllButton_C*             CallFunc_CreateButtonFromAllEntries_ReturnValue;   // 0x10(0x8)(None)
	enum class ECheatMenuOptionTypes             CallFunc_Array_Get_Item;                           // 0x18(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x19(0x1)(None)
};

// 0x28 (0x28 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateButtonFromAllEntries
struct UCheatMenu_C_CreateButtonFromAllEntries_Params
{
public:
	TArray<TSoftClassPtr<class UPrimalItem>>     Items;                                             // 0x0(0x10)(ZeroConstructor)
	class UCheatMenuItemAllButton_C*             ReturnValue;                                       // 0x10(0x8)(ZeroConstructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x18(0x8)(ZeroConstructor)
	class UCheatMenuItemAllButton_C*             CallFunc_Create_ReturnValue;                       // 0x20(0x8)(None)
};

// 0x1A (0x1A - 0x0)
// Function CheatMenu.CheatMenu_C.SetupOptionsBarForFolder
struct UCheatMenu_C_SetupOptionsBarForFolder_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x3(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x4(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x5(0x1)(None)
	bool                                         Temp_bool_Variable_2;                              // 0x6(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x7(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x8(0x1)(None)
	bool                                         Temp_bool_Variable_3;                              // 0x9(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_6;                              // 0xA(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_7;                              // 0xB(0x1)(None)
	bool                                         Temp_bool_Variable_4;                              // 0xC(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_8;                              // 0xD(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_9;                              // 0xE(0x1)(None)
	enum class ECheatMenuOptionTypes             CallFunc_Array_Get_Item;                           // 0xF(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x10(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x11(0x1)(None)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x12(0x1)(None)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x13(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x14(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x15(0x1)(None)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x16(0x1)(None)
	enum class ESlateVisibility                  K2Node_Select_Default_3;                           // 0x17(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x18(0x1)(None)
	enum class ESlateVisibility                  K2Node_Select_Default_4;                           // 0x19(0x1)(None)
};

// 0x2A (0x2A - 0x0)
// Function CheatMenu.CheatMenu_C.GetCharacterPresetsForEntry
struct UCheatMenu_C_GetCharacterPresetsForEntry_Params
{
public:
	int32                                        ScreenTracker;                                     // 0x0(0x4)(None)
	uint8                                        Pad_40C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCheatMenuCharacterLevelPreset> CharacterPresetLevel;                              // 0x8(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<struct FCheatMenuCharacterPresetItems> CharacterPresetItem;                               // 0x18(0x10)(None)
	bool                                         Success;                                           // 0x28(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x29(0x1)(None)
};

// 0x52 (0x52 - 0x0)
// Function CheatMenu.CheatMenu_C.GetCheatListsForEntry
struct UCheatMenu_C_GetCheatListsForEntry_Params
{
public:
	int32                                        ScreenTracker;                                     // 0x0(0x4)(None)
	uint8                                        Pad_40CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CheatStrings;                                      // 0x8(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<bool>                                 RequireConfirm;                                    // 0x18(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         AllowAdditionalString;                             // 0x28(0x1)(None)
	bool                                         Success;                                           // 0x29(0x1)(None)
	uint8                                        Pad_40CB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_GetBossSpawnArray_BossNames;              // 0x30(0x10)(AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        CallFunc_GetBossSpawnArray_BossCheats;             // 0x40(0x10)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x50(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x51(0x1)(None)
};

// 0x2C (0x2C - 0x0)
// Function CheatMenu.CheatMenu_C.GetEggListsForEntry
struct UCheatMenu_C_GetEggListsForEntry_Params
{
public:
	int32                                        ScreenTracker;                                     // 0x0(0x4)(None)
	uint8                                        Pad_40CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class UPrimalItem>>     DinoEggBlueprintIDs;                               // 0x8(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UPrimalItem>>     DinoFertEggBlueprintIDs;                           // 0x18(0x10)(None)
	bool                                         Success;                                           // 0x28(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x29(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x2A(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x2B(0x1)(None)
};

// 0x31 (0x31 - 0x0)
// Function CheatMenu.CheatMenu_C.GetDinoListsForEntry
struct UCheatMenu_C_GetDinoListsForEntry_Params
{
public:
	int32                                        ScreenTracker;                                     // 0x0(0x4)(None)
	uint8                                        Pad_40D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class APrimalDinoCharacter>> Dinos;                                             // 0x8(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UPrimalItem>>     Saddles;                                           // 0x18(0x10)(None)
	bool                                         Success;                                           // 0x28(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x29(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x2A(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x2B(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x2C(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x2D(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x2E(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_6;          // 0x2F(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_7;          // 0x30(0x1)(None)
};

// 0x94 (0x94 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateCharacterPresetEntry
struct UCheatMenu_C_CreateCharacterPresetEntry_Params
{
public:
	class FString                                InString;                                          // 0x0(0x10)(SimpleDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        ArrayIndex;                                        // 0x10(0x4)(None)
	uint8                                        Pad_40D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCheatMenuCharacterLevelPreset> LevelLists;                                        // 0x18(0x10)(AutoWeak, AssetRegistrySearchable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<struct FCheatMenuCharacterPresetItems> ItemLists;                                         // 0x28(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FCheatMenuCharacterPresetItems        CallFunc_Array_Get_Item;                           // 0x38(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FCheatMenuCharacterLevelPreset        CallFunc_Array_Get_Item_1;                         // 0x48(0x28)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x70(0x18)(None)
	class UUI_DebugSpawnMenuEntry*               CallFunc_CreateButtonFromCharacterPresets_CreatedWidget; // 0x88(0x8)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x90(0x4)(None)
};

// 0x64 (0x64 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateCheatEntry
struct UCheatMenu_C_CreateCheatEntry_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        ArrayIndex;                                        // 0x10(0x4)(None)
	uint8                                        Pad_40DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Array;                                             // 0x18(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<bool>                                 ArrayConfirm;                                      // 0x28(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         AllowAdditionalString;                             // 0x38(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0x39(0x1)(None)
	bool                                         CallFunc_Array_Get_Item;                           // 0x3A(0x1)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x3B(0x1)(None)
	uint8                                        Pad_40DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x40(0x10)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x50(0x1)(None)
	bool                                         K2Node_Select_Default;                             // 0x51(0x1)(None)
	uint8                                        Pad_40DC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_DebugSpawnMenuEntry*               CallFunc_CreateCheatButtonFromBlueprintID_CreatedWidget; // 0x58(0x8)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x60(0x4)(None)
};

// 0xF4 (0xF4 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateEggEntry
struct UCheatMenu_C_CreateEggEntry_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(AutoWeak, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        ArrayIndex;                                        // 0x10(0x4)(None)
	uint8                                        Pad_40DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class UPrimalItem>>     UnFertEggs;                                        // 0x18(0x10)(Edit, ZeroConstructor, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UPrimalItem>>     FertEggs;                                          // 0x28(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                Temp_string_Variable;                              // 0x38(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UPrimalItem>             CallFunc_Array_Get_Item;                           // 0x48(0x30)(Edit, ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x78(0x1)(None)
	uint8                                        Pad_40DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UPrimalItem>             CallFunc_Array_Get_Item_1;                         // 0x80(0x30)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                Temp_string_Variable_1;                            // 0xB0(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue_1;  // 0xC0(0x1)(None)
	bool                                         CallFunc_BooleanXOR_ReturnValue;                   // 0xC1(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xC2(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0xC3(0x1)(None)
	uint8                                        Pad_40E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default;                             // 0xC8(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xD8(0x10)(None)
	class UUI_DebugSpawnMenuEntry*               CallFunc_CreateEggItemButtonFromBlueprintIDs_CreatedWidget; // 0xE8(0x8)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xF0(0x4)(None)
};

// 0xA8 (0xA8 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateDinoEntry
struct UCheatMenu_C_CreateDinoEntry_Params
{
public:
	class FString                                Text;                                              // 0x0(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        ArrayIndex;                                        // 0x10(0x4)(None)
	uint8                                        Pad_40E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class APrimalDinoCharacter>> DinoBPList;                                        // 0x18(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UPrimalItem>>     DinoSaddleList;                                    // 0x28(0x10)(Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UPrimalItem>             CallFunc_Array_Get_Item;                           // 0x38(0x30)(Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TSoftClassPtr<class APrimalDinoCharacter>    CallFunc_Array_Get_Item_1;                         // 0x68(0x30)(Edit, ZeroConstructor)
	class UCheatMenuButton_C*                    CallFunc_CreateDinoButtonAndSetText_CreatedButton; // 0x98(0x8)(None)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue;    // 0xA0(0x1)(None)
	uint8                                        Pad_40F3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xA4(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// Function CheatMenu.CheatMenu_C.SetupOptionBar
struct UCheatMenu_C_SetupOptionBar_Params
{
public:
	int32                                        CallFunc_Array_Get_Item;                           // 0x0(0x4)(None)
	bool                                         CallFunc_Array_Get_Item_1;                         // 0x4(0x1)(None)
	uint8                                        Pad_412A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
};

// 0x69 (0x69 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateButtonFromCharacterPresets
struct UCheatMenu_C_CreateButtonFromCharacterPresets_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(ContainsInstancedReference, SimpleDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FCheatMenuCharacterLevelPreset        Levels;                                            // 0x18(0x28)(None)
	struct FCheatMenuCharacterPresetItems        Items;                                             // 0x40(0x10)(ZeroConstructor)
	class UUI_DebugSpawnMenuEntry*               CreatedWidget;                                     // 0x50(0x8)(ZeroConstructor)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x58(0x8)(ZeroConstructor)
	class UCheatMenuCharacterPresetsButton_C*    CallFunc_Create_ReturnValue;                       // 0x60(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(None)
};

// 0x40 (0x40 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateFolderButtons
struct UCheatMenu_C_CreateFolderButtons_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(None)
	int32                                        ScreenNumber;                                      // 0x18(0x4)(None)
	uint8                                        Pad_412B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Image;                                             // 0x20(0x8)(ZeroConstructor)
	class UUI_DebugSpawnMenuEntry*               OutWidget;                                         // 0x28(0x8)(ZeroConstructor)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x30(0x8)(ZeroConstructor)
	class UCheatMenuFolderButton_C*              CallFunc_Create_ReturnValue;                       // 0x38(0x8)(None)
};

// 0x58 (0x58 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateCheatButtonFromBlueprintID
struct UCheatMenu_C_CreateCheatButtonFromBlueprintID_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Cheat;                                             // 0x10(0x10)(BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         RequireConfirm;                                    // 0x20(0x1)(None)
	bool                                         Allow_Additional_String;                           // 0x21(0x1)(None)
	uint8                                        Pad_412F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_DebugSpawnMenuEntry*               CreatedWidget;                                     // 0x28(0x8)(ZeroConstructor)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x30(0x18)(None)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x48(0x8)(ZeroConstructor)
	class UCheatMenuCheatButton_C*               CallFunc_Create_ReturnValue;                       // 0x50(0x8)(None)
};

// 0xEB (0xEB - 0x0)
// Function CheatMenu.CheatMenu_C.CreateEggItemButtonFromBlueprintIDs
struct UCheatMenu_C_CreateEggItemButtonFromBlueprintIDs_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(AssetRegistrySearchable, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UPrimalItem>             UnFertilizedEgg;                                   // 0x10(0x30)(ZeroConstructor, ContainsInstancedReference, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UPrimalItem>             FertilizedEgg;                                     // 0x40(0x30)(ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UUI_DebugSpawnMenuEntry*               CreatedWidget;                                     // 0x70(0x8)(ZeroConstructor)
	bool                                         Temp_bool_Variable;                                // 0x78(0x1)(None)
	uint8                                        Pad_4130[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue;            // 0x80(0x8)(ZeroConstructor)
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue_1;          // 0x88(0x8)(ZeroConstructor)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x90(0x18)(None)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0xA8(0x1)(None)
	uint8                                        Pad_4131[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_Select_Default;                             // 0xB0(0x8)(ZeroConstructor)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xB8(0x8)(ZeroConstructor)
	class UClass*                                K2Node_ClassDynamicCast_AsPrimal_Item;             // 0xC0(0x8)(ZeroConstructor)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0xC8(0x1)(None)
	uint8                                        Pad_4132[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCheatMenuEggButton_C*                 CallFunc_Create_ReturnValue;                       // 0xD0(0x8)(ZeroConstructor)
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0xD8(0x8)(ZeroConstructor)
	class UPrimalItem*                           K2Node_DynamicCast_AsPrimal_Item;                  // 0xE0(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE8(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE9(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xEA(0x1)(None)
};

// 0x68 (0x68 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateItemButtonFromBlueprintID
struct UCheatMenu_C_CreateItemButtonFromBlueprintID_Params
{
public:
	TSoftClassPtr<class UPrimalItem>             Blueprint;                                         // 0x0(0x30)(ZeroConstructor)
	class UUI_DebugSpawnMenuEntry*               CreatedWidget;                                     // 0x30(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x38(0x1)(None)
	uint8                                        Pad_413A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue;            // 0x40(0x8)(ZeroConstructor)
	class UClass*                                K2Node_ClassDynamicCast_AsPrimal_Item;             // 0x48(0x8)(ZeroConstructor)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x50(0x1)(None)
	uint8                                        Pad_413B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x58(0x8)(ZeroConstructor)
	class UCheatMenuItemButton_C*                CallFunc_Create_ReturnValue;                       // 0x60(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateItemButtonAndSetText
struct UCheatMenu_C_CreateItemButtonAndSetText_Params
{
public:
	class FString                                ItemName;                                          // 0x0(0x10)(ContainsInstancedReference, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ItemSpawnString;                                   // 0x10(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCheatMenuButton_C*                    CreatedButton;                                     // 0x20(0x8)(ZeroConstructor)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x40(0x8)(ZeroConstructor)
	class UCheatMenuItemButton_C*                CallFunc_Create_ReturnValue;                       // 0x48(0x8)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function CheatMenu.CheatMenu_C.CreateDinoButtonAndSetText
struct UCheatMenu_C_CreateDinoButtonAndSetText_Params
{
public:
	class FString                                Text;                                              // 0x0(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TSoftClassPtr<class APrimalDinoCharacter>    DinoBP;                                            // 0x10(0x30)(Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UPrimalItem>             Saddle;                                            // 0x40(0x30)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class UCheatMenuButton_C*                    CreatedButton;                                     // 0x70(0x8)(Edit, ZeroConstructor)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x78(0x18)(None)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x90(0x8)(Edit, ZeroConstructor)
	class UCheatMenuButton_C*                    CallFunc_Create_ReturnValue;                       // 0x98(0x8)(None)
};

// 0x19 (0x19 - 0x0)
// Function CheatMenu.CheatMenu_C.BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCheatMenu_C_BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(None)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(None)
};

// 0x19 (0x19 - 0x0)
// Function CheatMenu.CheatMenu_C.BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCheatMenu_C_BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(None)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(None)
};

// 0x19 (0x19 - 0x0)
// Function CheatMenu.CheatMenu_C.BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UCheatMenu_C_BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(None)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function CheatMenu.CheatMenu_C.Screen Changed
struct UCheatMenu_C_Screen_Changed_Params
{
public:
	int32                                        ToScreen;                                          // 0x0(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function CheatMenu.CheatMenu_C.BndEvt__BlueprintCheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature
struct UCheatMenu_C_BndEvt__BlueprintCheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function CheatMenu.CheatMenu_C.BndEvt__SpawnMenu_TameCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
struct UCheatMenu_C_BndEvt__SpawnMenu_TameCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function CheatMenu.CheatMenu_C.BndEvt__CheatMenu_NamesFilterInputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
struct UCheatMenu_C_BndEvt__CheatMenu_NamesFilterInputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(None)
};

// 0x678 (0x678 - 0x0)
// Function CheatMenu.CheatMenu_C.ExecuteUbergraph_CheatMenu
struct UCheatMenu_C_ExecuteUbergraph_CheatMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_4165[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Temp_string_Variable;                              // 0x8(0x10)(AutoWeak, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        Temp_string_Variable_1;                            // 0x18(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        Temp_string_Variable_2;                            // 0x28(0x10)(AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        Temp_string_Variable_3;                            // 0x38(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        Temp_string_Variable_4;                            // 0x48(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        Temp_string_Variable_5;                            // 0x58(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        Temp_string_Variable_6;                            // 0x68(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        Temp_string_Variable_7;                            // 0x78(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        Temp_string_Variable_8;                            // 0x88(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        Temp_string_Variable_9;                            // 0x98(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        Temp_string_Variable_10;                           // 0xA8(0x10)(AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        Temp_string_Variable_11;                           // 0xB8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        Temp_string_Variable_12;                           // 0xC8(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        Temp_string_Variable_13;                           // 0xD8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        Temp_string_Variable_14;                           // 0xE8(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        Temp_string_Variable_15;                           // 0xF8(0x10)(AutoWeak, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        Temp_string_Variable_16;                           // 0x108(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        Temp_int_Variable;                                 // 0x118(0x4)(None)
	uint8                                        Pad_4166[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable;                           // 0x120(0x10)(Edit, ZeroConstructor, AutoWeak, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_1;                         // 0x130(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_2;                         // 0x140(0x10)(Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_3;                         // 0x150(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_4;                         // 0x160(0x10)(Edit, ZeroConstructor, AutoWeak, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_5;                         // 0x170(0x10)(Edit, ZeroConstructor, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_6;                         // 0x180(0x10)(Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_7;                         // 0x190(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_8;                         // 0x1A0(0x10)(Edit, ZeroConstructor, AutoWeak, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_9;                         // 0x1B0(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_10;                        // 0x1C0(0x10)(Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_11;                        // 0x1D0(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_12;                        // 0x1E0(0x10)(Edit, ZeroConstructor, AutoWeak, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_13;                        // 0x1F0(0x10)(Edit, ZeroConstructor, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_14;                        // 0x200(0x10)(Edit, ZeroConstructor, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UPrimalItem>>     Temp_softclass_Variable_15;                        // 0x210(0x10)(Edit, ZeroConstructor, AutoWeak, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         Temp_bool_Variable;                                // 0x220(0x1)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x221(0x1)(None)
	enum class ECheckBoxState                    Temp_byte_Variable;                                // 0x222(0x1)(None)
	enum class ECheckBoxState                    Temp_byte_Variable_1;                              // 0x223(0x1)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x224(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x225(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x226(0x1)(None)
	uint8                                        Pad_4167[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x228(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x22C(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x230(0x4)(None)
	uint8                                        Pad_4168[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Temp_string_Variable_17;                           // 0x238(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        Temp_string_Variable_18;                           // 0x248(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x258(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x25C(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x260(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x264(0x4)(None)
	TArray<class FString>                        Temp_string_Variable_19;                           // 0x268(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x278(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x27C(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x280(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x284(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x288(0x4)(None)
	uint8                                        Pad_4169[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Temp_string_Variable_20;                           // 0x290(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0x2A0(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x2A4(0x4)(None)
	TArray<class FString>                        Temp_string_Variable_21;                           // 0x2A8(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FText                                  K2Node_ComponentBoundEvent_Text_3;                 // 0x2B8(0x18)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_2;         // 0x2D0(0x1)(None)
	uint8                                        Pad_416A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x2D8(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FText                                  K2Node_ComponentBoundEvent_Text_2;                 // 0x2E8(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_1;         // 0x300(0x1)(None)
	uint8                                        Pad_416B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x304(0x4)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x308(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x318(0x18)(SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_1;           // 0x330(0x4)(None)
	uint8                                        Pad_416C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x338(0x18)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FText                                  K2Node_ComponentBoundEvent_Text_1;                 // 0x350(0x18)(ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x368(0x1)(None)
	uint8                                        Pad_416D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x370(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_2;           // 0x380(0x4)(None)
	uint8                                        Pad_416E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_2;             // 0x388(0x18)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0x3A0(0x4)(None)
	uint8                                        Pad_416F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_DebugSpawnMenuEntry*               CallFunc_Array_Get_Item;                           // 0x3A8(0x8)(Edit, ZeroConstructor)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x3B0(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x3B8(0x1)(None)
	uint8                                        Pad_4170[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3BC(0x4)(None)
	int32                                        K2Node_CustomEvent_ToScreen;                       // 0x3C0(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3C4(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x3C5(0x1)(None)
	uint8                                        Pad_4171[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Array_Get_Item_1;                         // 0x3C8(0x18)(AutoWeak, AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x3E0(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x3E4(0x1)(None)
	uint8                                        Pad_4172[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_DebugSpawnMenuEntry*               CallFunc_CreateFolderButtons_outWidget;            // 0x3E8(0x8)(Edit, ZeroConstructor)
	class UUI_DebugSpawnMenuEntry*               CallFunc_Array_Get_Item_2;                         // 0x3F0(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x3F8(0x4)(None)
	uint8                                        Pad_4173[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue_1;                   // 0x400(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x408(0x1)(None)
	uint8                                        Pad_4174[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Temp_string_Variable_22;                           // 0x410(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x420(0x1)(None)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked;             // 0x421(0x1)(None)
	enum class ECheckBoxState                    K2Node_Select_Default;                             // 0x422(0x1)(None)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x423(0x1)(None)
	uint8                                        Pad_4175[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Temp_string_Variable_23;                           // 0x428(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	enum class ECheatMenuOptionTypes             CallFunc_Array_Get_Item_3;                         // 0x438(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x439(0x1)(None)
	uint8                                        Pad_4176[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class APrimalDinoCharacter>> CallFunc_GetDinoListsForEntry_Dinos;               // 0x440(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UPrimalItem>>     CallFunc_GetDinoListsForEntry_Saddles;             // 0x450(0x10)(Edit, ZeroConstructor, AutoWeak, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         CallFunc_GetDinoListsForEntry_Success;             // 0x460(0x1)(None)
	uint8                                        Pad_4177[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class UPrimalItem>>     CallFunc_GetEggListsForEntry_DinoEggBlueprintIDs;  // 0x468(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UPrimalItem>>     CallFunc_GetEggListsForEntry_DinoFertEggBlueprintIDs; // 0x478(0x10)(Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         CallFunc_GetEggListsForEntry_Success;              // 0x488(0x1)(None)
	uint8                                        Pad_4178[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_GetCheatListsForEntry_CheatStrings;       // 0x490(0x10)(AssetRegistrySearchable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<bool>                                 CallFunc_GetCheatListsForEntry_RequireConfirm;     // 0x4A0(0x10)(ContainsInstancedReference, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         CallFunc_GetCheatListsForEntry_AllowAdditionalString; // 0x4B0(0x1)(None)
	bool                                         CallFunc_GetCheatListsForEntry_Success;            // 0x4B1(0x1)(None)
	uint8                                        Pad_417C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCheatMenuCharacterLevelPreset> CallFunc_GetCharacterPresetsForEntry_CharacterPresetLevel; // 0x4B8(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<struct FCheatMenuCharacterPresetItems> CallFunc_GetCharacterPresetsForEntry_CharacterPresetItem; // 0x4C8(0x10)(Edit, ZeroConstructor, AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         CallFunc_GetCharacterPresetsForEntry_Success;      // 0x4D8(0x1)(None)
	uint8                                        Pad_417D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Temp_string_Variable_24;                           // 0x4E0(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<struct FCheatMapJumpInfo>             CallFunc_GetMapJumpListForEntry_MapJumps;          // 0x4F0(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         CallFunc_GetMapJumpListForEntry_Success;           // 0x500(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x501(0x1)(None)
	uint8                                        Pad_417E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_GetMapJumpArray_EmptyStringArray;         // 0x508(0x10)(AutoWeak, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        Temp_string_Variable_25;                           // 0x518(0x10)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        CallFunc_GetMapOpenListsForEntry_CheatStrings;     // 0x528(0x10)(AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         CallFunc_GetMapOpenListsForEntry_Success;          // 0x538(0x1)(None)
	uint8                                        Pad_417F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_Array_Get_Item_4;                         // 0x540(0x8)(Edit, ZeroConstructor)
	class UUI_DebugSpawnMenuEntry*               CallFunc_CreateFolderButtons_outWidget_1;          // 0x548(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x550(0x4)(None)
	uint8                                        Pad_4180[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Temp_string_Variable_26;                           // 0x558(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Array_Get_Item_5;                         // 0x568(0x10)(SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x578(0x18)(AutoWeak, ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        CallFunc_GetBossSpawnArray_BossNames;              // 0x590(0x10)(AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        CallFunc_GetBossSpawnArray_BossCheats;             // 0x5A0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x5B0(0x1)(None)
	uint8                                        Pad_4181[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class UPrimalItem>>     K2Node_Select_Default_2;                           // 0x5B8(0x10)(Edit, ZeroConstructor, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x5C8(0x18)(AutoWeak, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UPrimalItem>             CallFunc_Array_Get_Item_6;                         // 0x5E0(0x30)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x610(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class UUI_DebugSpawnMenuEntry*               CallFunc_CreateItemButtonFromBlueprintID_CreatedWidget; // 0x620(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x628(0x1)(None)
	uint8                                        Pad_4182[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x62C(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x630(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x634(0x1)(None)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x635(0x1)(None)
	uint8                                        Pad_4183[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0x638(0x4)(None)
	uint8                                        Pad_4184[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        K2Node_Select_Default_3;                           // 0x640(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x650(0x1)(None)
	uint8                                        Pad_4185[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item_7;                         // 0x658(0x10)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x668(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x66C(0x1)(None)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x66D(0x1)(None)
	uint8                                        Pad_4186[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Len_ReturnValue;                          // 0x670(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x674(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x675(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x676(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x677(0x1)(None)
};

}
}


