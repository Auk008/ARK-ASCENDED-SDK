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

// 0x79 (0x79 - 0x0)
// Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.FixConsoleIcons
struct UMinimalSwitchUI_Widget_C_FixConsoleIcons_Params
{
public:
	TArray<class UWidget*>                       Local_UWidgetIcons;                                // 0x0(0x10)(Edit, ZeroConstructor, AdvancedDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(None)
	uint8                                        Pad_3E00[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x18(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(None)
	uint8                                        Pad_3E01[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x30(0x8)(Edit, ZeroConstructor)
	class UImage*                                K2Node_DynamicCast_AsImage;                        // 0x38(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(None)
	uint8                                        Pad_3E04[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x44(0x4)(None)
	class FString                                CallFunc_GetObjectName_ReturnValue;                // 0x48(0x10)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(None)
	bool                                         CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0x5C(0x1)(None)
	uint8                                        Pad_3E05[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalGlobalUIData*                   CallFunc_BPGetGlobalUIData_ReturnValue;            // 0x60(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x68(0x1)(None)
	uint8                                        Pad_3E06[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetIconForKeyName_ReturnValue;            // 0x70(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(None)
};

// 0x58 (0x58 - 0x0)
// Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.UpdateTooltipMoreInfo
struct UMinimalSwitchUI_Widget_C_UpdateTooltipMoreInfo_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(None)
	uint8                                        Pad_3E0F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x20(0x18)(AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x38(0x8)(None)
	class FText                                  K2Node_Select_Default;                             // 0x40(0x18)(None)
};

// 0x3C (0x3C - 0x0)
// Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.Tick
struct UMinimalSwitchUI_Widget_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x65 (0x65 - 0x0)
// Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.ExecuteUbergraph_MinimalSwitchUI_Widget
struct UMinimalSwitchUI_Widget_C_ExecuteUbergraph_MinimalSwitchUI_Widget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x4(0x1)(None)
	uint8                                        Pad_3E10[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(Edit, ZeroConstructor)
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x10(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(None)
	bool                                         CallFunc_IsVisible_ReturnValue_1;                  // 0x19(0x1)(None)
	uint8                                        Pad_3E11[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x20(0x8)(None)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x28(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x60(0x4)(None)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x64(0x1)(None)
};

}
}


