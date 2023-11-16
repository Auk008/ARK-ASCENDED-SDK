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

// 0xA4 (0xA4 - 0x0)
// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.ModListToCombinedString
struct UBP_ServerModsSubMenu_C_ModListToCombinedString_Params
{
public:
	TArray<int64>                                Array;                                             // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPrivate)
	class FString                                ReturnValue;                                       // 0x10(0x10)(AutoWeak, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        AllStrings;                                        // 0x20(0x10)(AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x34(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(None)
	uint8                                        Pad_3785[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Array_Get_Item;                           // 0x40(0x8)(None)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue;             // 0x48(0x18)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(None)
	uint8                                        Pad_3786[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x68(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x78(0x10)(SimpleDisplay, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x88(0x4)(None)
	uint8                                        Pad_3787[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_JoinStringArray_ReturnValue;              // 0x90(0x10)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xA0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.CustomEvent_3
struct UBP_ServerModsSubMenu_C_CustomEvent_3_Params
{
public:
	class FString                                Temp_user_token;                                   // 0x0(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.CustomEvent_4
struct UBP_ServerModsSubMenu_C_CustomEvent_4_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x161 (0x161 - 0x0)
// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.ExecuteUbergraph_BP_ServerModsSubMenu
struct UBP_ServerModsSubMenu_C_ExecuteUbergraph_BP_ServerModsSubMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_378B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x8(0x10)(Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x18(0x10)(SimpleDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x28(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x38(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x48(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                K2Node_CustomEvent_temp_user_token;                // 0x58(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0x68(0x38)(SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xA0(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0xB0(0x10)(SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC0(0x10)(Edit, ZeroConstructor)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0xD0(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xD8(0x10)(None)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue;             // 0xE8(0x18)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_ModListToCombinedString_ReturnValue;      // 0x100(0x10)(ContainsInstancedReference, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x110(0x10)(BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x120(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x130(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_8;              // 0x140(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_9;              // 0x150(0x10)(None)
	bool                                         CallFunc_CanLaunchURL_ReturnValue;                 // 0x160(0x1)(None)
};

}
}


