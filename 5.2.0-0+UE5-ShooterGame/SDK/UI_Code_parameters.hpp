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
// Function UI_Code.UI_Code_C.OnLeftArrow
struct UUI_Code_C_OnLeftArrow_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x4(0x4)(None)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x8(0x1)(None)
};

// 0x9 (0x9 - 0x0)
// Function UI_Code.UI_Code_C.OnRightArrow
struct UUI_Code_C_OnRightArrow_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(None)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x8(0x1)(None)
};

// 0xC0 (0xC0 - 0x0)
// Function UI_Code.UI_Code_C.GetDigits
struct UUI_Code_C_GetDigits_Params
{
public:
	class FString                                Digits;                                            // 0x0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, UObjectWrapper, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x10(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, UObjectWrapper, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x20(0x10)(AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, UObjectWrapper, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x30(0x10)(Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x40(0x10)(SimpleDisplay, Protected, BlueprintCallable, PersistentInstance)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_4;          // 0x50(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_5;          // 0x60(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x70(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, PersistentInstance)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x80(0x10)(AssetRegistrySearchable, BlueprintAuthorityOnly, PersistentInstance)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x90(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xA0(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xB0(0x10)(None)
};

// 0x16 (0x16 - 0x0)
// Function UI_Code.UI_Code_C.BackSpace
struct UUI_Code_C_BackSpace_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(None)
	int32                                        Temp_int_Variable_1;                               // 0x4(0x4)(None)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xC(0x1)(None)
	uint8                                        Pad_4A20[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x10(0x4)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x14(0x1)(None)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x15(0x1)(None)
};

// 0x15D (0x15D - 0x0)
// Function UI_Code.UI_Code_C.SetDigitToText
struct UUI_Code_C_SetDigitToText_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(None)
	uint8                                        Pad_4A21[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text;                                              // 0x8(0x18)(ContainsInstancedReference, SimpleDisplay, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x20(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x30(0x10)(ContainsInstancedReference, AssetRegistrySearchable, BlueprintCallable, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Temp_int_Variable;                                 // 0x40(0x4)(None)
	uint8                                        Pad_4A22[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0x48(0x10)(AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x58(0x1)(None)
	uint8                                        Pad_4A23[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x60(0x18)(AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x78(0x4)(None)
	uint8                                        Pad_4A24[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x80(0x10)(AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x90(0x18)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Array_Get_Item_2;                         // 0xA8(0x10)(AssetRegistrySearchable, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Array_Get_Item_3;                         // 0xB8(0x10)(AdvancedDisplay, BlueprintCallable, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0xC8(0x18)(ContainsInstancedReference, Protected, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0xE0(0x18)(SimpleDisplay, AdvancedDisplay, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Array_Get_Item_4;                         // 0xF8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Array_Get_Item_5;                         // 0x108(0x10)(SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_4;          // 0x118(0x18)(BlueprintAuthorityOnly, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_5;          // 0x130(0x18)(TextExportTransient, PersistentInstance, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x148(0x10)(None)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x158(0x4)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x15C(0x1)(None)
};

// 0x161 (0x161 - 0x0)
// Function UI_Code.UI_Code_C.OnPreviewKeyDown
struct UUI_Code_C_OnPreviewKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(None)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x40)(AssetRegistrySearchable, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FEventReply                           ReturnValue;                                       // 0x78(0xB8)(SimpleDisplay, AdvancedDisplay, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x130(0x18)(AssetRegistrySearchable, AdvancedDisplay, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x148(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_1;          // 0x149(0x1)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue_2;          // 0x14A(0x1)(None)
	uint8                                        Pad_4A25[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDigits_Digits;                         // 0x150(0x10)(None)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x160(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_Code.UI_Code_C.BndEvt__Verification_UI_EditableText_172_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature
struct UUI_Code_C_BndEvt__Verification_UI_EditableText_172_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_Code.UI_Code_C.BndEvt__Verification_UI_digit2_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature
struct UUI_Code_C_BndEvt__Verification_UI_digit2_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_Code.UI_Code_C.BndEvt__Verification_UI_digit3_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature
struct UUI_Code_C_BndEvt__Verification_UI_digit3_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_Code.UI_Code_C.BndEvt__Verification_UI_digit4_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature
struct UUI_Code_C_BndEvt__Verification_UI_digit4_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_Code.UI_Code_C.BndEvt__Verification_UI_digit5_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature
struct UUI_Code_C_BndEvt__Verification_UI_digit5_K2Node_ComponentBoundEvent_7_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_Code.UI_Code_C.BndEvt__Verification_UI_digit6_K2Node_ComponentBoundEvent_8_OnEditableTextChangedEvent__DelegateSignature
struct UUI_Code_C_BndEvt__Verification_UI_digit6_K2Node_ComponentBoundEvent_8_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_Code.UI_Code_C.PreConstruct
struct UUI_Code_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(None)
};

// 0x4A1 (0x4A1 - 0x0)
// Function UI_Code.UI_Code_C.ExecuteUbergraph_UI_Code
struct UUI_Code_C_ExecuteUbergraph_UI_Code_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(None)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(None)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(None)
	uint8                                        Pad_4A26[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x10(0xD0)(Edit, ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0xE0(0x4)(None)
	uint8                                        Pad_4A27[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text_5;                 // 0xE8(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x100(0x1)(None)
	uint8                                        Pad_4A28[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text_4;                 // 0x108(0x18)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_1;                // 0x120(0x1)(None)
	uint8                                        Pad_4A29[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text_3;                 // 0x128(0x18)(SimpleDisplay, Protected, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_2;                // 0x140(0x1)(None)
	uint8                                        Pad_4A2A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text_2;                 // 0x148(0x18)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_3;                // 0x160(0x1)(None)
	uint8                                        Pad_4A2B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text_1;                 // 0x168(0x18)(ContainsInstancedReference, SimpleDisplay)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_4;                // 0x180(0x1)(None)
	uint8                                        Pad_4A2C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x188(0x18)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintAuthorityOnly)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_5;                // 0x1A0(0x1)(None)
	uint8                                        Pad_4A2D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1A8(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x1B8(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient)
	class FString                                CallFunc_Array_Get_Item;                           // 0x1C8(0x10)(AdvancedDisplay, TextExportTransient, NonPIEDuplicateTransient)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x1D8(0x18)(AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x1F0(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1F4(0x1)(None)
	uint8                                        Pad_4A2E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_3;                               // 0x1F8(0x4)(None)
	uint8                                        Pad_4A2F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x200(0x10)(ContainsInstancedReference, AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue_1; // 0x210(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x220(0x10)(Protected, BlueprintCallable, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CallFunc_Array_LastIndex_ReturnValue_1;            // 0x230(0x4)(None)
	uint8                                        Pad_4A30[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x238(0x18)(AssetRegistrySearchable, SimpleDisplay, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x250(0x1)(None)
	uint8                                        Pad_4A31[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_4;                               // 0x254(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x258(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x25C(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x260(0x4)(None)
	int32                                        Temp_int_Variable_5;                               // 0x264(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x268(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x26C(0x4)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x270(0x4)(None)
	uint8                                        Pad_4A32[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x280(0xD0)(TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x350(0x1)(None)
	uint8                                        Pad_4A33[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0x358(0x10)(AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue_2; // 0x368(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Array_Get_Item_2;                         // 0x378(0x10)(SimpleDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0x388(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x398(0x18)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue_3; // 0x3B0(0x10)(ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Array_Get_Item_3;                         // 0x3C0(0x10)(AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue_2;            // 0x3D0(0x4)(None)
	uint8                                        Pad_4A34[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x3D8(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x3F0(0x1)(None)
	uint8                                        Pad_4A35[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_LastIndex_ReturnValue_3;            // 0x3F4(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_3;             // 0x3F8(0x1)(None)
	uint8                                        Pad_4A36[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_4;          // 0x400(0x10)(AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue_4; // 0x410(0x10)(ContainsInstancedReference, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Array_Get_Item_4;                         // 0x420(0x10)(AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_5;          // 0x430(0x10)(ContainsInstancedReference, AssetRegistrySearchable, Protected, UObjectWrapper, NativeAccessSpecifierPublic)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_4;          // 0x440(0x18)(AutoWeak, SimpleDisplay, AdvancedDisplay, TextExportTransient, PersistentInstance, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue_5; // 0x458(0x10)(ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierPublic)
	class FString                                CallFunc_Array_Get_Item_5;                         // 0x468(0x10)(AssetRegistrySearchable, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        CallFunc_Array_LastIndex_ReturnValue_4;            // 0x478(0x4)(None)
	uint8                                        Pad_4A37[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_5;          // 0x480(0x18)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_4;             // 0x498(0x1)(None)
	uint8                                        Pad_4A38[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_LastIndex_ReturnValue_5;            // 0x49C(0x4)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_5;             // 0x4A0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_Code.UI_Code_C.OnDigitsFilled__DelegateSignature
struct UUI_Code_C_OnDigitsFilled__DelegateSignature_Params
{
public:
	class FString                                Digits;                                            // 0x0(0x10)(None)
};

}
}


