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

// 0x18 (0x18 - 0x0)
// Function UI_Category.UI_Category_C.UpdateThemeSettings
struct UUI_Category_C_UpdateThemeSettings_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(None)
	uint8                                        Pad_3D21[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x4(0x14)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_Category.UI_Category_C.OnFail_20B338B847EF646EF76186BFC4DF1AD5
struct UUI_Category_C_OnFail_20B338B847EF646EF76186BFC4DF1AD5_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_Category.UI_Category_C.OnSuccess_20B338B847EF646EF76186BFC4DF1AD5
struct UUI_Category_C_OnSuccess_20B338B847EF646EF76186BFC4DF1AD5_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(None)
};

// 0x62 (0x62 - 0x0)
// Function UI_Category.UI_Category_C.ExecuteUbergraph_UI_Category
struct UUI_Category_C_ExecuteUbergraph_UI_Category_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(Edit, ZeroConstructor)
	uint8                                        Pad_3D22[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_1;                      // 0x18(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(Edit, ZeroConstructor)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture;                        // 0x30(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x38(0x10)(Edit, ZeroConstructor)
	class UTexture2DDynamic*                     Temp_object_Variable;                              // 0x48(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(None)
	uint8                                        Pad_3D23[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAsyncTaskDownloadImage*               CallFunc_DownloadImage_ReturnValue;                // 0x58(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x60(0x1)(None)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x61(0x1)(None)
};

}
}


