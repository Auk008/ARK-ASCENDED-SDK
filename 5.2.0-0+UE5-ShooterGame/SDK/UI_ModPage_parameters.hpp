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

// 0xDDD (0xDDD - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnEventBroadcasted
struct UUI_ModPage_C_OnEventBroadcasted_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(None)
	uint8                                        Pad_3464[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInstallProgressMod>           ModsList;                                          // 0x8(0x10)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FCFCoreApiResponsePagination          Pagination;                                        // 0x18(0x10)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	uint8                                        Pad_3465[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstallProgressMod                   NewInformation;                                    // 0x30(0x488)(ZeroConstructor, ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FInstallProgressMod                   TempMod;                                           // 0x4B8(0x488)(ZeroConstructor, SimpleDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x940(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x944(0x4)(None)
	struct FInstallProgressMod                   CallFunc_Array_Get_Item;                           // 0x948(0x488)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xDD0(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xDD4(0x1)(None)
	uint8                                        Pad_3467[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xDD8(0x4)(None)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0xDDC(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.GetClose_B
struct UUI_ModPage_C_GetClose_B_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.SequenceEvent__ENTRYPOINTUI_ModPage_0
struct UUI_ModPage_C_SequenceEvent__ENTRYPOINTUI_ModPage_0_Params
{
public:
	class UImage*                                IMG_Mod;                                           // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.SequenceEvent__ENTRYPOINTUI_ModPage
struct UUI_ModPage_C_SequenceEvent__ENTRYPOINTUI_ModPage_Params
{
public:
	class UImage*                                IMG_Mod;                                           // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_ModPage.UI_ModPage_C.BPHighlightWidgetOnStart
struct UUI_ModPage_C_BPHighlightWidgetOnStart_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_ModPage.UI_ModPage_C.BPEscapeClosed
struct UUI_ModPage_C_BPEscapeClosed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x2 (0x2 - 0x0)
// Function UI_ModPage.UI_ModPage_C.UpdateStatusStage
struct UUI_ModPage_C_UpdateStatusStage_Params
{
public:
	enum class EInstalledModStatus               Selection;                                         // 0x0(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(None)
};

// 0x216 (0x216 - 0x0)
// Function UI_ModPage.UI_ModPage_C.SetModVersion
struct UUI_ModPage_C_SetModVersion_Params
{
public:
	TArray<class FString>                        NameLikeChar;                                      // 0x0(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                ModsFileName;                                      // 0x10(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x2C(0x4)(None)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x30(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x31(0x1)(None)
	uint8                                        Pad_347C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x34(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x38(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x3C(0x4)(None)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x40(0x10)(ContainsInstancedReference, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x50(0x18)(BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Array_Get_Item;                           // 0x68(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(None)
	bool                                         CallFunc_IsNumeric_ReturnValue;                    // 0x7C(0x1)(None)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x7D(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x7E(0x1)(None)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x7F(0x1)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x80(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FText                                  Temp_text_Variable;                                // 0x90(0x18)(AutoWeak, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         Temp_bool_Variable;                                // 0xA8(0x1)(None)
	uint8                                        Pad_347D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0xB0(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0xC0(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FText                                  K2Node_Select_Default;                             // 0xD0(0x18)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        CallFunc_ReplaceInline_ReturnValue;                // 0xE8(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xEC(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0xF0(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xF4(0x1)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xF5(0x1)(None)
	uint8                                        Pad_347E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xF8(0x4)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xFC(0x1)(None)
	uint8                                        Pad_347F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Len_ReturnValue;                          // 0x100(0x4)(None)
	int32                                        CallFunc_FindSubstring_ReturnValue;                // 0x104(0x4)(None)
	class FString                                CallFunc_GetSubstring_ReturnValue;                 // 0x108(0x10)(AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FFile                                 CallFunc_Array_Get_Item_2;                         // 0x118(0xF8)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x210(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x214(0x1)(None)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x215(0x1)(None)
};

// 0x330 (0x330 - 0x0)
// Function UI_ModPage.UI_ModPage_C.InitAllVars
struct UUI_ModPage_C_InitAllVars_Params
{
public:
	class FText                                  CallFunc_GetModVersion_FinalAmount;                // 0x0(0x18)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_GetAuthorName_CombinedAuthorsNames;       // 0x18(0x10)(SimpleDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_GetDownloadCount_FinalAmount;             // 0x40(0x18)(AssetRegistrySearchable, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_GetModName_Name;                          // 0x58(0x10)(BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	struct FCFCoreFileSize                       CallFunc_GetModSize_SizeStruct;                    // 0x68(0xC)(None)
	uint8                                        Pad_3486[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetModSize_SizeInText;                    // 0x78(0x18)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	int64                                        CallFunc_GetModSize_bytes;                         // 0x90(0x8)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x98(0x18)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB0(0x1)(None)
	uint8                                        Pad_3489[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2DDynamic*                     CallFunc_Array_Get_Item;                           // 0xB8(0x8)(Edit, ZeroConstructor)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0xC0(0xD0)(Edit, ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x190(0xD0)(Edit, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_2;                    // 0x260(0xD0)(None)
};

// 0x2 (0x2 - 0x0)
// Function UI_ModPage.UI_ModPage_C.UpdateScreenshotButtonsEnabled
struct UUI_ModPage_C_UpdateScreenshotButtonsEnabled_Params
{
public:
	bool                                         CallFunc_CanGoToPreviousImage_ReturnValue;         // 0x0(0x1)(None)
	bool                                         CallFunc_CanGoToNextImage_ReturnValue;             // 0x1(0x1)(None)
};

// 0x2 (0x2 - 0x0)
// Function UI_ModPage.UI_ModPage_C.CanGoToPreviousImage
struct UUI_ModPage_C_CanGoToPreviousImage_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1(0x1)(None)
};

// 0xD (0xD - 0x0)
// Function UI_ModPage.UI_ModPage_C.CanGoToNextImage
struct UUI_ModPage_C_CanGoToNextImage_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	uint8                                        Pad_348D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC(0x1)(None)
};

// 0xE6 (0xE6 - 0x0)
// Function UI_ModPage.UI_ModPage_C.SetUnavailableState
struct UUI_ModPage_C_SetUnavailableState_Params
{
public:
	bool                                         Avaiable;                                          // 0x0(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x3(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x5(0x1)(None)
	uint8                                        Pad_348E[0xA];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x10(0xD0)(None)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xE0(0x1)(None)
	bool                                         Temp_bool_Variable_1;                              // 0xE1(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0xE2(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0xE3(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xE4(0x1)(None)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0xE5(0x1)(None)
};

// 0x12 (0x12 - 0x0)
// Function UI_ModPage.UI_ModPage_C.LaunchCommentsURL
struct UUI_ModPage_C_LaunchCommentsURL_Params
{
public:
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x0(0x10)(None)
	bool                                         CallFunc_CanLaunchURL_ReturnValue;                 // 0x10(0x1)(None)
	bool                                         CallFunc_CanLaunchURL_ReturnValue_1;               // 0x11(0x1)(None)
};

// 0x27 (0x27 - 0x0)
// Function UI_ModPage.UI_ModPage_C.ActionSwitch
struct UUI_ModPage_C_ActionSwitch_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(None)
	enum class EViewState                        State;                                             // 0x18(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x19(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A(0x1)(None)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x1B(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x1C(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x1D(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x1E(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x1F(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x20(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x21(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x22(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x23(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x24(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x25(0x1)(None)
	bool                                         CallFunc_IsVisible_ReturnValue_1;                  // 0x26(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_ModPage.UI_ModPage_C.PlayAnimationThumbnail
struct UUI_ModPage_C_PlayAnimationThumbnail_Params
{
public:
	bool                                         AlreadyLoaded;                                     // 0x0(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(None)
	uint8                                        Pad_3492[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(None)
};

// 0x2 (0x2 - 0x0)
// Function UI_ModPage.UI_ModPage_C.FindThumbnail
struct UUI_ModPage_C_FindThumbnail_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(None)
};

// 0x9 (0x9 - 0x0)
// Function UI_ModPage.UI_ModPage_C.SetThumbnailImage
struct UUI_ModPage_C_SetThumbnailImage_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(None)
};

// 0x9 (0x9 - 0x0)
// Function UI_ModPage.UI_ModPage_C.PlayStartinAnimation
struct UUI_ModPage_C_PlayStartinAnimation_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(None)
};

// 0x7 (0x7 - 0x0)
// Function UI_ModPage.UI_ModPage_C.UpdateUnistallButtonState
struct UUI_ModPage_C_UpdateUnistallButtonState_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x4(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x5(0x1)(None)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x6(0x1)(None)
};

// 0xA8 (0xA8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.AssignLastUpdatedInformation
struct UUI_ModPage_C_AssignLastUpdatedInformation_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
	uint8                                        Pad_3497[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetDay_ReturnValue;                       // 0x4(0x4)(None)
	int32                                        CallFunc_GetYear_ReturnValue;                      // 0x8(0x4)(None)
	uint8                                        Pad_3498[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x10(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x20(0x4)(None)
	uint8                                        Pad_349A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(SimpleDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x38(0x10)(AssetRegistrySearchable, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        CallFunc_GetMonth_ReturnValue;                     // 0x48(0x4)(None)
	uint8                                        Pad_349B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue_2;           // 0x50(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x60(0x10)(Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x70(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x80(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x90(0x18)(None)
};

// 0x2 (0x2 - 0x0)
// Function UI_ModPage.UI_ModPage_C.Init All Widget Refs
struct UUI_ModPage_C_Init_All_Widget_Refs_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_ModPage.UI_ModPage_C.CloseBNavigation
struct UUI_ModPage_C_CloseBNavigation_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(None)
	uint8                                        Pad_34A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function UI_ModPage.UI_ModPage_C.InstallBCustomNavigation
struct UUI_ModPage_C_InstallBCustomNavigation_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(None)
	uint8                                        Pad_34A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ZeroConstructor)
	TArray<class UUI_StoreMenu_C*>               CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x10(0x10)(ZeroConstructor)
	class UUI_StoreMenu_C*                       CallFunc_Array_Get_Item;                           // 0x20(0x8)(None)
};

// 0xC8 (0xC8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.SetSubCategories
struct UUI_ModPage_C_SetSubCategories_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(None)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0xC(0x10)(None)
	uint8                                        Pad_34B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Category_C*                        CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor)
	struct FCategory                             CallFunc_Array_Get_Item;                           // 0x28(0x78)(BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA0(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA4(0x1)(None)
	uint8                                        Pad_34B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xA8(0x18)(None)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0xC0(0x8)(None)
};

// 0x2D (0x2D - 0x0)
// Function UI_ModPage.UI_ModPage_C.CheckIfHideReadMoreButton
struct UUI_ModPage_C_CheckIfHideReadMoreButton_Params
{
public:
	class FString                                Text;                                              // 0x0(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x10(0x4)(None)
	uint8                                        Pad_34B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x18(0x10)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x2C(0x1)(None)
};

// 0x160 (0x160 - 0x0)
// Function UI_ModPage.UI_ModPage_C.ShortenModeDownloads
struct UUI_ModPage_C_ShortenModeDownloads_Params
{
public:
	int64                                        Downloads;                                         // 0x0(0x8)(None)
	class FText                                  ShortenDownloads;                                  // 0x8(0x18)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FText                                  _currentSuffix;                                    // 0x20(0x18)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	double                                       _currentDownloads;                                 // 0x38(0x8)(None)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x40(0x4)(None)
	uint8                                        Pad_34BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x48(0x8)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x50(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x58(0x8)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x60(0x1)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x61(0x1)(None)
	uint8                                        Pad_34BC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x68(0x8)(None)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x70(0x4)(None)
	uint8                                        Pad_34BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x78(0x50)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0xC8(0x8)(None)
	class FText                                  CallFunc_Conv_DoubleToText_ReturnValue;            // 0xD0(0x18)(AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xE8(0x50)(AutoWeak, ContainsInstancedReference, Protected, BlueprintCallable, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x138(0x10)(BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x148(0x18)(None)
};

// 0x2A0 (0x2A0 - 0x0)
// Function UI_ModPage.UI_ModPage_C.UpdateScreenshotImage
struct UUI_ModPage_C_UpdateScreenshotImage_Params
{
public:
	int32                                        ImageIndex;                                        // 0x0(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(None)
	uint8                                        Pad_34C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor)
	class UTexture2DDynamic*                     CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x18(0x1)(None)
	uint8                                        Pad_34C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Select_Default;                             // 0x20(0x8)(ZeroConstructor)
	uint8                                        Pad_34C6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x30(0xD0)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x100(0xD0)(ZeroConstructor, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_2;                    // 0x1D0(0xD0)(None)
};

// 0xA8 (0xA8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.AssignDateAddedInformation
struct UUI_ModPage_C_AssignDateAddedInformation_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
	uint8                                        Pad_34D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetDay_ReturnValue;                       // 0x4(0x4)(None)
	int32                                        CallFunc_GetYear_ReturnValue;                      // 0x8(0x4)(None)
	uint8                                        Pad_34D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x10(0x10)(AssetRegistrySearchable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x20(0x4)(None)
	uint8                                        Pad_34D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(ContainsInstancedReference, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x38(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        CallFunc_GetMonth_ReturnValue;                     // 0x48(0x4)(None)
	uint8                                        Pad_34D4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue_2;           // 0x50(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x60(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x70(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x80(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x90(0x18)(None)
};

// 0x9 (0x9 - 0x0)
// Function UI_ModPage.UI_ModPage_C.InitModPageDefault
struct UUI_ModPage_C_InitModPageDefault_Params
{
public:
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0(0x8)(None)
	bool                                         CallFunc_InitializeModView_ReturnValue;            // 0x8(0x1)(None)
};

// 0x16A (0x16A - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnMouseButtonDown
struct UUI_ModPage_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(None)
	bool                                         CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x168(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x169(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnFail_13897D64427114E2F64F66A69ECC1173
struct UUI_ModPage_C_OnFail_13897D64427114E2F64F66A69ECC1173_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnSuccess_13897D64427114E2F64F66A69ECC1173
struct UUI_ModPage_C_OnSuccess_13897D64427114E2F64F66A69ECC1173_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnFail_C0E5239F4CDF977407A263886857339A
struct UUI_ModPage_C_OnFail_C0E5239F4CDF977407A263886857339A_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnSuccess_C0E5239F4CDF977407A263886857339A
struct UUI_ModPage_C_OnSuccess_C0E5239F4CDF977407A263886857339A_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnFail_FC28BA524F43B59D65346B94C5AD9301
struct UUI_ModPage_C_OnFail_FC28BA524F43B59D65346B94C5AD9301_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnSuccess_FC28BA524F43B59D65346B94C5AD9301
struct UUI_ModPage_C_OnSuccess_FC28BA524F43B59D65346B94C5AD9301_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnSearch
struct UUI_ModPage_C_OnSearch_Params
{
public:
	class FText                                  Search_Input;                                      // 0x0(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_ModPage.UI_ModPage_C.UpdateSearch
struct UUI_ModPage_C_UpdateSearch_Params
{
public:
	class FText                                  SearchInput;                                       // 0x0(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.Animation_UpdateThumbnail
struct UUI_ModPage_C_Animation_UpdateThumbnail_Params
{
public:
	class UImage*                                IMG_Mod;                                           // 0x0(0x8)(None)
};

// 0x19 (0x19 - 0x0)
// Function UI_ModPage.UI_ModPage_C.ButtonCall
struct UUI_ModPage_C_ButtonCall_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(None)
	enum class EViewState                        State;                                             // 0x18(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnCategoryResults
struct UUI_ModPage_C_OnCategoryResults_Params
{
public:
	TArray<struct FCategory>                     Categories;                                        // 0x0(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnCategoryError
struct UUI_ModPage_C_OnCategoryError_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_ModPage.UI_ModPage_C.OnDescriptionError
struct UUI_ModPage_C_OnDescriptionError_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_ModPage.UI_ModPage_C.CustomEvent_0
struct UUI_ModPage_C_CustomEvent_0_Params
{
public:
	class FString                                Description;                                       // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_ModPage.UI_ModPage_C.CustomEvent_3
struct UUI_ModPage_C_CustomEvent_3_Params
{
public:
	class FString                                Temp_user_token;                                   // 0x0(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_ModPage.UI_ModPage_C.CustomEvent_4
struct UUI_ModPage_C_CustomEvent_4_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x20 (0x20 - 0x0)
// Function UI_ModPage.UI_ModPage_C.CustomEvent
struct UUI_ModPage_C_CustomEvent_Params
{
public:
	struct FModsDirInfo                          ModsDirInfo;                                       // 0x0(0x20)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_ModPage.UI_ModPage_C.CustomEvent_1
struct UUI_ModPage_C_CustomEvent_1_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModPage.UI_ModPage_C.InitModByID
struct UUI_ModPage_C_InitModByID_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(None)
};

// 0x190 (0x190 - 0x0)
// Function UI_ModPage.UI_ModPage_C.SuccessIGuess
struct UUI_ModPage_C_SuccessIGuess_Params
{
public:
	struct FCFCoreMod                            Mod;                                               // 0x0(0x190)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_ModPage.UI_ModPage_C.How could we possibly ever fail
struct UUI_ModPage_C_How_could_we_possibly_ever_fail_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x3C (0x3C - 0x0)
// Function UI_ModPage.UI_ModPage_C.Tick
struct UUI_ModPage_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x99C (0x99C - 0x0)
// Function UI_ModPage.UI_ModPage_C.ExecuteUbergraph_UI_ModPage
struct UUI_ModPage_C_ExecuteUbergraph_UI_ModPage_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_3524[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class UUI_Prompt_Uninstall_C*                CallFunc_Create_ReturnValue;                       // 0x18(0x8)(Edit, ZeroConstructor)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x20(0x10)(AssetRegistrySearchable, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x30(0x10)(ContainsInstancedReference, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x40(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x50(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(None)
	uint8                                        Pad_3525[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x68(0x8)(Edit, ZeroConstructor)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x70(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x78(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x88(0x10)(Edit, ZeroConstructor)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x98(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xA0(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0xA1(0x1)(None)
	uint8                                        Pad_3526[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0xA8(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xB8(0x10)(Edit, ZeroConstructor)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_2;                      // 0xC8(0x8)(Edit, ZeroConstructor)
	int32                                        Temp_int_Variable;                                 // 0xD0(0x4)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xD4(0x10)(Edit, ZeroConstructor)
	uint8                                        Pad_3527[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_3;                      // 0xE8(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0xF0(0x10)(Edit, ZeroConstructor)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_1;         // 0x100(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x108(0x1)(None)
	uint8                                        Pad_3528[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x10C(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x11C(0x10)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x12C(0x10)(Edit, ZeroConstructor)
	uint8                                        Pad_3529[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_2;         // 0x140(0x8)(Edit, ZeroConstructor)
	int32                                        Temp_int_Variable_1;                               // 0x148(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x14C(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x14D(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x14E(0x1)(None)
	uint8                                        Pad_352A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBindButtonSystem*                     CallFunc_GetEngineSubsystem_ReturnValue_3;         // 0x150(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x158(0x10)(Edit, ZeroConstructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x168(0x4)(None)
	uint8                                        Pad_352B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_Search_Input;                         // 0x170(0x18)(SimpleDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class FText                                  K2Node_Event_SearchInput;                          // 0x188(0x18)(AssetRegistrySearchable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class UImage*                                K2Node_CustomEvent_IMG_Mod;                        // 0x1A0(0x8)(Edit, ZeroConstructor)
	struct FModAsset                             CallFunc_Array_Get_Item;                           // 0x1A8(0x58)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x200(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x204(0x1)(None)
	uint8                                        Pad_352C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAsyncTaskDownloadImage*               CallFunc_DownloadImage_ReturnValue;                // 0x208(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x210(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x211(0x1)(None)
	uint8                                        Pad_352D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x214(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x218(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x21C(0x1)(None)
	uint8                                        Pad_352E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x220(0x4)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x224(0x4)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x228(0x10)(Edit, ZeroConstructor)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_4;         // 0x238(0x8)(Edit, ZeroConstructor)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x240(0x8)(Edit, ZeroConstructor)
	class UTexture2DDynamic*                     Temp_object_Variable;                              // 0x248(0x8)(Edit, ZeroConstructor)
	class UCFCoreUISubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x250(0x8)(Edit, ZeroConstructor)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x258(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x259(0x1)(None)
	uint8                                        Pad_352F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x25C(0x10)(Edit, ZeroConstructor)
	uint8                                        Pad_3530[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_CustomEvent_Key;                            // 0x270(0x18)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	enum class EViewState                        K2Node_CustomEvent_State;                          // 0x288(0x1)(None)
	uint8                                        Pad_3531[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_4;                      // 0x290(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x298(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_SubscribeViewToEvents_ReturnValue;        // 0x2A8(0x1)(None)
	uint8                                        Pad_3532[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x2B0(0x18)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAsyncTaskDownloadImage*               CallFunc_DownloadImage_ReturnValue_1;              // 0x2C8(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x2D0(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x2D1(0x1)(None)
	uint8                                        Pad_3533[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCategory>                     K2Node_CustomEvent_categories;                     // 0x2D8(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x2E8(0x1)(None)
	uint8                                        Pad_3534[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCategory                             CallFunc_Array_Get_Item_1;                         // 0x2F0(0x78)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x368(0x4)(None)
	uint8                                        Pad_3535[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAsyncTaskDownloadImage*               CallFunc_DownloadImage_ReturnValue_2;              // 0x370(0x8)(Edit, ZeroConstructor)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x378(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x390(0x1)(None)
	uint8                                        Pad_3536[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x394(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x398(0x1)(None)
	uint8                                        Pad_3537[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreError                          K2Node_CustomEvent_error_4;                        // 0x3A0(0x38)(SimpleDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x3D8(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_CanGoToNextImage_ReturnValue;             // 0x3E0(0x1)(None)
	uint8                                        Pad_3538[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x3E4(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_CanGoToPreviousImage_ReturnValue;         // 0x3F4(0x1)(None)
	uint8                                        Pad_3539[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Prompt_GoToComments_C*             CallFunc_Create_ReturnValue_1;                     // 0x3F8(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x400(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x401(0x1)(None)
	uint8                                        Pad_353A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x404(0x10)(Edit, ZeroConstructor)
	uint8                                        Pad_353B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBindButtonSystem*                     CallFunc_GetEngineSubsystem_ReturnValue_5;         // 0x418(0x8)(Edit, ZeroConstructor)
	class UTexture2DDynamic*                     CallFunc_Array_Get_Item_2;                         // 0x420(0x8)(Edit, ZeroConstructor)
	uint8                                        Pad_353C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x430(0xD0)(Edit, ZeroConstructor, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_5;                      // 0x500(0x8)(Edit, ZeroConstructor)
	class UTexture2DDynamic*                     Temp_object_Variable_1;                            // 0x508(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0x510(0x1)(None)
	uint8                                        Pad_353D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreError                          K2Node_CustomEvent_error_3;                        // 0x518(0x38)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture;                        // 0x550(0x8)(Edit, ZeroConstructor)
	class FString                                K2Node_CustomEvent_description;                    // 0x558(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class FString                                K2Node_Select_Default;                             // 0x568(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x578(0x18)(AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x590(0x10)(Edit, ZeroConstructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x5A0(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x5A4(0x1)(None)
	uint8                                        Pad_353E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x5A8(0x4)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x5AC(0x1)(None)
	uint8                                        Pad_353F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_temp_user_token;                // 0x5B0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x5C0(0x10)(AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x5D0(0x10)(ContainsInstancedReference, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	struct FCFCoreError                          K2Node_CustomEvent_error_2;                        // 0x5E0(0x38)(SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue;             // 0x618(0x18)(AssetRegistrySearchable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_1;                      // 0x630(0x8)(Edit, ZeroConstructor)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x638(0x10)(ContainsInstancedReference, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x648(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x658(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_CanLaunchURL_ReturnValue;                 // 0x668(0x1)(None)
	uint8                                        Pad_3540[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0x66C(0x10)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0x67C(0x1)(None)
	uint8                                        Pad_3541[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x680(0x18)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x698(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_StringLimit_NewString;                    // 0x6A8(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_StringLimit_NewString_1;                  // 0x6B8(0x10)(AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x6C8(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_4;          // 0x6E0(0x18)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	struct FModsDirInfo                          K2Node_CustomEvent_ModsDirInfo;                    // 0x6F8(0x20)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	struct FCFCoreError                          K2Node_CustomEvent_error_1;                        // 0x718(0x38)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_18;           // 0x750(0x10)(Edit, ZeroConstructor)
	class UUI_ZoomImage_C*                       CallFunc_Create_ReturnValue_2;                     // 0x760(0x8)(Edit, ZeroConstructor)
	int64                                        K2Node_CustomEvent_modId;                          // 0x768(0x8)(None)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x770(0x8)(Edit, ZeroConstructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x778(0x8)(Edit, ZeroConstructor)
	int32                                        Temp_int_Variable_2;                               // 0x780(0x4)(None)
	uint8                                        Pad_3543[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreMod                            K2Node_CustomEvent_mod;                            // 0x788(0x190)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0x918(0x38)(None)
	class UTexture2DDynamic*                     Temp_object_Variable_2;                            // 0x950(0x8)(None)
	bool                                         CallFunc_Is_There_Enough_Space_to_Install_Mod_EnoughSpace; // 0x958(0x1)(None)
	uint8                                        Pad_3544[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x95C(0x4)(None)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x960(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x998(0x4)(None)
};

}
}


