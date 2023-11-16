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

// 0x18 (0x18 - 0x0)
// Function AIModule.AIController.UseBlackboard
struct AAIController_UseBlackboard_Params
{
public:
	class UBlackboardData*                       BlackboardAsset;                                   // 0x0(0x8)(ZeroConstructor)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_2736[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIController.UnclaimTaskResource
struct AAIController_UnclaimTaskResource_Params
{
public:
	class UClass*                                ResourceClass;                                     // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIController.SetPathFollowingComponent
struct AAIController_SetPathFollowingComponent_Params
{
public:
	class UPathFollowingComponent*               NewPFComponent;                                    // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.AIController.SetMoveBlockDetection
struct AAIController_SetMoveBlockDetection_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIController.RunBehaviorTree
struct AAIController_RunBehaviorTree_Params
{
public:
	class UBehaviorTree*                         BTAsset;                                           // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_273D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIController.OnUsingBlackBoard
struct AAIController_OnUsingBlackBoard_Params
{
public:
	class UBlackboardComponent*                  BlackboardComp;                                    // 0x0(0x8)(ZeroConstructor)
	class UBlackboardData*                       BlackboardAsset;                                   // 0x8(0x8)(None)
};

// 0x4 (0x4 - 0x0)
// Function AIModule.AIController.OnGameplayTaskResourcesClaimed
struct AAIController_OnGameplayTaskResourcesClaimed_Params
{
public:
	struct FGameplayResourceSet                  NewlyClaimed;                                      // 0x0(0x2)(None)
	struct FGameplayResourceSet                  FreshlyReleased;                                   // 0x2(0x2)(None)
};

// 0x30 (0x30 - 0x0)
// Function AIModule.AIController.MoveToLocation
struct AAIController_MoveToLocation_Params
{
public:
	struct FVector                               Dest;                                              // 0x0(0x18)(None)
	float                                        AcceptanceRadius;                                  // 0x18(0x4)(None)
	bool                                         bStopOnOverlap;                                    // 0x1C(0x1)(None)
	bool                                         bUsePathfinding;                                   // 0x1D(0x1)(None)
	bool                                         bProjectDestinationToNavigation;                   // 0x1E(0x1)(None)
	bool                                         bCanStrafe;                                        // 0x1F(0x1)(None)
	class UClass*                                FilterClass;                                       // 0x20(0x8)(None)
	bool                                         bAllowPartialPath;                                 // 0x28(0x1)(None)
	bool                                         WasPlayerCommand;                                  // 0x29(0x1)(None)
	enum class EPathFollowingRequestResult       ReturnValue;                                       // 0x2A(0x1)(None)
	uint8                                        Pad_2748[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function AIModule.AIController.MoveToActor
struct AAIController_MoveToActor_Params
{
public:
	class AActor*                                Goal;                                              // 0x0(0x8)(ZeroConstructor)
	float                                        AcceptanceRadius;                                  // 0x8(0x4)(None)
	bool                                         bStopOnOverlap;                                    // 0xC(0x1)(None)
	bool                                         bUsePathfinding;                                   // 0xD(0x1)(None)
	bool                                         bCanStrafe;                                        // 0xE(0x1)(None)
	uint8                                        Pad_274E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                FilterClass;                                       // 0x10(0x8)(None)
	bool                                         bAllowPartialPath;                                 // 0x18(0x1)(None)
	enum class EPathFollowingRequestResult       ReturnValue;                                       // 0x19(0x1)(None)
	uint8                                        Pad_274F[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIController.K2_SetFocus
struct AAIController_K2_SetFocus_Params
{
public:
	class AActor*                                NewFocus;                                          // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AIController.K2_SetFocalPoint
struct AAIController_K2_SetFocalPoint_Params
{
public:
	struct FVector                               FP;                                                // 0x0(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.AIController.HasPartialPath
struct AAIController_HasPartialPath_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIController.GetPathFollowingComponent
struct AAIController_GetPathFollowingComponent_Params
{
public:
	class UPathFollowingComponent*               ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.AIController.GetMoveStatus
struct AAIController_GetMoveStatus_Params
{
public:
	enum class EPathFollowingStatus              ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AIController.GetImmediateMoveDestination
struct AAIController_GetImmediateMoveDestination_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIController.GetFocusActor
struct AAIController_GetFocusActor_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.AIController.GetFocalPointOnActor
struct AAIController_GetFocalPointOnActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(None)
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AIController.GetFocalPoint
struct AAIController_GetFocalPoint_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIController.GetDeprecatedActionsComponent
struct AAIController_GetDeprecatedActionsComponent_Params
{
public:
	class UPawnActionsComponent*                 ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIController.GetAIPerceptionComponent
struct AAIController_GetAIPerceptionComponent_Params
{
public:
	class UAIPerceptionComponent*                ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIController.ClaimTaskResource
struct AAIController_ClaimTaskResource_Params
{
public:
	class UClass*                                ResourceClass;                                     // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.PathFollowingComponent.OnNavDataRegistered
struct UPathFollowingComponent_OnNavDataRegistered_Params
{
public:
	class ANavigationData*                       NavData;                                           // 0x0(0x8)(None)
};

// 0x118 (0x118 - 0x0)
// Function AIModule.PathFollowingComponent.OnActorBump
struct UPathFollowingComponent_OnActorBump_Params
{
public:
	class AActor*                                SelfActor;                                         // 0x0(0x8)(ZeroConstructor)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(ZeroConstructor)
	struct FVector                               NormalImpulse;                                     // 0x10(0x18)(None)
	struct FHitResult                            Hit;                                               // 0x28(0xF0)(None)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.PathFollowingComponent.GetPathDestination
struct UPathFollowingComponent_GetPathDestination_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.PathFollowingComponent.GetPathActionType
struct UPathFollowingComponent_GetPathActionType_Params
{
public:
	enum class EPathFollowingAction              ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
struct UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Params
{
public:
	struct FAIRequestID                          RequestID;                                         // 0x0(0x4)(None)
	enum class EPathFollowingResult              MovementResult;                                    // 0x4(0x1)(None)
	uint8                                        Pad_277B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function AIModule.PawnAction.GetActionPriority
struct UPawnAction_GetActionPriority_Params
{
public:
	enum class EAIRequestPriority                ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.PawnAction.Finish
struct UPawnAction_Finish_Params
{
public:
	enum class EPawnActionResult                 WithResult;                                        // 0x0(0x1)(None)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.PawnAction.CreateActionInstance
struct UPawnAction_CreateActionInstance_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UClass*                                ActionClass;                                       // 0x8(0x8)(ZeroConstructor)
	class UPawnAction*                           ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.PawnActionsComponent.K2_PushAction
struct UPawnActionsComponent_K2_PushAction_Params
{
public:
	class UPawnAction*                           NewAction;                                         // 0x0(0x8)(ZeroConstructor)
	enum class EAIRequestPriority                Priority;                                          // 0x8(0x1)(None)
	uint8                                        Pad_2794[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Instigator;                                        // 0x10(0x8)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_2795[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AIModule.PawnActionsComponent.K2_PerformAction
struct UPawnActionsComponent_K2_PerformAction_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(ZeroConstructor)
	class UPawnAction*                           Action;                                            // 0x8(0x8)(None)
	enum class EAIRequestPriority                Priority;                                          // 0x10(0x1)(None)
	bool                                         ReturnValue;                                       // 0x11(0x1)(None)
	uint8                                        Pad_2796[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.PawnActionsComponent.K2_ForceAbortAction
struct UPawnActionsComponent_K2_ForceAbortAction_Params
{
public:
	class UPawnAction*                           ActionToAbort;                                     // 0x0(0x8)(None)
	enum class EPawnActionAbortState             ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_2798[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.PawnActionsComponent.K2_AbortAction
struct UPawnActionsComponent_K2_AbortAction_Params
{
public:
	class UPawnAction*                           ActionToAbort;                                     // 0x0(0x8)(None)
	enum class EPawnActionAbortState             ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_279D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.PawnAction_BlueprintBase.ActionTick
struct UPawnAction_BlueprintBase_ActionTick_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(None)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(None)
	uint8                                        Pad_27A5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function AIModule.PawnAction_BlueprintBase.ActionStart
struct UPawnAction_BlueprintBase_ActionStart_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.PawnAction_BlueprintBase.ActionResume
struct UPawnAction_BlueprintBase_ActionResume_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.PawnAction_BlueprintBase.ActionPause
struct UPawnAction_BlueprintBase_ActionPause_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.PawnAction_BlueprintBase.ActionFinished
struct UPawnAction_BlueprintBase_ActionFinished_Params
{
public:
	class APawn*                                 ControlledPawn;                                    // 0x0(0x8)(None)
	enum class EPawnActionResult                 WithResult;                                        // 0x8(0x1)(None)
	uint8                                        Pad_27B0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BrainComponent.StopLogic
struct UBrainComponent_StopLogic_Params
{
public:
	class FString                                Reason;                                            // 0x0(0x10)(None)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.BrainComponent.IsRunning
struct UBrainComponent_IsRunning_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.BrainComponent.IsPaused
struct UBrainComponent_IsPaused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
struct UBehaviorTreeComponent_SetDynamicSubtree_Params
{
public:
	struct FGameplayTag                          InjectTag;                                         // 0x0(0x8)(None)
	class UBehaviorTree*                         BehaviorAsset;                                     // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
struct UBehaviorTreeComponent_GetTagCooldownEndTime_Params
{
public:
	struct FGameplayTag                          CooldownTag;                                       // 0x0(0x8)(None)
	double                                       ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.BehaviorTreeComponent.FindService
struct UBehaviorTreeComponent_FindService_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(None)
	class UBTNode*                               ReturnValue;                                       // 0x10(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
struct UBehaviorTreeComponent_AddCooldownTagDuration_Params
{
public:
	struct FGameplayTag                          CooldownTag;                                       // 0x0(0x8)(None)
	float                                        CooldownDuration;                                  // 0x8(0x4)(None)
	bool                                         bAddToExistingDuration;                            // 0xC(0x1)(None)
	uint8                                        Pad_27E0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BlackboardAssetProvider.GetBlackboardAsset
struct IBlackboardAssetProvider_GetBlackboardAsset_Params
{
public:
	class UBlackboardData*                       ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.BlackboardComponent.SetValueAsVector
struct UBlackboardComponent_SetValueAsVector_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	struct FVector                               VectorValue;                                       // 0x8(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.BlackboardComponent.SetValueAsString
struct UBlackboardComponent_SetValueAsString_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	class FString                                StringValue;                                       // 0x8(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.BlackboardComponent.SetValueAsRotator
struct UBlackboardComponent_SetValueAsRotator_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	struct FRotator                              VectorValue;                                       // 0x8(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BlackboardComponent.SetValueAsObject
struct UBlackboardComponent_SetValueAsObject_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	class UObject*                               ObjectValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BlackboardComponent.SetValueAsName
struct UBlackboardComponent_SetValueAsName_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	class FName                                  NameValue;                                         // 0x8(0x8)(None)
};

// 0xC (0xC - 0x0)
// Function AIModule.BlackboardComponent.SetValueAsInt
struct UBlackboardComponent_SetValueAsInt_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	int32                                        IntValue;                                          // 0x8(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function AIModule.BlackboardComponent.SetValueAsFloat
struct UBlackboardComponent_SetValueAsFloat_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	float                                        FloatValue;                                        // 0x8(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function AIModule.BlackboardComponent.SetValueAsEnum
struct UBlackboardComponent_SetValueAsEnum_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	uint8                                        EnumValue;                                         // 0x8(0x1)(None)
	uint8                                        Pad_2818[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BlackboardComponent.SetValueAsClass
struct UBlackboardComponent_SetValueAsClass_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	class UClass*                                ClassValue;                                        // 0x8(0x8)(None)
};

// 0xC (0xC - 0x0)
// Function AIModule.BlackboardComponent.SetValueAsBool
struct UBlackboardComponent_SetValueAsBool_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	bool                                         BoolValue;                                         // 0x8(0x1)(None)
	uint8                                        Pad_281D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function AIModule.BlackboardComponent.IsVectorValueSet
struct UBlackboardComponent_IsVectorValueSet_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_281F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function AIModule.BlackboardComponent.GetValueAsVector
struct UBlackboardComponent_GetValueAsVector_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	struct FVector                               ReturnValue;                                       // 0x8(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.BlackboardComponent.GetValueAsString
struct UBlackboardComponent_GetValueAsString_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	class FString                                ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.BlackboardComponent.GetValueAsRotator
struct UBlackboardComponent_GetValueAsRotator_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	struct FRotator                              ReturnValue;                                       // 0x8(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BlackboardComponent.GetValueAsObject
struct UBlackboardComponent_GetValueAsObject_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BlackboardComponent.GetValueAsName
struct UBlackboardComponent_GetValueAsName_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(None)
};

// 0xC (0xC - 0x0)
// Function AIModule.BlackboardComponent.GetValueAsInt
struct UBlackboardComponent_GetValueAsInt_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function AIModule.BlackboardComponent.GetValueAsFloat
struct UBlackboardComponent_GetValueAsFloat_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	float                                        ReturnValue;                                       // 0x8(0x4)(None)
};

// 0xC (0xC - 0x0)
// Function AIModule.BlackboardComponent.GetValueAsEnum
struct UBlackboardComponent_GetValueAsEnum_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	uint8                                        ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_282A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BlackboardComponent.GetValueAsClass
struct UBlackboardComponent_GetValueAsClass_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	class UClass*                                ReturnValue;                                       // 0x8(0x8)(None)
};

// 0xC (0xC - 0x0)
// Function AIModule.BlackboardComponent.GetValueAsBool
struct UBlackboardComponent_GetValueAsBool_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_282B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AIModule.BlackboardComponent.GetRotationFromEntry
struct UBlackboardComponent_GetRotationFromEntry_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	struct FRotator                              ResultRotation;                                    // 0x8(0x18)(None)
	bool                                         ReturnValue;                                       // 0x20(0x1)(None)
	uint8                                        Pad_282E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AIModule.BlackboardComponent.GetLocationFromEntry
struct UBlackboardComponent_GetLocationFromEntry_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
	struct FVector                               ResultLocation;                                    // 0x8(0x18)(None)
	bool                                         ReturnValue;                                       // 0x20(0x1)(None)
	uint8                                        Pad_2830[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BlackboardComponent.ClearValueAsVector
struct UBlackboardComponent_ClearValueAsVector_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BlackboardComponent.ClearValueAsRotator
struct UBlackboardComponent_ClearValueAsRotator_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BlackboardComponent.ClearValue
struct UBlackboardComponent_ClearValue_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
struct UBTFunctionLibrary_StopUsingExternalEvent_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
struct UBTFunctionLibrary_StartUsingExternalEvent_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	class AActor*                                OwningActor;                                       // 0x8(0x8)(None)
};

// 0x48 (0x48 - 0x0)
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
struct UBTFunctionLibrary_SetBlackboardValueAsVector_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(None)
	struct FVector                               Value;                                             // 0x30(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
struct UBTFunctionLibrary_SetBlackboardValueAsString_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(None)
	class FString                                Value;                                             // 0x30(0x10)(None)
};

// 0x48 (0x48 - 0x0)
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
struct UBTFunctionLibrary_SetBlackboardValueAsRotator_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(None)
	struct FRotator                              Value;                                             // 0x30(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
struct UBTFunctionLibrary_SetBlackboardValueAsObject_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(ZeroConstructor)
	class UObject*                               Value;                                             // 0x30(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
struct UBTFunctionLibrary_SetBlackboardValueAsName_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(None)
	class FName                                  Value;                                             // 0x30(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
struct UBTFunctionLibrary_SetBlackboardValueAsInt_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(None)
	int32                                        Value;                                             // 0x30(0x4)(None)
	uint8                                        Pad_2853[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
struct UBTFunctionLibrary_SetBlackboardValueAsFloat_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(None)
	float                                        Value;                                             // 0x30(0x4)(None)
	uint8                                        Pad_2854[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
struct UBTFunctionLibrary_SetBlackboardValueAsEnum_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(None)
	uint8                                        Value;                                             // 0x30(0x1)(None)
	uint8                                        Pad_2855[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
struct UBTFunctionLibrary_SetBlackboardValueAsClass_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(ZeroConstructor)
	class UClass*                                Value;                                             // 0x30(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
struct UBTFunctionLibrary_SetBlackboardValueAsBool_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(None)
	bool                                         Value;                                             // 0x30(0x1)(None)
	uint8                                        Pad_2856[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
struct UBTFunctionLibrary_GetOwnersBlackboard_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	class UBlackboardComponent*                  ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTFunctionLibrary.GetOwnerComponent
struct UBTFunctionLibrary_GetOwnerComponent_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	class UBehaviorTreeComponent*                ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x48 (0x48 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
struct UBTFunctionLibrary_GetBlackboardValueAsVector_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(None)
	struct FVector                               ReturnValue;                                       // 0x30(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
struct UBTFunctionLibrary_GetBlackboardValueAsString_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(None)
	class FString                                ReturnValue;                                       // 0x30(0x10)(None)
};

// 0x48 (0x48 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
struct UBTFunctionLibrary_GetBlackboardValueAsRotator_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(None)
	struct FRotator                              ReturnValue;                                       // 0x30(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
struct UBTFunctionLibrary_GetBlackboardValueAsObject_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(ZeroConstructor)
	class UObject*                               ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
struct UBTFunctionLibrary_GetBlackboardValueAsName_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(None)
	class FName                                  ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
struct UBTFunctionLibrary_GetBlackboardValueAsInt_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(None)
	int32                                        ReturnValue;                                       // 0x30(0x4)(None)
	uint8                                        Pad_2866[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
struct UBTFunctionLibrary_GetBlackboardValueAsFloat_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(None)
	float                                        ReturnValue;                                       // 0x30(0x4)(None)
	uint8                                        Pad_2867[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
struct UBTFunctionLibrary_GetBlackboardValueAsEnum_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(None)
	uint8                                        ReturnValue;                                       // 0x30(0x1)(None)
	uint8                                        Pad_2868[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
struct UBTFunctionLibrary_GetBlackboardValueAsClass_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(ZeroConstructor)
	class UClass*                                ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
struct UBTFunctionLibrary_GetBlackboardValueAsBool_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(None)
	bool                                         ReturnValue;                                       // 0x30(0x1)(None)
	uint8                                        Pad_286A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
struct UBTFunctionLibrary_GetBlackboardValueAsActor_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(ZeroConstructor)
	class AActor*                                ReturnValue;                                       // 0x30(0x8)(None)
};

// 0x30 (0x30 - 0x0)
// Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
struct UBTFunctionLibrary_ClearBlackboardValueAsVector_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(None)
};

// 0x30 (0x30 - 0x0)
// Function AIModule.BTFunctionLibrary.ClearBlackboardValue
struct UBTFunctionLibrary_ClearBlackboardValue_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(ZeroConstructor)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(None)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
struct UBTDecorator_BlueprintBase_ReceiveTickAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ZeroConstructor)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(None)
	float                                        DeltaSeconds;                                      // 0x10(0x4)(None)
	uint8                                        Pad_2871[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
struct UBTDecorator_BlueprintBase_ReceiveTick_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(None)
	uint8                                        Pad_2875[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
struct UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ZeroConstructor)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
struct UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
struct UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ZeroConstructor)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
struct UBTDecorator_BlueprintBase_ReceiveObserverActivated_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
struct UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ZeroConstructor)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
struct UBTDecorator_BlueprintBase_ReceiveExecutionStart_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
struct UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ZeroConstructor)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(None)
	enum class EBTNodeResult                     NodeResult;                                        // 0x10(0x1)(None)
	uint8                                        Pad_2877[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
struct UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
	enum class EBTNodeResult                     NodeResult;                                        // 0x8(0x1)(None)
	uint8                                        Pad_2878[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.ReceiveConditionCheck
struct UBTDecorator_BlueprintBase_ReceiveConditionCheck_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
struct UBTDecorator_BlueprintBase_PerformConditionCheckAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ZeroConstructor)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_2879[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
struct UBTDecorator_BlueprintBase_PerformConditionCheck_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
	bool                                         ReturnValue;                                       // 0x8(0x1)(None)
	uint8                                        Pad_287A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
struct UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
struct UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.BTDecorator_BlueprintBase.FinishConditionCheck
struct UBTDecorator_BlueprintBase_FinishConditionCheck_Params
{
public:
	bool                                         bAllowExecution;                                   // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTService_BlueprintBase.ResetInterval
struct UBTService_BlueprintBase_ResetInterval_Params
{
public:
	class UBehaviorTreeComponent*                OwnerComp;                                         // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.BTService_BlueprintBase.ReceiveTickAI
struct UBTService_BlueprintBase_ReceiveTickAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ZeroConstructor)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(None)
	float                                        DeltaSeconds;                                      // 0x10(0x4)(None)
	uint8                                        Pad_2893[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTService_BlueprintBase.ReceiveTick
struct UBTService_BlueprintBase_ReceiveTick_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(None)
	uint8                                        Pad_2894[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
struct UBTService_BlueprintBase_ReceiveSearchStartAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ZeroConstructor)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
struct UBTService_BlueprintBase_ReceiveSearchStart_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
struct UBTService_BlueprintBase_ReceiveDeactivationAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ZeroConstructor)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
struct UBTService_BlueprintBase_ReceiveDeactivation_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
struct UBTService_BlueprintBase_ReceiveActivationAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ZeroConstructor)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTService_BlueprintBase.ReceiveActivation
struct UBTService_BlueprintBase_ReceiveActivation_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.BTService_BlueprintBase.IsServiceActive
struct UBTService_BlueprintBase_IsServiceActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0xC (0xC - 0x0)
// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
struct UBTTask_BlueprintBase_SetFinishOnMessageWithId_Params
{
public:
	class FName                                  MessageName;                                       // 0x0(0x8)(None)
	int32                                        RequestID;                                         // 0x8(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
struct UBTTask_BlueprintBase_SetFinishOnMessage_Params
{
public:
	class FName                                  MessageName;                                       // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
struct UBTTask_BlueprintBase_ReceiveTickAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ZeroConstructor)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(None)
	float                                        DeltaSeconds;                                      // 0x10(0x4)(None)
	uint8                                        Pad_289F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTTask_BlueprintBase.ReceiveTick
struct UBTTask_BlueprintBase_ReceiveTick_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
	float                                        DeltaSeconds;                                      // 0x8(0x4)(None)
	uint8                                        Pad_28A0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
struct UBTTask_BlueprintBase_ReceiveExecuteAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ZeroConstructor)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTTask_BlueprintBase.ReceiveExecute
struct UBTTask_BlueprintBase_ReceiveExecute_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
struct UBTTask_BlueprintBase_ReceiveAbortAI_Params
{
public:
	class AAIController*                         OwnerController;                                   // 0x0(0x8)(ZeroConstructor)
	class APawn*                                 ControlledPawn;                                    // 0x8(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.BTTask_BlueprintBase.ReceiveAbort
struct UBTTask_BlueprintBase_ReceiveAbort_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
struct UBTTask_BlueprintBase_IsTaskExecuting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.BTTask_BlueprintBase.IsTaskAborting
struct UBTTask_BlueprintBase_IsTaskAborting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.BTTask_BlueprintBase.FinishExecute
struct UBTTask_BlueprintBase_FinishExecute_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
struct UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params
{
public:
	class UAnimInstance*                         AnimInstance;                                      // 0x0(0x8)(None)
	bool                                         bUnlockMovement;                                   // 0x8(0x1)(None)
	bool                                         UnlockAILogic;                                     // 0x9(0x1)(None)
	uint8                                        Pad_28E1[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
struct UAIBlueprintHelperLibrary_SpawnAIFromClass_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UClass*                                PawnClass;                                         // 0x8(0x8)(ZeroConstructor)
	class UBehaviorTree*                         BehaviorTree;                                      // 0x10(0x8)(ZeroConstructor)
	struct FVector                               Location;                                          // 0x18(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x30(0x18)(None)
	bool                                         bNoCollisionFail;                                  // 0x48(0x1)(None)
	uint8                                        Pad_28E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Owner;                                             // 0x50(0x8)(ZeroConstructor)
	class APawn*                                 ReturnValue;                                       // 0x58(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
struct UAIBlueprintHelperLibrary_SimpleMoveToLocation_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(None)
	struct FVector                               Goal;                                              // 0x8(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
struct UAIBlueprintHelperLibrary_SimpleMoveToActor_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(ZeroConstructor)
	class AActor*                                Goal;                                              // 0x8(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
struct UAIBlueprintHelperLibrary_SendAIMessage_Params
{
public:
	class APawn*                                 Target;                                            // 0x0(0x8)(ZeroConstructor)
	class FName                                  Message;                                           // 0x8(0x8)(None)
	class UObject*                               MessageSource;                                     // 0x10(0x8)(None)
	bool                                         bSuccess;                                          // 0x18(0x1)(None)
	uint8                                        Pad_28E7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
struct UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params
{
public:
	class UAnimInstance*                         AnimInstance;                                      // 0x0(0x8)(None)
	bool                                         bLockMovement;                                     // 0x8(0x1)(None)
	bool                                         LockAILogic;                                       // 0x9(0x1)(None)
	uint8                                        Pad_28E8[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
struct UAIBlueprintHelperLibrary_IsValidAIRotation_Params
{
public:
	struct FRotator                              Rotation;                                          // 0x0(0x18)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_28E9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
struct UAIBlueprintHelperLibrary_IsValidAILocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_28EA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
struct UAIBlueprintHelperLibrary_IsValidAIDirection_Params
{
public:
	struct FVector                               DirectionVector;                                   // 0x0(0x18)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_28EB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex
struct UAIBlueprintHelperLibrary_GetNextNavLinkIndex_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_28ED[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints
struct UAIBlueprintHelperLibrary_GetCurrentPathPoints_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(None)
	TArray<struct FVector>                       ReturnValue;                                       // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex
struct UAIBlueprintHelperLibrary_GetCurrentPathIndex_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(None)
	int32                                        ReturnValue;                                       // 0x8(0x4)(None)
	uint8                                        Pad_28F0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
struct UAIBlueprintHelperLibrary_GetCurrentPath_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(ZeroConstructor)
	class UNavigationPath*                       ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
struct UAIBlueprintHelperLibrary_GetBlackboard_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(ZeroConstructor)
	class UBlackboardComponent*                  ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.GetAIController
struct UAIBlueprintHelperLibrary_GetAIController_Params
{
public:
	class AActor*                                ControlledActor;                                   // 0x0(0x8)(ZeroConstructor)
	class AAIController*                         ReturnValue;                                       // 0x8(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
struct UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class APawn*                                 Pawn;                                              // 0x8(0x8)(ZeroConstructor)
	struct FVector                               Destination;                                       // 0x10(0x18)(None)
	class AActor*                                TargetActor;                                       // 0x28(0x8)(ZeroConstructor)
	float                                        AcceptanceRadius;                                  // 0x30(0x4)(None)
	bool                                         bStopOnOverlap;                                    // 0x34(0x1)(None)
	uint8                                        Pad_28F1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAIAsyncTaskBlueprintProxy*            ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
struct UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Params
{
public:
	class UObject*                               QuerierObject;                                     // 0x0(0x8)(ZeroConstructor)
	class AActor*                                QuerierActor;                                      // 0x8(0x8)(None)
	struct FVector                               ResultingLocation;                                 // 0x10(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
struct UEnvQueryContext_BlueprintBase_ProvideSingleActor_Params
{
public:
	class UObject*                               QuerierObject;                                     // 0x0(0x8)(ZeroConstructor)
	class AActor*                                QuerierActor;                                      // 0x8(0x8)(ZeroConstructor)
	class AActor*                                ResultingActor;                                    // 0x10(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
struct UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Params
{
public:
	class UObject*                               QuerierObject;                                     // 0x0(0x8)(ZeroConstructor)
	class AActor*                                QuerierActor;                                      // 0x8(0x8)(None)
	TArray<struct FVector>                       ResultingLocationSet;                              // 0x10(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
struct UEnvQueryContext_BlueprintBase_ProvideActorsSet_Params
{
public:
	class UObject*                               QuerierObject;                                     // 0x0(0x8)(ZeroConstructor)
	class AActor*                                QuerierActor;                                      // 0x8(0x8)(ZeroConstructor)
	TArray<class AActor*>                        ResultingActorsSet;                                // 0x10(0x10)(None)
};

// 0xC (0xC - 0x0)
// Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
struct UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Params
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(None)
	float                                        Value;                                             // 0x8(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
struct UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Params
{
public:
	TArray<struct FVector>                       ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
struct UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Params
{
public:
	TArray<class AActor*>                        ReturnValue;                                       // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
struct UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Params
{
public:
	TArray<struct FVector>                       ResultLocations;                                   // 0x0(0x10)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_2902[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
struct UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Params
{
public:
	TArray<class AActor*>                        ResultActors;                                      // 0x0(0x10)(None)
	bool                                         ReturnValue;                                       // 0x10(0x1)(None)
	uint8                                        Pad_2903[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
struct UEnvQueryInstanceBlueprintWrapper_GetItemScore_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(None)
	float                                        ReturnValue;                                       // 0x4(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
struct UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Params
{
public:
	class UEnvQueryInstanceBlueprintWrapper*     QueryInstance;                                     // 0x0(0x8)(None)
	enum class EEnvQueryStatus                   QueryStatus;                                       // 0x8(0x1)(None)
	uint8                                        Pad_2906[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AIModule.EnvQueryManager.RunEQSQuery
struct UEnvQueryManager_RunEQSQuery_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UEnvQuery*                             QueryTemplate;                                     // 0x8(0x8)(ZeroConstructor)
	class UObject*                               Querier;                                           // 0x10(0x8)(ZeroConstructor)
	enum class EEnvQueryRunMode                  RunMode;                                           // 0x18(0x1)(None)
	uint8                                        Pad_290A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                WrapperClass;                                      // 0x20(0x8)(ZeroConstructor)
	class UEnvQueryInstanceBlueprintWrapper*     ReturnValue;                                       // 0x28(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
struct UEnvQueryGenerator_BlueprintBase_GetQuerier_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGenerationFromActors
struct UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors_Params
{
public:
	TArray<class AActor*>                        ContextActors;                                     // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
struct UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Params
{
public:
	TArray<struct FVector>                       ContextLocations;                                  // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
struct UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params
{
public:
	struct FVector                               GeneratedVector;                                   // 0x0(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
struct UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params
{
public:
	class AActor*                                GeneratedActor;                                    // 0x0(0x8)(None)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
struct UCrowdFollowingComponent_SuspendCrowdSteering_Params
{
public:
	bool                                         bSuspend;                                          // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.NavLinkProxy.SetSmartLinkEnabled
struct ANavLinkProxy_SetSmartLinkEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.NavLinkProxy.ResumePathFollowing
struct ANavLinkProxy_ResumePathFollowing_Params
{
public:
	class AActor*                                Agent;                                             // 0x0(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
struct ANavLinkProxy_ReceiveSmartLinkReached_Params
{
public:
	class AActor*                                Agent;                                             // 0x0(0x8)(None)
	struct FVector                               Destination;                                       // 0x8(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.NavLinkProxy.IsSmartLinkEnabled
struct ANavLinkProxy_IsSmartLinkEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.NavLinkProxy.HasMovingAgents
struct ANavLinkProxy_HasMovingAgents_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
struct UNavLocalGridManager_SetLocalNavigationGridDensity_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	float                                        CellSize;                                          // 0x8(0x4)(None)
	bool                                         ReturnValue;                                       // 0xC(0x1)(None)
	uint8                                        Pad_298A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
struct UNavLocalGridManager_RemoveLocalNavigationGrid_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	int32                                        GridId;                                            // 0x8(0x4)(None)
	bool                                         bRebuildGrids;                                     // 0xC(0x1)(None)
	uint8                                        Pad_298B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
struct UNavLocalGridManager_FindLocalNavigationGridPath_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	struct FVector                               Start;                                             // 0x8(0x18)(None)
	struct FVector                               End;                                               // 0x20(0x18)(None)
	TArray<struct FVector>                       PathPoints;                                        // 0x38(0x10)(None)
	bool                                         ReturnValue;                                       // 0x48(0x1)(None)
	uint8                                        Pad_298C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
struct UNavLocalGridManager_AddLocalNavigationGridForPoints_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	TArray<struct FVector>                       Locations;                                         // 0x8(0x10)(None)
	int32                                        Radius2D;                                          // 0x18(0x4)(None)
	float                                        Height;                                            // 0x1C(0x4)(None)
	bool                                         bRebuildGrids;                                     // 0x20(0x1)(None)
	uint8                                        Pad_298D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x24(0x4)(None)
};

// 0x30 (0x30 - 0x0)
// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
struct UNavLocalGridManager_AddLocalNavigationGridForPoint_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	struct FVector                               Location;                                          // 0x8(0x18)(None)
	int32                                        Radius2D;                                          // 0x20(0x4)(None)
	float                                        Height;                                            // 0x24(0x4)(None)
	bool                                         bRebuildGrids;                                     // 0x28(0x1)(None)
	uint8                                        Pad_299A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x2C(0x4)(None)
};

// 0x38 (0x38 - 0x0)
// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
struct UNavLocalGridManager_AddLocalNavigationGridForCapsule_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	struct FVector                               Location;                                          // 0x8(0x18)(None)
	float                                        CapsuleRadius;                                     // 0x20(0x4)(None)
	float                                        CapsuleHalfHeight;                                 // 0x24(0x4)(None)
	int32                                        Radius2D;                                          // 0x28(0x4)(None)
	float                                        Height;                                            // 0x2C(0x4)(None)
	bool                                         bRebuildGrids;                                     // 0x30(0x1)(None)
	uint8                                        Pad_299D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x34(0x4)(None)
};

// 0x60 (0x60 - 0x0)
// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
struct UNavLocalGridManager_AddLocalNavigationGridForBox_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(None)
	struct FVector                               Location;                                          // 0x8(0x18)(None)
	struct FVector                               Extent;                                            // 0x20(0x18)(None)
	struct FRotator                              Rotation;                                          // 0x38(0x18)(None)
	int32                                        Radius2D;                                          // 0x50(0x4)(None)
	float                                        Height;                                            // 0x54(0x4)(None)
	bool                                         bRebuildGrids;                                     // 0x58(0x1)(None)
	uint8                                        Pad_299E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x5C(0x4)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIPerceptionComponent.SetSenseEnabled
struct UAIPerceptionComponent_SetSenseEnabled_Params
{
public:
	class UClass*                                SenseClass;                                        // 0x0(0x8)(None)
	bool                                         bEnable;                                           // 0x8(0x1)(None)
	uint8                                        Pad_29A4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
struct UAIPerceptionComponent_OnOwnerEndPlay_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(None)
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x8(0x1)(None)
	uint8                                        Pad_29A5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense
struct UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Params
{
public:
	class UClass*                                SenseToUse;                                        // 0x0(0x8)(ZeroConstructor)
	TArray<class AActor*>                        OutActors;                                         // 0x8(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
struct UAIPerceptionComponent_GetPerceivedHostileActors_Params
{
public:
	TArray<class AActor*>                        OutActors;                                         // 0x0(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AIPerceptionComponent.GetPerceivedActors
struct UAIPerceptionComponent_GetPerceivedActors_Params
{
public:
	class UClass*                                SenseToUse;                                        // 0x0(0x8)(ZeroConstructor)
	TArray<class AActor*>                        OutActors;                                         // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
struct UAIPerceptionComponent_GetKnownPerceivedActors_Params
{
public:
	class UClass*                                SenseToUse;                                        // 0x0(0x8)(ZeroConstructor)
	TArray<class AActor*>                        OutActors;                                         // 0x8(0x10)(None)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
struct UAIPerceptionComponent_GetCurrentlyPerceivedActors_Params
{
public:
	class UClass*                                SenseToUse;                                        // 0x0(0x8)(ZeroConstructor)
	TArray<class AActor*>                        OutActors;                                         // 0x8(0x10)(None)
};

// 0x30 (0x30 - 0x0)
// Function AIModule.AIPerceptionComponent.GetActorsPerception
struct UAIPerceptionComponent_GetActorsPerception_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ZeroConstructor)
	struct FActorPerceptionBlueprintInfo         Info;                                              // 0x8(0x20)(None)
	bool                                         ReturnValue;                                       // 0x28(0x1)(None)
	uint8                                        Pad_29A6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
struct UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Params
{
public:
	class UClass*                                SenseClass;                                        // 0x0(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
struct UAIPerceptionStimuliSourceComponent_RegisterForSense_Params
{
public:
	class UClass*                                SenseClass;                                        // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
struct UAIPerceptionSystem_ReportPerceptionEvent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UAISenseEvent*                         PerceptionEvent;                                   // 0x8(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AIPerceptionSystem.ReportEvent
struct UAIPerceptionSystem_ReportEvent_Params
{
public:
	class UAISenseEvent*                         PerceptionEvent;                                   // 0x0(0x8)(None)
};

// 0x20 (0x20 - 0x0)
// Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
struct UAIPerceptionSystem_RegisterPerceptionStimuliSource_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class UClass*                                Sense;                                             // 0x8(0x8)(ZeroConstructor)
	class AActor*                                Target;                                            // 0x10(0x8)(None)
	bool                                         ReturnValue;                                       // 0x18(0x1)(None)
	uint8                                        Pad_29AC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
struct UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(None)
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x8(0x1)(None)
	uint8                                        Pad_29AD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
struct UAIPerceptionSystem_GetSenseClassForStimulus_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	struct FAIStimulus                           Stimulus;                                          // 0x8(0x58)(None)
	class UClass*                                ReturnValue;                                       // 0x60(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AISense_Blueprint.OnUpdate
struct UAISense_Blueprint_OnUpdate_Params
{
public:
	TArray<class UAISenseEvent*>                 EventsToProcess;                                   // 0x0(0x10)(None)
	float                                        ReturnValue;                                       // 0x10(0x4)(None)
	uint8                                        Pad_29B4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AISense_Blueprint.OnListenerUpdated
struct UAISense_Blueprint_OnListenerUpdated_Params
{
public:
	class AActor*                                ActorListener;                                     // 0x0(0x8)(ZeroConstructor)
	class UAIPerceptionComponent*                PerceptionComponent;                               // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AISense_Blueprint.OnListenerUnregistered
struct UAISense_Blueprint_OnListenerUnregistered_Params
{
public:
	class AActor*                                ActorListener;                                     // 0x0(0x8)(ZeroConstructor)
	class UAIPerceptionComponent*                PerceptionComponent;                               // 0x8(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AISense_Blueprint.OnListenerRegistered
struct UAISense_Blueprint_OnListenerRegistered_Params
{
public:
	class AActor*                                ActorListener;                                     // 0x0(0x8)(ZeroConstructor)
	class UAIPerceptionComponent*                PerceptionComponent;                               // 0x8(0x8)(None)
};

// 0x8 (0x8 - 0x0)
// Function AIModule.AISense_Blueprint.K2_OnNewPawn
struct UAISense_Blueprint_K2_OnNewPawn_Params
{
public:
	class APawn*                                 NewPawn;                                           // 0x0(0x8)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AISense_Blueprint.GetAllListenerComponents
struct UAISense_Blueprint_GetAllListenerComponents_Params
{
public:
	TArray<class UAIPerceptionComponent*>        ListenerComponents;                                // 0x0(0x10)(None)
};

// 0x10 (0x10 - 0x0)
// Function AIModule.AISense_Blueprint.GetAllListenerActors
struct UAISense_Blueprint_GetAllListenerActors_Params
{
public:
	TArray<class AActor*>                        ListenerActors;                                    // 0x0(0x10)(None)
};

// 0x58 (0x58 - 0x0)
// Function AIModule.AISense_Damage.ReportDamageEvent
struct UAISense_Damage_ReportDamageEvent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class AActor*                                DamagedActor;                                      // 0x8(0x8)(ZeroConstructor)
	class AActor*                                Instigator;                                        // 0x10(0x8)(None)
	float                                        DamageAmount;                                      // 0x18(0x4)(None)
	uint8                                        Pad_29C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               EventLocation;                                     // 0x20(0x18)(None)
	struct FVector                               HitLocation;                                       // 0x38(0x18)(None)
	class FName                                  Tag;                                               // 0x50(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// Function AIModule.AISense_Hearing.ReportNoiseEvent
struct UAISense_Hearing_ReportNoiseEvent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	struct FVector                               NoiseLocation;                                     // 0x8(0x18)(None)
	float                                        Loudness;                                          // 0x20(0x4)(None)
	uint8                                        Pad_29CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Instigator;                                        // 0x28(0x8)(None)
	float                                        MaxRange;                                          // 0x30(0x4)(None)
	class FName                                  Tag;                                               // 0x34(0x8)(None)
	uint8                                        Pad_29D0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
struct UAISense_Prediction_RequestPawnPredictionEvent_Params
{
public:
	class APawn*                                 Requestor;                                         // 0x0(0x8)(ZeroConstructor)
	class AActor*                                PredictedActor;                                    // 0x8(0x8)(None)
	float                                        PredictionTime;                                    // 0x10(0x4)(None)
	uint8                                        Pad_29D7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
struct UAISense_Prediction_RequestControllerPredictionEvent_Params
{
public:
	class AAIController*                         Requestor;                                         // 0x0(0x8)(ZeroConstructor)
	class AActor*                                PredictedActor;                                    // 0x8(0x8)(None)
	float                                        PredictionTime;                                    // 0x10(0x4)(None)
	uint8                                        Pad_29DA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AIModule.AISense_Touch.ReportTouchEvent
struct UAISense_Touch_ReportTouchEvent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ZeroConstructor)
	class AActor*                                TouchReceiver;                                     // 0x8(0x8)(ZeroConstructor)
	class AActor*                                OtherActor;                                        // 0x10(0x8)(None)
	struct FVector                               Location;                                          // 0x18(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
struct UPawnSensingComponent_SetSensingUpdatesEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// Function AIModule.PawnSensingComponent.SetSensingInterval
struct UPawnSensingComponent_SetSensingInterval_Params
{
public:
	float                                        NewSensingInterval;                                // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
struct UPawnSensingComponent_SetPeripheralVisionAngle_Params
{
public:
	float                                        NewPeripheralVisionAngle;                          // 0x0(0x4)(None)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
struct UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
struct UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params
{
public:
	class APawn*                                 Instigator;                                        // 0x0(0x8)(None)
	struct FVector                               Location;                                          // 0x8(0x18)(None)
	float                                        Volume;                                            // 0x20(0x4)(None)
	uint8                                        Pad_29F0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
struct UPawnSensingComponent_GetPeripheralVisionCosine_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x4 (0x4 - 0x0)
// Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
struct UPawnSensingComponent_GetPeripheralVisionAngle_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(None)
};

// 0x40 (0x40 - 0x0)
// Function AIModule.AITask_MoveTo.AIMoveTo
struct UAITask_MoveTo_AIMoveTo_Params
{
public:
	class AAIController*                         Controller;                                        // 0x0(0x8)(ZeroConstructor)
	struct FVector                               GoalLocation;                                      // 0x8(0x18)(None)
	class AActor*                                GoalActor;                                         // 0x20(0x8)(ZeroConstructor)
	float                                        AcceptanceRadius;                                  // 0x28(0x4)(None)
	enum class EAIOptionFlag                     StopOnOverlap;                                     // 0x2C(0x1)(None)
	enum class EAIOptionFlag                     AcceptPartialPath;                                 // 0x2D(0x1)(None)
	bool                                         bUsePathfinding;                                   // 0x2E(0x1)(None)
	bool                                         bLockAILogic;                                      // 0x2F(0x1)(None)
	bool                                         bUseContinuousGoalTracking;                        // 0x30(0x1)(None)
	enum class EAIOptionFlag                     ProjectGoalOnNavigation;                           // 0x31(0x1)(None)
	uint8                                        Pad_2A0A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAITask_MoveTo*                        ReturnValue;                                       // 0x38(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// Function AIModule.AITask_RunEQS.RunEQS
struct UAITask_RunEQS_RunEQS_Params
{
public:
	class AAIController*                         Controller;                                        // 0x0(0x8)(ZeroConstructor)
	class UEnvQuery*                             QueryTemplate;                                     // 0x8(0x8)(ZeroConstructor)
	class UAITask_RunEQS*                        ReturnValue;                                       // 0x10(0x8)(None)
};

}
}


