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

// 0x38 (0x38 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnEventBroadcasted
struct UBP_ServerModsWidget_C_OnEventBroadcasted_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(None)
	uint8                                        Pad_48AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInstallProgressMod>           ModsList;                                          // 0x8(0x10)(Edit, ZeroConstructor)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x18(0x10)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x29(0x1)(None)
	uint8                                        Pad_48AB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x30(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.CheckIfAllInstalled
struct UBP_ServerModsWidget_C_CheckIfAllInstalled_Params
{
public:
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x0(0x1)(None)
};

// 0x5F8 (0x5F8 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnRespone_0
struct UBP_ServerModsWidget_C_OnRespone_0_Params
{
public:
	TArray<struct FInstallProgressMod>           Mods;                                              // 0x0(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(None)
	uint8                                        Pad_48D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x20(0x488)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4A8(0x1)(None)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x4A9(0x1)(None)
	uint8                                        Pad_48D4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4AC(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x4B0(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x4B4(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x4B8(0x1)(None)
	uint8                                        Pad_48D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x4BC(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x4C0(0x4)(None)
	uint8                                        Pad_48D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_GameSlot_C*                        CallFunc_Create_ReturnValue;                       // 0x4C8(0x8)(Edit, ZeroConstructor)
	struct FFile                                 CallFunc_Array_Get_Item_1;                         // 0x4D0(0xF8)(None)
	int64                                        CallFunc_Add_Int64Int64_ReturnValue;               // 0x5C8(0x8)(None)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x5D0(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5D1(0x1)(None)
	uint8                                        Pad_48D7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x5D4(0x4)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x5D8(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x5E8(0x1)(None)
	uint8                                        Pad_48D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWrapBoxSlot*                          CallFunc_AddChildToWrapBox_ReturnValue;            // 0x5F0(0x8)(None)
};

// 0x2C (0x2C - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdateInfo
struct UBP_ServerModsWidget_C_UpdateInfo_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(Edit, ZeroConstructor)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x20(0x8)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(None)
};

// 0x50 (0x50 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Get Server Mods Delegate
struct UBP_ServerModsWidget_C_Get_Server_Mods_Delegate_Params
{
public:
	FDelegateProperty_                           JoinEvent;                                         // 0x0(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           BackEvent;                                         // 0x10(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           ReportEvent;                                       // 0x20(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           FavoriteEvent;                                     // 0x30(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           ErrorEvent;                                        // 0x40(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.EndDownloadCheck
struct UBP_ServerModsWidget_C_EndDownloadCheck_Params
{
public:
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0(0x8)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x8(0x1)(None)
	uint8                                        Pad_4933[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xC(0x4)(None)
};

// 0x60 (0x60 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdateTexts
struct UBP_ServerModsWidget_C_UpdateTexts_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
	uint8                                        Pad_4937[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_FormatFileSize_ReturnValue;               // 0x8(0x10)(SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x30(0x18)(AssetRegistrySearchable, AdvancedDisplay, Protected, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x48(0x18)(None)
};

// 0x6C4 (0x6C4 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.UpdateInstalledMods
struct UBP_ServerModsWidget_C_UpdateInstalledMods_Params
{
public:
	TArray<struct FInstalledMod>                 Installed_mods;                                    // 0x0(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<int32>                                IDs;                                               // 0x10(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, UObjectWrapper, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x30(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x34(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(None)
	uint8                                        Pad_493F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x3C(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x40(0x4)(None)
	uint8                                        Pad_4940[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstalledMod                         CallFunc_Array_Get_Item;                           // 0x48(0x3B0)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x3F8(0x1)(None)
	uint8                                        Pad_4941[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x3FC(0x4)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x400(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x404(0x4)(None)
	struct FCFCoreMod                            CallFunc_Array_Get_Item_1;                         // 0x408(0x190)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x598(0x4)(None)
	uint8                                        Pad_4942[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFile                                 CallFunc_Array_Get_Item_2;                         // 0x5A0(0xF8)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x698(0x4)(None)
	uint8                                        Pad_4943[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Add_Int64Int64_ReturnValue;               // 0x6A0(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x6A8(0x1)(None)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x6A9(0x1)(None)
	uint8                                        Pad_4944[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue_1;            // 0x6AC(0x4)(None)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x6B0(0x4)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x6B4(0x1)(None)
	uint8                                        Pad_4945[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x6B8(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x6BC(0x1)(None)
	uint8                                        Pad_4946[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x6C0(0x4)(None)
};

// 0x38 (0x38 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.OnError
struct UBP_ServerModsWidget_C_OnError_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x39 (0x39 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.CreateModsList
struct UBP_ServerModsWidget_C_CreateModsList_Params
{
public:
	class FText                                  ServerName;                                        // 0x0(0x18)(ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	int64                                        ServerID;                                          // 0x18(0x8)(None)
	TArray<int64>                                ModsIds;                                           // 0x20(0x10)(None)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x30(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(None)
};

// 0x19 (0x19 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.ControllerAction
struct UBP_ServerModsWidget_C_ControllerAction_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(None)
	enum class EViewState                        State;                                             // 0x18(0x1)(None)
};

// 0x20 (0x20 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.CustomEvent
struct UBP_ServerModsWidget_C_CustomEvent_Params
{
public:
	struct FModsDirInfo                          ModsDirInfo;                                       // 0x0(0x20)(None)
};

// 0x38 (0x38 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.CustomEvent_1
struct UBP_ServerModsWidget_C_CustomEvent_1_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x3C (0x3C - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.Tick
struct UBP_ServerModsWidget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x634 (0x634 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.ExecuteUbergraph_BP_ServerModsWidget
struct UBP_ServerModsWidget_C_ExecuteUbergraph_BP_ServerModsWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x24(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x34(0x1)(None)
	uint8                                        Pad_494A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x38(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x40(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x50(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x60(0x1)(None)
	uint8                                        Pad_494B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_FormatFileSize_ReturnValue;               // 0x68(0x10)(NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x78(0x18)(SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, UObjectWrapper, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x90(0x4)(None)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x94(0x1)(None)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x95(0x1)(None)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x96(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x97(0x1)(None)
	struct FKey                                  K2Node_CustomEvent_Key;                            // 0x98(0x18)(AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash)
	enum class EViewState                        K2Node_CustomEvent_State;                          // 0xB0(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xB1(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0xB2(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0xB3(0x1)(None)
	uint8                                        Pad_494C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_ServerModsLoading_C*               CallFunc_Create_ReturnValue;                       // 0xB8(0x8)(Edit, ZeroConstructor)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0xC0(0x1)(None)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0xC1(0x1)(None)
	uint8                                        Pad_494D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC4(0x4)(None)
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0xC8(0x488)(Edit, ZeroConstructor, ContainsInstancedReference, Protected, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x550(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x554(0x1)(None)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x555(0x1)(None)
	uint8                                        Pad_494E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x558(0x4)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x55C(0x4)(None)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x560(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_SubscribeViewToEvents_ReturnValue;        // 0x568(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0x569(0x1)(None)
	uint8                                        Pad_494F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModsDirInfo                          K2Node_CustomEvent_ModsDirInfo;                    // 0x570(0x20)(Protected, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash)
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0x590(0x38)(None)
	class UBindButtonSystem*                     CallFunc_GetEngineSubsystem_ReturnValue_1;         // 0x5C8(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x5D0(0x10)(Edit, ZeroConstructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x5E0(0x1)(None)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5E1(0x1)(None)
	uint8                                        Pad_4950[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x5E8(0x8)(Edit, ZeroConstructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x5F0(0x8)(None)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x5F8(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x630(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.StartDownloads__DelegateSignature
struct UBP_ServerModsWidget_C_StartDownloads__DelegateSignature_Params
{
public:
	int64                                        ServerID;                                          // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.JoinEvent__DelegateSignature
struct UBP_ServerModsWidget_C_JoinEvent__DelegateSignature_Params
{
public:
	int64                                        ServerID;                                          // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.FavoriteEvent__DelegateSignature
struct UBP_ServerModsWidget_C_FavoriteEvent__DelegateSignature_Params
{
public:
	int64                                        ServerID;                                          // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function BP_ServerModsWidget.BP_ServerModsWidget_C.RepotrEvent__DelegateSignature
struct UBP_ServerModsWidget_C_RepotrEvent__DelegateSignature_Params
{
public:
	int64                                        ServerID;                                          // 0x0(0x8)(None)
};

}
}


