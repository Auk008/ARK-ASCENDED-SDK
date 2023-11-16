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

// 0x2A (0x2A - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.OnEventBroadcasted
struct UReHostSession_ASA_C_OnEventBroadcasted_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(None)
	uint8                                        Pad_329A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInstallProgressMod>           ModsList;                                          // 0x8(0x10)(None)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x18(0x10)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x29(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.OnRecievedInstalledModsInfo
struct UReHostSession_ASA_C_OnRecievedInstalledModsInfo_Params
{
public:
	TArray<struct FInstallProgressMod>           InstalledMods;                                     // 0x0(0x10)(None)
};

// 0x1A (0x1A - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.HasUGCPrivileges
struct UReHostSession_ASA_C_HasUGCPrivileges_Params
{
public:
	bool                                         HasPrivilege;                                      // 0x0(0x1)(None)
	uint8                                        Pad_329E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x8(0x8)(Edit, ZeroConstructor)
	class UShooterGameInstance*                  K2Node_DynamicCast_AsShooter_Game_Instance;        // 0x10(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	bool                                         CallFunc_CanUseUserGeneratedContent_ReturnValue;   // 0x19(0x1)(None)
};

// 0x60 (0x60 - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.Assert Selected Item for Preview
struct UReHostSession_ASA_C_Assert_Selected_Item_for_Preview_Params
{
public:
	class UScrollBox*                            ForScrollbox;                                      // 0x0(0x8)(Edit, ZeroConstructor)
	int32                                        FoundSelectedIndex;                                // 0x8(0x4)(None)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0xC(0x4)(None)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x10(0x1)(None)
	uint8                                        Pad_32A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x14(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(None)
	uint8                                        Pad_32A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x20(0x8)(Edit, ZeroConstructor)
	class UDataListEntryButton_HostSession*      K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session; // 0x28(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x31(0x1)(None)
	uint8                                        Pad_32A7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCustomButtonWidget*                   CallFunc_BPGetButton_ReturnValue;                  // 0x38(0x8)(Edit, ZeroConstructor)
	int32                                        Temp_int_Variable;                                 // 0x40(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x44(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x45(0x1)(None)
	uint8                                        Pad_32A8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue_1;                 // 0x48(0x8)(Edit, ZeroConstructor)
	class UDataListEntryButton_HostSession*      K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session_1; // 0x50(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x58(0x1)(None)
	bool                                         CallFunc_BPIsSelected_ReturnValue;                 // 0x59(0x1)(None)
	uint8                                        Pad_32A9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x5C(0x4)(None)
};

// 0x3 (0x3 - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.IsPresetDifficultyUIOpen
struct UReHostSession_ASA_C_IsPresetDifficultyUIOpen_Params
{
public:
	bool                                         NewParam;                                          // 0x0(0x1)(None)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x1(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2(0x1)(None)
};

// 0x2 (0x2 - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.BPIsPresetDifficultyUIOpen
struct UReHostSession_ASA_C_BPIsPresetDifficultyUIOpen_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	bool                                         CallFunc_IsPresetDifficultyUIOpen_NewParam;        // 0x1(0x1)(None)
};

// 0x1D2 (0x1D2 - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.Get_ModImage_Border_Background
struct UReHostSession_ASA_C_Get_ModImage_Border_Background_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0xD0)(Edit, ZeroConstructor, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD0(0x1)(None)
	uint8                                        Pad_32B2[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0xE0(0xD0)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1B0(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1B1(0x1)(None)
	uint8                                        Pad_32B3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_SelectObject_ReturnValue;                 // 0x1B8(0x8)(Edit, ZeroConstructor)
	class UTexture*                              CallFunc_K2_GetTextureParameterValue_ReturnValue;  // 0x1C0(0x8)(Edit, ZeroConstructor)
	class UTexture*                              K2Node_DynamicCast_AsTexture;                      // 0x1C8(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1D0(0x1)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x1D1(0x1)(None)
};

// 0x260 (0x260 - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.OnKeyDownEvent
struct UReHostSession_ASA_C_OnKeyDownEvent_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	struct FKeyEvent                             InKeyboardEvent;                                   // 0x38(0x40)(AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* LocalSubMenu;                                      // 0x130(0x8)(Edit, ZeroConstructor)
	struct FKey                                  LocalKey;                                          // 0x138(0x18)(AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsPresetDifficultyUIOpen_NewParam;        // 0x150(0x1)(None)
	uint8                                        Pad_32BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x158(0x18)(ContainsInstancedReference, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FEventReply                           CallFunc_OnKeyDownEvent_ReturnValue;               // 0x170(0xB8)(None)
	class UWidget*                               CallFunc_SwitchButton_Widget;                      // 0x228(0x8)(Edit, ZeroConstructor)
	class UWidget*                               CallFunc_SwitchButton_Widget_1;                    // 0x230(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x238(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x23C(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x23D(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x23E(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x23F(0x1)(None)
	class UWidget*                               CallFunc_SwitchButton_Widget_2;                    // 0x240(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x248(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_4;          // 0x249(0x1)(None)
	uint8                                        Pad_32BC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x24C(0x4)(None)
	class UWidget*                               CallFunc_SwitchButton_Widget_3;                    // 0x250(0x8)(Edit, ZeroConstructor)
	class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* K2Node_Select_Default;                             // 0x258(0x8)(None)
};

// 0x1CA (0x1CA - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.Get_MapImage_Border_Background
struct UReHostSession_ASA_C_Get_MapImage_Border_Background_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0xD0)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0xD0(0xD0)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A0(0x1)(None)
	uint8                                        Pad_32C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              CallFunc_K2_GetTextureParameterValue_ReturnValue;  // 0x1A8(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1B0(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1B1(0x1)(None)
	uint8                                        Pad_32C1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_SelectObject_ReturnValue;                 // 0x1B8(0x8)(Edit, ZeroConstructor)
	class UTexture*                              K2Node_DynamicCast_AsTexture;                      // 0x1C0(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1C8(0x1)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x1C9(0x1)(None)
};

// 0x3C (0x3C - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.Tick
struct UReHostSession_ASA_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Submenu_Mods_1_K2Node_ComponentBoundEvent_21_OnSelectionIndexChanged__DelegateSignature
struct UReHostSession_ASA_C_BndEvt__ReHostSession_ASA_Submenu_Mods_1_K2Node_ComponentBoundEvent_21_OnSelectionIndexChanged__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_1_K2Node_ComponentBoundEvent_22_OnSelectionIndexChanged__DelegateSignature
struct UReHostSession_ASA_C_BndEvt__ReHostSession_ASA_AdvancedHeader_1_K2Node_ComponentBoundEvent_22_OnSelectionIndexChanged__DelegateSignature_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.OnModInfoRequested
struct UReHostSession_ASA_C_OnModInfoRequested_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(None)
};

// 0x581 (0x581 - 0x0)
// Function ReHostSession_ASA.ReHostSession_ASA_C.ExecuteUbergraph_ReHostSession_ASA
struct UReHostSession_ASA_C_ExecuteUbergraph_ReHostSession_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(None)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x8(0x8)(Edit, ZeroConstructor)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x10(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x48(0x4)(None)
	uint8                                        Pad_32CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterGame_Menu*                     K2Node_DynamicCast_AsShooter_Game_Menu;            // 0x50(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(None)
	uint8                                        Pad_32CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalUI*                             CallFunc_Create_ReturnValue;                       // 0x60(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x68(0x1)(None)
	uint8                                        Pad_32CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x70(0x8)(Edit, ZeroConstructor)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue_1;                // 0x78(0x8)(Edit, ZeroConstructor)
	class AShooterGame_Menu*                     K2Node_DynamicCast_AsShooter_Game_Menu_1;          // 0x80(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x88(0x1)(None)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x89(0x1)(None)
	uint8                                        Pad_32CF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x8C(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x90(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x94(0x1)(None)
	uint8                                        Pad_32D0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_ComponentBoundEvent_Index_1;                // 0x98(0x4)(None)
	int32                                        K2Node_ComponentBoundEvent_Index;                  // 0x9C(0x4)(None)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0xA0(0x8)(Edit, ZeroConstructor)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0xA8(0x8)(Edit, ZeroConstructor)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue_1;                 // 0xB0(0x8)(Edit, ZeroConstructor)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0xB8(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_HasUGCPrivileges_HasPrivilege;            // 0xC0(0x1)(None)
	uint8                                        Pad_32D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC4(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xC8(0x4)(None)
	uint8                                        Pad_32D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        K2Node_Event_ModID;                                // 0xD0(0x8)(None)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0xD8(0x8)(Edit, ZeroConstructor)
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0xE0(0x488)(Edit, ZeroConstructor)
	bool                                         CallFunc_RegisterModelClass_ReturnValue;           // 0x568(0x1)(None)
	uint8                                        Pad_32D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x56C(0x4)(None)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x570(0x1)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x571(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x572(0x1)(None)
	uint8                                        Pad_32D7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ModPage_C*                         CallFunc_Create_ReturnValue_1;                     // 0x578(0x8)(None)
	bool                                         CallFunc_SubscribeViewToEvents_ReturnValue;        // 0x580(0x1)(None)
};

}
}


