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
// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.OnFail_E84A8D0E4FF41AB6F8FDA4A13C0CED23
struct UUI_ModSuccessfullyInsalled_C_OnFail_E84A8D0E4FF41AB6F8FDA4A13C0CED23_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.OnSuccess_E84A8D0E4FF41AB6F8FDA4A13C0CED23
struct UUI_ModSuccessfullyInsalled_C_OnSuccess_E84A8D0E4FF41AB6F8FDA4A13C0CED23_Params
{
public:
	class UTexture2DDynamic*                     Texture;                                           // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.PreConstruct
struct UUI_ModSuccessfullyInsalled_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x488 (0x488 - 0x0)
// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.Event Pop In Animation
struct UUI_ModSuccessfullyInsalled_C_Event_Pop_In_Animation_Params
{
public:
	struct FInstallProgressMod                   Mod_Info;                                          // 0x0(0x488)(None)
};

// 0x519 (0x519 - 0x0)
// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.ExecuteUbergraph_UI_ModSuccessfullyInsalled
struct UUI_ModSuccessfullyInsalled_C_ExecuteUbergraph_UI_ModSuccessfullyInsalled_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(None)
	uint8                                        Pad_49AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(ContainsInstancedReference, AssetRegistrySearchable, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x20(0x1)(None)
	uint8                                        Pad_49AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(Edit, ZeroConstructor)
	uint8                                        Pad_49B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x38(0x8)(Edit, ZeroConstructor)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture_1;                      // 0x40(0x8)(Edit, ZeroConstructor)
	class UTexture2DDynamic*                     K2Node_CustomEvent_Texture;                        // 0x48(0x8)(Edit, ZeroConstructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x50(0x10)(Edit, ZeroConstructor)
	class UTexture2DDynamic*                     Temp_object_Variable;                              // 0x60(0x8)(Edit, ZeroConstructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x68(0x1)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x69(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x6A(0x1)(None)
	uint8                                        Pad_49B1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstallProgressMod                   K2Node_CustomEvent_Mod_Info;                       // 0x70(0x488)(Edit, ZeroConstructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x4F8(0x1)(None)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x4F9(0x1)(None)
	uint8                                        Pad_49B2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x500(0x8)(Edit, ZeroConstructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x508(0x1)(None)
	uint8                                        Pad_49B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAsyncTaskDownloadImage*               CallFunc_DownloadImage_ReturnValue;                // 0x510(0x8)(None)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x518(0x1)(None)
};

}
}


