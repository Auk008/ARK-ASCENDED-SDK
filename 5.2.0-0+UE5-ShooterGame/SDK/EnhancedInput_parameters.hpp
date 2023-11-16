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

// 0x28 (0x28 - 0x0)
// Function EnhancedInput.EnhancedInputComponent.GetBoundActionValue
struct UEnhancedInputComponent_GetBoundActionValue_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(None)
	struct FInputActionValue                     ReturnValue;                                       // 0x8(0x20)(None)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext
struct UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Params
{
public:
	class UInputMappingContext*                  Context;                                           // 0x0(0x8)(None)
	bool                                         bForceImmediately;                                 // 0x8(0x1)(None)
	uint8                                        Pad_202E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType
struct UEnhancedInputLibrary_MakeInputActionValueOfType_Params
{
public:
	double                                       X;                                                 // 0x0(0x8)(None)
	double                                       Y;                                                 // 0x8(0x8)(None)
	double                                       Z;                                                 // 0x10(0x8)(None)
	enum class EInputActionValueType             ValueType;                                         // 0x18(0x1)(None)
	uint8                                        Pad_2032[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     ReturnValue;                                       // 0x20(0x20)(None)
};

// 0x58 (0x58 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValue
struct UEnhancedInputLibrary_MakeInputActionValue_Params
{
public:
	double                                       X;                                                 // 0x0(0x8)(None)
	double                                       Y;                                                 // 0x8(0x8)(None)
	double                                       Z;                                                 // 0x10(0x8)(None)
	struct FInputActionValue                     MatchValueType;                                    // 0x18(0x20)(None)
	struct FInputActionValue                     ReturnValue;                                       // 0x38(0x20)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.IsActionKeyMappingPlayerMappable
struct UEnhancedInputLibrary_IsActionKeyMappingPlayerMappable_Params
{
public:
	struct FEnhancedActionKeyMapping             ActionKeyMapping;                                  // 0x0(0x98)(None)
	bool                                         ReturnValue;                                       // 0x98(0x1)(None)
	uint8                                        Pad_2034[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.GetThirdPlayerMappableKeySlot
struct UEnhancedInputLibrary_GetThirdPlayerMappableKeySlot_Params
{
public:
	struct FPlayerMappableKeySlot                ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.GetSecondPlayerMappableKeySlot
struct UEnhancedInputLibrary_GetSecondPlayerMappableKeySlot_Params
{
public:
	struct FPlayerMappableKeySlot                ReturnValue;                                       // 0x0(0x10)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.GetPlayerMappableKeySettings
struct UEnhancedInputLibrary_GetPlayerMappableKeySettings_Params
{
public:
	struct FEnhancedActionKeyMapping             ActionKeyMapping;                                  // 0x0(0x98)(ZeroConstructor)
	class UPlayerMappableKeySettings*            ReturnValue;                                       // 0x98(0x8)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.GetMappingName
struct UEnhancedInputLibrary_GetMappingName_Params
{
public:
	struct FEnhancedActionKeyMapping             ActionKeyMapping;                                  // 0x0(0x98)(None)
	class FName                                  ReturnValue;                                       // 0x98(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.GetFourthPlayerMappableKeySlot
struct UEnhancedInputLibrary_GetFourthPlayerMappableKeySlot_Params
{
public:
	struct FPlayerMappableKeySlot                ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.GetFirstPlayerMappableKeySlot
struct UEnhancedInputLibrary_GetFirstPlayerMappableKeySlot_Params
{
public:
	struct FPlayerMappableKeySlot                ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.GetBoundActionValue
struct UEnhancedInputLibrary_GetBoundActionValue_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ZeroConstructor)
	class UInputAction*                          Action;                                            // 0x8(0x8)(None)
	struct FInputActionValue                     ReturnValue;                                       // 0x10(0x20)(None)
};

// 0x30 (0x30 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToString
struct UEnhancedInputLibrary_Conv_InputActionValueToString_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(None)
	class FString                                ReturnValue;                                       // 0x20(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool
struct UEnhancedInputLibrary_Conv_InputActionValueToBool_Params
{
public:
	struct FInputActionValue                     InValue;                                           // 0x0(0x20)(None)
	bool                                         ReturnValue;                                       // 0x20(0x1)(None)
	uint8                                        Pad_2042[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D
struct UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(None)
	struct FVector                               ReturnValue;                                       // 0x20(0x18)(None)
};

// 0x30 (0x30 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D
struct UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Params
{
public:
	struct FInputActionValue                     InValue;                                           // 0x0(0x20)(None)
	struct FVector2D                             ReturnValue;                                       // 0x20(0x10)(None)
};

// 0x28 (0x28 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D
struct UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Params
{
public:
	struct FInputActionValue                     InValue;                                           // 0x0(0x20)(None)
	double                                       ReturnValue;                                       // 0x20(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function EnhancedInput.EnhancedInputLibrary.BreakInputActionValue
struct UEnhancedInputLibrary_BreakInputActionValue_Params
{
public:
	struct FInputActionValue                     InActionValue;                                     // 0x0(0x20)(None)
	double                                       X;                                                 // 0x20(0x8)(None)
	double                                       Y;                                                 // 0x28(0x8)(None)
	double                                       Z;                                                 // 0x30(0x8)(None)
	enum class EInputActionValueType             Type;                                              // 0x38(0x1)(None)
	uint8                                        Pad_2046[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputPlatformData.GetContextRedirect
struct UEnhancedInputPlatformData_GetContextRedirect_Params
{
public:
	class UInputMappingContext*                  InContext;                                         // 0x0(0x8)(ZeroConstructor)
	class UInputMappingContext*                  ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x2 (0x2 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings
struct IEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Params
{
public:
	struct FModifyContextOptions                 Options;                                           // 0x0(0x1)(None)
	enum class EInputMappingRebuildType          RebuildType;                                       // 0x1(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappableConfig
struct IEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Params
{
public:
	class UPlayerMappableInputConfig*            Config;                                            // 0x0(0x8)(None)
	struct FModifyContextOptions                 Options;                                           // 0x8(0x1)(None)
	uint8                                        Pad_2059[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext
struct IEnhancedInputSubsystemInterface_RemoveMappingContext_Params
{
public:
	class UInputMappingContext*                  MappingContext;                                    // 0x0(0x8)(None)
	struct FModifyContextOptions                 Options;                                           // 0x8(0x1)(None)
	uint8                                        Pad_205F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeysForMapping
struct IEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeysForMapping_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x8)(None)
	struct FModifyContextOptions                 Options;                                           // 0x8(0x1)(None)
	uint8                                        Pad_2061[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0xC(0x4)(None)
};

// 0x1 (0x1 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeys
struct IEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Params
{
public:
	struct FModifyContextOptions                 Options;                                           // 0x0(0x1)(None)
};

// 0x50 (0x50 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet
struct IEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Params
{
public:
	TArray<class UInputMappingContext*>          PrioritizedActiveContexts;                         // 0x0(0x10)(ZeroConstructor)
	class UInputMappingContext*                  InputContext;                                      // 0x10(0x8)(ZeroConstructor)
	class UInputAction*                          Action;                                            // 0x18(0x8)(ZeroConstructor)
	struct FKey                                  Key;                                               // 0x20(0x18)(None)
	TArray<struct FMappingQueryIssue>            OutIssues;                                         // 0x38(0x10)(None)
	enum class EMappingQueryIssue                BlockingIssues;                                    // 0x48(0x1)(None)
	enum class EMappingQueryResult               ReturnValue;                                       // 0x49(0x1)(None)
	uint8                                        Pad_2065[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet
struct IEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Params
{
public:
	class UInputMappingContext*                  InputContext;                                      // 0x0(0x8)(ZeroConstructor)
	class UInputAction*                          Action;                                            // 0x8(0x8)(ZeroConstructor)
	struct FKey                                  Key;                                               // 0x10(0x18)(None)
	TArray<struct FMappingQueryIssue>            OutIssues;                                         // 0x28(0x10)(None)
	enum class EMappingQueryIssue                BlockingIssues;                                    // 0x38(0x1)(None)
	enum class EMappingQueryResult               ReturnValue;                                       // 0x39(0x1)(None)
	uint8                                        Pad_206A[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction
struct IEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(None)
	TArray<struct FKey>                          ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.K2_RemovePlayerMappedKeyInSlot
struct IEnhancedInputSubsystemInterface_K2_RemovePlayerMappedKeyInSlot_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x8)(None)
	struct FPlayerMappableKeySlot                KeySlot;                                           // 0x8(0x10)(None)
	struct FModifyContextOptions                 Options;                                           // 0x18(0x1)(None)
	uint8                                        Pad_20D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x1C(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.K2_GetPlayerMappedKeyInSlot
struct IEnhancedInputSubsystemInterface_K2_GetPlayerMappedKeyInSlot_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x8)(None)
	struct FPlayerMappableKeySlot                KeySlot;                                           // 0x8(0x10)(None)
	struct FKey                                  ReturnValue;                                       // 0x18(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.K2_AddPlayerMappedKeyInSlot
struct IEnhancedInputSubsystemInterface_K2_AddPlayerMappedKeyInSlot_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x8)(None)
	struct FKey                                  NewKey;                                            // 0x8(0x18)(None)
	struct FPlayerMappableKeySlot                KeySlot;                                           // 0x20(0x10)(None)
	struct FModifyContextOptions                 Options;                                           // 0x30(0x1)(None)
	uint8                                        Pad_211D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x34(0x4)(None)
};

// 0x40 (0x40 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForAction
struct IEnhancedInputSubsystemInterface_InjectInputVectorForAction_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(ZeroConstructor)
	struct FVector                               Value;                                             // 0x8(0x18)(None)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x20(0x10)(ZeroConstructor)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x30(0x10)(None)
};

// 0x48 (0x48 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForAction
struct IEnhancedInputSubsystemInterface_InjectInputForAction_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(ZeroConstructor)
	struct FInputActionValue                     RawValue;                                          // 0x8(0x20)(None)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x28(0x10)(ZeroConstructor)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x38(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext
struct IEnhancedInputSubsystemInterface_HasMappingContext_Params
{
public:
	class UInputMappingContext*                  MappingContext;                                    // 0x0(0x8)(None)
	int32                                        OutFoundPriority;                                  // 0x8(0x4)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
	uint8                                        Pad_2130[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappedKeys
struct IEnhancedInputSubsystemInterface_GetAllPlayerMappedKeys_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x8)(None)
	TArray<struct FKey>                          ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappableActionKeyMappings
struct IEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Params
{
public:
	TArray<struct FEnhancedActionKeyMapping>     ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappableConfig
struct IEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Params
{
public:
	class UPlayerMappableInputConfig*            Config;                                            // 0x0(0x8)(None)
	struct FModifyContextOptions                 Options;                                           // 0x8(0x1)(None)
	uint8                                        Pad_2145[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext
struct IEnhancedInputSubsystemInterface_AddMappingContext_Params
{
public:
	class UInputMappingContext*                  MappingContext;                                    // 0x0(0x8)(None)
	int32                                        Priority;                                          // 0x8(0x4)(None)
	struct FModifyContextOptions                 Options;                                           // 0xC(0x1)(None)
	uint8                                        Pad_2147[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.EnhancedInputWorldSubsystem.RemoveActorInputComponent
struct UEnhancedInputWorldSubsystem_RemoveActorInputComponent_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_2167[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function EnhancedInput.EnhancedInputWorldSubsystem.AddActorInputComponent
struct UEnhancedInputWorldSubsystem_AddActorInputComponent_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function EnhancedInput.InputMappingContext.UnmapKey
struct UInputMappingContext_UnmapKey_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(None)
	struct FKey                                  Key;                                               // 0x8(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function EnhancedInput.InputMappingContext.UnmapAllKeysFromAction
struct UInputMappingContext_UnmapAllKeysFromAction_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function EnhancedInput.InputMappingContext.UnmapAction
struct UInputMappingContext_UnmapAction_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(None)
};

// 0xB8 (0xB8 - 0x0)
// Function EnhancedInput.InputMappingContext.MapKey
struct UInputMappingContext_MapKey_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(ZeroConstructor)
	struct FKey                                  ToKey;                                             // 0x8(0x18)(None)
	struct FEnhancedActionKeyMapping             ReturnValue;                                       // 0x20(0x98)(None)
};

// 0x50 (0x50 - 0x0)
// Function EnhancedInput.InputModifier.ModifyRaw
struct UInputModifier_ModifyRaw_Params
{
public:
	class UEnhancedPlayerInput*                  PlayerInput;                                       // 0x0(0x8)(None)
	struct FInputActionValue                     CurrentValue;                                      // 0x8(0x20)(None)
	float                                        DeltaTime;                                         // 0x28(0x4)(None)
	uint8                                        Pad_218C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     ReturnValue;                                       // 0x30(0x20)(None)
};

// 0x50 (0x50 - 0x0)
// Function EnhancedInput.InputModifier.GetVisualizationColor
struct UInputModifier_GetVisualizationColor_Params
{
public:
	struct FInputActionValue                     SampleValue;                                       // 0x0(0x20)(None)
	struct FInputActionValue                     FinalValue;                                        // 0x20(0x20)(None)
	struct FLinearColor                          ReturnValue;                                       // 0x40(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function EnhancedInput.InputTrigger.UpdateState
struct UInputTrigger_UpdateState_Params
{
public:
	class UEnhancedPlayerInput*                  PlayerInput;                                       // 0x0(0x8)(None)
	struct FInputActionValue                     ModifiedValue;                                     // 0x8(0x20)(None)
	float                                        DeltaTime;                                         // 0x28(0x4)(None)
	enum class ETriggerState                     ReturnValue;                                       // 0x2C(0x1)(None)
	uint8                                        Pad_2194[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function EnhancedInput.InputTrigger.IsActuated
struct UInputTrigger_IsActuated_Params
{
public:
	struct FInputActionValue                     ForValue;                                          // 0x0(0x20)(None)
	bool                                         ReturnValue;                                       // 0x20(0x1)(None)
	uint8                                        Pad_2196[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function EnhancedInput.InputTrigger.GetTriggerType
struct UInputTrigger_GetTriggerType_Params
{
public:
	enum class ETriggerType                      ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.IsDeprecated
struct UPlayerMappableInputConfig_IsDeprecated_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.GetPlayerMappableKeys
struct UPlayerMappableInputConfig_GetPlayerMappableKeys_Params
{
public:
	TArray<struct FEnhancedActionKeyMapping>     ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x8 (0x8 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.GetMetadata
struct UPlayerMappableInputConfig_GetMetadata_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.GetMappingContexts
struct UPlayerMappableInputConfig_GetMappingContexts_Params
{
public:
	TMap<class UInputMappingContext*, int32>     ReturnValue;                                       // 0x0(0x50)(None)
};

// 0xA0 (0xA0 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.GetMappingByName
struct UPlayerMappableInputConfig_GetMappingByName_Params
{
public:
	class FName                                  MappingName;                                       // 0x0(0x8)(None)
	struct FEnhancedActionKeyMapping             ReturnValue;                                       // 0x8(0x98)(None)
};

// 0x18 (0x18 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.GetKeysBoundToAction
struct UPlayerMappableInputConfig_GetKeysBoundToAction_Params
{
public:
	class UInputAction*                          InAction;                                          // 0x0(0x8)(ZeroConstructor)
	TArray<struct FEnhancedActionKeyMapping>     ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.GetDisplayName
struct UPlayerMappableInputConfig_GetDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function EnhancedInput.PlayerMappableInputConfig.GetConfigName
struct UPlayerMappableInputConfig_GetConfigName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(None)
};

}
}


