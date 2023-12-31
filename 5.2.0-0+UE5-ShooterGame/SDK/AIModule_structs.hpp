#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPathFollowingResult : uint8
{
	Success                        = 0,
	Blocked                        = 1,
	OffPath                        = 2,
	Aborted                        = 3,
	Skipped_DEPRECATED             = 4,
	Invalid                        = 5,
	EPathFollowingResult_MAX       = 6,
};

enum class EEnvQueryStatus : uint8
{
	Processing                     = 0,
	Success                        = 1,
	Failed                         = 2,
	Aborted                        = 3,
	OwnerLost                      = 4,
	MissingParam                   = 5,
	EEnvQueryStatus_MAX            = 6,
};

enum class EAIOptionFlag : uint8
{
	Default                        = 0,
	Enable                         = 1,
	Disable                        = 2,
	MAX                            = 3,
};

enum class EFAIDistanceType : uint8
{
	Distance3D                     = 0,
	Distance2D                     = 1,
	DistanceZ                      = 2,
	MAX                            = 3,
};

enum class EPawnActionAbortState : uint8
{
	NeverStarted                   = 0,
	NotBeingAborted                = 1,
	MarkPendingAbort               = 2,
	LatentAbortInProgress          = 3,
	AbortDone                      = 4,
	MAX                            = 5,
};

enum class EPawnActionResult : uint8
{
	NotStarted                     = 0,
	InProgress                     = 1,
	Success                        = 2,
	Failed                         = 3,
	Aborted                        = 4,
	EPawnActionResult_MAX          = 5,
};

enum class EPawnActionEventType : uint8
{
	Invalid                        = 0,
	FailedToStart                  = 1,
	InstantAbort                   = 2,
	FinishedAborting               = 3,
	FinishedExecution              = 4,
	Push                           = 5,
	EPawnActionEventType_MAX       = 6,
};

enum class EAIRequestPriority : uint8
{
	SoftScript                     = 0,
	Logic                          = 1,
	HardScript                     = 2,
	Reaction                       = 3,
	Ultimate                       = 4,
	MAX                            = 5,
};

enum class EAILockSource : uint8
{
	Animation                      = 0,
	Logic                          = 1,
	Script                         = 2,
	Gameplay                       = 3,
	MAX                            = 4,
};

enum class EGenericAICheck : uint8
{
	Less                           = 0,
	LessOrEqual                    = 1,
	Equal                          = 2,
	NotEqual                       = 3,
	GreaterOrEqual                 = 4,
	Greater                        = 5,
	IsTrue                         = 6,
	MAX                            = 7,
};

enum class EBasicKeyOperation : uint8
{
	Set                            = 0,
	NotSet                         = 1,
	EBasicKeyOperation_MAX         = 2,
};

enum class EArithmeticKeyOperation : uint8
{
	Equal                          = 0,
	NotEqual                       = 1,
	Less                           = 2,
	LessOrEqual                    = 3,
	Greater                        = 4,
	GreaterOrEqual                 = 5,
	EArithmeticKeyOperation_MAX    = 6,
};

enum class ETextKeyOperation : uint8
{
	Equal                          = 0,
	NotEqual                       = 1,
	Contain                        = 2,
	NotContain                     = 3,
	ETextKeyOperation_MAX          = 4,
};

enum class EEnvTestPurpose : uint8
{
	Filter                         = 0,
	Score                          = 1,
	FilterAndScore                 = 2,
	EEnvTestPurpose_MAX            = 3,
};

enum class EEnvTestFilterType : uint8
{
	Minimum                        = 0,
	Maximum                        = 1,
	Range                          = 2,
	Match                          = 3,
	EEnvTestFilterType_MAX         = 4,
};

enum class EEnvTestScoreEquation : uint8
{
	Linear                         = 0,
	Square                         = 1,
	InverseLinear                  = 2,
	SquareRoot                     = 3,
	Constant                       = 4,
	EEnvTestScoreEquation_MAX      = 5,
};

enum class EEnvTestWeight : uint8
{
	None                           = 0,
	Square                         = 1,
	Inverse                        = 2,
	Unused                         = 3,
	Constant                       = 4,
	Skip                           = 5,
	EEnvTestWeight_MAX             = 6,
};

enum class EEnvTestCost : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	EEnvTestCost_MAX               = 3,
};

enum class EEnvTestFilterOperator : uint8
{
	AllPass                        = 0,
	AnyPass                        = 1,
	EEnvTestFilterOperator_MAX     = 2,
};

enum class EEnvTestScoreOperator : uint8
{
	AverageScore                   = 0,
	MinScore                       = 1,
	MaxScore                       = 2,
	Multiply                       = 3,
	EEnvTestScoreOperator_MAX      = 4,
};

enum class EEnvQueryRunMode : uint8
{
	SingleResult                   = 0,
	RandomBest5Pct                 = 1,
	RandomBest25Pct                = 2,
	AllMatching                    = 3,
	EEnvQueryRunMode_MAX           = 4,
};

enum class EEnvQueryParam : uint8
{
	Float                          = 0,
	Int                            = 1,
	Bool                           = 2,
	EEnvQueryParam_MAX             = 3,
};

enum class EAIParamType : uint8
{
	Float                          = 0,
	Int                            = 1,
	Bool                           = 2,
	MAX                            = 3,
};

enum class EEnvQueryTrace : uint8
{
	None                           = 0,
	Navigation                     = 1,
	GeometryByChannel              = 2,
	GeometryByProfile              = 3,
	NavigationOverLedges           = 4,
	EEnvQueryTrace_MAX             = 5,
};

enum class EEnvTraceShape : uint8
{
	Line                           = 0,
	Box                            = 1,
	Sphere                         = 2,
	Capsule                        = 3,
	EEnvTraceShape_MAX             = 4,
};

enum class EEnvOverlapShape : uint8
{
	Box                            = 0,
	Sphere                         = 1,
	Capsule                        = 2,
	EEnvOverlapShape_MAX           = 3,
};

enum class EEnvDirection : uint8
{
	TwoPoints                      = 0,
	Rotation                       = 1,
	EEnvDirection_MAX              = 2,
};

enum class EEnvQueryTestClamping : uint8
{
	None                           = 0,
	SpecifiedValue                 = 1,
	FilterThreshold                = 2,
	EEnvQueryTestClamping_MAX      = 3,
};

enum class ETeamAttitude : uint8
{
	Friendly                       = 0,
	Neutral                        = 1,
	Hostile                        = 2,
	ETeamAttitude_MAX              = 3,
};

enum class EPawnSubActionTriggeringPolicy : uint8
{
	CopyBeforeTriggering           = 0,
	ReuseInstances                 = 1,
	EPawnSubActionTriggeringPolicy_MAX = 2,
};

enum class EPawnActionFailHandling : uint8
{
	RequireSuccess                 = 0,
	IgnoreFailure                  = 1,
	EPawnActionFailHandling_MAX    = 2,
};

enum class EPawnActionMoveMode : uint8
{
	UsePathfinding                 = 0,
	StraightLine                   = 1,
	EPawnActionMoveMode_MAX        = 2,
};

enum class EBTNodeResult : uint8
{
	Succeeded                      = 0,
	Failed                         = 1,
	Aborted                        = 2,
	InProgress                     = 3,
	EBTNodeResult_MAX              = 4,
};

enum class EBTFlowAbortMode : uint8
{
	None                           = 0,
	LowerPriority                  = 1,
	Self                           = 2,
	Both                           = 3,
	EBTFlowAbortMode_MAX           = 4,
};

enum class EBTChildIndex : uint8
{
	FirstNode                      = 0,
	TaskNode                       = 1,
	EBTChildIndex_MAX              = 2,
};

enum class EBTDecoratorLogic : uint8
{
	Invalid                        = 0,
	Test                           = 1,
	And                            = 2,
	Or                             = 3,
	Not                            = 4,
	EBTDecoratorLogic_MAX          = 5,
};

enum class EBTParallelMode : uint8
{
	AbortBackground                = 0,
	WaitForBackground              = 1,
	EBTParallelMode_MAX            = 2,
};

enum class EBTBlackboardRestart : uint8
{
	ValueChange                    = 0,
	ResultChange                   = 1,
	EBTBlackboardRestart_MAX       = 2,
};

enum class EBlackBoardEntryComparison : uint8
{
	Equal                          = 0,
	NotEqual                       = 1,
	EBlackBoardEntryComparison_MAX = 2,
};

enum class EPathExistanceQueryType : uint8
{
	NavmeshRaycast2D               = 0,
	HierarchicalQuery              = 1,
	RegularPathFinding             = 2,
	EPathExistanceQueryType_MAX    = 3,
};

enum class EEQSNormalizationType : uint8
{
	Absolute                       = 0,
	RelativeToScores               = 1,
	EEQSNormalizationType_MAX      = 2,
};

enum class EEnvQueryHightlightMode : uint8
{
	All                            = 0,
	Best5Pct                       = 1,
	Best25Pct                      = 2,
	EEnvQueryHightlightMode_MAX    = 3,
};

enum class EPointOnCircleSpacingMethod : uint8
{
	BySpaceBetween                 = 0,
	ByNumberOfPoints               = 1,
	EPointOnCircleSpacingMethod_MAX = 2,
};

enum class EEnvTestDistance : uint8
{
	Distance3D                     = 0,
	Distance2D                     = 1,
	DistanceZ                      = 2,
	DistanceAbsoluteZ              = 3,
	EEnvTestDistance_MAX           = 4,
};

enum class EEnvTestDot : uint8
{
	Dot3D                          = 0,
	Dot2D                          = 1,
	EEnvTestDot_MAX                = 2,
};

enum class EEnvTestPathfinding : uint8
{
	PathExist                      = 0,
	PathCost                       = 1,
	PathLength                     = 2,
	EEnvTestPathfinding_MAX        = 3,
};

enum class EPathFollowingStatus : uint8
{
	Idle                           = 0,
	Waiting                        = 1,
	Paused                         = 2,
	Moving                         = 3,
	EPathFollowingStatus_MAX       = 4,
};

enum class EPathFollowingAction : uint8
{
	Error                          = 0,
	NoMove                         = 1,
	DirectMove                     = 2,
	PartialPath                    = 3,
	PathToGoal                     = 4,
	EPathFollowingAction_MAX       = 5,
};

enum class EPathFollowingRequestResult : uint8
{
	Failed                         = 0,
	AlreadyAtGoal                  = 1,
	RequestSuccessful              = 2,
	EPathFollowingRequestResult_MAX = 3,
};

enum class EAISenseNotifyType : uint8
{
	OnEveryPerception              = 0,
	OnPerceptionChange             = 1,
	EAISenseNotifyType_MAX         = 2,
};

enum class EAITaskPriority : uint8
{
	Lowest                         = 0,
	Low                            = 64,
	AutonomousAI                   = 127,
	High                           = 192,
	Ultimate                       = 254,
	EAITaskPriority_MAX            = 255,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// ScriptStruct AIModule.AIStimulus
struct FAIStimulus
{
public:
	float                                        Age;                                               // 0x0(0x4)(None)
	float                                        ExpirationAge;                                     // 0x4(0x4)(None)
	float                                        Strength;                                          // 0x8(0x4)(None)
	uint8                                        Pad_2A13[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StimulusLocation;                                  // 0x10(0x18)(None)
	struct FVector                               ReceiverLocation;                                  // 0x28(0x18)(None)
	class FName                                  Tag;                                               // 0x40(0x8)(None)
	uint8                                        Pad_2A14[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        BitPad_208 : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bSuccessfullySensed : 1;                           // Mask: 0x2, PropSize: 0x10x54(0x1)(None)
	uint8                                        Pad_2A15[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct AIModule.ActorPerceptionUpdateInfo
struct FActorPerceptionUpdateInfo
{
public:
	int32                                        TargetId;                                          // 0x0(0x4)(None)
	TWeakObjectPtr<class AActor>                 Target;                                            // 0x4(0x8)(None)
	uint8                                        Pad_2A16[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIStimulus                           Stimulus;                                          // 0x10(0x58)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct AIModule.AIRequestID
struct FAIRequestID
{
public:
	uint32                                       RequestID;                                         // 0x0(0x4)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AIModule.AIMoveRequest
struct FAIMoveRequest
{
public:
	TWeakObjectPtr<class AActor>                 GoalActor;                                         // 0x0(0x8)(None)
	uint8                                        Pad_2A21[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AIModule.IntervalCountdown
struct FIntervalCountdown
{
public:
	float                                        Interval;                                          // 0x0(0x4)(None)
	uint8                                        Pad_2A22[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AIModule.EnvNamedValue
struct FEnvNamedValue
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(None)
	enum class EAIParamType                      ParamType;                                         // 0x8(0x1)(None)
	uint8                                        Pad_2A25[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0xC(0x4)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AIModule.EnvDirection
struct FEnvDirection
{
public:
	class UClass*                                LineFrom;                                          // 0x0(0x8)(ZeroConstructor)
	class UClass*                                LineTo;                                            // 0x8(0x8)(ZeroConstructor)
	class UClass*                                Rotation;                                          // 0x10(0x8)(None)
	enum class EEnvDirection                     DirMode;                                           // 0x18(0x1)(None)
	uint8                                        Pad_2A28[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AIModule.EnvTraceData
struct FEnvTraceData
{
public:
	int32                                        VersionNum;                                        // 0x0(0x4)(None)
	uint8                                        Pad_2A2B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                NavigationFilter;                                  // 0x8(0x8)(None)
	float                                        ProjectDown;                                       // 0x10(0x4)(None)
	float                                        ProjectUp;                                         // 0x14(0x4)(None)
	float                                        ExtentX;                                           // 0x18(0x4)(None)
	float                                        ExtentY;                                           // 0x1C(0x4)(None)
	float                                        ExtentZ;                                           // 0x20(0x4)(None)
	float                                        PostProjectionVerticalOffset;                      // 0x24(0x4)(None)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x28(0x1)(None)
	enum class ECollisionChannel                 SerializedChannel;                                 // 0x29(0x1)(None)
	uint8                                        Pad_2A2C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TraceProfileName;                                  // 0x2C(0x8)(None)
	enum class EEnvTraceShape                    TraceShape;                                        // 0x34(0x1)(None)
	enum class EEnvQueryTrace                    TraceMode;                                         // 0x35(0x1)(None)
	uint8                                        Pad_2A2D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bTraceComplex : 1;                                 // Mask: 0x1, PropSize: 0x10x38(0x1)(None)
	uint8                                        bOnlyBlockingHits : 1;                             // Mask: 0x2, PropSize: 0x10x38(0x1)(None)
	uint8                                        bCanTraceOnNavMesh : 1;                            // Mask: 0x4, PropSize: 0x10x38(0x1)(None)
	uint8                                        bCanTraceOnGeometry : 1;                           // Mask: 0x8, PropSize: 0x10x38(0x1)(None)
	uint8                                        bCanDisableTrace : 1;                              // Mask: 0x10, PropSize: 0x10x38(0x1)(None)
	uint8                                        bCanProjectDown : 1;                               // Mask: 0x20, PropSize: 0x10x38(0x1)(None)
	uint8                                        Pad_2A2E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AIModule.EnvOverlapData
struct FEnvOverlapData
{
public:
	float                                        ExtentX;                                           // 0x0(0x4)(None)
	float                                        ExtentY;                                           // 0x4(0x4)(None)
	float                                        ExtentZ;                                           // 0x8(0x4)(None)
	uint8                                        Pad_2A2F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ShapeOffset;                                       // 0x10(0x18)(None)
	enum class ECollisionChannel                 OverlapChannel;                                    // 0x28(0x1)(None)
	enum class EEnvOverlapShape                  OverlapShape;                                      // 0x29(0x1)(None)
	uint8                                        Pad_2A30[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bOnlyBlockingHits : 1;                             // Mask: 0x1, PropSize: 0x10x2C(0x1)(None)
	uint8                                        bOverlapComplex : 1;                               // Mask: 0x2, PropSize: 0x10x2C(0x1)(None)
	uint8                                        bSkipOverlapQuerier : 1;                           // Mask: 0x4, PropSize: 0x10x2C(0x1)(None)
	uint8                                        Pad_2A31[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AIModule.EnvQueryResult
struct FEnvQueryResult
{
public:
	uint8                                        Pad_2A32[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ItemType;                                          // 0x10(0x8)(None)
	uint8                                        Pad_2A33[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OptionIndex;                                       // 0x2C(0x4)(None)
	int32                                        QueryID;                                           // 0x30(0x4)(None)
	uint8                                        Pad_2A34[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AIModule.BlackboardKeySelector
struct FBlackboardKeySelector
{
public:
	TArray<class UBlackboardKeyType*>            AllowedTypes;                                      // 0x0(0x10)(ZeroConstructor)
	class FName                                  SelectedKeyName;                                   // 0x10(0x8)(None)
	class UClass*                                SelectedKeyType;                                   // 0x18(0x8)(None)
	int32                                        SelectedKeyID;                                     // 0x20(0x4)(None)
	uint8                                        bNoneIsAllowedValue : 1;                           // Mask: 0x1, PropSize: 0x10x24(0x1)(None)
	uint8                                        Pad_2A35[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct AIModule.AIDynamicParam
struct FAIDynamicParam
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(None)
	enum class EAIParamType                      ParamType;                                         // 0x8(0x1)(None)
	uint8                                        Pad_2A36[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0xC(0x4)(None)
	struct FBlackboardKeySelector                BBKey;                                             // 0x10(0x28)(None)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
struct FEQSParametrizedQueryExecutionRequest
{
public:
	class UEnvQuery*                             QueryTemplate;                                     // 0x0(0x8)(ZeroConstructor)
	TArray<struct FAIDynamicParam>               QueryConfig;                                       // 0x8(0x10)(ZeroConstructor, SimpleDisplay, AdvancedDisplay, BlueprintCallable, BlueprintAuthorityOnly, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                EQSQueryBlackboardKey;                             // 0x18(0x28)(None)
	enum class EEnvQueryRunMode                  RunMode;                                           // 0x40(0x1)(None)
	uint8                                        Pad_2A37[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bUseBBKeyForQueryTemplate : 1;                     // Mask: 0x1, PropSize: 0x10x44(0x1)(None)
	uint8                                        Pad_2A38[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct AIModule.GenericTeamId
struct FGenericTeamId
{
public:
	uint8                                        TeamID;                                            // 0x0(0x1)(None)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct AIModule.SimpleIndexedHandleBase
struct FSimpleIndexedHandleBase
{
public:
	uint8                                        Pad_2A39[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x8 - 0x4)
// ScriptStruct AIModule.IndexedHandleBase
struct FIndexedHandleBase : public FSimpleIndexedHandleBase
{
public:
	uint8                                        Pad_2A3A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct AIModule.CompactIndexedHandleBase
struct FCompactIndexedHandleBase
{
public:
	uint8                                        Pad_2A3B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct AIModule.SequentialIDBase
struct FSequentialIDBase
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AIModule.PawnActionEvent
struct FPawnActionEvent
{
public:
	class UPawnAction*                           Action;                                            // 0x0(0x8)(None)
	uint8                                        Pad_2A3C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AIModule.PawnActionStack
struct FPawnActionStack
{
public:
	class UPawnAction*                           TopAction;                                         // 0x0(0x8)(None)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AIModule.BehaviorTreeTemplateInfo
struct FBehaviorTreeTemplateInfo
{
public:
	class UBehaviorTree*                         Asset;                                             // 0x0(0x8)(ZeroConstructor)
	class UBTCompositeNode*                      Template;                                          // 0x8(0x8)(None)
	uint8                                        Pad_2A3D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AIModule.BlackboardEntry
struct FBlackboardEntry
{
public:
	class FName                                  EntryName;                                         // 0x0(0x8)(None)
	class UBlackboardKeyType*                    KeyType;                                           // 0x8(0x8)(None)
	uint8                                        bInstanceSynced : 1;                               // Mask: 0x1, PropSize: 0x10x10(0x1)(None)
	uint8                                        Pad_2A3E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct AIModule.BTDecoratorLogic
struct FBTDecoratorLogic
{
public:
	enum class EBTDecoratorLogic                 Operation;                                         // 0x0(0x1)(None)
	uint8                                        Pad_2A3F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       Number;                                            // 0x2(0x2)(None)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AIModule.BTCompositeChild
struct FBTCompositeChild
{
public:
	class UBTCompositeNode*                      ChildComposite;                                    // 0x0(0x8)(ZeroConstructor)
	class UBTTaskNode*                           ChildTask;                                         // 0x8(0x8)(ZeroConstructor)
	TArray<class UBTDecorator*>                  Decorators;                                        // 0x10(0x10)(ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, PersistentInstance, NativeAccessSpecifierProtected)
	TArray<struct FBTDecoratorLogic>             DecoratorOps;                                      // 0x20(0x10)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AIModule.AIDataProviderValue
struct FAIDataProviderValue
{
public:
	uint8                                        Pad_2A40[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAIDataProvider*                       DataBinding;                                       // 0x10(0x8)(None)
	class FName                                  DataField;                                         // 0x18(0x8)(None)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct AIModule.AIDataProviderTypedValue
struct FAIDataProviderTypedValue : public FAIDataProviderValue
{
public:
	class UClass*                                PropertyType;                                      // 0x20(0x8)(ZeroConstructor)
	uint8                                        Pad_2A41[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x30 - 0x20)
// ScriptStruct AIModule.AIDataProviderStructValue
struct FAIDataProviderStructValue : public FAIDataProviderValue
{
public:
	uint8                                        Pad_2A42[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x38 - 0x30)
// ScriptStruct AIModule.AIDataProviderIntValue
struct FAIDataProviderIntValue : public FAIDataProviderTypedValue
{
public:
	int32                                        DefaultValue;                                      // 0x30(0x4)(None)
	uint8                                        Pad_2A43[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x38 - 0x30)
// ScriptStruct AIModule.AIDataProviderFloatValue
struct FAIDataProviderFloatValue : public FAIDataProviderTypedValue
{
public:
	float                                        DefaultValue;                                      // 0x30(0x4)(None)
	uint8                                        Pad_2A44[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x38 - 0x30)
// ScriptStruct AIModule.AIDataProviderBoolValue
struct FAIDataProviderBoolValue : public FAIDataProviderTypedValue
{
public:
	bool                                         DefaultValue;                                      // 0x30(0x1)(None)
	uint8                                        Pad_2A45[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AIModule.EnvQueryManagerConfig
struct FEnvQueryManagerConfig
{
public:
	float                                        MaxAllowedTestingTime;                             // 0x0(0x4)(None)
	bool                                         bTestQueriesUsingBreadth;                          // 0x4(0x1)(None)
	uint8                                        Pad_2A46[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QueryCountWarningThreshold;                        // 0x8(0x4)(None)
	uint8                                        Pad_2A47[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       QueryCountWarningInterval;                         // 0x10(0x8)(None)
	double                                       ExecutionTimeWarningSeconds;                       // 0x18(0x8)(None)
	double                                       HandlingResultTimeWarningSeconds;                  // 0x20(0x8)(None)
	double                                       GenerationTimeWarningSeconds;                      // 0x28(0x8)(None)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct AIModule.EnvQueryRequest
struct FEnvQueryRequest
{
public:
	class UEnvQuery*                             QueryTemplate;                                     // 0x0(0x8)(ZeroConstructor)
	class UObject*                               Owner;                                             // 0x8(0x8)(ZeroConstructor)
	class UWorld*                                World;                                             // 0x10(0x8)(None)
	uint8                                        Pad_2A48[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x180 (0x180 - 0x0)
// ScriptStruct AIModule.EnvQueryInstanceCache
struct FEnvQueryInstanceCache
{
public:
	class UEnvQuery*                             Template;                                          // 0x0(0x8)(None)
	uint8                                        Pad_2A49[0x178];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct AIModule.CrowdAvoidanceConfig
struct FCrowdAvoidanceConfig
{
public:
	float                                        VelocityBias;                                      // 0x0(0x4)(None)
	float                                        DesiredVelocityWeight;                             // 0x4(0x4)(None)
	float                                        CurrentVelocityWeight;                             // 0x8(0x4)(None)
	float                                        SideBiasWeight;                                    // 0xC(0x4)(None)
	float                                        ImpactTimeWeight;                                  // 0x10(0x4)(None)
	float                                        ImpactTimeRange;                                   // 0x14(0x4)(None)
	uint8                                        CustomPatternIdx;                                  // 0x18(0x1)(None)
	uint8                                        AdaptiveDivisions;                                 // 0x19(0x1)(None)
	uint8                                        AdaptiveRings;                                     // 0x1A(0x1)(None)
	uint8                                        AdaptiveDepth;                                     // 0x1B(0x1)(None)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
struct FCrowdAvoidanceSamplingPattern
{
public:
	TArray<float>                                Angles;                                            // 0x0(0x10)(AutoWeak, ContainsInstancedReference, SimpleDisplay, AdvancedDisplay, BlueprintAuthorityOnly, TextExportTransient, PersistentInstance, NativeAccessSpecifierProtected)
	TArray<float>                                Radii;                                             // 0x10(0x10)(None)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct AIModule.RecastGraphWrapper
struct FRecastGraphWrapper
{
public:
	class ARecastNavMesh*                        RecastNavMeshActor;                                // 0x0(0x8)(None)
	uint8                                        Pad_2A4A[0xB0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
struct FActorPerceptionBlueprintInfo
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(None)
	TArray<struct FAIStimulus>                   LastSensedStimuli;                                 // 0x8(0x10)(None)
	uint8                                        bIsHostile : 1;                                    // Mask: 0x1, PropSize: 0x10x18(0x1)(None)
	uint8                                        Pad_2A4B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct AIModule.AISenseAffiliationFilter
struct FAISenseAffiliationFilter
{
public:
	uint8                                        bDetectEnemies : 1;                                // Mask: 0x1, PropSize: 0x10x0(0x1)(None)
	uint8                                        bDetectNeutrals : 1;                               // Mask: 0x2, PropSize: 0x10x0(0x1)(None)
	uint8                                        bDetectFriendlies : 1;                             // Mask: 0x4, PropSize: 0x10x0(0x1)(None)
	uint8                                        Pad_2A4C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AIModule.AIDamageEvent
struct FAIDamageEvent
{
public:
	float                                        Amount;                                            // 0x0(0x4)(None)
	uint8                                        Pad_2A4D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x8(0x18)(None)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(None)
	class AActor*                                DamagedActor;                                      // 0x38(0x8)(ZeroConstructor)
	class AActor*                                Instigator;                                        // 0x40(0x8)(None)
	class FName                                  Tag;                                               // 0x48(0x8)(None)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AIModule.AINoiseEvent
struct FAINoiseEvent
{
public:
	uint8                                        Pad_2A4E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               NoiseLocation;                                     // 0x8(0x18)(None)
	float                                        Loudness;                                          // 0x20(0x4)(None)
	float                                        MaxRange;                                          // 0x24(0x4)(None)
	class AActor*                                Instigator;                                        // 0x28(0x8)(None)
	class FName                                  Tag;                                               // 0x30(0x8)(None)
	uint8                                        Pad_2A4F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AIModule.AIPredictionEvent
struct FAIPredictionEvent
{
public:
	class AActor*                                Requestor;                                         // 0x0(0x8)(ZeroConstructor)
	class AActor*                                PredictedActor;                                    // 0x8(0x8)(None)
	uint8                                        Pad_2A51[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AIModule.AISightEvent
struct FAISightEvent
{
public:
	uint8                                        Pad_2ACB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SeenActor;                                         // 0x8(0x8)(ZeroConstructor)
	class AActor*                                Observer;                                          // 0x10(0x8)(None)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AIModule.AITeamStimulusEvent
struct FAITeamStimulusEvent
{
public:
	uint8                                        Pad_2ACC[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Broadcaster;                                       // 0x40(0x8)(ZeroConstructor)
	class AActor*                                Enemy;                                             // 0x48(0x8)(None)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AIModule.AITouchEvent
struct FAITouchEvent
{
public:
	uint8                                        Pad_2ACD[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TouchReceiver;                                     // 0x18(0x8)(ZeroConstructor)
	class AActor*                                OtherActor;                                        // 0x20(0x8)(None)
};

}


