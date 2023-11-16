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

// 0x68 (0x68 - 0x0)
// Function CheatMenuItemButton.CheatMenuItemButton_C.SetItem
struct UCheatMenuItemButton_C_SetItem_Params
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(ZeroConstructor)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UObject*                               CallFunc_GetClassDefaultObject_ReturnValue;        // 0x20(0x8)(ZeroConstructor)
	class UPrimalItem*                           K2Node_DynamicCast_AsPrimal_Item;                  // 0x28(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(None)
	uint8                                        Pad_4358[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalItemDyeGeneric_C*               K2Node_DynamicCast_AsPrimal_Item_Dye_Generic;      // 0x38(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(None)
	uint8                                        Pad_4359[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x48(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(None)
	uint8                                        Pad_435A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetItemShortName_ReturnValue;             // 0x58(0x10)(None)
};

// 0x1D4 (0x1D4 - 0x0)
// Function CheatMenuItemButton.CheatMenuItemButton_C.ExecuteUbergraph_CheatMenuItemButton
struct UCheatMenuItemButton_C_ExecuteUbergraph_CheatMenuItemButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_4378[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(None)
	uint8                                        Pad_437A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x18(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	uint8                                        Pad_437B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x28(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_1;                            // 0x38(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         Temp_bool_Variable_1;                              // 0x48(0x1)(None)
	uint8                                        Pad_437D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_2;                            // 0x50(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_3;                            // 0x60(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x70(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x80(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsChecked_ReturnValue;                    // 0x90(0x1)(None)
	bool                                         CallFunc_IsChecked_ReturnValue_1;                  // 0x91(0x1)(None)
	uint8                                        Pad_437E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default;                             // 0x98(0x10)(AdvancedDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                K2Node_Select_Default_1;                           // 0xA8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0xB8(0x18)(AssetRegistrySearchable, SimpleDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xD0(0x10)(ContainsInstancedReference, SimpleDisplay, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_GetText_ReturnValue_1;                    // 0xE0(0x18)(ContainsInstancedReference, AssetRegistrySearchable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue;          // 0xF8(0x8)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x100(0x10)(AssetRegistrySearchable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x110(0x10)(NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x120(0x4)(None)
	uint8                                        Pad_4380[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x128(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x138(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x148(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x158(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x168(0x1)(None)
	uint8                                        Pad_4383[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x170(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x180(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x190(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UPrimalItem>             CallFunc_Conv_ClassToSoftClassReference_ReturnValue; // 0x1A0(0x30)(None)
	float                                        CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast; // 0x1D0(0x4)(None)
};

}
}


