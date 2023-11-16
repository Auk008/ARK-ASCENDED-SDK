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

// 0x68 (0x68 - 0x0)
// Function MainMenuUI.MainMenuUI_C.OverrideBGImage
struct UMainMenuUI_C_OverrideBGImage_Params
{
public:
	class UTexture2D*                            BGOverrideTexture;                                 // 0x0(0x8)(Edit, ZeroConstructor)
	bool                                         InstantChange;                                     // 0x8(0x1)(None)
	uint8                                        Pad_4B6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x10(0x8)(Edit, ZeroConstructor)
	class AShooterGame_Menu*                     K2Node_DynamicCast_AsShooter_Game_Menu;            // 0x18(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x21(0x1)(None)
	uint8                                        Pad_4B6C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetMainMenuBackgroundTexture_ReturnValue; // 0x28(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x30(0x1)(None)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x31(0x1)(None)
	uint8                                        Pad_4B6D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x38(0x8)(Edit, ZeroConstructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x40(0x8)(None)
	float                                        CallFunc_BreakColor_R;                             // 0x48(0x4)(None)
	float                                        CallFunc_BreakColor_G;                             // 0x4C(0x4)(None)
	float                                        CallFunc_BreakColor_B;                             // 0x50(0x4)(None)
	float                                        CallFunc_BreakColor_A;                             // 0x54(0x4)(None)
	bool                                         CallFunc_IsVisible_ReturnValue_1;                  // 0x58(0x1)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x59(0x1)(None)
	uint8                                        Pad_4B6E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x60(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function MainMenuUI.MainMenuUI_C.UpdateLeftTextPosition
struct UMainMenuUI_C_UpdateLeftTextPosition_Params
{
public:
	bool                                         IsCTAVisible;                                      // 0x0(0x1)(None)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(None)
	uint8                                        Pad_4B6F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x4(0x10)(None)
	struct FMargin                               K2Node_MakeStruct_Margin_1;                        // 0x14(0x10)(None)
	struct FMargin                               K2Node_Select_Default;                             // 0x24(0x10)(None)
	uint8                                        Pad_4B70[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x38(0x8)(None)
};

// 0xEE1 (0xEE1 - 0x0)
// Function MainMenuUI.MainMenuUI_C.ExecuteUbergraph_MainMenuUI
struct UMainMenuUI_C_ExecuteUbergraph_MainMenuUI_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_4B71[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x8(0x8)(Edit, ZeroConstructor)
	class AShooterGame_Menu*                     K2Node_DynamicCast_AsShooter_Game_Menu;            // 0x10(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	uint8                                        Pad_4B72[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetMainMenuBackgroundTexture_ReturnValue; // 0x20(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(None)
	uint8                                        Pad_4B73[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetUpsellIndex_ReturnValue;               // 0x2C(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x30(0x1)(None)
	uint8                                        Pad_4B74[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x40(0xD0)(Edit, ZeroConstructor, SimpleDisplay, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	int32                                        CallFunc_GetUpsellIndex_ReturnValue_1;             // 0x110(0x4)(None)
	uint8                                        Pad_4B75[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x120(0x3F0)(Edit, ZeroConstructor, AssetRegistrySearchable, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x510(0x1)(None)
	uint8                                        Pad_4B76[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue_1;       // 0x520(0xD0)(Edit, ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle_1;                   // 0x5F0(0x3F0)(Edit, ZeroConstructor, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue_2;       // 0x9E0(0xD0)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle_2;                   // 0xAB0(0x3F0)(Edit, ZeroConstructor)
	int32                                        CallFunc_GetUpsellIndex_ReturnValue_2;             // 0xEA0(0x4)(None)
	bool                                         K2Node_SwitchInteger_CmpSuccess_1;                 // 0xEA4(0x1)(None)
	uint8                                        Pad_4B77[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_GetViewportSize_ReturnValue;              // 0xEA8(0x10)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xEB8(0x1)(None)
	uint8                                        Pad_4B78[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector2D_X;                          // 0xEC0(0x8)(None)
	double                                       CallFunc_BreakVector2D_Y;                          // 0xEC8(0x8)(None)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xED0(0x1)(None)
	bool                                         CallFunc_OpenUrl_ReturnValue;                      // 0xED1(0x1)(None)
	bool                                         CallFunc_OpenUrl_ReturnValue_1;                    // 0xED2(0x1)(None)
	uint8                                        Pad_4B79[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCreditsUI_C*                          CallFunc_Create_ReturnValue;                       // 0xED8(0x8)(None)
	bool                                         CallFunc_Play_ReturnValue;                         // 0xEE0(0x1)(None)
};

}
}


