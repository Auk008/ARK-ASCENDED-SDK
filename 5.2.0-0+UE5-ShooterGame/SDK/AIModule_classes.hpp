#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// Class AIModule.BTNode
class UBTNode : public UObject
{
public:
	uint8                                        Pad_2728[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NodeName;                                          // 0x30(0x10)(None)
	class UBehaviorTree*                         TreeAsset;                                         // 0x40(0x8)(ZeroConstructor)
	class UBTCompositeNode*                      ParentNode;                                        // 0x48(0x8)(None)
	uint8                                        Pad_272A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTNode* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class AIModule.BTAuxiliaryNode
class UBTAuxiliaryNode : public UBTNode
{
public:
	uint8                                        Pad_272D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTAuxiliaryNode* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class AIModule.BTService
class UBTService : public UBTAuxiliaryNode
{
public:
	float                                        Interval;                                          // 0x60(0x4)(None)
	float                                        RandomDeviation;                                   // 0x64(0x4)(None)
	uint8                                        bCallTickOnSearchStart : 1;                        // Mask: 0x1, PropSize: 0x10x68(0x1)(None)
	uint8                                        bRestartTimerOnEachActivation : 1;                 // Mask: 0x2, PropSize: 0x10x68(0x1)(None)
	uint8                                        Pad_272E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTService* GetDefaultObj();

};

// 0x28 (0x98 - 0x70)
// Class AIModule.BTService_BlackboardBase
class UBTService_BlackboardBase : public UBTService
{
public:
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0x70(0x28)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBTService_BlackboardBase* GetDefaultObj();

};

// 0x18 (0x70 - 0x58)
// Class AIModule.BTTaskNode
class UBTTaskNode : public UBTNode
{
public:
	TArray<class UBTService*>                    Services;                                          // 0x58(0x10)(ZeroConstructor)
	uint8                                        bIgnoreRestartSelf : 1;                            // Mask: 0x1, PropSize: 0x10x68(0x1)(None)
	uint8                                        Pad_272F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTTaskNode* GetDefaultObj();

};

// 0x28 (0x98 - 0x70)
// Class AIModule.BTTask_BlackboardBase
class UBTTask_BlackboardBase : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0x70(0x28)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBTTask_BlackboardBase* GetDefaultObj();

};

// 0x38 (0xD0 - 0x98)
// Class AIModule.BTTask_RotateToFaceBBEntry
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
	float                                        Precision;                                         // 0x98(0x4)(None)
	uint8                                        Pad_2732[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                PrecisionKey;                                      // 0xA0(0x28)(ZeroConstructor)
	uint8                                        bForceUpdatePrecision : 1;                         // Mask: 0x1, PropSize: 0x10xC8(0x1)(None)
	uint8                                        bZeroPrecisionSucceedsInstantly : 1;               // Mask: 0x2, PropSize: 0x10xC8(0x1)(None)
	uint8                                        bIgnorePitch : 1;                                  // Mask: 0x4, PropSize: 0x10xC8(0x1)(None)
	uint8                                        Pad_2733[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTTask_RotateToFaceBBEntry* GetDefaultObj();

};

// 0x90 (0x5F0 - 0x560)
// Class AIModule.AIController
class AAIController : public APrimalController
{
public:
	uint8                                        Pad_2761[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bStartAILogicOnPossess : 1;                        // Mask: 0x1, PropSize: 0x10x598(0x1)(None)
	uint8                                        bStopAILogicOnUnposses : 1;                        // Mask: 0x2, PropSize: 0x10x598(0x1)(None)
	uint8                                        bLOSflag : 1;                                      // Mask: 0x4, PropSize: 0x10x598(0x1)(None)
	uint8                                        bSkipExtraLOSChecks : 1;                           // Mask: 0x8, PropSize: 0x10x598(0x1)(None)
	uint8                                        bAllowStrafe : 1;                                  // Mask: 0x10, PropSize: 0x10x598(0x1)(None)
	uint8                                        bWantsPlayerState : 1;                             // Mask: 0x20, PropSize: 0x10x598(0x1)(None)
	uint8                                        bLastRequestedMoveToLocationWasPlayerCommand : 1;  // Mask: 0x40, PropSize: 0x10x598(0x1)(None)
	uint8                                        bSetControlRotationFromPawnOrientation : 1;        // Mask: 0x80, PropSize: 0x10x598(0x1)(None)
	uint8                                        bExecutingRotateToFace : 1;                        // Mask: 0x1, PropSize: 0x10x599(0x1)(None)
	uint8                                        BitPad_1DE : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2762[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPathFollowingComponent*               PathFollowingComponent;                            // 0x5A0(0x8)(ZeroConstructor)
	class UBrainComponent*                       BrainComponent;                                    // 0x5A8(0x8)(ZeroConstructor)
	class UAIPerceptionComponent*                PerceptionComponent;                               // 0x5B0(0x8)(ZeroConstructor)
	class UPawnActionsComponent*                 ActionsComp;                                       // 0x5B8(0x8)(ZeroConstructor)
	class UBlackboardComponent*                  Blackboard;                                        // 0x5C0(0x8)(ZeroConstructor)
	class UGameplayTasksComponent*               CachedGameplayTasksComponent;                      // 0x5C8(0x8)(ZeroConstructor)
	class UClass*                                DefaultNavigationFilterClass;                      // 0x5D0(0x8)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            ReceiveMoveCompleted;                              // 0x5D8(0x10)(ZeroConstructor)
	uint8                                        Pad_2764[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAIController* GetDefaultObj();

	void UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent* BlackboardComponent, bool ReturnValue);
	void UnclaimTaskResource(class UClass* ResourceClass);
	void SetPathFollowingComponent(class UPathFollowingComponent* NewPFComponent);
	void SetMoveBlockDetection(bool bEnable);
	void RunBehaviorTree(class UBehaviorTree* BTAsset, bool ReturnValue);
	void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
	void OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased);
	void MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath, bool WasPlayerCommand, enum class EPathFollowingRequestResult ReturnValue);
	void MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath, enum class EPathFollowingRequestResult ReturnValue);
	void K2_SetFocus(class AActor* NewFocus);
	void K2_SetFocalPoint(const struct FVector& FP);
	void K2_ClearFocus();
	void HasPartialPath(bool ReturnValue);
	void GetPathFollowingComponent(class UPathFollowingComponent* ReturnValue);
	void GetMoveStatus(enum class EPathFollowingStatus ReturnValue);
	void GetImmediateMoveDestination(const struct FVector& ReturnValue);
	void GetFocusActor(class AActor* ReturnValue);
	void GetFocalPointOnActor(class AActor* Actor, const struct FVector& ReturnValue);
	void GetFocalPoint(const struct FVector& ReturnValue);
	void GetDeprecatedActionsComponent(class UPawnActionsComponent* ReturnValue);
	void GetAIPerceptionComponent(class UAIPerceptionComponent* ReturnValue);
	void ClaimTaskResource(class UClass* ResourceClass);
};

// 0x228 (0x2E0 - 0xB8)
// Class AIModule.PathFollowingComponent
class UPathFollowingComponent : public UActorComponent
{
public:
	uint8                                        Pad_2771[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UNavMovementComponent*                 MovementComp;                                      // 0xF0(0x8)(ZeroConstructor)
	uint8                                        Pad_2772[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANavigationData*                       MyNavData;                                         // 0x100(0x8)(ZeroConstructor)
	uint8                                        Pad_2773[0x1D8];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPathFollowingComponent* GetDefaultObj();

	void OnNavDataRegistered(class ANavigationData* NavData);
	void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void GetPathDestination(const struct FVector& ReturnValue);
	void GetPathActionType(enum class EPathFollowingAction ReturnValue);
};

// 0x40 (0x68 - 0x28)
// Class AIModule.AIAsyncTaskBlueprintProxy
class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x28(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x38(0x10)(None)
	uint8                                        Pad_277C[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIAsyncTaskBlueprintProxy* GetDefaultObj();

	void OnMoveCompleted(const struct FAIRequestID& RequestID, enum class EPathFollowingResult MovementResult);
};

// 0x0 (0x28 - 0x28)
// Class AIModule.AIResourceInterface
class IAIResourceInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAIResourceInterface* GetDefaultObj();

};

// 0x0 (0x108 - 0x108)
// Class AIModule.AISenseBlueprintListener
class UAISenseBlueprintListener : public UUserDefinedStruct
{
public:

	static class UClass* StaticClass();
	static class UAISenseBlueprintListener* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class AIModule.AISenseConfig
class UAISenseConfig : public UObject
{
public:
	struct FColor                                DebugColor;                                        // 0x28(0x4)(None)
	float                                        MaxAge;                                            // 0x2C(0x4)(None)
	uint8                                        bStartsEnabled : 1;                                // Mask: 0x1, PropSize: 0x10x30(0x1)(None)
	uint8                                        Pad_277F[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAISenseConfig* GetDefaultObj();

};

// 0x8 (0x50 - 0x48)
// Class AIModule.AISenseConfig_Blueprint
class UAISenseConfig_Blueprint : public UAISenseConfig
{
public:
	class UClass*                                Implementation;                                    // 0x48(0x8)(None)

	static class UClass* StaticClass();
	static class UAISenseConfig_Blueprint* GetDefaultObj();

};

// 0x18 (0x60 - 0x48)
// Class AIModule.AISenseConfig_Hearing
class UAISenseConfig_Hearing : public UAISenseConfig
{
public:
	class UClass*                                Implementation;                                    // 0x48(0x8)(None)
	float                                        HearingRange;                                      // 0x50(0x4)(None)
	float                                        LoSHearingRange;                                   // 0x54(0x4)(None)
	uint8                                        bUseLoSHearing : 1;                                // Mask: 0x1, PropSize: 0x10x58(0x1)(None)
	uint8                                        BitPad_1DF : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2781[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAISenseAffiliationFilter             DetectionByAffiliation;                            // 0x5C(0x4)(None)

	static class UClass* StaticClass();
	static class UAISenseConfig_Hearing* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class AIModule.AISenseConfig_Prediction
class UAISenseConfig_Prediction : public UAISenseConfig
{
public:

	static class UClass* StaticClass();
	static class UAISenseConfig_Prediction* GetDefaultObj();

};

// 0x28 (0x70 - 0x48)
// Class AIModule.AISenseConfig_Sight
class UAISenseConfig_Sight : public UAISenseConfig
{
public:
	class UClass*                                Implementation;                                    // 0x48(0x8)(None)
	float                                        SightRadius;                                       // 0x50(0x4)(None)
	float                                        LoseSightRadius;                                   // 0x54(0x4)(None)
	float                                        PeripheralVisionAngleDegrees;                      // 0x58(0x4)(None)
	struct FAISenseAffiliationFilter             DetectionByAffiliation;                            // 0x5C(0x4)(None)
	float                                        AutoSuccessRangeFromLastSeenLocation;              // 0x60(0x4)(None)
	float                                        PointOfViewBackwardOffset;                         // 0x64(0x4)(None)
	float                                        NearClippingRadius;                                // 0x68(0x4)(None)
	uint8                                        Pad_2782[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAISenseConfig_Sight* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class AIModule.AISenseConfig_Team
class UAISenseConfig_Team : public UAISenseConfig
{
public:

	static class UClass* StaticClass();
	static class UAISenseConfig_Team* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class AIModule.AISenseConfig_Touch
class UAISenseConfig_Touch : public UAISenseConfig
{
public:

	static class UClass* StaticClass();
	static class UAISenseConfig_Touch* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.AISenseEvent
class UAISenseEvent : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAISenseEvent* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class AIModule.AISenseEvent_Damage
class UAISenseEvent_Damage : public UAISenseEvent
{
public:
	struct FAIDamageEvent                        Event;                                             // 0x28(0x50)(None)

	static class UClass* StaticClass();
	static class UAISenseEvent_Damage* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class AIModule.AISenseEvent_Hearing
class UAISenseEvent_Hearing : public UAISenseEvent
{
public:
	struct FAINoiseEvent                         Event;                                             // 0x28(0x40)(None)

	static class UClass* StaticClass();
	static class UAISenseEvent_Hearing* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.CrowdAgentInterface
class ICrowdAgentInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICrowdAgentInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.EnvQueryTypes
class UEnvQueryTypes : public UObject
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryTypes* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.EQSQueryResultSourceInterface
class IEQSQueryResultSourceInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEQSQueryResultSourceInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.GenericTeamAgentInterface
class IGenericTeamAgentInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGenericTeamAgentInterface* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class AIModule.PawnAction
class UPawnAction : public UObject
{
public:
	class UPawnAction*                           ChildAction;                                       // 0x28(0x8)(ZeroConstructor)
	class UPawnAction*                           ParentAction;                                      // 0x30(0x8)(ZeroConstructor)
	class UPawnActionsComponent*                 OwnerComponent;                                    // 0x38(0x8)(ZeroConstructor)
	class UObject*                               Instigator;                                        // 0x40(0x8)(ZeroConstructor)
	class UBrainComponent*                       BrainComp;                                         // 0x48(0x8)(None)
	uint8                                        Pad_2792[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bAllowNewSameClassInstance : 1;                    // Mask: 0x1, PropSize: 0x10x80(0x1)(None)
	uint8                                        bReplaceActiveSameClassInstance : 1;               // Mask: 0x2, PropSize: 0x10x80(0x1)(None)
	uint8                                        bShouldPauseMovement : 1;                          // Mask: 0x4, PropSize: 0x10x80(0x1)(None)
	uint8                                        bAlwaysNotifyOnFinished : 1;                       // Mask: 0x8, PropSize: 0x10x80(0x1)(None)
	uint8                                        Pad_2793[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPawnAction* GetDefaultObj();

	void GetActionPriority(enum class EAIRequestPriority ReturnValue);
	void Finish(enum class EPawnActionResult WithResult);
	void CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass, class UPawnAction* ReturnValue);
};

// 0x38 (0xF0 - 0xB8)
// Class AIModule.PawnActionsComponent
class UPawnActionsComponent : public UActorComponent
{
public:
	class APawn*                                 ControlledPawn;                                    // 0xB8(0x8)(ZeroConstructor)
	TArray<struct FPawnActionStack>              ActionStacks;                                      // 0xC0(0x10)(ZeroConstructor)
	TArray<struct FPawnActionEvent>              ActionEvents;                                      // 0xD0(0x10)(ZeroConstructor)
	class UPawnAction*                           CurrentAction;                                     // 0xE0(0x8)(ZeroConstructor)
	uint8                                        Pad_279F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPawnActionsComponent* GetDefaultObj();

	void K2_PushAction(class UPawnAction* NewAction, enum class EAIRequestPriority Priority, class UObject* Instigator, bool ReturnValue);
	void K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, enum class EAIRequestPriority Priority, bool ReturnValue);
	void K2_ForceAbortAction(class UPawnAction* ActionToAbort, enum class EPawnActionAbortState ReturnValue);
	void K2_AbortAction(class UPawnAction* ActionToAbort, enum class EPawnActionAbortState ReturnValue);
};

// 0x0 (0x90 - 0x90)
// Class AIModule.PawnAction_BlueprintBase
class UPawnAction_BlueprintBase : public UPawnAction
{
public:

	static class UClass* StaticClass();
	static class UPawnAction_BlueprintBase* GetDefaultObj();

	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionPause(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
};

// 0x60 (0xF0 - 0x90)
// Class AIModule.PawnAction_Move
class UPawnAction_Move : public UPawnAction
{
public:
	class AActor*                                GoalActor;                                         // 0x90(0x8)(ZeroConstructor)
	struct FVector                               GoalLocation;                                      // 0x98(0x18)(None)
	float                                        AcceptableRadius;                                  // 0xB0(0x4)(None)
	uint8                                        Pad_27B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                FilterClass;                                       // 0xB8(0x8)(ZeroConstructor)
	uint8                                        bAllowStrafe : 1;                                  // Mask: 0x1, PropSize: 0x10xC0(0x1)(None)
	uint8                                        bFinishOnOverlap : 1;                              // Mask: 0x2, PropSize: 0x10xC0(0x1)(None)
	uint8                                        bUsePathfinding : 1;                               // Mask: 0x4, PropSize: 0x10xC0(0x1)(None)
	uint8                                        bAllowPartialPath : 1;                             // Mask: 0x8, PropSize: 0x10xC0(0x1)(None)
	uint8                                        bProjectGoalToNavigation : 1;                      // Mask: 0x10, PropSize: 0x10xC0(0x1)(None)
	uint8                                        bUpdatePathToGoal : 1;                             // Mask: 0x20, PropSize: 0x10xC0(0x1)(None)
	uint8                                        bAbortSubActionOnPathChange : 1;                   // Mask: 0x40, PropSize: 0x10xC0(0x1)(None)
	uint8                                        Pad_27BB[0x2F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPawnAction_Move* GetDefaultObj();

};

// 0x20 (0xB0 - 0x90)
// Class AIModule.PawnAction_Repeat
class UPawnAction_Repeat : public UPawnAction
{
public:
	class UPawnAction*                           ActionToRepeat;                                    // 0x90(0x8)(ZeroConstructor)
	class UPawnAction*                           RecentActionCopy;                                  // 0x98(0x8)(ZeroConstructor)
	enum class EPawnActionFailHandling           ChildFailureHandlingMode;                          // 0xA0(0x1)(None)
	uint8                                        Pad_27BE[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPawnAction_Repeat* GetDefaultObj();

};

// 0x28 (0xB8 - 0x90)
// Class AIModule.PawnAction_Sequence
class UPawnAction_Sequence : public UPawnAction
{
public:
	TArray<class UPawnAction*>                   ActionSequence;                                    // 0x90(0x10)(ZeroConstructor)
	enum class EPawnActionFailHandling           ChildFailureHandlingMode;                          // 0xA0(0x1)(None)
	uint8                                        Pad_27C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPawnAction*                           RecentActionCopy;                                  // 0xA8(0x8)(ZeroConstructor)
	uint8                                        Pad_27C1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPawnAction_Sequence* GetDefaultObj();

};

// 0x10 (0xA0 - 0x90)
// Class AIModule.PawnAction_Wait
class UPawnAction_Wait : public UPawnAction
{
public:
	float                                        TimeToWait;                                        // 0x90(0x4)(None)
	uint8                                        Pad_27C3[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPawnAction_Wait* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class AIModule.AIResource_Movement
class UAIResource_Movement : public UGameplayTaskResource
{
public:

	static class UClass* StaticClass();
	static class UAIResource_Movement* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class AIModule.AIResource_Logic
class UAIResource_Logic : public UGameplayTaskResource
{
public:

	static class UClass* StaticClass();
	static class UAIResource_Logic* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class AIModule.AISubsystem
class UAISubsystem : public UObject
{
public:
	uint8                                        Pad_27C5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAISystem*                             AISystem;                                          // 0x30(0x8)(None)

	static class UClass* StaticClass();
	static class UAISubsystem* GetDefaultObj();

};

// 0x110 (0x170 - 0x60)
// Class AIModule.AISystem
class UAISystem : public UAISystemBase
{
public:
	struct FSoftClassPath                        PerceptionSystemClassName;                         // 0x60(0x20)(None)
	struct FSoftClassPath                        HotSpotManagerClassName;                           // 0x80(0x20)(None)
	struct FSoftClassPath                        EnvQueryManagerClassName;                          // 0xA0(0x20)(None)
	float                                        AcceptanceRadius;                                  // 0xC0(0x4)(None)
	float                                        PathfollowingRegularPathPointAcceptanceRadius;     // 0xC4(0x4)(None)
	float                                        PathfollowingNavLinkAcceptanceRadius;              // 0xC8(0x4)(None)
	bool                                         bFinishMoveOnGoalOverlap;                          // 0xCC(0x1)(None)
	bool                                         bAcceptPartialPaths;                               // 0xCD(0x1)(None)
	bool                                         bAllowStrafing;                                    // 0xCE(0x1)(None)
	bool                                         bAllowControllersAsEQSQuerier;                     // 0xCF(0x1)(None)
	bool                                         bEnableDebuggerPlugin;                             // 0xD0(0x1)(None)
	bool                                         bForgetStaleActors;                                // 0xD1(0x1)(None)
	bool                                         bAddBlackboardSelfKey;                             // 0xD2(0x1)(None)
	bool                                         bClearBBEntryOnBTEQSFail;                          // 0xD3(0x1)(None)
	bool                                         bBlackboardKeyDecoratorAllowsNoneAsValue;          // 0xD4(0x1)(None)
	enum class ECollisionChannel                 DefaultSightCollisionChannel;                      // 0xD5(0x1)(None)
	uint8                                        Pad_27CB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBehaviorTreeManager*                  BehaviorTreeManager;                               // 0xD8(0x8)(ZeroConstructor)
	class UEnvQueryManager*                      EnvironmentQueryManager;                           // 0xE0(0x8)(ZeroConstructor)
	class UAIPerceptionSystem*                   PerceptionSystem;                                  // 0xE8(0x8)(ZeroConstructor)
	TArray<class UAIAsyncTaskBlueprintProxy*>    AllProxyObjects;                                   // 0xF0(0x10)(ZeroConstructor)
	class UAIHotSpotManager*                     HotSpotManager;                                    // 0x100(0x8)(ZeroConstructor)
	class UNavLocalGridManager*                  NavLocalGrids;                                     // 0x108(0x8)(None)
	uint8                                        Pad_27CE[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAISystem* GetDefaultObj();

	void AILoggingVerbose();
	void AIIgnorePlayers();
};

// 0x40 (0x68 - 0x28)
// Class AIModule.BehaviorTree
class UBehaviorTree : public UObject
{
public:
	uint8                                        Pad_27CF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBTCompositeNode*                      RootNode;                                          // 0x30(0x8)(ZeroConstructor)
	class UBlackboardData*                       BlackboardAsset;                                   // 0x38(0x8)(ZeroConstructor)
	TArray<class UBTDecorator*>                  RootDecorators;                                    // 0x40(0x10)(None)
	TArray<struct FBTDecoratorLogic>             RootDecoratorOps;                                  // 0x50(0x10)(None)
	uint8                                        Pad_27D1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBehaviorTree* GetDefaultObj();

};

// 0x58 (0x110 - 0xB8)
// Class AIModule.BrainComponent
class UBrainComponent : public UActorComponent
{
public:
	uint8                                        Pad_27D8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlackboardComponent*                  BlackboardComp;                                    // 0xC0(0x8)(ZeroConstructor)
	class AAIController*                         AIOwner;                                           // 0xC8(0x8)(ZeroConstructor)
	uint8                                        Pad_27D9[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBrainComponent* GetDefaultObj();

	void StopLogic(const class FString& Reason);
	void StartLogic();
	void RestartLogic();
	void IsRunning(bool ReturnValue);
	void IsPaused(bool ReturnValue);
};

// 0x1A8 (0x2B8 - 0x110)
// Class AIModule.BehaviorTreeComponent
class UBehaviorTreeComponent : public UBrainComponent
{
public:
	uint8                                        Pad_27E1[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBTNode*>                       NodeInstances;                                     // 0x130(0x10)(ZeroConstructor)
	uint8                                        Pad_27E2[0x148];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UBehaviorTree*                         DefaultBehaviorTreeAsset;                          // 0x288(0x8)(ZeroConstructor)
	uint8                                        Pad_27E3[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBehaviorTreeComponent* GetDefaultObj();

	void SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset);
	void GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag, double ReturnValue);
	void FindService(const class FString& Name, class UBTNode* ReturnValue);
	void AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
};

// 0x28 (0x50 - 0x28)
// Class AIModule.BehaviorTreeManager
class UBehaviorTreeManager : public UObject
{
public:
	int32                                        MaxDebuggerSteps;                                  // 0x28(0x4)(None)
	uint8                                        Pad_27E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBehaviorTreeTemplateInfo>     LoadedTemplates;                                   // 0x30(0x10)(ZeroConstructor)
	TArray<class UBehaviorTreeComponent*>        ActiveComponents;                                  // 0x40(0x10)(None)

	static class UClass* StaticClass();
	static class UBehaviorTreeManager* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.BehaviorTreeTypes
class UBehaviorTreeTypes : public UObject
{
public:

	static class UClass* StaticClass();
	static class UBehaviorTreeTypes* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.BlackboardAssetProvider
class IBlackboardAssetProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBlackboardAssetProvider* GetDefaultObj();

	void GetBlackboardAsset(class UBlackboardData* ReturnValue);
};

// 0x108 (0x1C0 - 0xB8)
// Class AIModule.BlackboardComponent
class UBlackboardComponent : public UActorComponent
{
public:
	class UBrainComponent*                       BrainComp;                                         // 0xB8(0x8)(ZeroConstructor)
	class UBlackboardData*                       DefaultBlackboardAsset;                            // 0xC0(0x8)(ZeroConstructor)
	class UBlackboardData*                       BlackboardAsset;                                   // 0xC8(0x8)(ZeroConstructor)
	uint8                                        Pad_2838[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBlackboardKeyType*>            KeyInstances;                                      // 0xF0(0x10)(ZeroConstructor)
	uint8                                        Pad_2839[0xC0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBlackboardComponent* GetDefaultObj();

	void SetValueAsVector(class FName KeyName, const struct FVector& VectorValue);
	void SetValueAsString(class FName KeyName, const class FString& StringValue);
	void SetValueAsRotator(class FName KeyName, const struct FRotator& VectorValue);
	void SetValueAsObject(class FName KeyName, class UObject* ObjectValue);
	void SetValueAsName(class FName KeyName, class FName NameValue);
	void SetValueAsInt(class FName KeyName, int32 IntValue);
	void SetValueAsFloat(class FName KeyName, float FloatValue);
	void SetValueAsEnum(class FName KeyName, uint8 EnumValue);
	void SetValueAsClass(class FName KeyName, class UClass* ClassValue);
	void SetValueAsBool(class FName KeyName, bool BoolValue);
	void IsVectorValueSet(class FName KeyName, bool ReturnValue);
	void GetValueAsVector(class FName KeyName, const struct FVector& ReturnValue);
	void GetValueAsString(class FName KeyName, const class FString& ReturnValue);
	void GetValueAsRotator(class FName KeyName, const struct FRotator& ReturnValue);
	void GetValueAsObject(class FName KeyName, class UObject* ReturnValue);
	void GetValueAsName(class FName KeyName, class FName ReturnValue);
	void GetValueAsInt(class FName KeyName, int32 ReturnValue);
	void GetValueAsFloat(class FName KeyName, float ReturnValue);
	void GetValueAsEnum(class FName KeyName, uint8 ReturnValue);
	void GetValueAsClass(class FName KeyName, class UClass* ReturnValue);
	void GetValueAsBool(class FName KeyName, bool ReturnValue);
	void GetRotationFromEntry(class FName KeyName, const struct FRotator& ResultRotation, bool ReturnValue);
	void GetLocationFromEntry(class FName KeyName, const struct FVector& ResultLocation, bool ReturnValue);
	void ClearValueAsVector(class FName KeyName);
	void ClearValueAsRotator(class FName KeyName);
	void ClearValue(class FName KeyName);
};

// 0x20 (0x50 - 0x30)
// Class AIModule.BlackboardData
class UBlackboardData : public UDataAsset
{
public:
	class UBlackboardData*                       Parent;                                            // 0x30(0x8)(ZeroConstructor)
	TArray<struct FBlackboardEntry>              Keys;                                              // 0x38(0x10)(ZeroConstructor)
	uint8                                        bHasSynchronizedKeys : 1;                          // Mask: 0x1, PropSize: 0x10x48(0x1)(None)
	uint8                                        Pad_2840[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBlackboardData* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AIModule.BlackboardKeyType
class UBlackboardKeyType : public UObject
{
public:
	uint8                                        Pad_2842[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBlackboardKeyType* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.BlackboardKeyType_Bool
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass();
	static class UBlackboardKeyType_Bool* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class AIModule.BlackboardKeyType_Class
class UBlackboardKeyType_Class : public UBlackboardKeyType
{
public:
	class UClass*                                BaseClass;                                         // 0x30(0x8)(None)

	static class UClass* StaticClass();
	static class UBlackboardKeyType_Class* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class AIModule.BlackboardKeyType_Enum
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
public:
	class UEnum*                                 EnumType;                                          // 0x30(0x8)(None)
	class FString                                EnumName;                                          // 0x38(0x10)(None)
	uint8                                        bIsEnumNameValid : 1;                              // Mask: 0x1, PropSize: 0x10x48(0x1)(None)
	uint8                                        Pad_2848[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBlackboardKeyType_Enum* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.BlackboardKeyType_Float
class UBlackboardKeyType_Float : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass();
	static class UBlackboardKeyType_Float* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.BlackboardKeyType_Int
class UBlackboardKeyType_Int : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass();
	static class UBlackboardKeyType_Int* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.BlackboardKeyType_Name
class UBlackboardKeyType_Name : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass();
	static class UBlackboardKeyType_Name* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class AIModule.BlackboardKeyType_NativeEnum
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
public:
	class FString                                EnumName;                                          // 0x30(0x10)(None)
	class UEnum*                                 EnumType;                                          // 0x40(0x8)(None)

	static class UClass* StaticClass();
	static class UBlackboardKeyType_NativeEnum* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class AIModule.BlackboardKeyType_Object
class UBlackboardKeyType_Object : public UBlackboardKeyType
{
public:
	class UClass*                                BaseClass;                                         // 0x30(0x8)(None)

	static class UClass* StaticClass();
	static class UBlackboardKeyType_Object* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.BlackboardKeyType_Rotator
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass();
	static class UBlackboardKeyType_Rotator* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class AIModule.BlackboardKeyType_String
class UBlackboardKeyType_String : public UBlackboardKeyType
{
public:
	class FString                                StringValue;                                       // 0x30(0x10)(None)

	static class UClass* StaticClass();
	static class UBlackboardKeyType_String* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.BlackboardKeyType_Vector
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{
public:

	static class UClass* StaticClass();
	static class UBlackboardKeyType_Vector* GetDefaultObj();

};

// 0x38 (0x90 - 0x58)
// Class AIModule.BTCompositeNode
class UBTCompositeNode : public UBTNode
{
public:
	TArray<struct FBTCompositeChild>             Children;                                          // 0x58(0x10)(ZeroConstructor)
	TArray<class UBTService*>                    Services;                                          // 0x68(0x10)(ZeroConstructor)
	uint8                                        Pad_284D[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bApplyDecoratorScope : 1;                          // Mask: 0x1, PropSize: 0x10x88(0x1)(None)
	uint8                                        Pad_284E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTCompositeNode* GetDefaultObj();

};

// 0x8 (0x68 - 0x60)
// Class AIModule.BTDecorator
class UBTDecorator : public UBTAuxiliaryNode
{
public:
	uint8                                        BitPad_1F1 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bInverseCondition : 1;                             // Mask: 0x80, PropSize: 0x10x60(0x1)(None)
	uint8                                        Pad_284F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EBTFlowAbortMode                  FlowAbortMode;                                     // 0x64(0x1)(None)
	uint8                                        Pad_2850[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTDecorator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.BTFunctionLibrary
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBTFunctionLibrary* GetDefaultObj();

	void StopUsingExternalEvent(class UBTNode* NodeOwner);
	void StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);
	void SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value);
	void SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const class FString& Value);
	void SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value);
	void SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value);
	void SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class FName Value);
	void SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int32 Value);
	void SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value);
	void SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, uint8 Value);
	void SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value);
	void SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value);
	void GetOwnersBlackboard(class UBTNode* NodeOwner, class UBlackboardComponent* ReturnValue);
	void GetOwnerComponent(class UBTNode* NodeOwner, class UBehaviorTreeComponent* ReturnValue);
	void GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& ReturnValue);
	void GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const class FString& ReturnValue);
	void GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& ReturnValue);
	void GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* ReturnValue);
	void GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class FName ReturnValue);
	void GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int32 ReturnValue);
	void GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float ReturnValue);
	void GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, uint8 ReturnValue);
	void GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* ReturnValue);
	void GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool ReturnValue);
	void GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class AActor* ReturnValue);
	void ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	void ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
};

// 0x0 (0x90 - 0x90)
// Class AIModule.BTComposite_Selector
class UBTComposite_Selector : public UBTCompositeNode
{
public:

	static class UClass* StaticClass();
	static class UBTComposite_Selector* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class AIModule.BTComposite_Sequence
class UBTComposite_Sequence : public UBTCompositeNode
{
public:

	static class UClass* StaticClass();
	static class UBTComposite_Sequence* GetDefaultObj();

};

// 0x8 (0x98 - 0x90)
// Class AIModule.BTComposite_SimpleParallel
class UBTComposite_SimpleParallel : public UBTCompositeNode
{
public:
	enum class EBTParallelMode                   FinishMode;                                        // 0x90(0x1)(None)
	uint8                                        Pad_286E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTComposite_SimpleParallel* GetDefaultObj();

};

// 0x28 (0x90 - 0x68)
// Class AIModule.BTDecorator_BlackboardBase
class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0x68(0x28)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBTDecorator_BlackboardBase* GetDefaultObj();

};

// 0x30 (0xC0 - 0x90)
// Class AIModule.BTDecorator_Blackboard
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
public:
	int32                                        IntValue;                                          // 0x90(0x4)(None)
	float                                        FloatValue;                                        // 0x94(0x4)(None)
	class FString                                StringValue;                                       // 0x98(0x10)(None)
	class FString                                CachedDescription;                                 // 0xA8(0x10)(None)
	uint8                                        OperationType;                                     // 0xB8(0x1)(None)
	enum class EBTBlackboardRestart              NotifyObserver;                                    // 0xB9(0x1)(None)
	uint8                                        Pad_2870[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTDecorator_Blackboard* GetDefaultObj();

};

// 0x38 (0xA0 - 0x68)
// Class AIModule.BTDecorator_BlueprintBase
class UBTDecorator_BlueprintBase : public UBTDecorator
{
public:
	class AAIController*                         AIOwner;                                           // 0x68(0x8)(ZeroConstructor)
	class AActor*                                ActorOwner;                                        // 0x70(0x8)(ZeroConstructor)
	TArray<class FName>                          ObservedKeyNames;                                  // 0x78(0x10)(None)
	uint8                                        Pad_287B[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bShowPropertyDetails : 1;                          // Mask: 0x1, PropSize: 0x10x98(0x1)(None)
	uint8                                        bCheckConditionOnlyBlackBoardChanges : 1;          // Mask: 0x2, PropSize: 0x10x98(0x1)(None)
	uint8                                        bIsObservingBB : 1;                                // Mask: 0x4, PropSize: 0x10x98(0x1)(None)
	uint8                                        Pad_287C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTDecorator_BlueprintBase* GetDefaultObj();

	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverDeactivated(class AActor* OwnerActor);
	void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverActivated(class AActor* OwnerActor);
	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionStart(class AActor* OwnerActor);
	void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, enum class EBTNodeResult NodeResult);
	void ReceiveExecutionFinish(class AActor* OwnerActor, enum class EBTNodeResult NodeResult);
	void ReceiveConditionCheck(class AActor* OwnerActor);
	void PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, bool ReturnValue);
	void PerformConditionCheck(class AActor* OwnerActor, bool ReturnValue);
	void IsDecoratorObserverActive(bool ReturnValue);
	void IsDecoratorExecutionActive(bool ReturnValue);
	void FinishConditionCheck(bool bAllowExecution);
};

// 0x60 (0xC8 - 0x68)
// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                ActorToCheck;                                      // 0x68(0x28)(ZeroConstructor)
	enum class EGameplayContainerMatchType       TagsToMatch;                                       // 0x90(0x1)(None)
	uint8                                        Pad_287E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x98(0x20)(None)
	class FString                                CachedDescription;                                 // 0xB8(0x10)(None)

	static class UClass* StaticClass();
	static class UBTDecorator_CheckGameplayTagsOnActor* GetDefaultObj();

};

// 0x58 (0xC0 - 0x68)
// Class AIModule.BTDecorator_CompareBBEntries
class UBTDecorator_CompareBBEntries : public UBTDecorator
{
public:
	enum class EBlackBoardEntryComparison        Operator;                                          // 0x68(0x1)(None)
	uint8                                        Pad_287F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                BlackboardKeyA;                                    // 0x70(0x28)(ZeroConstructor)
	struct FBlackboardKeySelector                BlackboardKeyB;                                    // 0x98(0x28)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBTDecorator_CompareBBEntries* GetDefaultObj();

};

// 0x0 (0xC0 - 0xC0)
// Class AIModule.BTDecorator_ConditionalLoop
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{
public:

	static class UClass* StaticClass();
	static class UBTDecorator_ConditionalLoop* GetDefaultObj();

};

// 0x88 (0xF0 - 0x68)
// Class AIModule.BTDecorator_ConeCheck
class UBTDecorator_ConeCheck : public UBTDecorator
{
public:
	float                                        ConeHalfAngle;                                     // 0x68(0x4)(None)
	uint8                                        Pad_2880[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                ConeOrigin;                                        // 0x70(0x28)(ZeroConstructor)
	struct FBlackboardKeySelector                ConeDirection;                                     // 0x98(0x28)(ZeroConstructor)
	struct FBlackboardKeySelector                Observed;                                          // 0xC0(0x28)(ZeroConstructor)
	uint8                                        Pad_2881[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTDecorator_ConeCheck* GetDefaultObj();

};

// 0x30 (0x98 - 0x68)
// Class AIModule.BTDecorator_Cooldown
class UBTDecorator_Cooldown : public UBTDecorator
{
public:
	float                                        CoolDownTime;                                      // 0x68(0x4)(None)
	uint8                                        Pad_2882[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                CoolDownTimeKey;                                   // 0x70(0x28)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBTDecorator_Cooldown* GetDefaultObj();

};

// 0x60 (0xC8 - 0x68)
// Class AIModule.BTDecorator_DoesPathExist
class UBTDecorator_DoesPathExist : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                BlackboardKeyA;                                    // 0x68(0x28)(ZeroConstructor)
	struct FBlackboardKeySelector                BlackboardKeyB;                                    // 0x90(0x28)(ZeroConstructor)
	uint8                                        bUseSelf : 1;                                      // Mask: 0x1, PropSize: 0x10xB8(0x1)(None)
	uint8                                        BitPad_1F4 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2883[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EPathExistanceQueryType           PathQueryType;                                     // 0xBC(0x1)(None)
	uint8                                        Pad_2884[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                FilterClass;                                       // 0xC0(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBTDecorator_DoesPathExist* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class AIModule.BTDecorator_ForceSuccess
class UBTDecorator_ForceSuccess : public UBTDecorator
{
public:

	static class UClass* StaticClass();
	static class UBTDecorator_ForceSuccess* GetDefaultObj();

};

// 0x48 (0xD8 - 0x90)
// Class AIModule.BTDecorator_IsAtLocation
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
public:
	float                                        AcceptableRadius;                                  // 0x90(0x4)(None)
	uint8                                        Pad_2885[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIDataProviderFloatValue             ParametrizedAcceptableRadius;                      // 0x98(0x38)(ZeroConstructor)
	enum class EFAIDistanceType                  GeometricDistanceType;                             // 0xD0(0x1)(None)
	uint8                                        Pad_2886[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bUseParametrizedRadius : 1;                        // Mask: 0x1, PropSize: 0x10xD4(0x1)(None)
	uint8                                        bUseNavAgentGoalLocation : 1;                      // Mask: 0x2, PropSize: 0x10xD4(0x1)(None)
	uint8                                        bPathFindingBasedTest : 1;                         // Mask: 0x4, PropSize: 0x10xD4(0x1)(None)
	uint8                                        Pad_2887[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTDecorator_IsAtLocation* GetDefaultObj();

};

// 0x8 (0x98 - 0x90)
// Class AIModule.BTDecorator_IsBBEntryOfClass
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                TestClass;                                         // 0x90(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBTDecorator_IsBBEntryOfClass* GetDefaultObj();

};

// 0x60 (0xC8 - 0x68)
// Class AIModule.BTDecorator_KeepInCone
class UBTDecorator_KeepInCone : public UBTDecorator
{
public:
	float                                        ConeHalfAngle;                                     // 0x68(0x4)(None)
	uint8                                        Pad_288A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                ConeOrigin;                                        // 0x70(0x28)(ZeroConstructor)
	struct FBlackboardKeySelector                Observed;                                          // 0x98(0x28)(ZeroConstructor)
	uint8                                        bUseSelfAsOrigin : 1;                              // Mask: 0x1, PropSize: 0x10xC0(0x1)(None)
	uint8                                        bUseSelfAsObserved : 1;                            // Mask: 0x2, PropSize: 0x10xC0(0x1)(None)
	uint8                                        Pad_288B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTDecorator_KeepInCone* GetDefaultObj();

};

// 0x10 (0x78 - 0x68)
// Class AIModule.BTDecorator_Loop
class UBTDecorator_Loop : public UBTDecorator
{
public:
	int32                                        NumLoops;                                          // 0x68(0x4)(None)
	bool                                         bInfiniteLoop;                                     // 0x6C(0x1)(None)
	uint8                                        Pad_288C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InfiniteLoopTimeoutTime;                           // 0x70(0x4)(None)
	uint8                                        Pad_288D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTDecorator_Loop* GetDefaultObj();

};

// 0x0 (0x68 - 0x68)
// Class AIModule.BTDecorator_ReachedMoveGoal
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{
public:

	static class UClass* StaticClass();
	static class UBTDecorator_ReachedMoveGoal* GetDefaultObj();

};

// 0x10 (0x78 - 0x68)
// Class AIModule.BTDecorator_SetTagCooldown
class UBTDecorator_SetTagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                          CooldownTag;                                       // 0x68(0x8)(None)
	float                                        CooldownDuration;                                  // 0x70(0x4)(None)
	bool                                         bAddToExistingDuration;                            // 0x74(0x1)(None)
	uint8                                        Pad_288F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTDecorator_SetTagCooldown* GetDefaultObj();

};

// 0x10 (0x78 - 0x68)
// Class AIModule.BTDecorator_TagCooldown
class UBTDecorator_TagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                          CooldownTag;                                       // 0x68(0x8)(None)
	float                                        CooldownDuration;                                  // 0x70(0x4)(None)
	bool                                         bAddToExistingDuration;                            // 0x74(0x1)(None)
	bool                                         bActivatesCooldown;                                // 0x75(0x1)(None)
	uint8                                        Pad_2891[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTDecorator_TagCooldown* GetDefaultObj();

};

// 0x30 (0x98 - 0x68)
// Class AIModule.BTDecorator_TimeLimit
class UBTDecorator_TimeLimit : public UBTDecorator
{
public:
	float                                        TimeLimit;                                         // 0x68(0x4)(None)
	uint8                                        Pad_2892[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                TimeLimitKey;                                      // 0x70(0x28)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBTDecorator_TimeLimit* GetDefaultObj();

};

// 0x28 (0x98 - 0x70)
// Class AIModule.BTService_BlueprintBase
class UBTService_BlueprintBase : public UBTService
{
public:
	class AAIController*                         AIOwner;                                           // 0x70(0x8)(ZeroConstructor)
	class AActor*                                ActorOwner;                                        // 0x78(0x8)(ZeroConstructor)
	uint8                                        Pad_2897[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bShowPropertyDetails : 1;                          // Mask: 0x1, PropSize: 0x10x90(0x1)(None)
	uint8                                        bShowEventDetails : 1;                             // Mask: 0x2, PropSize: 0x10x90(0x1)(None)
	uint8                                        Pad_2898[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTService_BlueprintBase* GetDefaultObj();

	void ResetInterval(class UBehaviorTreeComponent* OwnerComp);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveSearchStart(class AActor* OwnerActor);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveActivation(class AActor* OwnerActor);
	void IsServiceActive(bool ReturnValue);
};

// 0x8 (0xA0 - 0x98)
// Class AIModule.BTService_DefaultFocus
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
public:
	uint8                                        FocusPriority;                                     // 0x98(0x1)(None)
	uint8                                        Pad_2899[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTService_DefaultFocus* GetDefaultObj();

};

// 0x60 (0xF8 - 0x98)
// Class AIModule.BTService_RunEQS
class UBTService_RunEQS : public UBTService_BlackboardBase
{
public:
	struct FEQSParametrizedQueryExecutionRequest EQSRequest;                                        // 0x98(0x48)(ZeroConstructor)
	bool                                         bUpdateBBOnFail;                                   // 0xE0(0x1)(None)
	uint8                                        Pad_289A[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTService_RunEQS* GetDefaultObj();

};

// 0x38 (0xA8 - 0x70)
// Class AIModule.BTTask_BlueprintBase
class UBTTask_BlueprintBase : public UBTTaskNode
{
public:
	class AAIController*                         AIOwner;                                           // 0x70(0x8)(ZeroConstructor)
	class AActor*                                ActorOwner;                                        // 0x78(0x8)(ZeroConstructor)
	struct FIntervalCountdown                    TickInterval;                                      // 0x80(0x8)(None)
	uint8                                        Pad_28A7[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bShowPropertyDetails : 1;                          // Mask: 0x1, PropSize: 0x10xA0(0x1)(None)
	uint8                                        Pad_28A8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTTask_BlueprintBase* GetDefaultObj();

	void SetFinishOnMessageWithId(class FName MessageName, int32 RequestID);
	void SetFinishOnMessage(class FName MessageName);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecute(class AActor* OwnerActor);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbort(class AActor* OwnerActor);
	void IsTaskExecuting(bool ReturnValue);
	void IsTaskAborting(bool ReturnValue);
	void FinishExecute(bool bSuccess);
	void FinishAbort();
};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_FinishWithResult
class UBTTask_FinishWithResult : public UBTTaskNode
{
public:
	enum class EBTNodeResult                     Result;                                            // 0x70(0x1)(None)
	uint8                                        Pad_28AD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTTask_FinishWithResult* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_GameplayTaskBase
class UBTTask_GameplayTaskBase : public UBTTaskNode
{
public:
	uint8                                        bWaitForGameplayTask : 1;                          // Mask: 0x1, PropSize: 0x10x70(0x1)(None)
	uint8                                        Pad_28AE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTTask_GameplayTaskBase* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_MakeNoise
class UBTTask_MakeNoise : public UBTTaskNode
{
public:
	float                                        Loudnes;                                           // 0x70(0x4)(None)
	uint8                                        Pad_28B5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTTask_MakeNoise* GetDefaultObj();

};

// 0x40 (0xD8 - 0x98)
// Class AIModule.BTTask_MoveTo
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
	float                                        AcceptableRadius;                                  // 0x98(0x4)(None)
	uint8                                        Pad_28BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                FilterClass;                                       // 0xA0(0x8)(ZeroConstructor)
	float                                        ObservedBlackboardValueTolerance;                  // 0xA8(0x4)(None)
	uint8                                        bObserveBlackboardValue : 1;                       // Mask: 0x1, PropSize: 0x10xAC(0x1)(None)
	uint8                                        bAllowStrafe : 1;                                  // Mask: 0x2, PropSize: 0x10xAC(0x1)(None)
	uint8                                        bAllowPartialPath : 1;                             // Mask: 0x4, PropSize: 0x10xAC(0x1)(None)
	uint8                                        bTrackMovingGoal : 1;                              // Mask: 0x8, PropSize: 0x10xAC(0x1)(None)
	uint8                                        bProjectGoalLocation : 1;                          // Mask: 0x10, PropSize: 0x10xAC(0x1)(None)
	uint8                                        bReachTestIncludesAgentRadius : 1;                 // Mask: 0x20, PropSize: 0x10xAC(0x1)(None)
	uint8                                        bReachTestIncludesGoalRadius : 1;                  // Mask: 0x40, PropSize: 0x10xAC(0x1)(None)
	uint8                                        bStopOnOverlap : 1;                                // Mask: 0x80, PropSize: 0x10xAC(0x1)(None)
	uint8                                        bStopOnOverlapNeedsUpdate : 1;                     // Mask: 0x1, PropSize: 0x10xAD(0x1)(None)
	uint8                                        BitPad_1F7 : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bAutoStopOnAbort : 1;                              // Mask: 0x4, PropSize: 0x10xAD(0x1)(None)
	uint8                                        BitPad_1F8 : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_28BC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                AcceptableRadiusKey;                               // 0xB0(0x28)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBTTask_MoveTo* GetDefaultObj();

};

// 0x8 (0xE0 - 0xD8)
// Class AIModule.BTTask_MoveDirectlyToward
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
public:
	uint8                                        bDisablePathUpdateOnGoalLocationChange : 1;        // Mask: 0x1, PropSize: 0x10xD8(0x1)(None)
	uint8                                        bProjectVectorGoalToNavigation : 1;                // Mask: 0x2, PropSize: 0x10xD8(0x1)(None)
	uint8                                        bUpdatedDeprecatedProperties : 1;                  // Mask: 0x4, PropSize: 0x10xD8(0x1)(None)
	uint8                                        Pad_28C4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTTask_MoveDirectlyToward* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AIModule.BTTask_PawnActionBase
class UBTTask_PawnActionBase : public UBTTaskNode
{
public:

	static class UClass* StaticClass();
	static class UBTTask_PawnActionBase* GetDefaultObj();

};

// 0x40 (0xB0 - 0x70)
// Class AIModule.BTTask_PlayAnimation
class UBTTask_PlayAnimation : public UBTTaskNode
{
public:
	class UAnimationAsset*                       AnimationToPlay;                                   // 0x70(0x8)(ZeroConstructor)
	uint8                                        bLooping : 1;                                      // Mask: 0x1, PropSize: 0x10x78(0x1)(None)
	uint8                                        bNonBlocking : 1;                                  // Mask: 0x2, PropSize: 0x10x78(0x1)(None)
	uint8                                        BitPad_1F9 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_28CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBehaviorTreeComponent*                MyOwnerComp;                                       // 0x80(0x8)(ZeroConstructor)
	class USkeletalMeshComponent*                CachedSkelMesh;                                    // 0x88(0x8)(ZeroConstructor)
	uint8                                        Pad_28CB[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTTask_PlayAnimation* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_PlaySound
class UBTTask_PlaySound : public UBTTaskNode
{
public:
	class USoundCue*                             SoundToPlay;                                       // 0x70(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBTTask_PlaySound* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_PushPawnAction
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
public:
	class UPawnAction*                           Action;                                            // 0x70(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBTTask_PushPawnAction* GetDefaultObj();

};

// 0x20 (0x90 - 0x70)
// Class AIModule.BTTask_RunBehavior
class UBTTask_RunBehavior : public UBTTaskNode
{
public:
	class UBehaviorTree*                         BehaviorAsset;                                     // 0x70(0x8)(ZeroConstructor)
	class FString                                ControllerProperty;                                // 0x78(0x10)(None)
	class UClass*                                CurrentControllerClass;                            // 0x88(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBTTask_RunBehavior* GetDefaultObj();

};

// 0x18 (0x88 - 0x70)
// Class AIModule.BTTask_RunBehaviorDynamic
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
public:
	struct FGameplayTag                          InjectionTag;                                      // 0x70(0x8)(None)
	class UBehaviorTree*                         DefaultBehaviorAsset;                              // 0x78(0x8)(ZeroConstructor)
	class UBehaviorTree*                         BehaviorAsset;                                     // 0x80(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBTTask_RunBehaviorDynamic* GetDefaultObj();

};

// 0xC0 (0x158 - 0x98)
// Class AIModule.BTTask_RunEQSQuery
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                             QueryTemplate;                                     // 0x98(0x8)(ZeroConstructor)
	TArray<struct FEnvNamedValue>                QueryParams;                                       // 0xA0(0x10)(None)
	TArray<struct FAIDynamicParam>               QueryConfig;                                       // 0xB0(0x10)(ZeroConstructor)
	enum class EEnvQueryRunMode                  RunMode;                                           // 0xC0(0x1)(None)
	uint8                                        Pad_28D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                EQSQueryBlackboardKey;                             // 0xC8(0x28)(ZeroConstructor)
	bool                                         bUseBBKey;                                         // 0xF0(0x1)(None)
	uint8                                        Pad_28D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEQSParametrizedQueryExecutionRequest EQSRequest;                                        // 0xF8(0x48)(ZeroConstructor)
	bool                                         bUpdateBBOnFail;                                   // 0x140(0x1)(None)
	uint8                                        Pad_28D7[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTTask_RunEQSQuery* GetDefaultObj();

};

// 0x10 (0x80 - 0x70)
// Class AIModule.BTTask_SetTagCooldown
class UBTTask_SetTagCooldown : public UBTTaskNode
{
public:
	struct FGameplayTag                          CooldownTag;                                       // 0x70(0x8)(None)
	bool                                         bAddToExistingDuration;                            // 0x78(0x1)(None)
	uint8                                        Pad_28DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CooldownDuration;                                  // 0x7C(0x4)(None)

	static class UClass* StaticClass();
	static class UBTTask_SetTagCooldown* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class AIModule.BTTask_Wait
class UBTTask_Wait : public UBTTaskNode
{
public:
	float                                        WaitTime;                                          // 0x70(0x4)(None)
	float                                        RandomDeviation;                                   // 0x74(0x4)(None)

	static class UClass* StaticClass();
	static class UBTTask_Wait* GetDefaultObj();

};

// 0x28 (0xA0 - 0x78)
// Class AIModule.BTTask_WaitBlackboardTime
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
public:
	struct FBlackboardKeySelector                BlackboardKey;                                     // 0x78(0x28)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UBTTask_WaitBlackboardTime* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.AIBlueprintHelperLibrary
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAIBlueprintHelperLibrary* GetDefaultObj();

	void UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
	void SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail, class AActor* Owner, class APawn* ReturnValue);
	void SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal);
	void SimpleMoveToActor(class AController* Controller, class AActor* Goal);
	void SendAIMessage(class APawn* Target, class FName Message, class UObject* MessageSource, bool bSuccess);
	void LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
	void IsValidAIRotation(const struct FRotator& Rotation, bool ReturnValue);
	void IsValidAILocation(const struct FVector& Location, bool ReturnValue);
	void IsValidAIDirection(const struct FVector& DirectionVector, bool ReturnValue);
	void GetNextNavLinkIndex(class AController* Controller, int32 ReturnValue);
	void GetCurrentPathPoints(class AController* Controller, const TArray<struct FVector>& ReturnValue);
	void GetCurrentPathIndex(class AController* Controller, int32 ReturnValue);
	void GetCurrentPath(class AController* Controller, class UNavigationPath* ReturnValue);
	void GetBlackboard(class AActor* Target, class UBlackboardComponent* ReturnValue);
	void GetAIController(class AActor* ControlledActor, class AAIController* ReturnValue);
	void CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap, class UAIAsyncTaskBlueprintProxy* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AIModule.AIDataProvider
class UAIDataProvider : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAIDataProvider* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class AIModule.AIDataProvider_QueryParams
class UAIDataProvider_QueryParams : public UAIDataProvider
{
public:
	class FName                                  ParamName;                                         // 0x28(0x8)(None)
	float                                        FloatValue;                                        // 0x30(0x4)(None)
	int32                                        IntValue;                                          // 0x34(0x4)(None)
	bool                                         BoolValue;                                         // 0x38(0x1)(None)
	uint8                                        Pad_28F2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIDataProvider_QueryParams* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class AIModule.AIDataProvider_Random
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{
public:
	float                                        Min;                                               // 0x40(0x4)(None)
	float                                        Max;                                               // 0x44(0x4)(None)
	uint8                                        bInteger : 1;                                      // Mask: 0x1, PropSize: 0x10x48(0x1)(None)
	uint8                                        Pad_28F4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIDataProvider_Random* GetDefaultObj();

};

// 0x0 (0x5F0 - 0x5F0)
// Class AIModule.DetourCrowdAIController
class ADetourCrowdAIController : public AAIController
{
public:

	static class UClass* StaticClass();
	static class ADetourCrowdAIController* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.EnvQueryContext
class UEnvQueryContext : public UObject
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AIModule.EnvQueryContext_BlueprintBase
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
public:
	uint8                                        Pad_28F5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryContext_BlueprintBase* GetDefaultObj();

	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, const struct FVector& ResultingLocation);
	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor* ResultingActor);
	void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, const TArray<struct FVector>& ResultingLocationSet);
	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, const TArray<class AActor*>& ResultingActorsSet);
};

// 0x0 (0x28 - 0x28)
// Class AIModule.EnvQueryContext_Item
class UEnvQueryContext_Item : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_Item* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.EnvQueryContext_Querier
class UEnvQueryContext_Querier : public UEnvQueryContext
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_Querier* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class AIModule.EnvQuery
class UEnvQuery : public UDataAsset
{
public:
	class FName                                  QueryName;                                         // 0x30(0x8)(None)
	TArray<class UEnvQueryOption*>               Options;                                           // 0x38(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UEnvQuery* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.EnvQueryDebugHelpers
class UEnvQueryDebugHelpers : public UObject
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryDebugHelpers* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AIModule.EnvQueryNode
class UEnvQueryNode : public UObject
{
public:
	int32                                        VerNum;                                            // 0x28(0x4)(None)
	uint8                                        Pad_28F8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryNode* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class AIModule.EnvQueryGenerator
class UEnvQueryGenerator : public UEnvQueryNode
{
public:
	class FString                                OptionName;                                        // 0x30(0x10)(None)
	class UClass*                                ItemType;                                          // 0x40(0x8)(None)
	uint8                                        bAutoSortTests : 1;                                // Mask: 0x1, PropSize: 0x10x48(0x1)(None)
	uint8                                        Pad_28FC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryGenerator* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class AIModule.EnvQueryInstanceBlueprintWrapper
class UEnvQueryInstanceBlueprintWrapper : public UObject
{
public:
	uint8                                        Pad_2907[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QueryID;                                           // 0x30(0x4)(None)
	uint8                                        Pad_2908[0x24];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ItemType;                                          // 0x58(0x8)(ZeroConstructor)
	int32                                        OptionIndex;                                       // 0x60(0x4)(None)
	uint8                                        Pad_2909[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnQueryFinishedEvent;                              // 0x68(0x10)(None)

	static class UClass* StaticClass();
	static class UEnvQueryInstanceBlueprintWrapper* GetDefaultObj();

	void SetNamedParam(class FName ParamName, float Value);
	void GetResultsAsLocations(const TArray<struct FVector>& ReturnValue);
	void GetResultsAsActors(const TArray<class AActor*>& ReturnValue);
	void GetQueryResultsAsLocations(const TArray<struct FVector>& ResultLocations, bool ReturnValue);
	void GetQueryResultsAsActors(const TArray<class AActor*>& ResultActors, bool ReturnValue);
	void GetItemScore(int32 ItemIndex, float ReturnValue);
	void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
};

// 0x120 (0x158 - 0x38)
// Class AIModule.EnvQueryManager
class UEnvQueryManager : public UAISubsystem
{
public:
	uint8                                        Pad_290B[0x70];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEnvQueryInstanceCache>        InstanceCache;                                     // 0xA8(0x10)(ZeroConstructor)
	TArray<class UEnvQueryContext*>              LocalContexts;                                     // 0xB8(0x10)(ZeroConstructor)
	TArray<class UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers;                                // 0xC8(0x10)(ZeroConstructor)
	uint8                                        Pad_290C[0x54];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxAllowedTestingTime;                             // 0x12C(0x4)(None)
	bool                                         bTestQueriesUsingBreadth;                          // 0x130(0x1)(None)
	uint8                                        Pad_290D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QueryCountWarningThreshold;                        // 0x134(0x4)(None)
	double                                       QueryCountWarningInterval;                         // 0x138(0x8)(None)
	double                                       ExecutionTimeWarningSeconds;                       // 0x140(0x8)(None)
	double                                       HandlingResultTimeWarningSeconds;                  // 0x148(0x8)(None)
	double                                       GenerationTimeWarningSeconds;                      // 0x150(0x8)(None)

	static class UClass* StaticClass();
	static class UEnvQueryManager* GetDefaultObj();

	void RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, enum class EEnvQueryRunMode RunMode, class UClass* WrapperClass, class UEnvQueryInstanceBlueprintWrapper* ReturnValue);
};

// 0x18 (0x40 - 0x28)
// Class AIModule.EnvQueryOption
class UEnvQueryOption : public UObject
{
public:
	class UEnvQueryGenerator*                    Generator;                                         // 0x28(0x8)(ZeroConstructor)
	TArray<class UEnvQueryTest*>                 Tests;                                             // 0x30(0x10)(None)

	static class UClass* StaticClass();
	static class UEnvQueryOption* GetDefaultObj();

};

// 0x1C8 (0x1F8 - 0x30)
// Class AIModule.EnvQueryTest
class UEnvQueryTest : public UEnvQueryNode
{
public:
	int32                                        TestOrder;                                         // 0x30(0x4)(None)
	enum class EEnvTestPurpose                   TestPurpose;                                       // 0x34(0x1)(None)
	uint8                                        Pad_290F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TestComment;                                       // 0x38(0x10)(None)
	enum class EEnvTestFilterOperator            MultipleContextFilterOp;                           // 0x48(0x1)(None)
	enum class EEnvTestScoreOperator             MultipleContextScoreOp;                            // 0x49(0x1)(None)
	enum class EEnvTestFilterType                FilterType;                                        // 0x4A(0x1)(None)
	uint8                                        Pad_2910[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIDataProviderBoolValue              BoolValue;                                         // 0x50(0x38)(ZeroConstructor)
	struct FAIDataProviderFloatValue             FloatValueMin;                                     // 0x88(0x38)(ZeroConstructor)
	struct FAIDataProviderFloatValue             FloatValueMax;                                     // 0xC0(0x38)(ZeroConstructor)
	uint8                                        Pad_2911[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EEnvTestScoreEquation             ScoringEquation;                                   // 0xF9(0x1)(None)
	enum class EEnvQueryTestClamping             ClampMinType;                                      // 0xFA(0x1)(None)
	enum class EEnvQueryTestClamping             ClampMaxType;                                      // 0xFB(0x1)(None)
	enum class EEQSNormalizationType             NormalizationType;                                 // 0xFC(0x1)(None)
	uint8                                        Pad_2912[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIDataProviderFloatValue             ScoreClampMin;                                     // 0x100(0x38)(ZeroConstructor)
	struct FAIDataProviderFloatValue             ScoreClampMax;                                     // 0x138(0x38)(ZeroConstructor)
	struct FAIDataProviderFloatValue             ScoringFactor;                                     // 0x170(0x38)(ZeroConstructor)
	struct FAIDataProviderFloatValue             ReferenceValue;                                    // 0x1A8(0x38)(None)
	bool                                         bDefineReferenceValue;                             // 0x1E0(0x1)(None)
	uint8                                        Pad_2913[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bWorkOnFloatValues : 1;                            // Mask: 0x1, PropSize: 0x10x1F0(0x1)(None)
	uint8                                        Pad_2919[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryTest* GetDefaultObj();

};

// 0x40 (0x710 - 0x6D0)
// Class AIModule.EQSRenderingComponent
class UEQSRenderingComponent : public UDebugDrawComponent
{
public:
	uint8                                        Pad_291D[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEQSRenderingComponent* GetDefaultObj();

};

// 0xA0 (0x950 - 0x8B0)
// Class AIModule.EQSTestingPawn
class AEQSTestingPawn : public ACharacter
{
public:
	class UEnvQuery*                             QueryTemplate;                                     // 0x8B0(0x8)(ZeroConstructor)
	TArray<struct FEnvNamedValue>                QueryParams;                                       // 0x8B8(0x10)(None)
	TArray<struct FAIDynamicParam>               QueryConfig;                                       // 0x8C8(0x10)(ZeroConstructor)
	float                                        TimeLimitPerStep;                                  // 0x8D8(0x4)(None)
	int32                                        StepToDebugDraw;                                   // 0x8DC(0x4)(None)
	enum class EEnvQueryHightlightMode           HighlightMode;                                     // 0x8E0(0x1)(None)
	uint8                                        Pad_291E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bDrawLabels : 1;                                   // Mask: 0x1, PropSize: 0x10x8E4(0x1)(None)
	uint8                                        bDrawFailedItems : 1;                              // Mask: 0x2, PropSize: 0x10x8E4(0x1)(None)
	uint8                                        bReRunQueryOnlyOnFinishedMove : 1;                 // Mask: 0x4, PropSize: 0x10x8E4(0x1)(None)
	uint8                                        bShouldBeVisibleInGame : 1;                        // Mask: 0x8, PropSize: 0x10x8E4(0x1)(None)
	uint8                                        bTickDuringGame : 1;                               // Mask: 0x10, PropSize: 0x10x8E4(0x1)(None)
	uint8                                        BitPad_1FB : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2920[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EEnvQueryRunMode                  QueryingMode;                                      // 0x8E8(0x1)(None)
	uint8                                        Pad_2922[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNavAgentProperties                   NavAgentProperties;                                // 0x8F0(0x38)(None)
	uint8                                        Pad_2923[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AEQSTestingPawn* GetDefaultObj();

};

// 0x80 (0xD0 - 0x50)
// Class AIModule.EnvQueryGenerator_ActorsOfClass
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:
	class UClass*                                SearchedActorClass;                                // 0x50(0x8)(ZeroConstructor)
	struct FAIDataProviderBoolValue              GenerateOnlyActorsInRadius;                        // 0x58(0x38)(ZeroConstructor)
	struct FAIDataProviderFloatValue             SearchRadius;                                      // 0x90(0x38)(ZeroConstructor)
	class UClass*                                SearchCenter;                                      // 0xC8(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_ActorsOfClass* GetDefaultObj();

};

// 0x38 (0x88 - 0x50)
// Class AIModule.EnvQueryGenerator_BlueprintBase
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
public:
	class FText                                  GeneratorsActionDescription;                       // 0x50(0x18)(None)
	class UClass*                                Context;                                           // 0x68(0x8)(ZeroConstructor)
	class UClass*                                GeneratedItemType;                                 // 0x70(0x8)(ZeroConstructor)
	uint8                                        Pad_292A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_BlueprintBase* GetDefaultObj();

	void GetQuerier(class UObject* ReturnValue);
	void DoItemGenerationFromActors(const TArray<class AActor*>& ContextActors);
	void DoItemGeneration(const TArray<struct FVector>& ContextLocations);
	void AddGeneratedVector(const struct FVector& GeneratedVector);
	void AddGeneratedActor(class AActor* GeneratedActor);
};

// 0x20 (0x70 - 0x50)
// Class AIModule.EnvQueryGenerator_Composite
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
public:
	TArray<class UEnvQueryGenerator*>            Generators;                                        // 0x50(0x10)(ZeroConstructor)
	uint8                                        bAllowDifferentItemTypes : 1;                      // Mask: 0x1, PropSize: 0x10x60(0x1)(None)
	uint8                                        bHasMatchingItemType : 1;                          // Mask: 0x2, PropSize: 0x10x60(0x1)(None)
	uint8                                        BitPad_1FC : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_292C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ForcedItemType;                                    // 0x68(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_Composite* GetDefaultObj();

};

// 0x40 (0x90 - 0x50)
// Class AIModule.EnvQueryGenerator_ProjectedPoints
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
	struct FEnvTraceData                         ProjectionData;                                    // 0x50(0x40)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_ProjectedPoints* GetDefaultObj();

};

// 0xF0 (0x180 - 0x90)
// Class AIModule.EnvQueryGenerator_Cone
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             AlignedPointsDistance;                             // 0x90(0x38)(ZeroConstructor)
	struct FAIDataProviderFloatValue             ConeDegrees;                                       // 0xC8(0x38)(ZeroConstructor)
	struct FAIDataProviderFloatValue             AngleStep;                                         // 0x100(0x38)(ZeroConstructor)
	struct FAIDataProviderFloatValue             Range;                                             // 0x138(0x38)(ZeroConstructor)
	class UClass*                                CenterActor;                                       // 0x170(0x8)(ZeroConstructor)
	uint8                                        bIncludeContextLocation : 1;                       // Mask: 0x1, PropSize: 0x10x178(0x1)(None)
	uint8                                        Pad_292F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_Cone* GetDefaultObj();

};

// 0x8 (0x58 - 0x50)
// Class AIModule.EnvQueryGenerator_CurrentLocation
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
public:
	class UClass*                                QueryContext;                                      // 0x50(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_CurrentLocation* GetDefaultObj();

};

// 0x150 (0x1E0 - 0x90)
// Class AIModule.EnvQueryGenerator_Donut
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             InnerRadius;                                       // 0x90(0x38)(ZeroConstructor)
	struct FAIDataProviderFloatValue             OuterRadius;                                       // 0xC8(0x38)(ZeroConstructor)
	struct FAIDataProviderIntValue               NumberOfRings;                                     // 0x100(0x38)(ZeroConstructor)
	struct FAIDataProviderIntValue               PointsPerRing;                                     // 0x138(0x38)(ZeroConstructor)
	struct FEnvDirection                         ArcDirection;                                      // 0x170(0x20)(ZeroConstructor)
	struct FAIDataProviderFloatValue             ArcAngle;                                          // 0x190(0x38)(ZeroConstructor)
	bool                                         bUseSpiralPattern;                                 // 0x1C8(0x1)(None)
	uint8                                        Pad_293A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Center;                                            // 0x1D0(0x8)(ZeroConstructor)
	uint8                                        bDefineArc : 1;                                    // Mask: 0x1, PropSize: 0x10x1D8(0x1)(None)
	uint8                                        Pad_293B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_Donut* GetDefaultObj();

};

// 0x1A0 (0x230 - 0x90)
// Class AIModule.EnvQueryGenerator_OnCircle
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             CircleRadius;                                      // 0x90(0x38)(ZeroConstructor)
	struct FAIDataProviderFloatValue             SpaceBetween;                                      // 0xC8(0x38)(ZeroConstructor)
	struct FAIDataProviderIntValue               NumberOfPoints;                                    // 0x100(0x38)(ZeroConstructor)
	enum class EPointOnCircleSpacingMethod       PointOnCircleSpacingMethod;                        // 0x138(0x1)(None)
	uint8                                        Pad_293E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvDirection                         ArcDirection;                                      // 0x140(0x20)(ZeroConstructor)
	struct FAIDataProviderFloatValue             ArcAngle;                                          // 0x160(0x38)(ZeroConstructor)
	float                                        AngleRadians;                                      // 0x198(0x4)(None)
	uint8                                        Pad_293F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CircleCenter;                                      // 0x1A0(0x8)(ZeroConstructor)
	bool                                         bIgnoreAnyContextActorsWhenGeneratingCircle;       // 0x1A8(0x1)(None)
	uint8                                        Pad_2940[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIDataProviderFloatValue             CircleCenterZOffset;                               // 0x1B0(0x38)(ZeroConstructor)
	struct FEnvTraceData                         TraceData;                                         // 0x1E8(0x40)(ZeroConstructor)
	uint8                                        bDefineArc : 1;                                    // Mask: 0x1, PropSize: 0x10x228(0x1)(None)
	uint8                                        Pad_2941[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_OnCircle* GetDefaultObj();

};

// 0x78 (0x108 - 0x90)
// Class AIModule.EnvQueryGenerator_SimpleGrid
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue             GridSize;                                          // 0x90(0x38)(ZeroConstructor)
	struct FAIDataProviderFloatValue             SpaceBetween;                                      // 0xC8(0x38)(ZeroConstructor)
	class UClass*                                GenerateAround;                                    // 0x100(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_SimpleGrid* GetDefaultObj();

};

// 0x78 (0x180 - 0x108)
// Class AIModule.EnvQueryGenerator_PathingGrid
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
public:
	struct FAIDataProviderBoolValue              PathToItem;                                        // 0x108(0x38)(ZeroConstructor)
	class UClass*                                NavigationFilter;                                  // 0x140(0x8)(ZeroConstructor)
	struct FAIDataProviderFloatValue             ScanRangeMultiplier;                               // 0x148(0x38)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_PathingGrid* GetDefaultObj();

};

// 0x58 (0xA8 - 0x50)
// Class AIModule.EnvQueryGenerator_PerceivedActors
class UEnvQueryGenerator_PerceivedActors : public UEnvQueryGenerator
{
public:
	class UClass*                                AllowedActorClass;                                 // 0x50(0x8)(ZeroConstructor)
	struct FAIDataProviderFloatValue             SearchRadius;                                      // 0x58(0x38)(ZeroConstructor)
	class UClass*                                ListenerContext;                                   // 0x90(0x8)(ZeroConstructor)
	class UClass*                                SenseToUse;                                        // 0x98(0x8)(ZeroConstructor)
	bool                                         bIncludeKnownActors;                               // 0xA0(0x1)(None)
	uint8                                        Pad_294B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryGenerator_PerceivedActors* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class AIModule.EnvQueryItemType
class UEnvQueryItemType : public UObject
{
public:
	uint8                                        Pad_294C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryItemType* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.EnvQueryItemType_VectorBase
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryItemType_VectorBase* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.EnvQueryItemType_ActorBase
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryItemType_ActorBase* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.EnvQueryItemType_Actor
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryItemType_Actor* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.EnvQueryItemType_Direction
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryItemType_Direction* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class AIModule.EnvQueryItemType_Point
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryItemType_Point* GetDefaultObj();

};

// 0x10 (0x208 - 0x1F8)
// Class AIModule.EnvQueryTest_Distance
class UEnvQueryTest_Distance : public UEnvQueryTest
{
public:
	enum class EEnvTestDistance                  TestMode;                                          // 0x1F8(0x1)(None)
	uint8                                        Pad_2958[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DistanceTo;                                        // 0x200(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UEnvQueryTest_Distance* GetDefaultObj();

};

// 0x48 (0x240 - 0x1F8)
// Class AIModule.EnvQueryTest_Dot
class UEnvQueryTest_Dot : public UEnvQueryTest
{
public:
	struct FEnvDirection                         LineA;                                             // 0x1F8(0x20)(ZeroConstructor)
	struct FEnvDirection                         LineB;                                             // 0x218(0x20)(ZeroConstructor)
	enum class EEnvTestDot                       TestMode;                                          // 0x238(0x1)(None)
	bool                                         bAbsoluteValue;                                    // 0x239(0x1)(None)
	uint8                                        Pad_2959[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryTest_Dot* GetDefaultObj();

};

// 0x70 (0x268 - 0x1F8)
// Class AIModule.EnvQueryTest_GameplayTags
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                     TagQueryToMatch;                                   // 0x1F8(0x48)(None)
	bool                                         bRejectIncompatibleItems;                          // 0x240(0x1)(None)
	bool                                         bUpdatedToUseQuery;                                // 0x241(0x1)(None)
	enum class EGameplayContainerMatchType       TagsToMatch;                                       // 0x242(0x1)(None)
	uint8                                        Pad_295A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x248(0x20)(None)

	static class UClass* StaticClass();
	static class UEnvQueryTest_GameplayTags* GetDefaultObj();

};

// 0x30 (0x228 - 0x1F8)
// Class AIModule.EnvQueryTest_Overlap
class UEnvQueryTest_Overlap : public UEnvQueryTest
{
public:
	struct FEnvOverlapData                       OverlapData;                                       // 0x1F8(0x30)(None)

	static class UClass* StaticClass();
	static class UEnvQueryTest_Overlap* GetDefaultObj();

};

// 0x88 (0x280 - 0x1F8)
// Class AIModule.EnvQueryTest_Pathfinding
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
	enum class EEnvTestPathfinding               TestMode;                                          // 0x1F8(0x1)(None)
	uint8                                        Pad_295D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Context;                                           // 0x200(0x8)(ZeroConstructor)
	struct FAIDataProviderBoolValue              PathFromContext;                                   // 0x208(0x38)(ZeroConstructor)
	struct FAIDataProviderBoolValue              SkipUnreachable;                                   // 0x240(0x38)(ZeroConstructor)
	class UClass*                                FilterClass;                                       // 0x278(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UEnvQueryTest_Pathfinding* GetDefaultObj();

};

// 0x38 (0x2B8 - 0x280)
// Class AIModule.EnvQueryTest_PathfindingBatch
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
public:
	struct FAIDataProviderFloatValue             ScanRangeMultiplier;                               // 0x280(0x38)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UEnvQueryTest_PathfindingBatch* GetDefaultObj();

};

// 0x40 (0x238 - 0x1F8)
// Class AIModule.EnvQueryTest_Project
class UEnvQueryTest_Project : public UEnvQueryTest
{
public:
	struct FEnvTraceData                         ProjectionData;                                    // 0x1F8(0x40)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UEnvQueryTest_Project* GetDefaultObj();

};

// 0x0 (0x1F8 - 0x1F8)
// Class AIModule.EnvQueryTest_Random
class UEnvQueryTest_Random : public UEnvQueryTest
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryTest_Random* GetDefaultObj();

};

// 0xF0 (0x2E8 - 0x1F8)
// Class AIModule.EnvQueryTest_Trace
class UEnvQueryTest_Trace : public UEnvQueryTest
{
public:
	struct FEnvTraceData                         TraceData;                                         // 0x1F8(0x40)(ZeroConstructor)
	struct FAIDataProviderBoolValue              TraceFromContext;                                  // 0x238(0x38)(ZeroConstructor)
	struct FAIDataProviderFloatValue             ItemHeightOffset;                                  // 0x270(0x38)(ZeroConstructor)
	struct FAIDataProviderFloatValue             ContextHeightOffset;                               // 0x2A8(0x38)(ZeroConstructor)
	class UClass*                                Context;                                           // 0x2E0(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UEnvQueryTest_Trace* GetDefaultObj();

};

// 0x18 (0x210 - 0x1F8)
// Class AIModule.EnvQueryTest_Volume
class UEnvQueryTest_Volume : public UEnvQueryTest
{
public:
	class UClass*                                VolumeContext;                                     // 0x1F8(0x8)(ZeroConstructor)
	class UClass*                                VolumeClass;                                       // 0x200(0x8)(ZeroConstructor)
	uint8                                        bDoComplexVolumeTest : 1;                          // Mask: 0x1, PropSize: 0x10x208(0x1)(None)
	uint8                                        Pad_2966[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryTest_Volume* GetDefaultObj();

};

// 0x0 (0x5F0 - 0x5F0)
// Class AIModule.GridPathAIController
class AGridPathAIController : public AAIController
{
public:

	static class UClass* StaticClass();
	static class AGridPathAIController* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AIModule.AIHotSpotManager
class UAIHotSpotManager : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAIHotSpotManager* GetDefaultObj();

};

// 0x50 (0x330 - 0x2E0)
// Class AIModule.CrowdFollowingComponent
class UCrowdFollowingComponent : public UPathFollowingComponent
{
public:
	uint8                                        Pad_296C[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CrowdAgentMoveDirection;                           // 0x2F8(0x18)(None)
	uint8                                        Pad_296D[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrowdFollowingComponent* GetDefaultObj();

	void SuspendCrowdSteering(bool bSuspend);
};

// 0xC8 (0xF0 - 0x28)
// Class AIModule.CrowdManager
class UCrowdManager : public UCrowdManagerBase
{
public:
	class ANavigationData*                       MyNavData;                                         // 0x28(0x8)(None)
	TArray<struct FCrowdAvoidanceConfig>         AvoidanceConfig;                                   // 0x30(0x10)(None)
	TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns;                                  // 0x40(0x10)(None)
	int32                                        MaxAgents;                                         // 0x50(0x4)(None)
	float                                        MaxAgentRadius;                                    // 0x54(0x4)(None)
	int32                                        MaxAvoidedAgents;                                  // 0x58(0x4)(None)
	int32                                        MaxAvoidedWalls;                                   // 0x5C(0x4)(None)
	float                                        NavmeshCheckInterval;                              // 0x60(0x4)(None)
	float                                        PathOptimizationInterval;                          // 0x64(0x4)(None)
	float                                        SeparationDirClamp;                                // 0x68(0x4)(None)
	float                                        PathOffsetRadiusMultiplier;                        // 0x6C(0x4)(None)
	uint8                                        BitPad_1FF : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bResolveCollisions : 1;                            // Mask: 0x10, PropSize: 0x10x70(0x1)(None)
	uint8                                        Pad_2972[0x7F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCrowdManager* GetDefaultObj();

};

// 0x30 (0x310 - 0x2E0)
// Class AIModule.GridPathFollowingComponent
class UGridPathFollowingComponent : public UPathFollowingComponent
{
public:
	class UNavLocalGridManager*                  GridManager;                                       // 0x2E0(0x8)(ZeroConstructor)
	uint8                                        Pad_2976[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGridPathFollowingComponent* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class AIModule.NavFilter_AIControllerDefault
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{
public:

	static class UClass* StaticClass();
	static class UNavFilter_AIControllerDefault* GetDefaultObj();

};

// 0x50 (0x508 - 0x4B8)
// Class AIModule.NavLinkProxy
class ANavLinkProxy : public AActor
{
public:
	uint8                                        Pad_2982[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNavigationLink>               PointLinks;                                        // 0x4C8(0x10)(ZeroConstructor)
	TArray<struct FNavigationSegmentLink>        SegmentLinks;                                      // 0x4D8(0x10)(ZeroConstructor)
	class UNavLinkCustomComponent*               SmartLinkComp;                                     // 0x4E8(0x8)(ZeroConstructor)
	bool                                         bSmartLinkIsRelevant;                              // 0x4F0(0x1)(None)
	uint8                                        Pad_2983[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSmartLinkReached;                                // 0x4F8(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class ANavLinkProxy* GetDefaultObj();

	void SetSmartLinkEnabled(bool bEnabled);
	void ResumePathFollowing(class AActor* Agent);
	void ReceiveSmartLinkReached(class AActor* Agent, const struct FVector& Destination);
	void IsSmartLinkEnabled(bool ReturnValue);
	void HasMovingAgents(bool ReturnValue);
};

// 0x30 (0x58 - 0x28)
// Class AIModule.NavLocalGridManager
class UNavLocalGridManager : public UObject
{
public:
	uint8                                        Pad_299F[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNavLocalGridManager* GetDefaultObj();

	void SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize, bool ReturnValue);
	void RemoveLocalNavigationGrid(class UObject* WorldContextObject, int32 GridId, bool bRebuildGrids);
	void FindLocalNavigationGridPath(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const TArray<struct FVector>& PathPoints, bool ReturnValue);
	void AddLocalNavigationGridForPoints(class UObject* WorldContextObject, const TArray<struct FVector>& Locations, int32 Radius2D, float Height, bool bRebuildGrids, int32 ReturnValue);
	void AddLocalNavigationGridForPoint(class UObject* WorldContextObject, const struct FVector& Location, int32 Radius2D, float Height, bool bRebuildGrids, int32 ReturnValue);
	void AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32 Radius2D, float Height, bool bRebuildGrids, int32 ReturnValue);
	void AddLocalNavigationGridForBox(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int32 Radius2D, float Height, bool bRebuildGrids, int32 ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AIModule.PathFollowingManager
class UPathFollowingManager : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPathFollowingManager* GetDefaultObj();

};

// 0xF0 (0x1A8 - 0xB8)
// Class AIModule.AIPerceptionComponent
class UAIPerceptionComponent : public UActorComponent
{
public:
	TArray<class UAISenseConfig*>                SensesConfig;                                      // 0xB8(0x10)(ZeroConstructor)
	class UClass*                                DominantSense;                                     // 0xC8(0x8)(ZeroConstructor)
	uint8                                        Pad_29A7[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AAIController*                         AIOwner;                                           // 0xE0(0x8)(ZeroConstructor)
	uint8                                        Pad_29A8[0x80];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPerceptionUpdated;                               // 0x168(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnTargetPerceptionForgotten;                       // 0x178(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnTargetPerceptionUpdated;                         // 0x188(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnTargetPerceptionInfoUpdated;                     // 0x198(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UAIPerceptionComponent* GetDefaultObj();

	void SetSenseEnabled(class UClass* SenseClass, bool bEnable);
	void RequestStimuliListenerUpdate();
	void OnOwnerEndPlay(class AActor* Actor, enum class EEndPlayReason EndPlayReason);
	void GetPerceivedHostileActorsBySense(class UClass* SenseToUse, const TArray<class AActor*>& OutActors);
	void GetPerceivedHostileActors(const TArray<class AActor*>& OutActors);
	void GetPerceivedActors(class UClass* SenseToUse, const TArray<class AActor*>& OutActors);
	void GetKnownPerceivedActors(class UClass* SenseToUse, const TArray<class AActor*>& OutActors);
	void GetCurrentlyPerceivedActors(class UClass* SenseToUse, const TArray<class AActor*>& OutActors);
	void GetActorsPerception(class AActor* Actor, const struct FActorPerceptionBlueprintInfo& Info, bool ReturnValue);
	void ForgetAll();
};

// 0x0 (0x28 - 0x28)
// Class AIModule.AIPerceptionListenerInterface
class IAIPerceptionListenerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAIPerceptionListenerInterface* GetDefaultObj();

};

// 0x18 (0xD0 - 0xB8)
// Class AIModule.AIPerceptionStimuliSourceComponent
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
	uint8                                        bAutoRegisterAsSource : 1;                         // Mask: 0x1, PropSize: 0x10xB8(0x1)(None)
	uint8                                        BitPad_205 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_29A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        RegisterAsSourceForSenses;                         // 0xC0(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UAIPerceptionStimuliSourceComponent* GetDefaultObj();

	void UnregisterFromSense(class UClass* SenseClass);
	void UnregisterFromPerceptionSystem();
	void RegisterWithPerceptionSystem();
	void RegisterForSense(class UClass* SenseClass);
};

// 0x100 (0x138 - 0x38)
// Class AIModule.AIPerceptionSystem
class UAIPerceptionSystem : public UAISubsystem
{
public:
	uint8                                        Pad_29AE[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAISense*>                      Senses;                                            // 0x88(0x10)(ZeroConstructor)
	float                                        PerceptionAgingRate;                               // 0x98(0x4)(None)
	uint8                                        Pad_29AF[0x9C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAIPerceptionSystem* GetDefaultObj();

	void ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent);
	void ReportEvent(class UAISenseEvent* PerceptionEvent);
	void RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AActor* Target, bool ReturnValue);
	void OnPerceptionStimuliSourceEndPlay(class AActor* Actor, enum class EEndPlayReason EndPlayReason);
	void GetSenseClassForStimulus(class UObject* WorldContextObject, const struct FAIStimulus& Stimulus, class UClass* ReturnValue);
};

// 0x58 (0x80 - 0x28)
// Class AIModule.AISense
class UAISense : public UObject
{
public:
	float                                        DefaultExpirationAge;                              // 0x28(0x4)(None)
	enum class EAISenseNotifyType                NotifyType;                                        // 0x2C(0x1)(None)
	uint8                                        Pad_29B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bWantsNewPawnNotification : 1;                     // Mask: 0x1, PropSize: 0x10x30(0x1)(None)
	uint8                                        bAutoRegisterAllPawnsAsSources : 1;                // Mask: 0x2, PropSize: 0x10x30(0x1)(None)
	uint8                                        BitPad_206 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_29B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAIPerceptionSystem*                   PerceptionSystemInstance;                          // 0x38(0x8)(None)
	uint8                                        Pad_29B3[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAISense* GetDefaultObj();

};

// 0x8 (0x50 - 0x48)
// Class AIModule.AISenseConfig_Damage
class UAISenseConfig_Damage : public UAISenseConfig
{
public:
	class UClass*                                Implementation;                                    // 0x48(0x8)(None)

	static class UClass* StaticClass();
	static class UAISenseConfig_Damage* GetDefaultObj();

};

// 0x28 (0xA8 - 0x80)
// Class AIModule.AISense_Blueprint
class UAISense_Blueprint : public UAISense
{
public:
	class UClass*                                ListenerDataType;                                  // 0x80(0x8)(ZeroConstructor)
	TArray<class UAIPerceptionComponent*>        ListenerContainer;                                 // 0x88(0x10)(ZeroConstructor)
	TArray<class UAISenseEvent*>                 UnprocessedEvents;                                 // 0x98(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UAISense_Blueprint* GetDefaultObj();

	void OnUpdate(const TArray<class UAISenseEvent*>& EventsToProcess, float ReturnValue);
	void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void K2_OnNewPawn(class APawn* NewPawn);
	void GetAllListenerComponents(const TArray<class UAIPerceptionComponent*>& ListenerComponents);
	void GetAllListenerActors(const TArray<class AActor*>& ListenerActors);
};

// 0x10 (0x90 - 0x80)
// Class AIModule.AISense_Damage
class UAISense_Damage : public UAISense
{
public:
	TArray<struct FAIDamageEvent>                RegisteredEvents;                                  // 0x80(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UAISense_Damage* GetDefaultObj();

	void ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation, class FName Tag);
};

// 0x68 (0xE8 - 0x80)
// Class AIModule.AISense_Hearing
class UAISense_Hearing : public UAISense
{
public:
	TArray<struct FAINoiseEvent>                 NoiseEvents;                                       // 0x80(0x10)(ZeroConstructor)
	float                                        SpeedOfSoundSq;                                    // 0x90(0x4)(None)
	uint8                                        Pad_29D2[0x54];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAISense_Hearing* GetDefaultObj();

	void ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, class FName Tag);
};

// 0x10 (0x90 - 0x80)
// Class AIModule.AISense_Prediction
class UAISense_Prediction : public UAISense
{
public:
	TArray<struct FAIPredictionEvent>            RegisteredEvents;                                  // 0x80(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UAISense_Prediction* GetDefaultObj();

	void RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);
	void RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime);
};

// 0x130 (0x1B0 - 0x80)
// Class AIModule.AISense_Sight
class UAISense_Sight : public UAISense
{
public:
	uint8                                        Pad_29DD[0xD8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxTracesPerTick;                                  // 0x158(0x4)(None)
	int32                                        MaxAsyncTracesPerTick;                             // 0x15C(0x4)(None)
	int32                                        MinQueriesPerTimeSliceCheck;                       // 0x160(0x4)(None)
	uint8                                        Pad_29DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MaxTimeSlicePerTick;                               // 0x168(0x8)(None)
	float                                        HighImportanceQueryDistanceThreshold;              // 0x170(0x4)(None)
	uint8                                        Pad_29DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxQueryImportance;                                // 0x178(0x4)(None)
	float                                        SightLimitQueryImportance;                         // 0x17C(0x4)(None)
	float                                        PendingQueriesBudgetReductionRatio;                // 0x180(0x4)(None)
	bool                                         bUseAsynchronousTraceForDefaultSightQueries;       // 0x184(0x1)(None)
	uint8                                        Pad_29E0[0x2B];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAISense_Sight* GetDefaultObj();

};

// 0x10 (0x90 - 0x80)
// Class AIModule.AISense_Team
class UAISense_Team : public UAISense
{
public:
	TArray<struct FAITeamStimulusEvent>          RegisteredEvents;                                  // 0x80(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UAISense_Team* GetDefaultObj();

};

// 0x10 (0x90 - 0x80)
// Class AIModule.AISense_Touch
class UAISense_Touch : public UAISense
{
public:
	TArray<struct FAITouchEvent>                 RegisteredEvents;                                  // 0x80(0x10)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UAISense_Touch* GetDefaultObj();

	void ReportTouchEvent(class UObject* WorldContextObject, class AActor* TouchReceiver, class AActor* OtherActor, const struct FVector& Location);
};

// 0x0 (0x28 - 0x28)
// Class AIModule.AISightTargetInterface
class IAISightTargetInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAISightTargetInterface* GetDefaultObj();

};

// 0x48 (0x100 - 0xB8)
// Class AIModule.PawnSensingComponent
class UPawnSensingComponent : public UActorComponent
{
public:
	float                                        HearingThreshold;                                  // 0xB8(0x4)(None)
	float                                        LOSHearingThreshold;                               // 0xBC(0x4)(None)
	float                                        SightRadius;                                       // 0xC0(0x4)(None)
	float                                        SensingInterval;                                   // 0xC4(0x4)(None)
	float                                        HearingMaxSoundAge;                                // 0xC8(0x4)(None)
	uint8                                        bEnableSensingUpdates : 1;                         // Mask: 0x1, PropSize: 0x10xCC(0x1)(None)
	uint8                                        bOnlySensePlayers : 1;                             // Mask: 0x2, PropSize: 0x10xCC(0x1)(None)
	uint8                                        bSeePawns : 1;                                     // Mask: 0x4, PropSize: 0x10xCC(0x1)(None)
	uint8                                        bHearNoises : 1;                                   // Mask: 0x8, PropSize: 0x10xCC(0x1)(None)
	uint8                                        BitPad_207 : 4;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_29F4[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSeePawn;                                         // 0xD8(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnHearNoise;                                       // 0xE8(0x10)(ZeroConstructor)
	float                                        PeripheralVisionAngle;                             // 0xF8(0x4)(None)
	float                                        PeripheralVisionCosine;                            // 0xFC(0x4)(None)

	static class UClass* StaticClass();
	static class UPawnSensingComponent* GetDefaultObj();

	void SetSensingUpdatesEnabled(bool bEnabled);
	void SetSensingInterval(float NewSensingInterval);
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
	void SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume);
	void GetPeripheralVisionCosine(float ReturnValue);
	void GetPeripheralVisionAngle(float ReturnValue);
};

// 0x8 (0x70 - 0x68)
// Class AIModule.AITask
class UAITask : public UGameplayTask
{
public:
	class AAIController*                         OwnerController;                                   // 0x68(0x8)(ZeroConstructor)

	static class UClass* StaticClass();
	static class UAITask* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class AIModule.AITask_LockLogic
class UAITask_LockLogic : public UAITask
{
public:

	static class UClass* StaticClass();
	static class UAITask_LockLogic* GetDefaultObj();

};

// 0xB0 (0x120 - 0x70)
// Class AIModule.AITask_MoveTo
class UAITask_MoveTo : public UAITask
{
public:
	FMulticastInlineDelegateProperty_            OnRequestFailed;                                   // 0x70(0x10)(ZeroConstructor)
	FMulticastInlineDelegateProperty_            OnMoveFinished;                                    // 0x80(0x10)(ZeroConstructor)
	struct FAIMoveRequest                        MoveRequest;                                       // 0x90(0x50)(ZeroConstructor)
	uint8                                        Pad_2A0F[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAITask_MoveTo* GetDefaultObj();

	void AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, enum class EAIOptionFlag StopOnOverlap, enum class EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuousGoalTracking, enum class EAIOptionFlag ProjectGoalOnNavigation, class UAITask_MoveTo* ReturnValue);
};

// 0x78 (0xE8 - 0x70)
// Class AIModule.AITask_RunEQS
class UAITask_RunEQS : public UAITask
{
public:
	uint8                                        Pad_2A11[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAITask_RunEQS* GetDefaultObj();

	void RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate, class UAITask_RunEQS* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AIModule.VisualLoggerExtension
class UVisualLoggerExtension : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVisualLoggerExtension* GetDefaultObj();

};

}


