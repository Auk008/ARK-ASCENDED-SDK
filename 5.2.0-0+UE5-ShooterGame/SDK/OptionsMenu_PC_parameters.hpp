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

// 0x9 (0x9 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ChangesText_1_Visibility
struct UOptionsMenu_C_Get_ChangesText_1_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(None)
	uint8                                        Pad_4B9A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x4(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ChangesText_1_bIsEnabled
struct UOptionsMenu_C_Get_ChangesText_1_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1F (0x1F - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ResetOptions_Visibility
struct UOptionsMenu_C_Get_ResetOptions_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(None)
	uint8                                        Pad_4B9B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x8(0x8)(None)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x10(0x4)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x14(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x15(0x1)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x16(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x17(0x1)(None)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue_1;       // 0x18(0x4)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1C(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x1D(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x1E(0x1)(None)
};

// 0x2D (0x2D - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ResetGraphics_Visibility
struct UOptionsMenu_C_Get_ResetGraphics_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(None)
	uint8                                        Pad_4B9F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x4(0x4)(None)
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x8(0x8)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x10(0x1)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x11(0x1)(None)
	uint8                                        Pad_4BA0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x18(0x10)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x28(0x1)(None)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x29(0x1)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2A(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2B(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2C(0x1)(None)
};

// 0x17 (0x17 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ResetAudio_Visibility
struct UOptionsMenu_C_Get_ResetAudio_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(None)
	uint8                                        Pad_4BA3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x8(0x8)(None)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x10(0x4)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x14(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x15(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x16(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ResetKeybinding_Visibility
struct UOptionsMenu_C_Get_ResetKeybinding_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(None)
	uint8                                        Pad_4BA4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x8(0x8)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x10(0x1)(None)
};

// 0x22 (0x22 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_RtxTooltipRoot_Visibility
struct UOptionsMenu_C_Get_RtxTooltipRoot_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(None)
	uint8                                        Pad_4BA7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x8(0x18)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x20(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21(0x1)(None)
};

// 0x206 (0x206 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.UpdateDLSSFeatures_Status
struct UOptionsMenu_C_UpdateDLSSFeatures_Status_Params
{
public:
	bool                                         bNoErrors;                                         // 0x0(0x1)(None)
	uint8                                        Pad_4BB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReflexText;                                        // 0x8(0x18)(SimpleDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FText                                  SuperResolutionText;                               // 0x20(0x18)(ContainsInstancedReference, AssetRegistrySearchable, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FText                                  FrameGenerationText;                               // 0x38(0x18)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class EUStreamlineFeatureSupport        CallFunc_QueryReflexSupport_ReturnValue;           // 0x50(0x1)(None)
	enum class EUDLSSSupport                     CallFunc_QueryDLSSSupport_ReturnValue;             // 0x51(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x52(0x1)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x53(0x1)(None)
	enum class EUStreamlineFeatureSupport        CallFunc_QueryDLSSGSupport_ReturnValue;            // 0x54(0x1)(None)
	uint8                                        Pad_4BB7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetNewlineCharacter_ReturnValue;          // 0x58(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x68(0x1)(None)
	uint8                                        Pad_4BB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x70(0x18)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x88(0x1)(None)
	uint8                                        Pad_4BB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x90(0x50)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xE0(0x1)(None)
	uint8                                        Pad_4BBA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xE8(0x50)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x138(0x50)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x188(0x50)(AutoWeak, ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1D8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1E8(0x18)(None)
	enum class EUStreamlineFeatureSupport        CallFunc_QueryReflexSupport_ReturnValue_1;         // 0x200(0x1)(None)
	enum class EUDLSSSupport                     CallFunc_QueryDLSSSupport_ReturnValue_1;           // 0x201(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x202(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x203(0x1)(None)
	enum class EUStreamlineFeatureSupport        CallFunc_QueryDLSSGSupport_ReturnValue_1;          // 0x204(0x1)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x205(0x1)(None)
};

// 0xD (0xD - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_AntiAlias_bIsEnabled
struct UOptionsMenu_C_Get_AntiAlias_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	bool                                         CallFunc_GetBoolValue_ReturnValue;                 // 0x1(0x1)(None)
	uint8                                        Pad_4BBB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x4(0x4)(None)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x8(0x1)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x9(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xB(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC(0x1)(None)
};

// 0xD (0xD - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ResolutionScaleSlider_bIsEnabled
struct UOptionsMenu_C_Get_ResolutionScaleSlider_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	bool                                         CallFunc_GetBoolValue_ReturnValue;                 // 0x1(0x1)(None)
	uint8                                        Pad_4BBE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x4(0x4)(None)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x8(0x1)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x9(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xB(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC(0x1)(None)
};

// 0x6 (0x6 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_SuperResolution_bIsEnabled
struct UOptionsMenu_C_Get_SuperResolution_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	bool                                         CallFunc_IsDLSSSupported_ReturnValue;              // 0x1(0x1)(None)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x2(0x1)(None)
	bool                                         CallFunc_GetBoolValue_ReturnValue;                 // 0x3(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x5(0x1)(None)
};

// 0x7 (0x7 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_UseNvidiaReflexLowLatency_bIsEnabled
struct UOptionsMenu_C_Get_UseNvidiaReflexLowLatency_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	bool                                         CallFunc_IsStreamlineFeatureSupported_ReturnValue; // 0x1(0x1)(None)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x2(0x1)(None)
	bool                                         CallFunc_GetBoolValue_ReturnValue;                 // 0x3(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x6(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_UseFrameGeneration_bIsEnabled
struct UOptionsMenu_C_Get_UseFrameGeneration_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	bool                                         CallFunc_GetBoolValue_ReturnValue;                 // 0x1(0x1)(None)
	bool                                         CallFunc_GetBoolValue_ReturnValue_1;               // 0x2(0x1)(None)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x3(0x1)(None)
	bool                                         CallFunc_IsStreamlineFeatureSupported_ReturnValue; // 0x4(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x6(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x7(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_UseNvidiaDlss_bIsEnabled
struct UOptionsMenu_C_Get_UseNvidiaDlss_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	uint8                                        Pad_4BC2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UShooterGameUserSettings*              CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x8(0x8)(None)
	bool                                         CallFunc_GetDLSSSupported_ReturnValue;             // 0x10(0x1)(None)
};

// 0x1A (0x1A - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.CanShowNvidiaPanel
struct UOptionsMenu_C_CanShowNvidiaPanel_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	bool                                         CallFunc_IsNvidiaGraphicCard_ReturnValue;          // 0x1(0x1)(None)
	uint8                                        Pad_4BCA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x8(0x10)(None)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x18(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x19(0x1)(None)
};

// 0xF (0xF - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_DisableTPVCameraInterpolationCheckbox_bIsEnabled
struct UOptionsMenu_C_Get_DisableTPVCameraInterpolationCheckbox_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	uint8                                        Pad_4BCD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x4(0x4)(None)
	int32                                        CallFunc_GetSelectedIndex_ReturnValue_1;           // 0x8(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0xD(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xE(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.UpdateChangedValueButton
struct UOptionsMenu_C_UpdateChangedValueButton_Params
{
public:
	bool                                         bHasChangedAnyValue;                               // 0x0(0x1)(None)
};

// 0x258 (0x258 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.OnKeyDownEvent
struct UOptionsMenu_C_OnKeyDownEvent_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	struct FKeyEvent                             InKeyboardEvent;                                   // 0x38(0x40)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* LocalSubMenu;                                      // 0x130(0x8)(Edit, ZeroConstructor)
	struct FKey                                  LocalKey;                                          // 0x138(0x18)(SimpleDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x150(0x18)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FEventReply                           CallFunc_OnKeyDownEvent_ReturnValue;               // 0x168(0xB8)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x220(0x1)(None)
	uint8                                        Pad_4BCE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_SwitchButton_Widget;                      // 0x228(0x8)(Edit, ZeroConstructor)
	class UWidget*                               CallFunc_SwitchButton_Widget_1;                    // 0x230(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x238(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x239(0x1)(None)
	uint8                                        Pad_4BCF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x23C(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x240(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_3;          // 0x241(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_4;          // 0x242(0x1)(None)
	uint8                                        Pad_4BD0[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_SwitchButton_Widget_2;                    // 0x248(0x8)(Edit, ZeroConstructor)
	class UWidget*                               CallFunc_SwitchButton_Widget_3;                    // 0x250(0x8)(None)
};

// 0x3 (0x3 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.NotIsNewCameraEnabled
struct UOptionsMenu_C_NotIsNewCameraEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	bool                                         CallFunc_IsNewCameraEnabled_ReturnValue;           // 0x1(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(None)
};

// 0x59 (0x59 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.UpdateGamepadControlsTab
struct UOptionsMenu_C_UpdateGamepadControlsTab_Params
{
public:
	class UPrimalGlobalUIData*                   UIDataLocal;                                       // 0x0(0x8)(Edit, ZeroConstructor)
	class UTexture2D*                            LocalBGImage;                                      // 0x8(0x8)(Edit, ZeroConstructor)
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x10(0x10)(SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x20(0x1)(None)
	uint8                                        Pad_4BD1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalGameData*                       CallFunc_BPGetGameData_ReturnValue;                // 0x28(0x8)(Edit, ZeroConstructor)
	class UObject*                               CallFunc_PureClassDefaultObject_ReturnValue;       // 0x30(0x8)(Edit, ZeroConstructor)
	class UPrimalGlobalUIData*                   K2Node_DynamicCast_AsPrimal_Global_UIData;         // 0x38(0x8)(None)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(None)
	uint8                                        Pad_4BD2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlatformName_ReturnValue_1;            // 0x48(0x10)(None)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x58(0x1)(None)
};

// 0x3 (0x3 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Get_ForceTPVCameraOffsetCheckbox_bIsEnabled
struct UOptionsMenu_C_Get_ForceTPVCameraOffsetCheckbox_bIsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	bool                                         CallFunc_IsNewCameraEnabled_ReturnValue;           // 0x1(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(None)
};

// 0x9 (0x9 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.IsNewCameraEnabled
struct UOptionsMenu_C_IsNewCameraEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
	uint8                                        Pad_4BD3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetSelectedIndex_ReturnValue;             // 0x4(0x4)(None)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x8(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_MotionBlurCheckbox_K2Node_ComponentBoundEvent_20_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_MotionBlurCheckbox_K2Node_ComponentBoundEvent_20_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(None)
	int32                                        Index;                                             // 0x18(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_FilmGrainCheckbox_K2Node_ComponentBoundEvent_23_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_FilmGrainCheckbox_K2Node_ComponentBoundEvent_23_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(None)
	int32                                        Index;                                             // 0x18(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_UseDFAOCheckbox_K2Node_ComponentBoundEvent_25_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_UseDFAOCheckbox_K2Node_ComponentBoundEvent_25_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(None)
	int32                                        Index;                                             // 0x18(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_SSAOCheckbox_K2Node_ComponentBoundEvent_27_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_SSAOCheckbox_K2Node_ComponentBoundEvent_27_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(None)
	int32                                        Index;                                             // 0x18(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_TrueSkyQualitySlider_K2Node_ComponentBoundEvent_29_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_TrueSkyQualitySlider_K2Node_ComponentBoundEvent_29_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(None)
	int32                                        Index;                                             // 0x18(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_GroundClutterDensitySlider_K2Node_ComponentBoundEvent_32_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_GroundClutterDensitySlider_K2Node_ComponentBoundEvent_32_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(None)
	int32                                        Index;                                             // 0x18(0x4)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_TerrainShadowComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_TerrainShadowComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CrosshairColorSlider_K2Node_ComponentBoundEvent_3_ChangedColor__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_CrosshairColorSlider_K2Node_ComponentBoundEvent_3_ChangedColor__DelegateSignature_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(None)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CrosshairSizeSlider_K2Node_ComponentBoundEvent_4_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_CrosshairSizeSlider_K2Node_ComponentBoundEvent_4_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(None)
	int32                                        Index;                                             // 0x18(0x4)(None)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CrosshairOpacitySlider_K2Node_ComponentBoundEvent_5_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_CrosshairOpacitySlider_K2Node_ComponentBoundEvent_5_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(None)
	int32                                        Index;                                             // 0x18(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CrosshairColorSlider_2_K2Node_ComponentBoundEvent_21_ChangedColor__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_CrosshairColorSlider_2_K2Node_ComponentBoundEvent_21_ChangedColor__DelegateSignature_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CrosshairColorSlider_1_K2Node_ComponentBoundEvent_26_ChangedColor__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_CrosshairColorSlider_1_K2Node_ComponentBoundEvent_26_ChangedColor__DelegateSignature_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_ResolutionsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_ResolutionsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x19 (0x19 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_WidthTextBox_K2Node_ComponentBoundEvent_31_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_WidthTextBox_K2Node_ComponentBoundEvent_31_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(None)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(None)
};

// 0x19 (0x19 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_HeightTextBox_K2Node_ComponentBoundEvent_33_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_HeightTextBox_K2Node_ComponentBoundEvent_33_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(None)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_WindowModeComboBox_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_WindowModeComboBox_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_WorldTileBufferComboBox_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_WorldTileBufferComboBox_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_GammaSlider_K2Node_ComponentBoundEvent_36_ReturnValue__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_GammaSlider_K2Node_ComponentBoundEvent_36_ReturnValue__DelegateSignature_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(None)
	int32                                        Index;                                             // 0x18(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_FPSCapCheckbox_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_FPSCapCheckbox_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(None)
};

// 0x19 (0x19 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_FPSCapTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_FPSCapTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(None)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_43_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_43_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_ClientNetSpeedComboBox_K2Node_ComponentBoundEvent_44_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_ClientNetSpeedComboBox_K2Node_ComponentBoundEvent_44_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_TextChatFilterComboBox_K2Node_ComponentBoundEvent_45_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_TextChatFilterComboBox_K2Node_ComponentBoundEvent_45_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_UseGamepadAimAssist_K2Node_ComponentBoundEvent_46_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_UseGamepadAimAssist_K2Node_ComponentBoundEvent_46_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_VoiceChatFilterComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_VoiceChatFilterComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_UseAutoDetectSettingsCheckbox_K2Node_ComponentBoundEvent_48_OnCheckBoxComponentStateChanged__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_UseAutoDetectSettingsCheckbox_K2Node_ComponentBoundEvent_48_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
public:
	bool                                         bIsChecked;                                        // 0x0(0x1)(None)
};

// 0x3C (0x3C - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.Tick
struct UOptionsMenu_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	float                                        InDeltaTime;                                       // 0x38(0x4)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CameraModeComboBox_1_K2Node_ComponentBoundEvent_39_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_CameraModeComboBox_1_K2Node_ComponentBoundEvent_39_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_SuperResolutionNvidiaCombo_K2Node_ComponentBoundEvent_41_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_SuperResolutionNvidiaCombo_K2Node_ComponentBoundEvent_41_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_RayReconstructionCombo_K2Node_ComponentBoundEvent_42_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_RayReconstructionCombo_K2Node_ComponentBoundEvent_42_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_GlobalIlluminationQuality_K2Node_ComponentBoundEvent_50_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_GlobalIlluminationQuality_K2Node_ComponentBoundEvent_50_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_EffectsQuality_K2Node_ComponentBoundEvent_51_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_EffectsQuality_K2Node_ComponentBoundEvent_51_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_FoliageQuality_K2Node_ComponentBoundEvent_52_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_FoliageQuality_K2Node_ComponentBoundEvent_52_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_AdvancedGraphics_K2Node_ComponentBoundEvent_53_OnSelectionChangedEvent__DelegateSignature
struct UOptionsMenu_C_BndEvt__OptionsMenu_AdvancedGraphics_K2Node_ComponentBoundEvent_53_OnSelectionChangedEvent__DelegateSignature_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(None)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(None)
};

// 0x634 (0x634 - 0x0)
// Function OptionsMenu_PC.OptionsMenu_C.ExecuteUbergraph_OptionsMenu
struct UOptionsMenu_C_ExecuteUbergraph_OptionsMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(None)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x8(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x10(0x4)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(None)
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_21;        // 0x18(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_21;       // 0x28(0x1)(None)
	uint8                                        Pad_4BD6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_20;        // 0x30(0x10)(SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_20;       // 0x40(0x1)(None)
	uint8                                        Pad_4BD7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_19;        // 0x48(0x10)(AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_19;       // 0x58(0x1)(None)
	uint8                                        Pad_4BD8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_18;        // 0x60(0x10)(AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_18;       // 0x70(0x1)(None)
	uint8                                        Pad_4BD9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_17;        // 0x78(0x10)(AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_17;       // 0x88(0x1)(None)
	uint8                                        Pad_4BDA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_16;        // 0x90(0x10)(AssetRegistrySearchable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_16;       // 0xA0(0x1)(None)
	uint8                                        Pad_4BDB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0xA4(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xA8(0x4)(None)
	uint8                                        Pad_4BDC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_8;          // 0xB0(0x18)(TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	int32                                        K2Node_ComponentBoundEvent_Index_8;                // 0xC8(0x4)(None)
	uint8                                        Pad_4BDD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_7;          // 0xD0(0x18)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	int32                                        K2Node_ComponentBoundEvent_Index_7;                // 0xE8(0x4)(None)
	uint8                                        Pad_4BDE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_6;          // 0xF0(0x18)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	int32                                        K2Node_ComponentBoundEvent_Index_6;                // 0x108(0x4)(None)
	uint8                                        Pad_4BDF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_5;          // 0x110(0x18)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	int32                                        K2Node_ComponentBoundEvent_Index_5;                // 0x128(0x4)(None)
	uint8                                        Pad_4BE0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_4;          // 0x130(0x18)(AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	int32                                        K2Node_ComponentBoundEvent_Index_4;                // 0x148(0x4)(None)
	uint8                                        Pad_4BE1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_3;          // 0x150(0x18)(ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	int32                                        K2Node_ComponentBoundEvent_Index_3;                // 0x168(0x4)(None)
	bool                                         CallFunc_UseConsoleVideoOptions_ReturnValue;       // 0x16C(0x1)(None)
	uint8                                        Pad_4BE2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_15;        // 0x170(0x10)(AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_15;       // 0x180(0x1)(None)
	uint8                                        Pad_4BE3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_ComponentBoundEvent_Color_2;                // 0x184(0x10)(None)
	uint8                                        Pad_4BE4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_2;          // 0x198(0x18)(Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	int32                                        K2Node_ComponentBoundEvent_Index_2;                // 0x1B0(0x4)(None)
	uint8                                        Pad_4BE5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1B8(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue;          // 0x1C8(0x8)(None)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue;              // 0x1D0(0x8)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1D8(0x10)(Edit, ZeroConstructor)
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x1E8(0x8)(None)
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue_1;          // 0x1F0(0x18)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	int32                                        K2Node_ComponentBoundEvent_Index_1;                // 0x208(0x4)(None)
	uint8                                        Pad_4BE6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x210(0x10)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x220(0x10)(AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	double                                       CallFunc_Conv_StringToDouble_ReturnValue_1;        // 0x230(0x8)(None)
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x238(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x248(0x1)(None)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue_1;        // 0x249(0x1)(None)
	uint8                                        Pad_4BE7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x24C(0x4)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x250(0x1)(None)
	uint8                                        Pad_4BE8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalUI*                             CallFunc_Create_ReturnValue;                       // 0x258(0x8)(Edit, ZeroConstructor)
	class UVisualSettings_MainMenuUI_ASA_C*      K2Node_DynamicCast_AsVisual_Settings_Main_Menu_UI_ASA; // 0x260(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x268(0x1)(None)
	uint8                                        Pad_4BE9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPrimalUI*>                     CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x270(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, SimpleDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient)
	TArray<class UPrimalUI*>                     CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x280(0x10)(Edit, ZeroConstructor, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UPrimalUI*                             CallFunc_Array_Get_Item;                           // 0x290(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x298(0x4)(None)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x29C(0x1)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x29D(0x1)(None)
	uint8                                        Pad_4BEA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x2A0(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x2A4(0x1)(None)
	uint8                                        Pad_4BEB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlatformName_ReturnValue_1;            // 0x2A8(0x10)(Protected, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x2B8(0x1)(None)
	uint8                                        Pad_4BEC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerController*              CallFunc_GetPC_ReturnValue;                        // 0x2C0(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2C8(0x1)(None)
	uint8                                        Pad_4BED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerController*              CallFunc_GetPC_ReturnValue_1;                      // 0x2D0(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2D8(0x1)(None)
	uint8                                        Pad_4BEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          K2Node_ComponentBoundEvent_Color_1;                // 0x2DC(0x10)(None)
	struct FLinearColor                          K2Node_ComponentBoundEvent_Color;                  // 0x2EC(0x10)(None)
	uint8                                        Pad_4BEF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_14;        // 0x300(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_14;       // 0x310(0x1)(None)
	uint8                                        Pad_4BF0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text_2;                 // 0x318(0x18)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_2;         // 0x330(0x1)(None)
	uint8                                        Pad_4BF1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text_1;                 // 0x338(0x18)(SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod_1;         // 0x350(0x1)(None)
	uint8                                        Pad_4BF2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_13;        // 0x358(0x10)(AssetRegistrySearchable, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_13;       // 0x368(0x1)(None)
	uint8                                        Pad_4BF3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_12;        // 0x370(0x10)(AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_12;       // 0x380(0x1)(None)
	uint8                                        Pad_4BF4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_ReturnValue;            // 0x388(0x18)(ContainsInstancedReference, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	int32                                        K2Node_ComponentBoundEvent_Index;                  // 0x3A0(0x4)(None)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked_1;           // 0x3A4(0x1)(None)
	uint8                                        Pad_4BF5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x3A8(0x18)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x3C0(0x1)(None)
	uint8                                        Pad_4BF6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_11;        // 0x3C8(0x10)(ContainsInstancedReference, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_11;       // 0x3D8(0x1)(None)
	uint8                                        Pad_4BF7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_10;        // 0x3E0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_10;       // 0x3F0(0x1)(None)
	uint8                                        Pad_4BF8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_9;         // 0x3F8(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_9;        // 0x408(0x1)(None)
	uint8                                        Pad_4BF9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_8;         // 0x410(0x10)(ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_8;        // 0x420(0x1)(None)
	uint8                                        Pad_4BFA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_7;         // 0x428(0x10)(ContainsInstancedReference, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_7;        // 0x438(0x1)(None)
	bool                                         K2Node_ComponentBoundEvent_bIsChecked;             // 0x439(0x1)(None)
	uint8                                        Pad_4BFB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x43C(0x38)(None)
	float                                        K2Node_Event_InDeltaTime;                          // 0x474(0x4)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x478(0x1)(None)
	uint8                                        Pad_4BFC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x47C(0x4)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x480(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x481(0x1)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x482(0x1)(None)
	uint8                                        Pad_4BFD[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPNetExecParams                      K2Node_MakeStruct_BPNetExecParams;                 // 0x488(0x68)(Edit, ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient)
	TArray<class UDataListButtonVariable_Widget_ASA_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;      // 0x4F0(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UDataListButtonVariable_Widget_ASA_C*  CallFunc_Array_Get_Item_1;                         // 0x500(0x8)(Edit, ZeroConstructor)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x508(0x4)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x50C(0x1)(None)
	uint8                                        Pad_4BFE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlatformName_ReturnValue_2;            // 0x510(0x10)(SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue_2;        // 0x520(0x1)(None)
	uint8                                        Pad_4BFF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_6;         // 0x528(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_6;        // 0x538(0x1)(None)
	uint8                                        Pad_4C00[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x53C(0x4)(None)
	class UPrimalUI*                             CallFunc_Array_Get_Item_2;                         // 0x540(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_CanShowNvidiaPanel_ReturnValue;           // 0x548(0x1)(None)
	uint8                                        Pad_4C01[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_5;         // 0x550(0x10)(ContainsInstancedReference, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_5;        // 0x560(0x1)(None)
	uint8                                        Pad_4C02[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_4;         // 0x568(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_4;        // 0x578(0x1)(None)
	uint8                                        Pad_4C03[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlatformName_ReturnValue_3;            // 0x580(0x10)(BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x590(0x1)(None)
	uint8                                        Pad_4C04[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x598(0x8)(Edit, ZeroConstructor)
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_3;         // 0x5A0(0x10)(SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_3;        // 0x5B0(0x1)(None)
	uint8                                        Pad_4C05[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterPlayerController*              K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x5B8(0x8)(Edit, ZeroConstructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x5C0(0x1)(None)
	uint8                                        Pad_4C06[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_2;         // 0x5C8(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_2;        // 0x5D8(0x1)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x5D9(0x1)(None)
	uint8                                        Pad_4C07[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedItem_1;         // 0x5E0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType_1;        // 0x5F0(0x1)(None)
	uint8                                        Pad_4C08[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedItem;           // 0x5F8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPrivate)
	enum class ESelectInfo                       K2Node_ComponentBoundEvent_SelectionType;          // 0x608(0x1)(None)
	uint8                                        Pad_4C09[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UShooterGameUserSettings*              CallFunc_GetUserSettings_ReturnValue;              // 0x610(0x8)(None)
	int32                                        CallFunc_GetDLSSModeIndex_ReturnValue;             // 0x618(0x4)(None)
	uint8                                        Pad_4C0A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x620(0x10)(None)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x630(0x4)(None)
};

}
}


