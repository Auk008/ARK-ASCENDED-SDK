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

// 0x167 (0x168 - 0x1)
// ScriptStruct FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C.AnimBlueprintGeneratedConstantData
struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	uint8                                        Pad_321E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  __NameProperty_204;                                // 0x4(0x8)(None)
	class FName                                  __NameProperty_205;                                // 0xC(0x8)(None)
	int32                                        __IntProperty_206;                                 // 0x14(0x4)(None)
	class FName                                  __NameProperty_207;                                // 0x18(0x8)(None)
	int32                                        __IntProperty_208;                                 // 0x20(0x4)(None)
	class FName                                  __NameProperty_209;                                // 0x24(0x8)(None)
	int32                                        __IntProperty_210;                                 // 0x2C(0x4)(None)
	TArray<float>                                __ArrayProperty_211;                               // 0x30(0x10)(Protected, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         __BoolProperty_212;                                // 0x40(0x1)(None)
	uint8                                        Pad_321F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        __FloatProperty_213;                               // 0x44(0x4)(None)
	struct FInputScaleBiasClampConstants         __StructProperty_214;                              // 0x48(0x2C)(None)
	float                                        __FloatProperty_215;                               // 0x74(0x4)(None)
	enum class EAnimSyncMethod                   __EnumProperty_216;                                // 0x78(0x1)(None)
	enum class EAnimGroupRole                    __ByteProperty_217;                                // 0x79(0x1)(None)
	uint8                                        Pad_3220[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  __NameProperty_218;                                // 0x7C(0x8)(None)
	uint8                                        Pad_3221[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlendProfile*                         __BlendProfile_219;                                // 0x88(0x8)(ZeroConstructor)
	class UCurveFloat*                           __CurveFloat_220;                                  // 0x90(0x8)(ZeroConstructor)
	bool                                         __BoolProperty_221;                                // 0x98(0x1)(None)
	enum class EAlphaBlendOption                 __EnumProperty_222;                                // 0x99(0x1)(None)
	enum class EBlendListTransitionType          __EnumProperty_223;                                // 0x9A(0x1)(None)
	uint8                                        Pad_3222[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                __ArrayProperty_224;                               // 0xA0(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimNodeFunctionRef                  __StructProperty_225;                              // 0xB0(0x20)(ZeroConstructor)
	struct FAnimSubsystem_PropertyAccess         AnimBlueprintExtension_PropertyAccess;             // 0xD0(0x80)(ZeroConstructor, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected)
	struct FAnimSubsystem_Base                   AnimBlueprintExtension_Base;                       // 0x150(0x18)(None)
};

// 0x6 (0x7 - 0x1)
// ScriptStruct FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C.AnimBlueprintGeneratedMutableData
struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
public:
	bool                                         __BoolProperty;                                    // 0x1(0x1)(None)
	bool                                         __BoolProperty_0;                                  // 0x2(0x1)(None)
	bool                                         __BoolProperty_1;                                  // 0x3(0x1)(None)
	bool                                         __BoolProperty_2;                                  // 0x4(0x1)(None)
	bool                                         __BoolProperty_3;                                  // 0x5(0x1)(None)
	bool                                         __BoolProperty_4;                                  // 0x6(0x1)(None)
};

}


