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

// 0x955 (0x955 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.OnEventBroadcasted
struct UUI_GameSlot_C_OnEventBroadcasted_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(None)
	uint8                                        Pad_4A6F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInstallProgressMod>           ModsList;                                          // 0x8(0x10)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x18(0x10)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	uint8                                        Pad_4A70[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstallProgressMod                   NewInformation;                                    // 0x30(0x488)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4B8(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4BC(0x4)(None)
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x4C0(0x488)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x948(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x94C(0x1)(None)
	uint8                                        Pad_4A72[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x950(0x4)(None)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x954(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.SequenceEvent__ENTRYPOINTUI_GameSlot
struct UUI_GameSlot_C_SequenceEvent__ENTRYPOINTUI_GameSlot_Params
{
public:
	class UImage*                                IMG_GameImage;                                     // 0x0(0x8)(None)
};

// 0x5 (0x5 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.VisualFeedbacks
struct UUI_GameSlot_C_VisualFeedbacks_Params
{
public:
	enum class EGameModsEvent                    Selection;                                         // 0x0(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x3(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x4(0x1)(None)
};

// 0x9 (0x9 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.PlayStartingAnimation
struct UUI_GameSlot_C_PlayStartingAnimation_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.GetDownloadCount
struct UUI_GameSlot_C_GetDownloadCount_Params
{
public:
	class FText                                  FinalAmount;                                       // 0x0(0x18)(AssetRegistrySearchable, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_FormatDownloadNumber_FinalAmount;         // 0x18(0x18)(None)
};

// 0x14 (0x14 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.UpdateModCard
struct UUI_GameSlot_C_UpdateModCard_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
	uint8                                        Pad_4A80[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ParentPage_C*                      CallFunc_GetCurrentActivePage_CurrentPage;         // 0x8(0x8)(None)
	enum class ENUM_SideTabs                     CallFunc_GetCurrentActivePage_CurrentActiveTab;    // 0x10(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x12(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x13(0x1)(None)
};

// 0x1D8 (0x1D8 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.GetModSize
struct UUI_GameSlot_C_GetModSize_Params
{
public:
	class FText                                  Result;                                            // 0x0(0x18)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(None)
	uint8                                        Pad_4A90[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFile                                 CallFunc_Array_Get_Item;                           // 0x28(0xF8)(AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x120(0x4)(None)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x124(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x128(0x1)(None)
	uint8                                        Pad_4A91[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x130(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x138(0x8)(None)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x140(0x1)(None)
	uint8                                        Pad_4A92[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x148(0x18)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x160(0x50)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1B0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1C0(0x18)(None)
};

// 0x92 (0x92 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.GetAuthors
struct UUI_GameSlot_C_GetAuthors_Params
{
public:
	class FString                                CombinedAuthorsNames;                              // 0x0(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FString                                Local_TotalAuthors;                                // 0x10(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(None)
	uint8                                        Pad_4AA2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_StringLimit_NewString;                    // 0x30(0x10)(SimpleDisplay, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FModAuthor                            CallFunc_Array_Get_Item;                           // 0x40(0x28)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x68(0x10)(ContainsInstancedReference, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(None)
	uint8                                        Pad_4AA4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x80(0x10)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x90(0x1)(None)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x91(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.GetModName
struct UUI_GameSlot_C_GetModName_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
};

// 0x1D (0x1D - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.ClearAllModsInAllPages
struct UUI_GameSlot_C_ClearAllModsInAllPages_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(None)
	uint8                                        Pad_4AAA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ParentPage_C*                      CallFunc_Array_Get_Item;                           // 0x10(0x8)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.UpdateDownloadCount
struct UUI_GameSlot_C_UpdateDownloadCount_Params
{
public:
	class FText                                  CallFunc_FormatDownloadNumber_FinalAmount;         // 0x0(0x18)(None)
};

// 0x5 (0x5 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.ChangeSlotEnableState
struct UUI_GameSlot_C_ChangeSlotEnableState_Params
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(None)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(None)
};

// 0x1C0 (0x1C0 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.UpdateModSize
struct UUI_GameSlot_C_UpdateModSize_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(None)
	struct FFile                                 CallFunc_Array_Get_Item;                           // 0x8(0xF8)(AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x100(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x104(0x1)(None)
	uint8                                        Pad_4AAE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x108(0x4)(None)
	uint8                                        Pad_4AB0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x110(0x8)(None)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x118(0x1)(None)
	uint8                                        Pad_4AB1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x120(0x8)(None)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0x128(0x18)(AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x140(0x4)(None)
	uint8                                        Pad_4AB2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x148(0x50)(AutoWeak, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x198(0x10)(SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1A8(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.Update LikeStatus
struct UUI_GameSlot_C_Update_LikeStatus_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
};

// 0x9 (0x9 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.UpdateImage
struct UUI_GameSlot_C_UpdateImage_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(None)
};

// 0x99 (0x99 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.UpdateAuthors
struct UUI_GameSlot_C_UpdateAuthors_Params
{
public:
	class FString                                Local_Authors;                                     // 0x0(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(None)
	uint8                                        Pad_4AB6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_StringLimit_NewString;                    // 0x20(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x30(0x18)(AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FModAuthor                            CallFunc_Array_Get_Item;                           // 0x48(0x28)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x74(0x1)(None)
	uint8                                        Pad_4AB7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x78(0x10)(SimpleDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x88(0x10)(None)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x98(0x1)(None)
};

// 0x94 (0x94 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.Try Set Game Version
struct UUI_GameSlot_C_Try_Set_Game_Version_Params
{
public:
	bool                                         IsNumericallySet;                                  // 0x0(0x1)(None)
	uint8                                        Pad_4AC2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp;                                              // 0x8(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<int32>                                Result;                                            // 0x18(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x28(0x1)(None)
	uint8                                        Pad_4AC3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFileIndex                            CallFunc_Array_Get_Item;                           // 0x30(0x38)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Split_LeftS;                              // 0x68(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Split_RightS;                             // 0x78(0x10)(None)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x88(0x1)(None)
	uint8                                        Pad_4AC4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x8C(0x4)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x90(0x4)(None)
};

// 0x211 (0x211 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.FormatDownloadNumber
struct UUI_GameSlot_C_FormatDownloadNumber_Params
{
public:
	int64                                        Downloads;                                         // 0x0(0x8)(None)
	class FText                                  FinalAmount;                                       // 0x8(0x18)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         CallFunc_Less_Int64Int64_ReturnValue;              // 0x20(0x1)(None)
	uint8                                        Pad_4AC5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Divide_Int64Int64_ReturnValue;            // 0x28(0x8)(None)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue;             // 0x30(0x18)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	int64                                        CallFunc_Divide_Int64Int64_ReturnValue_1;          // 0x48(0x8)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x50(0x10)(AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue_1;           // 0x60(0x18)(ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x78(0x10)(Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x88(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x98(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_GetSubstring_ReturnValue;                 // 0xA8(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xB8(0x18)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xD0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xE0(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xF0(0x1)(None)
	uint8                                        Pad_4AC6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0xF8(0x18)(AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	int64                                        CallFunc_Divide_Int64Int64_ReturnValue_2;          // 0x110(0x8)(None)
	int64                                        CallFunc_Divide_Int64Int64_ReturnValue_3;          // 0x118(0x8)(None)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue_2;           // 0x120(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue_3;           // 0x138(0x18)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x150(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x160(0x10)(SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x170(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_GetSubstring_ReturnValue_1;               // 0x180(0x10)(AssetRegistrySearchable, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x190(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x1A0(0x10)(BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x1B0(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x1C8(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x1D8(0x18)(SimpleDisplay, AdvancedDisplay, Protected, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x1F0(0x1)(None)
	uint8                                        Pad_4AC8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue_4;           // 0x1F8(0x18)(None)
	bool                                         CallFunc_Less_Int64Int64_ReturnValue_1;            // 0x210(0x1)(None)
};

// 0x20 (0x20 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.GenerateModNameToolTipWidget
struct UUI_GameSlot_C_GenerateModNameToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(None)
	uint8                                        Pad_4AC9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ToolTipWidget_C*                   CallFunc_Create_ReturnValue;                       // 0x18(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.GenerateAuthorNameToolTipWidget
struct UUI_GameSlot_C_GenerateAuthorNameToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ZeroConstructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor)
	class UUI_ToolTipWidget_C*                   CallFunc_Create_ReturnValue;                       // 0x10(0x8)(None)
};

// 0x488 (0x488 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.Init Mod Info
struct UUI_GameSlot_C_Init_Mod_Info_Params
{
public:
	struct FInstallProgressMod                   NewModInfo;                                        // 0x0(0x488)(None)
};

// 0x278 (0x278 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.OnMouseButtonDown
struct UUI_GameSlot_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(Protected, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x168(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x169(0x1)(None)
	uint8                                        Pad_4AD4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           K2Node_MakeStruct_EventReply;                      // 0x170(0xB8)(None)
	class UUI_RightClickMenu_C*                  CallFunc_CreateRightClickMenu_MenuRef;             // 0x228(0x8)(ZeroConstructor)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x230(0x8)(None)
	float                                        CallFunc_GetMousePosition_LocationX;               // 0x238(0x4)(None)
	float                                        CallFunc_GetMousePosition_LocationY;               // 0x23C(0x4)(None)
	bool                                         CallFunc_GetMousePosition_ReturnValue;             // 0x240(0x1)(None)
	uint8                                        Pad_4AD6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x248(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x250(0x8)(None)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x258(0x10)(None)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x268(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;   // 0x270(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.OnFail_43AE79A54293550780DEB087EC94A5BA
struct UUI_GameSlot_C_OnFail_43AE79A54293550780DEB087EC94A5BA_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.OnSuccess_43AE79A54293550780DEB087EC94A5BA
struct UUI_GameSlot_C_OnSuccess_43AE79A54293550780DEB087EC94A5BA_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.OnFail_9D95364741CA1B5428249F8ACB4C6143
struct UUI_GameSlot_C_OnFail_9D95364741CA1B5428249F8ACB4C6143_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.OnSuccess_9D95364741CA1B5428249F8ACB4C6143
struct UUI_GameSlot_C_OnSuccess_9D95364741CA1B5428249F8ACB4C6143_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.RequestDownloadImage
struct UUI_GameSlot_C_RequestDownloadImage_Params
{
public:
	class FString                                URL_String;                                        // 0x0(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.CustomEvent
struct UUI_GameSlot_C_CustomEvent_Params
{
public:
	struct FModsDirInfo                          ModsDirInfo;                                       // 0x0(0x20)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.CustomEvent_1
struct UUI_GameSlot_C_CustomEvent_1_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.Animation_UpdateModImage
struct UUI_GameSlot_C_Animation_UpdateModImage_Params
{
public:
	class UImage*                                IMG_GameImage;                                     // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.OnListItemObjectSet
struct UUI_GameSlot_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.BP_OnItemSelectionChanged
struct UUI_GameSlot_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.BP_OnItemExpansionChanged
struct UUI_GameSlot_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(None)
};

// 0x47B (0x47B - 0x0)
// Function UI_GameSlot.UI_GameSlot_C.ExecuteUbergraph_UI_GameSlot
struct UUI_GameSlot_C_ExecuteUbergraph_UI_GameSlot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(None)
	uint8                                        Pad_4AFF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0x8(0x8)(Edit, ZeroConstructor)
	class UUI_Prompt_Report_C*                   CallFunc_Create_ReturnValue;                       // 0x10(0x8)(Edit, ZeroConstructor)
	class UUI_Prompt_Uninstall_C*                CallFunc_Create_ReturnValue_1;                     // 0x18(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(Edit, ZeroConstructor)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x30(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x39(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x3A(0x1)(None)
	uint8                                        Pad_4B00[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x3C(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x4C(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x4D(0x1)(None)
	uint8                                        Pad_4B01[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x50(0x8)(Edit, ZeroConstructor)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x58(0x10)(None)
	struct FMargin                               K2Node_MakeStruct_Margin_1;                        // 0x68(0x10)(None)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x78(0x8)(Edit, ZeroConstructor)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x80(0x8)(Edit, ZeroConstructor)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x88(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x90(0x1)(None)
	uint8                                        Pad_4B02[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x98(0x8)(Edit, ZeroConstructor)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_1;                      // 0xA0(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xA8(0x10)(Edit, ZeroConstructor)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture;                        // 0xB8(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xC0(0x10)(Edit, ZeroConstructor)
	class UTexture2DDynamic*                     Temp_object_Variable_1;                            // 0xD0(0x8)(Edit, ZeroConstructor)
	bool                                         Temp_bool_Variable_1;                              // 0xD8(0x1)(None)
	uint8                                        Pad_4B03[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable_2;                            // 0xE0(0x8)(Edit, ZeroConstructor)
	class UUI_ModPage_C*                         CallFunc_Create_ReturnValue_2;                     // 0xE8(0x8)(Edit, ZeroConstructor)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0xF0(0x8)(Edit, ZeroConstructor)
	class FString                                K2Node_CustomEvent_URL_String;                     // 0xF8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class UTexture2DDynamic*                     Temp_object_Variable_3;                            // 0x108(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x110(0x1)(None)
	uint8                                        Pad_4B04[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModsDirInfo                          K2Node_CustomEvent_ModsDirInfo;                    // 0x118(0x20)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0x138(0x38)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x170(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x180(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace; // 0x190(0x1)(None)
	uint8                                        Pad_4B05[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                K2Node_CustomEvent_IMG_GameImage;                  // 0x198(0x8)(Edit, ZeroConstructor)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x1A0(0x14)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x1B4(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x1B5(0x1)(None)
	uint8                                        Pad_4B06[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Select_Default;                             // 0x1B8(0x8)(Edit, ZeroConstructor)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x1C0(0xD0)(Edit, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_2;                      // 0x290(0x8)(Edit, ZeroConstructor)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x298(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x2A0(0x10)(Edit, ZeroConstructor)
	class UObject*                               K2Node_Event_ListItemObject;                       // 0x2B0(0x8)(Edit, ZeroConstructor)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_3;                      // 0x2B8(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x2C0(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x2D0(0x1)(None)
	bool                                         K2Node_Event_bIsSelected;                          // 0x2D1(0x1)(None)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x2D2(0x1)(None)
	uint8                                        Pad_4B07[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_ModPage_C*                         CallFunc_CreateModPageMenu_ModPageRef;             // 0x2D8(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_SubscribeViewToEvents_ReturnValue;        // 0x2E0(0x1)(None)
	uint8                                        Pad_4B08[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x2E8(0x18)(AdvancedDisplay, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x300(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_StringLimit_NewString;                    // 0x310(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_StringLimit_NewString_1;                  // 0x320(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x330(0x18)(SimpleDisplay, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x348(0x18)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x360(0x14)(ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4B09[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_5;   // 0x378(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x380(0x1)(None)
	uint8                                        Pad_4B0A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Select_Default_1;                           // 0x388(0x8)(Edit, ZeroConstructor)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x390(0xD0)(Edit, ZeroConstructor)
	class UAsyncTaskDownloadImage*               CallFunc_DownloadImage_ReturnValue;                // 0x460(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x468(0x1)(None)
	uint8                                        Pad_4B0B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAsyncTaskDownloadImage*               CallFunc_DownloadImage_ReturnValue_1;              // 0x470(0x8)(None)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x478(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x479(0x1)(None)
	bool                                         CallFunc_InitializeModView_ReturnValue;            // 0x47A(0x1)(None)
};

}
}


