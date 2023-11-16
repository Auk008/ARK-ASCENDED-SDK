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

// 0x2 (0x2 - 0x0)
// Function DyeUI.DyeUI_C.GetVisibility_0
struct UDyeUI_C_GetVisibility_0_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(None)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x1(0x1)(None)
};

// 0x69 (0x69 - 0x0)
// Function DyeUI.DyeUI_C.FixConsoleIcons
struct UDyeUI_C_FixConsoleIcons_Params
{
public:
	TArray<class UWidget*>                       Local_UWidgetIcons;                                // 0x0(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(None)
	TArray<class UImage*>                        K2Node_MakeArray_Array;                            // 0x18(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class UImage*                                CallFunc_Array_Get_Item;                           // 0x28(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x34(0x1)(None)
	uint8                                        Pad_359B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x38(0x10)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(None)
	uint8                                        Pad_359C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4C(0x4)(None)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0x50(0x1)(None)
	uint8                                        Pad_359E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue;            // 0x58(0x8)(Edit, ZeroConstructor)
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue;            // 0x60(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x68(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function DyeUI.DyeUI_C.ExecuteUbergraph_DyeUI
struct UDyeUI_C_ExecuteUbergraph_DyeUI_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
};

}
}


