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

// 0xF0 (0xF0 - 0x0)
// Function UI_InstallationStatus.UI_InstallationStatus_C.SetTextBasedOnState
struct UUI_InstallationStatus_C_SetTextBasedOnState_Params
{
public:
	enum class EInstallStatus                    Index;                                             // 0x0(0x1)(None)
	enum class EInstallStatus                    Temp_byte_Variable;                                // 0x1(0x1)(None)
	uint8                                        Pad_4AC7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  Temp_text_Variable_2;                              // 0x38(0x18)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  Temp_text_Variable_3;                              // 0x50(0x18)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  Temp_text_Variable_4;                              // 0x68(0x18)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  Temp_text_Variable_5;                              // 0x80(0x18)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  Temp_text_Variable_6;                              // 0x98(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB0(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  K2Node_Select_Default;                             // 0xC0(0x18)(AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xD8(0x18)(None)
};

// 0xA8 (0xA8 - 0x0)
// Function UI_InstallationStatus.UI_InstallationStatus_C.GetTrueProgress
struct UUI_InstallationStatus_C_GetTrueProgress_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(None)
	enum class ELibraryProgressState             InstalationState;                                  // 0x4(0x1)(None)
	uint8                                        Pad_4ACA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ReturnValue;                                       // 0x8(0x8)(None)
	bool                                         MaintainPreviousValue;                             // 0x10(0x1)(None)
	uint8                                        Pad_4ACB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NewLocalVar;                                       // 0x14(0x4)(None)
	double                                       Temp_real_Variable;                                // 0x18(0x8)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x20(0x1)(None)
	uint8                                        Pad_4ACC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x28(0x8)(None)
	double                                       Temp_real_Variable_1;                              // 0x30(0x8)(None)
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x38(0x8)(None)
	double                                       CallFunc_MapRangeClamped_ReturnValue_1;            // 0x40(0x8)(None)
	double                                       Temp_real_Variable_2;                              // 0x48(0x8)(None)
	double                                       Temp_real_Variable_3;                              // 0x50(0x8)(None)
	double                                       Temp_real_Variable_4;                              // 0x58(0x8)(None)
	double                                       Temp_real_Variable_5;                              // 0x60(0x8)(None)
	double                                       Temp_real_Variable_6;                              // 0x68(0x8)(None)
	double                                       Temp_real_Variable_7;                              // 0x70(0x8)(None)
	double                                       Temp_real_Variable_8;                              // 0x78(0x8)(None)
	double                                       Temp_real_Variable_9;                              // 0x80(0x8)(None)
	double                                       Temp_real_Variable_10;                             // 0x88(0x8)(None)
	enum class ELibraryProgressState             Temp_byte_Variable;                                // 0x90(0x1)(None)
	uint8                                        Pad_4ACD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_Select_Default;                             // 0x98(0x8)(None)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0xA0(0x8)(None)
};

// 0x85 (0x85 - 0x0)
// Function UI_InstallationStatus.UI_InstallationStatus_C.UpdateColor
struct UUI_InstallationStatus_C_UpdateColor_Params
{
public:
	enum class EInstallStatus                    Install_Status;                                    // 0x0(0x1)(None)
	enum class EInstallStatus                    Temp_byte_Variable;                                // 0x1(0x1)(None)
	uint8                                        Pad_4ACE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0x4(0x10)(None)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0x14(0x10)(None)
	struct FLinearColor                          Temp_struct_Variable_2;                            // 0x24(0x10)(None)
	struct FLinearColor                          Temp_struct_Variable_3;                            // 0x34(0x10)(None)
	struct FLinearColor                          Temp_struct_Variable_4;                            // 0x44(0x10)(None)
	struct FLinearColor                          Temp_struct_Variable_5;                            // 0x54(0x10)(None)
	struct FLinearColor                          Temp_struct_Variable_6;                            // 0x64(0x10)(None)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x74(0x10)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x84(0x1)(None)
};

// 0x30 (0x30 - 0x0)
// Function UI_InstallationStatus.UI_InstallationStatus_C.UpdateModProgress
struct UUI_InstallationStatus_C_UpdateModProgress_Params
{
public:
	int32                                        Progress;                                          // 0x0(0x4)(None)
	enum class EInstallStatus                    NewInstallationStatus;                             // 0x4(0x1)(None)
	enum class ELibraryProgressState             InstallationPhase;                                 // 0x5(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x6(0x1)(None)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x7(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x8(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x9(0x1)(None)
	uint8                                        Pad_4AE0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetTrueProgress_ReturnValue;              // 0x10(0x8)(None)
	bool                                         CallFunc_GetTrueProgress_MaintainPreviousValue;    // 0x18(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(None)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x1A(0x1)(None)
	uint8                                        Pad_4AE1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x20(0x8)(None)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x28(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x29(0x1)(None)
	uint8                                        Pad_4AE3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x2C(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_InstallationStatus.UI_InstallationStatus_C.Event Set Bindings To Game Slot
struct UUI_InstallationStatus_C_Event_Set_Bindings_To_Game_Slot_Params
{
public:
	class UUI_GameSlot_C*                        GameSlot;                                          // 0x0(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function UI_InstallationStatus.UI_InstallationStatus_C.PlayNotificationUpdate
struct UUI_InstallationStatus_C_PlayNotificationUpdate_Params
{
public:
	double                                       Duration;                                          // 0x0(0x8)(None)
	class FText                                  Message;                                           // 0x8(0x18)(None)
};

// 0x48 (0x48 - 0x0)
// Function UI_InstallationStatus.UI_InstallationStatus_C.ExecuteUbergraph_UI_InstallationStatus
struct UUI_InstallationStatus_C_ExecuteUbergraph_UI_InstallationStatus_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_4AE6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_GameSlot_C*                        K2Node_CustomEvent_GameSlot;                       // 0x8(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(None)
	uint8                                        Pad_4AE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(None)
	double                                       K2Node_CustomEvent_Duration;                       // 0x20(0x8)(None)
	class FText                                  K2Node_CustomEvent_Message;                        // 0x28(0x18)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x40(0x1)(None)
	uint8                                        Pad_4AE8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_RetriggerableDelay_Duration_ImplicitCast; // 0x44(0x4)(None)
};

}
}


