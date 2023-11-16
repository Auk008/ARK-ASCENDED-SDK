#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.EnhancedInputActionDelegateBinding
class UEnhancedInputActionDelegateBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintEnhancedInputActionBinding> InputActionDelegateBindings;                       // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UEnhancedInputActionDelegateBinding* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.EnhancedInputActionValueBinding
class UEnhancedInputActionValueBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintEnhancedInputActionBinding> InputActionValueBindings;                          // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UEnhancedInputActionValueBinding* GetDefaultObj();

};

// 0x38 (0x178 - 0x140)
// Class EnhancedInput.EnhancedInputComponent
class UEnhancedInputComponent : public UInputComponent
{
public:
	uint8                                        Pad_202C[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnhancedInputComponent* GetDefaultObj();

	void GetBoundActionValue(class UInputAction* Action, const struct FInputActionValue& ReturnValue);
};

// 0x68 (0xA0 - 0x38)
// Class EnhancedInput.EnhancedInputDeveloperSettings
class UEnhancedInputDeveloperSettings : public UDeveloperSettingsBackedByCVars
{
public:
	TArray<struct FDefaultContextSetting>        DefaultMappingContexts;                            // 0x38(0x10)(ZeroConstructor)
	TArray<struct FDefaultContextSetting>        DefaultWorldSubsystemMappingContexts;              // 0x48(0x10)(ZeroConstructor)
	TSoftClassPtr<class UEnhancedPlayerInput>    DefaultWorldInputClass;                            // 0x58(0x30)(ZeroConstructor)
	struct FPerPlatformSettings                  PlatformSettings;                                  // 0x88(0x10)(None)
	uint8                                        bEnableDefaultMappingContexts : 1;                 // Mask: 0x1, PropSize: 0x10x98(0x1)(None)
	uint8                                        bShouldOnlyTriggerLastActionInChord : 1;           // Mask: 0x2, PropSize: 0x10x98(0x1)(None)
	uint8                                        bEnableWorldSubsystem : 1;                         // Mask: 0x4, PropSize: 0x10x98(0x1)(None)
	uint8                                        bShouldLogAllWorldSubsystemInputs : 1;             // Mask: 0x8, PropSize: 0x10x98(0x1)(None)
	uint8                                        Pad_202D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnhancedInputDeveloperSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.EnhancedInputLibrary
class UEnhancedInputLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UEnhancedInputLibrary* GetDefaultObj();

	void RequestRebuildControlMappingsUsingContext(class UInputMappingContext* Context, bool bForceImmediately);
	void MakeInputActionValueOfType(double X, double Y, double Z, enum class EInputActionValueType ValueType, const struct FInputActionValue& ReturnValue);
	void MakeInputActionValue(double X, double Y, double Z, const struct FInputActionValue& MatchValueType, const struct FInputActionValue& ReturnValue);
	void IsActionKeyMappingPlayerMappable(const struct FEnhancedActionKeyMapping& ActionKeyMapping, bool ReturnValue);
	void GetThirdPlayerMappableKeySlot(const struct FPlayerMappableKeySlot& ReturnValue);
	void GetSecondPlayerMappableKeySlot(const struct FPlayerMappableKeySlot& ReturnValue);
	void GetPlayerMappableKeySettings(const struct FEnhancedActionKeyMapping& ActionKeyMapping, class UPlayerMappableKeySettings* ReturnValue);
	void GetMappingName(const struct FEnhancedActionKeyMapping& ActionKeyMapping, class FName ReturnValue);
	void GetFourthPlayerMappableKeySlot(const struct FPlayerMappableKeySlot& ReturnValue);
	void GetFirstPlayerMappableKeySlot(const struct FPlayerMappableKeySlot& ReturnValue);
	void GetBoundActionValue(class AActor* Actor, class UInputAction* Action, const struct FInputActionValue& ReturnValue);
	void Conv_InputActionValueToString(const struct FInputActionValue& ActionValue, const class FString& ReturnValue);
	void Conv_InputActionValueToBool(const struct FInputActionValue& InValue, bool ReturnValue);
	void Conv_InputActionValueToAxis3D(const struct FInputActionValue& ActionValue, const struct FVector& ReturnValue);
	void Conv_InputActionValueToAxis2D(const struct FInputActionValue& InValue, const struct FVector2D& ReturnValue);
	void Conv_InputActionValueToAxis1D(const struct FInputActionValue& InValue, double ReturnValue);
	void BreakInputActionValue(const struct FInputActionValue& InActionValue, double X, double Y, double Z, enum class EInputActionValueType Type);
};

// 0x50 (0x78 - 0x28)
// Class EnhancedInput.EnhancedInputPlatformData
class UEnhancedInputPlatformData : public UObject
{
public:
	TMap<class UInputMappingContext*, class UInputMappingContext*> MappingContextRedirects;                           // 0x28(0x50)(None)

	static class UClass* StaticClass();
	static class UEnhancedInputPlatformData* GetDefaultObj();

	void GetContextRedirect(class UInputMappingContext* InContext, class UInputMappingContext* ReturnValue);
};

// 0x28 (0x68 - 0x40)
// Class EnhancedInput.EnhancedInputPlatformSettings
class UEnhancedInputPlatformSettings : public UPlatformSettings
{
public:
	TArray<TSoftClassPtr<class UEnhancedInputPlatformData>> InputData;                                         // 0x40(0x10)(ZeroConstructor)
	TArray<class UClass*>                        InputDataClasses;                                  // 0x50(0x10)(None)
	bool                                         bShouldLogMappingContextRedirects;                 // 0x60(0x1)(None)
	uint8                                        Pad_204C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnhancedInputPlatformSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.EnhancedInputSubsystemInterface
class IEnhancedInputSubsystemInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEnhancedInputSubsystemInterface* GetDefaultObj();

	void RequestRebuildControlMappings(const struct FModifyContextOptions& Options, enum class EInputMappingRebuildType RebuildType);
	void RemovePlayerMappableConfig(class UPlayerMappableInputConfig* Config, const struct FModifyContextOptions& Options);
	void RemoveMappingContext(class UInputMappingContext* MappingContext, const struct FModifyContextOptions& Options);
	void RemoveAllPlayerMappedKeysForMapping(class FName MappingName, const struct FModifyContextOptions& Options, int32 ReturnValue);
	void RemoveAllPlayerMappedKeys(const struct FModifyContextOptions& Options);
	void QueryMapKeyInContextSet(const TArray<class UInputMappingContext*>& PrioritizedActiveContexts, class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, const TArray<struct FMappingQueryIssue>& OutIssues, enum class EMappingQueryIssue BlockingIssues, enum class EMappingQueryResult ReturnValue);
	void QueryMapKeyInActiveContextSet(class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, const TArray<struct FMappingQueryIssue>& OutIssues, enum class EMappingQueryIssue BlockingIssues, enum class EMappingQueryResult ReturnValue);
	void QueryKeysMappedToAction(class UInputAction* Action, const TArray<struct FKey>& ReturnValue);
	void K2_RemovePlayerMappedKeyInSlot(class FName MappingName, const struct FPlayerMappableKeySlot& KeySlot, const struct FModifyContextOptions& Options, int32 ReturnValue);
	void K2_GetPlayerMappedKeyInSlot(class FName MappingName, const struct FPlayerMappableKeySlot& KeySlot, const struct FKey& ReturnValue);
	void K2_AddPlayerMappedKeyInSlot(class FName MappingName, const struct FKey& NewKey, const struct FPlayerMappableKeySlot& KeySlot, const struct FModifyContextOptions& Options, int32 ReturnValue);
	void InjectInputVectorForAction(class UInputAction* Action, const struct FVector& Value, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers);
	void InjectInputForAction(class UInputAction* Action, const struct FInputActionValue& RawValue, const TArray<class UInputModifier*>& Modifiers, const TArray<class UInputTrigger*>& Triggers);
	void HasMappingContext(class UInputMappingContext* MappingContext, int32 OutFoundPriority, bool ReturnValue);
	void GetAllPlayerMappedKeys(class FName MappingName, const TArray<struct FKey>& ReturnValue);
	void GetAllPlayerMappableActionKeyMappings(const TArray<struct FEnhancedActionKeyMapping>& ReturnValue);
	void ClearAllMappings();
	void AddPlayerMappableConfig(class UPlayerMappableInputConfig* Config, const struct FModifyContextOptions& Options);
	void AddMappingContext(class UInputMappingContext* MappingContext, int32 Priority, const struct FModifyContextOptions& Options);
};

// 0x1B0 (0x1E0 - 0x30)
// Class EnhancedInput.EnhancedInputLocalPlayerSubsystem
class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem
{
public:
	uint8                                        Pad_2164[0x1A0];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ControlMappingsRebuiltDelegate;                    // 0x1D0(0x10)(None)

	static class UClass* StaticClass();
	static class UEnhancedInputLocalPlayerSubsystem* GetDefaultObj();

};

// 0x1C8 (0x1F8 - 0x30)
// Class EnhancedInput.EnhancedInputWorldSubsystem
class UEnhancedInputWorldSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_2168[0x1A0];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnhancedPlayerInput*                  PlayerInput;                                       // 0x1D0(0x8)(ZeroConstructor)
	uint8                                        Pad_216A[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TWeakObjectPtr<class UInputComponent>> CurrentInputStack;                                 // 0x1E8(0x10)(None)

	static class UClass* StaticClass();
	static class UEnhancedInputWorldSubsystem* GetDefaultObj();

	void RemoveActorInputComponent(class AActor* Actor, bool ReturnValue);
	void AddActorInputComponent(class AActor* Actor);
};

// 0x2A8 (0x790 - 0x4E8)
// Class EnhancedInput.EnhancedPlayerInput
class UEnhancedPlayerInput : public UPlayerInput
{
public:
	TMap<class UInputMappingContext*, int32>     AppliedInputContexts;                              // 0x4E8(0x50)(ZeroConstructor)
	TArray<struct FEnhancedActionKeyMapping>     EnhancedActionMappings;                            // 0x538(0x10)(ZeroConstructor)
	uint8                                        Pad_216D[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UInputAction*, struct FInputActionInstance> ActionInstanceData;                                // 0x598(0x50)(ZeroConstructor)
	uint8                                        Pad_216E[0xA0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FKey, struct FVector>            KeysPressedThisTick;                               // 0x688(0x50)(None)
	TMap<class UInputAction*, struct FInjectedInputArray> InputsInjectedThisTick;                            // 0x6D8(0x50)(ZeroConstructor)
	TSet<class UInputAction*>                    LastInjectedActions;                               // 0x728(0x50)(None)
	uint8                                        Pad_216F[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnhancedPlayerInput* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class EnhancedInput.InputAction
class UInputAction : public UDataAsset
{
public:
	class FText                                  ActionDescription;                                 // 0x30(0x18)(None)
	bool                                         bConsumeInput;                                     // 0x48(0x1)(None)
	bool                                         bTriggerWhenPaused;                                // 0x49(0x1)(None)
	bool                                         bReserveAllMappings;                               // 0x4A(0x1)(None)
	enum class EInputActionValueType             ValueType;                                         // 0x4B(0x1)(None)
	uint8                                        Pad_217F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x50(0x10)(ZeroConstructor)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x60(0x10)(ZeroConstructor)
	class UPlayerMappableKeySettings*            PlayerMappableKeySettings;                         // 0x70(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UInputAction* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.InputDebugKeyDelegateBinding
class UInputDebugKeyDelegateBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintInputDebugKeyDelegateBinding> InputDebugKeyDelegateBindings;                     // 0x28(0x10)(None)

	static class UClass* StaticClass();
	static class UInputDebugKeyDelegateBinding* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class EnhancedInput.InputMappingContext
class UInputMappingContext : public UDataAsset
{
public:
	TArray<struct FEnhancedActionKeyMapping>     Mappings;                                          // 0x30(0x10)(ZeroConstructor)
	class FText                                  ContextDescription;                                // 0x40(0x18)(None)

	static class UClass* StaticClass();
	static class UInputMappingContext* GetDefaultObj();

	void UnmapKey(class UInputAction* Action, const struct FKey& Key);
	void UnmapAllKeysFromAction(class UInputAction* Action);
	void UnmapAll();
	void UnmapAction(class UInputAction* Action);
	void MapKey(class UInputAction* Action, const struct FKey& ToKey, const struct FEnhancedActionKeyMapping& ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.InputModifier
class UInputModifier : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInputModifier* GetDefaultObj();

	void ModifyRaw(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& CurrentValue, float DeltaTime, const struct FInputActionValue& ReturnValue);
	void GetVisualizationColor(const struct FInputActionValue& SampleValue, const struct FInputActionValue& FinalValue, const struct FLinearColor& ReturnValue);
};

// 0x10 (0x38 - 0x28)
// Class EnhancedInput.InputModifierDeadZone
class UInputModifierDeadZone : public UInputModifier
{
public:
	float                                        LowerThreshold;                                    // 0x28(0x4)(None)
	float                                        UpperThreshold;                                    // 0x2C(0x4)(None)
	enum class EDeadZoneType                     Type;                                              // 0x30(0x1)(None)
	uint8                                        Pad_218E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputModifierDeadZone* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EnhancedInput.InputModifierScalar
class UInputModifierScalar : public UInputModifier
{
public:
	struct FVector                               Scalar;                                            // 0x28(0x18)(None)

	static class UClass* StaticClass();
	static class UInputModifierScalar* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.InputModifierScaleByDeltaTime
class UInputModifierScaleByDeltaTime : public UInputModifier
{
public:

	static class UClass* StaticClass();
	static class UInputModifierScaleByDeltaTime* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class EnhancedInput.InputModifierNegate
class UInputModifierNegate : public UInputModifier
{
public:
	bool                                         bX;                                                // 0x28(0x1)(None)
	bool                                         bY;                                                // 0x29(0x1)(None)
	bool                                         bZ;                                                // 0x2A(0x1)(None)
	uint8                                        Pad_218F[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputModifierNegate* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class EnhancedInput.InputModifierSmooth
class UInputModifierSmooth : public UInputModifier
{
public:
	uint8                                        Pad_2190[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputModifierSmooth* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EnhancedInput.InputModifierResponseCurveExponential
class UInputModifierResponseCurveExponential : public UInputModifier
{
public:
	struct FVector                               CurveExponent;                                     // 0x28(0x18)(None)

	static class UClass* StaticClass();
	static class UInputModifierResponseCurveExponential* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EnhancedInput.InputModifierResponseCurveUser
class UInputModifierResponseCurveUser : public UInputModifier
{
public:
	class UCurveFloat*                           ResponseX;                                         // 0x28(0x8)(ZeroConstructor)
	class UCurveFloat*                           ResponseY;                                         // 0x30(0x8)(ZeroConstructor)
	class UCurveFloat*                           ResponseZ;                                         // 0x38(0x8)(None)

	static class UClass* StaticClass();
	static class UInputModifierResponseCurveUser* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class EnhancedInput.InputModifierFOVScaling
class UInputModifierFOVScaling : public UInputModifier
{
public:
	float                                        FOVScale;                                          // 0x28(0x4)(None)
	enum class EFOVScalingType                   FOVScalingType;                                    // 0x2C(0x1)(None)
	uint8                                        Pad_2191[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputModifierFOVScaling* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class EnhancedInput.InputModifierToWorldSpace
class UInputModifierToWorldSpace : public UInputModifier
{
public:

	static class UClass* StaticClass();
	static class UInputModifierToWorldSpace* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class EnhancedInput.InputModifierSwizzleAxis
class UInputModifierSwizzleAxis : public UInputModifier
{
public:
	enum class EInputAxisSwizzle                 Order;                                             // 0x28(0x1)(None)
	uint8                                        Pad_2192[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputModifierSwizzleAxis* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class EnhancedInput.InputTrigger
class UInputTrigger : public UObject
{
public:
	float                                        ActuationThreshold;                                // 0x28(0x4)(None)
	bool                                         bShouldAlwaysTick;                                 // 0x2C(0x1)(None)
	uint8                                        Pad_2198[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputActionValue                     LastValue;                                         // 0x30(0x20)(None)

	static class UClass* StaticClass();
	static class UInputTrigger* GetDefaultObj();

	void UpdateState(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& ModifiedValue, float DeltaTime, enum class ETriggerState ReturnValue);
	void IsActuated(const struct FInputActionValue& ForValue, bool ReturnValue);
	void GetTriggerType(enum class ETriggerType ReturnValue);
};

// 0x8 (0x58 - 0x50)
// Class EnhancedInput.InputTriggerTimedBase
class UInputTriggerTimedBase : public UInputTrigger
{
public:
	float                                        HeldDuration;                                      // 0x50(0x4)(None)
	bool                                         bAffectedByTimeDilation;                           // 0x54(0x1)(None)
	uint8                                        Pad_219A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputTriggerTimedBase* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class EnhancedInput.InputTriggerDown
class UInputTriggerDown : public UInputTrigger
{
public:

	static class UClass* StaticClass();
	static class UInputTriggerDown* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class EnhancedInput.InputTriggerPressed
class UInputTriggerPressed : public UInputTrigger
{
public:

	static class UClass* StaticClass();
	static class UInputTriggerPressed* GetDefaultObj();

};

// 0x0 (0x50 - 0x50)
// Class EnhancedInput.InputTriggerReleased
class UInputTriggerReleased : public UInputTrigger
{
public:

	static class UClass* StaticClass();
	static class UInputTriggerReleased* GetDefaultObj();

};

// 0x10 (0x68 - 0x58)
// Class EnhancedInput.InputTriggerHold
class UInputTriggerHold : public UInputTriggerTimedBase
{
public:
	uint8                                        Pad_219C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HoldTimeThreshold;                                 // 0x5C(0x4)(None)
	bool                                         bIsOneShot;                                        // 0x60(0x1)(None)
	uint8                                        Pad_219D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputTriggerHold* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class EnhancedInput.InputTriggerHoldAndRelease
class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase
{
public:
	float                                        HoldTimeThreshold;                                 // 0x58(0x4)(None)
	uint8                                        Pad_219F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputTriggerHoldAndRelease* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class EnhancedInput.InputTriggerTap
class UInputTriggerTap : public UInputTriggerTimedBase
{
public:
	float                                        TapReleaseTimeThreshold;                           // 0x58(0x4)(None)
	uint8                                        Pad_21A0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInputTriggerTap* GetDefaultObj();

};

// 0x10 (0x68 - 0x58)
// Class EnhancedInput.InputTriggerPulse
class UInputTriggerPulse : public UInputTriggerTimedBase
{
public:
	uint8                                        Pad_21A4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bTriggerOnStart;                                   // 0x5C(0x1)(None)
	uint8                                        Pad_21A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Interval;                                          // 0x60(0x4)(None)
	int32                                        TriggerLimit;                                      // 0x64(0x4)(None)

	static class UClass* StaticClass();
	static class UInputTriggerPulse* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class EnhancedInput.InputTriggerChordAction
class UInputTriggerChordAction : public UInputTrigger
{
public:
	class UInputAction*                          ChordAction;                                       // 0x50(0x8)(None)

	static class UClass* StaticClass();
	static class UInputTriggerChordAction* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class EnhancedInput.InputTriggerChordBlocker
class UInputTriggerChordBlocker : public UInputTriggerChordAction
{
public:

	static class UClass* StaticClass();
	static class UInputTriggerChordBlocker* GetDefaultObj();

};

// 0x28 (0x78 - 0x50)
// Class EnhancedInput.InputTriggerCombo
class UInputTriggerCombo : public UInputTrigger
{
public:
	int32                                        CurrentComboStepIndex;                             // 0x50(0x4)(None)
	float                                        CurrentTimeBetweenComboSteps;                      // 0x54(0x4)(None)
	TArray<struct FInputComboStepData>           ComboActions;                                      // 0x58(0x10)(ZeroConstructor)
	TArray<struct FInputCancelAction>            InputCancelActions;                                // 0x68(0x10)(None)

	static class UClass* StaticClass();
	static class UInputTriggerCombo* GetDefaultObj();

};

// 0x80 (0xB0 - 0x30)
// Class EnhancedInput.PlayerMappableInputConfig
class UPlayerMappableInputConfig : public UPrimaryDataAsset
{
public:
	class FName                                  ConfigName;                                        // 0x30(0x8)(None)
	class FText                                  ConfigDisplayName;                                 // 0x38(0x18)(None)
	bool                                         bIsDeprecated;                                     // 0x50(0x1)(None)
	uint8                                        Pad_21B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MetaData;                                          // 0x58(0x8)(ZeroConstructor)
	TMap<class UInputMappingContext*, int32>     Contexts;                                          // 0x60(0x50)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UPlayerMappableInputConfig* GetDefaultObj();

	void ResetToDefault();
	void IsDeprecated(bool ReturnValue);
	void GetPlayerMappableKeys(const TArray<struct FEnhancedActionKeyMapping>& ReturnValue);
	void GetMetadata(class UObject* ReturnValue);
	void GetMappingContexts(TMap<class UInputMappingContext*, int32> ReturnValue);
	void GetMappingByName(class FName MappingName, const struct FEnhancedActionKeyMapping& ReturnValue);
	void GetKeysBoundToAction(class UInputAction* InAction, const TArray<struct FEnhancedActionKeyMapping>& ReturnValue);
	void GetDisplayName(class FText ReturnValue);
	void GetConfigName(class FName ReturnValue);
};

// 0x40 (0x68 - 0x28)
// Class EnhancedInput.PlayerMappableKeySettings
class UPlayerMappableKeySettings : public UObject
{
public:
	class UObject*                               MetaData;                                          // 0x28(0x8)(None)
	class FName                                  Name;                                              // 0x30(0x8)(None)
	class FText                                  DisplayName;                                       // 0x38(0x18)(None)
	class FText                                  DisplayCategory;                                   // 0x50(0x18)(None)

	static class UClass* StaticClass();
	static class UPlayerMappableKeySettings* GetDefaultObj();

};

}


