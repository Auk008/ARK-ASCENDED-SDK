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

// 0x1 (0x1 - 0x0)
// Function UI_PrivacyAndTerms_2.UI_PrivacyAndTerms_2_C.PreConstruct
struct UUI_PrivacyAndTerms_2_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0xD0 (0xD0 - 0x0)
// Function UI_PrivacyAndTerms_2.UI_PrivacyAndTerms_2_C.OnSuccess_UpdateTermsOfUse
struct UUI_PrivacyAndTerms_2_C_OnSuccess_UpdateTermsOfUse_Params
{
public:
	struct FTerms                                Terms;                                             // 0x0(0xD0)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_PrivacyAndTerms_2.UI_PrivacyAndTerms_2_C.Event Update Terms Of Use On Error
struct UUI_PrivacyAndTerms_2_C_Event_Update_Terms_Of_Use_On_Error_Params
{
public:
	struct FCFCoreError                          Error;                                             // 0x0(0x38)(None)
};

// 0x1A8 (0x1A8 - 0x0)
// Function UI_PrivacyAndTerms_2.UI_PrivacyAndTerms_2_C.ExecuteUbergraph_UI_PrivacyAndTerms_2
struct UUI_PrivacyAndTerms_2_C_ExecuteUbergraph_UI_PrivacyAndTerms_2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_3D1D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCFCoreSubsystem*                      CallFunc_GetEngineSubsystem_ReturnValue;           // 0x8(0x8)(ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x30(0x14)(AdvancedDisplay, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x44(0x14)(AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x58(0x14)(ContainsInstancedReference, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x6C(0x1)(None)
	uint8                                        Pad_3D1E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x70(0x14)(AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D1F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTerms                                K2Node_CustomEvent_terms;                          // 0x88(0xD0)(AssetRegistrySearchable, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FCFCoreError                          K2Node_CustomEvent_error;                          // 0x158(0x38)(ContainsInstancedReference, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x190(0x18)(None)
};

}
}


