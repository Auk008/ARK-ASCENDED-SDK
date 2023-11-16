#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x15F (0x160 - 0x1)
// ScriptStruct FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.AnimBlueprintGeneratedConstantData
struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                        Pad_438E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  __NameProperty_174;                                // 0x4(0x8)(None)
	int32                                        __IntProperty_175;                                 // 0xC(0x4)(None)
	class FName                                  __NameProperty_176;                                // 0x10(0x8)(None)
	TArray<float>                                __ArrayProperty_177;                               // 0x18(0x10)(AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintCallable, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierPrivate)
	class UBlendProfile*                         __BlendProfile_178;                                // 0x28(0x8)(ZeroConstructor)
	class UCurveFloat*                           __CurveFloat_179;                                  // 0x30(0x8)(ZeroConstructor)
	enum class EAlphaBlendOption                 __EnumProperty_180;                                // 0x38(0x1)(None)
	enum class EBlendListTransitionType          __EnumProperty_181;                                // 0x39(0x1)(None)
	uint8                                        Pad_4394[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                __ArrayProperty_182;                               // 0x40(0x10)(AssetRegistrySearchable, AdvancedDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         __BoolProperty_183;                                // 0x50(0x1)(None)
	uint8                                        Pad_4395[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  __NameProperty_184;                                // 0x54(0x8)(None)
	int32                                        __IntProperty_185;                                 // 0x5C(0x4)(None)
	class FName                                  __NameProperty_186;                                // 0x60(0x8)(None)
	float                                        __FloatProperty_187;                               // 0x68(0x4)(None)
	struct FInputScaleBiasClampConstants         __StructProperty_188;                              // 0x6C(0x2C)(None)
	float                                        __FloatProperty_189;                               // 0x98(0x4)(None)
	bool                                         __BoolProperty_190;                                // 0x9C(0x1)(None)
	enum class EAnimSyncMethod                   __EnumProperty_191;                                // 0x9D(0x1)(None)
	enum class EAnimGroupRole                    __ByteProperty_192;                                // 0x9E(0x1)(None)
	uint8                                        Pad_4396[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  __NameProperty_193;                                // 0xA0(0x8)(None)
	struct FAnimNodeFunctionRef                  __StructProperty_194;                              // 0xA8(0x20)(ZeroConstructor)
	struct FAnimSubsystem_PropertyAccess         AnimBlueprintExtension_PropertyAccess;             // 0xC8(0x80)(ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, BlueprintAuthorityOnly, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FAnimSubsystem_Base                   AnimBlueprintExtension_Base;                       // 0x148(0x18)(None)
};

// 0x4 (0x5 - 0x1)
// ScriptStruct FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.AnimBlueprintGeneratedMutableData
struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
public:
	bool                                         __BoolProperty;                                    // 0x1(0x1)(None)
	bool                                         __BoolProperty_0;                                  // 0x2(0x1)(None)
	bool                                         __BoolProperty_1;                                  // 0x3(0x1)(None)
	bool                                         __BoolProperty_2;                                  // 0x4(0x1)(None)
};

}


