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

// 0x10 (0x10 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.BPPopulateMods
struct UHostSession_Switch_C_BPPopulateMods_Params
{
public:
	TArray<struct FInstalledMod>                 ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x4 (0x4 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.DoSettingsMatchAnyDefaults
struct UHostSession_Switch_C_DoSettingsMatchAnyDefaults_Params
{
public:
	bool                                         Matches;                                           // 0x0(0x1)(None)
	bool                                         CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue; // 0x1(0x1)(None)
	bool                                         CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1; // 0x2(0x1)(None)
	bool                                         CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2; // 0x3(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.GetSelectedMapIndex
struct UHostSession_Switch_C_GetSelectedMapIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(None)
	int32                                        CallFunc_GetSelectedMapIndex_index;                // 0x4(0x4)(None)
};

// 0x2 (0x2 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.IsInMapSelectView
struct UHostSession_Switch_C_IsInMapSelectView_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x1(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.GetMapSelectScrollBox
struct UHostSession_Switch_C_GetMapSelectScrollBox_Params
{
public:
	class UScrollBox*                            ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x80 (0x80 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.SetMainMapSelectEntry
struct UHostSession_Switch_C_SetMainMapSelectEntry_Params
{
public:
	int32                                        MapIndex;                                          // 0x0(0x4)(None)
	int32                                        SelectedIndex;                                     // 0x4(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(None)
	bool                                         CallFunc_HasDLCforMapIndex_ReturnValue;            // 0xC(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD(0x1)(None)
	uint8                                        Pad_4B8F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(None)
	TArray<class UMapSelect_Entry_C*>            CallFunc_GetMapSelectEntries_MapSelectEntries;     // 0x18(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UMapSelect_Entry_C*                    CallFunc_Array_Get_Item;                           // 0x28(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x34(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x35(0x1)(None)
	uint8                                        Pad_4B90[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetMapInfo_OutMapName;                    // 0x38(0x18)(ContainsInstancedReference, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FMapDescription                       CallFunc_GetMapInfo_OutDescription;                // 0x50(0x20)(Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x70(0x10)(None)
};

// 0x2D (0x2D - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.SetupMapSelectEntries
struct UHostSession_Switch_C_SetupMapSelectEntries_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(None)
	uint8                                        Pad_4B97[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(None)
	TArray<class UMapSelect_Entry_C*>            CallFunc_GetMapSelectEntries_MapSelectEntries;     // 0x10(0x10)(Edit, ZeroConstructor)
	class UMapSelect_Entry_C*                    CallFunc_Array_Get_Item;                           // 0x20(0x8)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C(0x1)(None)
};

// 0x3C (0x3C - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.Tick
struct UHostSession_Switch_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.PreConstruct
struct UHostSession_Switch_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.SetSelectedMapIndex
struct UHostSession_Switch_C_SetSelectedMapIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.OnGetInstalledMods
struct UHostSession_Switch_C_OnGetInstalledMods_Params
{
public:
	TArray<struct FInstalledMod>                 Installed_mods;                                    // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.OnIsAuthenticated
struct UHostSession_Switch_C_OnIsAuthenticated_Params
{
public:
	bool                                         Is_authenticated;                                  // 0x0(0x1)(None)
};

// 0xE1 (0xE1 - 0x0)
// Function HostSession_Switch.HostSession_Switch_C.ExecuteUbergraph_HostSession_Switch
struct UHostSession_Switch_C_ExecuteUbergraph_HostSession_Switch_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(Edit, ZeroConstructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(None)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x28(0x10)(Edit, ZeroConstructor)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x38(0x8)(Edit, ZeroConstructor)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x40(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x78(0x4)(None)
	uint8                                        Pad_4BA8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterGame_Menu*                     K2Node_DynamicCast_AsShooter_Game_Menu;            // 0x80(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x89(0x1)(None)
	uint8                                        Pad_4BA9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMapSelect_Entry_C*>            CallFunc_GetMapSelectEntries_MapSelectEntries;     // 0x90(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient)
	class UMapSelect_Entry_C*                    CallFunc_Array_Get_Item;                           // 0xA0(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA8(0x4)(None)
	bool                                         CallFunc_HasDLCforMapIndex_ReturnValue;            // 0xAC(0x1)(None)
	uint8                                        Pad_4BAA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_index;                                // 0xB0(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xB4(0x1)(None)
	bool                                         CallFunc_DoSettingsMatchAnyDefaults_Matches;       // 0xB5(0x1)(None)
	bool                                         CallFunc_DoSettingsMatchAnyDefaults_Matches_1;     // 0xB6(0x1)(None)
	bool                                         CallFunc_DoSettingsMatchAnyDefaults_Matches_2;     // 0xB7(0x1)(None)
	bool                                         CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue; // 0xB8(0x1)(None)
	bool                                         CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_1; // 0xB9(0x1)(None)
	bool                                         CallFunc_DoesSettingsMatchSettingsDataAsset_ReturnValue_2; // 0xBA(0x1)(None)
	uint8                                        Pad_4BAC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xBC(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC0(0x1)(None)
	uint8                                        Pad_4BAD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC4(0x4)(None)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0xC8(0x8)(None)
	TArray<struct FInstalledMod>                 K2Node_CustomEvent_installed_mods;                 // 0xD0(0x10)(None)
	bool                                         K2Node_CustomEvent_is_authenticated;               // 0xE0(0x1)(None)
};

}
}


