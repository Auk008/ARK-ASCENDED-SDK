#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EInputActionValueType : uint8
{
	Boolean                        = 0,
	Axis1D                         = 1,
	Axis2D                         = 2,
	Axis3D                         = 3,
	EInputActionValueType_MAX      = 4,
};

enum class EMappingQueryResult : uint8
{
	Error_EnhancedInputNotEnabled  = 0,
	Error_InputContextNotInActiveContexts = 1,
	Error_InvalidAction            = 2,
	NotMappable                    = 3,
	MappingAvailable               = 4,
	EMappingQueryResult_MAX        = 5,
};

enum class EMappingQueryIssue : uint8
{
	NoIssue                        = 0,
	ReservedByAction               = 1,
	HidesExistingMapping           = 2,
	HiddenByExistingMapping        = 4,
	CollisionWithMappingInSameContext = 8,
	ForcesTypePromotion            = 16,
	ForcesTypeDemotion             = 32,
	EMappingQueryIssue_MAX         = 33,
};

enum class EPlayerMappableKeySettingBehaviors : uint8
{
	InheritSettingsFromAction      = 0,
	OverrideSettings               = 1,
	IgnoreSettings                 = 2,
	EPlayerMappableKeySettingBehaviors_MAX = 3,
};

enum class EInputMappingRebuildType : uint8
{
	None                           = 0,
	Rebuild                        = 1,
	RebuildWithFlush               = 2,
	EInputMappingRebuildType_MAX   = 3,
};

enum class EDeadZoneType : uint8
{
	Axial                          = 0,
	Radial                         = 1,
	EDeadZoneType_MAX              = 2,
};

enum class EFOVScalingType : uint8
{
	Standard                       = 0,
	UE4_BackCompat                 = 1,
	EFOVScalingType_MAX            = 2,
};

enum class EInputAxisSwizzle : uint8
{
	YXZ                            = 0,
	ZYX                            = 1,
	XZY                            = 2,
	YZX                            = 3,
	ZXY                            = 4,
	EInputAxisSwizzle_MAX          = 5,
};

enum class ETriggerState : uint8
{
	None                           = 0,
	Ongoing                        = 1,
	Triggered                      = 2,
	ETriggerState_MAX              = 3,
};

enum class ETriggerEvent : uint8
{
	None                           = 0,
	Triggered                      = 1,
	Started                        = 2,
	Ongoing                        = 4,
	Canceled                       = 8,
	Completed                      = 16,
	ETriggerEvent_MAX              = 17,
};

enum class ETriggerType : uint8
{
	Explicit                       = 0,
	Implicit                       = 1,
	Blocker                        = 2,
	ETriggerType_MAX               = 3,
};

enum class ETriggerEventsSupported : uint8
{
	None                           = 0,
	Instant                        = 1,
	Uninterruptible                = 2,
	Ongoing                        = 4,
	All                            = 7,
	ETriggerEventsSupported_MAX    = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct EnhancedInput.InputActionValue
struct FInputActionValue
{
public:
	uint8                                        Pad_21BC[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EnhancedInput.MappingQueryIssue
struct FMappingQueryIssue
{
public:
	enum class EMappingQueryIssue                Issue;                                             // 0x0(0x1)(None)
	uint8                                        Pad_21DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputMappingContext*                  BlockingContext;                                   // 0x8(0x8)(ZeroConstructor)
	class UInputAction*                          BlockingAction;                                    // 0x10(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.PlayerMappableKeySlot
struct FPlayerMappableKeySlot
{
public:
	uint8                                        Pad_21DD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SlotNumber;                                        // 0x8(0x4)(None)
	uint8                                        Pad_21DE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct EnhancedInput.PlayerMappableKeyOptions
struct FPlayerMappableKeyOptions
{
public:
	class UObject*                               MetaData;                                          // 0x0(0x8)(None)
	class FName                                  Name;                                              // 0x8(0x8)(None)
	class FText                                  DisplayName;                                       // 0x10(0x18)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class FText                                  DisplayCategory;                                   // 0x28(0x18)(None)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct EnhancedInput.EnhancedActionKeyMapping
struct FEnhancedActionKeyMapping
{
public:
	struct FPlayerMappableKeyOptions             PlayerMappableOptions;                             // 0x0(0x40)(ZeroConstructor, AssetRegistrySearchable, Protected, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x40(0x10)(ZeroConstructor, AutoWeak, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x50(0x10)(ZeroConstructor, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UInputAction*                          Action;                                            // 0x60(0x8)(ZeroConstructor)
	struct FKey                                  Key;                                               // 0x68(0x18)(None)
	uint8                                        bShouldBeIgnored : 1;                              // Mask: 0x1, PropSize: 0x10x80(0x1)(None)
	uint8                                        BitPad_185 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EPlayerMappableKeySettingBehaviors SettingBehavior;                                   // 0x81(0x1)(None)
	uint8                                        Pad_21E0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerMappableKeySettings*            PlayerMappableKeySettings;                         // 0x88(0x8)(None)
	uint8                                        bIsPlayerMappable : 1;                             // Mask: 0x1, PropSize: 0x10x90(0x1)(None)
	uint8                                        Pad_21E1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EnhancedInput.BlueprintEnhancedInputActionBinding
struct FBlueprintEnhancedInputActionBinding
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(None)
	enum class ETriggerEvent                     TriggerEvent;                                      // 0x8(0x1)(None)
	uint8                                        Pad_21E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FunctionNameToBind;                                // 0xC(0x8)(None)
	uint8                                        Pad_21E3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct EnhancedInput.DefaultContextSetting
struct FDefaultContextSetting
{
public:
	TSoftObjectPtr<class UInputMappingContext>   InputMappingContext;                               // 0x0(0x30)(None)
	int32                                        Priority;                                          // 0x30(0x4)(None)
	uint8                                        Pad_21E5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct EnhancedInput.ModifyContextOptions
struct FModifyContextOptions
{
public:
	uint8                                        bIgnoreAllPressedKeysUntilRelease : 1;             // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bForceImmediately : 1;                             // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.InjectedInputArray
struct FInjectedInputArray
{
public:
	uint8                                        Pad_21E7[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct EnhancedInput.InputActionInstance
struct FInputActionInstance
{
public:
	class UInputAction*                          SourceAction;                                      // 0x0(0x8)(ZeroConstructor)
	uint8                                        Pad_21E8[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETriggerEvent                     TriggerEvent;                                      // 0x13(0x1)(None)
	float                                        LastTriggeredWorldTime;                            // 0x14(0x4)(None)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x18(0x10)(ZeroConstructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x28(0x10)(None)
	uint8                                        Pad_21E9[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ElapsedProcessedTime;                              // 0x58(0x4)(None)
	float                                        ElapsedTriggeredTime;                              // 0x5C(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct EnhancedInput.BlueprintInputDebugKeyDelegateBinding
struct FBlueprintInputDebugKeyDelegateBinding
{
public:
	struct FInputChord                           InputChord;                                        // 0x0(0x20)(None)
	enum class EInputEvent                       InputKeyEvent;                                     // 0x20(0x1)(None)
	uint8                                        Pad_21EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FunctionNameToBind;                                // 0x24(0x8)(None)
	bool                                         bExecuteWhenPaused;                                // 0x2C(0x1)(None)
	uint8                                        Pad_21EB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.InputComboStepData
struct FInputComboStepData
{
public:
	class UInputAction*                          ComboStepAction;                                   // 0x0(0x8)(None)
	uint8                                        ComboStepCompletionStates;                         // 0x8(0x1)(None)
	uint8                                        Pad_21EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeToPressKey;                                    // 0xC(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.InputCancelAction
struct FInputCancelAction
{
public:
	class UInputAction*                          CancelAction;                                      // 0x0(0x8)(None)
	uint8                                        CancellationStates;                                // 0x8(0x1)(None)
	uint8                                        Pad_21ED[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


