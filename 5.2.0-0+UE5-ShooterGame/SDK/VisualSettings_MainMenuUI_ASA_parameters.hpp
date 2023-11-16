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
// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.SetupGettHdrValue
struct UVisualSettings_MainMenuUI_ASA_C_SetupGettHdrValue_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(None)
	uint8                                        Pad_3F5F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MinValue;                                          // 0x8(0x8)(None)
	double                                       MaxValue;                                          // 0x10(0x8)(None)
	double                                       RealValue;                                         // 0x18(0x8)(None)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x20(0x8)(None)
	double                                       CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x28(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.SetupSetHdrValue
struct UVisualSettings_MainMenuUI_ASA_C_SetupSetHdrValue_Params
{
public:
	class UDataListValueGeneric*                 Self2;                                             // 0x0(0x8)(None)
	float                                        Value;                                             // 0x8(0x4)(None)
	uint8                                        Pad_3F61[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MinValue;                                          // 0x10(0x8)(None)
	double                                       MaxValue;                                          // 0x18(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x20(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x28(0x8)(None)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x30(0x8)(None)
	double                                       CallFunc_Subtract_DoubleFloat_A_ImplicitCast;      // 0x38(0x8)(None)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x40(0x4)(None)
	float                                        CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1;    // 0x44(0x4)(None)
	float                                        CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x48(0x4)(None)
	float                                        CallFunc_SetFloatValue_Value_ImplicitCast;         // 0x4C(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.Get_HDRMidLuminence_bIsEnabled
struct UVisualSettings_MainMenuUI_ASA_C_Get_HDRMidLuminence_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x1(0x1)(None)
	bool                                         CallFunc_GetBoolValue_ReturnValue;                 // 0x2(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3(0x1)(None)
};

// 0x40 (0x40 - 0x0)
// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.UpdateHDR
struct UVisualSettings_MainMenuUI_ASA_C_UpdateHDR_Params
{
public:
	float                                        CallFunc_GetFloatValue_ReturnValue;                // 0x0(0x4)(None)
	uint8                                        Pad_3F66[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x8(0x8)(None)
	bool                                         CallFunc_GetBoolValue_ReturnValue;                 // 0x10(0x1)(None)
	uint8                                        Pad_3F67[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x14(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x18(0x1)(None)
	uint8                                        Pad_3F68[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x20(0x8)(None)
	double                                       CallFunc_Lerp_A_ImplicitCast;                      // 0x28(0x8)(None)
	double                                       CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x30(0x8)(None)
	double                                       CallFunc_Lerp_B_ImplicitCast;                      // 0x38(0x8)(None)
};

// 0x1C (0x1C - 0x0)
// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature
struct UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRValueSlider_K2Node_ComponentBoundEvent_1_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(None)
	int32                                        Index;                                             // 0x18(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature
struct UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_EnableHDRCheckBox_K2Node_ComponentBoundEvent_2_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(None)
	int32                                        Index;                                             // 0x18(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature
struct UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRMinimumLuminence_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(None)
	int32                                        Index;                                             // 0x18(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature
struct UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRMidLuminence_K2Node_ComponentBoundEvent_7_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(None)
	int32                                        Index;                                             // 0x18(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature
struct UVisualSettings_MainMenuUI_ASA_C_BndEvt__VisualSettings_MainMenuUI_ASA_HDRMaximumLuminence_K2Node_ComponentBoundEvent_8_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(None)
	int32                                        Index;                                             // 0x18(0x4)(None)
};

// 0x2B4 (0x2B4 - 0x0)
// Function VisualSettings_MainMenuUI_ASA.VisualSettings_MainMenuUI_ASA_C.ExecuteUbergraph_VisualSettings_MainMenuUI_ASA
struct UVisualSettings_MainMenuUI_ASA_C_ExecuteUbergraph_VisualSettings_MainMenuUI_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	uint8                                        Pad_3F8D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x8(0x8)(Edit, ZeroConstructor)
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_3;          // 0x10(0x18)(ContainsInstancedReference, AdvancedDisplay, Protected, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	int32                                        K2Node_ComponentBoundEvent_Index_3;                // 0x28(0x4)(None)
	uint8                                        Pad_3F8E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_1; // 0x30(0x8)(Edit, ZeroConstructor)
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_4;          // 0x38(0x18)(AssetRegistrySearchable, SimpleDisplay, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	int32                                        K2Node_ComponentBoundEvent_Index_4;                // 0x50(0x4)(None)
	int32                                        CallFunc_GetCurrentHDRDisplayNits_ReturnValue;     // 0x54(0x4)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x58(0x8)(None)
	double                                       CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x60(0x8)(None)
	class UWorld*                                CallFunc_GetGameWorld_ReturnValue;                 // 0x68(0x8)(Edit, ZeroConstructor)
	class AShooterPlayerController*              CallFunc_GetPC_ReturnValue;                        // 0x70(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_TriggerLevelCustomEvents_ReturnValue;     // 0x78(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x79(0x1)(None)
	uint8                                        Pad_3F8F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                CallFunc_GetGameWorld_ReturnValue_1;               // 0x80(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_TriggerLevelCustomEvents_ReturnValue_1;   // 0x88(0x1)(None)
	uint8                                        Pad_3F90[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerController*              CallFunc_GetPC_ReturnValue_1;                      // 0x90(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x98(0x1)(None)
	uint8                                        Pad_3F91[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_2; // 0xA0(0x8)(Edit, ZeroConstructor)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_3; // 0xA8(0x8)(Edit, ZeroConstructor)
	float                                        CallFunc_GetFloatValue_ReturnValue;                // 0xB0(0x4)(None)
	float                                        CallFunc_GetFloatValue_ReturnValue_1;              // 0xB4(0x4)(None)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_4; // 0xB8(0x8)(Edit, ZeroConstructor)
	float                                        CallFunc_GetFloatValue_ReturnValue_2;              // 0xC0(0x4)(None)
	uint8                                        Pad_3F92[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_2;          // 0xC8(0x18)(AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	int32                                        K2Node_ComponentBoundEvent_Index_2;                // 0xE0(0x4)(None)
	uint8                                        Pad_3F93[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_1;          // 0xE8(0x18)(SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	int32                                        K2Node_ComponentBoundEvent_Index_1;                // 0x100(0x4)(None)
	uint8                                        Pad_3F94[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue;            // 0x108(0x18)(None)
	int32                                        K2Node_ComponentBoundEvent_Index;                  // 0x120(0x4)(None)
	uint8                                        Pad_3F96[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_5; // 0x128(0x8)(Edit, ZeroConstructor)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_6; // 0x130(0x8)(Edit, ZeroConstructor)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_7; // 0x138(0x8)(Edit, ZeroConstructor)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_8; // 0x140(0x8)(Edit, ZeroConstructor)
	double                                       CallFunc_SetupGettHdrValue_RealValue;              // 0x148(0x8)(None)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_9; // 0x150(0x8)(Edit, ZeroConstructor)
	double                                       CallFunc_SetupGettHdrValue_RealValue_1;            // 0x158(0x8)(None)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_10; // 0x160(0x8)(Edit, ZeroConstructor)
	double                                       CallFunc_SetupGettHdrValue_RealValue_2;            // 0x168(0x8)(None)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_11; // 0x170(0x8)(Edit, ZeroConstructor)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_12; // 0x178(0x8)(Edit, ZeroConstructor)
	float                                        CallFunc_GetFloatValue_ReturnValue_3;              // 0x180(0x4)(None)
	float                                        CallFunc_GetFloatValue_ReturnValue_4;              // 0x184(0x4)(None)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_13; // 0x188(0x8)(Edit, ZeroConstructor)
	float                                        CallFunc_GetFloatValue_ReturnValue_5;              // 0x190(0x4)(None)
	uint8                                        Pad_3F97[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SetupGettHdrValue_RealValue_3;            // 0x198(0x8)(None)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_14; // 0x1A0(0x8)(Edit, ZeroConstructor)
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue_15; // 0x1A8(0x8)(None)
	double                                       CallFunc_SetupGettHdrValue_RealValue_4;            // 0x1B0(0x8)(None)
	double                                       CallFunc_SetupGettHdrValue_RealValue_5;            // 0x1B8(0x8)(None)
	double                                       CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast;  // 0x1C0(0x8)(None)
	double                                       CallFunc_SetupGettHdrValue_MinValue_ImplicitCast;  // 0x1C8(0x8)(None)
	float                                        CallFunc_SetFloatValue_Value_ImplicitCast;         // 0x1D0(0x4)(None)
	uint8                                        Pad_3F98[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SetupSetHdrValue_MinValue_ImplicitCast;   // 0x1D8(0x8)(None)
	double                                       CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast;   // 0x1E0(0x8)(None)
	double                                       CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_1; // 0x1E8(0x8)(None)
	double                                       CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_1; // 0x1F0(0x8)(None)
	double                                       CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_2; // 0x1F8(0x8)(None)
	double                                       CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_2; // 0x200(0x8)(None)
	double                                       CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_1; // 0x208(0x8)(None)
	double                                       CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_1; // 0x210(0x8)(None)
	float                                        K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast; // 0x218(0x4)(None)
	uint8                                        Pad_3F9A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_2; // 0x220(0x8)(None)
	double                                       CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_2; // 0x228(0x8)(None)
	float                                        K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast; // 0x230(0x4)(None)
	uint8                                        Pad_3F9B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_3; // 0x238(0x8)(None)
	double                                       CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_3; // 0x240(0x8)(None)
	float                                        K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast; // 0x248(0x4)(None)
	uint8                                        Pad_3F9C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_3; // 0x250(0x8)(None)
	double                                       CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_3; // 0x258(0x8)(None)
	double                                       CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_4; // 0x260(0x8)(None)
	double                                       CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_4; // 0x268(0x8)(None)
	double                                       CallFunc_SetupSetHdrValue_MaxValue_ImplicitCast_5; // 0x270(0x8)(None)
	double                                       CallFunc_SetupSetHdrValue_MinValue_ImplicitCast_5; // 0x278(0x8)(None)
	float                                        K2Node_VariableSet_HDRDisplayMaxLuminance_ImplicitCast_1; // 0x280(0x4)(None)
	uint8                                        Pad_3F9D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_4; // 0x288(0x8)(None)
	double                                       CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_4; // 0x290(0x8)(None)
	float                                        K2Node_VariableSet_HDRDisplayMinLuminance_ImplicitCast_1; // 0x298(0x4)(None)
	uint8                                        Pad_3F9E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SetupGettHdrValue_MinValue_ImplicitCast_5; // 0x2A0(0x8)(None)
	double                                       CallFunc_SetupGettHdrValue_MaxValue_ImplicitCast_5; // 0x2A8(0x8)(None)
	float                                        K2Node_VariableSet_HDRDisplayMidLuminance_ImplicitCast_1; // 0x2B0(0x4)(None)
};

}
}


