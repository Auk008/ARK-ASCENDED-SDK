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

// 0x8 (0x8 - 0x0)
// Function UI_Sub-Category.UI_Sub-Category_C.OnFail_B7C25CB3474DE2A4D0BC4DAA4F40DDC8
struct UUI_SubMinusCategory_C_OnFail_B7C25CB3474DE2A4D0BC4DAA4F40DDC8_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_Sub-Category.UI_Sub-Category_C.OnSuccess_B7C25CB3474DE2A4D0BC4DAA4F40DDC8
struct UUI_SubMinusCategory_C_OnSuccess_B7C25CB3474DE2A4D0BC4DAA4F40DDC8_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(None)
};

// 0x3F0 (0x3F0 - 0x0)
// Function UI_Sub-Category.UI_Sub-Category_C.Event Set Button Style
struct UUI_SubMinusCategory_C_Event_Set_Button_Style_Params
{
public:
	struct FButtonStyle                          InStyle;                                           // 0x0(0x3F0)(None)
};

// 0x440 (0x440 - 0x0)
// Function UI_Sub-Category.UI_Sub-Category_C.ExecuteUbergraph_UI_Sub-Category
struct UUI_SubMinusCategory_C_ExecuteUbergraph_UI_SubMinusCategory_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor)
	uint8                                        Pad_4A3A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAsyncTaskDownloadImage*               CallFunc_DownloadImage_ReturnValue;                // 0x18(0x8)(ZeroConstructor)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_1;                      // 0x20(0x8)(ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(None)
	uint8                                        Pad_4A3B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2C(0x10)(ZeroConstructor)
	uint8                                        Pad_4A3C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture;                        // 0x40(0x8)(ZeroConstructor)
	class UTexture2DDynamic*                     Temp_object_Variable;                              // 0x48(0x8)(ZeroConstructor)
	struct FButtonStyle                          K2Node_CustomEvent_InStyle;                        // 0x50(0x3F0)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_Sub-Category.UI_Sub-Category_C.OnSubCategoryClicked__DelegateSignature
struct UUI_SubMinusCategory_C_OnSubCategoryClicked__DelegateSignature_Params
{
public:
	class FString                                SubCategory;                                       // 0x0(0x10)(None)
	int64                                        SubCategoryID;                                     // 0x10(0x8)(None)
};

}
}


