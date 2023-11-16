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

// 0x4C9 (0x4C9 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.Is There Enough Space to Install Mod
struct UBPFL_GlobalFunctions_C_Is_There_Enough_Space_to_Install_Mod_Params
{
public:
	int64                                        DiskSpace;                                         // 0x0(0x8)(None)
	struct FInstallProgressMod                   ModToInstall;                                      // 0x8(0x488)(Edit, ZeroConstructor, SimpleDisplay, AdvancedDisplay, TextExportTransient, NativeAccessSpecifierPublic)
	class UObject*                               __WorldContext;                                    // 0x490(0x8)(None)
	bool                                         EnoughSpace;                                       // 0x498(0x1)(None)
	uint8                                        Pad_2F89[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreFileSize                       CallFunc_GetModSize_SizeStruct;                    // 0x49C(0xC)(None)
	class FText                                  CallFunc_GetModSize_SizeInText;                    // 0x4A8(0x18)(None)
	int64                                        CallFunc_GetModSize_bytes;                         // 0x4C0(0x8)(None)
	bool                                         CallFunc_GreaterEqual_Int64Int64_ReturnValue;      // 0x4C8(0x1)(None)
};

// 0xB0 (0xB0 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetProcessedBarProgress
struct UBPFL_GlobalFunctions_C_GetProcessedBarProgress_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(None)
	enum class ELibraryProgressState             InstallProgressState;                              // 0x4(0x1)(None)
	uint8                                        Pad_2FDE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(None)
	double                                       ReturnValue;                                       // 0x10(0x8)(None)
	bool                                         MaintainPreviousValue;                             // 0x18(0x1)(None)
	uint8                                        Pad_2FDF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable;                                // 0x20(0x8)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x28(0x1)(None)
	uint8                                        Pad_2FE0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x30(0x8)(None)
	double                                       Temp_real_Variable_1;                              // 0x38(0x8)(None)
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x40(0x8)(None)
	double                                       CallFunc_MapRangeClamped_ReturnValue_1;            // 0x48(0x8)(None)
	double                                       Temp_real_Variable_2;                              // 0x50(0x8)(None)
	double                                       Temp_real_Variable_3;                              // 0x58(0x8)(None)
	double                                       Temp_real_Variable_4;                              // 0x60(0x8)(None)
	double                                       Temp_real_Variable_5;                              // 0x68(0x8)(None)
	double                                       Temp_real_Variable_6;                              // 0x70(0x8)(None)
	double                                       Temp_real_Variable_7;                              // 0x78(0x8)(None)
	double                                       Temp_real_Variable_8;                              // 0x80(0x8)(None)
	double                                       Temp_real_Variable_9;                              // 0x88(0x8)(None)
	double                                       Temp_real_Variable_10;                             // 0x90(0x8)(None)
	enum class ELibraryProgressState             Temp_byte_Variable;                                // 0x98(0x1)(None)
	uint8                                        Pad_2FE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Select_Default;                             // 0xA0(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0xA8(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CreateModPageFromID
struct UBPFL_GlobalFunctions_C_CreateModPageFromID_Params
{
public:
	int64                                        Mod_ID;                                            // 0x0(0x8)(None)
	int32                                        DrawUIOnZOrder;                                    // 0x8(0x4)(None)
	uint8                                        Pad_2FE6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(Edit, ZeroConstructor)
	class UUI_ModPage_C*                         ReturnValue;                                       // 0x18(0x8)(Edit, ZeroConstructor)
	class UUI_ModPage_C*                         CallFunc_Create_ReturnValue;                       // 0x20(0x8)(None)
};

// 0x20B (0x20B - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.FormatDownloadNumber
struct UBPFL_GlobalFunctions_C_FormatDownloadNumber_Params
{
public:
	int64                                        Value;                                             // 0x0(0x8)(None)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(None)
	class FText                                  FinalAmount;                                       // 0x10(0x18)(ContainsInstancedReference, SimpleDisplay, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue;             // 0x28(0x18)(ContainsInstancedReference, AssetRegistrySearchable, NativeAccessSpecifierPublic)
	int64                                        CallFunc_Divide_Int64Int64_ReturnValue;            // 0x40(0x8)(None)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue_1;           // 0x48(0x18)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	int64                                        CallFunc_Divide_Int64Int64_ReturnValue_1;          // 0x60(0x8)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x68(0x10)(AssetRegistrySearchable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue_2;           // 0x78(0x18)(ContainsInstancedReference, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x90(0x10)(BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0xA0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xB0(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
	class FString                                CallFunc_GetSubstring_ReturnValue;                 // 0xC0(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xD0(0x18)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xE8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xF8(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x108(0x1)(None)
	uint8                                        Pad_2FEB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x110(0x18)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
	int64                                        CallFunc_Divide_Int64Int64_ReturnValue_2;          // 0x128(0x8)(None)
	int64                                        CallFunc_Divide_Int64Int64_ReturnValue_3;          // 0x130(0x8)(None)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue_3;           // 0x138(0x18)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue_4;           // 0x150(0x18)(SimpleDisplay, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x168(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x178(0x10)(AssetRegistrySearchable, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x188(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, NativeAccessSpecifierPublic)
	class FString                                CallFunc_GetSubstring_ReturnValue_1;               // 0x198(0x10)(Protected, BlueprintCallable, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x1A8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x1B8(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x1C8(0x18)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x1E0(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x1F0(0x18)(None)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x208(0x1)(None)
	bool                                         CallFunc_Less_Int64Int64_ReturnValue;              // 0x209(0x1)(None)
	bool                                         CallFunc_Less_Int64Int64_ReturnValue_1;            // 0x20A(0x1)(None)
};

// 0x4A8 (0x4A8 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetModVersion
struct UBPFL_GlobalFunctions_C_GetModVersion_Params
{
public:
	struct FInstallProgressMod                   ModInfo;                                           // 0x0(0x488)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
	class UObject*                               __WorldContext;                                    // 0x488(0x8)(None)
	class FText                                  FinalAmount;                                       // 0x490(0x18)(None)
};

// 0x4C0 (0x4C0 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetDownloadCount
struct UBPFL_GlobalFunctions_C_GetDownloadCount_Params
{
public:
	struct FInstallProgressMod                   ModInfo;                                           // 0x0(0x488)(Edit, ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
	class UObject*                               __WorldContext;                                    // 0x488(0x8)(None)
	class FText                                  FinalAmount;                                       // 0x490(0x18)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_FormatDownloadNumber_FinalAmount;         // 0x4A8(0x18)(None)
};

// 0x4A0 (0x4A0 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetModName
struct UBPFL_GlobalFunctions_C_GetModName_Params
{
public:
	struct FInstallProgressMod                   ModInfo;                                           // 0x0(0x488)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
	class UObject*                               __WorldContext;                                    // 0x488(0x8)(None)
	class FString                                Name;                                              // 0x490(0x10)(None)
};

// 0x605 (0x605 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetModSize
struct UBPFL_GlobalFunctions_C_GetModSize_Params
{
public:
	struct FInstallProgressMod                   ModInfo;                                           // 0x0(0x488)(Edit, ZeroConstructor, Protected, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
	class UObject*                               __WorldContext;                                    // 0x488(0x8)(None)
	struct FCFCoreFileSize                       SizeStruct;                                        // 0x490(0xC)(None)
	uint8                                        Pad_3003[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  SizeInText;                                        // 0x4A0(0x18)(SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
	int64                                        Bytes;                                             // 0x4B8(0x8)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4C0(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4C4(0x4)(None)
	struct FFile                                 CallFunc_Array_Get_Item;                           // 0x4C8(0xF8)(AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x5C0(0x4)(None)
	uint8                                        Pad_3004[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_FormatFileSize_ReturnValue;               // 0x5C8(0x10)(ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x5D8(0x18)(None)
	struct FCFCoreFileSize                       CallFunc_BreakFileSize_ReturnValue;                // 0x5F0(0xC)(None)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x5FC(0x1)(None)
	uint8                                        Pad_3005[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x600(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x604(0x1)(None)
};

// 0x528 (0x528 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.GetAuthorName
struct UBPFL_GlobalFunctions_C_GetAuthorName_Params
{
public:
	struct FInstallProgressMod                   ModInfo;                                           // 0x0(0x488)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, NativeAccessSpecifierPublic)
	class UObject*                               __WorldContext;                                    // 0x488(0x8)(None)
	class FString                                CombinedAuthorsNames;                              // 0x490(0x10)(SimpleDisplay, BlueprintCallable, NativeAccessSpecifierPublic)
	class FString                                Local_TotalAuthors;                                // 0x4A0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4B0(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4B4(0x4)(None)
	struct FModAuthor                            CallFunc_Array_Get_Item;                           // 0x4B8(0x28)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4E0(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4E4(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4E8(0x1)(None)
	uint8                                        Pad_300E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_StringLimit_NewString;                    // 0x4F0(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x500(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x510(0x1)(None)
	uint8                                        Pad_300F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x518(0x10)(None)
};

// 0xBD0 (0xBD0 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CreateButtonStyleFromSingleColor
struct UBPFL_GlobalFunctions_C_CreateButtonStyleFromSingleColor_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(None)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(Edit, ZeroConstructor)
	uint8                                        Pad_301A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          ButtonStyle;                                       // 0x20(0x3F0)(Edit, ZeroConstructor, AssetRegistrySearchable, AdvancedDisplay, Protected, NativeAccessSpecifierPublic)
	struct FLinearColor                          CallFunc_Add_LinearColorLinearColor_ReturnValue;   // 0x410(0x10)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x420(0x14)(ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierPublic)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x434(0x14)(AdvancedDisplay, Protected, NativeAccessSpecifierPublic)
	uint8                                        Pad_301B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x450(0xD0)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, NativeAccessSpecifierPublic)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x520(0xD0)(Edit, ZeroConstructor, SimpleDisplay, Protected, NativeAccessSpecifierPublic)
	struct FLinearColor                          CallFunc_Multiply_LinearColorFloat_ReturnValue;    // 0x5F0(0x10)(None)
	struct FLinearColor                          CallFunc_Multiply_LinearColorFloat_ReturnValue_1;  // 0x600(0x10)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x610(0x14)(ContainsInstancedReference, AssetRegistrySearchable, Protected, NativeAccessSpecifierPublic)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x624(0x14)(AssetRegistrySearchable, Protected, NativeAccessSpecifierPublic)
	uint8                                        Pad_301D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_2;                    // 0x640(0xD0)(Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierPublic)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_3;                    // 0x710(0xD0)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierPublic)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x7E0(0x3F0)(None)
};

// 0x69 (0x69 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.HEXtoByte
struct UBPFL_GlobalFunctions_C_HEXtoByte_Params
{
public:
	class FString                                First_value;                                       // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NativeAccessSpecifierPublic)
	class FString                                Second_value;                                      // 0x10(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(None)
	uint8                                        InputPin1;                                         // 0x28(0x1)(None)
	uint8                                        Pad_3022[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        HexDigits;                                         // 0x30(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x40(0x10)(None)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x50(0x4)(None)
	int32                                        CallFunc_Array_Find_ReturnValue_1;                 // 0x54(0x4)(None)
	int32                                        CallFunc_And_IntInt_ReturnValue;                   // 0x58(0x4)(None)
	int32                                        CallFunc_And_IntInt_ReturnValue_1;                 // 0x5C(0x4)(None)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x60(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x64(0x4)(None)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x68(0x1)(None)
};

// 0xC8 (0xC8 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.HEXtoSRGB
struct UBPFL_GlobalFunctions_C_HEXtoSRGB_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(ContainsInstancedReference, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(None)
	struct FColor                                Color;                                             // 0x18(0x4)(None)
	uint8                                        Pad_3026[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x20(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Array_Get_Item;                           // 0x30(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x40(0x10)(SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Array_Get_Item_2;                         // 0x50(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Array_Get_Item_3;                         // 0x60(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierPublic)
	uint8                                        CallFunc_HEXtoByte_InputPin1;                      // 0x70(0x1)(None)
	uint8                                        Pad_3027[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item_4;                         // 0x78(0x10)(AdvancedDisplay, Protected, TextExportTransient, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Array_Get_Item_5;                         // 0x88(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, NativeAccessSpecifierPublic)
	uint8                                        CallFunc_HEXtoByte_InputPin1_1;                    // 0x98(0x1)(None)
	uint8                                        Pad_3029[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item_6;                         // 0xA0(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, TextExportTransient, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Array_Get_Item_7;                         // 0xB0(0x10)(None)
	uint8                                        CallFunc_HEXtoByte_InputPin1_2;                    // 0xC0(0x1)(None)
	uint8                                        CallFunc_HEXtoByte_InputPin1_3;                    // 0xC1(0x1)(None)
	uint8                                        Pad_302A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                K2Node_MakeStruct_Color;                           // 0xC4(0x4)(None)
};

// 0x84 (0x84 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.SRGBtoHEX
struct UBPFL_GlobalFunctions_C_SRGBtoHEX_Params
{
public:
	struct FColor                                Color;                                             // 0x0(0x4)(None)
	uint8                                        Pad_302E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(None)
	class FString                                ReturnValue;                                       // 0x10(0x10)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        String;                                            // 0x20(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(None)
	uint8                                        Pad_302F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                K2Node_MakeArray_Array;                            // 0x38(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NativeAccessSpecifierPublic)
	uint8                                        CallFunc_Array_Get_Item;                           // 0x48(0x1)(None)
	uint8                                        Pad_3030[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C(0x4)(None)
	class FString                                CallFunc_ByteToHex_ReturnValue;                    // 0x50(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NativeAccessSpecifierPublic)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x60(0x4)(None)
	uint8                                        Pad_3031[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_JoinStringArray_ReturnValue;              // 0x68(0x10)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x78(0x1)(None)
	uint8                                        Pad_3032[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x7C(0x4)(None)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x80(0x4)(None)
};

// 0x80 (0x80 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.ByteToHex
struct UBPFL_GlobalFunctions_C_ByteToHex_Params
{
public:
	uint8                                        InputPin;                                          // 0x0(0x1)(None)
	uint8                                        Pad_3035[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(None)
	class FString                                ReturnValue;                                       // 0x10(0x10)(AutoWeak, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        HexDigits;                                         // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x30(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x40(0x4)(None)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0x44(0x4)(None)
	int32                                        CallFunc_And_IntInt_ReturnValue;                   // 0x48(0x4)(None)
	int32                                        CallFunc_And_IntInt_ReturnValue_1;                 // 0x4C(0x4)(None)
	class FString                                CallFunc_Array_Get_Item;                           // 0x50(0x10)(AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x60(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x70(0x10)(None)
};

// 0x29 (0x29 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.SetFocusedWidget
struct UBPFL_GlobalFunctions_C_SetFocusedWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Edit, ZeroConstructor)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(ZeroConstructor)
	TArray<class UUI_StoreMenu_C*>               CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x10(0x10)(Edit, ZeroConstructor)
	class UUI_StoreMenu_C*                       CallFunc_Array_Get_Item;                           // 0x20(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(None)
};

// 0x7D (0x7D - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.TextLimit
struct UBPFL_GlobalFunctions_C_TextLimit_Params
{
public:
	class UTextBlock*                            Text;                                              // 0x0(0x8)(Edit, ZeroConstructor)
	int32                                        Limit;                                             // 0x8(0x4)(None)
	uint8                                        Pad_3037[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                String;                                            // 0x10(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPublic)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(None)
	class FString                                CallFunc_StringLimit_NewString;                    // 0x28(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x38(0x18)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x50(0x18)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x68(0x10)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x7C(0x1)(None)
};

// 0x33 (0x33 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.CheckPlayerInputDevices
struct UBPFL_GlobalFunctions_C_CheckPlayerInputDevices_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(ZeroConstructor)
	enum class ENUM_InputDevices                 UsingGamepad_;                                     // 0x8(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0x9(0x1)(None)
	uint8                                        Pad_3039[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUI_StoreMenu_C*>               CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x10(0x10)(ZeroConstructor)
	enum class ENUM_InputDevices                 Temp_byte_Variable;                                // 0x20(0x1)(None)
	uint8                                        Pad_303A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_StoreMenu_C*                       CallFunc_Array_Get_Item;                           // 0x28(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(None)
	enum class ENUM_InputDevices                 Temp_byte_Variable_1;                              // 0x31(0x1)(None)
	enum class ENUM_InputDevices                 K2Node_Select_Default;                             // 0x32(0x1)(None)
};

// 0xB0 (0xB0 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.StringLimit
struct UBPFL_GlobalFunctions_C_StringLimit_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NativeAccessSpecifierPublic)
	int32                                        Limit;                                             // 0x10(0x4)(None)
	uint8                                        Pad_303B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(None)
	class FString                                NewString;                                         // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NativeAccessSpecifierPublic)
	class FString                                LocalString;                                       // 0x30(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x40(0x4)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x44(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x4C(0x1)(None)
	uint8                                        Pad_303C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x50(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NativeAccessSpecifierPublic)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x60(0x4)(None)
	uint8                                        Pad_303D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0x68(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPublic)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x78(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x7C(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x80(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x84(0x1)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x85(0x1)(None)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x86(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x87(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x88(0x1)(None)
	uint8                                        Pad_303F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x90(0x10)(SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xA0(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function BPFL_GlobalFunctions.BPFL_GlobalFunctions_C.ErrorMessage
struct UBPFL_GlobalFunctions_C_ErrorMessage_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Edit, ZeroConstructor)
	class FString                                ErrorMessage;                                      // 0x8(0x10)(None)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(None)
};

}
}


