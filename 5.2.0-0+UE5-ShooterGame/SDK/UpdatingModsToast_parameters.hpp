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
// Function UpdatingModsToast.UpdatingModsToast_C.UpdateProgressBar
struct UUpdatingModsToast_C_UpdateProgressBar_Params
{
public:
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0(0x8)(None)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x8(0x8)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x10(0x8)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_2;           // 0x18(0x8)(None)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue_1;         // 0x20(0x8)(None)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x28(0x8)(None)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x30(0x4)(None)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x34(0x4)(None)
};

// 0x118 (0x118 - 0x0)
// Function UpdatingModsToast.UpdatingModsToast_C.UpdateMainText
struct UUpdatingModsToast_C_UpdateMainText_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(None)
	uint8                                        Pad_4B4F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x8(0x18)(ContainsInstancedReference, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x20(0x1)(None)
	uint8                                        Pad_4B50[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x28(0x8)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x30(0x50)(BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  K2Node_Select_Default;                             // 0x80(0x18)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x98(0x8)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xA0(0x50)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xF0(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x100(0x18)(None)
};

// 0x5 (0x5 - 0x0)
// Function UpdatingModsToast.UpdatingModsToast_C.InitCounter
struct UUpdatingModsToast_C_InitCounter_Params
{
public:
	int32                                        NewCounterMax;                                     // 0x0(0x4)(None)
	bool                                         bInWillSetCounter;                                 // 0x4(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function UpdatingModsToast.UpdatingModsToast_C.OverrideTextValueWithString
struct UUpdatingModsToast_C_OverrideTextValueWithString_Params
{
public:
	class FString                                NewText;                                           // 0x0(0x10)(None)
	bool                                         HideProgressBar;                                   // 0x10(0x1)(None)
};

// 0x19 (0x19 - 0x0)
// Function UpdatingModsToast.UpdatingModsToast_C.OverrideTextValue
struct UUpdatingModsToast_C_OverrideTextValue_Params
{
public:
	class FText                                  NewText;                                           // 0x0(0x18)(None)
	bool                                         HideProgressBar;                                   // 0x18(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function UpdatingModsToast.UpdatingModsToast_C.SetCounter
struct UUpdatingModsToast_C_SetCounter_Params
{
public:
	int32                                        NewCounter;                                        // 0x0(0x4)(None)
};

// 0x71 (0x71 - 0x0)
// Function UpdatingModsToast.UpdatingModsToast_C.ExecuteUbergraph_UpdatingModsToast
struct UUpdatingModsToast_C_ExecuteUbergraph_UpdatingModsToast_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(None)
	uint8                                        Pad_4B52[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_NewCounterMax;                        // 0x8(0x4)(None)
	bool                                         K2Node_Event_bInWillSetCounter;                    // 0xC(0x1)(None)
	uint8                                        Pad_4B53[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_NewText_1;                            // 0x10(0x10)(SimpleDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         K2Node_Event_HideProgressBar_1;                    // 0x20(0x1)(None)
	uint8                                        Pad_4B54[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_NewText;                              // 0x28(0x18)(ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         K2Node_Event_HideProgressBar;                      // 0x40(0x1)(None)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x41(0x1)(None)
	uint8                                        Pad_4B55[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x48(0x18)(None)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x60(0x8)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x68(0x1)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x69(0x1)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x6A(0x1)(None)
	uint8                                        Pad_4B56[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_NewCounter;                           // 0x6C(0x4)(None)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x70(0x1)(None)
};

}
}


