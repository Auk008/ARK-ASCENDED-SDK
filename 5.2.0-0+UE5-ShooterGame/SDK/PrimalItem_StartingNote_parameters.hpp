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

// 0x30 (0x30 - 0x0)
// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPCanUse
struct UPrimalItem_StartingNote_C_BPCanUse_Params
{
public:
	bool                                         bIgnoreCooldown;                                   // 0x0(0x1)(None)
	bool                                         ReturnValue;                                       // 0x1(0x1)(None)
	bool                                         CallFunc_BPCanUse_ReturnValue;                     // 0x2(0x1)(None)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x3(0x1)(None)
	float                                        CallFunc_TimeSince_ReturnValue;                    // 0x4(0x4)(None)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x8(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x9(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA(0x1)(None)
	uint8                                        Pad_4494[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x18(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	bool                                         CallFunc_BPCanImplantSuicide_ReturnValue;          // 0x21(0x1)(None)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x22(0x1)(None)
	uint8                                        Pad_4495[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x28(0x8)(None)
};

// 0x118 (0x118 - 0x0)
// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPDrawItemIcon
struct UPrimalItem_StartingNote_C_BPDrawItemIcon_Params
{
public:
	class UCanvas*                               ItemCanvas;                                        // 0x0(0x8)(ZeroConstructor)
	struct FVector2D                             ItemCanvasSize;                                    // 0x8(0x10)(None)
	struct FVector2D                             ItemCanvasScale;                                   // 0x18(0x10)(None)
	bool                                         bItemEnabled;                                      // 0x28(0x1)(None)
	uint8                                        Pad_449D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          TheTintColor;                                      // 0x2C(0x10)(None)
	bool                                         Temp_bool_Variable;                                // 0x3C(0x1)(None)
	uint8                                        Pad_449F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x40(0x10)(None)
	double                                       CallFunc_BreakVector2D_X;                          // 0x50(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x58(0x8)(None)
	double                                       CallFunc_BreakVector2D_X_1;                        // 0x60(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0x68(0x8)(None)
	struct FVector2D                             CallFunc_Multiply_Vector2DFloat_ReturnValue_1;     // 0x70(0x10)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x80(0x8)(None)
	double                                       CallFunc_BreakVector2D_X_2;                        // 0x88(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y_2;                        // 0x90(0x8)(None)
	double                                       CallFunc_BreakVector2D_X_3;                        // 0x98(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y_3;                        // 0xA0(0x8)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0xA8(0x8)(None)
	struct FVector2D                             CallFunc_Multiply_Vector2DFloat_ReturnValue_2;     // 0xB0(0x10)(None)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0xC0(0x10)(None)
	double                                       CallFunc_BreakVector2D_X_4;                        // 0xD0(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y_4;                        // 0xD8(0x8)(None)
	struct FVector2D                             CallFunc_Multiply_Vector2DFloat_ReturnValue_3;     // 0xE0(0x10)(None)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0xF0(0x8)(None)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0xF8(0x10)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x108(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x109(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x10A(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10B(0x1)(None)
	uint8                                        Pad_44A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_Select_Default;                             // 0x110(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemIcon
struct UPrimalItem_StartingNote_C_BPGetItemIcon_Params
{
public:
	class AShooterPlayerController*              ForPC;                                             // 0x0(0x8)(ZeroConstructor)
	class UTexture2D*                            ReturnValue;                                       // 0x8(0x8)(ZeroConstructor)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(None)
	uint8                                        Pad_44A3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_Select_Default;                             // 0x18(0x8)(None)
};

// 0xB9 (0xB9 - 0x0)
// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.IsLocalImplant
struct UPrimalItem_StartingNote_C_IsLocalImplant_Params
{
public:
	class AShooterPlayerController*              ForPC;                                             // 0x0(0x8)(ZeroConstructor)
	bool                                         IsLocal;                                           // 0x8(0x1)(None)
	bool                                         bRetVal;                                           // 0x9(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA(0x1)(None)
	uint8                                        Pad_44A6[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_LinkedPlayerIDString_ReturnValue;         // 0x10(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x20(0x1)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x21(0x1)(None)
	uint8                                        Pad_44A7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x28(0x78)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0xA0(0x1)(None)
	uint8                                        Pad_44A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0xA8(0x10)(None)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xB8(0x1)(None)
};

// 0x50 (0x50 - 0x0)
// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemName
struct UPrimalItem_StartingNote_C_BPGetItemName_Params
{
public:
	class FString                                ItemNameIn;                                        // 0x0(0x10)(AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AShooterPlayerController*              ForPC;                                             // 0x10(0x8)(None)
	class FString                                ReturnValue;                                       // 0x18(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         Temp_bool_Variable;                                // 0x28(0x1)(None)
	bool                                         CallFunc_IsLocalImplant_IsLocal;                   // 0x29(0x1)(None)
	uint8                                        Pad_44A9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x30(0x10)(SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                K2Node_Select_Default;                             // 0x40(0x10)(None)
};

// 0x11D (0x11D - 0x0)
// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.Get Survival Quotient String
struct UPrimalItem_StartingNote_C_Get_Survival_Quotient_String_Params
{
public:
	TArray<double>                               SurvData;                                          // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                OutString;                                         // 0x10(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                RetVal;                                            // 0x20(0x10)(ContainsInstancedReference, Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        Temp_int_Variable;                                 // 0x30(0x4)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(None)
	double                                       CallFunc_Array_Get_Item;                           // 0x38(0x8)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x40(0x4)(None)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x44(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x48(0x1)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x49(0x1)(None)
	uint8                                        Pad_44AE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4C(0x4)(None)
	struct FArrayOfStrings                       CallFunc_Array_Get_Item_1;                         // 0x50(0x10)(Protected, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Array_Get_Item_2;                         // 0x60(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Len_ReturnValue;                          // 0x70(0x4)(None)
	uint8                                        Pad_44AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item_3;                         // 0x78(0x10)(SimpleDisplay, AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x88(0x1)(None)
	uint8                                        Pad_44B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item_4;                         // 0x90(0x10)(AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xA0(0x4)(None)
	uint8                                        Pad_44B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xA8(0x10)(AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0xB8(0x1)(None)
	uint8                                        Pad_44B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xC0(0x10)(AssetRegistrySearchable, SimpleDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xD0(0x1)(None)
	uint8                                        Pad_44B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xD8(0x10)(ContainsInstancedReference, SimpleDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Array_Get_Item_5;                         // 0xE8(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xF8(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x108(0x10)(None)
	int32                                        CallFunc_Len_ReturnValue_1;                        // 0x118(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x11C(0x1)(None)
};

// 0x498 (0x498 - 0x0)
// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPGetItemDescription
struct UPrimalItem_StartingNote_C_BPGetItemDescription_Params
{
public:
	class FString                                InDescription;                                     // 0x0(0x10)(AssetRegistrySearchable, Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bGetLongDescription;                               // 0x10(0x1)(None)
	uint8                                        Pad_44BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerController*              ForPC;                                             // 0x18(0x8)(ZeroConstructor)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                       FloatCastVar;                                      // 0x30(0x8)(None)
	class FString                                SecondaryString;                                   // 0x38(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x48(0x8)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x50(0x1)(None)
	uint8                                        Pad_44BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetPersistentTimeInSeconds_ReturnValue;   // 0x58(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(None)
	uint8                                        Pad_44BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x68(0x8)(ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x70(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x78(0x1)(None)
	uint8                                        Pad_44C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x80(0x8)(ZeroConstructor)
	bool                                         CallFunc_BPCanImplantSuicide_ReturnValue;          // 0x88(0x1)(None)
	uint8                                        Pad_44C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterGameState*                     K2Node_DynamicCast_AsShooter_Game_State;           // 0x90(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x98(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x99(0x1)(None)
	uint8                                        Pad_44C2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerState*                   K2Node_DynamicCast_AsShooter_Player_State;         // 0xA0(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xA8(0x1)(None)
	uint8                                        Pad_44C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0xB0(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0xB8(0x1)(None)
	uint8                                        Pad_44C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0xC0(0x8)(None)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue;              // 0xC8(0x8)(None)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0xD0(0x4)(None)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0xD4(0x1)(None)
	uint8                                        Pad_44C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Max_ReturnValue;                          // 0xD8(0x4)(None)
	float                                        CallFunc_TimeSince_ReturnValue;                    // 0xDC(0x4)(None)
	class FString                                CallFunc_BPFormatAsTime_ReturnValue;               // 0xE0(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0xF0(0x1)(None)
	uint8                                        Pad_44C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xF8(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x110(0x1)(None)
	uint8                                        Pad_44C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x118(0x50)(AutoWeak, ContainsInstancedReference, SimpleDisplay, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x168(0x10)(SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x178(0x8)(None)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x180(0x18)(AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x198(0x8)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1A0(0x10)(Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x1B0(0x4)(None)
	uint8                                        Pad_44C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x1B8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x1C8(0x8)(None)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue_2;       // 0x1D0(0x8)(None)
	class FString                                CallFunc_Conv_DoubleToString_ReturnValue;          // 0x1D8(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x1E8(0x18)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x200(0x50)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x250(0x10)(AutoWeak, SimpleDisplay, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x260(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x270(0x18)(ContainsInstancedReference, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x288(0x10)(AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x298(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x2A8(0x10)(BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2B8(0x1)(None)
	uint8                                        Pad_44C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x2C0(0x8)(ZeroConstructor)
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test;             // 0x2C8(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x2D0(0x1)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2D1(0x1)(None)
	uint8                                        Pad_44CA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2D4(0x4)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x2D8(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x2F0(0x18)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x308(0x50)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x358(0x50)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x3A8(0x50)(ContainsInstancedReference, AssetRegistrySearchable, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x3F8(0x10)(AssetRegistrySearchable, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_3;                          // 0x408(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x418(0x18)(AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Format_ReturnValue_3;                     // 0x430(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x448(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x458(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x468(0x10)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x478(0x8)(None)
	double                                       CallFunc_Add_DoubleFloat_A_ImplicitCast;           // 0x480(0x8)(None)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x488(0x4)(None)
	float                                        CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x48C(0x4)(None)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x490(0x8)(None)
};

// 0x740 (0x740 - 0x0)
// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.BPPreInitializeItem
struct UPrimalItem_StartingNote_C_BPPreInitializeItem_Params
{
public:
	class UWorld*                                OptionalInitWorld;                                 // 0x0(0x8)(ZeroConstructor)
	class FString                                Temp_string_Variable;                              // 0x8(0x10)(ContainsInstancedReference, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(None)
	uint8                                        Pad_44E8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_1;                            // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        Temp_int_Variable;                                 // 0x30(0x4)(None)
	uint8                                        Pad_44E9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_2;                            // 0x38(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_3;                            // 0x48(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_4;                            // 0x58(0x10)(SimpleDisplay, AdvancedDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_5;                            // 0x68(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         Temp_bool_Variable;                                // 0x78(0x1)(None)
	uint8                                        Pad_44EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0x7C(0x4)(None)
	class FText                                  Temp_text_Variable;                                // 0x80(0x18)(AdvancedDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  Temp_text_Variable_1;                              // 0x98(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  Temp_text_Variable_2;                              // 0xB0(0x18)(AssetRegistrySearchable, SimpleDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  Temp_text_Variable_3;                              // 0xC8(0x18)(ContainsInstancedReference, SimpleDisplay, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  Temp_text_Variable_4;                              // 0xE0(0x18)(ContainsInstancedReference, AssetRegistrySearchable, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         Temp_bool_Variable_1;                              // 0xF8(0x1)(None)
	uint8                                        Pad_44ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_6;                            // 0x100(0x10)(AssetRegistrySearchable, Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_7;                            // 0x110(0x10)(Protected, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        Temp_int_Variable_2;                               // 0x120(0x4)(None)
	uint8                                        Pad_44EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_8;                            // 0x128(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_9;                            // 0x138(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_10;                           // 0x148(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                Temp_string_Variable_11;                           // 0x158(0x10)(ContainsInstancedReference, AdvancedDisplay, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x168(0x1)(None)
	uint8                                        Pad_44EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x16C(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x170(0x1)(None)
	uint8                                        Pad_44F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_12;                           // 0x178(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x188(0x1)(None)
	uint8                                        Pad_44F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable_13;                           // 0x190(0x10)(ContainsInstancedReference, SimpleDisplay, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        Temp_int_Variable_3;                               // 0x1A0(0x4)(None)
	uint8                                        Pad_44F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default;                             // 0x1A8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsOfficialServer_ReturnValue;             // 0x1B8(0x1)(None)
	uint8                                        Pad_44F4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1BC(0x4)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1C0(0x1)(None)
	uint8                                        Pad_44F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C4(0x4)(None)
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x1C8(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class UClass*>                        K2Node_MakeArray_Array_1;                          // 0x1D8(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_HasCustomItemData_ReturnValue;            // 0x1E8(0x1)(None)
	uint8                                        Pad_44F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       K2Node_MakeArray_Array_2;                          // 0x1F0(0x10)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FCustomItemData                       CallFunc_GetCustomItemData_OutData;                // 0x200(0x78)(ZeroConstructor, ContainsInstancedReference, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_GetCustomItemData_ReturnValue;            // 0x278(0x1)(None)
	uint8                                        Pad_44F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalInventoryComponent*             CallFunc_GetInitializeItemOwnerInventory_ReturnValue; // 0x280(0x8)(ZeroConstructor)
	float                                        CallFunc_Array_Get_Item;                           // 0x288(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x28C(0x1)(None)
	uint8                                        Pad_44F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x290(0x4)(None)
	uint8                                        Pad_44F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_Array_Get_Item_1;                         // 0x298(0x8)(ZeroConstructor)
	class UPrimalItem*                           CallFunc_Array_Get_Item_2;                         // 0x2A0(0x8)(ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2A8(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2AC(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x2AD(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2AE(0x1)(None)
	bool                                         CallFunc_RemoveItem_ReturnValue;                   // 0x2AF(0x1)(None)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x2B0(0x1)(None)
	uint8                                        Pad_44FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x2B8(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x2C0(0x1)(None)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x2C1(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x2C2(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x2C3(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x2C4(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2C5(0x1)(None)
	uint8                                        Pad_44FB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Select_Default_1;                           // 0x2C8(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x2D0(0x1)(None)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x2D1(0x1)(None)
	uint8                                        Pad_44FC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x2D8(0x8)(ZeroConstructor)
	float                                        CallFunc_Array_Get_Item_3;                         // 0x2E0(0x4)(None)
	uint8                                        Pad_44FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test;             // 0x2E8(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2F0(0x1)(None)
	uint8                                        Pad_44FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FFloor_ReturnValue_1;                     // 0x2F4(0x4)(None)
	class AShooterPlayerController*              CallFunc_GetSpawnedForController_ReturnValue;      // 0x2F8(0x8)(ZeroConstructor)
	class UTexture2D*                            CallFunc_Array_Get_Item_4;                         // 0x300(0x8)(ZeroConstructor)
	class AShooterPlayerState*                   K2Node_DynamicCast_AsShooter_Player_State;         // 0x308(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x310(0x1)(None)
	uint8                                        Pad_44FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_LinkedPlayerIDString_ReturnValue;         // 0x318(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UPrimalPlayerDataBP_Base_C*            K2Node_DynamicCast_AsPrimal_Player_Data_BP_Base;   // 0x328(0x8)(ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x330(0x1)(None)
	uint8                                        Pad_4500[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Array_Get_Item_5;                         // 0x334(0x4)(None)
	class FString                                K2Node_Select_Default_2;                           // 0x338(0x10)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x348(0x1)(None)
	uint8                                        Pad_4502[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        K2Node_MakeArray_Array_3;                          // 0x350(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x360(0x1)(None)
	uint8                                        Pad_4503[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCustomItemData                       K2Node_MakeStruct_CustomItemData;                  // 0x368(0x78)(ZeroConstructor, AdvancedDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x3E0(0x10)(AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                        CallFunc_Array_Get_Item_6;                         // 0x3F0(0x4)(None)
	float                                        CallFunc_Array_Get_Item_7;                         // 0x3F4(0x4)(None)
	int32                                        CallFunc_FFloor_ReturnValue_2;                     // 0x3F8(0x4)(None)
	int32                                        CallFunc_FFloor_ReturnValue_3;                     // 0x3FC(0x4)(None)
	class UTexture2D*                            CallFunc_Array_Get_Item_8;                         // 0x400(0x8)(ZeroConstructor)
	class FString                                K2Node_Select_Default_3;                           // 0x408(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x418(0x4)(None)
	uint8                                        Pad_4505[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_Array_Get_Item_9;                         // 0x420(0x8)(ZeroConstructor)
	class FString                                K2Node_Select_Default_4;                           // 0x428(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x438(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTexture2D*                            CallFunc_Array_Get_Item_10;                        // 0x448(0x8)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x450(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x460(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  K2Node_Select_Default_5;                           // 0x470(0x18)(ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Get_Survival_Quotient_String_OutString;   // 0x488(0x10)(AdvancedDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x498(0x50)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x4E8(0x18)(AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Array_Get_Item_11;                        // 0x500(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x510(0x50)(SimpleDisplay, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x560(0x18)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Array_Get_Item_12;                        // 0x578(0x10)(SimpleDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x588(0x50)(ContainsInstancedReference, AssetRegistrySearchable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x5D8(0x18)(AssetRegistrySearchable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Array_Get_Item_13;                        // 0x5F0(0x10)(ContainsInstancedReference, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x600(0x50)(TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x650(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x668(0x50)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_4;                          // 0x6B8(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x6C8(0x18)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x6E0(0x10)(AutoWeak, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<double>                               CallFunc_Get_Survival_Quotient_String_SurvData_ImplicitCast; // 0x6F0(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	double                                       CallFunc_FFloor_A_ImplicitCast;                    // 0x700(0x8)(None)
	double                                       CallFunc_FFloor_A_ImplicitCast_1;                  // 0x708(0x8)(None)
	TArray<float>                                K2Node_MakeStruct_CustomDataFloats_ImplicitCast;   // 0x710(0x10)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x720(0x8)(None)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x728(0x8)(None)
	double                                       CallFunc_FFloor_A_ImplicitCast_2;                  // 0x730(0x8)(None)
	double                                       CallFunc_FFloor_A_ImplicitCast_3;                  // 0x738(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function PrimalItem_StartingNote.PrimalItem_StartingNote_C.ExecuteUbergraph_PrimalItem_StartingNote
struct UPrimalItem_StartingNote_C_ExecuteUbergraph_PrimalItem_StartingNote_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x4(0x1)(None)
	bool                                         CallFunc_CanUse_ReturnValue;                       // 0x5(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x6(0x1)(None)
	uint8                                        Pad_453D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x10(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	uint8                                        Pad_453E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x20(0x8)(None)
};

}
}


