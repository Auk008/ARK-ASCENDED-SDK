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

// 0x298 (0x298 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.Update Downloading Proggress Text_New
struct UBP_ServerModsLoading_C_Update_Downloading_Proggress_Text_New_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(None)
	int64                                        FileId;                                            // 0x8(0x8)(None)
	enum class ELibraryProgressState             PregressState;                                     // 0x10(0x1)(None)
	uint8                                        Pad_4A40[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Progress;                                          // 0x14(0x4)(None)
	int64                                        TransferredBytes;                                  // 0x18(0x8)(None)
	enum class ELibraryProgressState             Temp_byte_Variable;                                // 0x20(0x1)(None)
	uint8                                        Pad_4A41[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreFileSize                       CallFunc_BreakFileSize_ReturnValue;                // 0x24(0xC)(None)
	struct FCFCoreFileSize                       CallFunc_BreakFileSize_ReturnValue_1;              // 0x30(0xC)(None)
	uint8                                        Pad_4A42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x40(0x8)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x48(0x50)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x98(0x8)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xA0(0x50)(SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        CallFunc_Len_ReturnValue;                          // 0xF0(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xF4(0x1)(None)
	uint8                                        Pad_4A43[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xF8(0x18)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x110(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x120(0x50)(AssetRegistrySearchable, AdvancedDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x170(0x10)(SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x180(0x10)(AssetRegistrySearchable, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x190(0x18)(AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x1A8(0x18)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x1C0(0x18)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_2;            // 0x1D8(0x18)(AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_3;            // 0x1F0(0x18)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x208(0x50)(ContainsInstancedReference, SimpleDisplay, Protected, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x258(0x10)(Protected, BlueprintCallable, ExposeOnSpawn, PersistentInstance, UObjectWrapper)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x268(0x18)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, ExposeOnSpawn, PersistentInstance, UObjectWrapper)
	class FText                                  K2Node_Select_Default;                             // 0x280(0x18)(None)
};

// 0x88 (0x88 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.UpdateTexts
struct UBP_ServerModsLoading_C_UpdateTexts_Params
{
public:
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x0(0x4)(None)
	uint8                                        Pad_4A46[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x8(0x8)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x10(0x50)(AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x60(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x70(0x18)(None)
};

// 0x2C0 (0x2C0 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.CalculateTatalModsSize
struct UBP_ServerModsLoading_C_CalculateTatalModsSize_Params
{
public:
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x0(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xC(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x10(0x4)(None)
	uint8                                        Pad_4A4A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreMod                            CallFunc_Array_Get_Item;                           // 0x18(0x190)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1A8(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1AC(0x1)(None)
	uint8                                        Pad_4A4B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFile                                 CallFunc_Array_Get_Item_1;                         // 0x1B0(0xF8)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x2A8(0x4)(None)
	uint8                                        Pad_4A4D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Add_Int64Int64_ReturnValue;               // 0x2B0(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x2B8(0x1)(None)
	bool                                         CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x2B9(0x1)(None)
	uint8                                        Pad_4A4F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x2BC(0x4)(None)
};

// 0xCC (0xCC - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.UpdateProgressBar
struct UBP_ServerModsLoading_C_UpdateProgressBar_Params
{
public:
	int64                                        CallFunc_Divide_Int64Int64_ReturnValue;            // 0x0(0x8)(None)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x8(0x4)(None)
	uint8                                        Pad_4A5D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x10(0x8)(None)
	int64                                        CallFunc_Divide_Int64Int64_ReturnValue_1;          // 0x18(0x8)(None)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue_1;            // 0x20(0x4)(None)
	uint8                                        Pad_4A5E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x28(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x30(0x8)(None)
	double                                       CallFunc_Multiply_IntFloat_ReturnValue;            // 0x38(0x8)(None)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x40(0x4)(None)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x44(0x4)(None)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x48(0x8)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x50(0x50)(Protected, NonPIEDuplicateTransient, ExposeOnSpawn, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xA0(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, TextExportTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xB0(0x18)(None)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0xC8(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.GetDelegate
struct UBP_ServerModsLoading_C_GetDelegate_Params
{
public:
	FDelegateProperty_                           BackDelegate;                                      // 0x0(0x10)(ZeroConstructor)
	FDelegateProperty_                           CompletedDelegate;                                 // 0x10(0x10)(ZeroConstructor)
	FDelegateProperty_                           ErrorDelegate;                                     // 0x20(0x10)(None)
};

// 0x5 (0x5 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.CheckIfAllDownloaded
struct UBP_ServerModsLoading_C_CheckIfAllDownloaded_Params
{
public:
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x0(0x4)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x4(0x1)(None)
};

// 0x29C (0x29C - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ParsingModsFile
struct UBP_ServerModsLoading_C_ParsingModsFile_Params
{
public:
	struct FCFCoreMod                            Mod;                                               // 0x0(0x190)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x190(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x194(0x4)(None)
	struct FFile                                 CallFunc_Array_Get_Item;                           // 0x198(0xF8)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x290(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x294(0x1)(None)
	uint8                                        Pad_4A60[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x298(0x4)(None)
};

// 0x1A5 (0x1A5 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ParsingMods
struct UBP_ServerModsLoading_C_ParsingMods_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(None)
	uint8                                        Pad_4A61[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreMod                            CallFunc_Array_Get_Item;                           // 0x10(0x190)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1A0(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1A4(0x1)(None)
};

// 0x598 (0x598 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.Update Downloading Proggress Text
struct UBP_ServerModsLoading_C_Update_Downloading_Proggress_Text_Params
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(None)
	int64                                        FileId;                                            // 0x8(0x8)(None)
	enum class ELibraryProgressState             PregressState;                                     // 0x10(0x1)(None)
	uint8                                        Pad_4A63[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Progress;                                          // 0x14(0x4)(None)
	int64                                        TransferredBytes;                                  // 0x18(0x8)(None)
	enum class ELibraryProgressState             Temp_byte_Variable;                                // 0x20(0x1)(None)
	uint8                                        Pad_4A64[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x24(0x4)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x28(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x30(0x8)(None)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x38(0x4)(None)
	uint8                                        Pad_4A65[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x40(0x50)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x90(0x1)(None)
	uint8                                        Pad_4A66[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x98(0x10)(ContainsInstancedReference, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xA8(0x18)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xC0(0x50)(SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x110(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x120(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x130(0x18)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x148(0x18)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x160(0x18)(ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_2;            // 0x178(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFile                                 CallFunc_Map_Find_Value;                           // 0x190(0xF8)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x288(0x1)(None)
	uint8                                        Pad_4A67[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreMod                            CallFunc_Map_Find_Value_1;                         // 0x290(0x190)(AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x420(0x1)(None)
	uint8                                        Pad_4A68[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue_1;            // 0x424(0x4)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x428(0x8)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x430(0x18)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x448(0x8)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x450(0x50)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x4A0(0x50)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_3;            // 0x4F0(0x18)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x508(0x50)(AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x558(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x568(0x18)(ContainsInstancedReference, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FText                                  K2Node_Select_Default;                             // 0x580(0x18)(None)
};

// 0xE0 (0xE0 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.SetDounloadingCountText
struct UBP_ServerModsLoading_C_SetDounloadingCountText_Params
{
public:
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x0(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(None)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x8(0x8)(None)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x10(0x8)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x18(0x50)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x68(0x50)(AutoWeak, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB8(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC8(0x18)(None)
};

// 0x44 (0x44 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ModInstallingError
struct UBP_ServerModsLoading_C_ModInstallingError_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(None)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x3C(0x1)(None)
	uint8                                        Pad_4A75[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x40(0x4)(None)
};

// 0x3B8 (0x3B8 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ModInstallingSuccess
struct UBP_ServerModsLoading_C_ModInstallingSuccess_Params
{
public:
	struct FInstalledMod                         InstalledMod;                                      // 0x0(0x3B0)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3B0(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x3B4(0x4)(None)
};

// 0x88 (0x88 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ModInstallingProgress
struct UBP_ServerModsLoading_C_ModInstallingProgress_Params
{
public:
	struct FLibraryProgress                      Progress;                                          // 0x0(0x40)(ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x40(0x4)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x44(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x45(0x1)(None)
	uint8                                        Pad_4A7C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x48(0x4)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4C(0x1)(None)
	uint8                                        Pad_4A7D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x50(0x4)(None)
	uint8                                        Pad_4A7E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int64>                                CallFunc_Map_Values_Values;                        // 0x58(0x10)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(None)
	uint8                                        Pad_4A7F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Array_Get_Item;                           // 0x70(0x8)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x78(0x1)(None)
	uint8                                        Pad_4A81[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Add_Int64Int64_ReturnValue;               // 0x80(0x8)(None)
};

// 0x36D (0x36D - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.Downloading
struct UBP_ServerModsLoading_C_Downloading_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x24(0x10)(ZeroConstructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(None)
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x38(0x8)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(None)
	uint8                                        Pad_4A89[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCFCoreMod                            CallFunc_Array_Get_Item;                           // 0x48(0x190)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FCFCoreMod                            CallFunc_Array_Get_Item_1;                         // 0x1D8(0x190)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x368(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x36C(0x1)(None)
};

// 0x28 (0x28 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.StartDownload
struct UBP_ServerModsLoading_C_StartDownload_Params
{
public:
	class FText                                  ServerName;                                        // 0x0(0x18)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FCFCoreMod>                    ModsToDownload;                                    // 0x18(0x10)(None)
};

// 0x38 (0x38 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.OnError
struct UBP_ServerModsLoading_C_OnError_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x19 (0x19 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ControllerAction
struct UBP_ServerModsLoading_C_ControllerAction_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(None)
	enum class EViewState                        State;                                             // 0x18(0x1)(None)
};

// 0x3C (0x3C - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.Tick
struct UBP_ServerModsLoading_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x270 (0x270 - 0x0)
// Function BP_ServerModsLoading.BP_ServerModsLoading_C.ExecuteUbergraph_BP_ServerModsLoading
struct UBP_ServerModsLoading_C_ExecuteUbergraph_BP_ServerModsLoading_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_4A8A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBindButtonSystem*                     CallFunc_GetEngineSubsystem_ReturnValue;           // 0x8(0x8)(ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor)
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0x30(0x38)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	struct FCFCoreMod                            CallFunc_Array_Get_Item;                           // 0x68(0x190)(SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1F8(0x10)(ZeroConstructor)
	struct FKey                                  K2Node_CustomEvent_Key;                            // 0x208(0x18)(None)
	enum class EViewState                        K2Node_CustomEvent_State;                          // 0x220(0x1)(None)
	uint8                                        Pad_4A8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue_1;         // 0x228(0x8)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x230(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x231(0x1)(None)
	uint8                                        Pad_4A8C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x234(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x26C(0x4)(None)
};

}
}


